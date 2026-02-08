/* This is a generated file, edit php_pcre.stub.php instead.
 * Stub hash: 8cf19e0b9ea6a8b47e49d8e40e40b6b855398798 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_preg_match, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The pattern to search for, as a string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, subject, IS_STRING, 0, "The input string.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, matches, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "flags can be a combination of the following flags: PREG_OFFSET_CAPTURE If this flag is passed, for every occurring match the appendant string offset (in bytes) will also be returned. Note that this changes the value of matches into an array where every element is an array consisting of the matched string at offset 0 and its string offset into subject at offset 1.  preg_match('(foo)(bar)(baz)', 'foobarbaz', $matches, PREG_OFFSET_CAPTURE); print_r($matches);  The above example will output: Array ( [0] => Array ( [0] => foobarbaz [1] => 0 ) [1] => Array ( [0] => foo [1] => 0 ) [2] => Array ( [0] => bar [1] => 3 ) [3] => Array ( [0] => baz [1] => 6 ) ) PREG_UNMATCHED_AS_NULL If this flag is passed, unmatched subpatterns are reported as null; otherwise they are reported as an empty string.  preg_match('(a)(b)*(c)', 'ac', $matches); var_dump($matches); preg_match('(a)(b)*(c)', 'ac', $matches, PREG_UNMATCHED_AS_NULL); var_dump($matches);  The above example will output: array(4) { [0]=> string(2) \"ac\" [1]=> string(1) \"a\" [2]=> string(0) \"\" [3]=> string(1) \"c\" } array(4) { [0]=> string(2) \"ac\" [1]=> string(1) \"a\" [2]=> NULL [3]=> string(1) \"c\" }")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "Normally, the search starts from the beginning of the subject string. The optional parameter offset can be used to specify the alternate place from which to start the search (in bytes).")
ZEND_END_ARG_INFO()

#define arginfo_preg_match_all arginfo_preg_match

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_preg_replace, 0, 3, MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_NULL)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, pattern, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The pattern to search for. It can be either a string or an array with strings.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, replacement, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The string or an array with strings to replace. If this parameter is a string and the pattern parameter is an array, all patterns will be replaced by that string. If both pattern and replacement parameters are arrays, each pattern will be replaced by the replacement counterpart. If there are fewer elements in the replacement array than in the pattern array, any extra patterns will be replaced by an empty string.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, subject, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The string or an array with strings to search and replace.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "-1", "The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, count, "null")
ZEND_END_ARG_INFO()

#define arginfo_preg_filter arginfo_preg_replace

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_preg_replace_callback, 0, 3, MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_NULL)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, pattern, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The pattern to search for. It can be either a string or an array with strings.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "A callback that will be called and passed an array of matched elements in the subject string. The callback should return the replacement string. This is the callback signature:")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, subject, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The string or an array with strings to search and replace.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "-1", "The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, count, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "flags can be a combination of the PREG_OFFSET_CAPTURE and PREG_UNMATCHED_AS_NULL flags, which influence the format of the matches array. See the description in preg_match for more details.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_preg_replace_callback_array, 0, 2, MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_ARRAY, 0, "An associative array mapping patterns (keys) to callables (values).")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, subject, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The string or an array with strings to search and replace.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "-1", "The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, count, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "flags can be a combination of the PREG_OFFSET_CAPTURE and PREG_UNMATCHED_AS_NULL flags, which influence the format of the matches array. See the description in preg_match for more details.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_preg_split, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The pattern to search for, as a string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, subject, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "-1", "If specified, then only substrings up to limit are returned with the rest of the string being placed in the last substring.  A limit of -1 or 0 means \"no limit\".")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "flags can be any combination of the following flags (combined with the | bitwise operator): PREG_SPLIT_NO_EMPTY If this flag is set, only non-empty pieces will be returned by preg_split. PREG_SPLIT_DELIM_CAPTURE If this flag is set, parenthesized expression in the delimiter pattern will be captured and returned as well. PREG_SPLIT_OFFSET_CAPTURE If this flag is set, for every occurring match the appendant string offset will also be returned. Note that this changes the return value in an array where every element is an array consisting of the matched string at offset 0 and its string offset into subject at offset 1.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_preg_quote, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, str, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, delimiter, IS_STRING, 1, "null", "If the optional delimiter is specified, it will also be escaped.  This is useful for escaping the delimiter that is required by the PCRE functions. The  is the most commonly used delimiter.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_preg_grep, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The pattern to search for, as a string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "If set to PREG_GREP_INVERT, this function returns the elements of the input array that do not match the given pattern.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_preg_last_error, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_preg_last_error_msg, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()


ZEND_FRAMELESS_FUNCTION(preg_match, 2);
static const zend_frameless_function_info frameless_function_infos_preg_match[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(preg_match, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(preg_replace, 3);
static const zend_frameless_function_info frameless_function_infos_preg_replace[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(preg_replace, 3), 3 },
	{ 0 },
};

ZEND_FUNCTION(preg_match);
ZEND_FUNCTION(preg_match_all);
ZEND_FUNCTION(preg_replace);
ZEND_FUNCTION(preg_filter);
ZEND_FUNCTION(preg_replace_callback);
ZEND_FUNCTION(preg_replace_callback_array);
ZEND_FUNCTION(preg_split);
ZEND_FUNCTION(preg_quote);
ZEND_FUNCTION(preg_grep);
ZEND_FUNCTION(preg_last_error);
ZEND_FUNCTION(preg_last_error_msg);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("preg_match", zif_preg_match, arginfo_preg_match, 0, frameless_function_infos_preg_match, "/**\n * Perform a regular expression match\n * @param string $pattern The pattern to search for, as a string.\n * @param string $subject The input string.\n * @param array $matches If matches is provided, then it is filled with the results of search. $matches[0] will contain the text that matched the full pattern, $matches[1] will have the text that matched the first captured parenthesized subpattern, and so on.\n * @param int $flags flags can be a combination of the following flags: PREG_OFFSET_CAPTURE If this flag is passed, for every occurring match the appendant string offset (in bytes) will also be returned. Note that this changes the value of matches into an array where every element is an array consisting of the matched string at offset 0 and its string offset into subject at offset 1.  preg_match(\'(foo)(bar)(baz)\', \'foobarbaz\', $matches, PREG_OFFSET_CAPTURE); print_r($matches);  The above example will output: Array ( [0] => Array ( [0] => foobarbaz [1] => 0 ) [1] => Array ( [0] => foo [1] => 0 ) [2] => Array ( [0] => bar [1] => 3 ) [3] => Array ( [0] => baz [1] => 6 ) ) PREG_UNMATCHED_AS_NULL If this flag is passed, unmatched subpatterns are reported as null; otherwise they are reported as an empty string.  preg_match(\'(a)(b)*(c)\', \'ac\', $matches); var_dump($matches); preg_match(\'(a)(b)*(c)\', \'ac\', $matches, PREG_UNMATCHED_AS_NULL); var_dump($matches);  The above example will output: array(4) { [0]=> string(2) \"ac\" [1]=> string(1) \"a\" [2]=> string(0) \"\" [3]=> string(1) \"c\" } array(4) { [0]=> string(2) \"ac\" [1]=> string(1) \"a\" [2]=> NULL [3]=> string(1) \"c\" }\n * @param int $offset Normally, the search starts from the beginning of the subject string. The optional parameter offset can be used to specify the alternate place from which to start the search (in bytes).\n * @return int|false\n */")
	ZEND_RAW_FENTRY("preg_match_all", zif_preg_match_all, arginfo_preg_match_all, 0, NULL, "/**\n * Perform a global regular expression match\n * @param string $pattern The pattern to search for, as a string.\n * @param string $subject The input string.\n * @param array $matches Array of all matches in multi-dimensional array ordered according to flags.\n * @param int $flags Orders results so that $matches[0] is an array of full pattern matches, $matches[1] is an array of strings matched by the first parenthesized subpattern, and so on.\n * @param int $offset Normally, the search starts from the beginning of the subject string. The optional parameter offset can be used to specify the alternate place from which to start the search (in bytes).\n * @return int|false\n */")
	ZEND_RAW_FENTRY("preg_replace", zif_preg_replace, arginfo_preg_replace, 0, frameless_function_infos_preg_replace, "/**\n * Perform a regular expression search and replace\n * @param string|array $pattern The pattern to search for. It can be either a string or an array with strings.\n * @param string|array $replacement The string or an array with strings to replace. If this parameter is a string and the pattern parameter is an array, all patterns will be replaced by that string. If both pattern and replacement parameters are arrays, each pattern will be replaced by the replacement counterpart. If there are fewer elements in the replacement array than in the pattern array, any extra patterns will be replaced by an empty string.\n * @param string|array $subject The string or an array with strings to search and replace.\n * @param int $limit The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).\n * @param int $count If specified, this variable will be filled with the number of replacements done.\n * @return string|array|null\n */")
	ZEND_RAW_FENTRY("preg_filter", zif_preg_filter, arginfo_preg_filter, 0, NULL, "/**\n * Perform a regular expression search and replace\n * @return string|array|null\n */")
	ZEND_RAW_FENTRY("preg_replace_callback", zif_preg_replace_callback, arginfo_preg_replace_callback, 0, NULL, "/**\n * Perform a regular expression search and replace using a callback\n * @param string|array $pattern The pattern to search for. It can be either a string or an array with strings.\n * @param callable $callback A callback that will be called and passed an array of matched elements in the subject string. The callback should return the replacement string. This is the callback signature:\n * @param string|array $subject The string or an array with strings to search and replace.\n * @param int $limit The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).\n * @param int $count If specified, this variable will be filled with the number of replacements done.\n * @param int $flags flags can be a combination of the PREG_OFFSET_CAPTURE and PREG_UNMATCHED_AS_NULL flags, which influence the format of the matches array. See the description in preg_match for more details.\n * @return string|array|null\n */")
	ZEND_RAW_FENTRY("preg_replace_callback_array", zif_preg_replace_callback_array, arginfo_preg_replace_callback_array, 0, NULL, "/**\n * Perform a regular expression search and replace using callbacks\n * @param array $pattern An associative array mapping patterns (keys) to callables (values).\n * @param string|array $subject The string or an array with strings to search and replace.\n * @param int $limit The maximum possible replacements for each pattern in each subject string. Defaults to -1 (no limit).\n * @param int $count If specified, this variable will be filled with the number of replacements done.\n * @param int $flags flags can be a combination of the PREG_OFFSET_CAPTURE and PREG_UNMATCHED_AS_NULL flags, which influence the format of the matches array. See the description in preg_match for more details.\n * @return string|array|null\n */")
	ZEND_RAW_FENTRY("preg_split", zif_preg_split, arginfo_preg_split, 0, NULL, "/**\n * Split string by a regular expression\n * @param string $pattern The pattern to search for, as a string.\n * @param string $subject The input string.\n * @param int $limit If specified, then only substrings up to limit are returned with the rest of the string being placed in the last substring.  A limit of -1 or 0 means \"no limit\".\n * @param int $flags flags can be any combination of the following flags (combined with the | bitwise operator): PREG_SPLIT_NO_EMPTY If this flag is set, only non-empty pieces will be returned by preg_split. PREG_SPLIT_DELIM_CAPTURE If this flag is set, parenthesized expression in the delimiter pattern will be captured and returned as well. PREG_SPLIT_OFFSET_CAPTURE If this flag is set, for every occurring match the appendant string offset will also be returned. Note that this changes the return value in an array where every element is an array consisting of the matched string at offset 0 and its string offset into subject at offset 1.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("preg_quote", zif_preg_quote, arginfo_preg_quote, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Quote regular expression characters\n * @param string $str The input string.\n * @param string|null $delimiter If the optional delimiter is specified, it will also be escaped.  This is useful for escaping the delimiter that is required by the PCRE functions. The  is the most commonly used delimiter.\n * @return string\n */")
	ZEND_RAW_FENTRY("preg_grep", zif_preg_grep, arginfo_preg_grep, 0, NULL, "/**\n * Return array entries that match the pattern\n * @param string $pattern The pattern to search for, as a string.\n * @param array $array The input array.\n * @param int $flags If set to PREG_GREP_INVERT, this function returns the elements of the input array that do not match the given pattern.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("preg_last_error", zif_preg_last_error, arginfo_preg_last_error, 0, NULL, "/**\n * Returns the error code of the last PCRE regex execution\n * @return int\n */")
	ZEND_RAW_FENTRY("preg_last_error_msg", zif_preg_last_error_msg, arginfo_preg_last_error_msg, 0, NULL, "/**\n * Returns the error message of the last PCRE regex execution\n * @return string\n */")
	ZEND_FE_END
};

static void register_php_pcre_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("PREG_PATTERN_ORDER", PREG_PATTERN_ORDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_SET_ORDER", PREG_SET_ORDER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_OFFSET_CAPTURE", PREG_OFFSET_CAPTURE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_UNMATCHED_AS_NULL", PREG_UNMATCHED_AS_NULL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_SPLIT_NO_EMPTY", PREG_SPLIT_NO_EMPTY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_SPLIT_DELIM_CAPTURE", PREG_SPLIT_DELIM_CAPTURE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_SPLIT_OFFSET_CAPTURE", PREG_SPLIT_OFFSET_CAPTURE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_GREP_INVERT", PREG_GREP_INVERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_NO_ERROR", PHP_PCRE_NO_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_INTERNAL_ERROR", PHP_PCRE_INTERNAL_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_BACKTRACK_LIMIT_ERROR", PHP_PCRE_BACKTRACK_LIMIT_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_RECURSION_LIMIT_ERROR", PHP_PCRE_RECURSION_LIMIT_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_BAD_UTF8_ERROR", PHP_PCRE_BAD_UTF8_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_BAD_UTF8_OFFSET_ERROR", PHP_PCRE_BAD_UTF8_OFFSET_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PREG_JIT_STACKLIMIT_ERROR", PHP_PCRE_JIT_STACKLIMIT_ERROR, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("PCRE_VERSION", php_pcre_version, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PCRE_VERSION_MAJOR", PCRE2_MAJOR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PCRE_VERSION_MINOR", PCRE2_MINOR, CONST_PERSISTENT);
	REGISTER_BOOL_CONSTANT("PCRE_JIT_SUPPORT", PHP_PCRE_JIT_SUPPORT, CONST_PERSISTENT);
}
