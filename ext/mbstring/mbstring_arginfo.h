/* This is a generated file, edit mbstring.stub.php instead.
 * Stub hash: ced34b8bdc6b98e3dfce5b8f526bf34ef972e412 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_language, 0, 0, MAY_BE_STRING|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, language, IS_STRING, 1, "null", "Used for encoding e-mail messages. The valid languages are listed in the following table. mb_send_mail uses this setting to encode e-mail.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_internal_encoding, 0, 0, MAY_BE_STRING|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "encoding is the character encoding name used for the HTTP input character encoding conversion, HTTP output character encoding conversion, and the default character encoding for string functions defined by the mbstring module. You should notice that the internal encoding is totally different from the one for multibyte regex.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_http_input, 0, 0, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, type, IS_STRING, 1, "null", "Input string specifies the input type. \"G\" for GET, \"P\" for POST, \"C\" for COOKIE, \"S\" for string, \"L\" for list, and \"I\" for the whole list (will return array). If type is omitted, it returns the last input type processed.")
ZEND_END_ARG_INFO()

#define arginfo_mb_http_output arginfo_mb_internal_encoding

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_detect_order, 0, 0, MAY_BE_ARRAY|MAY_BE_BOOL)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, encoding, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null", "encoding is an array or comma separated list of character encoding. See supported encodings.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_substitute_character, 0, 0, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_BOOL)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, substitute_character, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_NULL, "null", "Specify the Unicode value as an int, or as one of the following strings: \"none\": no output \"long\": Output character code value (Example: U+3000, JIS+7E7E) \"entity\": Output character entity (Example: &#x200;)")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_preferred_mime_name, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, encoding, IS_STRING, 0, "The encoding being checked.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_parse_str, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The URL encoded data.")
	ZEND_ARG_INFO(1, result)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_output_handler, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The contents of the output buffer.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, status, IS_LONG, 0, "The status of the output buffer.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_str_split, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to split into characters or chunks.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 0, "1", "If specified, each element of the returned array will be composed of multiple characters instead of a single character.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_strlen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being checked for length.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_strpos, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string from which to get the position of the first occurrence of needle.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The string to find in haystack. In contrast with strpos, numeric values are not applied as the ordinal value of a character.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The search offset. If it is not specified, 0 is used. A negative offset counts from the end of the string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

#define arginfo_mb_strrpos arginfo_mb_strpos

#define arginfo_mb_stripos arginfo_mb_strpos

#define arginfo_mb_strripos arginfo_mb_strpos

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_strstr, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string from which to get the first occurrence of needle")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The string to find in haystack")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, before_needle, _IS_BOOL, 0, "false", "Determines which portion of haystack this function returns. If set to true, it returns all of  haystack from the beginning to the first occurrence of needle (excluding needle). If set to false, it returns all of haystack from the first occurrence of needle to the end (including needle).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

#define arginfo_mb_strrchr arginfo_mb_strstr

#define arginfo_mb_stristr arginfo_mb_strstr

#define arginfo_mb_strrichr arginfo_mb_strstr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_substr_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string being checked.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The string being found.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_substr, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to extract the substring from.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, start, IS_LONG, 0, "If start is non-negative, the returned string will start at the start'th position in string, counting from zero. For instance, in the string 'abcdef', the character at position 0 is 'a', the character at position 2 is 'c', and so forth.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "Maximum number of characters to use from string. If omitted or NULL is passed, extract all characters to the end of the string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

#define arginfo_mb_strcut arginfo_mb_substr

#define arginfo_mb_strwidth arginfo_mb_strlen

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_strimwidth, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being decoded.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, start, IS_LONG, 0, "The start position offset. Number of characters from the beginning of string (first character is 0), or if start is negative, number of characters from the end of the string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, width, IS_LONG, 0, "The width of the desired trim. If negative width is specified, count from the end of the string. Passing negative width is deprecated as of PHP 8.3.0.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, trim_marker, IS_STRING, 0, "\"\"", "A string that is added to the end of string when string is truncated.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_convert_encoding, 0, 2, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, string, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "The string or array to be converted.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to_encoding, IS_STRING, 0, "The desired encoding of the result.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, from_encoding, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null", "The current encoding used to interpret string. Multiple encodings may be specified as an array or comma separated list, in which case the correct encoding will be guessed using the same algorithm as mb_detect_encoding.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_convert_case, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being converted.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_LONG, 0, "The mode of the conversion. It can be one of MB_CASE_UPPER, MB_CASE_LOWER, MB_CASE_TITLE, MB_CASE_FOLD, MB_CASE_UPPER_SIMPLE, MB_CASE_LOWER_SIMPLE, MB_CASE_TITLE_SIMPLE, MB_CASE_FOLD_SIMPLE.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_strtoupper, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being uppercased.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

#define arginfo_mb_strtolower arginfo_mb_strtoupper

#define arginfo_mb_ucfirst arginfo_mb_strtoupper

#define arginfo_mb_lcfirst arginfo_mb_strtoupper

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_trim, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, characters, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_mb_ltrim arginfo_mb_trim

#define arginfo_mb_rtrim arginfo_mb_trim

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_detect_encoding, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being inspected.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, encodings, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null", "A list of character encodings to try. The list may be specified as an array of strings, or a single string separated by commas.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, strict, _IS_BOOL, 0, "false", "Controls the behaviour when string is not valid in any of the listed encodings. If strict is set to false, the closest matching encoding will be returned; if strict is set to true, false will be returned.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_list_encodings, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_encoding_aliases, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_encode_mimeheader, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being encoded. Its encoding should be same as mb_internal_encoding.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, charset, IS_STRING, 1, "null", "charset specifies the name of the character set in which string is represented in. The default value is determined by the current NLS setting (mbstring.language).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, transfer_encoding, IS_STRING, 1, "null", "transfer_encoding specifies the scheme of MIME encoding. It should be either \"B\" (Base64) or \"Q\" (Quoted-Printable). Falls back to \"B\" if not given.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, newline, IS_STRING, 0, "\"\\r\\n\"", "newline specifies the EOL (end-of-line) marker with which mb_encode_mimeheader performs line-folding (a RFC term, the act of breaking a line longer than a certain length into multiple lines. The length is currently hard-coded to 74 characters). Falls back to \"\\r \" (CRLF) if not given.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, indent, IS_LONG, 0, "0", "Indentation of the first line (number of characters in the header before string).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_decode_mimeheader, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being decoded.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_convert_kana, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being converted.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_STRING, 0, "\"KV\"", "The conversion option.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_convert_variables, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to_encoding, IS_STRING, 0, "The encoding that the string is being converted to.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, from_encoding, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "from_encoding is specified as an array or comma separated string, it tries to detect encoding from from-coding. When from_encoding is omitted, detect_order is used.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, var, IS_MIXED, 0, "var is the reference to the variable being converted. String, Array and Object are accepted. mb_convert_variables assumes all parameters have the same encoding.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(1, vars, IS_MIXED, 0, "Additional vars.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_encode_numericentity, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being encoded.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, map, IS_ARRAY, 0, "map is array specifies code area to convert.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, hex, _IS_BOOL, 0, "false", "Whether the returned entity reference should be in hexadecimal notation (otherwise it is in decimal notation).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_decode_numericentity, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being decoded.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, map, IS_ARRAY, 0, "map is an array that specifies the code area to convert.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_send_mail, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to, IS_STRING, 0, "The mail addresses being sent to. Multiple recipients may be specified by putting a comma between each address in to. This parameter is not automatically encoded.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, subject, IS_STRING, 0, "The subject of the mail.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The message of the mail.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, additional_headers, MAY_BE_ARRAY|MAY_BE_STRING, "[]", "String or array to be inserted at the end of the email header.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, additional_params, IS_STRING, 1, "null", "additional_params is a MTA command line parameter. It is useful when setting the correct Return-Path header when using sendmail.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_get_info, 0, 0, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_LONG|MAY_BE_FALSE|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, type, IS_STRING, 0, "\"all\"", "If type is not specified or is specified as \"all\", \"internal_encoding\", \"http_input\", \"http_output\", \"http_output_conv_mimetypes\", \"mail_charset\", \"mail_header_encoding\", \"mail_body_encoding\", \"illegal_chars\", \"encoding_translation\", \"language\", \"detect_order\", \"substitute_character\" and \"strict_detection\" will be returned.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_check_encoding, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, value, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null", "The byte stream or array to check. If it is omitted, this function checks all the input from the beginning of the request.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The expected encoding.")
ZEND_END_ARG_INFO()

#define arginfo_mb_scrub arginfo_mb_strtoupper

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_ord, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_chr, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, codepoint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_str_pad, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "If the value of length is negative, less than, or equal to the length of the input string, no padding takes place, and string will be returned.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pad_string, IS_STRING, 0, "\" \"", "The pad_string may be truncated if the required number of padding characters can't be evenly divided by the pad_string's length.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pad_type, IS_LONG, 0, "STR_PAD_RIGHT", "Optional argument pad_type can be STR_PAD_RIGHT, STR_PAD_LEFT, or STR_PAD_BOTH. By default STR_PAD_RIGHT.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

#if defined(HAVE_MBREGEX)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_regex_encoding, 0, 0, MAY_BE_STRING|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_ereg, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The search pattern.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The search string.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, matches, "null")
ZEND_END_ARG_INFO()

#define arginfo_mb_eregi arginfo_mb_ereg

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_ereg_replace, 0, 3, MAY_BE_STRING|MAY_BE_FALSE|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The regular expression pattern.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, replacement, IS_STRING, 0, "The replacement text.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being checked.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_mb_eregi_replace arginfo_mb_ereg_replace

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_ereg_replace_callback, 0, 3, MAY_BE_STRING|MAY_BE_FALSE|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The regular expression pattern.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "A callback that will be called and passed an array of matched elements in the  string string. The callback should return the replacement string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being checked.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_STRING, 1, "null", "The search option. See mb_regex_set_options for explanation.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_split, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The regular expression pattern.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being split.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, limit, IS_LONG, 0, "-1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_ereg_match, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The regular expression pattern.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being evaluated.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_STRING, 1, "null", "The search option. See mb_regex_set_options for explanation.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_ereg_search, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pattern, IS_STRING, 1, "null", "The search pattern.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_STRING, 1, "null", "The search option. See mb_regex_set_options for explanation.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_ereg_search_pos, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pattern, IS_STRING, 1, "null", "The search pattern.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_STRING, 1, "null", "The search option. See mb_regex_set_options for explanation.")
ZEND_END_ARG_INFO()

#define arginfo_mb_ereg_search_regs arginfo_mb_ereg_search_pos

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_ereg_search_init, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The search string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pattern, IS_STRING, 1, "null", "The search pattern.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_STRING, 1, "null", "The search option. See mb_regex_set_options for explanation.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mb_ereg_search_getregs, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_ereg_search_getpos, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_ereg_search_setpos, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "The position to set. If it is negative, it counts from the end of the string.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mb_regex_set_options, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_STRING, 1, "null", "The options to set. This is a string where each character is an option. To set a mode, the mode character must be the last one set, however there can only be set one mode but multiple options.")
ZEND_END_ARG_INFO()
#endif

ZEND_FUNCTION(mb_language);
ZEND_FUNCTION(mb_internal_encoding);
ZEND_FUNCTION(mb_http_input);
ZEND_FUNCTION(mb_http_output);
ZEND_FUNCTION(mb_detect_order);
ZEND_FUNCTION(mb_substitute_character);
ZEND_FUNCTION(mb_preferred_mime_name);
ZEND_FUNCTION(mb_parse_str);
ZEND_FUNCTION(mb_output_handler);
ZEND_FUNCTION(mb_str_split);
ZEND_FUNCTION(mb_strlen);
ZEND_FUNCTION(mb_strpos);
ZEND_FUNCTION(mb_strrpos);
ZEND_FUNCTION(mb_stripos);
ZEND_FUNCTION(mb_strripos);
ZEND_FUNCTION(mb_strstr);
ZEND_FUNCTION(mb_strrchr);
ZEND_FUNCTION(mb_stristr);
ZEND_FUNCTION(mb_strrichr);
ZEND_FUNCTION(mb_substr_count);
ZEND_FUNCTION(mb_substr);
ZEND_FUNCTION(mb_strcut);
ZEND_FUNCTION(mb_strwidth);
ZEND_FUNCTION(mb_strimwidth);
ZEND_FUNCTION(mb_convert_encoding);
ZEND_FUNCTION(mb_convert_case);
ZEND_FUNCTION(mb_strtoupper);
ZEND_FUNCTION(mb_strtolower);
ZEND_FUNCTION(mb_ucfirst);
ZEND_FUNCTION(mb_lcfirst);
ZEND_FUNCTION(mb_trim);
ZEND_FUNCTION(mb_ltrim);
ZEND_FUNCTION(mb_rtrim);
ZEND_FUNCTION(mb_detect_encoding);
ZEND_FUNCTION(mb_list_encodings);
ZEND_FUNCTION(mb_encoding_aliases);
ZEND_FUNCTION(mb_encode_mimeheader);
ZEND_FUNCTION(mb_decode_mimeheader);
ZEND_FUNCTION(mb_convert_kana);
ZEND_FUNCTION(mb_convert_variables);
ZEND_FUNCTION(mb_encode_numericentity);
ZEND_FUNCTION(mb_decode_numericentity);
ZEND_FUNCTION(mb_send_mail);
ZEND_FUNCTION(mb_get_info);
ZEND_FUNCTION(mb_check_encoding);
ZEND_FUNCTION(mb_scrub);
ZEND_FUNCTION(mb_ord);
ZEND_FUNCTION(mb_chr);
ZEND_FUNCTION(mb_str_pad);
#if defined(HAVE_MBREGEX)
ZEND_FUNCTION(mb_regex_encoding);
ZEND_FUNCTION(mb_ereg);
ZEND_FUNCTION(mb_eregi);
ZEND_FUNCTION(mb_ereg_replace);
ZEND_FUNCTION(mb_eregi_replace);
ZEND_FUNCTION(mb_ereg_replace_callback);
ZEND_FUNCTION(mb_split);
ZEND_FUNCTION(mb_ereg_match);
ZEND_FUNCTION(mb_ereg_search);
ZEND_FUNCTION(mb_ereg_search_pos);
ZEND_FUNCTION(mb_ereg_search_regs);
ZEND_FUNCTION(mb_ereg_search_init);
ZEND_FUNCTION(mb_ereg_search_getregs);
ZEND_FUNCTION(mb_ereg_search_getpos);
ZEND_FUNCTION(mb_ereg_search_setpos);
ZEND_FUNCTION(mb_regex_set_options);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("mb_language", zif_mb_language, arginfo_mb_language, 0, NULL, "/**\n * Set/Get current language\n * @param string|null $language Used for encoding e-mail messages. The valid languages are listed in the following table. mb_send_mail uses this setting to encode e-mail.\n * @return string|bool\n */")
	ZEND_RAW_FENTRY("mb_internal_encoding", zif_mb_internal_encoding, arginfo_mb_internal_encoding, 0, NULL, "/**\n * Set/Get internal character encoding\n * @param string|null $encoding encoding is the character encoding name used for the HTTP input character encoding conversion, HTTP output character encoding conversion, and the default character encoding for string functions defined by the mbstring module. You should notice that the internal encoding is totally different from the one for multibyte regex.\n * @return string|bool\n */")
	ZEND_RAW_FENTRY("mb_http_input", zif_mb_http_input, arginfo_mb_http_input, 0, NULL, "/**\n * Detect HTTP input character encoding\n * @param string|null $type Input string specifies the input type. \"G\" for GET, \"P\" for POST, \"C\" for COOKIE, \"S\" for string, \"L\" for list, and \"I\" for the whole list (will return array). If type is omitted, it returns the last input type processed.\n * @return array|string|false\n */")
	ZEND_RAW_FENTRY("mb_http_output", zif_mb_http_output, arginfo_mb_http_output, 0, NULL, "/**\n * Set/Get HTTP output character encoding\n * @param string|null $encoding If encoding is set, mb_http_output sets the HTTP output character encoding to encoding.\n * @return string|bool\n */")
	ZEND_RAW_FENTRY("mb_detect_order", zif_mb_detect_order, arginfo_mb_detect_order, 0, NULL, "/**\n * Set/Get character encoding detection order\n * @param array|string|null $encoding encoding is an array or comma separated list of character encoding. See supported encodings.\n * @return array|bool\n */")
	ZEND_RAW_FENTRY("mb_substitute_character", zif_mb_substitute_character, arginfo_mb_substitute_character, 0, NULL, "/**\n * Set/Get substitution character\n * @param string|int|null $substitute_character Specify the Unicode value as an int, or as one of the following strings: \"none\": no output \"long\": Output character code value (Example: U+3000, JIS+7E7E) \"entity\": Output character entity (Example: &#x200;)\n * @return string|int|bool\n */")
	ZEND_RAW_FENTRY("mb_preferred_mime_name", zif_mb_preferred_mime_name, arginfo_mb_preferred_mime_name, 0, NULL, "/**\n * Get MIME charset string\n * @param string $encoding The encoding being checked.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_parse_str", zif_mb_parse_str, arginfo_mb_parse_str, 0, NULL, "/**\n * Parse GET/POST/COOKIE data and set global variable\n * @param string $string The URL encoded data.\n * @param array $result An array containing decoded and character encoded converted values.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_output_handler", zif_mb_output_handler, arginfo_mb_output_handler, 0, NULL, "/**\n * Callback function converts character encoding in output buffer\n * @param string $string The contents of the output buffer.\n * @param int $status The status of the output buffer.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_str_split", zif_mb_str_split, arginfo_mb_str_split, 0, NULL, "/**\n * Given a multibyte string, return an array of its characters\n * @param string $string The string to split into characters or chunks.\n * @param int $length If specified, each element of the returned array will be composed of multiple characters instead of a single character.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return array\n */")
	ZEND_RAW_FENTRY("mb_strlen", zif_mb_strlen, arginfo_mb_strlen, 0, NULL, "/**\n * Get string length\n * @param string $string The string being checked for length.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int\n */")
	ZEND_RAW_FENTRY("mb_strpos", zif_mb_strpos, arginfo_mb_strpos, 0, NULL, "/**\n * Find position of first occurrence of string in a string\n * @param string $haystack The string from which to get the position of the first occurrence of needle.\n * @param string $needle The string to find in haystack. In contrast with strpos, numeric values are not applied as the ordinal value of a character.\n * @param int $offset The search offset. If it is not specified, 0 is used. A negative offset counts from the end of the string.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("mb_strrpos", zif_mb_strrpos, arginfo_mb_strrpos, 0, NULL, "/**\n * Find position of last occurrence of a string in a string\n * @param string $haystack The string being checked, for the last occurrence of needle\n * @param string $needle The string to find in haystack.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("mb_stripos", zif_mb_stripos, arginfo_mb_stripos, 0, NULL, "/**\n * Finds position of first occurrence of a string within another, case insensitive\n * @param string $haystack The string from which to get the position of the first occurrence of needle\n * @param string $needle The string to find in haystack\n * @param int $offset The position in haystack to start searching. A negative offset counts from the end of the string.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("mb_strripos", zif_mb_strripos, arginfo_mb_strripos, 0, NULL, "/**\n * Finds position of last occurrence of a string within another, case insensitive\n * @param string $haystack The string from which to get the position of the last occurrence of needle.\n * @param string $needle The string to find in haystack.\n * @param int $offset May be specified to begin searching an arbitrary number of characters into the haystack. Negative values will stop searching at an arbitrary point prior to the end of the haystack.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("mb_strstr", zif_mb_strstr, arginfo_mb_strstr, 0, NULL, "/**\n * Finds first occurrence of a string within another\n * @param string $haystack The string from which to get the first occurrence of needle\n * @param string $needle The string to find in haystack\n * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of  haystack from the beginning to the first occurrence of needle (excluding needle). If set to false, it returns all of haystack from the first occurrence of needle to the end (including needle).\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_strrchr", zif_mb_strrchr, arginfo_mb_strrchr, 0, NULL, "/**\n * Finds the last occurrence of a character in a string within another\n * @param string $haystack The string from which to get the last occurrence of needle.\n * @param string $needle The string to find in haystack.\n * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of haystack from the beginning to the last occurrence of needle. If set to false, it returns all of haystack from the last occurrence of needle to the end.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_stristr", zif_mb_stristr, arginfo_mb_stristr, 0, NULL, "/**\n * Finds first occurrence of a string within another, case insensitive\n * @param string $haystack The string from which to get the first occurrence of needle\n * @param string $needle The string to find in haystack\n * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of  haystack from the beginning to the first occurrence of needle (excluding needle). If set to false, it returns all of haystack from the first occurrence of needle to the end (including needle).\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_strrichr", zif_mb_strrichr, arginfo_mb_strrichr, 0, NULL, "/**\n * Finds the last occurrence of a character in a string within another, case insensitive\n * @param string $haystack The string from which to get the last occurrence of needle.\n * @param string $needle The string to find in haystack.\n * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of haystack from the beginning to the last occurrence of needle. If set to false, it returns all of haystack from the last occurrence of needle to the end.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_substr_count", zif_mb_substr_count, arginfo_mb_substr_count, 0, NULL, "/**\n * Count the number of substring occurrences\n * @param string $haystack The string being checked.\n * @param string $needle The string being found.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int\n */")
	ZEND_RAW_FENTRY("mb_substr", zif_mb_substr, arginfo_mb_substr, 0, NULL, "/**\n * Get part of string\n * @param string $string The string to extract the substring from.\n * @param int $start If start is non-negative, the returned string will start at the start\'th position in string, counting from zero. For instance, in the string \'abcdef\', the character at position 0 is \'a\', the character at position 2 is \'c\', and so forth.\n * @param int|null $length Maximum number of characters to use from string. If omitted or NULL is passed, extract all characters to the end of the string.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_strcut", zif_mb_strcut, arginfo_mb_strcut, 0, NULL, "/**\n * Get part of string\n * @param string $string The string being cut.\n * @param int $start If start is non-negative, the returned string will start at the start\'th byte position in string, counting from zero. For instance, in the string \'abcdef\', the byte at position 0 is \'a\', the byte at position 2 is \'c\', and so forth.\n * @param int|null $length Length in bytes. If omitted or NULL is passed, extract all bytes to the end of the string.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_strwidth", zif_mb_strwidth, arginfo_mb_strwidth, 0, NULL, "/**\n * Return width of string\n * @param string $string The string being decoded.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return int\n */")
	ZEND_RAW_FENTRY("mb_strimwidth", zif_mb_strimwidth, arginfo_mb_strimwidth, 0, NULL, "/**\n * Get truncated string with specified width\n * @param string $string The string being decoded.\n * @param int $start The start position offset. Number of characters from the beginning of string (first character is 0), or if start is negative, number of characters from the end of the string.\n * @param int $width The width of the desired trim. If negative width is specified, count from the end of the string. Passing negative width is deprecated as of PHP 8.3.0.\n * @param string $trim_marker A string that is added to the end of string when string is truncated.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_convert_encoding", zif_mb_convert_encoding, arginfo_mb_convert_encoding, 0, NULL, "/**\n * Convert a string from one character encoding to another\n * @param array|string $string The string or array to be converted.\n * @param string $to_encoding The desired encoding of the result.\n * @param array|string|null $from_encoding The current encoding used to interpret string. Multiple encodings may be specified as an array or comma separated list, in which case the correct encoding will be guessed using the same algorithm as mb_detect_encoding.\n * @return array|string|false\n */")
	ZEND_RAW_FENTRY("mb_convert_case", zif_mb_convert_case, arginfo_mb_convert_case, 0, NULL, "/**\n * Perform case folding on a string\n * @param string $string The string being converted.\n * @param int $mode The mode of the conversion. It can be one of MB_CASE_UPPER, MB_CASE_LOWER, MB_CASE_TITLE, MB_CASE_FOLD, MB_CASE_UPPER_SIMPLE, MB_CASE_LOWER_SIMPLE, MB_CASE_TITLE_SIMPLE, MB_CASE_FOLD_SIMPLE.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_strtoupper", zif_mb_strtoupper, arginfo_mb_strtoupper, 0, NULL, "/**\n * Make a string uppercase\n * @param string $string The string being uppercased.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_strtolower", zif_mb_strtolower, arginfo_mb_strtolower, 0, NULL, "/**\n * Make a string lowercase\n * @param string $string The string being lowercased.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_ucfirst", zif_mb_ucfirst, arginfo_mb_ucfirst, 0, NULL, "/**\n * Make a string\'s first character uppercase\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_lcfirst", zif_mb_lcfirst, arginfo_mb_lcfirst, 0, NULL, "/**\n * Make a string\'s first character lowercase\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_trim", zif_mb_trim, arginfo_mb_trim, 0, NULL, "/**\n * Strip whitespace (or other characters) from the beginning and end of a string\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_ltrim", zif_mb_ltrim, arginfo_mb_ltrim, 0, NULL, "/**\n * Strip whitespace (or other characters) from the beginning of a string\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_rtrim", zif_mb_rtrim, arginfo_mb_rtrim, 0, NULL, "/**\n * Strip whitespace (or other characters) from the end of a string\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_detect_encoding", zif_mb_detect_encoding, arginfo_mb_detect_encoding, 0, NULL, "/**\n * Detect character encoding\n * @param string $string The string being inspected.\n * @param array|string|null $encodings A list of character encodings to try. The list may be specified as an array of strings, or a single string separated by commas.\n * @param bool $strict Controls the behaviour when string is not valid in any of the listed encodings. If strict is set to false, the closest matching encoding will be returned; if strict is set to true, false will be returned.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_list_encodings", zif_mb_list_encodings, arginfo_mb_list_encodings, 0, NULL, "/**\n * Returns an array of all supported encodings\n * @return array\n */")
	ZEND_RAW_FENTRY("mb_encoding_aliases", zif_mb_encoding_aliases, arginfo_mb_encoding_aliases, 0, NULL, "/**\n * Get aliases of a known encoding type\n * @return array\n */")
	ZEND_RAW_FENTRY("mb_encode_mimeheader", zif_mb_encode_mimeheader, arginfo_mb_encode_mimeheader, 0, NULL, "/**\n * Encode string for MIME header\n * @param string $string The string being encoded. Its encoding should be same as mb_internal_encoding.\n * @param string|null $charset charset specifies the name of the character set in which string is represented in. The default value is determined by the current NLS setting (mbstring.language).\n * @param string|null $transfer_encoding transfer_encoding specifies the scheme of MIME encoding. It should be either \"B\" (Base64) or \"Q\" (Quoted-Printable). Falls back to \"B\" if not given.\n * @param string $newline newline specifies the EOL (end-of-line) marker with which mb_encode_mimeheader performs line-folding (a RFC term, the act of breaking a line longer than a certain length into multiple lines. The length is currently hard-coded to 74 characters). Falls back to \"\\r \" (CRLF) if not given.\n * @param int $indent Indentation of the first line (number of characters in the header before string).\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_decode_mimeheader", zif_mb_decode_mimeheader, arginfo_mb_decode_mimeheader, 0, NULL, "/**\n * Decode string in MIME header field\n * @param string $string The string being decoded.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_convert_kana", zif_mb_convert_kana, arginfo_mb_convert_kana, 0, NULL, "/**\n * Convert \"kana\" one from another (\"zen-kaku\", \"han-kaku\" and more)\n * @param string $string The string being converted.\n * @param string $mode The conversion option.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_convert_variables", zif_mb_convert_variables, arginfo_mb_convert_variables, 0, NULL, "/**\n * Convert character code in variable(s)\n * @param string $to_encoding The encoding that the string is being converted to.\n * @param array|string $from_encoding from_encoding is specified as an array or comma separated string, it tries to detect encoding from from-coding. When from_encoding is omitted, detect_order is used.\n * @param mixed $var var is the reference to the variable being converted. String, Array and Object are accepted. mb_convert_variables assumes all parameters have the same encoding.\n * @param mixed $vars Additional vars.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_encode_numericentity", zif_mb_encode_numericentity, arginfo_mb_encode_numericentity, 0, NULL, "/**\n * Encode character to HTML numeric string reference\n * @param string $string The string being encoded.\n * @param array $map map is array specifies code area to convert.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @param bool $hex Whether the returned entity reference should be in hexadecimal notation (otherwise it is in decimal notation).\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_decode_numericentity", zif_mb_decode_numericentity, arginfo_mb_decode_numericentity, 0, NULL, "/**\n * Decode HTML numeric string reference to character\n * @param string $string The string being decoded.\n * @param array $map map is an array that specifies the code area to convert.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_send_mail", zif_mb_send_mail, arginfo_mb_send_mail, 0, NULL, "/**\n * Send encoded mail\n * @param string $to The mail addresses being sent to. Multiple recipients may be specified by putting a comma between each address in to. This parameter is not automatically encoded.\n * @param string $subject The subject of the mail.\n * @param string $message The message of the mail.\n * @param array|string $additional_headers String or array to be inserted at the end of the email header.\n * @param string|null $additional_params additional_params is a MTA command line parameter. It is useful when setting the correct Return-Path header when using sendmail.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_get_info", zif_mb_get_info, arginfo_mb_get_info, 0, NULL, "/**\n * Get internal settings of mbstring\n * @param string $type If type is not specified or is specified as \"all\", \"internal_encoding\", \"http_input\", \"http_output\", \"http_output_conv_mimetypes\", \"mail_charset\", \"mail_header_encoding\", \"mail_body_encoding\", \"illegal_chars\", \"encoding_translation\", \"language\", \"detect_order\", \"substitute_character\" and \"strict_detection\" will be returned.\n * @return array|string|int|false|null\n */")
	ZEND_RAW_FENTRY("mb_check_encoding", zif_mb_check_encoding, arginfo_mb_check_encoding, 0, NULL, "/**\n * Check if strings are valid for the specified encoding\n * @param array|string|null $value The byte stream or array to check. If it is omitted, this function checks all the input from the beginning of the request.\n * @param string|null $encoding The expected encoding.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_scrub", zif_mb_scrub, arginfo_mb_scrub, 0, NULL, "/**\n * Replace ill-formed byte sequences with the substitute character\n * @return string\n */")
	ZEND_RAW_FENTRY("mb_ord", zif_mb_ord, arginfo_mb_ord, 0, NULL, "/**\n * Get Unicode code point of character\n * @return int|false\n */")
	ZEND_RAW_FENTRY("mb_chr", zif_mb_chr, arginfo_mb_chr, 0, NULL, "/**\n * Return character by Unicode code point value\n * @return string|false\n */")
	ZEND_RAW_FENTRY("mb_str_pad", zif_mb_str_pad, arginfo_mb_str_pad, 0, NULL, "/**\n * Pad a multibyte string to a certain length with another multibyte string\n * @param string $string The input string.\n * @param int $length If the value of length is negative, less than, or equal to the length of the input string, no padding takes place, and string will be returned.\n * @param string $pad_string The pad_string may be truncated if the required number of padding characters can\'t be evenly divided by the pad_string\'s length.\n * @param int $pad_type Optional argument pad_type can be STR_PAD_RIGHT, STR_PAD_LEFT, or STR_PAD_BOTH. By default STR_PAD_RIGHT.\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string\n */")
#if defined(HAVE_MBREGEX)
	ZEND_RAW_FENTRY("mb_regex_encoding", zif_mb_regex_encoding, arginfo_mb_regex_encoding, 0, NULL, "/**\n * Set/Get character encoding for multibyte regex\n * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.\n * @return string|bool\n */")
	ZEND_RAW_FENTRY("mb_ereg", zif_mb_ereg, arginfo_mb_ereg, 0, NULL, "/**\n * Regular expression match with multibyte support\n * @param string $pattern The search pattern.\n * @param string $string The search string.\n * @param array $matches If matches are found for parenthesized substrings of pattern and the function is called with the third argument matches, the matches will be stored in the elements of the array matches. If no matches are found, matches is set to an empty array.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_eregi", zif_mb_eregi, arginfo_mb_eregi, 0, NULL, "/**\n * Regular expression match ignoring case with multibyte support\n * @param string $pattern The regular expression pattern.\n * @param string $string The string being searched.\n * @param array $matches If matches are found for parenthesized substrings of pattern and the function is called with the third argument matches, the matches will be stored in the elements of the array matches. If no matches are found, matches is set to an empty array.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_ereg_replace", zif_mb_ereg_replace, arginfo_mb_ereg_replace, 0, NULL, "/**\n * Replace regular expression with multibyte support\n * @param string $pattern The regular expression pattern.\n * @param string $replacement The replacement text.\n * @param string $string The string being checked.\n * @return string|false|null\n */")
	ZEND_RAW_FENTRY("mb_eregi_replace", zif_mb_eregi_replace, arginfo_mb_eregi_replace, 0, NULL, "/**\n * Replace regular expression with multibyte support ignoring case\n * @param string $pattern The regular expression pattern.  Multibyte characters may be used. The case will be ignored.\n * @param string $replacement The replacement text.\n * @param string $string The searched string.\n * @return string|false|null\n */")
	ZEND_RAW_FENTRY("mb_ereg_replace_callback", zif_mb_ereg_replace_callback, arginfo_mb_ereg_replace_callback, 0, NULL, "/**\n * Perform a regular expression search and replace with multibyte support using a callback\n * @param string $pattern The regular expression pattern.\n * @param callable $callback A callback that will be called and passed an array of matched elements in the  string string. The callback should return the replacement string.\n * @param string $string The string being checked.\n * @param string|null $options The search option. See mb_regex_set_options for explanation.\n * @return string|false|null\n */")
	ZEND_RAW_FENTRY("mb_split", zif_mb_split, arginfo_mb_split, 0, NULL, "/**\n * Split multibyte string using regular expression\n * @param string $pattern The regular expression pattern.\n * @param string $string The string being split.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("mb_ereg_match", zif_mb_ereg_match, arginfo_mb_ereg_match, 0, NULL, "/**\n * Regular expression match for multibyte string\n * @param string $pattern The regular expression pattern.\n * @param string $string The string being evaluated.\n * @param string|null $options The search option. See mb_regex_set_options for explanation.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_ereg_search", zif_mb_ereg_search, arginfo_mb_ereg_search, 0, NULL, "/**\n * Multibyte regular expression match for predefined multibyte string\n * @param string|null $pattern The search pattern.\n * @param string|null $options The search option. See mb_regex_set_options for explanation.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_ereg_search_pos", zif_mb_ereg_search_pos, arginfo_mb_ereg_search_pos, 0, NULL, "/**\n * Returns position and length of a matched part of the multibyte regular expression for a predefined multibyte string\n * @param string|null $pattern The search pattern.\n * @param string|null $options The search option. See mb_regex_set_options for explanation.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("mb_ereg_search_regs", zif_mb_ereg_search_regs, arginfo_mb_ereg_search_regs, 0, NULL, "/**\n * Returns the matched part of a multibyte regular expression\n * @param string|null $pattern The search pattern.\n * @param string|null $options The search option. See mb_regex_set_options for explanation.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("mb_ereg_search_init", zif_mb_ereg_search_init, arginfo_mb_ereg_search_init, 0, NULL, "/**\n * Setup string and regular expression for a multibyte regular expression match\n * @param string $string The search string.\n * @param string|null $pattern The search pattern.\n * @param string|null $options The search option. See mb_regex_set_options for explanation.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_ereg_search_getregs", zif_mb_ereg_search_getregs, arginfo_mb_ereg_search_getregs, 0, NULL, "/**\n * Retrieve the result from the last multibyte regular expression match\n * @return array|false\n */")
	ZEND_RAW_FENTRY("mb_ereg_search_getpos", zif_mb_ereg_search_getpos, arginfo_mb_ereg_search_getpos, 0, NULL, "/**\n * Returns start point for next regular expression match\n * @return int\n */")
	ZEND_RAW_FENTRY("mb_ereg_search_setpos", zif_mb_ereg_search_setpos, arginfo_mb_ereg_search_setpos, 0, NULL, "/**\n * Set start point of next regular expression match\n * @param int $offset The position to set. If it is negative, it counts from the end of the string.\n * @return bool\n */")
	ZEND_RAW_FENTRY("mb_regex_set_options", zif_mb_regex_set_options, arginfo_mb_regex_set_options, 0, NULL, "/**\n * Set/Get the default options for mbregex functions\n * @param string|null $options The options to set. This is a string where each character is an option. To set a mode, the mode character must be the last one set, however there can only be set one mode but multiple options.\n * @return string\n */")
#endif
	ZEND_FE_END
};

static void register_mbstring_symbols(int module_number)
{
#if defined(HAVE_MBREGEX)
	REGISTER_STRING_CONSTANT("MB_ONIGURUMA_VERSION", php_mb_oniguruma_version, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("MB_CASE_UPPER", PHP_UNICODE_CASE_UPPER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_LOWER", PHP_UNICODE_CASE_LOWER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_TITLE", PHP_UNICODE_CASE_TITLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_FOLD", PHP_UNICODE_CASE_FOLD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_UPPER_SIMPLE", PHP_UNICODE_CASE_UPPER_SIMPLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_LOWER_SIMPLE", PHP_UNICODE_CASE_LOWER_SIMPLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_TITLE_SIMPLE", PHP_UNICODE_CASE_TITLE_SIMPLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MB_CASE_FOLD_SIMPLE", PHP_UNICODE_CASE_FOLD_SIMPLE, CONST_PERSISTENT);
}
