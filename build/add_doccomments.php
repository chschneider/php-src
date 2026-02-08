#!/usr/bin/env php
<?php declare(strict_types=1);

$options = [
	'doc-path:'     => 'd:',
	'help'          => 'h' ,
	'dry-run'       => 'n' ,
	'report-errors' => 'r' ,
	'verbose'       => 'v' ,
];

$opts = getopt(implode('', $options), array_keys($options));
foreach ($options as $long => $short)
	$opts[trim($long, ':')] ??= $opts[trim($short, ':')] ?? null;

if (isset($opts['help'])) {
	fputs(STDERR, <<<EOF
		Usage: add_doccomments.php [OPTIONS]

		Extract function documentation from doc-en reference and add
		them as @genstubs-expose-comment-blocks to the php stub files

		Options:
		  -d, --doc-path=PATH  Path to doc-en repository checkout
		  -h, --help           Show usage
		  -n, --dry-run        Do not write any files
		  -r, --report-errors  Show parameters documentation errors
		  -v, --verbose        Ouput progress reports

		EOF
	);
	exit(1);
}

$doc_path = $opts['doc-path'] ?? '../doc-en';

#
# Parse DocBook documentation for internal functions and extract parameter types and descriptions
#

# Read custom entities
$entities = [];
foreach (glob("{$doc_path}/language-*.ent") as $entityfile) {
	preg_match_all("/<!ENTITY\s+(\S+)\s+'(.*?)'>/s", file_get_contents($entityfile), $ent);
	$entities += array_combine(array_map(fn($v) => '/&' . preg_quote($v) . ';/', $ent[1]), $ent[2]);
}

# XML Helper functions
function text($element, $selector) { return trim($element->querySelector($selector)?->textContent ?? ''); }
function type($element, $selector = '') {
	return implode('|', array_map(
		fn($v) => trim($v->textContent),
		iterator_to_array($element->querySelectorAll($selector ? "$selector > type:not([class]), $selector > type[class] type:not([class])" : 'type:not([class])')),
	));
}

# Process function documentation files
foreach (glob("$doc_path/reference/*/functions/*.xml") as $file) {
	$xml = file_get_contents($file);
	$xml = preg_replace(array_keys($entities), array_values($entities), $xml);	# Replace known custom entities
	$xml = preg_replace_callback('/&([\w.-]+);/', fn($m) => in_array($m[1], ['amp', 'lt', 'gt', 'quot']) ? $m[0] : $m[1], $xml);	# Replace unknown entities with name of entity
	$dom = Dom\XMLDocument::createFromString($xml);

	$params = [];
	foreach ($dom->querySelectorAll('refsect1[role="parameters"] > para > variablelist > varlistentry') as $var)
		$params[text($var, 'term parameter')]['description'] = preg_replace('/\s*\n+\s*/', '\n', text($var, 'listitem para:first-child'));

	foreach ($dom->querySelectorAll('refsect1[role="description"] methodsynopsis methodparam') as $param) {
		if (!empty($params[$name = text($param, 'parameter')])) {
			$params[$name] += array_filter([
			'type'    => /*($param->attributes['choice']?->textContent == 'opt' ? '?' : '') .*/ type($param),
			'default' => text($param, 'initializer'),
			], strlen(...));
		}
	}

	$functionname = $dom->querySelector('refnamediv refname')->textContent;
	if (array_all($params, fn($v) => !empty($v['type']))) {
		$functions[$functionname] = array_filter([
		'description' => text($dom, 'refnamediv refpurpose'),
		'params'      => $params,
		'returntype'  => type($dom, 'refsect1[role="description"] methodsynopsis'),
		]);
	} else if (isset($opts['report-errors'])) {
		foreach ($params as $param => $info)
			echo "Could not find " . (isset($info['type']) ? 'type' : 'description') . " for $functionname \$$param in $file\n";
	}
}

#
# Add DocComments to stub files for gen_stub.php
#
foreach (glob('*/*/*.stub.php') as $stubfile)
{
	$in = array_map(trim(...), $out = file($stubfile, FILE_IGNORE_NEW_LINES));	# Remove all leading and trailing newlines and spaces
	$changed = $added = 0;
	foreach (preg_grep('/^ ?function /', $out) as $line => $text) {	# Use out as in has leading spaces stripped, some files have single space before function
		$fn = $functions[preg_replace('/^ ?function (\w+).*/', '$1', $text)] ?? [];

		if (!empty($fn['description'])) {
			# Check if we already have a doccomment we need to replace
			$line--;
			$replace = 0;
			while (str_ends_with($in[$end = $line], '*/')) {
				while ($in[$line] && !str_starts_with($in[$line], '/**'))
					$line--;

				if (str_starts_with($in[$line--], '/** @genstubs-expose-comment-block')) {
					$replace = $end - $line;
					break;
				}
			}

			$doccomment = array_values(array_filter(preg_replace('/%\W/', '%$0', [
				'/** @genstubs-expose-comment-block',
				...explode("\n", preg_replace('/^\s*/m', ' * ', $fn['description'])),
				...array_map(
					fn($param, $pinfo) => $param && ($description = $pinfo['description'] ?? '') ? preg_replace(['!\\\n!', '!<\?php|\?>|/\**|\*/!'], [' ', '', '', ''], " * @param {$pinfo['type']} \$$param $description") : null,
					array_keys($fn['params'] ?? []),
					$fn['params'] ?? [],
				),
				isset($fn['returntype']) ? " * @return {$fn['returntype']}" : '',
				' */',
			])));
			$replaced = array_splice($out, $line + 1 + $added, $replace, $doccomment);
			$added += count($doccomment) - $replace;
			if ($replaced != $doccomment)
				$changed++;
		}
	}

	if ($changed) {
		if (isset($opts['verbose']))
			echo "$changed changes in file $stubfile\n";

		if (!isset($opts['dry-run']))
			file_put_contents($stubfile, implode("\n", $out) . "\n");
	}
}
