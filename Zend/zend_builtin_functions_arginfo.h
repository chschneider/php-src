/* This is a generated file, edit zend_builtin_functions.stub.php instead.
 * Stub hash: c57010340baae9d22e265556d995775183f50b7c */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_clone, 0, 1, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO(0, object, IS_OBJECT, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, withProperties, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_exit, 0, 0, IS_NEVER, 0)
	ZEND_ARG_TYPE_MASK(0, status, MAY_BE_STRING|MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

#define arginfo_die arginfo_exit

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_zend_version, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_func_num_args, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_func_get_arg, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, position, IS_LONG, 0, "The argument offset. Function arguments are counted starting from zero.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_func_get_args, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strlen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being measured for length.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strcmp, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string1, IS_STRING, 0, "The first string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string2, IS_STRING, 0, "The second string.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strncmp, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string1, IS_STRING, 0, "The first string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string2, IS_STRING, 0, "The second string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "Number of characters to use in the comparison.")
ZEND_END_ARG_INFO()

#define arginfo_strcasecmp arginfo_strcmp

#define arginfo_strncasecmp arginfo_strncmp

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_error_reporting, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, error_level, IS_LONG, 1, "null", "The new error_reporting level. It takes on either a bitmask, or named constants. Using named constants is strongly encouraged to ensure compatibility for future versions. As error levels are added, the range of integers increases, so older integer-based error levels will not always behave as expected.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_define, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, constant_name, IS_STRING, 0, "The name of the constant.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The value of the constant.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, case_insensitive, _IS_BOOL, 0, "false", "If set to true, the constant will be defined case-insensitive. The default behavior is case-sensitive; i.e. CONSTANT and Constant represent different values.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_defined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, constant_name, IS_STRING, 0, "The constant name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_class, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, object, IS_OBJECT, 0, "The tested object.")
ZEND_END_ARG_INFO()

#define arginfo_get_called_class arginfo_zend_version

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_get_parent_class, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, object_or_class, MAY_BE_OBJECT|MAY_BE_STRING, NULL, "The tested object or class name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_is_subclass_of, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, object_or_class, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The class name")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, allow_string, _IS_BOOL, 0, "true", "If this parameter set to false, string class name as object_or_class is not allowed. This also prevents from calling autoloader if the class doesn't exist.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_is_a, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, object_or_class, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The class or interface name")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, allow_string, _IS_BOOL, 0, "false", "If this parameter set to false, string class name as object_or_class is not allowed. This also prevents from calling autoloader if the class doesn't exist.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_class_vars, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The class name")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_object_vars, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, object, IS_OBJECT, 0, "An object instance.")
ZEND_END_ARG_INFO()

#define arginfo_get_mangled_object_vars arginfo_get_object_vars

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_class_methods, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, object_or_class, MAY_BE_OBJECT|MAY_BE_STRING, NULL, "The class name or an object instance")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_method_exists, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, object_or_class)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, method, IS_STRING, 0, "The method name")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_property_exists, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, object_or_class)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, property, IS_STRING, 0, "The name of the property")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The class name. The name is matched in a case-insensitive manner.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, autoload, _IS_BOOL, 0, "true", "Whether to autoload if not already loaded.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_interface_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, interface, IS_STRING, 0, "The interface name")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, autoload, _IS_BOOL, 0, "true", "Whether to autoload if not already loaded.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_trait_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, trait, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, autoload, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_enum_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, enum, IS_STRING, 0, "The enum name. The name is matched in a case-insensitive manner.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, autoload, _IS_BOOL, 0, "true", "Whether to autoload if not already loaded.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_function_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, function, IS_STRING, 0, "The function name, as a string.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_alias, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The original class.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, alias, IS_STRING, 0, "The alias name for the class.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, autoload, _IS_BOOL, 0, "true", "Whether to autoload if the original class is not found.")
ZEND_END_ARG_INFO()

#define arginfo_get_included_files arginfo_func_get_args

#define arginfo_get_required_files arginfo_func_get_args

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_trigger_error, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The designated error message for this error. It's limited to 1024 bytes in length. Any additional characters beyond 1024 bytes will be truncated.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, error_level, IS_LONG, 0, "E_USER_NOTICE", "The designated error type for this error. It only works with the E_USER_* family of constants, and will default to E_USER_NOTICE.")
ZEND_END_ARG_INFO()

#define arginfo_user_error arginfo_trigger_error

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_error_handler, 0, 0, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 1, "If null is passed, the handler is reset to its default state. Otherwise, the handler is a callback with the following signature:")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, error_levels, IS_LONG, 0, "E_ALL", "Can be used to mask the triggering of the callback function just like the error_reporting ini setting controls which errors are shown. Without this mask set the callback will be called for every error regardless to the setting of the error_reporting setting.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_restore_error_handler, 0, 0, IS_TRUE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_error_handler, 0, 0, IS_CALLABLE, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_exception_handler, 0, 0, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 1, "The function to be called when an uncaught exception occurs. This handler function needs to accept one parameter, which will be the Throwable object that was thrown. Both Error and Exception implement the Throwable interface. This is the handler signature:")
ZEND_END_ARG_INFO()

#define arginfo_restore_exception_handler arginfo_restore_error_handler

#define arginfo_get_exception_handler arginfo_get_error_handler

#define arginfo_get_declared_classes arginfo_func_get_args

#define arginfo_get_declared_traits arginfo_func_get_args

#define arginfo_get_declared_interfaces arginfo_func_get_args

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_defined_functions, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, exclude_disabled, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

#define arginfo_get_defined_vars arginfo_func_get_args

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_resource_type, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, resource)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_resource_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, resource)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_resources, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, type, IS_STRING, 1, "null", "If defined, this will cause get_resources to only return resources of the given type. A list of resource types is available.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_loaded_extensions, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, zend_extensions, _IS_BOOL, 0, "false", "Only return Zend extensions, if not then regular extensions, like mysqli are listed. Defaults to false (return regular extensions).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_defined_constants, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, categorize, _IS_BOOL, 0, "false", "Causing this function to return a multi-dimensional array with categories in the keys of the first dimension and constants and their values in the second dimension.  define(\"MY_CONSTANT\", 1); print_r(get_defined_constants(true));  The above example will output something similar to: Array ( [Core] => Array ( [E_ERROR] => 1 [E_WARNING] => 2 [E_PARSE] => 4 [E_NOTICE] => 8 [E_CORE_ERROR] => 16 [E_CORE_WARNING] => 32 [E_COMPILE_ERROR] => 64 [E_COMPILE_WARNING] => 128 [E_USER_ERROR] => 256 [E_USER_WARNING] => 512 [E_USER_NOTICE] => 1024 [E_ALL] => 2047 [TRUE] => 1 ) [pcre] => Array ( [PREG_PATTERN_ORDER] => 1 [PREG_SET_ORDER] => 2 [PREG_OFFSET_CAPTURE] => 256 [PREG_SPLIT_NO_EMPTY] => 1 [PREG_SPLIT_DELIM_CAPTURE] => 2 [PREG_SPLIT_OFFSET_CAPTURE] => 4 [PREG_GREP_INVERT] => 1 ) [user] => Array ( [MY_CONSTANT] => 1 ) )")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_debug_backtrace, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_LONG, 0, "DEBUG_BACKTRACE_PROVIDE_OBJECT", "This parameter is a bitmask for the following options: debug_backtrace options DEBUG_BACKTRACE_PROVIDE_OBJECT Whether or not to populate the \"object\" index. DEBUG_BACKTRACE_IGNORE_ARGS Whether or not to omit the \"args\" index, and thus all the function/method arguments, to save memory. There are four possible combinations: debug_backtrace options debug_backtrace() Populates both indexes debug_backtrace(DEBUG_BACKTRACE_PROVIDE_OBJECT) debug_backtrace(1) debug_backtrace(0) Omits index \"object\" and populates index \"args\". debug_backtrace(DEBUG_BACKTRACE_IGNORE_ARGS) Omits index \"object\" and index \"args\". debug_backtrace(2) debug_backtrace(DEBUG_BACKTRACE_PROVIDE_OBJECT|DEBUG_BACKTRACE_IGNORE_ARGS) Populate index \"object\" and omit index \"args\". debug_backtrace(3)")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "0", "This parameter can be used to limit the number of stack frames returned. By default (limit=0) it returns all stack frames.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_debug_print_backtrace, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_LONG, 0, "0", "This parameter is a bitmask for the following options: debug_print_backtrace options DEBUG_BACKTRACE_IGNORE_ARGS Whether or not to omit the \"args\" index, and thus all the function/method arguments, to save memory.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "0", "This parameter can be used to limit the number of stack frames printed. By default (limit=0) it prints all stack frames.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_extension_loaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, extension, IS_STRING, 0, "The extension name. This parameter is case-insensitive.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_get_extension_funcs, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, extension, IS_STRING, 0, "The module name.")
ZEND_END_ARG_INFO()

#if ZEND_DEBUG && defined(ZTS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_zend_thread_id, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#define arginfo_gc_mem_caches arginfo_func_num_args

#define arginfo_gc_collect_cycles arginfo_func_num_args

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gc_enabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gc_enable, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_gc_disable arginfo_gc_enable

#define arginfo_gc_status arginfo_func_get_args


ZEND_FRAMELESS_FUNCTION(property_exists, 2);
static const zend_frameless_function_info frameless_function_infos_property_exists[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(property_exists, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(class_exists, 1);
ZEND_FRAMELESS_FUNCTION(class_exists, 2);
static const zend_frameless_function_info frameless_function_infos_class_exists[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(class_exists, 1), 1 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(class_exists, 2), 2 },
	{ 0 },
};

ZEND_FUNCTION(clone);
ZEND_FUNCTION(exit);
ZEND_FUNCTION(zend_version);
ZEND_FUNCTION(func_num_args);
ZEND_FUNCTION(func_get_arg);
ZEND_FUNCTION(func_get_args);
ZEND_FUNCTION(strlen);
ZEND_FUNCTION(strcmp);
ZEND_FUNCTION(strncmp);
ZEND_FUNCTION(strcasecmp);
ZEND_FUNCTION(strncasecmp);
ZEND_FUNCTION(error_reporting);
ZEND_FUNCTION(define);
ZEND_FUNCTION(defined);
ZEND_FUNCTION(get_class);
ZEND_FUNCTION(get_called_class);
ZEND_FUNCTION(get_parent_class);
ZEND_FUNCTION(is_subclass_of);
ZEND_FUNCTION(is_a);
ZEND_FUNCTION(get_class_vars);
ZEND_FUNCTION(get_object_vars);
ZEND_FUNCTION(get_mangled_object_vars);
ZEND_FUNCTION(get_class_methods);
ZEND_FUNCTION(method_exists);
ZEND_FUNCTION(property_exists);
ZEND_FUNCTION(class_exists);
ZEND_FUNCTION(interface_exists);
ZEND_FUNCTION(trait_exists);
ZEND_FUNCTION(enum_exists);
ZEND_FUNCTION(function_exists);
ZEND_FUNCTION(class_alias);
ZEND_FUNCTION(get_included_files);
ZEND_FUNCTION(trigger_error);
ZEND_FUNCTION(set_error_handler);
ZEND_FUNCTION(restore_error_handler);
ZEND_FUNCTION(get_error_handler);
ZEND_FUNCTION(set_exception_handler);
ZEND_FUNCTION(restore_exception_handler);
ZEND_FUNCTION(get_exception_handler);
ZEND_FUNCTION(get_declared_classes);
ZEND_FUNCTION(get_declared_traits);
ZEND_FUNCTION(get_declared_interfaces);
ZEND_FUNCTION(get_defined_functions);
ZEND_FUNCTION(get_defined_vars);
ZEND_FUNCTION(get_resource_type);
ZEND_FUNCTION(get_resource_id);
ZEND_FUNCTION(get_resources);
ZEND_FUNCTION(get_loaded_extensions);
ZEND_FUNCTION(get_defined_constants);
ZEND_FUNCTION(debug_backtrace);
ZEND_FUNCTION(debug_print_backtrace);
ZEND_FUNCTION(extension_loaded);
ZEND_FUNCTION(get_extension_funcs);
#if ZEND_DEBUG && defined(ZTS)
ZEND_FUNCTION(zend_thread_id);
#endif
ZEND_FUNCTION(gc_mem_caches);
ZEND_FUNCTION(gc_collect_cycles);
ZEND_FUNCTION(gc_enabled);
ZEND_FUNCTION(gc_enable);
ZEND_FUNCTION(gc_disable);
ZEND_FUNCTION(gc_status);

static const zend_function_entry ext_functions[] = {
	ZEND_FE(clone, arginfo_clone)
	ZEND_RAW_FENTRY("exit", zif_exit, arginfo_exit, 0, NULL, "/**\n * Terminate the current script with a status code or message\n * @return never\n */")
	ZEND_RAW_FENTRY("die", zif_exit, arginfo_die, 0, NULL, "/**\n * Alias exit\n */")
	ZEND_RAW_FENTRY("zend_version", zif_zend_version, arginfo_zend_version, 0, NULL, "/**\n * Gets the version of the current Zend engine\n * @return string\n */")
	ZEND_RAW_FENTRY("func_num_args", zif_func_num_args, arginfo_func_num_args, 0, NULL, "/**\n * Returns the number of arguments passed to the function\n * @return int\n */")
	ZEND_RAW_FENTRY("func_get_arg", zif_func_get_arg, arginfo_func_get_arg, 0, NULL, "/**\n * Return an item from the argument list\n * @param int $position The argument offset. Function arguments are counted starting from zero.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("func_get_args", zif_func_get_args, arginfo_func_get_args, 0, NULL, "/**\n * Returns an array comprising a function\'s argument list\n * @return array\n */")
	ZEND_RAW_FENTRY("strlen", zif_strlen, arginfo_strlen, 0, NULL, "/**\n * Get string length\n * @param string $string The string being measured for length.\n * @return int\n */")
	ZEND_RAW_FENTRY("strcmp", zif_strcmp, arginfo_strcmp, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Binary safe string comparison\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @return int\n */")
	ZEND_RAW_FENTRY("strncmp", zif_strncmp, arginfo_strncmp, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Binary safe string comparison of the first n characters\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @param int $length Number of characters to use in the comparison.\n * @return int\n */")
	ZEND_RAW_FENTRY("strcasecmp", zif_strcasecmp, arginfo_strcasecmp, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Binary safe case-insensitive string comparison\n * @param string $string1 The first string\n * @param string $string2 The second string\n * @return int\n */")
	ZEND_RAW_FENTRY("strncasecmp", zif_strncasecmp, arginfo_strncasecmp, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Binary safe case-insensitive string comparison of the first n characters\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @param int $length The length of strings to be used in the comparison.\n * @return int\n */")
	ZEND_RAW_FENTRY("error_reporting", zif_error_reporting, arginfo_error_reporting, 0, NULL, "/**\n * Sets which PHP errors are reported\n * @param int|null $error_level The new error_reporting level. It takes on either a bitmask, or named constants. Using named constants is strongly encouraged to ensure compatibility for future versions. As error levels are added, the range of integers increases, so older integer-based error levels will not always behave as expected.\n * @return int\n */")
	ZEND_RAW_FENTRY("define", zif_define, arginfo_define, 0, NULL, "/**\n * Defines a named constant\n * @param string $constant_name The name of the constant.\n * @param mixed $value The value of the constant.\n * @param bool $case_insensitive If set to true, the constant will be defined case-insensitive. The default behavior is case-sensitive; i.e. CONSTANT and Constant represent different values.\n * @return bool\n */")
	ZEND_RAW_FENTRY("defined", zif_defined, arginfo_defined, 0, NULL, "/**\n * Checks whether a constant with the given name exists\n * @param string $constant_name The constant name.\n * @return bool\n */")
	ZEND_RAW_FENTRY("get_class", zif_get_class, arginfo_get_class, 0, NULL, "/**\n * Returns the name of the class of an object\n * @param object $object The tested object.\n * @return string\n */")
	ZEND_RAW_FENTRY("get_called_class", zif_get_called_class, arginfo_get_called_class, 0, NULL, "/**\n * The \"Late Static Binding\" class name\n * @return string\n */")
	ZEND_RAW_FENTRY("get_parent_class", zif_get_parent_class, arginfo_get_parent_class, 0, NULL, "/**\n * Retrieves the parent class name for object or class\n * @param object|string $object_or_class The tested object or class name.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("is_subclass_of", zif_is_subclass_of, arginfo_is_subclass_of, 0, NULL, "/**\n * Checks if the object has this class as one of its parents or implements it\n * @param mixed $object_or_class A class name or an object instance. No error is generated if the class does not exist.\n * @param string $class The class name\n * @param bool $allow_string If this parameter set to false, string class name as object_or_class is not allowed. This also prevents from calling autoloader if the class doesn\'t exist.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_a", zif_is_a, arginfo_is_a, 0, NULL, "/**\n * Checks whether the object is of a given type or subtype\n * @param mixed $object_or_class A class name or an object instance.\n * @param string $class The class or interface name\n * @param bool $allow_string If this parameter set to false, string class name as object_or_class is not allowed. This also prevents from calling autoloader if the class doesn\'t exist.\n * @return bool\n */")
	ZEND_RAW_FENTRY("get_class_vars", zif_get_class_vars, arginfo_get_class_vars, 0, NULL, "/**\n * Get the default properties of the class\n * @param string $class The class name\n * @return array\n */")
	ZEND_RAW_FENTRY("get_object_vars", zif_get_object_vars, arginfo_get_object_vars, 0, NULL, "/**\n * Gets the properties of the given object\n * @param object $object An object instance.\n * @return array\n */")
	ZEND_RAW_FENTRY("get_mangled_object_vars", zif_get_mangled_object_vars, arginfo_get_mangled_object_vars, 0, NULL, "/**\n * Returns an array of mangled object properties\n * @param object $object An object instance.\n * @return array\n */")
	ZEND_RAW_FENTRY("get_class_methods", zif_get_class_methods, arginfo_get_class_methods, 0, NULL, "/**\n * Gets the class methods\' names\n * @param object|string $object_or_class The class name or an object instance\n * @return array\n */")
	ZEND_RAW_FENTRY("method_exists", zif_method_exists, arginfo_method_exists, 0, NULL, "/**\n * Checks if the class method exists\n * @param object|string $object_or_class An object instance or a class name\n * @param string $method The method name\n * @return bool\n */")
	ZEND_RAW_FENTRY("property_exists", zif_property_exists, arginfo_property_exists, 0, frameless_function_infos_property_exists, "/**\n * Checks if the object or class has a property\n * @param object|string $object_or_class The class name or an object of the class to test for\n * @param string $property The name of the property\n * @return bool\n */")
	ZEND_RAW_FENTRY("class_exists", zif_class_exists, arginfo_class_exists, 0, frameless_function_infos_class_exists, "/**\n * Checks if the class has been defined\n * @param string $class The class name. The name is matched in a case-insensitive manner.\n * @param bool $autoload Whether to autoload if not already loaded.\n * @return bool\n */")
	ZEND_RAW_FENTRY("interface_exists", zif_interface_exists, arginfo_interface_exists, 0, NULL, "/**\n * Checks if the interface has been defined\n * @param string $interface The interface name\n * @param bool $autoload Whether to autoload if not already loaded.\n * @return bool\n */")
	ZEND_RAW_FENTRY("trait_exists", zif_trait_exists, arginfo_trait_exists, 0, NULL, "/**\n * Checks if the trait exists\n * @return bool\n */")
	ZEND_RAW_FENTRY("enum_exists", zif_enum_exists, arginfo_enum_exists, 0, NULL, "/**\n * Checks if the enum has been defined\n * @param string $enum The enum name. The name is matched in a case-insensitive manner.\n * @param bool $autoload Whether to autoload if not already loaded.\n * @return bool\n */")
	ZEND_RAW_FENTRY("function_exists", zif_function_exists, arginfo_function_exists, 0, NULL, "/**\n * Return true if the given function has been defined\n * @param string $function The function name, as a string.\n * @return bool\n */")
	ZEND_RAW_FENTRY("class_alias", zif_class_alias, arginfo_class_alias, 0, NULL, "/**\n * Creates an alias for a class\n * @param string $class The original class.\n * @param string $alias The alias name for the class.\n * @param bool $autoload Whether to autoload if the original class is not found.\n * @return bool\n */")
	ZEND_RAW_FENTRY("get_included_files", zif_get_included_files, arginfo_get_included_files, 0, NULL, "/**\n * Returns an array with the names of included or required files\n * @return array\n */")
	ZEND_RAW_FENTRY("get_required_files", zif_get_included_files, arginfo_get_required_files, 0, NULL, "/**\n * Alias get_included_files\n */")
	ZEND_RAW_FENTRY("trigger_error", zif_trigger_error, arginfo_trigger_error, 0, NULL, "/**\n * Generates a user-level error/warning/notice message\n * @param string $message The designated error message for this error. It\'s limited to 1024 bytes in length. Any additional characters beyond 1024 bytes will be truncated.\n * @param int $error_level The designated error type for this error. It only works with the E_USER_* family of constants, and will default to E_USER_NOTICE.\n * @return true\n */")
	ZEND_RAW_FENTRY("user_error", zif_trigger_error, arginfo_user_error, 0, NULL, "/**\n * Alias trigger_error\n */")
	ZEND_RAW_FENTRY("set_error_handler", zif_set_error_handler, arginfo_set_error_handler, 0, NULL, "/**\n * Sets a user-defined error handler function\n * @param callable|null $callback If null is passed, the handler is reset to its default state. Otherwise, the handler is a callback with the following signature:\n * @param int $error_levels Can be used to mask the triggering of the callback function just like the error_reporting ini setting controls which errors are shown. Without this mask set the callback will be called for every error regardless to the setting of the error_reporting setting.\n * @return callable|null\n */")
	ZEND_RAW_FENTRY("restore_error_handler", zif_restore_error_handler, arginfo_restore_error_handler, 0, NULL, "/**\n * Restores the previous error handler function\n * @return true\n */")
	ZEND_RAW_FENTRY("get_error_handler", zif_get_error_handler, arginfo_get_error_handler, 0, NULL, "/**\n * Gets the user-defined error handler function\n * @return callable|null\n */")
	ZEND_RAW_FENTRY("set_exception_handler", zif_set_exception_handler, arginfo_set_exception_handler, 0, NULL, "/**\n * Sets a user-defined exception handler function\n * @param callable|null $callback The function to be called when an uncaught exception occurs. This handler function needs to accept one parameter, which will be the Throwable object that was thrown. Both Error and Exception implement the Throwable interface. This is the handler signature:\n * @return callable|null\n */")
	ZEND_RAW_FENTRY("restore_exception_handler", zif_restore_exception_handler, arginfo_restore_exception_handler, 0, NULL, "/**\n * Restores the previously defined exception handler function\n * @return true\n */")
	ZEND_RAW_FENTRY("get_exception_handler", zif_get_exception_handler, arginfo_get_exception_handler, 0, NULL, "/**\n * Gets the user-defined exception handler function\n * @return callable|null\n */")
	ZEND_RAW_FENTRY("get_declared_classes", zif_get_declared_classes, arginfo_get_declared_classes, 0, NULL, "/**\n * Returns an array with the name of the defined classes\n * @return array\n */")
	ZEND_RAW_FENTRY("get_declared_traits", zif_get_declared_traits, arginfo_get_declared_traits, 0, NULL, "/**\n * Returns an array of all declared traits\n * @return array\n */")
	ZEND_RAW_FENTRY("get_declared_interfaces", zif_get_declared_interfaces, arginfo_get_declared_interfaces, 0, NULL, "/**\n * Returns an array of all declared interfaces\n * @return array\n */")
	ZEND_RAW_FENTRY("get_defined_functions", zif_get_defined_functions, arginfo_get_defined_functions, 0, NULL, "/**\n * Returns an array of all defined functions\n * @return array\n */")
	ZEND_RAW_FENTRY("get_defined_vars", zif_get_defined_vars, arginfo_get_defined_vars, 0, NULL, "/**\n * Returns an array of all defined variables\n * @return array\n */")
	ZEND_RAW_FENTRY("get_resource_type", zif_get_resource_type, arginfo_get_resource_type, 0, NULL, "/**\n * Returns the resource type\n * @param resource $resource The evaluated resource handle.\n * @return string\n */")
	ZEND_RAW_FENTRY("get_resource_id", zif_get_resource_id, arginfo_get_resource_id, 0, NULL, "/**\n * Returns an integer identifier for the given resource\n * @param resource $resource The evaluated resource handle.\n * @return int\n */")
	ZEND_RAW_FENTRY("get_resources", zif_get_resources, arginfo_get_resources, 0, NULL, "/**\n * Returns active resources\n * @param string|null $type If defined, this will cause get_resources to only return resources of the given type. A list of resource types is available.\n * @return array\n */")
	ZEND_RAW_FENTRY("get_loaded_extensions", zif_get_loaded_extensions, arginfo_get_loaded_extensions, 0, NULL, "/**\n * Returns an array with the names of all modules compiled and loaded\n * @param bool $zend_extensions Only return Zend extensions, if not then regular extensions, like mysqli are listed. Defaults to false (return regular extensions).\n * @return array\n */")
	ZEND_RAW_FENTRY("get_defined_constants", zif_get_defined_constants, arginfo_get_defined_constants, 0, NULL, "/**\n * Returns an associative array with the names of all the constants and their values\n * @param bool $categorize Causing this function to return a multi-dimensional array with categories in the keys of the first dimension and constants and their values in the second dimension.  define(\"MY_CONSTANT\", 1); print_r(get_defined_constants(true));  The above example will output something similar to: Array ( [Core] => Array ( [E_ERROR] => 1 [E_WARNING] => 2 [E_PARSE] => 4 [E_NOTICE] => 8 [E_CORE_ERROR] => 16 [E_CORE_WARNING] => 32 [E_COMPILE_ERROR] => 64 [E_COMPILE_WARNING] => 128 [E_USER_ERROR] => 256 [E_USER_WARNING] => 512 [E_USER_NOTICE] => 1024 [E_ALL] => 2047 [TRUE] => 1 ) [pcre] => Array ( [PREG_PATTERN_ORDER] => 1 [PREG_SET_ORDER] => 2 [PREG_OFFSET_CAPTURE] => 256 [PREG_SPLIT_NO_EMPTY] => 1 [PREG_SPLIT_DELIM_CAPTURE] => 2 [PREG_SPLIT_OFFSET_CAPTURE] => 4 [PREG_GREP_INVERT] => 1 ) [user] => Array ( [MY_CONSTANT] => 1 ) )\n * @return array\n */")
	ZEND_RAW_FENTRY("debug_backtrace", zif_debug_backtrace, arginfo_debug_backtrace, 0, NULL, "/**\n * Generates a backtrace\n * @param int $options This parameter is a bitmask for the following options: debug_backtrace options DEBUG_BACKTRACE_PROVIDE_OBJECT Whether or not to populate the \"object\" index. DEBUG_BACKTRACE_IGNORE_ARGS Whether or not to omit the \"args\" index, and thus all the function/method arguments, to save memory. There are four possible combinations: debug_backtrace options debug_backtrace() Populates both indexes debug_backtrace(DEBUG_BACKTRACE_PROVIDE_OBJECT) debug_backtrace(1) debug_backtrace(0) Omits index \"object\" and populates index \"args\". debug_backtrace(DEBUG_BACKTRACE_IGNORE_ARGS) Omits index \"object\" and index \"args\". debug_backtrace(2) debug_backtrace(DEBUG_BACKTRACE_PROVIDE_OBJECT|DEBUG_BACKTRACE_IGNORE_ARGS) Populate index \"object\" and omit index \"args\". debug_backtrace(3)\n * @param int $limit This parameter can be used to limit the number of stack frames returned. By default (limit=0) it returns all stack frames.\n * @return array\n */")
	ZEND_RAW_FENTRY("debug_print_backtrace", zif_debug_print_backtrace, arginfo_debug_print_backtrace, 0, NULL, "/**\n * Prints a backtrace\n * @param int $options This parameter is a bitmask for the following options: debug_print_backtrace options DEBUG_BACKTRACE_IGNORE_ARGS Whether or not to omit the \"args\" index, and thus all the function/method arguments, to save memory.\n * @param int $limit This parameter can be used to limit the number of stack frames printed. By default (limit=0) it prints all stack frames.\n * @return void\n */")
	ZEND_RAW_FENTRY("extension_loaded", zif_extension_loaded, arginfo_extension_loaded, 0, NULL, "/**\n * Find out whether an extension is loaded\n * @param string $extension The extension name. This parameter is case-insensitive.\n * @return bool\n */")
	ZEND_RAW_FENTRY("get_extension_funcs", zif_get_extension_funcs, arginfo_get_extension_funcs, 0, NULL, "/**\n * Returns an array with the names of the functions of a module\n * @param string $extension The module name.\n * @return array|false\n */")
#if ZEND_DEBUG && defined(ZTS)
	ZEND_RAW_FENTRY("zend_thread_id", zif_zend_thread_id, arginfo_zend_thread_id, 0, NULL, "/**\n * Returns a unique identifier for the current thread\n * @return int\n */")
#endif
	ZEND_RAW_FENTRY("gc_mem_caches", zif_gc_mem_caches, arginfo_gc_mem_caches, 0, NULL, "/**\n * Reclaims memory used by the Zend Engine memory manager\n * @return int\n */")
	ZEND_RAW_FENTRY("gc_collect_cycles", zif_gc_collect_cycles, arginfo_gc_collect_cycles, 0, NULL, "/**\n * Forces collection of any existing garbage cycles\n * @return int\n */")
	ZEND_RAW_FENTRY("gc_enabled", zif_gc_enabled, arginfo_gc_enabled, 0, NULL, "/**\n * Returns status of the circular reference collector\n * @return bool\n */")
	ZEND_RAW_FENTRY("gc_enable", zif_gc_enable, arginfo_gc_enable, 0, NULL, "/**\n * Activates the circular reference collector\n * @return void\n */")
	ZEND_RAW_FENTRY("gc_disable", zif_gc_disable, arginfo_gc_disable, 0, NULL, "/**\n * Deactivates the circular reference collector\n * @return void\n */")
	ZEND_RAW_FENTRY("gc_status", zif_gc_status, arginfo_gc_status, 0, NULL, "/**\n * Gets information about the garbage collector\n * @return array\n */")
	ZEND_FE_END
};

static zend_class_entry *register_class_stdClass(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "stdClass", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_ALLOW_DYNAMIC_PROPERTIES);

	zend_string *attribute_name_AllowDynamicProperties_class_stdClass_0 = zend_string_init_interned("AllowDynamicProperties", sizeof("AllowDynamicProperties") - 1, true);
	zend_add_class_attribute(class_entry, attribute_name_AllowDynamicProperties_class_stdClass_0, 0);
	zend_string_release_ex(attribute_name_AllowDynamicProperties_class_stdClass_0, true);

	return class_entry;
}
