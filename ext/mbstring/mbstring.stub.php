<?php

/** @generate-class-entries */

#ifdef HAVE_MBREGEX
/**
 * @var string
 * @cvalue php_mb_oniguruma_version
 */
const MB_ONIGURUMA_VERSION = UNKNOWN;
#endif

/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_UPPER
 */
const MB_CASE_UPPER = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_LOWER
 */
const MB_CASE_LOWER = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_TITLE
 */
const MB_CASE_TITLE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_FOLD
 */
const MB_CASE_FOLD = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_UPPER_SIMPLE
 */
const MB_CASE_UPPER_SIMPLE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_LOWER_SIMPLE
 */
const MB_CASE_LOWER_SIMPLE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_TITLE_SIMPLE
 */
const MB_CASE_TITLE_SIMPLE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_UNICODE_CASE_FOLD_SIMPLE
 */
const MB_CASE_FOLD_SIMPLE = UNKNOWN;

/** @genstubs-expose-comment-block
 * Set/Get current language
 * @param string|null $language Used for encoding e-mail messages. The valid languages are listed in the following table. mb_send_mail uses this setting to encode e-mail.
 * @return string|bool
 */
/** @refcount 1 */
function mb_language(?string $language = null): string|bool {}

/** @genstubs-expose-comment-block
 * Set/Get internal character encoding
 * @param string|null $encoding encoding is the character encoding name used for the HTTP input character encoding conversion, HTTP output character encoding conversion, and the default character encoding for string functions defined by the mbstring module. You should notice that the internal encoding is totally different from the one for multibyte regex.
 * @return string|bool
 */
/** @refcount 1 */
function mb_internal_encoding(?string $encoding = null): string|bool {}

/** @genstubs-expose-comment-block
 * Detect HTTP input character encoding
 * @param string|null $type Input string specifies the input type. "G" for GET, "P" for POST, "C" for COOKIE, "S" for string, "L" for list, and "I" for the whole list (will return array). If type is omitted, it returns the last input type processed.
 * @return array|string|false
 */
/**
 * @return array<int, string>|string|false
 * @refcount 1
 */
function mb_http_input(?string $type = null): array|string|false {}

/** @genstubs-expose-comment-block
 * Set/Get HTTP output character encoding
 * @param string|null $encoding If encoding is set, mb_http_output sets the HTTP output character encoding to encoding.
 * @return string|bool
 */
/** @refcount 1 */
function mb_http_output(?string $encoding = null): string|bool {}

/** @genstubs-expose-comment-block
 * Set/Get character encoding detection order
 * @param array|string|null $encoding encoding is an array or comma separated list of character encoding. See supported encodings.
 * @return array|bool
 */
/**
 * @return array<int, string>|true
 * @refcount 1
 */
function mb_detect_order(array|string|null $encoding = null): array|bool {}

/** @genstubs-expose-comment-block
 * Set/Get substitution character
 * @param string|int|null $substitute_character Specify the Unicode value as an int, or as one of the following strings: "none": no output "long": Output character code value (Example: U+3000, JIS+7E7E) "entity": Output character entity (Example: &#x200;)
 * @return string|int|bool
 */
/** @refcount 1 */
function mb_substitute_character(string|int|null $substitute_character = null): string|int|bool {}

/** @genstubs-expose-comment-block
 * Get MIME charset string
 * @param string $encoding The encoding being checked.
 * @return string|false
 */
/** @refcount 1 */
function mb_preferred_mime_name(string $encoding): string|false {}

/** @genstubs-expose-comment-block
 * Parse GET/POST/COOKIE data and set global variable
 * @param string $string The URL encoded data.
 * @param array $result An array containing decoded and character encoded converted values.
 * @return bool
 */
/** @param array $result */
function mb_parse_str(string $string, &$result): bool {}

/** @genstubs-expose-comment-block
 * Callback function converts character encoding in output buffer
 * @param string $string The contents of the output buffer.
 * @param int $status The status of the output buffer.
 * @return string
 */
/** @refcount 1 */
function mb_output_handler(string $string, int $status): string {}

/** @genstubs-expose-comment-block
 * Given a multibyte string, return an array of its characters
 * @param string $string The string to split into characters or chunks.
 * @param int $length If specified, each element of the returned array will be composed of multiple characters instead of a single character.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return array
 */
function mb_str_split(string $string, int $length = 1, ?string $encoding = null): array {}

/** @genstubs-expose-comment-block
 * Get string length
 * @param string $string The string being checked for length.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int
 */
function mb_strlen(string $string, ?string $encoding = null): int {}

/** @genstubs-expose-comment-block
 * Find position of first occurrence of string in a string
 * @param string $haystack The string from which to get the position of the first occurrence of needle.
 * @param string $needle The string to find in haystack. In contrast with strpos, numeric values are not applied as the ordinal value of a character.
 * @param int $offset The search offset. If it is not specified, 0 is used. A negative offset counts from the end of the string.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int|false
 */
function mb_strpos(string $haystack, string $needle, int $offset = 0, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Find position of last occurrence of a string in a string
 * @param string $haystack The string being checked, for the last occurrence of needle
 * @param string $needle The string to find in haystack.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int|false
 */
function mb_strrpos(string $haystack, string $needle, int $offset = 0, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Finds position of first occurrence of a string within another, case insensitive
 * @param string $haystack The string from which to get the position of the first occurrence of needle
 * @param string $needle The string to find in haystack
 * @param int $offset The position in haystack to start searching. A negative offset counts from the end of the string.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int|false
 */
function mb_stripos(string $haystack, string $needle, int $offset = 0, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Finds position of last occurrence of a string within another, case insensitive
 * @param string $haystack The string from which to get the position of the last occurrence of needle.
 * @param string $needle The string to find in haystack.
 * @param int $offset May be specified to begin searching an arbitrary number of characters into the haystack. Negative values will stop searching at an arbitrary point prior to the end of the haystack.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int|false
 */
function mb_strripos(string $haystack, string $needle, int $offset = 0, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Finds first occurrence of a string within another
 * @param string $haystack The string from which to get the first occurrence of needle
 * @param string $needle The string to find in haystack
 * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of  haystack from the beginning to the first occurrence of needle (excluding needle). If set to false, it returns all of haystack from the first occurrence of needle to the end (including needle).
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string|false
 */
/** @refcount 1 */
function mb_strstr(string $haystack, string $needle, bool $before_needle = false, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Finds the last occurrence of a character in a string within another
 * @param string $haystack The string from which to get the last occurrence of needle.
 * @param string $needle The string to find in haystack.
 * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of haystack from the beginning to the last occurrence of needle. If set to false, it returns all of haystack from the last occurrence of needle to the end.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string|false
 */
/** @refcount 1 */
function mb_strrchr(string $haystack, string $needle, bool $before_needle = false, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Finds first occurrence of a string within another, case insensitive
 * @param string $haystack The string from which to get the first occurrence of needle
 * @param string $needle The string to find in haystack
 * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of  haystack from the beginning to the first occurrence of needle (excluding needle). If set to false, it returns all of haystack from the first occurrence of needle to the end (including needle).
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string|false
 */
/** @refcount 1 */
function mb_stristr(string $haystack, string $needle, bool $before_needle = false, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Finds the last occurrence of a character in a string within another, case insensitive
 * @param string $haystack The string from which to get the last occurrence of needle.
 * @param string $needle The string to find in haystack.
 * @param bool $before_needle Determines which portion of haystack this function returns. If set to true, it returns all of haystack from the beginning to the last occurrence of needle. If set to false, it returns all of haystack from the last occurrence of needle to the end.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string|false
 */
/** @refcount 1 */
function mb_strrichr(string $haystack, string $needle, bool $before_needle = false, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Count the number of substring occurrences
 * @param string $haystack The string being checked.
 * @param string $needle The string being found.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int
 */
function mb_substr_count(string $haystack, string $needle, ?string $encoding = null): int {}

/** @genstubs-expose-comment-block
 * Get part of string
 * @param string $string The string to extract the substring from.
 * @param int $start If start is non-negative, the returned string will start at the start'th position in string, counting from zero. For instance, in the string 'abcdef', the character at position 0 is 'a', the character at position 2 is 'c', and so forth.
 * @param int|null $length Maximum number of characters to use from string. If omitted or NULL is passed, extract all characters to the end of the string.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_substr(string $string, int $start, ?int $length = null, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Get part of string
 * @param string $string The string being cut.
 * @param int $start If start is non-negative, the returned string will start at the start'th byte position in string, counting from zero. For instance, in the string 'abcdef', the byte at position 0 is 'a', the byte at position 2 is 'c', and so forth.
 * @param int|null $length Length in bytes. If omitted or NULL is passed, extract all bytes to the end of the string.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_strcut(string $string, int $start, ?int $length = null, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Return width of string
 * @param string $string The string being decoded.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return int
 */
function mb_strwidth(string $string, ?string $encoding = null): int {}

/** @genstubs-expose-comment-block
 * Get truncated string with specified width
 * @param string $string The string being decoded.
 * @param int $start The start position offset. Number of characters from the beginning of string (first character is 0), or if start is negative, number of characters from the end of the string.
 * @param int $width The width of the desired trim. If negative width is specified, count from the end of the string. Passing negative width is deprecated as of PHP 8.3.0.
 * @param string $trim_marker A string that is added to the end of string when string is truncated.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
function mb_strimwidth(string $string, int $start, int $width, string $trim_marker = "", ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Convert a string from one character encoding to another
 * @param array|string $string The string or array to be converted.
 * @param string $to_encoding The desired encoding of the result.
 * @param array|string|null $from_encoding The current encoding used to interpret string. Multiple encodings may be specified as an array or comma separated list, in which case the correct encoding will be guessed using the same algorithm as mb_detect_encoding.
 * @return array|string|false
 */
/**
 * @return array<int|string, mixed>|string|false
 * @refcount 1
 */
function mb_convert_encoding(array|string $string, string $to_encoding, array|string|null $from_encoding = null): array|string|false {}

/** @genstubs-expose-comment-block
 * Perform case folding on a string
 * @param string $string The string being converted.
 * @param int $mode The mode of the conversion. It can be one of MB_CASE_UPPER, MB_CASE_LOWER, MB_CASE_TITLE, MB_CASE_FOLD, MB_CASE_UPPER_SIMPLE, MB_CASE_LOWER_SIMPLE, MB_CASE_TITLE_SIMPLE, MB_CASE_FOLD_SIMPLE.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_convert_case(string $string, int $mode, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Make a string uppercase
 * @param string $string The string being uppercased.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_strtoupper(string $string, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Make a string lowercase
 * @param string $string The string being lowercased.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_strtolower(string $string, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Make a string's first character uppercase
 * @return string
 */
function mb_ucfirst(string $string, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Make a string's first character lowercase
 * @return string
 */
function mb_lcfirst(string $string, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Strip whitespace (or other characters) from the beginning and end of a string
 * @return string
 */
function mb_trim(string $string, ?string $characters = null, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Strip whitespace (or other characters) from the beginning of a string
 * @return string
 */
function mb_ltrim(string $string, ?string $characters = null, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Strip whitespace (or other characters) from the end of a string
 * @return string
 */
function mb_rtrim(string $string, ?string $characters = null, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Detect character encoding
 * @param string $string The string being inspected.
 * @param array|string|null $encodings A list of character encodings to try. The list may be specified as an array of strings, or a single string separated by commas.
 * @param bool $strict Controls the behaviour when string is not valid in any of the listed encodings. If strict is set to false, the closest matching encoding will be returned; if strict is set to true, false will be returned.
 * @return string|false
 */
/** @refcount 1 */
function mb_detect_encoding(string $string, array|string|null $encodings = null, bool $strict = false): string|false {}

/** @genstubs-expose-comment-block
 * Returns an array of all supported encodings
 * @return array
 */
/**
 * @return array<int, string>
 */
function mb_list_encodings(): array {}

/** @genstubs-expose-comment-block
 * Get aliases of a known encoding type
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function mb_encoding_aliases(string $encoding): array {}

/** @genstubs-expose-comment-block
 * Encode string for MIME header
 * @param string $string The string being encoded. Its encoding should be same as mb_internal_encoding.
 * @param string|null $charset charset specifies the name of the character set in which string is represented in. The default value is determined by the current NLS setting (mbstring.language).
 * @param string|null $transfer_encoding transfer_encoding specifies the scheme of MIME encoding. It should be either "B" (Base64) or "Q" (Quoted-Printable). Falls back to "B" if not given.
 * @param string $newline newline specifies the EOL (end-of-line) marker with which mb_encode_mimeheader performs line-folding (a RFC term, the act of breaking a line longer than a certain length into multiple lines. The length is currently hard-coded to 74 characters). Falls back to "\r " (CRLF) if not given.
 * @param int $indent Indentation of the first line (number of characters in the header before string).
 * @return string
 */
/** @refcount 1 */
function mb_encode_mimeheader(string $string, ?string $charset = null, ?string $transfer_encoding = null, string $newline = "\r\n", int $indent = 0): string {}

/** @genstubs-expose-comment-block
 * Decode string in MIME header field
 * @param string $string The string being decoded.
 * @return string
 */
/** @refcount 1 */
function mb_decode_mimeheader(string $string): string {}

/** @genstubs-expose-comment-block
 * Convert "kana" one from another ("zen-kaku", "han-kaku" and more)
 * @param string $string The string being converted.
 * @param string $mode The conversion option.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_convert_kana(string $string, string $mode = "KV", ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Convert character code in variable(s)
 * @param string $to_encoding The encoding that the string is being converted to.
 * @param array|string $from_encoding from_encoding is specified as an array or comma separated string, it tries to detect encoding from from-coding. When from_encoding is omitted, detect_order is used.
 * @param mixed $var var is the reference to the variable being converted. String, Array and Object are accepted. mb_convert_variables assumes all parameters have the same encoding.
 * @param mixed $vars Additional vars.
 * @return string|false
 */
/** @refcount 1 */
function mb_convert_variables(string $to_encoding, array|string $from_encoding, mixed &$var, mixed &...$vars): string|false {}

/** @genstubs-expose-comment-block
 * Encode character to HTML numeric string reference
 * @param string $string The string being encoded.
 * @param array $map map is array specifies code area to convert.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @param bool $hex Whether the returned entity reference should be in hexadecimal notation (otherwise it is in decimal notation).
 * @return string
 */
/** @refcount 1 */
function mb_encode_numericentity(string $string, array $map, ?string $encoding = null, bool $hex = false): string {}

/** @genstubs-expose-comment-block
 * Decode HTML numeric string reference to character
 * @param string $string The string being decoded.
 * @param array $map map is an array that specifies the code area to convert.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
/** @refcount 1 */
function mb_decode_numericentity(string $string, array $map, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Send encoded mail
 * @param string $to The mail addresses being sent to. Multiple recipients may be specified by putting a comma between each address in to. This parameter is not automatically encoded.
 * @param string $subject The subject of the mail.
 * @param string $message The message of the mail.
 * @param array|string $additional_headers String or array to be inserted at the end of the email header.
 * @param string|null $additional_params additional_params is a MTA command line parameter. It is useful when setting the correct Return-Path header when using sendmail.
 * @return bool
 */
function mb_send_mail(string $to, string $subject, string $message, array|string $additional_headers = [], ?string $additional_params = null): bool {}

/** @genstubs-expose-comment-block
 * Get internal settings of mbstring
 * @param string $type If type is not specified or is specified as "all", "internal_encoding", "http_input", "http_output", "http_output_conv_mimetypes", "mail_charset", "mail_header_encoding", "mail_body_encoding", "illegal_chars", "encoding_translation", "language", "detect_order", "substitute_character" and "strict_detection" will be returned.
 * @return array|string|int|false|null
 */
/**
 * @return array<int|string, int|string|array>|string|int|false|null
 * @refcount 1
 */
function mb_get_info(string $type = "all"): array|string|int|false|null {}

/** @genstubs-expose-comment-block
 * Check if strings are valid for the specified encoding
 * @param array|string|null $value The byte stream or array to check. If it is omitted, this function checks all the input from the beginning of the request.
 * @param string|null $encoding The expected encoding.
 * @return bool
 */
function mb_check_encoding(array|string|null $value = null, ?string $encoding = null): bool {}

/** @genstubs-expose-comment-block
 * Replace ill-formed byte sequences with the substitute character
 * @return string
 */
function mb_scrub(string $string, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Get Unicode code point of character
 * @return int|false
 */
function mb_ord(string $string, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Return character by Unicode code point value
 * @return string|false
 */
function mb_chr(int $codepoint, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Pad a multibyte string to a certain length with another multibyte string
 * @param string $string The input string.
 * @param int $length If the value of length is negative, less than, or equal to the length of the input string, no padding takes place, and string will be returned.
 * @param string $pad_string The pad_string may be truncated if the required number of padding characters can't be evenly divided by the pad_string's length.
 * @param int $pad_type Optional argument pad_type can be STR_PAD_RIGHT, STR_PAD_LEFT, or STR_PAD_BOTH. By default STR_PAD_RIGHT.
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string
 */
function mb_str_pad(string $string, int $length, string $pad_string = " ", int $pad_type = STR_PAD_RIGHT, ?string $encoding = null): string {}

#ifdef HAVE_MBREGEX
/** @genstubs-expose-comment-block
 * Set/Get character encoding for multibyte regex
 * @param string|null $encoding The encoding parameter is the character encoding. If it is omitted or null, the internal character encoding value will be used.
 * @return string|bool
 */
/** @refcount 1 */
function mb_regex_encoding(?string $encoding = null): string|bool {}

/** @genstubs-expose-comment-block
 * Regular expression match with multibyte support
 * @param string $pattern The search pattern.
 * @param string $string The search string.
 * @param array $matches If matches are found for parenthesized substrings of pattern and the function is called with the third argument matches, the matches will be stored in the elements of the array matches. If no matches are found, matches is set to an empty array.
 * @return bool
 */
/** @param array $matches */
function mb_ereg(string $pattern, string $string, &$matches = null): bool {}

/** @genstubs-expose-comment-block
 * Regular expression match ignoring case with multibyte support
 * @param string $pattern The regular expression pattern.
 * @param string $string The string being searched.
 * @param array $matches If matches are found for parenthesized substrings of pattern and the function is called with the third argument matches, the matches will be stored in the elements of the array matches. If no matches are found, matches is set to an empty array.
 * @return bool
 */
/** @param array $matches */
function mb_eregi(string $pattern, string $string, &$matches = null): bool {}

/** @genstubs-expose-comment-block
 * Replace regular expression with multibyte support
 * @param string $pattern The regular expression pattern.
 * @param string $replacement The replacement text.
 * @param string $string The string being checked.
 * @return string|false|null
 */
/** @refcount 1 */
function mb_ereg_replace(string $pattern, string $replacement, string $string, ?string $options = null): string|false|null {}

/** @genstubs-expose-comment-block
 * Replace regular expression with multibyte support ignoring case
 * @param string $pattern The regular expression pattern.  Multibyte characters may be used. The case will be ignored.
 * @param string $replacement The replacement text.
 * @param string $string The searched string.
 * @return string|false|null
 */
/** @refcount 1 */
function mb_eregi_replace(string $pattern, string $replacement, string $string, ?string $options = null): string|false|null {}

/** @genstubs-expose-comment-block
 * Perform a regular expression search and replace with multibyte support using a callback
 * @param string $pattern The regular expression pattern.
 * @param callable $callback A callback that will be called and passed an array of matched elements in the  string string. The callback should return the replacement string.
 * @param string $string The string being checked.
 * @param string|null $options The search option. See mb_regex_set_options for explanation.
 * @return string|false|null
 */
/** @refcount 1 */
function mb_ereg_replace_callback(string $pattern, callable $callback, string $string, ?string $options = null): string|false|null {}

/** @genstubs-expose-comment-block
 * Split multibyte string using regular expression
 * @param string $pattern The regular expression pattern.
 * @param string $string The string being split.
 * @return array|false
 */
/**
 * @return array<int, string>|false
 * @refcount 1
 */
function mb_split(string $pattern, string $string, int $limit = -1): array|false {}

/** @genstubs-expose-comment-block
 * Regular expression match for multibyte string
 * @param string $pattern The regular expression pattern.
 * @param string $string The string being evaluated.
 * @param string|null $options The search option. See mb_regex_set_options for explanation.
 * @return bool
 */
function mb_ereg_match(string $pattern, string $string, ?string $options = null): bool {}

/** @genstubs-expose-comment-block
 * Multibyte regular expression match for predefined multibyte string
 * @param string|null $pattern The search pattern.
 * @param string|null $options The search option. See mb_regex_set_options for explanation.
 * @return bool
 */
function mb_ereg_search(?string $pattern = null, ?string $options = null): bool {}

/** @genstubs-expose-comment-block
 * Returns position and length of a matched part of the multibyte regular expression for a predefined multibyte string
 * @param string|null $pattern The search pattern.
 * @param string|null $options The search option. See mb_regex_set_options for explanation.
 * @return array|false
 */
/**
 * @return array<int, int>|false
 * @refcount 1
 */
function mb_ereg_search_pos(?string $pattern = null, ?string $options = null): array|false {}

/** @genstubs-expose-comment-block
 * Returns the matched part of a multibyte regular expression
 * @param string|null $pattern The search pattern.
 * @param string|null $options The search option. See mb_regex_set_options for explanation.
 * @return array|false
 */
/**
 * @return array<int|string, string|false>|false
 * @refcount 1
 */
function mb_ereg_search_regs(?string $pattern = null, ?string $options = null): array|false {}

/** @genstubs-expose-comment-block
 * Setup string and regular expression for a multibyte regular expression match
 * @param string $string The search string.
 * @param string|null $pattern The search pattern.
 * @param string|null $options The search option. See mb_regex_set_options for explanation.
 * @return bool
 */
function mb_ereg_search_init(string $string, ?string $pattern = null, ?string $options = null): bool {}

/** @genstubs-expose-comment-block
 * Retrieve the result from the last multibyte regular expression match
 * @return array|false
 */
/**
 * @return array<int|string, string|false>|false
 * @refcount 1
 */
function mb_ereg_search_getregs(): array|false {}

/** @genstubs-expose-comment-block
 * Returns start point for next regular expression match
 * @return int
 */
function mb_ereg_search_getpos(): int {}

/** @genstubs-expose-comment-block
 * Set start point of next regular expression match
 * @param int $offset The position to set. If it is negative, it counts from the end of the string.
 * @return bool
 */
function mb_ereg_search_setpos(int $offset): bool {}

/** @genstubs-expose-comment-block
 * Set/Get the default options for mbregex functions
 * @param string|null $options The options to set. This is a string where each character is an option. To set a mode, the mode character must be the last one set, however there can only be set one mode but multiple options.
 * @return string
 */
/** @refcount 1 */
function mb_regex_set_options(?string $options = null): string {}
#endif
