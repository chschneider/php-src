<?php

/** @generate-class-entries */

#[\AllowDynamicProperties]
class stdClass
{
}

/** @refcount 1 */
function clone(object $object, array $withProperties = []): object {}

/** @genstubs-expose-comment-block
 * Terminate the current script with a status code or message
 * @return never
 */
function exit(string|int $status = 0): never {}

/** @genstubs-expose-comment-block
 * Alias exit
 */
/** @alias exit */
function die(string|int $status = 0): never {}

/** @genstubs-expose-comment-block
 * Gets the version of the current Zend engine
 * @return string
 */
/** @refcount 1 */
function zend_version(): string {}

/** @genstubs-expose-comment-block
 * Returns the number of arguments passed to the function
 * @return int
 */
function func_num_args(): int {}

/** @genstubs-expose-comment-block
 * Return an item from the argument list
 * @param int $position The argument offset. Function arguments are counted starting from zero.
 * @return mixed
 */
function func_get_arg(int $position): mixed {}

/** @genstubs-expose-comment-block
 * Returns an array comprising a function's argument list
 * @return array
 */
/** @return array<int, mixed> */
function func_get_args(): array {}

/** @genstubs-expose-comment-block
 * Get string length
 * @param string $string The string being measured for length.
 * @return int
 */
function strlen(string $string): int {}

/** @genstubs-expose-comment-block
 * Binary safe string comparison
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @return int
 */
/** @compile-time-eval */
function strcmp(string $string1, string $string2): int {}

/** @genstubs-expose-comment-block
 * Binary safe string comparison of the first n characters
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @param int $length Number of characters to use in the comparison.
 * @return int
 */
/** @compile-time-eval */
function strncmp(string $string1, string $string2, int $length): int {}

/** @genstubs-expose-comment-block
 * Binary safe case-insensitive string comparison
 * @param string $string1 The first string
 * @param string $string2 The second string
 * @return int
 */
/** @compile-time-eval */
function strcasecmp(string $string1, string $string2): int {}

/** @genstubs-expose-comment-block
 * Binary safe case-insensitive string comparison of the first n characters
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @param int $length The length of strings to be used in the comparison.
 * @return int
 */
/** @compile-time-eval */
function strncasecmp(string $string1, string $string2, int $length): int {}

/** @genstubs-expose-comment-block
 * Sets which PHP errors are reported
 * @param int|null $error_level The new error_reporting level. It takes on either a bitmask, or named constants. Using named constants is strongly encouraged to ensure compatibility for future versions. As error levels are added, the range of integers increases, so older integer-based error levels will not always behave as expected.
 * @return int
 */
function error_reporting(?int $error_level = null): int {}

/** @genstubs-expose-comment-block
 * Defines a named constant
 * @param string $constant_name The name of the constant.
 * @param mixed $value The value of the constant.
 * @param bool $case_insensitive If set to true, the constant will be defined case-insensitive. The default behavior is case-sensitive; i.e. CONSTANT and Constant represent different values.
 * @return bool
 */
function define(string $constant_name, mixed $value, bool $case_insensitive = false): bool {}

/** @genstubs-expose-comment-block
 * Checks whether a constant with the given name exists
 * @param string $constant_name The constant name.
 * @return bool
 */
function defined(string $constant_name): bool {}

/** @genstubs-expose-comment-block
 * Returns the name of the class of an object
 * @param object $object The tested object.
 * @return string
 */
function get_class(object $object = UNKNOWN): string {}

/** @genstubs-expose-comment-block
 * The "Late Static Binding" class name
 * @return string
 */
function get_called_class(): string {}

/** @genstubs-expose-comment-block
 * Retrieves the parent class name for object or class
 * @param object|string $object_or_class The tested object or class name.
 * @return string|false
 */
function get_parent_class(object|string $object_or_class = UNKNOWN): string|false {}

/** @genstubs-expose-comment-block
 * Checks if the object has this class as one of its parents or implements it
 * @param mixed $object_or_class A class name or an object instance. No error is generated if the class does not exist.
 * @param string $class The class name
 * @param bool $allow_string If this parameter set to false, string class name as object_or_class is not allowed. This also prevents from calling autoloader if the class doesn't exist.
 * @return bool
 */
/** @param object|string $object_or_class */
function is_subclass_of(mixed $object_or_class, string $class, bool $allow_string = true): bool {}

/** @genstubs-expose-comment-block
 * Checks whether the object is of a given type or subtype
 * @param mixed $object_or_class A class name or an object instance.
 * @param string $class The class or interface name
 * @param bool $allow_string If this parameter set to false, string class name as object_or_class is not allowed. This also prevents from calling autoloader if the class doesn't exist.
 * @return bool
 */
/** @param object|string $object_or_class */
function is_a(mixed $object_or_class, string $class, bool $allow_string = false): bool {}

/** @genstubs-expose-comment-block
 * Get the default properties of the class
 * @param string $class The class name
 * @return array
 */
/**
 * @return array<string, mixed|ref>
 * @refcount 1
 */
function get_class_vars(string $class): array {}

/** @genstubs-expose-comment-block
 * Gets the properties of the given object
 * @param object $object An object instance.
 * @return array
 */
function get_object_vars(object $object): array {}

/** @genstubs-expose-comment-block
 * Returns an array of mangled object properties
 * @param object $object An object instance.
 * @return array
 */
function get_mangled_object_vars(object $object): array {}

/** @genstubs-expose-comment-block
 * Gets the class methods' names
 * @param object|string $object_or_class The class name or an object instance
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function get_class_methods(object|string $object_or_class): array {}

/** @genstubs-expose-comment-block
 * Checks if the class method exists
 * @param object|string $object_or_class An object instance or a class name
 * @param string $method The method name
 * @return bool
 */
/** @param object|string $object_or_class */
function method_exists($object_or_class, string $method): bool {}

/** @genstubs-expose-comment-block
 * Checks if the object or class has a property
 * @param object|string $object_or_class The class name or an object of the class to test for
 * @param string $property The name of the property
 * @return bool
 */
/**
 * @param object|string $object_or_class
 * @frameless-function {"arity": 2}
 */
function property_exists($object_or_class, string $property): bool {}

/** @genstubs-expose-comment-block
 * Checks if the class has been defined
 * @param string $class The class name. The name is matched in a case-insensitive manner.
 * @param bool $autoload Whether to autoload if not already loaded.
 * @return bool
 */
/**
 * @frameless-function {"arity": 1}
 * @frameless-function {"arity": 2}
 */
function class_exists(string $class, bool $autoload = true): bool {}

/** @genstubs-expose-comment-block
 * Checks if the interface has been defined
 * @param string $interface The interface name
 * @param bool $autoload Whether to autoload if not already loaded.
 * @return bool
 */
function interface_exists(string $interface, bool $autoload = true): bool {}

/** @genstubs-expose-comment-block
 * Checks if the trait exists
 * @return bool
 */
function trait_exists(string $trait, bool $autoload = true): bool {}

/** @genstubs-expose-comment-block
 * Checks if the enum has been defined
 * @param string $enum The enum name. The name is matched in a case-insensitive manner.
 * @param bool $autoload Whether to autoload if not already loaded.
 * @return bool
 */
function enum_exists(string $enum, bool $autoload = true): bool {}

/** @genstubs-expose-comment-block
 * Return true if the given function has been defined
 * @param string $function The function name, as a string.
 * @return bool
 */
function function_exists(string $function): bool {}

/** @genstubs-expose-comment-block
 * Creates an alias for a class
 * @param string $class The original class.
 * @param string $alias The alias name for the class.
 * @param bool $autoload Whether to autoload if the original class is not found.
 * @return bool
 */
function class_alias(string $class, string $alias, bool $autoload = true): bool {}

/** @genstubs-expose-comment-block
 * Returns an array with the names of included or required files
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function get_included_files(): array {}

/** @genstubs-expose-comment-block
 * Alias get_included_files
 */
/**
 * @return array<int, string>
 * @alias get_included_files
 */
function get_required_files(): array {}

/** @genstubs-expose-comment-block
 * Generates a user-level error/warning/notice message
 * @param string $message The designated error message for this error. It's limited to 1024 bytes in length. Any additional characters beyond 1024 bytes will be truncated.
 * @param int $error_level The designated error type for this error. It only works with the E_USER_* family of constants, and will default to E_USER_NOTICE.
 * @return true
 */
function trigger_error(string $message, int $error_level = E_USER_NOTICE): true {}

/** @genstubs-expose-comment-block
 * Alias trigger_error
 */
/** @alias trigger_error */
function user_error(string $message, int $error_level = E_USER_NOTICE): true {}

/** @genstubs-expose-comment-block
 * Sets a user-defined error handler function
 * @param callable|null $callback If null is passed, the handler is reset to its default state. Otherwise, the handler is a callback with the following signature:
 * @param int $error_levels Can be used to mask the triggering of the callback function just like the error_reporting ini setting controls which errors are shown. Without this mask set the callback will be called for every error regardless to the setting of the error_reporting setting.
 * @return callable|null
 */
/** @return callable|null */
function set_error_handler(?callable $callback, int $error_levels = E_ALL) {}

/** @genstubs-expose-comment-block
 * Restores the previous error handler function
 * @return true
 */
function restore_error_handler(): true {}

/** @genstubs-expose-comment-block
 * Gets the user-defined error handler function
 * @return callable|null
 */
function get_error_handler(): ?callable {}

/** @genstubs-expose-comment-block
 * Sets a user-defined exception handler function
 * @param callable|null $callback The function to be called when an uncaught exception occurs. This handler function needs to accept one parameter, which will be the Throwable object that was thrown. Both Error and Exception implement the Throwable interface. This is the handler signature:
 * @return callable|null
 */
/** @return callable|null */
function set_exception_handler(?callable $callback) {}

/** @genstubs-expose-comment-block
 * Restores the previously defined exception handler function
 * @return true
 */
function restore_exception_handler(): true {}

/** @genstubs-expose-comment-block
 * Gets the user-defined exception handler function
 * @return callable|null
 */
function get_exception_handler(): ?callable {}

/** @genstubs-expose-comment-block
 * Returns an array with the name of the defined classes
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function get_declared_classes(): array {}

/** @genstubs-expose-comment-block
 * Returns an array of all declared traits
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
*/
function get_declared_traits(): array {}

/** @genstubs-expose-comment-block
 * Returns an array of all declared interfaces
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function get_declared_interfaces(): array {}

/** @genstubs-expose-comment-block
 * Returns an array of all defined functions
 * @return array
 */
/**
 * @return array<string, array>
 * @refcount 1
 */
function get_defined_functions(bool $exclude_disabled = true): array {}

/** @genstubs-expose-comment-block
 * Returns an array of all defined variables
 * @return array
 */
/**
 * @return array<string, mixed|ref>
 * @refcount 1
 */
function get_defined_vars(): array {}

/** @genstubs-expose-comment-block
 * Returns the resource type
 * @param resource $resource The evaluated resource handle.
 * @return string
 */
/**
 * @param resource $resource
 * @refcount 1
 */
function get_resource_type($resource): string {}

/** @genstubs-expose-comment-block
 * Returns an integer identifier for the given resource
 * @param resource $resource The evaluated resource handle.
 * @return int
 */
/** @param resource $resource */
function get_resource_id($resource): int {}

/** @genstubs-expose-comment-block
 * Returns active resources
 * @param string|null $type If defined, this will cause get_resources to only return resources of the given type. A list of resource types is available.
 * @return array
 */
function get_resources(?string $type = null): array {}

/** @genstubs-expose-comment-block
 * Returns an array with the names of all modules compiled and loaded
 * @param bool $zend_extensions Only return Zend extensions, if not then regular extensions, like mysqli are listed. Defaults to false (return regular extensions).
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function get_loaded_extensions(bool $zend_extensions = false): array {}

/** @genstubs-expose-comment-block
 * Returns an associative array with the names of all the constants and their values
 * @param bool $categorize Causing this function to return a multi-dimensional array with categories in the keys of the first dimension and constants and their values in the second dimension.  define("MY_CONSTANT", 1); print_r(get_defined_constants(true));  The above example will output something similar to: Array ( [Core] => Array ( [E_ERROR] => 1 [E_WARNING] => 2 [E_PARSE] => 4 [E_NOTICE] => 8 [E_CORE_ERROR] => 16 [E_CORE_WARNING] => 32 [E_COMPILE_ERROR] => 64 [E_COMPILE_WARNING] => 128 [E_USER_ERROR] => 256 [E_USER_WARNING] => 512 [E_USER_NOTICE] => 1024 [E_ALL] => 2047 [TRUE] => 1 ) [pcre] => Array ( [PREG_PATTERN_ORDER] => 1 [PREG_SET_ORDER] => 2 [PREG_OFFSET_CAPTURE] => 256 [PREG_SPLIT_NO_EMPTY] => 1 [PREG_SPLIT_DELIM_CAPTURE] => 2 [PREG_SPLIT_OFFSET_CAPTURE] => 4 [PREG_GREP_INVERT] => 1 ) [user] => Array ( [MY_CONSTANT] => 1 ) )
 * @return array
 */
/**
 * @return array<string, mixed>
 * @refcount 1
 */
function get_defined_constants(bool $categorize = false): array {}

/** @genstubs-expose-comment-block
 * Generates a backtrace
 * @param int $options This parameter is a bitmask for the following options: debug_backtrace options DEBUG_BACKTRACE_PROVIDE_OBJECT Whether or not to populate the "object" index. DEBUG_BACKTRACE_IGNORE_ARGS Whether or not to omit the "args" index, and thus all the function/method arguments, to save memory. There are four possible combinations: debug_backtrace options debug_backtrace() Populates both indexes debug_backtrace(DEBUG_BACKTRACE_PROVIDE_OBJECT) debug_backtrace(1) debug_backtrace(0) Omits index "object" and populates index "args". debug_backtrace(DEBUG_BACKTRACE_IGNORE_ARGS) Omits index "object" and index "args". debug_backtrace(2) debug_backtrace(DEBUG_BACKTRACE_PROVIDE_OBJECT|DEBUG_BACKTRACE_IGNORE_ARGS) Populate index "object" and omit index "args". debug_backtrace(3)
 * @param int $limit This parameter can be used to limit the number of stack frames returned. By default (limit=0) it returns all stack frames.
 * @return array
 */
/**
 * @return array<int, array>
 * @refcount 1
 */
function debug_backtrace(int $options = DEBUG_BACKTRACE_PROVIDE_OBJECT, int $limit = 0): array {}

/** @genstubs-expose-comment-block
 * Prints a backtrace
 * @param int $options This parameter is a bitmask for the following options: debug_print_backtrace options DEBUG_BACKTRACE_IGNORE_ARGS Whether or not to omit the "args" index, and thus all the function/method arguments, to save memory.
 * @param int $limit This parameter can be used to limit the number of stack frames printed. By default (limit=0) it prints all stack frames.
 * @return void
 */
function debug_print_backtrace(int $options = 0, int $limit = 0): void {}

/** @genstubs-expose-comment-block
 * Find out whether an extension is loaded
 * @param string $extension The extension name. This parameter is case-insensitive.
 * @return bool
 */
function extension_loaded(string $extension): bool {}

/** @genstubs-expose-comment-block
 * Returns an array with the names of the functions of a module
 * @param string $extension The module name.
 * @return array|false
 */
/**
 * @return array<int, string>|false
 * @refcount 1
 */
function get_extension_funcs(string $extension): array|false {}

#if ZEND_DEBUG && defined(ZTS)
/** @genstubs-expose-comment-block
 * Returns a unique identifier for the current thread
 * @return int
 */
function zend_thread_id(): int {}
#endif

/** @genstubs-expose-comment-block
 * Reclaims memory used by the Zend Engine memory manager
 * @return int
 */
function gc_mem_caches(): int {}

/** @genstubs-expose-comment-block
 * Forces collection of any existing garbage cycles
 * @return int
 */
function gc_collect_cycles(): int {}

/** @genstubs-expose-comment-block
 * Returns status of the circular reference collector
 * @return bool
 */
function gc_enabled(): bool {}

/** @genstubs-expose-comment-block
 * Activates the circular reference collector
 * @return void
 */
function gc_enable(): void {}

/** @genstubs-expose-comment-block
 * Deactivates the circular reference collector
 * @return void
 */
function gc_disable(): void {}

/** @genstubs-expose-comment-block
 * Gets information about the garbage collector
 * @return array
 */
/**
 * @return array<string, int|float|bool>
 * @refcount 1
 */
function gc_status(): array {}
