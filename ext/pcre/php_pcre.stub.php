<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PREG_PATTERN_ORDER
 */
const PREG_PATTERN_ORDER = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_SET_ORDER
 */
const PREG_SET_ORDER = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_OFFSET_CAPTURE
 */
const PREG_OFFSET_CAPTURE = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_UNMATCHED_AS_NULL
 */
const PREG_UNMATCHED_AS_NULL = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_SPLIT_NO_EMPTY
 */
const PREG_SPLIT_NO_EMPTY = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_SPLIT_DELIM_CAPTURE
 */
const PREG_SPLIT_DELIM_CAPTURE = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_SPLIT_OFFSET_CAPTURE
 */
const PREG_SPLIT_OFFSET_CAPTURE = UNKNOWN;
/**
 * @var int
 * @cvalue PREG_GREP_INVERT
 */
const PREG_GREP_INVERT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_NO_ERROR
 */
const PREG_NO_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_INTERNAL_ERROR
 */
const PREG_INTERNAL_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_BACKTRACK_LIMIT_ERROR
 */
const PREG_BACKTRACK_LIMIT_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_RECURSION_LIMIT_ERROR
 */
const PREG_RECURSION_LIMIT_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_BAD_UTF8_ERROR
 */
const PREG_BAD_UTF8_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_BAD_UTF8_OFFSET_ERROR
 */
const PREG_BAD_UTF8_OFFSET_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PCRE_JIT_STACKLIMIT_ERROR
 */
const PREG_JIT_STACKLIMIT_ERROR = UNKNOWN;
/**
 * @var string
 * @cvalue php_pcre_version
 */
const PCRE_VERSION = UNKNOWN;
/**
 * @var int
 * @cvalue PCRE2_MAJOR
 */
const PCRE_VERSION_MAJOR = UNKNOWN;
/**
 * @var int
 * @cvalue PCRE2_MINOR
 */
const PCRE_VERSION_MINOR = UNKNOWN;
/**
 * @var bool
 * @cvalue PHP_PCRE_JIT_SUPPORT
 */
const PCRE_JIT_SUPPORT = UNKNOWN;

/** @genstubs-expose-comment-block
 * Perform a regular expression match
 * @param string $pattern The pattern to search for, as a string.
 * @param string $subject The input string.
 * @param array $matches If matches is provided, then it is filled with the results of search. $matches[0] will contain the text that matched the full pattern, $matches[1] will have the text that matched the first captured parenthesized subpattern, and so on.
 * @param int $flags flags can be a combination of the following flags: PREG_OFFSET_CAPTURE If this flag is passed, for every occurring match the appendant string offset (in bytes) will also be returned. Note that this changes the value of matches into an array where every element is an array consisting of the matched string at offset 0 and its string offset into subject at offset 1.  preg_match('(foo)(bar)(baz)', 'foobarbaz', $matches, PREG_OFFSET_CAPTURE); print_r($matches);  The above example will output: Array ( [0] => Array ( [0] => foobarbaz [1] => 0 ) [1] => Array ( [0] => foo [1] => 0 ) [2] => Array ( [0] => bar [1] => 3 ) [3] => Array ( [0] => baz [1] => 6 ) ) PREG_UNMATCHED_AS_NULL If this flag is passed, unmatched subpatterns are reported as null; otherwise they are reported as an empty string.  preg_match('(a)(b)*(c)', 'ac', $matches); var_dump($matches); preg_match('(a)(b)*(c)', 'ac', $matches, PREG_UNMATCHED_AS_NULL); var_dump($matches);  The above example will output: array(4) { [0]=> string(2) "ac" [1]=> string(1) "a" [2]=> string(0) "" [3]=> string(1) "c" } array(4) { [0]=> string(2) "ac" [1]=> string(1) "a" [2]=> NULL [3]=> string(1) "c" }
 * @param int $offset Normally, the search starts from the beginning of the subject string. The optional parameter offset can be used to specify the alternate place from which to start the search (in bytes).
 * @return int|false
 */
/**
 * @param array $matches
 * @frameless-function {"arity": 2}
 */
function preg_match(string $pattern, string $subject, &$matches = null, int $flags = 0, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Perform a global regular expression match
 * @param string $pattern The pattern to search for, as a string.
 * @param string $subject The input string.
 * @param array $matches Array of all matches in multi-dimensional array ordered according to flags.
 * @param int $flags Orders results so that $matches[0] is an array of full pattern matches, $matches[1] is an array of strings matched by the first parenthesized subpattern, and so on.
 * @param int $offset Normally, the search starts from the beginning of the subject string. The optional parameter offset can be used to specify the alternate place from which to start the search (in bytes).
 * @return int|false
 */
/** @param array $matches */
function preg_match_all(string $pattern, string $subject, &$matches = null, int $flags = 0, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Perform a regular expression search and replace
 * @param string|array $pattern The pattern to search for. It can be either a string or an array with strings.
 * @param string|array $replacement The string or an array with strings to replace. If this parameter is a string and the pattern parameter is an array, all patterns will be replaced by that string. If both pattern and replacement parameters are arrays, each pattern will be replaced by the replacement counterpart. If there are fewer elements in the replacement array than in the pattern array, any extra patterns will be replaced by an empty string.
 * @param string|array $subject The string or an array with strings to search and replace.
 * @param int $limit The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).
 * @param int $count If specified, this variable will be filled with the number of replacements done.
 * @return string|array|null
 */
/**
 * @param int $count
 * @return string|array<int|string, string>|null
 * @frameless-function {"arity": 3}
 */
function preg_replace(string|array $pattern, string|array $replacement, string|array $subject, int $limit = -1, &$count = null): string|array|null {}

/** @genstubs-expose-comment-block
 * Perform a regular expression search and replace
 * @return string|array|null
 */
/**
 * @param int $count
 * @return string|array<int|string, string>|null
 */
function preg_filter(string|array $pattern, string|array $replacement, string|array $subject, int $limit = -1, &$count = null): string|array|null {}

/** @genstubs-expose-comment-block
 * Perform a regular expression search and replace using a callback
 * @param string|array $pattern The pattern to search for. It can be either a string or an array with strings.
 * @param callable $callback A callback that will be called and passed an array of matched elements in the subject string. The callback should return the replacement string. This is the callback signature:
 * @param string|array $subject The string or an array with strings to search and replace.
 * @param int $limit The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).
 * @param int $count If specified, this variable will be filled with the number of replacements done.
 * @param int $flags flags can be a combination of the PREG_OFFSET_CAPTURE and PREG_UNMATCHED_AS_NULL flags, which influence the format of the matches array. See the description in preg_match for more details.
 * @return string|array|null
 */
/**
 * @param int $count
 * @return string|array<int|string, string>|null
 */
function preg_replace_callback(string|array $pattern, callable $callback, string|array $subject, int $limit = -1, &$count = null, int $flags = 0): string|array|null {}

/** @genstubs-expose-comment-block
 * Perform a regular expression search and replace using callbacks
 * @param array $pattern An associative array mapping patterns (keys) to callables (values).
 * @param string|array $subject The string or an array with strings to search and replace.
 * @param int $limit The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).
 * @param int $count If specified, this variable will be filled with the number of replacements done.
 * @param int $flags flags can be a combination of the PREG_OFFSET_CAPTURE and PREG_UNMATCHED_AS_NULL flags, which influence the format of the matches array. See the description in preg_match for more details.
 * @return string|array|null
 */
/** @param int $count */
function preg_replace_callback_array(array $pattern, string|array $subject, int $limit = -1, &$count = null, int $flags = 0): string|array|null {}

/** @genstubs-expose-comment-block
 * Split string by a regular expression
 * @param string $pattern The pattern to search for, as a string.
 * @param string $subject The input string.
 * @param int $limit If specified, then only substrings up to limit are returned with the rest of the string being placed in the last substring.  A limit of -1 or 0 means "no limit".
 * @param int $flags flags can be any combination of the following flags (combined with the | bitwise operator): PREG_SPLIT_NO_EMPTY If this flag is set, only non-empty pieces will be returned by preg_split. PREG_SPLIT_DELIM_CAPTURE If this flag is set, parenthesized expression in the delimiter pattern will be captured and returned as well. PREG_SPLIT_OFFSET_CAPTURE If this flag is set, for every occurring match the appendant string offset will also be returned. Note that this changes the return value in an array where every element is an array consisting of the matched string at offset 0 and its string offset into subject at offset 1.
 * @return array|false
 */
/**
 * @return array<int|string, string|array>|false
 * @refcount 1
 */
function preg_split(string $pattern, string $subject, int $limit = -1, int $flags = 0): array|false {}

/** @genstubs-expose-comment-block
 * Quote regular expression characters
 * @param string $str The input string.
 * @param string|null $delimiter If the optional delimiter is specified, it will also be escaped.  This is useful for escaping the delimiter that is required by the PCRE functions. The  is the most commonly used delimiter.
 * @return string
 */
/** @compile-time-eval */
function preg_quote(string $str, ?string $delimiter = null): string {}

/** @genstubs-expose-comment-block
 * Return array entries that match the pattern
 * @param string $pattern The pattern to search for, as a string.
 * @param array $array The input array.
 * @param int $flags If set to PREG_GREP_INVERT, this function returns the elements of the input array that do not match the given pattern.
 * @return array|false
 */
/** @refcount 1 */
function preg_grep(string $pattern, array $array, int $flags = 0): array|false {}

/** @genstubs-expose-comment-block
 * Returns the error code of the last PCRE regex execution
 * @return int
 */
function preg_last_error(): int {}

/** @genstubs-expose-comment-block
 * Returns the error message of the last PCRE regex execution
 * @return string
 */
function preg_last_error_msg(): string {}
