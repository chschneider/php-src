/* This is a generated file, edit php_spl.stub.php instead.
 * Stub hash: 4d4deb5e3c468b465f9b19afc32a34bfc50b2e66 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_class_implements, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, object_or_class)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, autoload, _IS_BOOL, 0, "true", "Whether to autoload if not already loaded.")
ZEND_END_ARG_INFO()

#define arginfo_class_parents arginfo_class_implements

#define arginfo_class_uses arginfo_class_implements

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_autoload, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The name of the class being instantiated. When calling the function, the name of the class with the namespace is passed to the parameter. The class will not contain the leading backslash of a fully-qualified identifier.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, file_extensions, IS_STRING, 1, "null", "By default it checks all include_paths to contain filenames built up by the lowercase class name appended by the filename extensions .inc and .php.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_autoload_call, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The class name being searched.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_autoload_extensions, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, file_extensions, IS_STRING, 1, "null", "If null, it simply returns the current list of extensions each separated by comma. To modify the list of file extensions, simply invoke the functions with the new list of file extensions to use in a single string with each extensions separated by comma.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_autoload_functions, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_autoload_register, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, callback, IS_CALLABLE, 1, "null", "The autoload function being registered. If null, then the default implementation of spl_autoload will be registered.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, throw, _IS_BOOL, 0, "true", "This parameter specifies whether spl_autoload_register should throw exceptions when the callback cannot be registered.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, prepend, _IS_BOOL, 0, "false", "If true, spl_autoload_register will prepend the autoloader on the autoload queue instead of appending it.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_autoload_unregister, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The autoload function being unregistered.")
ZEND_END_ARG_INFO()

#define arginfo_spl_classes arginfo_spl_autoload_functions

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_object_hash, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, object, IS_OBJECT, 0, "Any object.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_spl_object_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, object, IS_OBJECT, 0, "Any object.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_iterator_apply, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, iterator, Traversable, 0, "The iterator object to iterate over.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The callback function to call on every element. This function only receives the given args, so it is nullary by default. If count($args) === 3, for instance, the callback function is ternary. The function must return true in order to continue iterating over the iterator.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, args, IS_ARRAY, 1, "null", "An array of arguments; each element of args is passed to the callback callback as separate argument.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_iterator_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, iterator, Traversable, MAY_BE_ARRAY, NULL, "The iterator being counted.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_iterator_to_array, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, iterator, Traversable, MAY_BE_ARRAY, NULL, "The iterator being copied.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, preserve_keys, _IS_BOOL, 0, "true", "Whether to use the iterator element keys as index.")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(class_implements);
ZEND_FUNCTION(class_parents);
ZEND_FUNCTION(class_uses);
ZEND_FUNCTION(spl_autoload);
ZEND_FUNCTION(spl_autoload_call);
ZEND_FUNCTION(spl_autoload_extensions);
ZEND_FUNCTION(spl_autoload_functions);
ZEND_FUNCTION(spl_autoload_register);
ZEND_FUNCTION(spl_autoload_unregister);
ZEND_FUNCTION(spl_classes);
ZEND_FUNCTION(spl_object_hash);
ZEND_FUNCTION(spl_object_id);
ZEND_FUNCTION(iterator_apply);
ZEND_FUNCTION(iterator_count);
ZEND_FUNCTION(iterator_to_array);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("class_implements", zif_class_implements, arginfo_class_implements, 0, NULL, "/**\n * Return the interfaces which are implemented by the given class or interface\n * @param object|string $object_or_class An object (class instance) or a string (class or interface name).\n * @param bool $autoload Whether to autoload if not already loaded.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("class_parents", zif_class_parents, arginfo_class_parents, 0, NULL, "/**\n * Return the parent classes of the given class\n * @param object|string $object_or_class An object (class instance) or a string (class name).\n * @param bool $autoload Whether to autoload if not already loaded.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("class_uses", zif_class_uses, arginfo_class_uses, 0, NULL, "/**\n * Return the traits used by the given class\n * @param object|string $object_or_class An object (class instance) or a string (class name).\n * @param bool $autoload Whether to autoload if not already loaded.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("spl_autoload", zif_spl_autoload, arginfo_spl_autoload, 0, NULL, "/**\n * Default implementation for __autoload()\n * @param string $class The name of the class being instantiated. When calling the function, the name of the class with the namespace is passed to the parameter. The class will not contain the leading backslash of a fully-qualified identifier.\n * @param string|null $file_extensions By default it checks all include_paths to contain filenames built up by the lowercase class name appended by the filename extensions .inc and .php.\n * @return void\n */")
	ZEND_RAW_FENTRY("spl_autoload_call", zif_spl_autoload_call, arginfo_spl_autoload_call, 0, NULL, "/**\n * Try all registered __autoload() functions to load the requested class\n * @param string $class The class name being searched.\n * @return void\n */")
	ZEND_RAW_FENTRY("spl_autoload_extensions", zif_spl_autoload_extensions, arginfo_spl_autoload_extensions, 0, NULL, "/**\n * Register and return default file extensions for spl_autoload\n * @param string|null $file_extensions If null, it simply returns the current list of extensions each separated by comma. To modify the list of file extensions, simply invoke the functions with the new list of file extensions to use in a single string with each extensions separated by comma.\n * @return string\n */")
	ZEND_RAW_FENTRY("spl_autoload_functions", zif_spl_autoload_functions, arginfo_spl_autoload_functions, 0, NULL, "/**\n * Return all registered __autoload() functions\n * @return array\n */")
	ZEND_RAW_FENTRY("spl_autoload_register", zif_spl_autoload_register, arginfo_spl_autoload_register, 0, NULL, "/**\n * Register given function as __autoload() implementation\n * @param callable|null $callback The autoload function being registered. If null, then the default implementation of spl_autoload will be registered.\n * @param bool $throw This parameter specifies whether spl_autoload_register should throw exceptions when the callback cannot be registered.\n * @param bool $prepend If true, spl_autoload_register will prepend the autoloader on the autoload queue instead of appending it.\n * @return bool\n */")
	ZEND_RAW_FENTRY("spl_autoload_unregister", zif_spl_autoload_unregister, arginfo_spl_autoload_unregister, 0, NULL, "/**\n * Unregister given function as __autoload() implementation\n * @param callable $callback The autoload function being unregistered.\n * @return bool\n */")
	ZEND_RAW_FENTRY("spl_classes", zif_spl_classes, arginfo_spl_classes, 0, NULL, "/**\n * Return available SPL classes\n * @return array\n */")
	ZEND_RAW_FENTRY("spl_object_hash", zif_spl_object_hash, arginfo_spl_object_hash, 0, NULL, "/**\n * Return hash id for given object\n * @param object $object Any object.\n * @return string\n */")
	ZEND_RAW_FENTRY("spl_object_id", zif_spl_object_id, arginfo_spl_object_id, 0, NULL, "/**\n * Return the integer object handle for given object\n * @param object $object Any object.\n * @return int\n */")
	ZEND_RAW_FENTRY("iterator_apply", zif_iterator_apply, arginfo_iterator_apply, 0, NULL, "/**\n * Call a function for every element in an iterator\n * @param Traversable $iterator The iterator object to iterate over.\n * @param callable $callback The callback function to call on every element. This function only receives the given args, so it is nullary by default. If count($args) === 3, for instance, the callback function is ternary. The function must return true in order to continue iterating over the iterator.\n * @param array|null $args An array of arguments; each element of args is passed to the callback callback as separate argument.\n * @return int\n */")
	ZEND_RAW_FENTRY("iterator_count", zif_iterator_count, arginfo_iterator_count, 0, NULL, "/**\n * Count the elements in an iterator\n * @param Traversable|array $iterator The iterator being counted.\n * @return int\n */")
	ZEND_RAW_FENTRY("iterator_to_array", zif_iterator_to_array, arginfo_iterator_to_array, 0, NULL, "/**\n * Copy the iterator into an array\n * @param Traversable|array $iterator The iterator being copied.\n * @param bool $preserve_keys Whether to use the iterator element keys as index.\n * @return array\n */")
	ZEND_FE_END
};
