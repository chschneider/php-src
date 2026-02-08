<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue XML_ERROR_NONE
 */
const XML_ERROR_NONE = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_NO_MEMORY
 */
const XML_ERROR_NO_MEMORY = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_SYNTAX
 */
const XML_ERROR_SYNTAX = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_NO_ELEMENTS
 */
const XML_ERROR_NO_ELEMENTS = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_INVALID_TOKEN
 */
const XML_ERROR_INVALID_TOKEN = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_UNCLOSED_TOKEN
 */
const XML_ERROR_UNCLOSED_TOKEN = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_PARTIAL_CHAR
 */
const XML_ERROR_PARTIAL_CHAR = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_TAG_MISMATCH
 */
const XML_ERROR_TAG_MISMATCH = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_DUPLICATE_ATTRIBUTE
 */
const XML_ERROR_DUPLICATE_ATTRIBUTE = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_JUNK_AFTER_DOC_ELEMENT
 */
const XML_ERROR_JUNK_AFTER_DOC_ELEMENT = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_PARAM_ENTITY_REF
 */
const XML_ERROR_PARAM_ENTITY_REF = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_UNDEFINED_ENTITY
 */
const XML_ERROR_UNDEFINED_ENTITY = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_RECURSIVE_ENTITY_REF
 */
const XML_ERROR_RECURSIVE_ENTITY_REF = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_ASYNC_ENTITY
 */
const XML_ERROR_ASYNC_ENTITY = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_BAD_CHAR_REF
 */
const XML_ERROR_BAD_CHAR_REF = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_BINARY_ENTITY_REF
 */
const XML_ERROR_BINARY_ENTITY_REF = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF
 */
const XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_MISPLACED_XML_PI
 */
const XML_ERROR_MISPLACED_XML_PI = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_UNKNOWN_ENCODING
 */
const XML_ERROR_UNKNOWN_ENCODING = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_INCORRECT_ENCODING
 */
const XML_ERROR_INCORRECT_ENCODING = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_UNCLOSED_CDATA_SECTION
 */
const XML_ERROR_UNCLOSED_CDATA_SECTION = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERROR_EXTERNAL_ENTITY_HANDLING
 */
const XML_ERROR_EXTERNAL_ENTITY_HANDLING = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_XML_OPTION_CASE_FOLDING
 */
const XML_OPTION_CASE_FOLDING = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_XML_OPTION_TARGET_ENCODING
 */
const XML_OPTION_TARGET_ENCODING = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_XML_OPTION_SKIP_TAGSTART
 */
const XML_OPTION_SKIP_TAGSTART = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_XML_OPTION_SKIP_WHITE
 */
const XML_OPTION_SKIP_WHITE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_XML_OPTION_PARSE_HUGE
 */
const XML_OPTION_PARSE_HUGE = UNKNOWN;

/**
 * @var string
 * @cvalue PHP_XML_SAX_IMPL
 */
const XML_SAX_IMPL = UNKNOWN;

/** @genstubs-expose-comment-block
 * Create an XML parser
 * @param string|null $encoding The input encoding is automatically detected, so that the encoding parameter specifies only the output encoding. If empty string is passed, the parser attempts to identify which encoding the document is encoded in by looking at the heading 3 or 4 bytes. The default output charset is UTF-8. The supported encodings are ISO-8859-1, UTF-8 and US-ASCII.
 * @return XMLParser
 */
function xml_parser_create(?string $encoding = null): XMLParser {}

/** @genstubs-expose-comment-block
 * Create an XML parser with namespace support
 * @param string|null $encoding The input encoding is automatically detected, so that the encoding parameter specifies only the output encoding. The default output charset is UTF-8. The supported encodings are ISO-8859-1, UTF-8 and US-ASCII.
 * @param string $separator With a namespace aware parser tag parameters passed to the various handler functions will consist of namespace and tag name separated by the string specified in separator.
 * @return XMLParser
 */
function xml_parser_create_ns(?string $encoding = null, string $separator = ":"): XMLParser {}

#[\Deprecated(since: '8.4', message: 'provide a proper method callable to xml_set_*_handler() functions')]
/** @genstubs-expose-comment-block
 * Use XML Parser within an object
 * @param XMLParser $parser A reference to the XML parser to use inside the object.
 * @param object $object The object where to use the XML parser.
 * @return true
 */
function xml_set_object(XMLParser $parser, object $object): true {}

/** @genstubs-expose-comment-block
 * Set up start and end element handlers
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $start_handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @param callable|string|null $end_handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_element_handler(XMLParser $parser, callable|string|null $start_handler, callable|string|null $end_handler): true {}

/** @genstubs-expose-comment-block
 * Set up character data handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_character_data_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up processing instruction (PI) handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_processing_instruction_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up default handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_default_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up unparsed entity declaration handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_unparsed_entity_decl_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up notation declaration handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_notation_decl_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up external entity reference handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_external_entity_ref_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up start namespace declaration handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_start_namespace_decl_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Set up end namespace declaration handler
 * @param XMLParser $parser The XML parser.
 * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.
 * @return true
 */
function xml_set_end_namespace_decl_handler(XMLParser $parser, callable|string|null $handler): true {}

/** @genstubs-expose-comment-block
 * Start parsing an XML document
 * @param XMLParser $parser A reference to the XML parser to use.
 * @param string $data Chunk of data to parse.  A document may be parsed piece-wise by calling xml_parse several times with new data, as long as the is_final parameter is set and true when the last data is parsed.
 * @param bool $is_final If set and true, data is the last piece of data sent in this parse.
 * @return int
 */
function xml_parse(XMLParser $parser, string $data, bool $is_final = false): int {}

/** @genstubs-expose-comment-block
 * Parse XML data into an array structure
 * @param XMLParser $parser A reference to the XML parser.
 * @param string $data A string containing the XML data.
 * @param array $values An array containing the values of the XML data
 * @param array $index An array containing pointers to the location of the appropriate values in the $values.
 * @return int|false
 */
/**
 * @param array $values
 * @param array $index
 */
function xml_parse_into_struct(XMLParser $parser, string $data, &$values, &$index = null): int|false {}

/** @genstubs-expose-comment-block
 * Get XML parser error code
 * @param XMLParser $parser A reference to the XML parser to get error code from.
 * @return int
 */
function xml_get_error_code(XMLParser $parser): int {}

/** @genstubs-expose-comment-block
 * Get XML parser error string
 * @param int $error_code An error code from xml_get_error_code.
 * @return string|null
 */
/** @refcount 1 */
function xml_error_string(int $error_code): ?string {}

/** @genstubs-expose-comment-block
 * Get current line number for an XML parser
 * @param XMLParser $parser A reference to the XML parser to get line number from.
 * @return int
 */
function xml_get_current_line_number(XMLParser $parser): int {}

/** @genstubs-expose-comment-block
 * Get current column number for an XML parser
 * @param XMLParser $parser A reference to the XML parser to get column number from.
 * @return int
 */
function xml_get_current_column_number(XMLParser $parser): int {}

/** @genstubs-expose-comment-block
 * Get current byte index for an XML parser
 * @param XMLParser $parser A reference to the XML parser to get byte index from.
 * @return int
 */
function xml_get_current_byte_index(XMLParser $parser): int {}

#[\Deprecated(since: '8.5', message: "as it has no effect since PHP 8.0")]
/** @genstubs-expose-comment-block
 * Free an XML parser
 * @return bool
 */
function xml_parser_free(XMLParser $parser): bool {}

/** @genstubs-expose-comment-block
 * Set options in an XML parser
 * @param XMLParser $parser A reference to the XML parser to set an option in.
 * @param int $option Which option to set.  See below.
 * @param string|int|bool $value The option's new value.
 * @return bool
 */
/** @param string|int|bool $value */
function xml_parser_set_option(XMLParser $parser, int $option, $value): bool {}

/** @genstubs-expose-comment-block
 * Get options from an XML parser
 * @return string|int|bool
 */
/** @refcount 1 */
function xml_parser_get_option(XMLParser $parser, int $option): string|int|bool {}

/**
 * @strict-properties
 * @not-serializable
 */
final class XMLParser
{
}
