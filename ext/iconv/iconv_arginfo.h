/* This is a generated file, edit iconv.stub.php instead.
 * Stub hash: fa68bf68f098ec82fd4710265385efe0dced179a */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_strlen, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "If encoding parameter is omitted or null, string is assumed to be encoded in iconv.internal_encoding.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_substr, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The original string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "If offset is non-negative, iconv_substr cuts the portion out of string beginning at offset'th character, counting from zero.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "If length is given and is positive, the return value will contain at most length characters of the portion that begins at offset (depending on the length of string).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_strpos, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The entire string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The searched substring.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The optional offset parameter specifies the position from which the search should be performed. If the offset is negative, it is counted from the end of the string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_strrpos, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The entire string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The searched substring.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_mime_encode, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, field_name, IS_STRING, 0, "The field name.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, field_value, IS_STRING, 0, "The field value.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "You can control the behaviour of iconv_mime_encode by specifying an associative array that contains configuration items to the optional third parameter options. The items supported by iconv_mime_encode are listed below. Note that item names are treated case-sensitive. Configuration items supported by iconv_mime_encode Item Type Description Default value Example scheme string Specifies the method to encode a field value by. The value of this item may be either \"B\" or \"Q\", where \"B\" stands for base64 encoding scheme and \"Q\" stands for quoted-printable encoding scheme. B B input-charset string Specifies the character set in which the first parameter field_name and the second parameter field_value are presented. If not given, iconv_mime_encode assumes those parameters are presented to it in the iconv.internal_encoding ini setting. iconv.internal_encoding ISO-8859-1 output-charset string Specifies the character set to use to compose the MIME header. iconv.internal_encoding UTF-8 line-length int Specifies the maximum length of the header lines. The resulting header is \"folded\" to a set of multiple lines in case the resulting header field would be longer than the value of this parameter, according to RFC2822 - Internet Message Format. If not given, the length will be limited to 76 characters. 76 996 line-break-chars string Specifies the sequence of characters to append to each line as an end-of-line sign when \"folding\" is performed on a long header field. If not given, this defaults to \"\\r \" (CR LF). Note that this parameter is always treated as an ASCII string regardless of the value of input-charset. \\r")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_mime_decode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The encoded header, as a string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "0", "mode determines the behaviour in the event iconv_mime_decode encounters a malformed MIME header field. You can specify any combination of the following bitmasks. Bitmasks acceptable to iconv_mime_decode Value Constant Description 1 ICONV_MIME_DECODE_STRICT If set, the given header is decoded in full conformance with the standards defined in RFC2047. This option is disabled by default because there are a lot of broken mail user agents that don't follow the specification and don't produce correct MIME headers. 2 ICONV_MIME_DECODE_CONTINUE_ON_ERROR If set, iconv_mime_decode_headers attempts to ignore any grammatical errors and continue to process a given header.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The optional encoding parameter specifies the character set to represent the result by. If omitted or null, iconv.internal_encoding will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_mime_decode_headers, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, headers, IS_STRING, 0, "The encoded headers, as a string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "0", "mode determines the behaviour in the event iconv_mime_decode_headers encounters a malformed MIME header field. You can specify any combination of the following bitmasks. Bitmasks acceptable to iconv_mime_decode_headers Value Constant Description 1 ICONV_MIME_DECODE_STRICT If set, the given header is decoded in full conformance with the standards defined in RFC2047. This option is disabled by default because there are a lot of broken mail user agents that don't follow the specification and don't produce correct MIME headers. 2 ICONV_MIME_DECODE_CONTINUE_ON_ERROR If set, iconv_mime_decode_headers attempts to ignore any grammatical errors and continue to process a given header.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The optional encoding parameter specifies the character set to represent the result by. If omitted or null, iconv.internal_encoding will be used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, from_encoding, IS_STRING, 0, "The current encoding used to interpret string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to_encoding, IS_STRING, 0, "The desired encoding of the result.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be converted.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_iconv_set_encoding, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, type, IS_STRING, 0, "The value of type can be any one of these: input_encoding output_encoding internal_encoding")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, encoding, IS_STRING, 0, "The character set.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iconv_get_encoding, 0, 0, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, type, IS_STRING, 0, "\"all\"", "The value of the optional type can be: all input_encoding output_encoding internal_encoding")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(iconv_strlen);
ZEND_FUNCTION(iconv_substr);
ZEND_FUNCTION(iconv_strpos);
ZEND_FUNCTION(iconv_strrpos);
ZEND_FUNCTION(iconv_mime_encode);
ZEND_FUNCTION(iconv_mime_decode);
ZEND_FUNCTION(iconv_mime_decode_headers);
ZEND_FUNCTION(iconv);
ZEND_FUNCTION(iconv_set_encoding);
ZEND_FUNCTION(iconv_get_encoding);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("iconv_strlen", zif_iconv_strlen, arginfo_iconv_strlen, 0, NULL, "/**\n * Returns the character count of string\n * @param string $string The string.\n * @param string|null $encoding If encoding parameter is omitted or null, string is assumed to be encoded in iconv.internal_encoding.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("iconv_substr", zif_iconv_substr, arginfo_iconv_substr, 0, NULL, "/**\n * Cut out part of a string\n * @param string $string The original string.\n * @param int $offset If offset is non-negative, iconv_substr cuts the portion out of string beginning at offset\'th character, counting from zero.\n * @param int|null $length If length is given and is positive, the return value will contain at most length characters of the portion that begins at offset (depending on the length of string).\n * @param string|null $encoding If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("iconv_strpos", zif_iconv_strpos, arginfo_iconv_strpos, 0, NULL, "/**\n * Finds position of first occurrence of a needle within a haystack\n * @param string $haystack The entire string.\n * @param string $needle The searched substring.\n * @param int $offset The optional offset parameter specifies the position from which the search should be performed. If the offset is negative, it is counted from the end of the string.\n * @param string|null $encoding If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("iconv_strrpos", zif_iconv_strrpos, arginfo_iconv_strrpos, 0, NULL, "/**\n * Finds the last occurrence of a needle within a haystack\n * @param string $haystack The entire string.\n * @param string $needle The searched substring.\n * @param string|null $encoding If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("iconv_mime_encode", zif_iconv_mime_encode, arginfo_iconv_mime_encode, 0, NULL, "/**\n * Composes a MIME header field\n * @param string $field_name The field name.\n * @param string $field_value The field value.\n * @param array $options You can control the behaviour of iconv_mime_encode by specifying an associative array that contains configuration items to the optional third parameter options. The items supported by iconv_mime_encode are listed below. Note that item names are treated case-sensitive. Configuration items supported by iconv_mime_encode Item Type Description Default value Example scheme string Specifies the method to encode a field value by. The value of this item may be either \"B\" or \"Q\", where \"B\" stands for base64 encoding scheme and \"Q\" stands for quoted-printable encoding scheme. B B input-charset string Specifies the character set in which the first parameter field_name and the second parameter field_value are presented. If not given, iconv_mime_encode assumes those parameters are presented to it in the iconv.internal_encoding ini setting. iconv.internal_encoding ISO-8859-1 output-charset string Specifies the character set to use to compose the MIME header. iconv.internal_encoding UTF-8 line-length int Specifies the maximum length of the header lines. The resulting header is \"folded\" to a set of multiple lines in case the resulting header field would be longer than the value of this parameter, according to RFC2822 - Internet Message Format. If not given, the length will be limited to 76 characters. 76 996 line-break-chars string Specifies the sequence of characters to append to each line as an end-of-line sign when \"folding\" is performed on a long header field. If not given, this defaults to \"\\r \" (CR LF). Note that this parameter is always treated as an ASCII string regardless of the value of input-charset. \\r   \n * @return string|false\n */")
	ZEND_RAW_FENTRY("iconv_mime_decode", zif_iconv_mime_decode, arginfo_iconv_mime_decode, 0, NULL, "/**\n * Decodes a MIME header field\n * @param string $string The encoded header, as a string.\n * @param int $mode mode determines the behaviour in the event iconv_mime_decode encounters a malformed MIME header field. You can specify any combination of the following bitmasks. Bitmasks acceptable to iconv_mime_decode Value Constant Description 1 ICONV_MIME_DECODE_STRICT If set, the given header is decoded in full conformance with the standards defined in RFC2047. This option is disabled by default because there are a lot of broken mail user agents that don\'t follow the specification and don\'t produce correct MIME headers. 2 ICONV_MIME_DECODE_CONTINUE_ON_ERROR If set, iconv_mime_decode_headers attempts to ignore any grammatical errors and continue to process a given header.\n * @param string|null $encoding The optional encoding parameter specifies the character set to represent the result by. If omitted or null, iconv.internal_encoding will be used.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("iconv_mime_decode_headers", zif_iconv_mime_decode_headers, arginfo_iconv_mime_decode_headers, 0, NULL, "/**\n * Decodes multiple MIME header fields at once\n * @param string $headers The encoded headers, as a string.\n * @param int $mode mode determines the behaviour in the event iconv_mime_decode_headers encounters a malformed MIME header field. You can specify any combination of the following bitmasks. Bitmasks acceptable to iconv_mime_decode_headers Value Constant Description 1 ICONV_MIME_DECODE_STRICT If set, the given header is decoded in full conformance with the standards defined in RFC2047. This option is disabled by default because there are a lot of broken mail user agents that don\'t follow the specification and don\'t produce correct MIME headers. 2 ICONV_MIME_DECODE_CONTINUE_ON_ERROR If set, iconv_mime_decode_headers attempts to ignore any grammatical errors and continue to process a given header.\n * @param string|null $encoding The optional encoding parameter specifies the character set to represent the result by. If omitted or null, iconv.internal_encoding will be used.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("iconv", zif_iconv, arginfo_iconv, 0, NULL, "/**\n * Convert a string from one character encoding to another\n * @param string $from_encoding The current encoding used to interpret string.\n * @param string $to_encoding The desired encoding of the result.\n * @param string $string The string to be converted.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("iconv_set_encoding", zif_iconv_set_encoding, arginfo_iconv_set_encoding, 0, NULL, "/**\n * Set current setting for character encoding conversion\n * @param string $type The value of type can be any one of these: input_encoding output_encoding internal_encoding\n * @param string $encoding The character set.\n * @return bool\n */")
	ZEND_RAW_FENTRY("iconv_get_encoding", zif_iconv_get_encoding, arginfo_iconv_get_encoding, 0, NULL, "/**\n * Retrieve internal configuration variables of iconv extension\n * @param string $type The value of the optional type can be: all input_encoding output_encoding internal_encoding\n * @return array|string|false\n */")
	ZEND_FE_END
};

static void register_iconv_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("ICONV_IMPL", PHP_ICONV_IMPL_VALUE, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("ICONV_VERSION", get_iconv_version(), CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ICONV_MIME_DECODE_STRICT", PHP_ICONV_MIME_DECODE_STRICT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ICONV_MIME_DECODE_CONTINUE_ON_ERROR", PHP_ICONV_MIME_DECODE_CONTINUE_ON_ERROR, CONST_PERSISTENT);
}
