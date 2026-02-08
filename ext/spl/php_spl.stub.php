<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Return the interfaces which are implemented by the given class or interface
 * @param object|string $object_or_class An object (class instance) or a string (class or interface name).
 * @param bool $autoload Whether to autoload if not already loaded.
 * @return array|false
 */
/**
 * @param object|string $object_or_class
 * @return array<string, string>|false
 * @refcount 1
 */
function class_implements($object_or_class, bool $autoload = true): array|false {}

/** @genstubs-expose-comment-block
 * Return the parent classes of the given class
 * @param object|string $object_or_class An object (class instance) or a string (class name).
 * @param bool $autoload Whether to autoload if not already loaded.
 * @return array|false
 */
/**
 * @param object|string $object_or_class
 * @return array<string, string>|false
 * @refcount 1
 */
function class_parents($object_or_class, bool $autoload = true): array|false {}

/** @genstubs-expose-comment-block
 * Return the traits used by the given class
 * @param object|string $object_or_class An object (class instance) or a string (class name).
 * @param bool $autoload Whether to autoload if not already loaded.
 * @return array|false
 */
/**
 * @param object|string $object_or_class
 * @return array<string, string>|false
 * @refcount 1
 */
function class_uses($object_or_class, bool $autoload = true): array|false {}

/** @genstubs-expose-comment-block
 * Default implementation for __autoload()
 * @param string $class The name of the class being instantiated. When calling the function, the name of the class with the namespace is passed to the parameter. The class will not contain the leading backslash of a fully-qualified identifier.
 * @param string|null $file_extensions By default it checks all include_paths to contain filenames built up by the lowercase class name appended by the filename extensions .inc and .php.
 * @return void
 */
function spl_autoload(string $class, ?string $file_extensions = null): void {}

/** @genstubs-expose-comment-block
 * Try all registered __autoload() functions to load the requested class
 * @param string $class The class name being searched.
 * @return void
 */
function spl_autoload_call(string $class): void {}

/** @genstubs-expose-comment-block
 * Register and return default file extensions for spl_autoload
 * @param string|null $file_extensions If null, it simply returns the current list of extensions each separated by comma. To modify the list of file extensions, simply invoke the functions with the new list of file extensions to use in a single string with each extensions separated by comma.
 * @return string
 */
function spl_autoload_extensions(?string $file_extensions = null): string {}

/** @genstubs-expose-comment-block
 * Return all registered __autoload() functions
 * @return array
 */
function spl_autoload_functions(): array {}

/** @genstubs-expose-comment-block
 * Register given function as __autoload() implementation
 * @param callable|null $callback The autoload function being registered. If null, then the default implementation of spl_autoload will be registered.
 * @param bool $throw This parameter specifies whether spl_autoload_register should throw exceptions when the callback cannot be registered.
 * @param bool $prepend If true, spl_autoload_register will prepend the autoloader on the autoload queue instead of appending it.
 * @return bool
 */
function spl_autoload_register(?callable $callback = null, bool $throw = true, bool $prepend = false): bool {}

/** @genstubs-expose-comment-block
 * Unregister given function as __autoload() implementation
 * @param callable $callback The autoload function being unregistered.
 * @return bool
 */
function spl_autoload_unregister(callable $callback): bool {}

/** @genstubs-expose-comment-block
 * Return available SPL classes
 * @return array
 */
/**
 * @return array<string, string>
 * @refcount 1
 */
function spl_classes(): array {}

/** @genstubs-expose-comment-block
 * Return hash id for given object
 * @param object $object Any object.
 * @return string
 */
/** @refcount 1 */
function spl_object_hash(object $object): string {}

/** @genstubs-expose-comment-block
 * Return the integer object handle for given object
 * @param object $object Any object.
 * @return int
 */
function spl_object_id(object $object): int {}

/** @genstubs-expose-comment-block
 * Call a function for every element in an iterator
 * @param Traversable $iterator The iterator object to iterate over.
 * @param callable $callback The callback function to call on every element. This function only receives the given args, so it is nullary by default. If count($args) === 3, for instance, the callback function is ternary. The function must return true in order to continue iterating over the iterator.
 * @param array|null $args An array of arguments; each element of args is passed to the callback callback as separate argument.
 * @return int
 */
function iterator_apply(Traversable $iterator, callable $callback, ?array $args = null): int {}

/** @genstubs-expose-comment-block
 * Count the elements in an iterator
 * @param Traversable|array $iterator The iterator being counted.
 * @return int
 */
function iterator_count(iterable $iterator): int {}

/** @genstubs-expose-comment-block
 * Copy the iterator into an array
 * @param Traversable|array $iterator The iterator being copied.
 * @param bool $preserve_keys Whether to use the iterator element keys as index.
 * @return array
 */
function iterator_to_array(iterable $iterator, bool $preserve_keys = true): array {}
