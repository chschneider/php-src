<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue PHP_ICONV_IMPL_VALUE
 */
const ICONV_IMPL = UNKNOWN;
/**
 * @var string
 * @cvalue get_iconv_version()
 */
const ICONV_VERSION = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ICONV_MIME_DECODE_STRICT
 */
const ICONV_MIME_DECODE_STRICT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ICONV_MIME_DECODE_CONTINUE_ON_ERROR
 */
const ICONV_MIME_DECODE_CONTINUE_ON_ERROR = UNKNOWN;

/** @genstubs-expose-comment-block
 * Returns the character count of string
 * @param string $string The string.
 * @param string|null $encoding If encoding parameter is omitted or null, string is assumed to be encoded in iconv.internal_encoding.
 * @return int|false
 */
function iconv_strlen(string $string, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Cut out part of a string
 * @param string $string The original string.
 * @param int $offset If offset is non-negative, iconv_substr cuts the portion out of string beginning at offset'th character, counting from zero.
 * @param int|null $length If length is given and is positive, the return value will contain at most length characters of the portion that begins at offset (depending on the length of string).
 * @param string|null $encoding If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.
 * @return string|false
 */
/** @refcount 1 */
function iconv_substr(string $string, int $offset, ?int $length = null, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Finds position of first occurrence of a needle within a haystack
 * @param string $haystack The entire string.
 * @param string $needle The searched substring.
 * @param int $offset The optional offset parameter specifies the position from which the search should be performed. If the offset is negative, it is counted from the end of the string.
 * @param string|null $encoding If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.
 * @return int|false
 */
function iconv_strpos(string $haystack, string $needle, int $offset = 0, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Finds the last occurrence of a needle within a haystack
 * @param string $haystack The entire string.
 * @param string $needle The searched substring.
 * @param string|null $encoding If encoding parameter is omitted or null, string are assumed to be encoded in iconv.internal_encoding.
 * @return int|false
 */
function iconv_strrpos(string $haystack, string $needle, ?string $encoding = null): int|false {}

/** @genstubs-expose-comment-block
 * Composes a MIME header field
 * @param string $field_name The field name.
 * @param string $field_value The field value.
 * @param array $options You can control the behaviour of iconv_mime_encode by specifying an associative array that contains configuration items to the optional third parameter options. The items supported by iconv_mime_encode are listed below. Note that item names are treated case-sensitive. Configuration items supported by iconv_mime_encode Item Type Description Default value Example scheme string Specifies the method to encode a field value by. The value of this item may be either "B" or "Q", where "B" stands for base64 encoding scheme and "Q" stands for quoted-printable encoding scheme. B B input-charset string Specifies the character set in which the first parameter field_name and the second parameter field_value are presented. If not given, iconv_mime_encode assumes those parameters are presented to it in the iconv.internal_encoding ini setting. iconv.internal_encoding ISO-8859-1 output-charset string Specifies the character set to use to compose the MIME header. iconv.internal_encoding UTF-8 line-length int Specifies the maximum length of the header lines. The resulting header is "folded" to a set of multiple lines in case the resulting header field would be longer than the value of this parameter, according to RFC2822 - Internet Message Format. If not given, the length will be limited to 76 characters. 76 996 line-break-chars string Specifies the sequence of characters to append to each line as an end-of-line sign when "folding" is performed on a long header field. If not given, this defaults to "\r " (CR LF). Note that this parameter is always treated as an ASCII string regardless of the value of input-charset. \r   
 * @return string|false
 */
/** @refcount 1 */
function iconv_mime_encode(string $field_name, string $field_value, array $options = []): string|false {}

/** @genstubs-expose-comment-block
 * Decodes a MIME header field
 * @param string $string The encoded header, as a string.
 * @param int $mode mode determines the behaviour in the event iconv_mime_decode encounters a malformed MIME header field. You can specify any combination of the following bitmasks. Bitmasks acceptable to iconv_mime_decode Value Constant Description 1 ICONV_MIME_DECODE_STRICT If set, the given header is decoded in full conformance with the standards defined in RFC2047. This option is disabled by default because there are a lot of broken mail user agents that don't follow the specification and don't produce correct MIME headers. 2 ICONV_MIME_DECODE_CONTINUE_ON_ERROR If set, iconv_mime_decode_headers attempts to ignore any grammatical errors and continue to process a given header.
 * @param string|null $encoding The optional encoding parameter specifies the character set to represent the result by. If omitted or null, iconv.internal_encoding will be used.
 * @return string|false
 */
/** @refcount 1 */
function iconv_mime_decode(string $string, int $mode = 0, ?string $encoding = null): string|false {}

/** @genstubs-expose-comment-block
 * Decodes multiple MIME header fields at once
 * @param string $headers The encoded headers, as a string.
 * @param int $mode mode determines the behaviour in the event iconv_mime_decode_headers encounters a malformed MIME header field. You can specify any combination of the following bitmasks. Bitmasks acceptable to iconv_mime_decode_headers Value Constant Description 1 ICONV_MIME_DECODE_STRICT If set, the given header is decoded in full conformance with the standards defined in RFC2047. This option is disabled by default because there are a lot of broken mail user agents that don't follow the specification and don't produce correct MIME headers. 2 ICONV_MIME_DECODE_CONTINUE_ON_ERROR If set, iconv_mime_decode_headers attempts to ignore any grammatical errors and continue to process a given header.
 * @param string|null $encoding The optional encoding parameter specifies the character set to represent the result by. If omitted or null, iconv.internal_encoding will be used.
 * @return array|false
 */
/**
 * @return array<string, string|array>|false
 * @refcount 1
 */
function iconv_mime_decode_headers(string $headers, int $mode = 0, ?string $encoding = null): array|false {}

/** @genstubs-expose-comment-block
 * Convert a string from one character encoding to another
 * @param string $from_encoding The current encoding used to interpret string.
 * @param string $to_encoding The desired encoding of the result.
 * @param string $string The string to be converted.
 * @return string|false
 */
/** @refcount 1 */
function iconv(string $from_encoding, string $to_encoding, string $string): string|false {}

/** @genstubs-expose-comment-block
 * Set current setting for character encoding conversion
 * @param string $type The value of type can be any one of these: input_encoding output_encoding internal_encoding
 * @param string $encoding The character set.
 * @return bool
 */
function iconv_set_encoding(string $type, string $encoding): bool {}

/** @genstubs-expose-comment-block
 * Retrieve internal configuration variables of iconv extension
 * @param string $type The value of the optional type can be: all input_encoding output_encoding internal_encoding
 * @return array|string|false
 */
/**
 * @return array<string, string>|string|false
 * @refcount 1
 */
function iconv_get_encoding(string $type = "all"): array|string|false {}
