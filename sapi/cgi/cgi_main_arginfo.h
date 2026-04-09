/* This is a generated file, edit cgi_main.stub.php instead.
 * Stub hash: 3d174cc41b38fe68a49fd1f7297fe53fdda309ae */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_apache_child_terminate, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_apache_request_headers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_getallheaders arginfo_apache_request_headers

#define arginfo_apache_response_headers arginfo_apache_request_headers

ZEND_FUNCTION(apache_child_terminate);
ZEND_FUNCTION(apache_request_headers);
ZEND_FUNCTION(apache_response_headers);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("apache_child_terminate", zif_apache_child_terminate, arginfo_apache_child_terminate, 0, NULL, "/**\n * Terminate apache process after this request\n * @return void\n */")
	ZEND_RAW_FENTRY("apache_request_headers", zif_apache_request_headers, arginfo_apache_request_headers, 0, NULL, "/**\n * Fetch all HTTP request headers\n * @return array\n */")
	ZEND_RAW_FENTRY("getallheaders", zif_apache_request_headers, arginfo_getallheaders, 0, NULL, "/**\n * Fetch all HTTP request headers\n * @return array\n */")
	ZEND_RAW_FENTRY("apache_response_headers", zif_apache_response_headers, arginfo_apache_response_headers, 0, NULL, "/**\n * Fetch all HTTP response headers\n * @return array\n */")
	ZEND_FE_END
};
