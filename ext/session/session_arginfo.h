/* This is a generated file, edit session.stub.php instead.
 * Stub hash: 5d37bf52e4353455102a2a2190d7f6c93e59be71 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_name, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, name, IS_STRING, 1, "null", "The session name references the name of the session, which is used in cookies and URLs (e.g. PHPSESSID). It should contain only alphanumeric characters; it should be short and descriptive (i.e. for users with enabled cookie warnings). If name is specified and not null, the name of the current session is changed to its value.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_module_name, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, module, IS_STRING, 1, "null", "If module is specified and not null, that module will be used instead. Passing \"user\" to this parameter is forbidden. Instead session_set_save_handler has to be called to set a user defined session handler.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_save_path, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, path, IS_STRING, 1, "null", "Session data path. If specified and not null, the path to which data is saved will be changed. session_save_path needs to be called before session_start for that purpose.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_id, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, id, IS_STRING, 1, "null", "If id is specified and not null, it will replace the current session id. session_id needs to be called before session_start for that purpose. Depending on the session handler, not all characters are allowed within the session id. For example, the file session handler only allows characters in the range [a-zA-Z0-9,-]!")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_create_id, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, prefix, IS_STRING, 0, "\"\"", "If prefix is specified, new session id is prefixed by prefix. Not all characters are allowed within the session id.  Characters in the range [a-zA-Z0-9,-] are allowed. Maximum length is 256 characters.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_regenerate_id, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, delete_old_session, _IS_BOOL, 0, "false", "Whether to delete the old associated session file or not. You should not delete old session if you need to avoid races caused by deletion or detectavoid session hijack attacks.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_decode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The encoded data to be stored.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_encode, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_destroy, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_session_unset arginfo_session_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_gc, 0, 0, MAY_BE_LONG|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_get_cookie_params, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_session_write_close arginfo_session_destroy

#define arginfo_session_abort arginfo_session_destroy

#define arginfo_session_reset arginfo_session_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_status, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_register_shutdown, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_session_commit arginfo_session_destroy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_set_save_handler, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, open)
	ZEND_ARG_INFO(0, close)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, read, IS_CALLABLE, 0, "A callable with the following signature: stringread stringsessionId")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, write, IS_CALLABLE, 0, "A callable with the following signature: boolwrite stringsessionId stringdata")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, destroy, IS_CALLABLE, 0, "A callable with the following signature: booldestroy stringsessionId")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, gc, IS_CALLABLE, 0, "A callable with the following signature: boolgc intlifetime")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, create_sid, IS_CALLABLE, 1, "null", "A callable with the following signature: stringcreate_sid")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, validate_sid, IS_CALLABLE, 1, "null", "A callable with the following signature: boolvalidate_sid stringkey")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, update_timestamp, IS_CALLABLE, 1, "null", "A callable with the following signature: boolupdate_timestamp stringkey stringval")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_cache_limiter, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, value, IS_STRING, 1, "null", "If value is specified and not null, the name of the current cache limiter is changed to the new value.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_session_cache_expire, 0, 0, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, value, IS_LONG, 1, "null", "If value is given and not null, the current cache expire is replaced with value.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_set_cookie_params, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, lifetime_or_options, MAY_BE_ARRAY|MAY_BE_LONG, NULL, "When using the first signature, lifetime of the session cookie, defined in seconds.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, path, IS_STRING, 1, "null", "Path on the domain where the cookie will work. Use a single slash ('') for all paths on the domain.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, domain, IS_STRING, 1, "null", "Cookie domain, for example 'www.php.net'. To make cookies visible on all subdomains then the domain must be prefixed with a dot like '.php.net'.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, secure, _IS_BOOL, 1, "null", "If true cookie will only be sent over secure connections.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, httponly, _IS_BOOL, 1, "null", "If set to true then PHP will attempt to send the httponly flag when setting the session cookie.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_session_start, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SessionHandlerInterface_open, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SessionHandlerInterface_close, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_SessionHandlerInterface_read, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SessionHandlerInterface_write, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SessionHandlerInterface_destroy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_MASK_EX(arginfo_class_SessionHandlerInterface_gc, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, max_lifetime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_SessionIdInterface_create_sid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_SessionUpdateTimestampHandlerInterface_validateId arginfo_class_SessionHandlerInterface_destroy

#define arginfo_class_SessionUpdateTimestampHandlerInterface_updateTimestamp arginfo_class_SessionHandlerInterface_write

#define arginfo_class_SessionHandler_open arginfo_class_SessionHandlerInterface_open

#define arginfo_class_SessionHandler_close arginfo_class_SessionHandlerInterface_close

#define arginfo_class_SessionHandler_read arginfo_class_SessionHandlerInterface_read

#define arginfo_class_SessionHandler_write arginfo_class_SessionHandlerInterface_write

#define arginfo_class_SessionHandler_destroy arginfo_class_SessionHandlerInterface_destroy

#define arginfo_class_SessionHandler_gc arginfo_class_SessionHandlerInterface_gc

#define arginfo_class_SessionHandler_create_sid arginfo_class_SessionIdInterface_create_sid

ZEND_FUNCTION(session_name);
ZEND_FUNCTION(session_module_name);
ZEND_FUNCTION(session_save_path);
ZEND_FUNCTION(session_id);
ZEND_FUNCTION(session_create_id);
ZEND_FUNCTION(session_regenerate_id);
ZEND_FUNCTION(session_decode);
ZEND_FUNCTION(session_encode);
ZEND_FUNCTION(session_destroy);
ZEND_FUNCTION(session_unset);
ZEND_FUNCTION(session_gc);
ZEND_FUNCTION(session_get_cookie_params);
ZEND_FUNCTION(session_write_close);
ZEND_FUNCTION(session_abort);
ZEND_FUNCTION(session_reset);
ZEND_FUNCTION(session_status);
ZEND_FUNCTION(session_register_shutdown);
ZEND_FUNCTION(session_set_save_handler);
ZEND_FUNCTION(session_cache_limiter);
ZEND_FUNCTION(session_cache_expire);
ZEND_FUNCTION(session_set_cookie_params);
ZEND_FUNCTION(session_start);
ZEND_METHOD(SessionHandler, open);
ZEND_METHOD(SessionHandler, close);
ZEND_METHOD(SessionHandler, read);
ZEND_METHOD(SessionHandler, write);
ZEND_METHOD(SessionHandler, destroy);
ZEND_METHOD(SessionHandler, gc);
ZEND_METHOD(SessionHandler, create_sid);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("session_name", zif_session_name, arginfo_session_name, 0, NULL, "/**\n * Get and/or set the current session name\n * @param string|null $name The session name references the name of the session, which is used in cookies and URLs (e.g. PHPSESSID). It should contain only alphanumeric characters; it should be short and descriptive (i.e. for users with enabled cookie warnings). If name is specified and not null, the name of the current session is changed to its value.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_module_name", zif_session_module_name, arginfo_session_module_name, 0, NULL, "/**\n * Get and/or set the current session module\n * @param string|null $module If module is specified and not null, that module will be used instead. Passing \"user\" to this parameter is forbidden. Instead session_set_save_handler has to be called to set a user defined session handler.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_save_path", zif_session_save_path, arginfo_session_save_path, 0, NULL, "/**\n * Get and/or set the current session save path\n * @param string|null $path Session data path. If specified and not null, the path to which data is saved will be changed. session_save_path needs to be called before session_start for that purpose.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_id", zif_session_id, arginfo_session_id, 0, NULL, "/**\n * Get and/or set the current session id\n * @param string|null $id If id is specified and not null, it will replace the current session id. session_id needs to be called before session_start for that purpose. Depending on the session handler, not all characters are allowed within the session id. For example, the file session handler only allows characters in the range [a-zA-Z0-9,-]!\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_create_id", zif_session_create_id, arginfo_session_create_id, 0, NULL, "/**\n * Create new session id\n * @param string $prefix If prefix is specified, new session id is prefixed by prefix. Not all characters are allowed within the session id.  Characters in the range [a-zA-Z0-9,-] are allowed. Maximum length is 256 characters.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_regenerate_id", zif_session_regenerate_id, arginfo_session_regenerate_id, 0, NULL, "/**\n * Update the current session id with a newly generated one\n * @param bool $delete_old_session Whether to delete the old associated session file or not. You should not delete old session if you need to avoid races caused by deletion or detectavoid session hijack attacks.\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_decode", zif_session_decode, arginfo_session_decode, 0, NULL, "/**\n * Decodes session data from a session encoded string\n * @param string $data The encoded data to be stored.\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_encode", zif_session_encode, arginfo_session_encode, 0, NULL, "/**\n * Encodes the current session data as a session encoded string\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_destroy", zif_session_destroy, arginfo_session_destroy, 0, NULL, "/**\n * Destroys all data registered to a session\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_unset", zif_session_unset, arginfo_session_unset, 0, NULL, "/**\n * Free all session variables\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_gc", zif_session_gc, arginfo_session_gc, 0, NULL, "/**\n * Perform session data garbage collection\n * @return int|false\n */")
	ZEND_RAW_FENTRY("session_get_cookie_params", zif_session_get_cookie_params, arginfo_session_get_cookie_params, 0, NULL, "/**\n * Get the session cookie parameters\n * @return array\n */")
	ZEND_RAW_FENTRY("session_write_close", zif_session_write_close, arginfo_session_write_close, 0, NULL, "/**\n * Write session data and end session\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_abort", zif_session_abort, arginfo_session_abort, 0, NULL, "/**\n * Discard session array changes and finish session\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_reset", zif_session_reset, arginfo_session_reset, 0, NULL, "/**\n * Re-initialize session array with original values\n * @return bool\n */")
	ZEND_RAW_FENTRY("session_status", zif_session_status, arginfo_session_status, 0, NULL, "/**\n * Returns the current session status\n * @return int\n */")
	ZEND_RAW_FENTRY("session_register_shutdown", zif_session_register_shutdown, arginfo_session_register_shutdown, 0, NULL, "/**\n * Session shutdown function\n * @return void\n */")
	ZEND_RAW_FENTRY("session_commit", zif_session_write_close, arginfo_session_commit, 0, NULL, "/**\n * Alias session_write_close\n */")
	ZEND_RAW_FENTRY("session_set_save_handler", zif_session_set_save_handler, arginfo_session_set_save_handler, 0, NULL, "/**\n * Sets user-level session storage functions\n * @param object $sessionhandler An instance of a class implementing SessionHandlerInterface, and optionally SessionIdInterface andor SessionUpdateTimestampHandlerInterface, such as SessionHandler, to register as the session handler.\n * @param bool $register_shutdown Register session_write_close as a register_shutdown_function function.\n * @param callable $open A callable with the following signature: boolopen stringsavePath stringsessionName\n * @param callable $close A callable with the following signature: boolclose\n * @param callable $read A callable with the following signature: stringread stringsessionId\n * @param callable $write A callable with the following signature: boolwrite stringsessionId stringdata\n * @param callable $destroy A callable with the following signature: booldestroy stringsessionId\n * @param callable $gc A callable with the following signature: boolgc intlifetime\n * @param callable $create_sid A callable with the following signature: stringcreate_sid\n * @param callable $validate_sid A callable with the following signature: boolvalidate_sid stringkey\n * @param callable $update_timestamp A callable with the following signature: boolupdate_timestamp stringkey stringval\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("session_cache_limiter", zif_session_cache_limiter, arginfo_session_cache_limiter, 0, NULL, "/**\n * Get and/or set the current cache limiter\n * @param string|null $value If value is specified and not null, the name of the current cache limiter is changed to the new value.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("session_cache_expire", zif_session_cache_expire, arginfo_session_cache_expire, 0, NULL, "/**\n * Get and/or set current cache expire\n * @param int|null $value If value is given and not null, the current cache expire is replaced with value.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("session_set_cookie_params", zif_session_set_cookie_params, arginfo_session_set_cookie_params, 0, NULL, "/**\n * Set the session cookie parameters\n * @param int $lifetime_or_options When using the first signature, lifetime of the session cookie, defined in seconds.\n * @param string|null $path Path on the domain where the cookie will work. Use a single slash (\'\') for all paths on the domain.\n * @param string|null $domain Cookie domain, for example \'www.php.net\'. To make cookies visible on all subdomains then the domain must be prefixed with a dot like \'.php.net\'.\n * @param bool|null $secure If true cookie will only be sent over secure connections.\n * @param bool|null $httponly If set to true then PHP will attempt to send the httponly flag when setting the session cookie.\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("session_start", zif_session_start, arginfo_session_start, 0, NULL, "/**\n * Start new or resume existing session\n * @return bool\n */")
	ZEND_FE_END
};

static const zend_function_entry class_SessionHandlerInterface_methods[] = {
	ZEND_RAW_FENTRY("open", NULL, arginfo_class_SessionHandlerInterface_open, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("close", NULL, arginfo_class_SessionHandlerInterface_close, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("read", NULL, arginfo_class_SessionHandlerInterface_read, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("write", NULL, arginfo_class_SessionHandlerInterface_write, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("destroy", NULL, arginfo_class_SessionHandlerInterface_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("gc", NULL, arginfo_class_SessionHandlerInterface_gc, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_FE_END
};

static const zend_function_entry class_SessionIdInterface_methods[] = {
	ZEND_RAW_FENTRY("create_sid", NULL, arginfo_class_SessionIdInterface_create_sid, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_FE_END
};

static const zend_function_entry class_SessionUpdateTimestampHandlerInterface_methods[] = {
	ZEND_RAW_FENTRY("validateId", NULL, arginfo_class_SessionUpdateTimestampHandlerInterface_validateId, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_RAW_FENTRY("updateTimestamp", NULL, arginfo_class_SessionUpdateTimestampHandlerInterface_updateTimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_ABSTRACT, NULL, NULL)
	ZEND_FE_END
};

static const zend_function_entry class_SessionHandler_methods[] = {
	ZEND_ME(SessionHandler, open, arginfo_class_SessionHandler_open, ZEND_ACC_PUBLIC)
	ZEND_ME(SessionHandler, close, arginfo_class_SessionHandler_close, ZEND_ACC_PUBLIC)
	ZEND_ME(SessionHandler, read, arginfo_class_SessionHandler_read, ZEND_ACC_PUBLIC)
	ZEND_ME(SessionHandler, write, arginfo_class_SessionHandler_write, ZEND_ACC_PUBLIC)
	ZEND_ME(SessionHandler, destroy, arginfo_class_SessionHandler_destroy, ZEND_ACC_PUBLIC)
	ZEND_ME(SessionHandler, gc, arginfo_class_SessionHandler_gc, ZEND_ACC_PUBLIC)
	ZEND_ME(SessionHandler, create_sid, arginfo_class_SessionHandler_create_sid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_session_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("PHP_SESSION_DISABLED", php_session_disabled, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_SESSION_NONE", php_session_none, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_SESSION_ACTIVE", php_session_active, CONST_PERSISTENT);
}

static zend_class_entry *register_class_SessionHandlerInterface(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SessionHandlerInterface", class_SessionHandlerInterface_methods);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_SessionIdInterface(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SessionIdInterface", class_SessionIdInterface_methods);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_SessionUpdateTimestampHandlerInterface(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SessionUpdateTimestampHandlerInterface", class_SessionUpdateTimestampHandlerInterface_methods);
	class_entry = zend_register_internal_interface(&ce);

	return class_entry;
}

static zend_class_entry *register_class_SessionHandler(zend_class_entry *class_entry_SessionHandlerInterface, zend_class_entry *class_entry_SessionIdInterface)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SessionHandler", class_SessionHandler_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
	zend_class_implements(class_entry, 2, class_entry_SessionHandlerInterface, class_entry_SessionIdInterface);

	return class_entry;
}
