/* This is a generated file, edit opcache.stub.php instead.
 * Stub hash: e9de8542ce30fb6c1047950e2475dc297757001c */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_opcache_reset, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_opcache_get_status, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, include_scripts, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_opcache_compile_file, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_opcache_invalidate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, force, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_opcache_jit_blacklist, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, closure, Closure, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_opcache_get_configuration, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#define arginfo_opcache_is_script_cached arginfo_opcache_compile_file

#define arginfo_opcache_is_script_cached_in_file_cache arginfo_opcache_compile_file

ZEND_FUNCTION(opcache_reset);
ZEND_FUNCTION(opcache_get_status);
ZEND_FUNCTION(opcache_compile_file);
ZEND_FUNCTION(opcache_invalidate);
ZEND_FUNCTION(opcache_jit_blacklist);
ZEND_FUNCTION(opcache_get_configuration);
ZEND_FUNCTION(opcache_is_script_cached);
ZEND_FUNCTION(opcache_is_script_cached_in_file_cache);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("opcache_reset", zif_opcache_reset, arginfo_opcache_reset, 0, NULL, "/**\n * Resets the contents of the opcode cache\n * @return bool\n */")
	ZEND_RAW_FENTRY("opcache_get_status", zif_opcache_get_status, arginfo_opcache_get_status, 0, NULL, "/**\n * Get status information about the cache\n * @return array|false\n */")
	ZEND_RAW_FENTRY("opcache_compile_file", zif_opcache_compile_file, arginfo_opcache_compile_file, 0, NULL, "/**\n * Compiles and caches a PHP script without executing it\n * @return bool\n */")
	ZEND_RAW_FENTRY("opcache_invalidate", zif_opcache_invalidate, arginfo_opcache_invalidate, 0, NULL, "/**\n * Invalidates a cached script\n * @return bool\n */")
	ZEND_RAW_FENTRY("opcache_jit_blacklist", zif_opcache_jit_blacklist, arginfo_opcache_jit_blacklist, 0, NULL, "/**\n * Blacklists a function from being JIT compiled\n * @return void\n */")
	ZEND_RAW_FENTRY("opcache_get_configuration", zif_opcache_get_configuration, arginfo_opcache_get_configuration, 0, NULL, "/**\n * Get configuration information about the cache\n * @return array|false\n */")
	ZEND_RAW_FENTRY("opcache_is_script_cached", zif_opcache_is_script_cached, arginfo_opcache_is_script_cached, 0, NULL, "/**\n * Tells whether a script is cached in OPCache\n * @return bool\n */")
	ZEND_RAW_FENTRY("opcache_is_script_cached_in_file_cache", zif_opcache_is_script_cached_in_file_cache, arginfo_opcache_is_script_cached_in_file_cache, 0, NULL, "/**\n * Tells whether a script is cached in OPCache file cache\n * @return bool\n */")
	ZEND_FE_END
};
