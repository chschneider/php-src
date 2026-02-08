/* This is a generated file, edit xml.stub.php instead.
 * Stub hash: 7d10d78b97119b8bd1f37d079cce1497d3d58468 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_xml_parser_create, 0, 0, XMLParser, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The input encoding is automatically detected, so that the encoding parameter specifies only the output encoding. If empty string is passed, the parser attempts to identify which encoding the document is encoded in by looking at the heading 3 or 4 bytes. The default output charset is UTF-8. The supported encodings are ISO-8859-1, UTF-8 and US-ASCII.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_xml_parser_create_ns, 0, 0, XMLParser, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "The input encoding is automatically detected, so that the encoding parameter specifies only the output encoding. The default output charset is UTF-8. The supported encodings are ISO-8859-1, UTF-8 and US-ASCII.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, separator, IS_STRING, 0, "\":\"", "With a namespace aware parser tag parameters passed to the various handler functions will consist of namespace and tag name separated by the string specified in separator.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_set_object, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, parser, XMLParser, 0)
	ZEND_ARG_TYPE_INFO(0, object, IS_OBJECT, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_set_element_handler, 0, 3, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, parser, XMLParser, 0, "The XML parser.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, start_handler, MAY_BE_CALLABLE|MAY_BE_STRING|MAY_BE_NULL, NULL, "If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, end_handler, MAY_BE_CALLABLE|MAY_BE_STRING|MAY_BE_NULL, NULL, "If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_set_character_data_handler, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, parser, XMLParser, 0, "The XML parser.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, handler, MAY_BE_CALLABLE|MAY_BE_STRING|MAY_BE_NULL, NULL, "If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.")
ZEND_END_ARG_INFO()

#define arginfo_xml_set_processing_instruction_handler arginfo_xml_set_character_data_handler

#define arginfo_xml_set_default_handler arginfo_xml_set_character_data_handler

#define arginfo_xml_set_unparsed_entity_decl_handler arginfo_xml_set_character_data_handler

#define arginfo_xml_set_notation_decl_handler arginfo_xml_set_character_data_handler

#define arginfo_xml_set_external_entity_ref_handler arginfo_xml_set_character_data_handler

#define arginfo_xml_set_start_namespace_decl_handler arginfo_xml_set_character_data_handler

#define arginfo_xml_set_end_namespace_decl_handler arginfo_xml_set_character_data_handler

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_parse, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, parser, XMLParser, 0, "A reference to the XML parser to use.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "Chunk of data to parse.  A document may be parsed piece-wise by calling xml_parse several times with new data, as long as the is_final parameter is set and true when the last data is parsed.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, is_final, _IS_BOOL, 0, "false", "If set and true, data is the last piece of data sent in this parse.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_xml_parse_into_struct, 0, 3, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, parser, XMLParser, 0, "A reference to the XML parser.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "A string containing the XML data.")
	ZEND_ARG_INFO(1, values)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, index, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_get_error_code, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, parser, XMLParser, 0, "A reference to the XML parser to get error code from.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_error_string, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, error_code, IS_LONG, 0, "An error code from xml_get_error_code.")
ZEND_END_ARG_INFO()

#define arginfo_xml_get_current_line_number arginfo_xml_get_error_code

#define arginfo_xml_get_current_column_number arginfo_xml_get_error_code

#define arginfo_xml_get_current_byte_index arginfo_xml_get_error_code

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_parser_free, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, parser, XMLParser, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_xml_parser_set_option, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, parser, XMLParser, 0, "A reference to the XML parser to set an option in.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, option, IS_LONG, 0, "Which option to set.  See below.")
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_xml_parser_get_option, 0, 2, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_BOOL)
	ZEND_ARG_OBJ_INFO(0, parser, XMLParser, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(xml_parser_create);
ZEND_FUNCTION(xml_parser_create_ns);
ZEND_FUNCTION(xml_set_object);
ZEND_FUNCTION(xml_set_element_handler);
ZEND_FUNCTION(xml_set_character_data_handler);
ZEND_FUNCTION(xml_set_processing_instruction_handler);
ZEND_FUNCTION(xml_set_default_handler);
ZEND_FUNCTION(xml_set_unparsed_entity_decl_handler);
ZEND_FUNCTION(xml_set_notation_decl_handler);
ZEND_FUNCTION(xml_set_external_entity_ref_handler);
ZEND_FUNCTION(xml_set_start_namespace_decl_handler);
ZEND_FUNCTION(xml_set_end_namespace_decl_handler);
ZEND_FUNCTION(xml_parse);
ZEND_FUNCTION(xml_parse_into_struct);
ZEND_FUNCTION(xml_get_error_code);
ZEND_FUNCTION(xml_error_string);
ZEND_FUNCTION(xml_get_current_line_number);
ZEND_FUNCTION(xml_get_current_column_number);
ZEND_FUNCTION(xml_get_current_byte_index);
ZEND_FUNCTION(xml_parser_free);
ZEND_FUNCTION(xml_parser_set_option);
ZEND_FUNCTION(xml_parser_get_option);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("xml_parser_create", zif_xml_parser_create, arginfo_xml_parser_create, 0, NULL, "/**\n * Create an XML parser\n * @param string|null $encoding The input encoding is automatically detected, so that the encoding parameter specifies only the output encoding. If empty string is passed, the parser attempts to identify which encoding the document is encoded in by looking at the heading 3 or 4 bytes. The default output charset is UTF-8. The supported encodings are ISO-8859-1, UTF-8 and US-ASCII.\n * @return XMLParser\n */")
	ZEND_RAW_FENTRY("xml_parser_create_ns", zif_xml_parser_create_ns, arginfo_xml_parser_create_ns, 0, NULL, "/**\n * Create an XML parser with namespace support\n * @param string|null $encoding The input encoding is automatically detected, so that the encoding parameter specifies only the output encoding. The default output charset is UTF-8. The supported encodings are ISO-8859-1, UTF-8 and US-ASCII.\n * @param string $separator With a namespace aware parser tag parameters passed to the various handler functions will consist of namespace and tag name separated by the string specified in separator.\n * @return XMLParser\n */")
	ZEND_RAW_FENTRY("xml_set_object", zif_xml_set_object, arginfo_xml_set_object, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("xml_set_element_handler", zif_xml_set_element_handler, arginfo_xml_set_element_handler, 0, NULL, "/**\n * Set up start and end element handlers\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $start_handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @param callable|string|null $end_handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_character_data_handler", zif_xml_set_character_data_handler, arginfo_xml_set_character_data_handler, 0, NULL, "/**\n * Set up character data handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_processing_instruction_handler", zif_xml_set_processing_instruction_handler, arginfo_xml_set_processing_instruction_handler, 0, NULL, "/**\n * Set up processing instruction (PI) handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_default_handler", zif_xml_set_default_handler, arginfo_xml_set_default_handler, 0, NULL, "/**\n * Set up default handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_unparsed_entity_decl_handler", zif_xml_set_unparsed_entity_decl_handler, arginfo_xml_set_unparsed_entity_decl_handler, 0, NULL, "/**\n * Set up unparsed entity declaration handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_notation_decl_handler", zif_xml_set_notation_decl_handler, arginfo_xml_set_notation_decl_handler, 0, NULL, "/**\n * Set up notation declaration handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_external_entity_ref_handler", zif_xml_set_external_entity_ref_handler, arginfo_xml_set_external_entity_ref_handler, 0, NULL, "/**\n * Set up external entity reference handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_start_namespace_decl_handler", zif_xml_set_start_namespace_decl_handler, arginfo_xml_set_start_namespace_decl_handler, 0, NULL, "/**\n * Set up start namespace declaration handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_set_end_namespace_decl_handler", zif_xml_set_end_namespace_decl_handler, arginfo_xml_set_end_namespace_decl_handler, 0, NULL, "/**\n * Set up end namespace declaration handler\n * @param XMLParser $parser The XML parser.\n * @param callable|string|null $handler If null is passed, the handler is reset to its default state. An empty string will also reset the handler, however this is deprecated as of PHP 8.4.0.\n * @return true\n */")
	ZEND_RAW_FENTRY("xml_parse", zif_xml_parse, arginfo_xml_parse, 0, NULL, "/**\n * Start parsing an XML document\n * @param XMLParser $parser A reference to the XML parser to use.\n * @param string $data Chunk of data to parse.  A document may be parsed piece-wise by calling xml_parse several times with new data, as long as the is_final parameter is set and true when the last data is parsed.\n * @param bool $is_final If set and true, data is the last piece of data sent in this parse.\n * @return int\n */")
	ZEND_RAW_FENTRY("xml_parse_into_struct", zif_xml_parse_into_struct, arginfo_xml_parse_into_struct, 0, NULL, "/**\n * Parse XML data into an array structure\n * @param XMLParser $parser A reference to the XML parser.\n * @param string $data A string containing the XML data.\n * @param array $values An array containing the values of the XML data\n * @param array $index An array containing pointers to the location of the appropriate values in the $values.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("xml_get_error_code", zif_xml_get_error_code, arginfo_xml_get_error_code, 0, NULL, "/**\n * Get XML parser error code\n * @param XMLParser $parser A reference to the XML parser to get error code from.\n * @return int\n */")
	ZEND_RAW_FENTRY("xml_error_string", zif_xml_error_string, arginfo_xml_error_string, 0, NULL, "/**\n * Get XML parser error string\n * @param int $error_code An error code from xml_get_error_code.\n * @return string|null\n */")
	ZEND_RAW_FENTRY("xml_get_current_line_number", zif_xml_get_current_line_number, arginfo_xml_get_current_line_number, 0, NULL, "/**\n * Get current line number for an XML parser\n * @param XMLParser $parser A reference to the XML parser to get line number from.\n * @return int\n */")
	ZEND_RAW_FENTRY("xml_get_current_column_number", zif_xml_get_current_column_number, arginfo_xml_get_current_column_number, 0, NULL, "/**\n * Get current column number for an XML parser\n * @param XMLParser $parser A reference to the XML parser to get column number from.\n * @return int\n */")
	ZEND_RAW_FENTRY("xml_get_current_byte_index", zif_xml_get_current_byte_index, arginfo_xml_get_current_byte_index, 0, NULL, "/**\n * Get current byte index for an XML parser\n * @param XMLParser $parser A reference to the XML parser to get byte index from.\n * @return int\n */")
	ZEND_RAW_FENTRY("xml_parser_free", zif_xml_parser_free, arginfo_xml_parser_free, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("xml_parser_set_option", zif_xml_parser_set_option, arginfo_xml_parser_set_option, 0, NULL, "/**\n * Set options in an XML parser\n * @param XMLParser $parser A reference to the XML parser to set an option in.\n * @param int $option Which option to set.  See below.\n * @param string|int|bool $value The option\'s new value.\n * @return bool\n */")
	ZEND_RAW_FENTRY("xml_parser_get_option", zif_xml_parser_get_option, arginfo_xml_parser_get_option, 0, NULL, "/**\n * Get options from an XML parser\n * @return string|int|bool\n */")
	ZEND_FE_END
};

static void register_xml_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("XML_ERROR_NONE", XML_ERROR_NONE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_NO_MEMORY", XML_ERROR_NO_MEMORY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_SYNTAX", XML_ERROR_SYNTAX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_NO_ELEMENTS", XML_ERROR_NO_ELEMENTS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_INVALID_TOKEN", XML_ERROR_INVALID_TOKEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_UNCLOSED_TOKEN", XML_ERROR_UNCLOSED_TOKEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_PARTIAL_CHAR", XML_ERROR_PARTIAL_CHAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_TAG_MISMATCH", XML_ERROR_TAG_MISMATCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_DUPLICATE_ATTRIBUTE", XML_ERROR_DUPLICATE_ATTRIBUTE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_JUNK_AFTER_DOC_ELEMENT", XML_ERROR_JUNK_AFTER_DOC_ELEMENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_PARAM_ENTITY_REF", XML_ERROR_PARAM_ENTITY_REF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_UNDEFINED_ENTITY", XML_ERROR_UNDEFINED_ENTITY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_RECURSIVE_ENTITY_REF", XML_ERROR_RECURSIVE_ENTITY_REF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_ASYNC_ENTITY", XML_ERROR_ASYNC_ENTITY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_BAD_CHAR_REF", XML_ERROR_BAD_CHAR_REF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_BINARY_ENTITY_REF", XML_ERROR_BINARY_ENTITY_REF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF", XML_ERROR_ATTRIBUTE_EXTERNAL_ENTITY_REF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_MISPLACED_XML_PI", XML_ERROR_MISPLACED_XML_PI, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_UNKNOWN_ENCODING", XML_ERROR_UNKNOWN_ENCODING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_INCORRECT_ENCODING", XML_ERROR_INCORRECT_ENCODING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_UNCLOSED_CDATA_SECTION", XML_ERROR_UNCLOSED_CDATA_SECTION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_ERROR_EXTERNAL_ENTITY_HANDLING", XML_ERROR_EXTERNAL_ENTITY_HANDLING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_OPTION_CASE_FOLDING", PHP_XML_OPTION_CASE_FOLDING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_OPTION_TARGET_ENCODING", PHP_XML_OPTION_TARGET_ENCODING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_OPTION_SKIP_TAGSTART", PHP_XML_OPTION_SKIP_TAGSTART, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_OPTION_SKIP_WHITE", PHP_XML_OPTION_SKIP_WHITE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("XML_OPTION_PARSE_HUGE", PHP_XML_OPTION_PARSE_HUGE, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("XML_SAX_IMPL", PHP_XML_SAX_IMPL, CONST_PERSISTENT);


	zend_attribute *attribute_Deprecated_func_xml_set_object_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "xml_set_object", sizeof("xml_set_object") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_xml_set_object_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_4));
	attribute_Deprecated_func_xml_set_object_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_xml_set_object_0_arg1_str = zend_string_init("provide a proper method callable to xml_set_*_handler() functions", strlen("provide a proper method callable to xml_set_*_handler() functions"), 1);
	ZVAL_STR(&attribute_Deprecated_func_xml_set_object_0->args[1].value, attribute_Deprecated_func_xml_set_object_0_arg1_str);
	attribute_Deprecated_func_xml_set_object_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_xml_parser_free_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "xml_parser_free", sizeof("xml_parser_free") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_xml_parser_free_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_5));
	attribute_Deprecated_func_xml_parser_free_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_xml_parser_free_0_arg1_str = zend_string_init("as it has no effect since PHP 8.0", strlen("as it has no effect since PHP 8.0"), 1);
	ZVAL_STR(&attribute_Deprecated_func_xml_parser_free_0->args[1].value, attribute_Deprecated_func_xml_parser_free_0_arg1_str);
	attribute_Deprecated_func_xml_parser_free_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
}

static zend_class_entry *register_class_XMLParser(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "XMLParser", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
