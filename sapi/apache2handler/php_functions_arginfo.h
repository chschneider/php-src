/* This is a generated file, edit php_functions.stub.php instead.
 * Stub hash: 4629a14c588e7001ee8884334655abe67f069bc3 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_apache_lookup_uri, 0, 1, MAY_BE_OBJECT|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The filename (URI) that's being requested.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_virtual, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, uri, IS_STRING, 0, "The file that the virtual command will be performed on.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_apache_request_headers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_getallheaders arginfo_apache_request_headers

#define arginfo_apache_response_headers arginfo_apache_request_headers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_apache_note, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, note_name, IS_STRING, 0, "The name of the note.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, note_value, IS_STRING, 1, "null", "The value of the note.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_apache_setenv, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, variable, IS_STRING, 0, "The environment variable that's being set.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_STRING, 0, "The new variable value.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, walk_to_top, _IS_BOOL, 0, "false", "Whether to set the top-level variable available to all Apache layers.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_apache_getenv, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, variable, IS_STRING, 0, "The Apache environment variable")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, walk_to_top, _IS_BOOL, 0, "false", "Whether to get the top-level variable available to all Apache layers.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_apache_get_version, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#define arginfo_apache_get_modules arginfo_apache_request_headers

ZEND_FUNCTION(apache_lookup_uri);
ZEND_FUNCTION(virtual);
ZEND_FUNCTION(apache_request_headers);
ZEND_FUNCTION(apache_response_headers);
ZEND_FUNCTION(apache_note);
ZEND_FUNCTION(apache_setenv);
ZEND_FUNCTION(apache_getenv);
ZEND_FUNCTION(apache_get_version);
ZEND_FUNCTION(apache_get_modules);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("apache_lookup_uri", zif_apache_lookup_uri, arginfo_apache_lookup_uri, 0, NULL, "/**\n * Perform a partial request for the specified URI and return all info about it\n * @param string $filename The filename (URI) that\'s being requested.\n * @return object|false\n */")
	ZEND_RAW_FENTRY("virtual", zif_virtual, arginfo_virtual, 0, NULL, "/**\n * Perform an Apache sub-request\n * @param string $uri The file that the virtual command will be performed on.\n * @return bool\n */")
	ZEND_RAW_FENTRY("apache_request_headers", zif_apache_request_headers, arginfo_apache_request_headers, 0, NULL, "/**\n * Fetch all HTTP request headers\n * @return array\n */")
	ZEND_RAW_FENTRY("getallheaders", zif_apache_request_headers, arginfo_getallheaders, 0, NULL, "/**\n * Fetch all HTTP request headers\n * @return array\n */")
	ZEND_RAW_FENTRY("apache_response_headers", zif_apache_response_headers, arginfo_apache_response_headers, 0, NULL, "/**\n * Fetch all HTTP response headers\n * @return array\n */")
	ZEND_RAW_FENTRY("apache_note", zif_apache_note, arginfo_apache_note, 0, NULL, "/**\n * Get and set apache request notes\n * @param string $note_name The name of the note.\n * @param string|null $note_value The value of the note.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("apache_setenv", zif_apache_setenv, arginfo_apache_setenv, 0, NULL, "/**\n * Set an Apache subprocess_env variable\n * @param string $variable The environment variable that\'s being set.\n * @param string $value The new variable value.\n * @param bool $walk_to_top Whether to set the top-level variable available to all Apache layers.\n * @return bool\n */")
	ZEND_RAW_FENTRY("apache_getenv", zif_apache_getenv, arginfo_apache_getenv, 0, NULL, "/**\n * Get an Apache subprocess_env variable\n * @param string $variable The Apache environment variable\n * @param bool $walk_to_top Whether to get the top-level variable available to all Apache layers.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("apache_get_version", zif_apache_get_version, arginfo_apache_get_version, 0, NULL, "/**\n * Fetch Apache version\n * @return string|false\n */")
	ZEND_RAW_FENTRY("apache_get_modules", zif_apache_get_modules, arginfo_apache_get_modules, 0, NULL, "/**\n * Get a list of loaded Apache modules\n * @return array\n */")
	ZEND_FE_END
};
