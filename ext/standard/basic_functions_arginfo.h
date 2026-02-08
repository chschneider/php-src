/* This is a generated file, edit basic_functions.stub.php instead.
 * Stub hash: 3ba295511e3f2845b637a07256a6c65e8f5d15fa
 * Has decl header: yes */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_set_time_limit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, seconds, IS_LONG, 0, "The maximum execution time, in seconds. If set to zero, no time limit is imposed.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_header_register_callback, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ob_start, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, callback, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, chunk_size, IS_LONG, 0, "0", "If the optional parameter chunk_size is passed, the buffer will be flushed after any block of code resulting in output that causes the buffer's length to equal or exceed chunk_size. The default value 0 means that all output is buffered until the buffer is turned off. See  for more details.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "PHP_OUTPUT_HANDLER_STDFLAGS", "The flags parameter is a bitmask that controls the operations that can be performed on the output buffer. The default is to allow output buffers to be cleaned, flushed and removed, which can be set explicitly via the buffer control flags . See for more details.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ob_flush, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_ob_clean arginfo_ob_flush

#define arginfo_ob_end_flush arginfo_ob_flush

#define arginfo_ob_end_clean arginfo_ob_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ob_get_flush, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#define arginfo_ob_get_clean arginfo_ob_get_flush

#define arginfo_ob_get_contents arginfo_ob_get_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ob_get_level, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ob_get_length, 0, 0, MAY_BE_LONG|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ob_list_handlers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ob_get_status, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, full_status, _IS_BOOL, 0, "false", "true to return all active output buffer levels. If false or not set, only the top level output buffer is returned.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ob_implicit_flush, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, enable, _IS_BOOL, 0, "true", "true to turn implicit flushing on, false otherwise.")
ZEND_END_ARG_INFO()

#define arginfo_output_reset_rewrite_vars arginfo_ob_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_output_add_rewrite_var, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, name, IS_STRING, 0, "The variable name.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_STRING, 0, "The variable value.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_wrapper_register, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, protocol, IS_STRING, 0, "The wrapper name to be registered. Valid protocol names must contain alphanumerics, dots (.), plusses (+), or hyphens (-) only.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "The classname which implements the protocol.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "Should be set to STREAM_IS_URL if protocol is a URL protocol. Default is 0, local stream.")
ZEND_END_ARG_INFO()

#define arginfo_stream_register_wrapper arginfo_stream_wrapper_register

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_wrapper_unregister, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_stream_wrapper_restore arginfo_stream_wrapper_unregister

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_push, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, values, IS_MIXED, 0, "The values to push onto the end of the array.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_krsort, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "SORT_REGULAR", "The optional second parameter flags may be used to modify the sorting behavior using these values:")
ZEND_END_ARG_INFO()

#define arginfo_ksort arginfo_krsort

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, value, Countable, MAY_BE_ARRAY, NULL, "An array or Countable object.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "COUNT_NORMAL", "If the optional mode parameter is set to COUNT_RECURSIVE (or 1), count will recursively count the array.  This is particularly useful for counting all the elements of a multidimensional array.")
ZEND_END_ARG_INFO()

#define arginfo_sizeof arginfo_count

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_natsort, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, array, IS_ARRAY, 0, "The input array.")
ZEND_END_ARG_INFO()

#define arginfo_natcasesort arginfo_natsort

#define arginfo_asort arginfo_krsort

#define arginfo_arsort arginfo_krsort

#define arginfo_sort arginfo_krsort

#define arginfo_rsort arginfo_krsort

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_usort, 0, 2, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.")
ZEND_END_ARG_INFO()

#define arginfo_uasort arginfo_usort

#define arginfo_uksort arginfo_usort

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_end, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(1, array, MAY_BE_ARRAY|MAY_BE_OBJECT, NULL, "The array.  This array is passed by reference because it is modified by the function.  This means you must pass it a real variable and not a function returning an array because only actual variables may be passed by reference.")
ZEND_END_ARG_INFO()

#define arginfo_prev arginfo_end

#define arginfo_next arginfo_end

#define arginfo_reset arginfo_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_current, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, array, MAY_BE_ARRAY|MAY_BE_OBJECT, NULL, "The array.")
ZEND_END_ARG_INFO()

#define arginfo_pos arginfo_current

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_key, 0, 1, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_NULL)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, array, MAY_BE_ARRAY|MAY_BE_OBJECT, NULL, "The array.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_min, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "Any comparable value.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, values, IS_MIXED, 0, "Any comparable values.")
ZEND_END_ARG_INFO()

#define arginfo_max arginfo_min

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_clamp, 0, 3, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_walk, 0, 2, IS_TRUE, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(1, array, MAY_BE_ARRAY|MAY_BE_OBJECT, NULL, "The input array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "Typically, callback takes on two parameters. The array parameter's value being the first, and the keyindex second.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, arg, IS_MIXED, 0, "If the optional arg parameter is supplied, it will be passed as the third parameter to the callback.")
ZEND_END_ARG_INFO()

#define arginfo_array_walk_recursive arginfo_array_walk

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_in_array, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_MIXED, 0, "The searched value.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_ARRAY, 0, "The array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, strict, _IS_BOOL, 0, "false", "If the third parameter strict is set to true then the in_array function will also check the types of the needle in the haystack.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_array_search, 0, 2, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_MIXED, 0, "The searched value.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_ARRAY, 0, "The array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, strict, _IS_BOOL, 0, "false", "If the third parameter strict is set to true then the array_search function will search for identical elements in the haystack. This means it will also perform a strict type comparison of the needle in the haystack, and objects must be the same instance.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_extract, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(ZEND_SEND_PREFER_REF, array, IS_ARRAY, 0, "An associative array. This function treats keys as variable names and values as variable values.  For each keyvalue pair it will create a variable in the current symbol table, subject to flags and prefix parameters.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "EXTR_OVERWRITE", "The way invalidnumeric keys and collisions are treated is determined by the extraction flags. It can be one of the following values: EXTR_OVERWRITE If there is a collision, overwrite the existing variable. EXTR_SKIP If there is a collision, don't overwrite the existing variable. EXTR_PREFIX_SAME If there is a collision, prefix the variable name with prefix. EXTR_PREFIX_ALL Prefix all variable names with prefix. EXTR_PREFIX_INVALID Only prefix invalidnumeric variable names with prefix. EXTR_IF_EXISTS Only overwrite the variable if it already exists in the current symbol table, otherwise do nothing.  This is useful for defining a list of valid variables and then extracting only those variables you have defined out of $_REQUEST, for example. EXTR_PREFIX_IF_EXISTS Only create prefixed variable names if the non-prefixed version of the same variable exists in the current symbol table. EXTR_REFS Extracts variables as references. This effectively means that the values of the imported variables are still referencing the values of the array parameter. You can use this flag on its own or combine it with any other flag by OR'ing the flags.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, prefix, IS_STRING, 0, "\"\"", "Note that prefix is only required if flags is EXTR_PREFIX_SAME, EXTR_PREFIX_ALL, EXTR_PREFIX_INVALID or EXTR_PREFIX_IF_EXISTS. If the prefixed result is not a valid variable name, it is not imported into the symbol table. Prefixes are automatically separated from the array key by an underscore character.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_compact, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, var_name)
	ZEND_ARG_VARIADIC_INFO(0, var_names)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_fill, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, start_index, IS_LONG, 0, "The first index of the returned array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, count, IS_LONG, 0, "Number of elements to insert. Must be greater than or equal to zero, and less than or equal to 2147483647.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "Value to use for filling")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_fill_keys, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, keys, IS_ARRAY, 0, "Array of values that will be used as keys. Illegal values for key will be converted to string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "Value to use for filling")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_range, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, start, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_DOUBLE, NULL, "First value of the sequence.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, end, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_DOUBLE, NULL, "Last possible value of the sequence.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, step, MAY_BE_LONG|MAY_BE_DOUBLE, "1", "step indicates by how much is the produced sequence progressed between values of the sequence.")
ZEND_END_ARG_INFO()

#define arginfo_shuffle arginfo_natsort

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_pop, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, array, IS_ARRAY, 0, "The array to get the value from.")
ZEND_END_ARG_INFO()

#define arginfo_array_shift arginfo_array_pop

#define arginfo_array_unshift arginfo_array_push

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_splice, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "If offset is positive then the start of the removed portion is at that offset from the beginning of the array array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "If length is omitted, removes everything from offset to the end of the array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, replacement, IS_MIXED, 0, "[]", "If replacement array is specified, then the removed elements are replaced with elements from this array.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_slice, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "If offset is non-negative, the sequence will start at that offset in the array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "If length is given and is positive, then the sequence will have up to that many elements in it.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, preserve_keys, _IS_BOOL, 0, "false", "array_slice will reorder and reset the integer array indices by default. This behaviour can be changed by setting preserve_keys to true. String keys are always preserved, regardless of this parameter.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_merge, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, arrays, IS_ARRAY, 0, "Variable list of arrays to merge.")
ZEND_END_ARG_INFO()

#define arginfo_array_merge_recursive arginfo_array_merge

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_replace, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array in which elements are replaced.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, replacements, IS_ARRAY, 0, "Arrays from which elements will be extracted. Values from later arrays overwrite the previous values.")
ZEND_END_ARG_INFO()

#define arginfo_array_replace_recursive arginfo_array_replace

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_keys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "An array containing keys to return.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filter_value, IS_MIXED, 0, "If specified, then only keys containing this value are returned.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, strict, _IS_BOOL, 0, "false", "Determines if strict comparison (===) should be used during the search.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_array_key_first, 0, 1, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO(0, array, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_array_key_last arginfo_array_key_first

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_first, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, array, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_array_last arginfo_array_first

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_values, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array.")
ZEND_END_ARG_INFO()

#define arginfo_array_count_values arginfo_array_values

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_column, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "A multi-dimensional array or an array of objects from which to pull a column of values from. If an array of objects is provided, then public properties can be directly pulled. In order for protected or private properties to be pulled, the class must implement both the __get and __isset magic methods.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, column_key, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_NULL, NULL, "The column of values to return. This value may be an integer key of the column you wish to retrieve, or it may be a string key name for an associative array or property name. It may also be null to return complete arrays or objects (this is useful together with index_key to reindex the array).")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, index_key, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_NULL, "null", "The column to use as the indexkeys for the returned array. This value may be the integer key of the column, or it may be the string key name. The value is cast as usual for array keys (however, prior to PHP 8.0.0, objects supporting conversion to string were also allowed).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_reverse, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, preserve_keys, _IS_BOOL, 0, "false", "If set to true numeric keys are preserved. Non-numeric keys are not affected by this setting and will always be preserved.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_pad, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "Initial array of values to pad.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "New size of the array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "Value to pad if array is less than length.")
ZEND_END_ARG_INFO()

#define arginfo_array_flip arginfo_array_values

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_change_key_case, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array to work on")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, case, IS_LONG, 0, "CASE_LOWER", "Either CASE_UPPER or CASE_LOWER (default)")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_unique, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "SORT_STRING", "The optional second parameter flags may be used to modify the comparison behavior using these values:")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_intersect_key, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array with master keys to check.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, arrays, IS_ARRAY, 0, "Arrays to compare keys against.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_intersect_ukey, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "Initial array for comparison of the arrays.")
	ZEND_ARG_VARIADIC_INFO(0, rest)
ZEND_END_ARG_INFO()

#define arginfo_array_intersect arginfo_array_intersect_key

#define arginfo_array_uintersect arginfo_array_intersect_ukey

#define arginfo_array_intersect_assoc arginfo_array_intersect_key

#define arginfo_array_uintersect_assoc arginfo_array_intersect_ukey

#define arginfo_array_intersect_uassoc arginfo_array_intersect_ukey

#define arginfo_array_uintersect_uassoc arginfo_array_intersect_ukey

#define arginfo_array_diff_key arginfo_array_intersect_key

#define arginfo_array_diff_ukey arginfo_array_intersect_ukey

#define arginfo_array_diff arginfo_array_intersect_key

#define arginfo_array_udiff arginfo_array_intersect_ukey

#define arginfo_array_diff_assoc arginfo_array_intersect_key

#define arginfo_array_diff_uassoc arginfo_array_intersect_ukey

#define arginfo_array_udiff_assoc arginfo_array_intersect_ukey

#define arginfo_array_udiff_uassoc arginfo_array_intersect_ukey

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_multisort, 0, 1, IS_TRUE, 0)
	ZEND_ARG_INFO(ZEND_SEND_PREFER_REF, array)
	ZEND_ARG_VARIADIC_INFO(ZEND_SEND_PREFER_REF, rest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_array_rand, 0, 1, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_ARRAY)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array. Cannot be empty.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, num, IS_LONG, 0, "1", "Specifies how many entries should be picked. Must be greater than zero, and less than or equal to the length of array")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_array_sum, 0, 1, MAY_BE_LONG|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array.")
ZEND_END_ARG_INFO()

#define arginfo_array_product arginfo_array_sum

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_reduce, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The input array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "Holds the return value of the previous iteration; in the case of the first iteration it instead holds the value of initial.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, initial, IS_MIXED, 0, "null", "If the optional initial is available, it will be used at the beginning of the process, or as a final result in case the array is empty.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_filter, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array to iterate over")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, callback, IS_CALLABLE, 1, "null", "The callback function to use")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "ARRAY_FILTER_USE_KEY", "Flag determining what arguments are sent to callback: ARRAY_FILTER_USE_KEY - pass key as the only argument to callback instead of the value ARRAY_FILTER_USE_BOTH - pass both value and key as arguments to callback instead of the value Default is 0 which will pass value as the only argument to callback instead.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_find, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, array, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_array_find_key arginfo_array_find

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_any, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, array, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_array_all arginfo_array_any

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_map, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 1, "A callable to run for each element in each array.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "An array to run through the callback function.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, arrays, IS_ARRAY, 0, "Supplementary variable list of array arguments to run through the callback function.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_key_exists, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "An array with keys to check.")
ZEND_END_ARG_INFO()

#define arginfo_key_exists arginfo_array_key_exists

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_chunk, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array to work on")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "The size of each chunk")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, preserve_keys, _IS_BOOL, 0, "false", "When set to true keys will be preserved. Default is false which will reindex the chunk numerically")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_combine, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, keys, IS_ARRAY, 0, "Array of keys to be used. Illegal values for key will be converted to string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, values, IS_ARRAY, 0, "Array of values to be used")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_array_is_list, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, array, IS_ARRAY, 0, "The array being evaluated.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_base64_encode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The data to encode.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_base64_decode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The encoded data.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, strict, _IS_BOOL, 0, "false", "If the strict parameter is set to true then the base64_decode function will return false if the input contains character from outside the base64 alphabet. Otherwise invalid characters will be silently discarded.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_constant, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, name, IS_STRING, 0, "The constant name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ip2long, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, ip, IS_STRING, 0, "A standard format address.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_long2ip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, ip, IS_LONG, 0, "A proper address representation in long integer.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getenv, 0, 0, MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, name, IS_STRING, 1, "null", "The variable name as a string or null.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, local_only, _IS_BOOL, 0, "false", "When set to true, only local environment variables are returned, set by the operating system or putenv. It only has an effect when name is a string.")
ZEND_END_ARG_INFO()

#if defined(HAVE_PUTENV)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_putenv, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, assignment, IS_STRING, 0, "The setting, like \"FOO=BAR\"")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getopt, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, short_options, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, long_options, IS_ARRAY, 0, "[]")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, rest_index, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_flush, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sleep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, seconds, IS_LONG, 0, "Halt time in seconds (must be greater than or equal to 0).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_usleep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, microseconds, IS_LONG, 0, "Halt time in microseconds. A microsecond is one millionth of a second.")
ZEND_END_ARG_INFO()

#if defined(HAVE_NANOSLEEP)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_time_nanosleep, 0, 2, MAY_BE_ARRAY|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, seconds, IS_LONG, 0, "Must be a non-negative integer.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, nanoseconds, IS_LONG, 0, "Must be a non-negative integer less than 1 billion.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_time_sleep_until, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, timestamp, IS_DOUBLE, 0, "The timestamp when the script should wake.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_current_user, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_get_cfg_var, 0, 1, MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, option, IS_STRING, 0, "The configuration option name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_error_log, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The error message that should be logged.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, message_type, IS_LONG, 0, "0", "Says where the error should go. The possible message types are as follows:")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, destination, IS_STRING, 1, "null", "The destination. Its meaning depends on the message_type parameter as described above.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, additional_headers, IS_STRING, 1, "null", "The extra headers. It's used when the message_type parameter is set to 1. This message type uses the same internal function as mail does.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_error_get_last, 0, 0, IS_ARRAY, 1)
ZEND_END_ARG_INFO()

#define arginfo_error_clear_last arginfo_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_call_user_func, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The callable to be called.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, args, IS_MIXED, 0, "Zero or more parameters to be passed to the callback.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_call_user_func_array, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The callable to be called.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, args, IS_ARRAY, 0, "The parameters to be passed to the callback, as an array.")
ZEND_END_ARG_INFO()

#define arginfo_forward_static_call arginfo_call_user_func

#define arginfo_forward_static_call_array arginfo_call_user_func_array

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_register_shutdown_function, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The shutdown callback to register.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, args, IS_MIXED, 0, "It is possible to pass parameters to the shutdown function by passing additional parameters.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_highlight_file, 0, 1, MAY_BE_STRING|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the PHP file to be highlighted.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, return, _IS_BOOL, 0, "false", "Set this parameter to true to make this function return the highlighted code.")
ZEND_END_ARG_INFO()

#define arginfo_show_source arginfo_highlight_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_php_strip_whitespace, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the PHP file.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_highlight_string, 0, 1, MAY_BE_STRING|MAY_BE_TRUE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The PHP code to be highlighted. This should include the opening tag.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, return, _IS_BOOL, 0, "false", "Set this parameter to true to make this function return the highlighted code.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ini_get, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, option, IS_STRING, 0, "The configuration option name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ini_get_all, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, extension, IS_STRING, 1, "null", "An optional extension name. If not null or the string core, the function returns only options specific for that extension.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, details, _IS_BOOL, 0, "true", "Retrieve details settings or only the current value for each setting. Default is true (retrieve details).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ini_set, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, option, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, value, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_DOUBLE|MAY_BE_BOOL|MAY_BE_NULL, NULL, "The new value for the option.")
ZEND_END_ARG_INFO()

#define arginfo_ini_alter arginfo_ini_set

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ini_restore, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, option, IS_STRING, 0, "The configuration option name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ini_parse_quantity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, shorthand, IS_STRING, 0, "Ini shorthand to parse, must be a number followed by an optional multiplier. The following multipliers are supported: kK (1024), mM (1048576), gG (1073741824). The number can be a decimal, hex (prefixed with 0x or 0X), octal (prefixed with 0o, 0O or 0) or binary (prefixed with 0b or 0B)")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_set_include_path, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, include_path, IS_STRING, 0, "The new value for the include_path")
ZEND_END_ARG_INFO()

#define arginfo_get_include_path arginfo_ob_get_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_print_r, 0, 1, MAY_BE_STRING|MAY_BE_TRUE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The expression to be printed.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, return, _IS_BOOL, 0, "false", "If you would like to capture the output of print_r, use the return parameter.  When this parameter is set to true, print_r will return the information rather than print it.")
ZEND_END_ARG_INFO()

#define arginfo_connection_aborted arginfo_ob_get_level

#define arginfo_connection_status arginfo_ob_get_level

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ignore_user_abort, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, enable, _IS_BOOL, 1, "null", "If set and not null, this function will set the ignore_user_abort ini setting to the given enable. Otherwise, this function will only return the previous setting without changing it.")
ZEND_END_ARG_INFO()

#if defined(HAVE_GETSERVBYNAME)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getservbyname, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, service, IS_STRING, 0, "The Internet service name, as a string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, protocol, IS_STRING, 0, "protocol is either \"tcp\" or \"udp\" (in lowercase).")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETSERVBYPORT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getservbyport, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, port, IS_LONG, 0, "The port number.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, protocol, IS_STRING, 0, "protocol is either \"tcp\" or \"udp\" (in lowercase).")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETPROTOBYNAME)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getprotobyname, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, protocol, IS_STRING, 0, "The protocol name.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETPROTOBYNUMBER)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getprotobynumber, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, protocol, IS_LONG, 0, "The protocol number.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_register_tick_function, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The function to register.")
	ZEND_ARG_VARIADIC_TYPE_INFO(0, args, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_unregister_tick_function, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, callback, IS_CALLABLE, 0, "The function to de-register.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_is_uploaded_file, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The filename being checked.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_move_uploaded_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, from, IS_STRING, 0, "The filename of the uploaded file.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to, IS_STRING, 0, "The destination of the moved file.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_parse_ini_file, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The filename of the ini file being parsed. If a relative path is used, it is evaluated relative to the current working directory, then the include_path.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, process_sections, _IS_BOOL, 0, "false", "By setting the process_sections parameter to true, you get a multidimensional array, with the section names and settings included. The default for process_sections is false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, scanner_mode, IS_LONG, 0, "INI_SCANNER_NORMAL", "Can either be INI_SCANNER_NORMAL (default) or INI_SCANNER_RAW. If INI_SCANNER_RAW is supplied, then option values will not be parsed.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_parse_ini_string, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, ini_string, IS_STRING, 0, "The contents of the ini file being parsed.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, process_sections, _IS_BOOL, 0, "false", "By setting the process_sections parameter to true, you get a multidimensional array, with the section names and settings included. The default for process_sections is false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, scanner_mode, IS_LONG, 0, "INI_SCANNER_NORMAL", "Can either be INI_SCANNER_NORMAL (default) or INI_SCANNER_RAW. If INI_SCANNER_RAW is supplied, then option values will not be parsed.")
ZEND_END_ARG_INFO()

#if ZEND_DEBUG
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_config_get_hash, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETLOADAVG)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_sys_getloadavg, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_get_browser, 0, 0, MAY_BE_OBJECT|MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, user_agent, IS_STRING, 1, "null", "The User Agent to be analyzed. By default, the value of HTTP User-Agent header is used; however, you can alter this (i.e., look up another browser's info) by passing this parameter.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, return_array, _IS_BOOL, 0, "false", "If set to true, this function will return an array instead of an object.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_crc32, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The data.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_crypt, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be hashed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, salt, IS_STRING, 0, "A salt string to base the hashing on. If not provided, the behaviour is defined by the algorithm implementation and can lead to unexpected results.")
ZEND_END_ARG_INFO()

#if defined(HAVE_STRPTIME)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_strptime, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETHOSTNAME)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gethostname, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gethostbyaddr, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, ip, IS_STRING, 0, "The host IP address.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gethostbyname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, hostname, IS_STRING, 0, "The host name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gethostbynamel, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, hostname, IS_STRING, 0, "The host name.")
ZEND_END_ARG_INFO()

#if (defined(PHP_WIN32) || defined(HAVE_DNS_SEARCH_FUNC))
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dns_check_record, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_STRING, 0, "\"MX\"")
ZEND_END_ARG_INFO()

#define arginfo_checkdnsrr arginfo_dns_check_record

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_dns_get_record, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, hostname, IS_STRING, 0, "hostname should be a valid DNS hostname such as \"www.example.com\". Reverse lookups can be generated using in-addr.arpa notation, but gethostbyaddr is more suitable for the majority of reverse lookups.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, type, IS_LONG, 0, "DNS_ANY", "By default, dns_get_record will search for any resource records associated with hostname. To limit the query, use one of the DNS_* constants.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, authoritative_name_servers, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, additional_records, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, raw, _IS_BOOL, 0, "false", "The type will be interpreted as a raw DNS type ID (the DNS_* constants cannot be used). The return value will contain a data key, which needs to be manually parsed.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dns_get_mx, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hostname, IS_STRING, 0)
	ZEND_ARG_INFO(1, hosts)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, weights, "null")
ZEND_END_ARG_INFO()

#define arginfo_getmxrr arginfo_dns_get_mx
#endif

#if (defined(PHP_WIN32) || defined(HAVE_GETIFADDRS) || defined(__PASE__))
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_net_get_interfaces, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_FTOK)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ftok, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, project_id, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_hrtime, 0, 0, MAY_BE_ARRAY|MAY_BE_LONG|MAY_BE_DOUBLE|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, as_number, _IS_BOOL, 0, "false", "Whether the high resolution time should be returned as array or number.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_md5, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "If the optional binary is set to true, then the md5 digest is instead returned in raw binary format with a length of 16.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_md5_file, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The filename")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When true, returns the digest in raw binary format with a length of 16.")
ZEND_END_ARG_INFO()

#define arginfo_getmyuid arginfo_ob_get_length

#define arginfo_getmygid arginfo_ob_get_length

#define arginfo_getmypid arginfo_ob_get_length

#define arginfo_getmyinode arginfo_ob_get_length

#define arginfo_getlastmod arginfo_ob_get_length

#define arginfo_sha1 arginfo_md5

#define arginfo_sha1_file arginfo_md5_file

#if defined(HAVE_SYSLOG_H)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openlog, 0, 3, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, prefix, IS_STRING, 0, "The string prefix is added to each message.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, flags, IS_LONG, 0, "Bitmask of the following constants: LOG_CONS LOG_NDELAY LOG_ODELAY LOG_NOWAIT LOG_PERROR LOG_PID")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, facility, IS_LONG, 0, "The facility argument is used to specify what type of program is logging the message. This lets the configuration file specify that messages from different facilities will be handled differently. Must be one of the following constants: LOG_AUTH LOG_AUTHPRIV LOG_CRON LOG_DAEMON LOG_KERN LOG_LOCAL[0-7] LOG_LPR LOG_MAIL LOG_NEWS LOG_SYSLOG LOG_USER LOG_UUCP")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_closelog, 0, 0, IS_TRUE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_syslog, 0, 2, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, priority, IS_LONG, 0, "One of the LOG_EMERG LOG_ALERT LOG_CRIT LOG_ERR LOG_WARNING LOG_NOTICE LOG_INFO LOG_DEBUG constants.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The message to send.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_inet_ntop arginfo_gethostbyaddr

#define arginfo_inet_pton arginfo_gethostbyaddr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_metaphone, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, max_phonemes, IS_LONG, 0, "0", "This parameter restricts the returned metaphone key to max_phonemes characters in length. However, the resulting phonemes are always transcribed completely, so the resulting string length may be slightly longer than max_phonemes. The default value of 0 means no restriction.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_header, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, header, IS_STRING, 0, "The header string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, replace, _IS_BOOL, 0, "true", "The optional replace parameter indicates whether the header should replace a previous similar header, or add a second header of the same type.  By default it will replace, but if you pass in false as the second argument you can force multiple headers of the same type.  For example:")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, response_code, IS_LONG, 0, "0", "Forces the HTTP response code to the specified value. Note that this parameter only has an effect if the header is not empty.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_header_remove, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, name, IS_STRING, 1, "null", "The header name to be removed. When null, all previously set headers are removed.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_setrawcookie, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, value, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_MASK(0, expires_or_options, MAY_BE_ARRAY|MAY_BE_LONG, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, path, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, domain, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, secure, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, httponly, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_setcookie arginfo_setrawcookie

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_http_response_code, 0, 0, MAY_BE_LONG|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, response_code, IS_LONG, 0, "0", "The optional response_code will set the response code.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_headers_sent, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, filename, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, line, "null")
ZEND_END_ARG_INFO()

#define arginfo_headers_list arginfo_ob_list_handlers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_htmlspecialchars, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being converted.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401", "A bitmask of one or more of the following flags, which specify how to handle quotes, invalid code unit sequences and the used document type. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_IGNORE Silently discard invalid code unit sequences instead of returning an empty string. Using this flag is discouraged as it may have security implications. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_DISALLOWED Replace invalid code points for the given document type with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of leaving them as is. This may be useful, for instance, to ensure the well-formedness of XML documents with embedded external content. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "An optional argument defining the encoding used when converting characters.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, double_encode, _IS_BOOL, 0, "true", "When double_encode is turned off PHP will not encode existing html entities, the default is to convert everything.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_htmlspecialchars_decode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to decode.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401", "A bitmask of one or more of the following flags, which specify how to handle quotes and which document type to use. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_html_entity_decode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401", "A bitmask of one or more of the following flags, which specify how to handle quotes and which document type to use. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 1, "null", "An optional argument defining the encoding used when converting characters.")
ZEND_END_ARG_INFO()

#define arginfo_htmlentities arginfo_htmlspecialchars

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_get_html_translation_table, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, table, IS_LONG, 0, "HTML_SPECIALCHARS", "Which table to return. Either HTML_ENTITIES or HTML_SPECIALCHARS.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401", "A bitmask of one or more of the following flags, which specify which quotes the table will contain as well as which document type the table is for. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Table will contain entities for double-quotes, but not for single-quotes. ENT_QUOTES Table will contain entities for both double and single quotes. ENT_NOQUOTES Table will neither contain entities for single quotes nor for double quotes. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Table for HTML 4.01. ENT_XML1 Table for XML 1. ENT_XHTML Table for XHTML. ENT_HTML5 Table for HTML 5.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_STRING, 0, "\"UTF-8\"", "Encoding to use. If omitted, the default value for this argument is UTF-8.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_assert, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, assertion, IS_MIXED, 0, "This is any expression that returns a value, which will be executed and the result is used to indicate whether the assertion succeeded or failed.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, description, Throwable, MAY_BE_STRING|MAY_BE_NULL, "null", "If description is an instance of Throwable, it will be thrown only if the assertion is executed and fails. As of PHP 8.0.0, this is done prior to calling the potentially defined assertion callback. As of PHP 8.0.0, the object will be thrown regardless of the configuration of assert.exception. As of PHP 8.0.0, the assert.bail setting has no effect in this case.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_assert_options, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_bin2hex arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_hex2bin, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strspn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to examine.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, characters, IS_STRING, 0, "The list of allowable characters.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The position in string to start searching.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "The length of the segment from string to examine.")
ZEND_END_ARG_INFO()

#define arginfo_strcspn arginfo_strspn

#if defined(HAVE_NL_LANGINFO)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_nl_langinfo, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, item, IS_LONG, 0, "item may be an integer value of the element or the constant name of the element. The following is a list of constant names for item that may be used and their description. Some of these constants may not be defined or hold no value for certain locales. nl_langinfo Constants Constant Description LC_TIME Category Constants ABDAY_(1-7) Abbreviated name of n-th day of the week. DAY_(1-7) Name of the n-th day of the week (DAY_1 = Sunday). ABMON_(1-12) Abbreviated name of the n-th month of the year. MON_(1-12) Name of the n-th month of the year. AM_STR String for Ante meridian. PM_STR String for Post meridian. D_T_FMT String that can be used as the format string for strftime to represent time and date. D_FMT String that can be used as the format string for strftime to represent date. T_FMT String that can be used as the format string for strftime to represent time. T_FMT_AMPM String that can be used as the format string for strftime to represent time in 12-hour format with antepost meridian. ERA Alternate era. ERA_YEAR Year in alternate era format. ERA_D_T_FMT Date and time in alternate era format (string can be used in strftime). ERA_D_FMT Date in alternate era format (string can be used in strftime). ERA_T_FMT Time in alternate era format (string can be used in strftime). LC_MONETARY Category Constants INT_CURR_SYMBOL International currency symbol. CURRENCY_SYMBOL Local currency symbol. CRNCYSTR Same value as CURRENCY_SYMBOL. MON_DECIMAL_POINT Decimal point character. MON_THOUSANDS_SEP Thousands separator (groups of three digits). MON_GROUPING Like \"grouping\" element. POSITIVE_SIGN Sign for positive values. NEGATIVE_SIGN Sign for negative values. INT_FRAC_DIGITS International fractional digits. FRAC_DIGITS Local fractional digits. P_CS_PRECEDES Returns 1 if CURRENCY_SYMBOL precedes a positive value. P_SEP_BY_SPACE Returns 1 if a space separates CURRENCY_SYMBOL from a positive value. N_CS_PRECEDES Returns 1 if CURRENCY_SYMBOL precedes a negative value. N_SEP_BY_SPACE Returns 1 if a space separates CURRENCY_SYMBOL from a negative value. P_SIGN_POSN Returns 0 if parentheses surround the quantity and CURRENCY_SYMBOL. Returns 1 if the sign string precedes the quantity and CURRENCY_SYMBOL. Returns 2 if the sign string follows the quantity and CURRENCY_SYMBOL. Returns 3 if the sign string immediately precedes the CURRENCY_SYMBOL. Returns 4 if the sign string immediately follows the CURRENCY_SYMBOL. N_SIGN_POSN LC_NUMERIC Category Constants DECIMAL_POINT Decimal point character. RADIXCHAR Same value as DECIMAL_POINT. THOUSANDS_SEP Separator character for thousands (groups of three digits). THOUSEP Same value as THOUSANDS_SEP. GROUPING LC_MESSAGES Category Constants YESEXPR Regex string for matching \"yes\" input. NOEXPR Regex string for matching \"no\" input. YESSTR Output string for \"yes\". NOSTR Output string for \"no\". LC_CTYPE Category Constants CODESET Return a string with the name of the character encoding.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strcoll, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string1, IS_STRING, 0, "The first string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string2, IS_STRING, 0, "The second string.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_trim, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, characters, IS_STRING, 0, "\" \\n\\r\\t\\v\\x00\"")
ZEND_END_ARG_INFO()

#define arginfo_rtrim arginfo_trim

#define arginfo_chop arginfo_trim

#define arginfo_ltrim arginfo_trim

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_wordwrap, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, width, IS_LONG, 0, "75", "The number of characters at which the string will be wrapped.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, break, IS_STRING, 0, "\"\\n\"", "The line is broken using the optional break parameter. It must not be an empty string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, cut_long_words, _IS_BOOL, 0, "false", "If the cut_long_words is set to true, the string is always wrapped at or before the specified width.  So if you have a word that is larger than the given width, it is broken apart. (See second example). When false the function does not split the word even if the width is smaller than the word width.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_explode, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, separator, IS_STRING, 0, "The boundary string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, limit, IS_LONG, 0, "PHP_INT_MAX", "If limit is set and positive, the returned array will contain a maximum of limit elements with the last element containing the rest of string.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_implode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, separator, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "Optional. Defaults to an empty string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, array, IS_ARRAY, 1, "null", "The array of strings to implode.")
ZEND_END_ARG_INFO()

#define arginfo_join arginfo_implode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_strtok, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being split up into smaller strings (tokens).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, token, IS_STRING, 1, "null", "The delimiter used when splitting up string.")
ZEND_END_ARG_INFO()

#define arginfo_strtoupper arginfo_base64_encode

#define arginfo_strtolower arginfo_base64_encode

#define arginfo_str_increment arginfo_base64_encode

#define arginfo_str_decrement arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_basename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "A path.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, suffix, IS_STRING, 0, "\"\"", "If the name component ends in suffix this will also be cut off.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dirname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "A path.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, levels, IS_LONG, 0, "1", "The number of parent directories to go up.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_pathinfo, 0, 1, MAY_BE_ARRAY|MAY_BE_STRING)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "The path to be parsed.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "PATHINFO_ALL", "If present, specifies a specific element to be returned; one of PATHINFO_DIRNAME, PATHINFO_BASENAME, PATHINFO_EXTENSION or PATHINFO_FILENAME.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stristr, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string to search in")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The string to search for.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, before_needle, _IS_BOOL, 0, "false", "If true, stristr returns the part of the haystack before the first occurrence of the needle (excluding needle).")
ZEND_END_ARG_INFO()

#define arginfo_strstr arginfo_stristr

#define arginfo_strchr arginfo_stristr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_strpos, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string to search in.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The string to search for.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "If specified, search will start this number of characters counted from the beginning of the string. If the offset is negative, the search will start this number of characters counted from the end of the string.")
ZEND_END_ARG_INFO()

#define arginfo_stripos arginfo_strpos

#define arginfo_strrpos arginfo_strpos

#define arginfo_strripos arginfo_strpos

#define arginfo_strrchr arginfo_stristr

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_str_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string to search in.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The substring to search for in the haystack.")
ZEND_END_ARG_INFO()

#define arginfo_str_starts_with arginfo_str_contains

#define arginfo_str_ends_with arginfo_str_contains

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chunk_split, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be chunked.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 0, "76", "The chunk length.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, separator, IS_STRING, 0, "\"\\r\\n\"", "The line ending sequence.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_substr, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "If offset is non-negative, the returned string will start at the offset'th position in string, counting from zero. For instance, in the string 'abcdef', the character at position 0 is 'a', the character at position 2 is 'c', and so forth.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "If length is given and is positive, the string returned will contain at most length characters beginning from offset (depending on the length of string).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_substr_replace, 0, 3, MAY_BE_STRING|MAY_BE_ARRAY)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, string, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "The input string.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, replace, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "The replacement string.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, offset, MAY_BE_ARRAY|MAY_BE_LONG, NULL, "If offset is non-negative, the replacing will begin at the offset'th offset into string.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, length, MAY_BE_ARRAY|MAY_BE_LONG|MAY_BE_NULL, "null", "If given and is positive, it represents the length of the portion of string which is to be replaced. If it is negative, it represents the number of characters from the end of string at which to stop replacing. If it is not given, then it will default to strlen( string ); i.e. end the replacing at the end of string. Of course, if length is zero then this function will have the effect of inserting replace into string at the given offset offset.")
ZEND_END_ARG_INFO()

#define arginfo_quotemeta arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ord, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, character, IS_STRING, 0, "A character.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chr, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, codepoint, IS_LONG, 0, "An integer between 0 and 255.")
ZEND_END_ARG_INFO()

#define arginfo_ucfirst arginfo_base64_encode

#define arginfo_lcfirst arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ucwords, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, separators, IS_STRING, 0, "\" \\t\\r\\n\\f\\v\"", "The optional separators contains the word separator characters.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strtr, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string being translated.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, from, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The string being translated to to.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, to, IS_STRING, 1, "null", "The string replacing from.")
ZEND_END_ARG_INFO()

#define arginfo_strrev arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_similar_text, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string1, IS_STRING, 0, "The first string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string2, IS_STRING, 0, "The second string.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, percent, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_addcslashes, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be escaped.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, characters, IS_STRING, 0, "A list of characters to be escaped. If characters contains characters  , \\r etc., they are converted in C-like style, while other non-alphanumeric characters with ASCII codes lower than 32 and higher than 126 converted to octal representation.")
ZEND_END_ARG_INFO()

#define arginfo_addslashes arginfo_base64_encode

#define arginfo_stripcslashes arginfo_base64_encode

#define arginfo_stripslashes arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_str_replace, 0, 3, MAY_BE_STRING|MAY_BE_ARRAY)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, search, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "The value being searched for, otherwise known as the needle. An array may be used to designate multiple needles.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, replace, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "The replacement value that replaces found search values. An array may be used to designate multiple replacements.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, subject, MAY_BE_STRING|MAY_BE_ARRAY, NULL, "The string or array being searched and replaced on, otherwise known as the haystack.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, count, "null")
ZEND_END_ARG_INFO()

#define arginfo_str_ireplace arginfo_str_replace

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hebrev, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "A Hebrew input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, max_chars_per_line, IS_LONG, 0, "0", "This optional parameter indicates maximum number of characters per line that will be returned.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_nl2br, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, use_xhtml, _IS_BOOL, 0, "true", "Whether to use XHTML compatible line breaks or not.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_strip_tags, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, allowed_tags, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null", "You can use the optional second parameter to specify tags which should not be stripped. These are either given as string, or as of PHP 7.4.0, as array. Refer to the example below regarding the format of this parameter.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_setlocale, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, category, IS_LONG, 0, "category is a named constant specifying the category of the functions affected by the locale setting: LC_ALL for all of the below LC_COLLATE for string comparison, see strcoll LC_CTYPE for character classification and conversion, for example ctype_alpha LC_MONETARY for localeconv LC_NUMERIC for decimal separator (See also localeconv) LC_TIME for date and time formatting with strftime LC_MESSAGES for system responses (available if PHP was compiled with libintl)")
	ZEND_ARG_INFO(0, locales)
	ZEND_ARG_VARIADIC_INFO(0, rest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_parse_str, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_INFO(1, result)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_str_getcsv, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to parse.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, separator, IS_STRING, 0, "\",\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enclosure, IS_STRING, 0, "\"\\\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, escape, IS_STRING, 0, "\"\\\\\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_str_repeat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be repeated.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, times, IS_LONG, 0, "Number of time the string string should be repeated.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_count_chars, 0, 1, MAY_BE_ARRAY|MAY_BE_STRING)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The examined string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "0", "See return values.")
ZEND_END_ARG_INFO()

#define arginfo_strnatcmp arginfo_strcoll

#define arginfo_localeconv arginfo_ob_list_handlers

#define arginfo_strnatcasecmp arginfo_strcoll

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_substr_count, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The string to search in")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The substring to search for")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The offset where to start counting. If the offset is negative, counting starts from the end of the string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "The maximum length after the specified offset to search for the substring. It outputs a warning if the offset plus the length is greater than the haystack length. A negative length counts from the end of haystack.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_str_pad, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "The desired length of the final padded string. If the value of length is negative, less than, or equal to the length of the input string, no padding takes place, and string will be returned.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pad_string, IS_STRING, 0, "\" \"", "The pad_string may be truncated if the required number of padding characters can't be evenly divided by the pad_string's length.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, pad_type, IS_LONG, 0, "STR_PAD_RIGHT", "Optional argument pad_type can be STR_PAD_RIGHT, STR_PAD_LEFT, or STR_PAD_BOTH. If pad_type is not specified it is assumed to be STR_PAD_RIGHT.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_sscanf, 0, 2, MAY_BE_ARRAY|MAY_BE_LONG|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string being parsed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The interpreted format for string, which is described in the documentation for sprintf with following differences: Function is not locale-aware. F, g, G and b are not supported. D stands for decimal number. i stands for integer with base detection. n stands for number of characters processed so far. s stops reading at any whitespace character. * instead of argnum$ suppresses the assignment of this conversion specification.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(1, vars, IS_MIXED, 0, "Optionally pass in variables by reference that will contain the parsed values.")
ZEND_END_ARG_INFO()

#define arginfo_str_rot13 arginfo_base64_encode

#define arginfo_str_shuffle arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_str_word_count, 0, 1, MAY_BE_ARRAY|MAY_BE_LONG)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, format, IS_LONG, 0, "0", "Specify the return value of this function. The current supported values are: 0 - returns the number of words found 1 - returns an array containing all the words found inside the string 2 - returns an associative array, where the key is the numeric position of the word inside the string and the value is the actual word itself")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, characters, IS_STRING, 1, "null", "A list of additional characters which will be considered as 'word'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_str_split, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The input string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 0, "1", "Maximum length of the chunk.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_strpbrk, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string where characters is looked for.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, characters, IS_STRING, 0, "This parameter is case sensitive.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_substr_compare, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, haystack, IS_STRING, 0, "The main string being compared.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, needle, IS_STRING, 0, "The secondary string being compared.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "The start position for the comparison. If negative, it starts counting from the end of the string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "The length of the comparison. The default value is the largest of the length of the needle compared to the length of haystack minus the offset.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, case_insensitive, _IS_BOOL, 0, "false", "If case_insensitive is true, comparison is case insensitive.")
ZEND_END_ARG_INFO()

#define arginfo_utf8_encode arginfo_base64_encode

#define arginfo_utf8_decode arginfo_base64_encode

ZEND_BEGIN_ARG_INFO_EX(arginfo_opendir, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_dir, 0, 1, Directory, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_closedir, 0, 0, IS_VOID, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, dir_handle, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chdir, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "The new current directory")
ZEND_END_ARG_INFO()

#if (defined(HAVE_CHROOT) && !defined(ZTS) && defined(ENABLE_CHROOT_FUNC))
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chroot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "The path to change the root directory to.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_getcwd arginfo_ob_get_flush

#define arginfo_rewinddir arginfo_closedir

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_readdir, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, dir_handle, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_scandir, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "The directory that will be scanned.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, sorting_order, IS_LONG, 0, "SCANDIR_SORT_ASCENDING", "By default, the sorted order is alphabetical in ascending order.  If the optional sorting_order is set to SCANDIR_SORT_DESCENDING, then the sort order is alphabetical in descending order. If it is set to SCANDIR_SORT_NONE then the result is unsorted.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_glob, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The pattern. No tilde expansion or parameter substitution is done.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "Any of the GLOB_* constants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_exec, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, command, IS_STRING, 0, "The command that will be executed.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, output, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, result_code, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_system, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, command, IS_STRING, 0, "The command that will be executed.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, result_code, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_passthru, 0, 1, IS_FALSE, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, command, IS_STRING, 0, "The command that will be executed.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, result_code, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_escapeshellcmd, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, command, IS_STRING, 0, "The command that will be escaped.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_escapeshellarg, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, arg, IS_STRING, 0, "The argument that will be escaped.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_shell_exec, 0, 1, MAY_BE_STRING|MAY_BE_FALSE|MAY_BE_NULL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, command, IS_STRING, 0, "The command that will be executed.")
ZEND_END_ARG_INFO()

#if defined(HAVE_NICE)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_proc_nice, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, priority, IS_LONG, 0, "The new priority value, the value of this may differ on platforms.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_flock, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, operation, IS_LONG, 0, "operation is one of the following: LOCK_SH to acquire a shared lock (reader). LOCK_EX to acquire an exclusive lock (writer). LOCK_UN to release a lock (shared or exclusive).")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, would_block, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_get_meta_tags, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The path to the HTML file, as a string. This can be a local file or an URL.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, use_include_path, _IS_BOOL, 0, "false", "Setting use_include_path to true will result in PHP trying to open the file along the standard include path as per the include_path directive. This is used for local files, not URLs.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pclose, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, handle)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_popen, 0, 0, 2)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, command, IS_STRING, 0, "The command")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_STRING, 0, "The mode. Either 'r' for reading, or 'w' for writing.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_readfile, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The filename being read.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, use_include_path, _IS_BOOL, 0, "false", "You can use the optional second parameter and set it to true, if you want to search for the file in the include_path, too.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_rewind, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_rmdir, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "Path to the directory.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_umask, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mask, IS_LONG, 1, "null", "The new umask.")
ZEND_END_ARG_INFO()

#define arginfo_fclose arginfo_rewind

#define arginfo_feof arginfo_rewind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fgetc, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fgets, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "Reading ends when length - 1 bytes have been read, or a newline (which is included in the return value), or an EOF (whichever comes first). If no length is specified, it will keep reading from the stream until it reaches the end of the line.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fread, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "Up to length number of bytes read.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fopen, 0, 0, 2)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "If filename is of the form \"scheme:...\", it is assumed to be a URL and PHP will search for a protocol handler (also known as a wrapper) for that scheme. If no wrappers for that protocol are registered, PHP will emit a notice to help you track potential problems in your script and then continue as though filename specifies a regular file.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_STRING, 0, "The mode parameter specifies the type of access you require to the stream.  It may be any of the following: A list of possible modes for fopen using mode mode Description 'r' Open for reading only; place the file pointer at the beginning of the file. 'r+' Open for reading and writing; place the file pointer at the beginning of the file. 'w' Open for writing only; place the file pointer at the beginning of the file and truncate the file to zero length. If the file does not exist, attempt to create it. 'w+' Open for reading and writing; otherwise it has the same behavior as 'w'. 'a' Open for writing only; place the file pointer at the end of the file. If the file does not exist, attempt to create it. In this mode, fseek has no effect, writes are always appended. 'a+' Open for reading and writing; place the file pointer at the end of the file. If the file does not exist, attempt to create it. In this mode, fseek only affects the reading position, writes are always appended. 'x' Create and open for writing only; place the file pointer at the beginning of the file.  If the file already exists, the fopen call will fail by returning false and generating an error of level E_WARNING.  If the file does not exist, attempt to create it.  This is equivalent to specifying O_EXCL|O_CREAT flags for the underlying open(2) system call. 'x+' Create and open for reading and writing; otherwise it has the same behavior as 'x'. 'c' Open the file for writing only. If the file does not exist, it is created. If it exists, it is neither truncated (as opposed to 'w'), nor the call to this function fails (as is the case with 'x'). The file pointer is positioned on the beginning of the file. This may be useful if it's desired to get an advisory lock (see flock) before attempting to modify the file, as using 'w' could truncate the file before the lock was obtained (if truncation is desired, ftruncate can be used after the lock is requested). 'c+' Open the file for reading and writing; otherwise it has the same behavior as 'c'. 'e' Set close-on-exec flag on the opened file descriptor. Only available in PHP compiled on POSIX.1-2008 conformant systems. 'n' Set non-blocking flag on the opened file descriptor. Only available in PHP compiled on POSIX.1-2008 conformant systems.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, use_include_path, _IS_BOOL, 0, "false", "The optional third use_include_path parameter can be set to true if you want to search for the file in the include_path, too.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fscanf, 0, 2, MAY_BE_ARRAY|MAY_BE_LONG|MAY_BE_FALSE|MAY_BE_NULL)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The interpreted format for string, which is described in the documentation for sprintf with following differences: Function is not locale-aware. F, g, G and b are not supported. D stands for decimal number. i stands for integer with base detection. n stands for number of characters processed so far. s stops reading at any whitespace character. * instead of argnum$ suppresses the assignment of this conversion specification.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(1, vars, IS_MIXED, 0, "The optional assigned values.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_fpassthru, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ftruncate, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, size, IS_LONG, 0, "The size to truncate to.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fstat, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_fseek, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "The offset.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, whence, IS_LONG, 0, "SEEK_SET", "whence values are: SEEK_SET - Set position equal to offset bytes from the start of the file. SEEK_CUR - Set position to current location plus offset bytes. SEEK_END - Set position to end-of-file plus offset bytes.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ftell, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

#define arginfo_fflush arginfo_rewind

#define arginfo_fsync arginfo_rewind

#define arginfo_fdatasync arginfo_rewind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fwrite, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The string that is to be written.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "If length is an integer, writing will stop after length bytes have been written or the end of data is reached, whichever comes first.")
ZEND_END_ARG_INFO()

#define arginfo_fputs arginfo_fwrite

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mkdir, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "The directory path. A URL can be used as a filename with this function if the fopen wrappers have been enabled. See fopen for more details on how to specify the filename. See the  for links to information about what abilities the various wrappers have, notes on their usage, and information on any predefined variables they may provide.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, permissions, IS_LONG, 0, "0777", "The permissions are 0777 by default, which means the widest possible access. For more information on permissions, read the details on the chmod page.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, recursive, _IS_BOOL, 0, "false", "If true, then any parent directories to the directory specified will also be created, with the same permissions.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_rename, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, from, IS_STRING, 0, "The old name.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to, IS_STRING, 0, "The new name. On Windows, if to already exists, it must be writable. Otherwise rename fails and issues E_WARNING.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

#define arginfo_copy arginfo_rename

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_tempnam, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "The directory where the temporary filename will be created.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, prefix, IS_STRING, 0, "The prefix of the generated temporary filename.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tmpfile, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_file, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "The optional parameter flags can be one, or more, of the following constants: FILE_USE_INCLUDE_PATH Search for the file in the include_path. FILE_IGNORE_NEW_LINES Omit newline at the end of each array element. FILE_SKIP_EMPTY_LINES Skip empty lines. FILE_NO_DEFAULT_CONTEXT Don't use the default context.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_file_get_contents, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Name of the file to read.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, use_include_path, _IS_BOOL, 0, "false", "The FILE_USE_INCLUDE_PATH constant can be used to trigger include path search. This is not possible if strict typing is enabled, since FILE_USE_INCLUDE_PATH is an int. Use true instead.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The offset where the reading starts on the original stream. Negative offsets count from the end of the stream.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "Maximum length of data read. The default is to read until end of file is reached. Note that this parameter is applied to the stream processed by the filters.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_unlink, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_file_put_contents, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file where to write the data.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_MIXED, 0, "The data to write. Can be either a string, an array or a stream resource.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "The value of flags can be any combination of the following flags, joined with the binary OR (|) operator.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fputcsv, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, fields, IS_ARRAY, 0, "An array of strings.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, separator, IS_STRING, 0, "\",\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enclosure, IS_STRING, 0, "\"\\\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, escape, IS_STRING, 0, "\"\\\\\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, eol, IS_STRING, 0, "\"\\n\"", "The optional eol parameter sets a custom End of Line sequence.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fgetcsv, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "Must be greater than the longest line (in characters) to be found in the CSV file (allowing for trailing line-end characters). Otherwise the line is split in chunks of length characters, unless the split would occur inside an enclosure.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, separator, IS_STRING, 0, "\",\"", "The separator parameter sets the field separator. It must be a single byte character.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, enclosure, IS_STRING, 0, "\"\\\"\"", "The enclosure parameter sets the field enclosure character. It must be a single byte character.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, escape, IS_STRING, 0, "\"\\\\\"", "The escape parameter sets the escape character. It must be a single byte character or the empty string. The empty string (\"\") disables the proprietary escape mechanism.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_realpath, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "The path being checked. Whilst a path must be supplied, the value can be an empty string. In this case, the value is interpreted as the current directory.")
ZEND_END_ARG_INFO()

#if defined(HAVE_FNMATCH)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_fnmatch, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pattern, IS_STRING, 0, "The pattern to match against. Usually, the pattern will contain wildcards like '?' and '*'. Wildcards to be used in pattern parameter Wildcard Description ? Question mark will match any single character. For example, pattern \"file?.txt\" will match \"file1.txt\" and \"fileA.txt\", but will not match \"file10.txt\". * Asterisk will match zero or more characters. For example, pattern \"foo*.xml\" will match \"foo.xml\" and \"foobar.xml\". [ ] Square brackets are used to create ranges of ASCII codepoints or sets of characters. For example, pattern \"index.php[45]\" will match \"index.php4\" and \"index.php5\", but will not match \"index.phpt\". Well known ranges are [0-9], [a-z], and [A-Z]. Multiple sets and ranges can be used at the same time, for example [0-9a-zABC]. ! Exclamation mark is used to negate characters within square brackets. For example, \"[!A-Z]*.html\" will match \"demo.html\", but will not match \"Demo.html\". \\ Backslash is used to escape special characters. For example, \"Name\\?\" will match \"Name?\", but will not match \"Names\".")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The tested string. This function is especially useful for filenames, but may also be used on regular strings.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "The value of flags can be any combination of the following flags, joined with the binary OR (|) operator. A list of possible flags for fnmatch Flag Description FNM_NOESCAPE Disable backslash escaping. FNM_PATHNAME Slash in string only matches slash in the given pattern. FNM_PERIOD Leading period in string must be exactly matched by period in the given pattern. FNM_CASEFOLD Caseless match. Part of the GNU extension.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_sys_get_temp_dir arginfo_get_current_user

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_fileatime, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
ZEND_END_ARG_INFO()

#define arginfo_filectime arginfo_fileatime

#define arginfo_filegroup arginfo_fileatime

#define arginfo_fileinode arginfo_fileatime

#define arginfo_filemtime arginfo_fileatime

#define arginfo_fileowner arginfo_fileatime

#define arginfo_fileperms arginfo_fileatime

#define arginfo_filesize arginfo_fileatime

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_filetype, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
ZEND_END_ARG_INFO()

#define arginfo_file_exists arginfo_is_uploaded_file

#define arginfo_is_writable arginfo_is_uploaded_file

#define arginfo_is_writeable arginfo_is_uploaded_file

#define arginfo_is_readable arginfo_is_uploaded_file

#define arginfo_is_executable arginfo_is_uploaded_file

#define arginfo_is_file arginfo_is_uploaded_file

#define arginfo_is_dir arginfo_is_uploaded_file

#define arginfo_is_link arginfo_is_uploaded_file

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stat, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
ZEND_END_ARG_INFO()

#define arginfo_lstat arginfo_stat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chown, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, user, MAY_BE_STRING|MAY_BE_LONG, NULL, "A user name or number.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chgrp, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, group, MAY_BE_STRING|MAY_BE_LONG, NULL, "A group name or number.")
ZEND_END_ARG_INFO()

#if defined(HAVE_LCHOWN)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lchown, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, user, MAY_BE_STRING|MAY_BE_LONG, NULL, "User name or number.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_lchgrp, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the symlink.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, group, MAY_BE_STRING|MAY_BE_LONG, NULL, "The group specified by name or number.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_chmod, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the file.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, permissions, IS_LONG, 0, "Note that permissions is not automatically assumed to be an octal value, so to ensure the expected operation, you need to prefix permissions with a zero (0). Strings such as \"g+w\" will not work properly.")
ZEND_END_ARG_INFO()

#if defined(HAVE_UTIME)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_touch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The name of the file being touched.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mtime, IS_LONG, 1, "null", "The touch time. If mtime is null, the current system time is used.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, atime, IS_LONG, 1, "null", "If not null, the access time of the given filename is set to the value of atime. Otherwise, it is set to the value passed to the mtime parameter. If both are null, the current system time is used.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_clearstatcache, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, clear_realpath_cache, _IS_BOOL, 0, "false", "Whether to also clear the realpath cache.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, filename, IS_STRING, 0, "\"\"", "Clear the realpath cache for a specific filename only; only used if clear_realpath_cache is true.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_disk_total_space, 0, 1, MAY_BE_DOUBLE|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, directory, IS_STRING, 0, "A directory of the filesystem or disk partition.")
ZEND_END_ARG_INFO()

#define arginfo_disk_free_space arginfo_disk_total_space

#define arginfo_diskfreespace arginfo_disk_total_space

#define arginfo_realpath_cache_get arginfo_ob_list_handlers

#define arginfo_realpath_cache_size arginfo_ob_get_level

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sprintf, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.")
	ZEND_ARG_VARIADIC_TYPE_INFO(0, values, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_printf, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.")
	ZEND_ARG_VARIADIC_TYPE_INFO(0, values, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_vprintf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.")
	ZEND_ARG_TYPE_INFO(0, values, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_vsprintf, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.")
	ZEND_ARG_TYPE_INFO(0, values, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_fprintf, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.")
	ZEND_ARG_VARIADIC_TYPE_INFO(0, values, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_vfprintf, 0, 3, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.")
	ZEND_ARG_TYPE_INFO(0, values, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fsockopen, 0, 0, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, hostname, IS_STRING, 0, "If OpenSSL support is installed, you may prefix the hostname with either ssl: or tls: to use an SSL or TLS client connection over TCPIP to connect to the remote host.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, port, IS_LONG, 0, "-1", "The port number. This can be omitted and skipped with -1 for transports that do not use ports, such as unix:.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_code, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_message, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, timeout, IS_DOUBLE, 1, "null", "The connection timeout, in seconds. When null, the default_socket_timeout php.ini setting is used.")
ZEND_END_ARG_INFO()

#define arginfo_pfsockopen arginfo_fsockopen

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_http_build_query, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, data, MAY_BE_ARRAY|MAY_BE_OBJECT, NULL, "May be an array or object containing properties.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, numeric_prefix, IS_STRING, 0, "\"\"", "If numeric indices are used in the base array and this parameter is provided, it will be prepended to the numeric index for elements in the base array only.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, arg_separator, IS_STRING, 1, "null", "The argument separator. If not set or null, arg_separator.output is used to separate arguments.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding_type, IS_LONG, 0, "PHP_QUERY_RFC1738", "By default, PHP_QUERY_RFC1738.")
ZEND_END_ARG_INFO()

#define arginfo_http_get_last_response_headers arginfo_error_get_last

#define arginfo_http_clear_last_response_headers arginfo_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_request_parse_body, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_image_type_to_mime_type, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, image_type, IS_LONG, 0, "One of the IMAGETYPE_* constants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_image_type_to_extension, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, image_type, IS_LONG, 0, "One of the IMAGETYPE_* constant.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, include_dot, _IS_BOOL, 0, "true", "Whether to prepend a dot to the extension or not. Default to true.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getimagesize, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "This parameter specifies the file you wish to retrieve information about. It can reference a local file or (configuration permitting) a remote file using one of the supported streams.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, image_info, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getimagesizefromstring, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, string, IS_STRING, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, image_info, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phpinfo, 0, 0, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "INFO_ALL", "The output may be customized by passing one or more of the following constants bitwise values summed together in the optional flags parameter. One can also combine the respective constants or bitwise values together with the bitwise or operator.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_phpversion, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, extension, IS_STRING, 1, "null", "An optional extension name.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phpcredits, 0, 0, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "CREDITS_ALL", "To generate a custom credits page, you may want to use the flags parameter.")
ZEND_END_ARG_INFO()

#define arginfo_php_sapi_name arginfo_ob_get_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_php_uname, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_STRING, 0, "\"a\"", "mode is a single character that defines what information is returned: 'a': This is the default. Returns the same information as the individual modes 's' 'n' 'r' 'v' 'm' separated by spaces. 's': Operating system name. eg. FreeBSD. 'n': Host name. eg. localhost.example.com. 'r': Release name. eg. 5.1.2-RELEASE. 'v': Version information. Varies a lot between operating systems. 'm': Machine type. eg. i386.")
ZEND_END_ARG_INFO()

#define arginfo_php_ini_scanned_files arginfo_ob_get_flush

#define arginfo_php_ini_loaded_file arginfo_ob_get_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iptcembed, 0, 2, MAY_BE_STRING|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, iptc_data, IS_STRING, 0, "The data to be written.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the JPEG image.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, spool, IS_LONG, 0, "0", "Spool flag. If the spool flag is less than 2 then the JPEG will be returned as a string. Otherwise the JPEG will be printed to STDOUT.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_iptcparse, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, iptc_block, IS_STRING, 0, "A binary IPTC block.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_levenshtein, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string1, IS_STRING, 0, "One of the strings being evaluated for Levenshtein distance.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string2, IS_STRING, 0, "One of the strings being evaluated for Levenshtein distance.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, insertion_cost, IS_LONG, 0, "1", "Defines the cost of insertion.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, replacement_cost, IS_LONG, 0, "1", "Defines the cost of replacement.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, deletion_cost, IS_LONG, 0, "1", "Defines the cost of deletion.")
ZEND_END_ARG_INFO()

#if (defined(HAVE_SYMLINK) || defined(PHP_WIN32))
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_readlink, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "The symbolic link path.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_linkinfo, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "Path to the link.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_symlink, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, target, IS_STRING, 0, "Target of the link.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, link, IS_STRING, 0, "The link name.")
ZEND_END_ARG_INFO()

#define arginfo_link arginfo_symlink
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mail, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to, IS_STRING, 0, "Receiver, or receivers of the mail.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, subject, IS_STRING, 0, "Subject of the email to be sent.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "Message to be sent.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, additional_headers, MAY_BE_ARRAY|MAY_BE_STRING, "[]", "String or array to be inserted at the end of the email header.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, additional_params, IS_STRING, 0, "\"\"", "The additional_params parameter can be used to pass additional flags as command line options to the program configured to be used when sending mail, as defined by the sendmail_path configuration setting. For example, this can be used to set the envelope sender address when using sendmail with the -f sendmail option.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_abs, 0, 1, MAY_BE_LONG|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, num, MAY_BE_LONG|MAY_BE_DOUBLE, NULL, "The numeric value to process")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ceil, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, num, MAY_BE_LONG|MAY_BE_DOUBLE, NULL, "The value to round")
ZEND_END_ARG_INFO()

#define arginfo_floor arginfo_ceil

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_round, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, num, MAY_BE_LONG|MAY_BE_DOUBLE, NULL, "The value to round.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, precision, IS_LONG, 0, "0", "The optional number of decimal digits to round to.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, mode, RoundingMode, MAY_BE_LONG, "RoundingMode::HalfAwayFromZero", "Use RoundingMode or one of the following constants to specify the mode in which rounding occurs. Constants Description PHP_ROUND_HALF_UP Rounds num away from zero when it is half way there, making 1.5 into 2 and -1.5 into -2. PHP_ROUND_HALF_DOWN Rounds num towards zero when it is half way there, making 1.5 into 1 and -1.5 into -1. PHP_ROUND_HALF_EVEN Rounds num towards the nearest even value when it is half way there, making both 1.5 and 2.5 into 2. PHP_ROUND_HALF_ODD Rounds num towards the nearest odd value when it is half way there, making 1.5 into 1 and 2.5 into 3. However, please note that some newly added modes only exist in RoundingMode.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_DOUBLE, 0, "A value in radians")
ZEND_END_ARG_INFO()

#define arginfo_cos arginfo_sin

#define arginfo_tan arginfo_sin

#define arginfo_asin arginfo_sin

#define arginfo_acos arginfo_sin

#define arginfo_atan arginfo_sin

#define arginfo_atanh arginfo_sin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_atan2, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_DOUBLE, 0, "Dividend parameter")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_DOUBLE, 0, "Divisor parameter")
ZEND_END_ARG_INFO()

#define arginfo_sinh arginfo_sin

#define arginfo_cosh arginfo_sin

#define arginfo_tanh arginfo_sin

#define arginfo_asinh arginfo_sin

#define arginfo_acosh arginfo_sin

#define arginfo_expm1 arginfo_sin

#define arginfo_log1p arginfo_sin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_pi, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_is_finite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_DOUBLE, 0, "The float to check")
ZEND_END_ARG_INFO()

#define arginfo_is_nan arginfo_is_finite

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_intdiv, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num2, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_is_infinite arginfo_is_finite

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_pow, 0, 2, MAY_BE_LONG|MAY_BE_DOUBLE|MAY_BE_OBJECT)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_MIXED, 0, "The base to use")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, exponent, IS_MIXED, 0, "The exponent")
ZEND_END_ARG_INFO()

#define arginfo_exp arginfo_sin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_log, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_DOUBLE, 0, "The value to calculate the logarithm for")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, base, IS_DOUBLE, 0, "M_E", "The optional logarithmic base to use (defaults to 'e' and so to the natural logarithm).")
ZEND_END_ARG_INFO()

#define arginfo_log10 arginfo_sin

#define arginfo_sqrt arginfo_sin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hypot, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_DOUBLE, 0, "Length of first side")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_DOUBLE, 0, "Length of second side")
ZEND_END_ARG_INFO()

#define arginfo_deg2rad arginfo_sin

#define arginfo_rad2deg arginfo_sin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bindec, 0, 1, MAY_BE_LONG|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, binary_string, IS_STRING, 0, "The binary string to convert. Any invalid characters in binary_string are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_hexdec, 0, 1, MAY_BE_LONG|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, hex_string, IS_STRING, 0, "The hexadecimal string to convert")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_octdec, 0, 1, MAY_BE_LONG|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, octal_string, IS_STRING, 0, "The octal string to convert. Any invalid characters in octal_string are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_decbin, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_LONG, 0, "Decimal value to convert")
ZEND_END_ARG_INFO()

#define arginfo_decoct arginfo_decbin

#define arginfo_dechex arginfo_decbin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_base_convert, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_STRING, 0, "The number to convert. Any invalid characters in num are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, from_base, IS_LONG, 0, "The base num is in")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, to_base, IS_LONG, 0, "The base to convert num to")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_number_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num, IS_DOUBLE, 0, "The number being formatted.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, decimals, IS_LONG, 0, "0", "Sets the number of decimal digits. If 0, the decimal_separator is omitted from the return value. As of PHP 8.3.0, when the value is negative, num is rounded to decimals significant digits before the decimal point. Prior to PHP 8.3.0, negative values were ignored and handled the same as 0.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, decimal_separator, IS_STRING, 1, "\".\"", "Sets the separator for the decimal point.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, thousands_separator, IS_STRING, 1, "\",\"", "Sets the thousands separator.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_fmod, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num1, IS_DOUBLE, 0, "The dividend")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num2, IS_DOUBLE, 0, "The divisor")
ZEND_END_ARG_INFO()

#define arginfo_fdiv arginfo_fmod

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_fpow, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, exponent, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#if defined(HAVE_GETTIMEOFDAY)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_microtime, 0, 0, MAY_BE_STRING|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, as_float, _IS_BOOL, 0, "false", "If used and set to true, microtime will return a float instead of a string, as described in the return values section below.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gettimeofday, 0, 0, MAY_BE_ARRAY|MAY_BE_DOUBLE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, as_float, _IS_BOOL, 0, "false", "When set to true, a float instead of an array is returned.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETRUSAGE)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_getrusage, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "0", "If mode is 1, getrusage will be called with RUSAGE_CHILDREN.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_pack arginfo_sprintf

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_unpack, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, format, IS_STRING, 0, "See pack for an explanation of the format codes.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The packed data.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The offset to begin unpacking from.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_password_get_info, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_password_hash, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, algo, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_NULL, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_password_needs_rehash, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, algo, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_NULL, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_password_verify, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_password_algos arginfo_ob_list_handlers

#if defined(PHP_CAN_SUPPORT_PROC_OPEN)
ZEND_BEGIN_ARG_INFO_EX(arginfo_proc_open, 0, 0, 3)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, command, MAY_BE_ARRAY|MAY_BE_STRING, NULL, "The commandline to execute as string. Special characters have to be properly escaped, and proper quoting has to be applied.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, descriptor_spec, IS_ARRAY, 0, "An indexed array where the key represents the descriptor number and the value represents how PHP will pass that descriptor to the child process. 0 is stdin, 1 is stdout, while 2 is stderr.")
	ZEND_ARG_INFO(1, pipes)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, cwd, IS_STRING, 1, "null", "The initial working dir for the command. This must be an absolute directory path, or null if you want to use the default value (the working dir of the current PHP process)")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, env_vars, IS_ARRAY, 1, "null", "An array with the environment variables for the command that will be run, or null to use the same environment as the current PHP process")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "Allows you to specify additional options. Currently supported options include: suppress_errors (windows only): suppresses errors generated by this function when it's set to true bypass_shell (windows only): bypass cmd.exe shell when set to true blocking_pipes (windows only): force blocking pipes when set to true create_process_group (windows only): allow the child process to handle CTRL events when set to true create_new_console (windows only): the new process has a new console, instead of inheriting its parent's console")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_proc_close, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, process)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_proc_terminate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, process)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, signal, IS_LONG, 0, "15", "This optional parameter is only useful on POSIX operating systems; you may specify a signal to send to the process using the kill(2) system call.  The default is SIGTERM.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_proc_get_status, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, process)
ZEND_END_ARG_INFO()
#endif

#define arginfo_quoted_printable_decode arginfo_base64_encode

#define arginfo_quoted_printable_encode arginfo_base64_encode

#define arginfo_soundex arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_select, 0, 4, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, read, IS_ARRAY, 1, "The streams listed in the read array will be watched to see if characters become available for reading (more precisely, to see if a read will not block - in particular, a stream resource is also ready on end-of-file, in which case an fread will return a zero length string).")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, write, IS_ARRAY, 1, "The streams listed in the write array will be watched to see if a write will not block.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, except, IS_ARRAY, 1, "The streams listed in the except array will be watched for high priority exceptional (\"out-of-band\") data arriving.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, seconds, IS_LONG, 1, "The seconds and microseconds together form the timeout parameter, seconds specifies the number of seconds while microseconds the number of microseconds. The timeout is an upper bound on the amount of time that stream_select will wait before it returns. If seconds and microseconds are both set to 0, stream_select will not wait for data - instead it will return immediately, indicating the current status of the streams.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, microseconds, IS_LONG, 1, "null", "See seconds description.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_context_create, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "Must be an associative array of associative arrays in the format $arr['wrapper']['option'] = $value, or null. Refer to context options for a list of available wrappers and options.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, params, IS_ARRAY, 1, "null", "Must be an associative array in the format $arr['parameter'] = $value, or null. Refer to context parameters for a listing of standard stream parameters.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_context_set_params, 0, 2, IS_TRUE, 0)
	ZEND_ARG_INFO(0, context)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, params, IS_ARRAY, 0, "An associative array of parameters to be set in the following format: $params['paramname'] = \"paramvalue\";.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_context_get_params, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_context_set_option, 0, 2, IS_TRUE, 0)
	ZEND_ARG_INFO(0, context)
	ZEND_ARG_TYPE_MASK(0, wrapper_or_options, MAY_BE_ARRAY|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, option_name, IS_STRING, 1, "null", "The name of the option.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The value of the option.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_context_set_options, 0, 2, IS_TRUE, 0)
	ZEND_ARG_INFO(0, context)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, options, IS_ARRAY, 0, "The options to set for context.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_context_get_options, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, stream_or_context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_context_get_default, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_context_set_default, 0, 0, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, options, IS_ARRAY, 0, "The options to set for the default context.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_filter_prepend, 0, 0, 2)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO(0, filter_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, params, IS_MIXED, 0, "This filter will be added with the specified params to the beginning of the list and will therefore be called first during stream operations.  To add a filter to the end of the list, use stream_filter_append.")
ZEND_END_ARG_INFO()

#define arginfo_stream_filter_append arginfo_stream_filter_prepend

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_filter_remove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream_filter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_socket_client, 0, 0, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, address, IS_STRING, 0, "Address to the socket to connect to.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_code, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_message, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, timeout, IS_DOUBLE, 1, "null", "Number of seconds until the connect() system call should timeout. By default, default_socket_timeout is used. This parameter only applies when not making asynchronous connection attempts. To set a timeout for readingwriting data over the socket, use the stream_set_timeout, as the timeout only applies while making connecting the socket.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "STREAM_CLIENT_CONNECT", "Bitmask field which may be set to any combination of connection flags. Currently the select of connection flags is limited to STREAM_CLIENT_CONNECT (default), STREAM_CLIENT_ASYNC_CONNECT and STREAM_CLIENT_PERSISTENT.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_socket_server, 0, 0, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, address, IS_STRING, 0, "The type of socket created is determined by the transport specified using standard URL formatting: transport:target.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_code, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, error_message, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "STREAM_SERVER_BIND | STREAM_SERVER_LISTEN", "A bitmask field which may be set to any combination of socket creation flags.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stream_socket_accept, 0, 0, 1)
	ZEND_ARG_INFO(0, socket)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, timeout, IS_DOUBLE, 1, "null", "Override the default socket accept timeout. Time should be given in seconds. By default, default_socket_timeout is used.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, peer_name, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_socket_get_name, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, socket)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, remote, _IS_BOOL, 0, "If set to true the remote socket name will be returned, if set to false the local socket name will be returned.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_socket_recvfrom, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, socket)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "The number of bytes to receive from the socket.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "The value of flags can be any combination of the following: Possible values for flags STREAM_OOB Process OOB (out-of-band) data. STREAM_PEEK Retrieve data from the socket, but do not consume the buffer. Subsequent calls to fread or stream_socket_recvfrom will see the same data.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, address, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_socket_sendto, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, socket)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The data to be sent.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "The value of flags can be any combination of the following: possible values for flags STREAM_OOB Process OOB (out-of-band) data.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, address, IS_STRING, 0, "\"\"", "The address specified when the socket stream was created will be used unless an alternate address is specified in address.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_socket_enable_crypto, 0, 2, MAY_BE_LONG|MAY_BE_BOOL)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, enable, _IS_BOOL, 0, "Enabledisable cryptography on the stream.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, crypto_method, IS_LONG, 1, "null", "Setup encryption on the stream. Valid methods are STREAM_CRYPTO_METHOD_SSLv2_CLIENT STREAM_CRYPTO_METHOD_SSLv3_CLIENT STREAM_CRYPTO_METHOD_SSLv23_CLIENT STREAM_CRYPTO_METHOD_ANY_CLIENT STREAM_CRYPTO_METHOD_TLS_CLIENT STREAM_CRYPTO_METHOD_TLSv1_0_CLIENT STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT STREAM_CRYPTO_METHOD_TLSv1_3_CLIENT (as of PHP 7.4.0) STREAM_CRYPTO_METHOD_SSLv2_SERVER STREAM_CRYPTO_METHOD_SSLv3_SERVER STREAM_CRYPTO_METHOD_SSLv23_SERVER STREAM_CRYPTO_METHOD_ANY_SERVER STREAM_CRYPTO_METHOD_TLS_SERVER STREAM_CRYPTO_METHOD_TLSv1_0_SERVER STREAM_CRYPTO_METHOD_TLSv1_1_SERVER STREAM_CRYPTO_METHOD_TLSv1_2_SERVER STREAM_CRYPTO_METHOD_TLSv1_3_SERVER (as of PHP 7.4.0)")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, session_stream, "null")
ZEND_END_ARG_INFO()

#if defined(HAVE_SHUTDOWN)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_socket_shutdown, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_LONG, 0, "One of the following constants: STREAM_SHUT_RD (disable further receptions), STREAM_SHUT_WR (disable further transmissions) or STREAM_SHUT_RDWR (disable further receptions and transmissions).")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_SOCKETPAIR)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_socket_pair, 0, 3, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_LONG, 0, "The protocol family to be used: STREAM_PF_INET, STREAM_PF_INET6 or STREAM_PF_UNIX")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, type, IS_LONG, 0, "The type of communication to be used: STREAM_SOCK_DGRAM, STREAM_SOCK_RAW, STREAM_SOCK_RDM, STREAM_SOCK_SEQPACKET or STREAM_SOCK_STREAM")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, protocol, IS_LONG, 0, "The protocol to be used: STREAM_IPPROTO_ICMP, STREAM_IPPROTO_IP, STREAM_IPPROTO_RAW, STREAM_IPPROTO_TCP or STREAM_IPPROTO_UDP")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_copy_to_stream, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, from)
	ZEND_ARG_INFO(0, to)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "Maximum bytes to copy. By default all bytes left are copied.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "0", "The offset where to start to copy data")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_get_contents, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "The maximum bytes to read. Defaults to null (read all the remaining buffer).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, offset, IS_LONG, 0, "-1", "Seek to the specified offset before reading. If this number is negative, no seeking will occur and reading will start from the current position.")
ZEND_END_ARG_INFO()

#define arginfo_stream_supports_lock arginfo_rewind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_set_write_buffer, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, size, IS_LONG, 0, "The number of bytes to buffer. If size is 0 then write operations are unbuffered.  This ensures that all writes with fwrite are completed before other processes are allowed to write to that output stream.")
ZEND_END_ARG_INFO()

#define arginfo_set_file_buffer arginfo_stream_set_write_buffer

#define arginfo_stream_set_read_buffer arginfo_stream_set_write_buffer

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_set_blocking, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, enable, _IS_BOOL, 0, "If enable is false, the given stream will be switched to non-blocking mode, and if true, it will be switched to blocking mode.  This affects calls like fgets and fread that read from the stream.  In non-blocking mode an fgets call will always return right away while in blocking mode it will wait for data to become available on the stream.")
ZEND_END_ARG_INFO()

#define arginfo_socket_set_blocking arginfo_stream_set_blocking

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_get_meta_data, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

#define arginfo_socket_get_status arginfo_stream_get_meta_data

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_stream_get_line, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "The maximum number of bytes to read from the handle. Negative values are not supported. Zero (0) means the default socket chunk size, i.e. 8192 bytes.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, ending, IS_STRING, 0, "\"\"", "An optional string delimiter.")
ZEND_END_ARG_INFO()

#define arginfo_stream_resolve_include_path arginfo_filetype

#define arginfo_stream_get_wrappers arginfo_ob_list_handlers

#define arginfo_stream_get_transports arginfo_ob_list_handlers

#define arginfo_stream_is_local arginfo_rewind

#define arginfo_stream_isatty arginfo_rewind

#if defined(PHP_WIN32)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_vt100_support, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enable, _IS_BOOL, 1, "null")
ZEND_END_ARG_INFO()
#endif

#define arginfo_stream_set_chunk_size arginfo_stream_set_write_buffer

#if (defined(HAVE_SYS_TIME_H) || defined(PHP_WIN32))
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_set_timeout, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, seconds, IS_LONG, 0, "The seconds part of the timeout to be set.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, microseconds, IS_LONG, 0, "0", "The microseconds part of the timeout to be set.")
ZEND_END_ARG_INFO()

#define arginfo_socket_set_timeout arginfo_stream_set_timeout
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gettype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The variable being type checked.")
ZEND_END_ARG_INFO()

#define arginfo_get_debug_type arginfo_gettype

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_settype, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(1, var, IS_MIXED, 0, "The variable being converted.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, type, IS_STRING, 0, "Possibles values of type are: \"boolean\" or \"bool\" \"integer\" or \"int\" \"float\" or \"double\" \"string\" \"array\" \"object\" \"null\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_intval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The scalar value being converted to an integer")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, base, IS_LONG, 0, "10", "The base for the conversion")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_floatval, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "May be any scalar type. floatval should not be used on objects, as doing so will emit an E_WARNING level error and return 1.")
ZEND_END_ARG_INFO()

#define arginfo_doubleval arginfo_floatval

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_boolval, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_strval arginfo_gettype

#define arginfo_is_null arginfo_boolval

#define arginfo_is_resource arginfo_boolval

#define arginfo_is_bool arginfo_boolval

#define arginfo_is_int arginfo_boolval

#define arginfo_is_integer arginfo_boolval

#define arginfo_is_long arginfo_boolval

#define arginfo_is_float arginfo_boolval

#define arginfo_is_double arginfo_boolval

#define arginfo_is_numeric arginfo_boolval

#define arginfo_is_string arginfo_boolval

#define arginfo_is_array arginfo_boolval

#define arginfo_is_object arginfo_boolval

#define arginfo_is_scalar arginfo_boolval

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_is_callable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The value to be checked.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, syntax_only, _IS_BOOL, 0, "false", "If set to true the function only verifies that value might be a function or method. It will reject any values that are not invokable objects, Closure, strings, or arrays that do not have a valid structure to be used as a callback. A valid callable array has 2 entries, the first of which is an object or a string, and the second a string.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, callable_name, "null")
ZEND_END_ARG_INFO()

#define arginfo_is_iterable arginfo_boolval

#define arginfo_is_countable arginfo_boolval

#if defined(HAVE_GETTIMEOFDAY)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_uniqid, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, prefix, IS_STRING, 0, "\"\"", "Can be useful, for instance, if you generate identifiers simultaneously on several hosts that could generate the same identifier at the same microsecond. (This can happen even on a single host if the system clock is moved backwards, such as by an NTP adjustment.)")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, more_entropy, _IS_BOOL, 0, "false", "If set to true, uniqid will add additional entropy (using the combined linear congruential generator) at the end of the return value, which increases the likelihood that the result will be unique.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_parse_url, 0, 1, MAY_BE_LONG|MAY_BE_STRING|MAY_BE_ARRAY|MAY_BE_NULL|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, url, IS_STRING, 0, "The URL to parse.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, component, IS_LONG, 0, "-1", "Specify one of PHP_URL_SCHEME, PHP_URL_HOST, PHP_URL_PORT, PHP_URL_USER, PHP_URL_PASS, PHP_URL_PATH, PHP_URL_QUERY or PHP_URL_FRAGMENT to retrieve just a specific URL component as a string (except when PHP_URL_PORT is given, in which case the return value will be an int).")
ZEND_END_ARG_INFO()

#define arginfo_urlencode arginfo_base64_encode

#define arginfo_urldecode arginfo_base64_encode

#define arginfo_rawurlencode arginfo_base64_encode

#define arginfo_rawurldecode arginfo_base64_encode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_get_headers, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, url, IS_STRING, 0, "The target URL.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, associative, _IS_BOOL, 0, "false", "If the optional associative parameter is set to true, get_headers parses the response and sets the array's keys.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_stream_bucket_make_writeable, 0, 1, StreamBucket, 1)
	ZEND_ARG_INFO(0, brigade)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_bucket_prepend, 0, 2, IS_VOID, 0)
	ZEND_ARG_INFO(0, brigade)
	ZEND_ARG_OBJ_INFO(0, bucket, StreamBucket, 0)
ZEND_END_ARG_INFO()

#define arginfo_stream_bucket_append arginfo_stream_bucket_prepend

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_stream_bucket_new, 0, 2, StreamBucket, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO(0, buffer, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_stream_get_filters arginfo_ob_list_handlers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_stream_filter_register, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filter_name, IS_STRING, 0, "The filter name to be registered.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, class, IS_STRING, 0, "To implement a filter, you need to define a class as an extension of php_user_filter with a number of member functions. When performing readwrite operations on the stream to which your filter is attached, PHP will pass the data through your filter (and any other filters attached to that stream) so that the data may be modified as desired. You must implement the methods exactly as described in php_user_filter - doing otherwise will lead to undefined behaviour.")
ZEND_END_ARG_INFO()

#define arginfo_convert_uuencode arginfo_base64_encode

#define arginfo_convert_uudecode arginfo_hex2bin

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_var_dump, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The expression to dump.")
	ZEND_ARG_VARIADIC_TYPE_INFO_DOCCOMMENT(0, values, IS_MIXED, 0, "Further expressions to dump.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_var_export, 0, 1, IS_STRING, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The variable you want to export.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, return, _IS_BOOL, 0, "false", "If used and set to true, var_export will return the variable representation instead of outputting it.")
ZEND_END_ARG_INFO()

#define arginfo_debug_zval_dump arginfo_var_dump

#define arginfo_serialize arginfo_gettype

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_unserialize, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The serialized string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "Any options to be provided to unserialize, as an associative array.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_memory_get_usage, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, real_usage, _IS_BOOL, 0, "false", "Set this to true to get total memory allocated from system, including unused pages. If not set or false only the used memory is reported.")
ZEND_END_ARG_INFO()

#define arginfo_memory_get_peak_usage arginfo_memory_get_usage

#define arginfo_memory_reset_peak_usage arginfo_flush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_version_compare, 0, 2, MAY_BE_LONG|MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, version1, IS_STRING, 0, "First version number.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, version2, IS_STRING, 0, "Second version number.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, operator, IS_STRING, 1, "null", "An optional operator. The possible operators are: <, lt, <=, le, >, gt, >=, ge, ==, =, eq, !=, <>, ne respectively.")
ZEND_END_ARG_INFO()

#if defined(PHP_WIN32)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_cp_set, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, codepage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_cp_get, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, kind, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_cp_conv, 0, 3, IS_STRING, 1)
	ZEND_ARG_TYPE_MASK(0, in_codepage, MAY_BE_LONG|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_MASK(0, out_codepage, MAY_BE_LONG|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO(0, subject, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_cp_is_utf8, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_set_ctrl_handler, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handler, IS_CALLABLE, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, add, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_sapi_windows_generate_ctrl_event, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pid, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()
#endif


ZEND_FRAMELESS_FUNCTION(min, 2);
static const zend_frameless_function_info frameless_function_infos_min[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(min, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(max, 2);
static const zend_frameless_function_info frameless_function_infos_max[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(max, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(clamp, 3);
static const zend_frameless_function_info frameless_function_infos_clamp[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(clamp, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(in_array, 2);
ZEND_FRAMELESS_FUNCTION(in_array, 3);
static const zend_frameless_function_info frameless_function_infos_in_array[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(in_array, 2), 2 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(in_array, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(trim, 1);
ZEND_FRAMELESS_FUNCTION(trim, 2);
static const zend_frameless_function_info frameless_function_infos_trim[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(trim, 1), 1 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(trim, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(implode, 1);
ZEND_FRAMELESS_FUNCTION(implode, 2);
static const zend_frameless_function_info frameless_function_infos_implode[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(implode, 1), 1 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(implode, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(dirname, 1);
ZEND_FRAMELESS_FUNCTION(dirname, 2);
static const zend_frameless_function_info frameless_function_infos_dirname[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(dirname, 1), 1 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(dirname, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(strstr, 2);
ZEND_FRAMELESS_FUNCTION(strstr, 3);
static const zend_frameless_function_info frameless_function_infos_strstr[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(strstr, 2), 2 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(strstr, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(strpos, 2);
ZEND_FRAMELESS_FUNCTION(strpos, 3);
static const zend_frameless_function_info frameless_function_infos_strpos[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(strpos, 2), 2 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(strpos, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(str_contains, 2);
static const zend_frameless_function_info frameless_function_infos_str_contains[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(str_contains, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(str_starts_with, 2);
static const zend_frameless_function_info frameless_function_infos_str_starts_with[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(str_starts_with, 2), 2 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(substr, 2);
ZEND_FRAMELESS_FUNCTION(substr, 3);
static const zend_frameless_function_info frameless_function_infos_substr[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(substr, 2), 2 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(substr, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(strtr, 2);
ZEND_FRAMELESS_FUNCTION(strtr, 3);
static const zend_frameless_function_info frameless_function_infos_strtr[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(strtr, 2), 2 },
	{ ZEND_FRAMELESS_FUNCTION_NAME(strtr, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(str_replace, 3);
static const zend_frameless_function_info frameless_function_infos_str_replace[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(str_replace, 3), 3 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(dechex, 1);
static const zend_frameless_function_info frameless_function_infos_dechex[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(dechex, 1), 1 },
	{ 0 },
};

ZEND_FRAMELESS_FUNCTION(is_numeric, 1);
static const zend_frameless_function_info frameless_function_infos_is_numeric[] = {
	{ ZEND_FRAMELESS_FUNCTION_NAME(is_numeric, 1), 1 },
	{ 0 },
};

ZEND_FUNCTION(set_time_limit);
ZEND_FUNCTION(header_register_callback);
ZEND_FUNCTION(ob_start);
ZEND_FUNCTION(ob_flush);
ZEND_FUNCTION(ob_clean);
ZEND_FUNCTION(ob_end_flush);
ZEND_FUNCTION(ob_end_clean);
ZEND_FUNCTION(ob_get_flush);
ZEND_FUNCTION(ob_get_clean);
ZEND_FUNCTION(ob_get_contents);
ZEND_FUNCTION(ob_get_level);
ZEND_FUNCTION(ob_get_length);
ZEND_FUNCTION(ob_list_handlers);
ZEND_FUNCTION(ob_get_status);
ZEND_FUNCTION(ob_implicit_flush);
ZEND_FUNCTION(output_reset_rewrite_vars);
ZEND_FUNCTION(output_add_rewrite_var);
ZEND_FUNCTION(stream_wrapper_register);
ZEND_FUNCTION(stream_wrapper_unregister);
ZEND_FUNCTION(stream_wrapper_restore);
ZEND_FUNCTION(array_push);
ZEND_FUNCTION(krsort);
ZEND_FUNCTION(ksort);
ZEND_FUNCTION(count);
ZEND_FUNCTION(natsort);
ZEND_FUNCTION(natcasesort);
ZEND_FUNCTION(asort);
ZEND_FUNCTION(arsort);
ZEND_FUNCTION(sort);
ZEND_FUNCTION(rsort);
ZEND_FUNCTION(usort);
ZEND_FUNCTION(uasort);
ZEND_FUNCTION(uksort);
ZEND_FUNCTION(end);
ZEND_FUNCTION(prev);
ZEND_FUNCTION(next);
ZEND_FUNCTION(reset);
ZEND_FUNCTION(current);
ZEND_FUNCTION(key);
ZEND_FUNCTION(min);
ZEND_FUNCTION(max);
ZEND_FUNCTION(clamp);
ZEND_FUNCTION(array_walk);
ZEND_FUNCTION(array_walk_recursive);
ZEND_FUNCTION(in_array);
ZEND_FUNCTION(array_search);
ZEND_FUNCTION(extract);
ZEND_FUNCTION(compact);
ZEND_FUNCTION(array_fill);
ZEND_FUNCTION(array_fill_keys);
ZEND_FUNCTION(range);
ZEND_FUNCTION(shuffle);
ZEND_FUNCTION(array_pop);
ZEND_FUNCTION(array_shift);
ZEND_FUNCTION(array_unshift);
ZEND_FUNCTION(array_splice);
ZEND_FUNCTION(array_slice);
ZEND_FUNCTION(array_merge);
ZEND_FUNCTION(array_merge_recursive);
ZEND_FUNCTION(array_replace);
ZEND_FUNCTION(array_replace_recursive);
ZEND_FUNCTION(array_keys);
ZEND_FUNCTION(array_key_first);
ZEND_FUNCTION(array_key_last);
ZEND_FUNCTION(array_first);
ZEND_FUNCTION(array_last);
ZEND_FUNCTION(array_values);
ZEND_FUNCTION(array_count_values);
ZEND_FUNCTION(array_column);
ZEND_FUNCTION(array_reverse);
ZEND_FUNCTION(array_pad);
ZEND_FUNCTION(array_flip);
ZEND_FUNCTION(array_change_key_case);
ZEND_FUNCTION(array_unique);
ZEND_FUNCTION(array_intersect_key);
ZEND_FUNCTION(array_intersect_ukey);
ZEND_FUNCTION(array_intersect);
ZEND_FUNCTION(array_uintersect);
ZEND_FUNCTION(array_intersect_assoc);
ZEND_FUNCTION(array_uintersect_assoc);
ZEND_FUNCTION(array_intersect_uassoc);
ZEND_FUNCTION(array_uintersect_uassoc);
ZEND_FUNCTION(array_diff_key);
ZEND_FUNCTION(array_diff_ukey);
ZEND_FUNCTION(array_diff);
ZEND_FUNCTION(array_udiff);
ZEND_FUNCTION(array_diff_assoc);
ZEND_FUNCTION(array_diff_uassoc);
ZEND_FUNCTION(array_udiff_assoc);
ZEND_FUNCTION(array_udiff_uassoc);
ZEND_FUNCTION(array_multisort);
ZEND_FUNCTION(array_rand);
ZEND_FUNCTION(array_sum);
ZEND_FUNCTION(array_product);
ZEND_FUNCTION(array_reduce);
ZEND_FUNCTION(array_filter);
ZEND_FUNCTION(array_find);
ZEND_FUNCTION(array_find_key);
ZEND_FUNCTION(array_any);
ZEND_FUNCTION(array_all);
ZEND_FUNCTION(array_map);
ZEND_FUNCTION(array_key_exists);
ZEND_FUNCTION(array_chunk);
ZEND_FUNCTION(array_combine);
ZEND_FUNCTION(array_is_list);
ZEND_FUNCTION(base64_encode);
ZEND_FUNCTION(base64_decode);
ZEND_FUNCTION(constant);
ZEND_FUNCTION(ip2long);
ZEND_FUNCTION(long2ip);
ZEND_FUNCTION(getenv);
#if defined(HAVE_PUTENV)
ZEND_FUNCTION(putenv);
#endif
ZEND_FUNCTION(getopt);
ZEND_FUNCTION(flush);
ZEND_FUNCTION(sleep);
ZEND_FUNCTION(usleep);
#if defined(HAVE_NANOSLEEP)
ZEND_FUNCTION(time_nanosleep);
ZEND_FUNCTION(time_sleep_until);
#endif
ZEND_FUNCTION(get_current_user);
ZEND_FUNCTION(get_cfg_var);
ZEND_FUNCTION(error_log);
ZEND_FUNCTION(error_get_last);
ZEND_FUNCTION(error_clear_last);
ZEND_FUNCTION(call_user_func);
ZEND_FUNCTION(call_user_func_array);
ZEND_FUNCTION(forward_static_call);
ZEND_FUNCTION(forward_static_call_array);
ZEND_FUNCTION(register_shutdown_function);
ZEND_FUNCTION(highlight_file);
ZEND_FUNCTION(php_strip_whitespace);
ZEND_FUNCTION(highlight_string);
ZEND_FUNCTION(ini_get);
ZEND_FUNCTION(ini_get_all);
ZEND_FUNCTION(ini_set);
ZEND_FUNCTION(ini_restore);
ZEND_FUNCTION(ini_parse_quantity);
ZEND_FUNCTION(set_include_path);
ZEND_FUNCTION(get_include_path);
ZEND_FUNCTION(print_r);
ZEND_FUNCTION(connection_aborted);
ZEND_FUNCTION(connection_status);
ZEND_FUNCTION(ignore_user_abort);
#if defined(HAVE_GETSERVBYNAME)
ZEND_FUNCTION(getservbyname);
#endif
#if defined(HAVE_GETSERVBYPORT)
ZEND_FUNCTION(getservbyport);
#endif
#if defined(HAVE_GETPROTOBYNAME)
ZEND_FUNCTION(getprotobyname);
#endif
#if defined(HAVE_GETPROTOBYNUMBER)
ZEND_FUNCTION(getprotobynumber);
#endif
ZEND_FUNCTION(register_tick_function);
ZEND_FUNCTION(unregister_tick_function);
ZEND_FUNCTION(is_uploaded_file);
ZEND_FUNCTION(move_uploaded_file);
ZEND_FUNCTION(parse_ini_file);
ZEND_FUNCTION(parse_ini_string);
#if ZEND_DEBUG
ZEND_FUNCTION(config_get_hash);
#endif
#if defined(HAVE_GETLOADAVG)
ZEND_FUNCTION(sys_getloadavg);
#endif
ZEND_FUNCTION(get_browser);
ZEND_FUNCTION(crc32);
ZEND_FUNCTION(crypt);
#if defined(HAVE_STRPTIME)
ZEND_FUNCTION(strptime);
#endif
#if defined(HAVE_GETHOSTNAME)
ZEND_FUNCTION(gethostname);
#endif
ZEND_FUNCTION(gethostbyaddr);
ZEND_FUNCTION(gethostbyname);
ZEND_FUNCTION(gethostbynamel);
#if (defined(PHP_WIN32) || defined(HAVE_DNS_SEARCH_FUNC))
ZEND_FUNCTION(dns_check_record);
ZEND_FUNCTION(dns_get_record);
ZEND_FUNCTION(dns_get_mx);
#endif
#if (defined(PHP_WIN32) || defined(HAVE_GETIFADDRS) || defined(__PASE__))
ZEND_FUNCTION(net_get_interfaces);
#endif
#if defined(HAVE_FTOK)
ZEND_FUNCTION(ftok);
#endif
ZEND_FUNCTION(hrtime);
ZEND_FUNCTION(md5);
ZEND_FUNCTION(md5_file);
ZEND_FUNCTION(getmyuid);
ZEND_FUNCTION(getmygid);
ZEND_FUNCTION(getmypid);
ZEND_FUNCTION(getmyinode);
ZEND_FUNCTION(getlastmod);
ZEND_FUNCTION(sha1);
ZEND_FUNCTION(sha1_file);
#if defined(HAVE_SYSLOG_H)
ZEND_FUNCTION(openlog);
ZEND_FUNCTION(closelog);
ZEND_FUNCTION(syslog);
#endif
ZEND_FUNCTION(inet_ntop);
ZEND_FUNCTION(inet_pton);
ZEND_FUNCTION(metaphone);
ZEND_FUNCTION(header);
ZEND_FUNCTION(header_remove);
ZEND_FUNCTION(setrawcookie);
ZEND_FUNCTION(setcookie);
ZEND_FUNCTION(http_response_code);
ZEND_FUNCTION(headers_sent);
ZEND_FUNCTION(headers_list);
ZEND_FUNCTION(htmlspecialchars);
ZEND_FUNCTION(htmlspecialchars_decode);
ZEND_FUNCTION(html_entity_decode);
ZEND_FUNCTION(htmlentities);
ZEND_FUNCTION(get_html_translation_table);
ZEND_FUNCTION(assert);
ZEND_FUNCTION(assert_options);
ZEND_FUNCTION(bin2hex);
ZEND_FUNCTION(hex2bin);
ZEND_FUNCTION(strspn);
ZEND_FUNCTION(strcspn);
#if defined(HAVE_NL_LANGINFO)
ZEND_FUNCTION(nl_langinfo);
#endif
ZEND_FUNCTION(strcoll);
ZEND_FUNCTION(trim);
ZEND_FUNCTION(rtrim);
ZEND_FUNCTION(ltrim);
ZEND_FUNCTION(wordwrap);
ZEND_FUNCTION(explode);
ZEND_FUNCTION(implode);
ZEND_FUNCTION(strtok);
ZEND_FUNCTION(strtoupper);
ZEND_FUNCTION(strtolower);
ZEND_FUNCTION(str_increment);
ZEND_FUNCTION(str_decrement);
ZEND_FUNCTION(basename);
ZEND_FUNCTION(dirname);
ZEND_FUNCTION(pathinfo);
ZEND_FUNCTION(stristr);
ZEND_FUNCTION(strstr);
ZEND_FUNCTION(strpos);
ZEND_FUNCTION(stripos);
ZEND_FUNCTION(strrpos);
ZEND_FUNCTION(strripos);
ZEND_FUNCTION(strrchr);
ZEND_FUNCTION(str_contains);
ZEND_FUNCTION(str_starts_with);
ZEND_FUNCTION(str_ends_with);
ZEND_FUNCTION(chunk_split);
ZEND_FUNCTION(substr);
ZEND_FUNCTION(substr_replace);
ZEND_FUNCTION(quotemeta);
ZEND_FUNCTION(ord);
ZEND_FUNCTION(chr);
ZEND_FUNCTION(ucfirst);
ZEND_FUNCTION(lcfirst);
ZEND_FUNCTION(ucwords);
ZEND_FUNCTION(strtr);
ZEND_FUNCTION(strrev);
ZEND_FUNCTION(similar_text);
ZEND_FUNCTION(addcslashes);
ZEND_FUNCTION(addslashes);
ZEND_FUNCTION(stripcslashes);
ZEND_FUNCTION(stripslashes);
ZEND_FUNCTION(str_replace);
ZEND_FUNCTION(str_ireplace);
ZEND_FUNCTION(hebrev);
ZEND_FUNCTION(nl2br);
ZEND_FUNCTION(strip_tags);
ZEND_FUNCTION(setlocale);
ZEND_FUNCTION(parse_str);
ZEND_FUNCTION(str_getcsv);
ZEND_FUNCTION(str_repeat);
ZEND_FUNCTION(count_chars);
ZEND_FUNCTION(strnatcmp);
ZEND_FUNCTION(localeconv);
ZEND_FUNCTION(strnatcasecmp);
ZEND_FUNCTION(substr_count);
ZEND_FUNCTION(str_pad);
ZEND_FUNCTION(sscanf);
ZEND_FUNCTION(str_rot13);
ZEND_FUNCTION(str_shuffle);
ZEND_FUNCTION(str_word_count);
ZEND_FUNCTION(str_split);
ZEND_FUNCTION(strpbrk);
ZEND_FUNCTION(substr_compare);
ZEND_FUNCTION(utf8_encode);
ZEND_FUNCTION(utf8_decode);
ZEND_FUNCTION(opendir);
ZEND_FUNCTION(dir);
ZEND_FUNCTION(closedir);
ZEND_FUNCTION(chdir);
#if (defined(HAVE_CHROOT) && !defined(ZTS) && defined(ENABLE_CHROOT_FUNC))
ZEND_FUNCTION(chroot);
#endif
ZEND_FUNCTION(getcwd);
ZEND_FUNCTION(rewinddir);
ZEND_FUNCTION(readdir);
ZEND_FUNCTION(scandir);
ZEND_FUNCTION(glob);
ZEND_FUNCTION(exec);
ZEND_FUNCTION(system);
ZEND_FUNCTION(passthru);
ZEND_FUNCTION(escapeshellcmd);
ZEND_FUNCTION(escapeshellarg);
ZEND_FUNCTION(shell_exec);
#if defined(HAVE_NICE)
ZEND_FUNCTION(proc_nice);
#endif
ZEND_FUNCTION(flock);
ZEND_FUNCTION(get_meta_tags);
ZEND_FUNCTION(pclose);
ZEND_FUNCTION(popen);
ZEND_FUNCTION(readfile);
ZEND_FUNCTION(rewind);
ZEND_FUNCTION(rmdir);
ZEND_FUNCTION(umask);
ZEND_FUNCTION(fclose);
ZEND_FUNCTION(feof);
ZEND_FUNCTION(fgetc);
ZEND_FUNCTION(fgets);
ZEND_FUNCTION(fread);
ZEND_FUNCTION(fopen);
ZEND_FUNCTION(fscanf);
ZEND_FUNCTION(fpassthru);
ZEND_FUNCTION(ftruncate);
ZEND_FUNCTION(fstat);
ZEND_FUNCTION(fseek);
ZEND_FUNCTION(ftell);
ZEND_FUNCTION(fflush);
ZEND_FUNCTION(fsync);
ZEND_FUNCTION(fdatasync);
ZEND_FUNCTION(fwrite);
ZEND_FUNCTION(mkdir);
ZEND_FUNCTION(rename);
ZEND_FUNCTION(copy);
ZEND_FUNCTION(tempnam);
ZEND_FUNCTION(tmpfile);
ZEND_FUNCTION(file);
ZEND_FUNCTION(file_get_contents);
ZEND_FUNCTION(unlink);
ZEND_FUNCTION(file_put_contents);
ZEND_FUNCTION(fputcsv);
ZEND_FUNCTION(fgetcsv);
ZEND_FUNCTION(realpath);
#if defined(HAVE_FNMATCH)
ZEND_FUNCTION(fnmatch);
#endif
ZEND_FUNCTION(sys_get_temp_dir);
ZEND_FUNCTION(fileatime);
ZEND_FUNCTION(filectime);
ZEND_FUNCTION(filegroup);
ZEND_FUNCTION(fileinode);
ZEND_FUNCTION(filemtime);
ZEND_FUNCTION(fileowner);
ZEND_FUNCTION(fileperms);
ZEND_FUNCTION(filesize);
ZEND_FUNCTION(filetype);
ZEND_FUNCTION(file_exists);
ZEND_FUNCTION(is_writable);
ZEND_FUNCTION(is_readable);
ZEND_FUNCTION(is_executable);
ZEND_FUNCTION(is_file);
ZEND_FUNCTION(is_dir);
ZEND_FUNCTION(is_link);
ZEND_FUNCTION(stat);
ZEND_FUNCTION(lstat);
ZEND_FUNCTION(chown);
ZEND_FUNCTION(chgrp);
#if defined(HAVE_LCHOWN)
ZEND_FUNCTION(lchown);
ZEND_FUNCTION(lchgrp);
#endif
ZEND_FUNCTION(chmod);
#if defined(HAVE_UTIME)
ZEND_FUNCTION(touch);
#endif
ZEND_FUNCTION(clearstatcache);
ZEND_FUNCTION(disk_total_space);
ZEND_FUNCTION(disk_free_space);
ZEND_FUNCTION(realpath_cache_get);
ZEND_FUNCTION(realpath_cache_size);
ZEND_FUNCTION(sprintf);
ZEND_FUNCTION(printf);
ZEND_FUNCTION(vprintf);
ZEND_FUNCTION(vsprintf);
ZEND_FUNCTION(fprintf);
ZEND_FUNCTION(vfprintf);
ZEND_FUNCTION(fsockopen);
ZEND_FUNCTION(pfsockopen);
ZEND_FUNCTION(http_build_query);
ZEND_FUNCTION(http_get_last_response_headers);
ZEND_FUNCTION(http_clear_last_response_headers);
ZEND_FUNCTION(request_parse_body);
ZEND_FUNCTION(image_type_to_mime_type);
ZEND_FUNCTION(image_type_to_extension);
ZEND_FUNCTION(getimagesize);
ZEND_FUNCTION(getimagesizefromstring);
ZEND_FUNCTION(phpinfo);
ZEND_FUNCTION(phpversion);
ZEND_FUNCTION(phpcredits);
ZEND_FUNCTION(php_sapi_name);
ZEND_FUNCTION(php_uname);
ZEND_FUNCTION(php_ini_scanned_files);
ZEND_FUNCTION(php_ini_loaded_file);
ZEND_FUNCTION(iptcembed);
ZEND_FUNCTION(iptcparse);
ZEND_FUNCTION(levenshtein);
#if (defined(HAVE_SYMLINK) || defined(PHP_WIN32))
ZEND_FUNCTION(readlink);
ZEND_FUNCTION(linkinfo);
ZEND_FUNCTION(symlink);
ZEND_FUNCTION(link);
#endif
ZEND_FUNCTION(mail);
ZEND_FUNCTION(abs);
ZEND_FUNCTION(ceil);
ZEND_FUNCTION(floor);
ZEND_FUNCTION(round);
ZEND_FUNCTION(sin);
ZEND_FUNCTION(cos);
ZEND_FUNCTION(tan);
ZEND_FUNCTION(asin);
ZEND_FUNCTION(acos);
ZEND_FUNCTION(atan);
ZEND_FUNCTION(atanh);
ZEND_FUNCTION(atan2);
ZEND_FUNCTION(sinh);
ZEND_FUNCTION(cosh);
ZEND_FUNCTION(tanh);
ZEND_FUNCTION(asinh);
ZEND_FUNCTION(acosh);
ZEND_FUNCTION(expm1);
ZEND_FUNCTION(log1p);
ZEND_FUNCTION(pi);
ZEND_FUNCTION(is_finite);
ZEND_FUNCTION(is_nan);
ZEND_FUNCTION(intdiv);
ZEND_FUNCTION(is_infinite);
ZEND_FUNCTION(pow);
ZEND_FUNCTION(exp);
ZEND_FUNCTION(log);
ZEND_FUNCTION(log10);
ZEND_FUNCTION(sqrt);
ZEND_FUNCTION(hypot);
ZEND_FUNCTION(deg2rad);
ZEND_FUNCTION(rad2deg);
ZEND_FUNCTION(bindec);
ZEND_FUNCTION(hexdec);
ZEND_FUNCTION(octdec);
ZEND_FUNCTION(decbin);
ZEND_FUNCTION(decoct);
ZEND_FUNCTION(dechex);
ZEND_FUNCTION(base_convert);
ZEND_FUNCTION(number_format);
ZEND_FUNCTION(fmod);
ZEND_FUNCTION(fdiv);
ZEND_FUNCTION(fpow);
#if defined(HAVE_GETTIMEOFDAY)
ZEND_FUNCTION(microtime);
ZEND_FUNCTION(gettimeofday);
#endif
#if defined(HAVE_GETRUSAGE)
ZEND_FUNCTION(getrusage);
#endif
ZEND_FUNCTION(pack);
ZEND_FUNCTION(unpack);
ZEND_FUNCTION(password_get_info);
ZEND_FUNCTION(password_hash);
ZEND_FUNCTION(password_needs_rehash);
ZEND_FUNCTION(password_verify);
ZEND_FUNCTION(password_algos);
#if defined(PHP_CAN_SUPPORT_PROC_OPEN)
ZEND_FUNCTION(proc_open);
ZEND_FUNCTION(proc_close);
ZEND_FUNCTION(proc_terminate);
ZEND_FUNCTION(proc_get_status);
#endif
ZEND_FUNCTION(quoted_printable_decode);
ZEND_FUNCTION(quoted_printable_encode);
ZEND_FUNCTION(soundex);
ZEND_FUNCTION(stream_select);
ZEND_FUNCTION(stream_context_create);
ZEND_FUNCTION(stream_context_set_params);
ZEND_FUNCTION(stream_context_get_params);
ZEND_FUNCTION(stream_context_set_option);
ZEND_FUNCTION(stream_context_set_options);
ZEND_FUNCTION(stream_context_get_options);
ZEND_FUNCTION(stream_context_get_default);
ZEND_FUNCTION(stream_context_set_default);
ZEND_FUNCTION(stream_filter_prepend);
ZEND_FUNCTION(stream_filter_append);
ZEND_FUNCTION(stream_filter_remove);
ZEND_FUNCTION(stream_socket_client);
ZEND_FUNCTION(stream_socket_server);
ZEND_FUNCTION(stream_socket_accept);
ZEND_FUNCTION(stream_socket_get_name);
ZEND_FUNCTION(stream_socket_recvfrom);
ZEND_FUNCTION(stream_socket_sendto);
ZEND_FUNCTION(stream_socket_enable_crypto);
#if defined(HAVE_SHUTDOWN)
ZEND_FUNCTION(stream_socket_shutdown);
#endif
#if defined(HAVE_SOCKETPAIR)
ZEND_FUNCTION(stream_socket_pair);
#endif
ZEND_FUNCTION(stream_copy_to_stream);
ZEND_FUNCTION(stream_get_contents);
ZEND_FUNCTION(stream_supports_lock);
ZEND_FUNCTION(stream_set_write_buffer);
ZEND_FUNCTION(stream_set_read_buffer);
ZEND_FUNCTION(stream_set_blocking);
ZEND_FUNCTION(stream_get_meta_data);
ZEND_FUNCTION(stream_get_line);
ZEND_FUNCTION(stream_resolve_include_path);
ZEND_FUNCTION(stream_get_wrappers);
ZEND_FUNCTION(stream_get_transports);
ZEND_FUNCTION(stream_is_local);
ZEND_FUNCTION(stream_isatty);
#if defined(PHP_WIN32)
ZEND_FUNCTION(sapi_windows_vt100_support);
#endif
ZEND_FUNCTION(stream_set_chunk_size);
#if (defined(HAVE_SYS_TIME_H) || defined(PHP_WIN32))
ZEND_FUNCTION(stream_set_timeout);
#endif
ZEND_FUNCTION(gettype);
ZEND_FUNCTION(get_debug_type);
ZEND_FUNCTION(settype);
ZEND_FUNCTION(intval);
ZEND_FUNCTION(floatval);
ZEND_FUNCTION(boolval);
ZEND_FUNCTION(strval);
ZEND_FUNCTION(is_null);
ZEND_FUNCTION(is_resource);
ZEND_FUNCTION(is_bool);
ZEND_FUNCTION(is_int);
ZEND_FUNCTION(is_float);
ZEND_FUNCTION(is_numeric);
ZEND_FUNCTION(is_string);
ZEND_FUNCTION(is_array);
ZEND_FUNCTION(is_object);
ZEND_FUNCTION(is_scalar);
ZEND_FUNCTION(is_callable);
ZEND_FUNCTION(is_iterable);
ZEND_FUNCTION(is_countable);
#if defined(HAVE_GETTIMEOFDAY)
ZEND_FUNCTION(uniqid);
#endif
ZEND_FUNCTION(parse_url);
ZEND_FUNCTION(urlencode);
ZEND_FUNCTION(urldecode);
ZEND_FUNCTION(rawurlencode);
ZEND_FUNCTION(rawurldecode);
ZEND_FUNCTION(get_headers);
ZEND_FUNCTION(stream_bucket_make_writeable);
ZEND_FUNCTION(stream_bucket_prepend);
ZEND_FUNCTION(stream_bucket_append);
ZEND_FUNCTION(stream_bucket_new);
ZEND_FUNCTION(stream_get_filters);
ZEND_FUNCTION(stream_filter_register);
ZEND_FUNCTION(convert_uuencode);
ZEND_FUNCTION(convert_uudecode);
ZEND_FUNCTION(var_dump);
ZEND_FUNCTION(var_export);
ZEND_FUNCTION(debug_zval_dump);
ZEND_FUNCTION(serialize);
ZEND_FUNCTION(unserialize);
ZEND_FUNCTION(memory_get_usage);
ZEND_FUNCTION(memory_get_peak_usage);
ZEND_FUNCTION(memory_reset_peak_usage);
ZEND_FUNCTION(version_compare);
#if defined(PHP_WIN32)
ZEND_FUNCTION(sapi_windows_cp_set);
ZEND_FUNCTION(sapi_windows_cp_get);
ZEND_FUNCTION(sapi_windows_cp_conv);
ZEND_FUNCTION(sapi_windows_cp_is_utf8);
ZEND_FUNCTION(sapi_windows_set_ctrl_handler);
ZEND_FUNCTION(sapi_windows_generate_ctrl_event);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("set_time_limit", zif_set_time_limit, arginfo_set_time_limit, 0, NULL, "/**\n * Limits the maximum execution time\n * @param int $seconds The maximum execution time, in seconds. If set to zero, no time limit is imposed.\n * @return bool\n */")
	ZEND_RAW_FENTRY("header_register_callback", zif_header_register_callback, arginfo_header_register_callback, 0, NULL, "/**\n * Call a header function\n * @return bool\n */")
	ZEND_RAW_FENTRY("ob_start", zif_ob_start, arginfo_ob_start, 0, NULL, "/**\n * Turn on output buffering\n * @param callable|null $callback An optional callback callable may be specified. It can also be bypassed by passing null.\n * @param int $chunk_size If the optional parameter chunk_size is passed, the buffer will be flushed after any block of code resulting in output that causes the buffer\'s length to equal or exceed chunk_size. The default value 0 means that all output is buffered until the buffer is turned off. See  for more details.\n * @param int $flags The flags parameter is a bitmask that controls the operations that can be performed on the output buffer. The default is to allow output buffers to be cleaned, flushed and removed, which can be set explicitly via the buffer control flags . See for more details.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ob_flush", zif_ob_flush, arginfo_ob_flush, 0, NULL, "/**\n * Flush (send) the return value of the active output handler\n * @return bool\n */")
	ZEND_RAW_FENTRY("ob_clean", zif_ob_clean, arginfo_ob_clean, 0, NULL, "/**\n * Clean (erase) the contents of the active output buffer\n * @return bool\n */")
	ZEND_RAW_FENTRY("ob_end_flush", zif_ob_end_flush, arginfo_ob_end_flush, 0, NULL, "/**\n * Flush (send) the return value of the active output handler\n * and turn the active output buffer off\n * @return bool\n */")
	ZEND_RAW_FENTRY("ob_end_clean", zif_ob_end_clean, arginfo_ob_end_clean, 0, NULL, "/**\n * Clean (erase) the contents of the active output buffer and turn it off\n * @return bool\n */")
	ZEND_RAW_FENTRY("ob_get_flush", zif_ob_get_flush, arginfo_ob_get_flush, 0, NULL, "/**\n * Flush (send) the return value of the active output handler,\n * return the contents of the active output buffer and turn it off\n * @return string|false\n */")
	ZEND_RAW_FENTRY("ob_get_clean", zif_ob_get_clean, arginfo_ob_get_clean, 0, NULL, "/**\n * Get the contents of the active output buffer and turn it off\n * @return string|false\n */")
	ZEND_RAW_FENTRY("ob_get_contents", zif_ob_get_contents, arginfo_ob_get_contents, 0, NULL, "/**\n * Return the contents of the output buffer\n * @return string|false\n */")
	ZEND_RAW_FENTRY("ob_get_level", zif_ob_get_level, arginfo_ob_get_level, 0, NULL, "/**\n * Return the nesting level of the output buffering mechanism\n * @return int\n */")
	ZEND_RAW_FENTRY("ob_get_length", zif_ob_get_length, arginfo_ob_get_length, 0, NULL, "/**\n * Return the length of the output buffer\n * @return int|false\n */")
	ZEND_RAW_FENTRY("ob_list_handlers", zif_ob_list_handlers, arginfo_ob_list_handlers, 0, NULL, "/**\n * List all output handlers in use\n * @return array\n */")
	ZEND_RAW_FENTRY("ob_get_status", zif_ob_get_status, arginfo_ob_get_status, 0, NULL, "/**\n * Get status of output buffers\n * @param bool $full_status true to return all active output buffer levels. If false or not set, only the top level output buffer is returned.\n * @return array\n */")
	ZEND_RAW_FENTRY("ob_implicit_flush", zif_ob_implicit_flush, arginfo_ob_implicit_flush, 0, NULL, "/**\n * Turn implicit flush on/off\n * @param bool $enable true to turn implicit flushing on, false otherwise.\n * @return void\n */")
	ZEND_RAW_FENTRY("output_reset_rewrite_vars", zif_output_reset_rewrite_vars, arginfo_output_reset_rewrite_vars, 0, NULL, "/**\n * Reset URL rewriter values\n * @return bool\n */")
	ZEND_RAW_FENTRY("output_add_rewrite_var", zif_output_add_rewrite_var, arginfo_output_add_rewrite_var, 0, NULL, "/**\n * Add URL rewriter values\n * @param string $name The variable name.\n * @param string $value The variable value.\n * @return bool\n */")
	ZEND_RAW_FENTRY("stream_wrapper_register", zif_stream_wrapper_register, arginfo_stream_wrapper_register, 0, NULL, "/**\n * Register a URL wrapper implemented as a PHP class\n * @param string $protocol The wrapper name to be registered. Valid protocol names must contain alphanumerics, dots (.), plusses (+), or hyphens (-) only.\n * @param string $class The classname which implements the protocol.\n * @param int $flags Should be set to STREAM_IS_URL if protocol is a URL protocol. Default is 0, local stream.\n * @return bool\n */")
	ZEND_RAW_FENTRY("stream_register_wrapper", zif_stream_wrapper_register, arginfo_stream_register_wrapper, 0, NULL, "/**\n * Alias stream_wrapper_register\n */")
	ZEND_RAW_FENTRY("stream_wrapper_unregister", zif_stream_wrapper_unregister, arginfo_stream_wrapper_unregister, 0, NULL, "/**\n * Unregister a URL wrapper\n * @return bool\n */")
	ZEND_RAW_FENTRY("stream_wrapper_restore", zif_stream_wrapper_restore, arginfo_stream_wrapper_restore, 0, NULL, "/**\n * Restores a previously unregistered built-in wrapper\n * @return bool\n */")
	ZEND_RAW_FENTRY("array_push", zif_array_push, arginfo_array_push, 0, NULL, "/**\n * Push one or more elements onto the end of array\n * @param array $array The input array.\n * @param mixed $values The values to push onto the end of the array.\n * @return int\n */")
	ZEND_RAW_FENTRY("krsort", zif_krsort, arginfo_krsort, 0, NULL, "/**\n * Sort an array by key in descending order\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:\n * @return true\n */")
	ZEND_RAW_FENTRY("ksort", zif_ksort, arginfo_ksort, 0, NULL, "/**\n * Sort an array by key in ascending order\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:\n * @return true\n */")
	ZEND_RAW_FENTRY("count", zif_count, arginfo_count, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Counts all elements in an array or in a Countable object\n * @param Countable|array $value An array or Countable object.\n * @param int $mode If the optional mode parameter is set to COUNT_RECURSIVE (or 1), count will recursively count the array.  This is particularly useful for counting all the elements of a multidimensional array.\n * @return int\n */")
	ZEND_RAW_FENTRY("sizeof", zif_count, arginfo_sizeof, 0, NULL, "/**\n * Alias count\n */")
	ZEND_RAW_FENTRY("natsort", zif_natsort, arginfo_natsort, 0, NULL, "/**\n * Sort an array using a \"natural order\" algorithm\n * @param array $array The input array.\n * @return true\n */")
	ZEND_RAW_FENTRY("natcasesort", zif_natcasesort, arginfo_natcasesort, 0, NULL, "/**\n * Sort an array using a case insensitive \"natural order\" algorithm\n * @param array $array The input array.\n * @return true\n */")
	ZEND_RAW_FENTRY("asort", zif_asort, arginfo_asort, 0, NULL, "/**\n * Sort an array in ascending order and maintain index association\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:\n * @return true\n */")
	ZEND_RAW_FENTRY("arsort", zif_arsort, arginfo_arsort, 0, NULL, "/**\n * Sort an array in descending order and maintain index association\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:\n * @return true\n */")
	ZEND_RAW_FENTRY("sort", zif_sort, arginfo_sort, 0, NULL, "/**\n * Sort an array in ascending order\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:\n * @return true\n */")
	ZEND_RAW_FENTRY("rsort", zif_rsort, arginfo_rsort, 0, NULL, "/**\n * Sort an array in descending order\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:\n * @return true\n */")
	ZEND_RAW_FENTRY("usort", zif_usort, arginfo_usort, 0, NULL, "/**\n * Sort an array by values using a user-defined comparison function\n * @param array $array The input array.\n * @param callable $callback The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return true\n */")
	ZEND_RAW_FENTRY("uasort", zif_uasort, arginfo_uasort, 0, NULL, "/**\n * Sort an array with a user-defined comparison function and maintain index association\n * @param array $array The input array.\n * @param callable $callback The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return true\n */")
	ZEND_RAW_FENTRY("uksort", zif_uksort, arginfo_uksort, 0, NULL, "/**\n * Sort an array by keys using a user-defined comparison function\n * @param array $array The input array.\n * @param callable $callback The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return true\n */")
	ZEND_RAW_FENTRY("end", zif_end, arginfo_end, 0, NULL, "/**\n * Set the internal pointer of an array to its last element\n * @param array|object $array The array.  This array is passed by reference because it is modified by the function.  This means you must pass it a real variable and not a function returning an array because only actual variables may be passed by reference.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("prev", zif_prev, arginfo_prev, 0, NULL, "/**\n * Rewind the internal array pointer\n * @param array|object $array The input array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("next", zif_next, arginfo_next, 0, NULL, "/**\n * Advance the internal pointer of an array\n * @param array|object $array The array being affected.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("reset", zif_reset, arginfo_reset, 0, NULL, "/**\n * Set the internal pointer of an array to its first element\n * @param array|object $array The input array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("current", zif_current, arginfo_current, 0, NULL, "/**\n * Return the current element in an array\n * @param array|object $array The array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("pos", zif_current, arginfo_pos, 0, NULL, "/**\n * Alias current\n */")
	ZEND_RAW_FENTRY("key", zif_key, arginfo_key, 0, NULL, "/**\n * Fetch a key from an array\n * @param array|object $array The array.\n * @return int|string|null\n */")
	ZEND_RAW_FENTRY("min", zif_min, arginfo_min, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_min, "/**\n * Find lowest value\n * @param mixed $value Any comparable value.\n * @param mixed $values Any comparable values.\n * @param array $value_array An array containing the values.\n * @return mixed|mixed\n */")
	ZEND_RAW_FENTRY("max", zif_max, arginfo_max, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_max, "/**\n * Find highest value\n * @param mixed $value Any comparable value.\n * @param mixed $values Any comparable values.\n * @param array $value_array An array containing the values.\n * @return mixed|mixed\n */")
	ZEND_RAW_FENTRY("clamp", zif_clamp, arginfo_clamp, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_clamp, NULL)
	ZEND_RAW_FENTRY("array_walk", zif_array_walk, arginfo_array_walk, 0, NULL, "/**\n * Apply a user supplied function to every member of an array\n * @param array|object $array The input array.\n * @param callable $callback Typically, callback takes on two parameters. The array parameter\'s value being the first, and the keyindex second.\n * @param mixed $arg If the optional arg parameter is supplied, it will be passed as the third parameter to the callback.\n * @return true\n */")
	ZEND_RAW_FENTRY("array_walk_recursive", zif_array_walk_recursive, arginfo_array_walk_recursive, 0, NULL, "/**\n * Apply a user function recursively to every member of an array\n * @param array|object $array The input array.\n * @param callable $callback Typically, callback takes on two parameters. The array parameter\'s value being the first, and the keyindex second.\n * @param mixed $arg If the optional arg parameter is supplied, it will be passed as the third parameter to the callback.\n * @return true\n */")
	ZEND_RAW_FENTRY("in_array", zif_in_array, arginfo_in_array, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_in_array, "/**\n * Checks if a value exists in an array\n * @param mixed $needle The searched value.\n * @param array $haystack The array.\n * @param bool $strict If the third parameter strict is set to true then the in_array function will also check the types of the needle in the haystack.\n * @return bool\n */")
	ZEND_RAW_FENTRY("array_search", zif_array_search, arginfo_array_search, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Searches the array for a given value and returns the first corresponding key if successful\n * @param mixed $needle The searched value.\n * @param array $haystack The array.\n * @param bool $strict If the third parameter strict is set to true then the array_search function will search for identical elements in the haystack. This means it will also perform a strict type comparison of the needle in the haystack, and objects must be the same instance.\n * @return int|string|false\n */")
	ZEND_RAW_FENTRY("extract", zif_extract, arginfo_extract, 0, NULL, "/**\n * Import variables into the current symbol table from an array\n * @param array $array An associative array. This function treats keys as variable names and values as variable values.  For each keyvalue pair it will create a variable in the current symbol table, subject to flags and prefix parameters.\n * @param int $flags The way invalidnumeric keys and collisions are treated is determined by the extraction flags. It can be one of the following values: EXTR_OVERWRITE If there is a collision, overwrite the existing variable. EXTR_SKIP If there is a collision, don\'t overwrite the existing variable. EXTR_PREFIX_SAME If there is a collision, prefix the variable name with prefix. EXTR_PREFIX_ALL Prefix all variable names with prefix. EXTR_PREFIX_INVALID Only prefix invalidnumeric variable names with prefix. EXTR_IF_EXISTS Only overwrite the variable if it already exists in the current symbol table, otherwise do nothing.  This is useful for defining a list of valid variables and then extracting only those variables you have defined out of $_REQUEST, for example. EXTR_PREFIX_IF_EXISTS Only create prefixed variable names if the non-prefixed version of the same variable exists in the current symbol table. EXTR_REFS Extracts variables as references. This effectively means that the values of the imported variables are still referencing the values of the array parameter. You can use this flag on its own or combine it with any other flag by OR\'ing the flags.\n * @param string $prefix Note that prefix is only required if flags is EXTR_PREFIX_SAME, EXTR_PREFIX_ALL, EXTR_PREFIX_INVALID or EXTR_PREFIX_IF_EXISTS. If the prefixed result is not a valid variable name, it is not imported into the symbol table. Prefixes are automatically separated from the array key by an underscore character.\n * @return int\n */")
	ZEND_RAW_FENTRY("compact", zif_compact, arginfo_compact, 0, NULL, "/**\n * Create array containing variables and their values\n * @param array|string $var_name compact takes a variable number of parameters. Each parameter can be either a string containing the name of the variable, or an array of variable names.  The array can contain other arrays of variable names inside it; compact handles it recursively.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_fill", zif_array_fill, arginfo_array_fill, 0, NULL, "/**\n * Fill an array with values\n * @param int $start_index The first index of the returned array.\n * @param int $count Number of elements to insert. Must be greater than or equal to zero, and less than or equal to 2147483647.\n * @param mixed $value Value to use for filling\n * @return array\n */")
	ZEND_RAW_FENTRY("array_fill_keys", zif_array_fill_keys, arginfo_array_fill_keys, 0, NULL, "/**\n * Fill an array with values, specifying keys\n * @param array $keys Array of values that will be used as keys. Illegal values for key will be converted to string.\n * @param mixed $value Value to use for filling\n * @return array\n */")
	ZEND_RAW_FENTRY("range", zif_range, arginfo_range, 0, NULL, "/**\n * Create an array containing a range of elements\n * @param string|int|float $start First value of the sequence.\n * @param string|int|float $end Last possible value of the sequence.\n * @param int|float $step step indicates by how much is the produced sequence progressed between values of the sequence.\n * @return array\n */")
	ZEND_RAW_FENTRY("shuffle", zif_shuffle, arginfo_shuffle, 0, NULL, "/**\n * Shuffle an array\n * @param array $array The array.\n * @return true\n */")
	ZEND_RAW_FENTRY("array_pop", zif_array_pop, arginfo_array_pop, 0, NULL, "/**\n * Pop the element off the end of array\n * @param array $array The array to get the value from.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_shift", zif_array_shift, arginfo_array_shift, 0, NULL, "/**\n * Shift an element off the beginning of array\n * @param array $array The input array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_unshift", zif_array_unshift, arginfo_array_unshift, 0, NULL, "/**\n * Prepend one or more elements to the beginning of an array\n * @param array $array The input array.\n * @param mixed $values The values to prepend.\n * @return int\n */")
	ZEND_RAW_FENTRY("array_splice", zif_array_splice, arginfo_array_splice, 0, NULL, "/**\n * Remove a portion of the array and replace it with something else\n * @param array $array The input array.\n * @param int $offset If offset is positive then the start of the removed portion is at that offset from the beginning of the array array.\n * @param int|null $length If length is omitted, removes everything from offset to the end of the array.\n * @param mixed $replacement If replacement array is specified, then the removed elements are replaced with elements from this array.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_slice", zif_array_slice, arginfo_array_slice, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Extract a slice of the array\n * @param array $array The input array.\n * @param int $offset If offset is non-negative, the sequence will start at that offset in the array.\n * @param int|null $length If length is given and is positive, then the sequence will have up to that many elements in it.\n * @param bool $preserve_keys array_slice will reorder and reset the integer array indices by default. This behaviour can be changed by setting preserve_keys to true. String keys are always preserved, regardless of this parameter.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_merge", zif_array_merge, arginfo_array_merge, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Merge one or more arrays\n * @param array $arrays Variable list of arrays to merge.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_merge_recursive", zif_array_merge_recursive, arginfo_array_merge_recursive, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Merge one or more arrays recursively\n * @param array $arrays Variable list of arrays to recursively merge.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_replace", zif_array_replace, arginfo_array_replace, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Replaces elements from passed arrays into the first array\n * @param array $array The array in which elements are replaced.\n * @param array $replacements Arrays from which elements will be extracted. Values from later arrays overwrite the previous values.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_replace_recursive", zif_array_replace_recursive, arginfo_array_replace_recursive, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Replaces elements from passed arrays into the first array recursively\n * @param array $array The array in which elements are replaced.\n * @param array $replacements Arrays from which elements will be extracted.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_keys", zif_array_keys, arginfo_array_keys, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return all the keys or a subset of the keys of an array\n * @param array $array An array containing keys to return.\n * @param mixed $filter_value If specified, then only keys containing this value are returned.\n * @param bool $strict Determines if strict comparison (===) should be used during the search.\n * @return array|array\n */")
	ZEND_RAW_FENTRY("array_key_first", zif_array_key_first, arginfo_array_key_first, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Gets the first key of an array\n * @return int|string|null\n */")
	ZEND_RAW_FENTRY("array_key_last", zif_array_key_last, arginfo_array_key_last, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Gets the last key of an array\n * @return int|string|null\n */")
	ZEND_RAW_FENTRY("array_first", zif_array_first, arginfo_array_first, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Gets the first value of an array\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_last", zif_array_last, arginfo_array_last, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Gets the last value of an array\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_values", zif_array_values, arginfo_array_values, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return all the values of an array\n * @param array $array The array.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_count_values", zif_array_count_values, arginfo_array_count_values, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Counts the occurrences of each distinct value in an array\n * @param array $array The array of values to count\n * @return array\n */")
	ZEND_RAW_FENTRY("array_column", zif_array_column, arginfo_array_column, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return the values from a single column in the input array\n * @param array $array A multi-dimensional array or an array of objects from which to pull a column of values from. If an array of objects is provided, then public properties can be directly pulled. In order for protected or private properties to be pulled, the class must implement both the __get and __isset magic methods.\n * @param int|string|null $column_key The column of values to return. This value may be an integer key of the column you wish to retrieve, or it may be a string key name for an associative array or property name. It may also be null to return complete arrays or objects (this is useful together with index_key to reindex the array).\n * @param int|string|null $index_key The column to use as the indexkeys for the returned array. This value may be the integer key of the column, or it may be the string key name. The value is cast as usual for array keys (however, prior to PHP 8.0.0, objects supporting conversion to string were also allowed).\n * @return array\n */")
	ZEND_RAW_FENTRY("array_reverse", zif_array_reverse, arginfo_array_reverse, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return an array with elements in reverse order\n * @param array $array The input array.\n * @param bool $preserve_keys If set to true numeric keys are preserved. Non-numeric keys are not affected by this setting and will always be preserved.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_pad", zif_array_pad, arginfo_array_pad, 0, NULL, "/**\n * Pad array to the specified length with a value\n * @param array $array Initial array of values to pad.\n * @param int $length New size of the array.\n * @param mixed $value Value to pad if array is less than length.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_flip", zif_array_flip, arginfo_array_flip, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Exchanges all keys with their associated values in an array\n * @param array $array An array of keyvalue pairs to be flipped.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_change_key_case", zif_array_change_key_case, arginfo_array_change_key_case, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Changes the case of all keys in an array\n * @param array $array The array to work on\n * @param int $case Either CASE_UPPER or CASE_LOWER (default)\n * @return array\n */")
	ZEND_RAW_FENTRY("array_unique", zif_array_unique, arginfo_array_unique, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Removes duplicate values from an array\n * @param array $array The input array.\n * @param int $flags The optional second parameter flags may be used to modify the comparison behavior using these values:\n * @return array\n */")
	ZEND_RAW_FENTRY("array_intersect_key", zif_array_intersect_key, arginfo_array_intersect_key, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Computes the intersection of arrays using keys for comparison\n * @param array $array The array with master keys to check.\n * @param array $arrays Arrays to compare keys against.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_intersect_ukey", zif_array_intersect_ukey, arginfo_array_intersect_ukey, 0, NULL, "/**\n * Computes the intersection of arrays using a callback function on the keys for comparison\n * @param array $array Initial array for comparison of the arrays.\n * @param array $arrays Arrays to compare keys against.\n * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_intersect", zif_array_intersect, arginfo_array_intersect, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Computes the intersection of arrays\n * @param array $array The array with master values to check.\n * @param array $arrays Arrays to compare values against.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_uintersect", zif_array_uintersect, arginfo_array_uintersect, 0, NULL, "/**\n * Computes the intersection of arrays, compares data by a callback function\n * @param array $array The first array.\n * @param array $arrays Arrays to compare against.\n * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_intersect_assoc", zif_array_intersect_assoc, arginfo_array_intersect_assoc, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Computes the intersection of arrays with additional index check\n * @param array $array The array with master values to check.\n * @param array $arrays Arrays to compare values against.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_uintersect_assoc", zif_array_uintersect_assoc, arginfo_array_uintersect_assoc, 0, NULL, "/**\n * Computes the intersection of arrays with additional index check, compares data by a callback function\n * @param array $array The first array.\n * @param array $arrays Arrays to compare against.\n * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_intersect_uassoc", zif_array_intersect_uassoc, arginfo_array_intersect_uassoc, 0, NULL, "/**\n * Computes the intersection of arrays with additional index check, compares indexes by a callback function\n * @param array $array Initial array for comparison of the arrays.\n * @param array $arrays Arrays to compare keys against.\n * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_uintersect_uassoc", zif_array_uintersect_uassoc, arginfo_array_uintersect_uassoc, 0, NULL, "/**\n * Computes the intersection of arrays with additional index check, compares data and indexes by separate callback functions\n * @param array $array1 The first array.\n * @param array $arrays Further arrays.\n * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @param callable $key_compare_func Key comparison callback function.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_diff_key", zif_array_diff_key, arginfo_array_diff_key, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Computes the difference of arrays using keys for comparison\n * @param array $array The array to compare from\n * @param array $arrays Arrays to compare against\n * @return array\n */")
	ZEND_RAW_FENTRY("array_diff_ukey", zif_array_diff_ukey, arginfo_array_diff_ukey, 0, NULL, "/**\n * Computes the difference of arrays using a callback function on the keys for comparison\n * @param array $array The array to compare from\n * @param array $arrays Arrays to compare against\n * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_diff", zif_array_diff, arginfo_array_diff, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Computes the difference of arrays\n * @param array $array The array to compare from\n * @param array $arrays Arrays to compare against\n * @return array\n */")
	ZEND_RAW_FENTRY("array_udiff", zif_array_udiff, arginfo_array_udiff, 0, NULL, "/**\n * Computes the difference of arrays by using a callback function for data comparison\n * @param array $array The first array.\n * @param array $arrays Arrays to compare against.\n * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_diff_assoc", zif_array_diff_assoc, arginfo_array_diff_assoc, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Computes the difference of arrays with additional index check\n * @param array $array The array to compare from\n * @param array $arrays Arrays to compare against\n * @return array\n */")
	ZEND_RAW_FENTRY("array_diff_uassoc", zif_array_diff_uassoc, arginfo_array_diff_uassoc, 0, NULL, "/**\n * Computes the difference of arrays with additional index check which is performed by a user supplied callback function\n * @param array $array The array to compare from\n * @param array $arrays Arrays to compare against\n * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_udiff_assoc", zif_array_udiff_assoc, arginfo_array_udiff_assoc, 0, NULL, "/**\n * Computes the difference of arrays with additional index check, compares data by a callback function\n * @param array $array The first array.\n * @param array $arrays Arrays to compare against.\n * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_udiff_uassoc", zif_array_udiff_uassoc, arginfo_array_udiff_uassoc, 0, NULL, "/**\n * Computes the difference of arrays with additional index check, compares data and indexes by a callback function\n * @param array $array The first array.\n * @param array $arrays Arrays to compare against.\n * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.\n * @param callable $key_compare_func The comparison of keys (indices) is done also by the callback function key_compare_func. This behaviour is unlike what array_udiff_assoc does, since the latter compares the indices by using an internal function.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_multisort", zif_array_multisort, arginfo_array_multisort, 0, NULL, "/**\n * Sort multiple or multi-dimensional arrays\n * @param array $array1 An array being sorted.\n * @param mixed $array1_sort_order The order used to sort the previous array argument. Either SORT_ASC to sort ascendingly or SORT_DESC to sort descendingly.\n * @param mixed $array1_sort_flags Sort options for the previous array argument:\n * @param mixed $rest More arrays, optionally followed by sort order and flags. Only elements corresponding to equivalent elements in previous arrays are compared. In other words, the sort is lexicographical.\n * @return bool\n */")
	ZEND_RAW_FENTRY("array_rand", zif_array_rand, arginfo_array_rand, 0, NULL, "/**\n * Pick one or more random keys out of an array\n * @param array $array The input array. Cannot be empty.\n * @param int $num Specifies how many entries should be picked. Must be greater than zero, and less than or equal to the length of array\n * @return int|string|array\n */")
	ZEND_RAW_FENTRY("array_sum", zif_array_sum, arginfo_array_sum, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Calculate the sum of values in an array\n * @param array $array The input array.\n * @return int|float\n */")
	ZEND_RAW_FENTRY("array_product", zif_array_product, arginfo_array_product, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Calculate the product of values in an array\n * @param array $array The array.\n * @return int|float\n */")
	ZEND_RAW_FENTRY("array_reduce", zif_array_reduce, arginfo_array_reduce, 0, NULL, "/**\n * Iteratively reduce the array to a single value using a callback function\n * @param array $array The input array.\n * @param callable $callback Holds the return value of the previous iteration; in the case of the first iteration it instead holds the value of initial.\n * @param mixed $initial If the optional initial is available, it will be used at the beginning of the process, or as a final result in case the array is empty.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_filter", zif_array_filter, arginfo_array_filter, 0, NULL, "/**\n * Filters elements of an array using a callback function\n * @param array $array The array to iterate over\n * @param callable|null $callback The callback function to use\n * @param int $mode Flag determining what arguments are sent to callback: ARRAY_FILTER_USE_KEY - pass key as the only argument to callback instead of the value ARRAY_FILTER_USE_BOTH - pass both value and key as arguments to callback instead of the value Default is 0 which will pass value as the only argument to callback instead.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_find", zif_array_find, arginfo_array_find, 0, NULL, "/**\n * Returns the first element satisfying a callback function\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_find_key", zif_array_find_key, arginfo_array_find_key, 0, NULL, "/**\n * Returns the key of the first element satisfying a callback function\n * @return mixed\n */")
	ZEND_RAW_FENTRY("array_any", zif_array_any, arginfo_array_any, 0, NULL, "/**\n * Checks if at least one array element satisfies a callback function\n * @return bool\n */")
	ZEND_RAW_FENTRY("array_all", zif_array_all, arginfo_array_all, 0, NULL, "/**\n * Checks if all array elements satisfy a callback function\n * @return bool\n */")
	ZEND_RAW_FENTRY("array_map", zif_array_map, arginfo_array_map, 0, NULL, "/**\n * Applies the callback to the elements of the given arrays\n * @param callable|null $callback A callable to run for each element in each array.\n * @param array $array An array to run through the callback function.\n * @param array $arrays Supplementary variable list of array arguments to run through the callback function.\n * @return array\n */")
	ZEND_RAW_FENTRY("array_key_exists", zif_array_key_exists, arginfo_array_key_exists, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Checks if the given key or index exists in the array\n * @param string|int|float|bool|resource|null $key Value to check.\n * @param array $array An array with keys to check.\n * @return bool\n */")
	ZEND_RAW_FENTRY("key_exists", zif_array_key_exists, arginfo_key_exists, 0, NULL, "/**\n * Alias array_key_exists\n */")
	ZEND_RAW_FENTRY("array_chunk", zif_array_chunk, arginfo_array_chunk, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Split an array into chunks\n * @param array $array The array to work on\n * @param int $length The size of each chunk\n * @param bool $preserve_keys When set to true keys will be preserved. Default is false which will reindex the chunk numerically\n * @return array\n */")
	ZEND_RAW_FENTRY("array_combine", zif_array_combine, arginfo_array_combine, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Creates an array by using one array for keys and another for its values\n * @param array $keys Array of keys to be used. Illegal values for key will be converted to string.\n * @param array $values Array of values to be used\n * @return array\n */")
	ZEND_RAW_FENTRY("array_is_list", zif_array_is_list, arginfo_array_is_list, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Checks whether a given array is a list\n * @param array $array The array being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("base64_encode", zif_base64_encode, arginfo_base64_encode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Encodes data with MIME base64\n * @param string $string The data to encode.\n * @return string\n */")
	ZEND_RAW_FENTRY("base64_decode", zif_base64_decode, arginfo_base64_decode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decodes data encoded with MIME base64\n * @param string $string The encoded data.\n * @param bool $strict If the strict parameter is set to true then the base64_decode function will return false if the input contains character from outside the base64 alphabet. Otherwise invalid characters will be silently discarded.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("constant", zif_constant, arginfo_constant, 0, NULL, "/**\n * Returns the value of a constant\n * @param string $name The constant name.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("ip2long", zif_ip2long, arginfo_ip2long, 0, NULL, "/**\n * Converts a string containing an (IPv4) Internet Protocol dotted address into a long integer\n * @param string $ip A standard format address.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("long2ip", zif_long2ip, arginfo_long2ip, 0, NULL, "/**\n * Converts a long integer address into a string in (IPv4) Internet standard dotted format\n * @param int $ip A proper address representation in long integer.\n * @return string\n */")
	ZEND_RAW_FENTRY("getenv", zif_getenv, arginfo_getenv, 0, NULL, "/**\n * Gets the value of a single or all environment variables\n * @param string|null $name The variable name as a string or null.\n * @param bool $local_only When set to true, only local environment variables are returned, set by the operating system or putenv. It only has an effect when name is a string.\n * @return string|array|false\n */")
#if defined(HAVE_PUTENV)
	ZEND_RAW_FENTRY("putenv", zif_putenv, arginfo_putenv, 0, NULL, "/**\n * Sets the value of an environment variable\n * @param string $assignment The setting, like \"FOO=BAR\"\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("getopt", zif_getopt, arginfo_getopt, 0, NULL, "/**\n * Gets options from the command line argument list\n * @return array|false\n */")
	ZEND_RAW_FENTRY("flush", zif_flush, arginfo_flush, 0, NULL, "/**\n * Flush system output buffer\n * @return void\n */")
	ZEND_RAW_FENTRY("sleep", zif_sleep, arginfo_sleep, 0, NULL, "/**\n * Delay execution\n * @param int $seconds Halt time in seconds (must be greater than or equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("usleep", zif_usleep, arginfo_usleep, 0, NULL, "/**\n * Delay execution in microseconds\n * @param int $microseconds Halt time in microseconds. A microsecond is one millionth of a second.\n * @return void\n */")
#if defined(HAVE_NANOSLEEP)
	ZEND_RAW_FENTRY("time_nanosleep", zif_time_nanosleep, arginfo_time_nanosleep, 0, NULL, "/**\n * Delay for a number of seconds and nanoseconds\n * @param int $seconds Must be a non-negative integer.\n * @param int $nanoseconds Must be a non-negative integer less than 1 billion.\n * @return array|bool\n */")
	ZEND_RAW_FENTRY("time_sleep_until", zif_time_sleep_until, arginfo_time_sleep_until, 0, NULL, "/**\n * Make the script sleep until the specified time\n * @param float $timestamp The timestamp when the script should wake.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("get_current_user", zif_get_current_user, arginfo_get_current_user, 0, NULL, "/**\n * Gets the name of the owner of the current PHP script\n * @return string\n */")
	ZEND_RAW_FENTRY("get_cfg_var", zif_get_cfg_var, arginfo_get_cfg_var, 0, NULL, "/**\n * Gets the value of a PHP configuration option\n * @param string $option The configuration option name.\n * @return string|array|false\n */")
	ZEND_RAW_FENTRY("error_log", zif_error_log, arginfo_error_log, 0, NULL, "/**\n * Send an error message to the defined error handling routines\n * @param string $message The error message that should be logged.\n * @param int $message_type Says where the error should go. The possible message types are as follows:\n * @param string|null $destination The destination. Its meaning depends on the message_type parameter as described above.\n * @param string|null $additional_headers The extra headers. It\'s used when the message_type parameter is set to 1. This message type uses the same internal function as mail does.\n * @return bool\n */")
	ZEND_RAW_FENTRY("error_get_last", zif_error_get_last, arginfo_error_get_last, 0, NULL, "/**\n * Get the last occurred error\n * @return array|null\n */")
	ZEND_RAW_FENTRY("error_clear_last", zif_error_clear_last, arginfo_error_clear_last, 0, NULL, "/**\n * Clear the most recent error\n * @return void\n */")
	ZEND_RAW_FENTRY("call_user_func", zif_call_user_func, arginfo_call_user_func, 0, NULL, "/**\n * Call the callback given by the first parameter\n * @param callable $callback The callable to be called.\n * @param mixed $args Zero or more parameters to be passed to the callback.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("call_user_func_array", zif_call_user_func_array, arginfo_call_user_func_array, 0, NULL, "/**\n * Call a callback with an array of parameters\n * @param callable $callback The callable to be called.\n * @param array $args The parameters to be passed to the callback, as an array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("forward_static_call", zif_forward_static_call, arginfo_forward_static_call, 0, NULL, "/**\n * Call a static method\n * @param callable $callback The function or method to be called. This parameter may be an array, with the name of the class, and the method, or a string, with a function name.\n * @param mixed $args Zero or more parameters to be passed to the function.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("forward_static_call_array", zif_forward_static_call_array, arginfo_forward_static_call_array, 0, NULL, "/**\n * Call a static method and pass the arguments as array\n * @param callable $callback The function or method to be called. This parameter may be an array, with the name of the class, and the method, or a string, with a function name.\n * @param array $args One parameter, gathering all the method parameter in one array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("register_shutdown_function", zif_register_shutdown_function, arginfo_register_shutdown_function, 0, NULL, "/**\n * Register a function for execution on shutdown\n * @param callable $callback The shutdown callback to register.\n * @param mixed $args It is possible to pass parameters to the shutdown function by passing additional parameters.\n * @return void\n */")
	ZEND_RAW_FENTRY("highlight_file", zif_highlight_file, arginfo_highlight_file, 0, NULL, "/**\n * Syntax highlighting of a file\n * @param string $filename Path to the PHP file to be highlighted.\n * @param bool $return Set this parameter to true to make this function return the highlighted code.\n * @return string|bool\n */")
	ZEND_RAW_FENTRY("show_source", zif_highlight_file, arginfo_show_source, 0, NULL, "/**\n * Alias highlight_file\n */")
	ZEND_RAW_FENTRY("php_strip_whitespace", zif_php_strip_whitespace, arginfo_php_strip_whitespace, 0, NULL, "/**\n * Return source with stripped comments and whitespace\n * @param string $filename Path to the PHP file.\n * @return string\n */")
	ZEND_RAW_FENTRY("highlight_string", zif_highlight_string, arginfo_highlight_string, 0, NULL, "/**\n * Syntax highlighting of a string\n * @param string $string The PHP code to be highlighted. This should include the opening tag.\n * @param bool $return Set this parameter to true to make this function return the highlighted code.\n * @return string|true\n */")
	ZEND_RAW_FENTRY("ini_get", zif_ini_get, arginfo_ini_get, 0, NULL, "/**\n * Gets the value of a configuration option\n * @param string $option The configuration option name.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("ini_get_all", zif_ini_get_all, arginfo_ini_get_all, 0, NULL, "/**\n * Gets all configuration options\n * @param string|null $extension An optional extension name. If not null or the string core, the function returns only options specific for that extension.\n * @param bool $details Retrieve details settings or only the current value for each setting. Default is true (retrieve details).\n * @return array|false\n */")
	ZEND_RAW_FENTRY("ini_set", zif_ini_set, arginfo_ini_set, 0, NULL, "/**\n * Sets the value of a configuration option\n * @param string|int|float|bool|null $value The new value for the option.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("ini_alter", zif_ini_set, arginfo_ini_alter, 0, NULL, "/**\n * Alias ini_set\n */")
	ZEND_RAW_FENTRY("ini_restore", zif_ini_restore, arginfo_ini_restore, 0, NULL, "/**\n * Restores the value of a configuration option\n * @param string $option The configuration option name.\n * @return void\n */")
	ZEND_RAW_FENTRY("ini_parse_quantity", zif_ini_parse_quantity, arginfo_ini_parse_quantity, 0, NULL, "/**\n * Get interpreted size from ini shorthand syntax\n * @param string $shorthand Ini shorthand to parse, must be a number followed by an optional multiplier. The following multipliers are supported: kK (1024), mM (1048576), gG (1073741824). The number can be a decimal, hex (prefixed with 0x or 0X), octal (prefixed with 0o, 0O or 0) or binary (prefixed with 0b or 0B)\n * @return int\n */")
	ZEND_RAW_FENTRY("set_include_path", zif_set_include_path, arginfo_set_include_path, 0, NULL, "/**\n * Sets the include_path configuration option\n * @param string $include_path The new value for the include_path\n * @return string|false\n */")
	ZEND_RAW_FENTRY("get_include_path", zif_get_include_path, arginfo_get_include_path, 0, NULL, "/**\n * Gets the current include_path configuration option\n * @return string|false\n */")
	ZEND_RAW_FENTRY("print_r", zif_print_r, arginfo_print_r, 0, NULL, "/**\n * Prints human-readable information about a variable\n * @param mixed $value The expression to be printed.\n * @param bool $return If you would like to capture the output of print_r, use the return parameter.  When this parameter is set to true, print_r will return the information rather than print it.\n * @return string|true\n */")
	ZEND_RAW_FENTRY("connection_aborted", zif_connection_aborted, arginfo_connection_aborted, 0, NULL, "/**\n * Check whether client disconnected\n * @return int\n */")
	ZEND_RAW_FENTRY("connection_status", zif_connection_status, arginfo_connection_status, 0, NULL, "/**\n * Returns connection status bitfield\n * @return int\n */")
	ZEND_RAW_FENTRY("ignore_user_abort", zif_ignore_user_abort, arginfo_ignore_user_abort, 0, NULL, "/**\n * Set whether a client disconnect should abort script execution\n * @param bool|null $enable If set and not null, this function will set the ignore_user_abort ini setting to the given enable. Otherwise, this function will only return the previous setting without changing it.\n * @return int\n */")
#if defined(HAVE_GETSERVBYNAME)
	ZEND_RAW_FENTRY("getservbyname", zif_getservbyname, arginfo_getservbyname, 0, NULL, "/**\n * Get port number associated with an Internet service and protocol\n * @param string $service The Internet service name, as a string.\n * @param string $protocol protocol is either \"tcp\" or \"udp\" (in lowercase).\n * @return int|false\n */")
#endif
#if defined(HAVE_GETSERVBYPORT)
	ZEND_RAW_FENTRY("getservbyport", zif_getservbyport, arginfo_getservbyport, 0, NULL, "/**\n * Get Internet service which corresponds to port and protocol\n * @param int $port The port number.\n * @param string $protocol protocol is either \"tcp\" or \"udp\" (in lowercase).\n * @return string|false\n */")
#endif
#if defined(HAVE_GETPROTOBYNAME)
	ZEND_RAW_FENTRY("getprotobyname", zif_getprotobyname, arginfo_getprotobyname, 0, NULL, "/**\n * Get protocol number associated with protocol name\n * @param string $protocol The protocol name.\n * @return int|false\n */")
#endif
#if defined(HAVE_GETPROTOBYNUMBER)
	ZEND_RAW_FENTRY("getprotobynumber", zif_getprotobynumber, arginfo_getprotobynumber, 0, NULL, "/**\n * Get protocol name associated with protocol number\n * @param int $protocol The protocol number.\n * @return string|false\n */")
#endif
	ZEND_RAW_FENTRY("register_tick_function", zif_register_tick_function, arginfo_register_tick_function, 0, NULL, "/**\n * Register a function for execution on each tick\n * @param callable $callback The function to register.\n * @return bool\n */")
	ZEND_RAW_FENTRY("unregister_tick_function", zif_unregister_tick_function, arginfo_unregister_tick_function, 0, NULL, "/**\n * De-register a function for execution on each tick\n * @param callable $callback The function to de-register.\n * @return void\n */")
	ZEND_RAW_FENTRY("is_uploaded_file", zif_is_uploaded_file, arginfo_is_uploaded_file, 0, NULL, "/**\n * Tells whether the file was uploaded via HTTP POST\n * @param string $filename The filename being checked.\n * @return bool\n */")
	ZEND_RAW_FENTRY("move_uploaded_file", zif_move_uploaded_file, arginfo_move_uploaded_file, 0, NULL, "/**\n * Moves an uploaded file to a new location\n * @param string $from The filename of the uploaded file.\n * @param string $to The destination of the moved file.\n * @return bool\n */")
	ZEND_RAW_FENTRY("parse_ini_file", zif_parse_ini_file, arginfo_parse_ini_file, 0, NULL, "/**\n * Parse a configuration file\n * @param string $filename The filename of the ini file being parsed. If a relative path is used, it is evaluated relative to the current working directory, then the include_path.\n * @param bool $process_sections By setting the process_sections parameter to true, you get a multidimensional array, with the section names and settings included. The default for process_sections is false\n * @param int $scanner_mode Can either be INI_SCANNER_NORMAL (default) or INI_SCANNER_RAW. If INI_SCANNER_RAW is supplied, then option values will not be parsed.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("parse_ini_string", zif_parse_ini_string, arginfo_parse_ini_string, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Parse a configuration string\n * @param string $ini_string The contents of the ini file being parsed.\n * @param bool $process_sections By setting the process_sections parameter to true, you get a multidimensional array, with the section names and settings included. The default for process_sections is false\n * @param int $scanner_mode Can either be INI_SCANNER_NORMAL (default) or INI_SCANNER_RAW. If INI_SCANNER_RAW is supplied, then option values will not be parsed.\n * @return array|false\n */")
#if ZEND_DEBUG
	ZEND_FE(config_get_hash, arginfo_config_get_hash)
#endif
#if defined(HAVE_GETLOADAVG)
	ZEND_RAW_FENTRY("sys_getloadavg", zif_sys_getloadavg, arginfo_sys_getloadavg, 0, NULL, "/**\n * Gets system load average\n * @return array|false\n */")
#endif
	ZEND_RAW_FENTRY("get_browser", zif_get_browser, arginfo_get_browser, 0, NULL, "/**\n * Tells what the user\'s browser is capable of\n * @param string|null $user_agent The User Agent to be analyzed. By default, the value of HTTP User-Agent header is used; however, you can alter this (i.e., look up another browser\'s info) by passing this parameter.\n * @param bool $return_array If set to true, this function will return an array instead of an object.\n * @return object|array|false\n */")
	ZEND_RAW_FENTRY("crc32", zif_crc32, arginfo_crc32, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Calculates the crc32 polynomial of a string\n * @param string $string The data.\n * @return int\n */")
	ZEND_RAW_FENTRY("crypt", zif_crypt, arginfo_crypt, 0, NULL, "/**\n * One-way string hashing\n * @param string $string The string to be hashed.\n * @param string $salt A salt string to base the hashing on. If not provided, the behaviour is defined by the algorithm implementation and can lead to unexpected results.\n * @return string\n */")
#if defined(HAVE_STRPTIME)
	ZEND_RAW_FENTRY("strptime", zif_strptime, arginfo_strptime, ZEND_ACC_DEPRECATED, NULL, NULL)
#endif
#if defined(HAVE_GETHOSTNAME)
	ZEND_RAW_FENTRY("gethostname", zif_gethostname, arginfo_gethostname, 0, NULL, "/**\n * Gets the host name\n * @return string|false\n */")
#endif
	ZEND_RAW_FENTRY("gethostbyaddr", zif_gethostbyaddr, arginfo_gethostbyaddr, 0, NULL, "/**\n * Get the Internet host name corresponding to a given IP address\n * @param string $ip The host IP address.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gethostbyname", zif_gethostbyname, arginfo_gethostbyname, 0, NULL, "/**\n * Get the IPv4 address corresponding to a given Internet host name\n * @param string $hostname The host name.\n * @return string\n */")
	ZEND_RAW_FENTRY("gethostbynamel", zif_gethostbynamel, arginfo_gethostbynamel, 0, NULL, "/**\n * Get a list of IPv4 addresses corresponding to a given Internet host\n * name\n * @param string $hostname The host name.\n * @return array|false\n */")
#if (defined(PHP_WIN32) || defined(HAVE_DNS_SEARCH_FUNC))
	ZEND_RAW_FENTRY("dns_check_record", zif_dns_check_record, arginfo_dns_check_record, 0, NULL, "/**\n * Alias checkdnsrr\n */")
	ZEND_RAW_FENTRY("checkdnsrr", zif_dns_check_record, arginfo_checkdnsrr, 0, NULL, "/**\n * Check DNS records corresponding to a given Internet host name or IP address\n * @param string $hostname hostname may either be the IP address in dotted-quad notation or the host name.\n * @param string $type type may be any one of: A, MX, NS, SOA, PTR, CNAME, AAAA, A6, SRV, NAPTR, TXT or ANY.\n * @return bool\n */")
	ZEND_RAW_FENTRY("dns_get_record", zif_dns_get_record, arginfo_dns_get_record, 0, NULL, "/**\n * Fetch DNS Resource Records associated with a hostname\n * @param string $hostname hostname should be a valid DNS hostname such as \"www.example.com\". Reverse lookups can be generated using in-addr.arpa notation, but gethostbyaddr is more suitable for the majority of reverse lookups.\n * @param int $type By default, dns_get_record will search for any resource records associated with hostname. To limit the query, use one of the DNS_* constants.\n * @param array $authoritative_name_servers Passed by reference and, if given, will be populated with Resource Records for the Authoritative Name Servers.\n * @param array $additional_records Passed by reference and, if given, will be populated with any Additional Records.\n * @param bool $raw The type will be interpreted as a raw DNS type ID (the DNS_* constants cannot be used). The return value will contain a data key, which needs to be manually parsed.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("dns_get_mx", zif_dns_get_mx, arginfo_dns_get_mx, 0, NULL, "/**\n * Alias getmxrr\n */")
	ZEND_RAW_FENTRY("getmxrr", zif_dns_get_mx, arginfo_getmxrr, 0, NULL, "/**\n * Get MX records corresponding to a given Internet host name\n * @param string $hostname The Internet host name.\n * @param array $hosts A list of the MX records found is placed into the array hosts.\n * @param array $weights If the weights array is given, it will be filled with the weight information gathered.\n * @return bool\n */")
#endif
#if (defined(PHP_WIN32) || defined(HAVE_GETIFADDRS) || defined(__PASE__))
	ZEND_RAW_FENTRY("net_get_interfaces", zif_net_get_interfaces, arginfo_net_get_interfaces, 0, NULL, "/**\n * Get network interfaces\n * @return array|false\n */")
#endif
#if defined(HAVE_FTOK)
	ZEND_RAW_FENTRY("ftok", zif_ftok, arginfo_ftok, 0, NULL, "/**\n * Convert a pathname and a project identifier to a System V IPC key\n * @return int\n */")
#endif
	ZEND_RAW_FENTRY("hrtime", zif_hrtime, arginfo_hrtime, 0, NULL, "/**\n * Get the system\'s high resolution time\n * @param bool $as_number Whether the high resolution time should be returned as array or number.\n * @return array|int|float|false\n */")
	ZEND_RAW_FENTRY("md5", zif_md5, arginfo_md5, 0, NULL, "/**\n * Calculate the md5 hash of a string\n * @param string $string The string.\n * @param bool $binary If the optional binary is set to true, then the md5 digest is instead returned in raw binary format with a length of 16.\n * @return string\n */")
	ZEND_RAW_FENTRY("md5_file", zif_md5_file, arginfo_md5_file, 0, NULL, "/**\n * Calculates the md5 hash of a given file\n * @param string $filename The filename\n * @param bool $binary When true, returns the digest in raw binary format with a length of 16.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("getmyuid", zif_getmyuid, arginfo_getmyuid, 0, NULL, "/**\n * Gets PHP script owner\'s UID\n * @return int|false\n */")
	ZEND_RAW_FENTRY("getmygid", zif_getmygid, arginfo_getmygid, 0, NULL, "/**\n * Get PHP script owner\'s GID\n * @return int|false\n */")
	ZEND_RAW_FENTRY("getmypid", zif_getmypid, arginfo_getmypid, 0, NULL, "/**\n * Gets PHP\'s process ID\n * @return int|false\n */")
	ZEND_RAW_FENTRY("getmyinode", zif_getmyinode, arginfo_getmyinode, 0, NULL, "/**\n * Gets the inode of the current script\n * @return int|false\n */")
	ZEND_RAW_FENTRY("getlastmod", zif_getlastmod, arginfo_getlastmod, 0, NULL, "/**\n * Gets time of last page modification\n * @return int|false\n */")
	ZEND_RAW_FENTRY("sha1", zif_sha1, arginfo_sha1, 0, NULL, "/**\n * Calculate the sha1 hash of a string\n * @param string $string The input string.\n * @param bool $binary If the optional binary is set to true, then the sha1 digest is instead returned in raw binary format with a length of 20, otherwise the returned value is a 40-character hexadecimal number.\n * @return string\n */")
	ZEND_RAW_FENTRY("sha1_file", zif_sha1_file, arginfo_sha1_file, 0, NULL, "/**\n * Calculate the sha1 hash of a file\n * @param string $filename The filename of the file to hash.\n * @param bool $binary When true, returns the digest in raw binary format with a length of 20.\n * @return string|false\n */")
#if defined(HAVE_SYSLOG_H)
	ZEND_RAW_FENTRY("openlog", zif_openlog, arginfo_openlog, 0, NULL, "/**\n * Open connection to system logger\n * @param string $prefix The string prefix is added to each message.\n * @param int $flags Bitmask of the following constants: LOG_CONS LOG_NDELAY LOG_ODELAY LOG_NOWAIT LOG_PERROR LOG_PID\n * @param int $facility The facility argument is used to specify what type of program is logging the message. This lets the configuration file specify that messages from different facilities will be handled differently. Must be one of the following constants: LOG_AUTH LOG_AUTHPRIV LOG_CRON LOG_DAEMON LOG_KERN LOG_LOCAL[0-7] LOG_LPR LOG_MAIL LOG_NEWS LOG_SYSLOG LOG_USER LOG_UUCP\n * @return true\n */")
	ZEND_RAW_FENTRY("closelog", zif_closelog, arginfo_closelog, 0, NULL, "/**\n * Close connection to system logger\n * @return true\n */")
	ZEND_RAW_FENTRY("syslog", zif_syslog, arginfo_syslog, 0, NULL, "/**\n * Generate a system log message\n * @param int $priority One of the LOG_EMERG LOG_ALERT LOG_CRIT LOG_ERR LOG_WARNING LOG_NOTICE LOG_INFO LOG_DEBUG constants.\n * @param string $message The message to send.\n * @return true\n */")
#endif
	ZEND_RAW_FENTRY("inet_ntop", zif_inet_ntop, arginfo_inet_ntop, 0, NULL, "/**\n * Converts a packed internet address to a human readable representation\n * @param string $ip A 32bit IPv4, or 128bit IPv6 address.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("inet_pton", zif_inet_pton, arginfo_inet_pton, 0, NULL, "/**\n * Converts a human readable IP address to its packed in_addr representation\n * @param string $ip A human readable IPv4 or IPv6 address.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("metaphone", zif_metaphone, arginfo_metaphone, 0, NULL, "/**\n * Calculate the metaphone key of a string\n * @param string $string The input string.\n * @param int $max_phonemes This parameter restricts the returned metaphone key to max_phonemes characters in length. However, the resulting phonemes are always transcribed completely, so the resulting string length may be slightly longer than max_phonemes. The default value of 0 means no restriction.\n * @return string\n */")
	ZEND_RAW_FENTRY("header", zif_header, arginfo_header, 0, NULL, "/**\n * Send a raw HTTP header\n * @param string $header The header string.\n * @param bool $replace The optional replace parameter indicates whether the header should replace a previous similar header, or add a second header of the same type.  By default it will replace, but if you pass in false as the second argument you can force multiple headers of the same type.  For example:\n * @param int $response_code Forces the HTTP response code to the specified value. Note that this parameter only has an effect if the header is not empty.\n * @return void\n */")
	ZEND_RAW_FENTRY("header_remove", zif_header_remove, arginfo_header_remove, 0, NULL, "/**\n * Remove previously set headers\n * @param string|null $name The header name to be removed. When null, all previously set headers are removed.\n * @return void\n */")
	ZEND_RAW_FENTRY("setrawcookie", zif_setrawcookie, arginfo_setrawcookie, 0, NULL, "/**\n * Send a cookie without urlencoding the cookie value\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("setcookie", zif_setcookie, arginfo_setcookie, 0, NULL, "/**\n * Send a cookie\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("http_response_code", zif_http_response_code, arginfo_http_response_code, 0, NULL, "/**\n * Get or Set the HTTP response code\n * @param int $response_code The optional response_code will set the response code.\n * @return int|bool\n */")
	ZEND_RAW_FENTRY("headers_sent", zif_headers_sent, arginfo_headers_sent, 0, NULL, "/**\n * Checks if or where headers have been sent\n * @param string $filename If the optional filename and line parameters are set, headers_sent will put the PHP source file name and line number where output started in the filename and line variables.\n * @param int $line The line number where the output started.\n * @return bool\n */")
	ZEND_RAW_FENTRY("headers_list", zif_headers_list, arginfo_headers_list, 0, NULL, "/**\n * Returns a list of response headers sent (or ready to send)\n * @return array\n */")
	ZEND_RAW_FENTRY("htmlspecialchars", zif_htmlspecialchars, arginfo_htmlspecialchars, 0, NULL, "/**\n * Convert special characters to HTML entities\n * @param string $string The string being converted.\n * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes, invalid code unit sequences and the used document type. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_IGNORE Silently discard invalid code unit sequences instead of returning an empty string. Using this flag is discouraged as it may have security implications. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_DISALLOWED Replace invalid code points for the given document type with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of leaving them as is. This may be useful, for instance, to ensure the well-formedness of XML documents with embedded external content. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.\n * @param string|null $encoding An optional argument defining the encoding used when converting characters.\n * @param bool $double_encode When double_encode is turned off PHP will not encode existing html entities, the default is to convert everything.\n * @return string\n */")
	ZEND_RAW_FENTRY("htmlspecialchars_decode", zif_htmlspecialchars_decode, arginfo_htmlspecialchars_decode, 0, NULL, "/**\n * Convert special HTML entities back to characters\n * @param string $string The string to decode.\n * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes and which document type to use. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.\n * @return string\n */")
	ZEND_RAW_FENTRY("html_entity_decode", zif_html_entity_decode, arginfo_html_entity_decode, 0, NULL, "/**\n * Convert HTML entities to their corresponding characters\n * @param string $string The input string.\n * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes and which document type to use. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.\n * @param string|null $encoding An optional argument defining the encoding used when converting characters.\n * @return string\n */")
	ZEND_RAW_FENTRY("htmlentities", zif_htmlentities, arginfo_htmlentities, 0, NULL, "/**\n * Convert all applicable characters to HTML entities\n * @param string $string The input string.\n * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes, invalid code unit sequences and the used document type. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_IGNORE Silently discard invalid code unit sequences instead of returning an empty string. Using this flag is discouraged as it may have security implications. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#FFFD; (otherwise) instead of returning an empty string. ENT_DISALLOWED Replace invalid code points for the given document type with a Unicode Replacement Character U+FFFD (UTF-8) or &#FFFD; (otherwise) instead of leaving them as is. This may be useful, for instance, to ensure the well-formedness of XML documents with embedded external content. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.\n * @param string|null $encoding An optional argument defining the encoding used when converting characters.\n * @param bool $double_encode When double_encode is turned off PHP will not encode existing html entities. The default is to convert everything.\n * @return string\n */")
	ZEND_RAW_FENTRY("get_html_translation_table", zif_get_html_translation_table, arginfo_get_html_translation_table, 0, NULL, "/**\n * Returns the translation table used by htmlspecialchars and htmlentities\n * @param int $table Which table to return. Either HTML_ENTITIES or HTML_SPECIALCHARS.\n * @param int $flags A bitmask of one or more of the following flags, which specify which quotes the table will contain as well as which document type the table is for. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Table will contain entities for double-quotes, but not for single-quotes. ENT_QUOTES Table will contain entities for both double and single quotes. ENT_NOQUOTES Table will neither contain entities for single quotes nor for double quotes. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Table for HTML 4.01. ENT_XML1 Table for XML 1. ENT_XHTML Table for XHTML. ENT_HTML5 Table for HTML 5.\n * @param string $encoding Encoding to use. If omitted, the default value for this argument is UTF-8.\n * @return array\n */")
	ZEND_RAW_FENTRY("assert", zif_assert, arginfo_assert, 0, NULL, "/**\n * Checks an assertion\n * @param mixed $assertion This is any expression that returns a value, which will be executed and the result is used to indicate whether the assertion succeeded or failed.\n * @param Throwable|string|null $description If description is an instance of Throwable, it will be thrown only if the assertion is executed and fails. As of PHP 8.0.0, this is done prior to calling the potentially defined assertion callback. As of PHP 8.0.0, the object will be thrown regardless of the configuration of assert.exception. As of PHP 8.0.0, the assert.bail setting has no effect in this case.\n * @return bool|void|void\n */")
	ZEND_RAW_FENTRY("assert_options", zif_assert_options, arginfo_assert_options, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("bin2hex", zif_bin2hex, arginfo_bin2hex, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Convert binary data into hexadecimal representation\n * @param string $string A string.\n * @return string\n */")
	ZEND_RAW_FENTRY("hex2bin", zif_hex2bin, arginfo_hex2bin, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decodes a hexadecimally encoded binary string\n * @return string|false\n */")
	ZEND_RAW_FENTRY("strspn", zif_strspn, arginfo_strspn, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds the length of the initial segment of a string consisting\n * entirely of characters contained within a given mask\n * @param string $string The string to examine.\n * @param string $characters The list of allowable characters.\n * @param int $offset The position in string to start searching.\n * @param int|null $length The length of the segment from string to examine.\n * @return int\n */")
	ZEND_RAW_FENTRY("strcspn", zif_strcspn, arginfo_strcspn, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find length of initial segment not matching mask\n * @param string $string The string to examine.\n * @param string $characters The string containing every disallowed character.\n * @param int $offset The position in string to start searching.\n * @param int|null $length The length of the segment from string to examine.\n * @return int\n */")
#if defined(HAVE_NL_LANGINFO)
	ZEND_RAW_FENTRY("nl_langinfo", zif_nl_langinfo, arginfo_nl_langinfo, 0, NULL, "/**\n * Query language and locale information\n * @param int $item item may be an integer value of the element or the constant name of the element. The following is a list of constant names for item that may be used and their description. Some of these constants may not be defined or hold no value for certain locales. nl_langinfo Constants Constant Description LC_TIME Category Constants ABDAY_(1-7) Abbreviated name of n-th day of the week. DAY_(1-7) Name of the n-th day of the week (DAY_1 = Sunday). ABMON_(1-12) Abbreviated name of the n-th month of the year. MON_(1-12) Name of the n-th month of the year. AM_STR String for Ante meridian. PM_STR String for Post meridian. D_T_FMT String that can be used as the format string for strftime to represent time and date. D_FMT String that can be used as the format string for strftime to represent date. T_FMT String that can be used as the format string for strftime to represent time. T_FMT_AMPM String that can be used as the format string for strftime to represent time in 12-hour format with antepost meridian. ERA Alternate era. ERA_YEAR Year in alternate era format. ERA_D_T_FMT Date and time in alternate era format (string can be used in strftime). ERA_D_FMT Date in alternate era format (string can be used in strftime). ERA_T_FMT Time in alternate era format (string can be used in strftime). LC_MONETARY Category Constants INT_CURR_SYMBOL International currency symbol. CURRENCY_SYMBOL Local currency symbol. CRNCYSTR Same value as CURRENCY_SYMBOL. MON_DECIMAL_POINT Decimal point character. MON_THOUSANDS_SEP Thousands separator (groups of three digits). MON_GROUPING Like \"grouping\" element. POSITIVE_SIGN Sign for positive values. NEGATIVE_SIGN Sign for negative values. INT_FRAC_DIGITS International fractional digits. FRAC_DIGITS Local fractional digits. P_CS_PRECEDES Returns 1 if CURRENCY_SYMBOL precedes a positive value. P_SEP_BY_SPACE Returns 1 if a space separates CURRENCY_SYMBOL from a positive value. N_CS_PRECEDES Returns 1 if CURRENCY_SYMBOL precedes a negative value. N_SEP_BY_SPACE Returns 1 if a space separates CURRENCY_SYMBOL from a negative value. P_SIGN_POSN Returns 0 if parentheses surround the quantity and CURRENCY_SYMBOL. Returns 1 if the sign string precedes the quantity and CURRENCY_SYMBOL. Returns 2 if the sign string follows the quantity and CURRENCY_SYMBOL. Returns 3 if the sign string immediately precedes the CURRENCY_SYMBOL. Returns 4 if the sign string immediately follows the CURRENCY_SYMBOL. N_SIGN_POSN LC_NUMERIC Category Constants DECIMAL_POINT Decimal point character. RADIXCHAR Same value as DECIMAL_POINT. THOUSANDS_SEP Separator character for thousands (groups of three digits). THOUSEP Same value as THOUSANDS_SEP. GROUPING LC_MESSAGES Category Constants YESEXPR Regex string for matching \"yes\" input. NOEXPR Regex string for matching \"no\" input. YESSTR Output string for \"yes\". NOSTR Output string for \"no\". LC_CTYPE Category Constants CODESET Return a string with the name of the character encoding.\n * @return string|false\n */")
#endif
	ZEND_RAW_FENTRY("strcoll", zif_strcoll, arginfo_strcoll, 0, NULL, "/**\n * Locale based string comparison\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @return int\n */")
	ZEND_RAW_FENTRY("trim", zif_trim, arginfo_trim, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_trim, "/**\n * Strip whitespace (or other characters) from the beginning and end of a string\n * @return string\n */")
	ZEND_RAW_FENTRY("rtrim", zif_rtrim, arginfo_rtrim, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Strip whitespace (or other characters) from the end of a string\n * @return string\n */")
	ZEND_RAW_FENTRY("chop", zif_rtrim, arginfo_chop, 0, NULL, "/**\n * Alias rtrim\n */")
	ZEND_RAW_FENTRY("ltrim", zif_ltrim, arginfo_ltrim, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Strip whitespace (or other characters) from the beginning of a string\n * @return string\n */")
	ZEND_RAW_FENTRY("wordwrap", zif_wordwrap, arginfo_wordwrap, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Wraps a string to a given number of characters\n * @param string $string The input string.\n * @param int $width The number of characters at which the string will be wrapped.\n * @param string $break The line is broken using the optional break parameter. It must not be an empty string.\n * @param bool $cut_long_words If the cut_long_words is set to true, the string is always wrapped at or before the specified width.  So if you have a word that is larger than the given width, it is broken apart. (See second example). When false the function does not split the word even if the width is smaller than the word width.\n * @return string\n */")
	ZEND_RAW_FENTRY("explode", zif_explode, arginfo_explode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Split a string by a string\n * @param string $separator The boundary string.\n * @param string $string The input string.\n * @param int $limit If limit is set and positive, the returned array will contain a maximum of limit elements with the last element containing the rest of string.\n * @return array\n */")
	ZEND_RAW_FENTRY("implode", zif_implode, arginfo_implode, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_implode, "/**\n * Join array elements with a string\n * @param string $separator Optional. Defaults to an empty string.\n * @param array $array The array of strings to implode.\n * @return string|string|string\n */")
	ZEND_RAW_FENTRY("join", zif_implode, arginfo_join, 0, NULL, "/**\n * Alias implode\n */")
	ZEND_RAW_FENTRY("strtok", zif_strtok, arginfo_strtok, 0, NULL, "/**\n * Tokenize string\n * @param string $string The string being split up into smaller strings (tokens).\n * @param string $token The delimiter used when splitting up string.\n * @return string|false|string|false\n */")
	ZEND_RAW_FENTRY("strtoupper", zif_strtoupper, arginfo_strtoupper, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Make a string uppercase\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("strtolower", zif_strtolower, arginfo_strtolower, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Make a string lowercase\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("str_increment", zif_str_increment, arginfo_str_increment, 0, NULL, "/**\n * Increment an alphanumeric string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("str_decrement", zif_str_decrement, arginfo_str_decrement, 0, NULL, "/**\n * Decrement an alphanumeric string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("basename", zif_basename, arginfo_basename, 0, NULL, "/**\n * Returns trailing name component of path\n * @param string $path A path.\n * @param string $suffix If the name component ends in suffix this will also be cut off.\n * @return string\n */")
	ZEND_RAW_FENTRY("dirname", zif_dirname, arginfo_dirname, 0, frameless_function_infos_dirname, "/**\n * Returns a parent directory\'s path\n * @param string $path A path.\n * @param int $levels The number of parent directories to go up.\n * @return string\n */")
	ZEND_RAW_FENTRY("pathinfo", zif_pathinfo, arginfo_pathinfo, 0, NULL, "/**\n * Returns information about a file path\n * @param string $path The path to be parsed.\n * @param int $flags If present, specifies a specific element to be returned; one of PATHINFO_DIRNAME, PATHINFO_BASENAME, PATHINFO_EXTENSION or PATHINFO_FILENAME.\n * @return array|string\n */")
	ZEND_RAW_FENTRY("stristr", zif_stristr, arginfo_stristr, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Case-insensitive strstr\n * @param string $haystack The string to search in\n * @param string $needle The string to search for.\n * @param bool $before_needle If true, stristr returns the part of the haystack before the first occurrence of the needle (excluding needle).\n * @return string|false\n */")
	ZEND_RAW_FENTRY("strstr", zif_strstr, arginfo_strstr, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_strstr, "/**\n * Find the first occurrence of a string\n * @param string $haystack The input string.\n * @param string $needle The string to search for.\n * @param bool $before_needle If true, strstr returns the part of the haystack before the first occurrence of the needle (excluding the needle).\n * @return string|false\n */")
	ZEND_RAW_FENTRY("strchr", zif_strstr, arginfo_strchr, 0, NULL, "/**\n * Alias strstr\n */")
	ZEND_RAW_FENTRY("strpos", zif_strpos, arginfo_strpos, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_strpos, "/**\n * Find the position of the first occurrence of a substring in a string\n * @param string $haystack The string to search in.\n * @param string $needle The string to search for.\n * @param int $offset If specified, search will start this number of characters counted from the beginning of the string. If the offset is negative, the search will start this number of characters counted from the end of the string.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("stripos", zif_stripos, arginfo_stripos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find the position of the first occurrence of a case-insensitive substring in a string\n * @param string $haystack The string to search in.\n * @param string $needle The string to search for.\n * @param int $offset If specified, search will start this number of characters counted from the beginning of the string. If the offset is negative, the search will start this number of characters counted from the end of the string.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("strrpos", zif_strrpos, arginfo_strrpos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find the position of the last occurrence of a substring in a string\n * @param string $haystack The string to search in.\n * @param string $needle The string to search for.\n * @param int $offset If zero or positive, the search is performed left to right skipping the first offset bytes of the haystack.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("strripos", zif_strripos, arginfo_strripos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find the position of the last occurrence of a case-insensitive substring in a string\n * @param string $haystack The string to search in.\n * @param string $needle The string to search for.\n * @param int $offset If zero or positive, the search is performed left to right skipping the first offset bytes of the haystack.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("strrchr", zif_strrchr, arginfo_strrchr, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find the last occurrence of a character in a string\n * @param string $haystack The string to search in\n * @param string $needle If needle contains more than one character, only the first is used. This behavior is different from that of strstr.\n * @param bool $before_needle If true, strrchr returns the part of the haystack before the last occurrence of the needle (excluding the needle).\n * @return string|false\n */")
	ZEND_RAW_FENTRY("str_contains", zif_str_contains, arginfo_str_contains, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_str_contains, "/**\n * Determine if a string contains a given substring\n * @param string $haystack The string to search in.\n * @param string $needle The substring to search for in the haystack.\n * @return bool\n */")
	ZEND_RAW_FENTRY("str_starts_with", zif_str_starts_with, arginfo_str_starts_with, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_str_starts_with, "/**\n * Checks if a string starts with a given substring\n * @param string $haystack The string to search in.\n * @param string $needle The substring to search for in the haystack.\n * @return bool\n */")
	ZEND_RAW_FENTRY("str_ends_with", zif_str_ends_with, arginfo_str_ends_with, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Checks if a string ends with a given substring\n * @param string $haystack The string to search in.\n * @param string $needle The substring to search for in the haystack.\n * @return bool\n */")
	ZEND_RAW_FENTRY("chunk_split", zif_chunk_split, arginfo_chunk_split, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Split a string into smaller chunks\n * @param string $string The string to be chunked.\n * @param int $length The chunk length.\n * @param string $separator The line ending sequence.\n * @return string\n */")
	ZEND_RAW_FENTRY("substr", zif_substr, arginfo_substr, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_substr, "/**\n * Return part of a string\n * @param string $string The input string.\n * @param int $offset If offset is non-negative, the returned string will start at the offset\'th position in string, counting from zero. For instance, in the string \'abcdef\', the character at position 0 is \'a\', the character at position 2 is \'c\', and so forth.\n * @param int|null $length If length is given and is positive, the string returned will contain at most length characters beginning from offset (depending on the length of string).\n * @return string\n */")
	ZEND_RAW_FENTRY("substr_replace", zif_substr_replace, arginfo_substr_replace, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Replace text within a portion of a string\n * @param array|string $string The input string.\n * @param array|string $replace The replacement string.\n * @param array|int $offset If offset is non-negative, the replacing will begin at the offset\'th offset into string.\n * @param array|int|null $length If given and is positive, it represents the length of the portion of string which is to be replaced. If it is negative, it represents the number of characters from the end of string at which to stop replacing. If it is not given, then it will default to strlen( string ); i.e. end the replacing at the end of string. Of course, if length is zero then this function will have the effect of inserting replace into string at the given offset offset.\n * @return string|array\n */")
	ZEND_RAW_FENTRY("quotemeta", zif_quotemeta, arginfo_quotemeta, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Quote meta characters\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("ord", zif_ord, arginfo_ord, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Convert the first byte of a string to a value between 0 and 255\n * @param string $character A character.\n * @return int\n */")
	ZEND_RAW_FENTRY("chr", zif_chr, arginfo_chr, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Generate a single-byte string from a number\n * @param int $codepoint An integer between 0 and 255.\n * @return string\n */")
	ZEND_RAW_FENTRY("ucfirst", zif_ucfirst, arginfo_ucfirst, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Make a string\'s first character uppercase\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("lcfirst", zif_lcfirst, arginfo_lcfirst, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Make a string\'s first character lowercase\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("ucwords", zif_ucwords, arginfo_ucwords, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Uppercase the first character of each word in a string\n * @param string $string The input string.\n * @param string $separators The optional separators contains the word separator characters.\n * @return string\n */")
	ZEND_RAW_FENTRY("strtr", zif_strtr, arginfo_strtr, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_strtr, "/**\n * Translate characters or replace substrings\n * @param string $string The string being translated.\n * @param string $from The string being translated to to.\n * @param string $to The string replacing from.\n * @param array $replace_pairs The replace_pairs parameter may be used instead of to and from, in which case it\'s an array in the form array(\'from\' => \'to\', ...).\n * @return string|string\n */")
	ZEND_RAW_FENTRY("strrev", zif_strrev, arginfo_strrev, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Reverse a string\n * @param string $string The string to be reversed.\n * @return string\n */")
	ZEND_RAW_FENTRY("similar_text", zif_similar_text, arginfo_similar_text, 0, NULL, "/**\n * Calculate the similarity between two strings\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @param float $percent By passing a reference as third argument, similar_text will calculate the similarity in percent, by dividing the result of similar_text by the average of the lengths of the given strings times 100.\n * @return int\n */")
	ZEND_RAW_FENTRY("addcslashes", zif_addcslashes, arginfo_addcslashes, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Quote string with slashes in a C style\n * @param string $string The string to be escaped.\n * @param string $characters A list of characters to be escaped. If characters contains characters  , \\r etc., they are converted in C-like style, while other non-alphanumeric characters with ASCII codes lower than 32 and higher than 126 converted to octal representation.\n * @return string\n */")
	ZEND_RAW_FENTRY("addslashes", zif_addslashes, arginfo_addslashes, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Quote string with slashes\n * @param string $string The string to be escaped.\n * @return string\n */")
	ZEND_RAW_FENTRY("stripcslashes", zif_stripcslashes, arginfo_stripcslashes, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Un-quote string quoted with addcslashes\n * @param string $string The string to be unescaped.\n * @return string\n */")
	ZEND_RAW_FENTRY("stripslashes", zif_stripslashes, arginfo_stripslashes, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Un-quotes a quoted string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("str_replace", zif_str_replace, arginfo_str_replace, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_str_replace, "/**\n * Replace all occurrences of the search string with the replacement string\n * @param array|string $search The value being searched for, otherwise known as the needle. An array may be used to designate multiple needles.\n * @param array|string $replace The replacement value that replaces found search values. An array may be used to designate multiple replacements.\n * @param string|array $subject The string or array being searched and replaced on, otherwise known as the haystack.\n * @param int $count If passed, this will be set to the number of replacements performed.\n * @return string|array\n */")
	ZEND_RAW_FENTRY("str_ireplace", zif_str_ireplace, arginfo_str_ireplace, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Case-insensitive version of str_replace\n * @param array|string $search The value being searched for, otherwise known as the needle.  An array may be used to designate multiple needles.\n * @param array|string $replace The replacement value that replaces found search values. An array may be used to designate multiple replacements.\n * @param string|array $subject The string or array being searched and replaced on, otherwise known as the haystack.\n * @param int $count If passed, this will be set to the number of replacements performed.\n * @return string|array\n */")
	ZEND_RAW_FENTRY("hebrev", zif_hebrev, arginfo_hebrev, 0, NULL, "/**\n * Convert logical Hebrew text to visual text\n * @param string $string A Hebrew input string.\n * @param int $max_chars_per_line This optional parameter indicates maximum number of characters per line that will be returned.\n * @return string\n */")
	ZEND_RAW_FENTRY("nl2br", zif_nl2br, arginfo_nl2br, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Inserts HTML line breaks before all newlines in a string\n * @param string $string The input string.\n * @param bool $use_xhtml Whether to use XHTML compatible line breaks or not.\n * @return string\n */")
	ZEND_RAW_FENTRY("strip_tags", zif_strip_tags, arginfo_strip_tags, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Strip HTML and PHP tags from a string\n * @param string $string The input string.\n * @param array|string|null $allowed_tags You can use the optional second parameter to specify tags which should not be stripped. These are either given as string, or as of PHP 7.4.0, as array. Refer to the example below regarding the format of this parameter.\n * @return string\n */")
	ZEND_RAW_FENTRY("setlocale", zif_setlocale, arginfo_setlocale, 0, NULL, "/**\n * Set locale information\n * @param int $category category is a named constant specifying the category of the functions affected by the locale setting: LC_ALL for all of the below LC_COLLATE for string comparison, see strcoll LC_CTYPE for character classification and conversion, for example ctype_alpha LC_MONETARY for localeconv LC_NUMERIC for decimal separator (See also localeconv) LC_TIME for date and time formatting with strftime LC_MESSAGES for system responses (available if PHP was compiled with libintl)\n * @param string|null $locales If locales is the empty string \"\" or is null, the locale names will be set from the values of environment variables with the same names as the above categories, or from \"LANG\".\n * @param string $rest Optional string parameters to try as locale settings until success.\n * @param array $locale_array Each array element is tried to be set as new locale until success. This is useful if a locale is known under different names on different systems or for providing a fallback for a possibly not available locale.\n * @return string|false|string|false\n */")
	ZEND_RAW_FENTRY("parse_str", zif_parse_str, arginfo_parse_str, 0, NULL, "/**\n * Parse a string as a URL query string\n * @param string $string The input string.\n * @param array $result A variable passed by reference, which will be set to an array containing the key-value pairs extracted from string. If the result parameter is not passed, a separate variable is set in the local scope for each key.\n * @return void\n */")
	ZEND_RAW_FENTRY("str_getcsv", zif_str_getcsv, arginfo_str_getcsv, 0, NULL, "/**\n * Parse a CSV string into an array\n * @param string $string The string to parse.\n * @return array\n */")
	ZEND_RAW_FENTRY("str_repeat", zif_str_repeat, arginfo_str_repeat, 0, NULL, "/**\n * Repeat a string\n * @param string $string The string to be repeated.\n * @param int $times Number of time the string string should be repeated.\n * @return string\n */")
	ZEND_RAW_FENTRY("count_chars", zif_count_chars, arginfo_count_chars, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return information about characters used in a string\n * @param string $string The examined string.\n * @param int $mode See return values.\n * @return array|string\n */")
	ZEND_RAW_FENTRY("strnatcmp", zif_strnatcmp, arginfo_strnatcmp, 0, NULL, "/**\n * String comparisons using a \"natural order\" algorithm\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @return int\n */")
	ZEND_RAW_FENTRY("localeconv", zif_localeconv, arginfo_localeconv, 0, NULL, "/**\n * Get numeric formatting information\n * @return array\n */")
	ZEND_RAW_FENTRY("strnatcasecmp", zif_strnatcasecmp, arginfo_strnatcasecmp, 0, NULL, "/**\n * Case insensitive string comparisons using a \"natural order\" algorithm\n * @param string $string1 The first string.\n * @param string $string2 The second string.\n * @return int\n */")
	ZEND_RAW_FENTRY("substr_count", zif_substr_count, arginfo_substr_count, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Count the number of substring occurrences\n * @param string $haystack The string to search in\n * @param string $needle The substring to search for\n * @param int $offset The offset where to start counting. If the offset is negative, counting starts from the end of the string.\n * @param int|null $length The maximum length after the specified offset to search for the substring. It outputs a warning if the offset plus the length is greater than the haystack length. A negative length counts from the end of haystack.\n * @return int\n */")
	ZEND_RAW_FENTRY("str_pad", zif_str_pad, arginfo_str_pad, 0, NULL, "/**\n * Pad a string to a certain length with another string\n * @param string $string The input string.\n * @param int $length The desired length of the final padded string. If the value of length is negative, less than, or equal to the length of the input string, no padding takes place, and string will be returned.\n * @param string $pad_string The pad_string may be truncated if the required number of padding characters can\'t be evenly divided by the pad_string\'s length.\n * @param int $pad_type Optional argument pad_type can be STR_PAD_RIGHT, STR_PAD_LEFT, or STR_PAD_BOTH. If pad_type is not specified it is assumed to be STR_PAD_RIGHT.\n * @return string\n */")
	ZEND_RAW_FENTRY("sscanf", zif_sscanf, arginfo_sscanf, 0, NULL, "/**\n * Parses input from a string according to a format\n * @param string $string The input string being parsed.\n * @param string $format The interpreted format for string, which is described in the documentation for sprintf with following differences: Function is not locale-aware. F, g, G and b are not supported. D stands for decimal number. i stands for integer with base detection. n stands for number of characters processed so far. s stops reading at any whitespace character. * instead of argnum$ suppresses the assignment of this conversion specification.\n * @param mixed $vars Optionally pass in variables by reference that will contain the parsed values.\n * @return array|int|null\n */")
	ZEND_RAW_FENTRY("str_rot13", zif_str_rot13, arginfo_str_rot13, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Perform the rot13 transform on a string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("str_shuffle", zif_str_shuffle, arginfo_str_shuffle, 0, NULL, "/**\n * Randomly shuffles a string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("str_word_count", zif_str_word_count, arginfo_str_word_count, 0, NULL, "/**\n * Return information about words used in a string\n * @param string $string The string\n * @param int $format Specify the return value of this function. The current supported values are: 0 - returns the number of words found 1 - returns an array containing all the words found inside the string 2 - returns an associative array, where the key is the numeric position of the word inside the string and the value is the actual word itself\n * @param string|null $characters A list of additional characters which will be considered as \'word\'\n * @return array|int\n */")
	ZEND_RAW_FENTRY("str_split", zif_str_split, arginfo_str_split, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Convert a string to an array\n * @param string $string The input string.\n * @param int $length Maximum length of the chunk.\n * @return array\n */")
	ZEND_RAW_FENTRY("strpbrk", zif_strpbrk, arginfo_strpbrk, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Search a string for any of a set of characters\n * @param string $string The string where characters is looked for.\n * @param string $characters This parameter is case sensitive.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("substr_compare", zif_substr_compare, arginfo_substr_compare, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Binary safe comparison of two strings from an offset, up to length characters\n * @param string $haystack The main string being compared.\n * @param string $needle The secondary string being compared.\n * @param int $offset The start position for the comparison. If negative, it starts counting from the end of the string.\n * @param int|null $length The length of the comparison. The default value is the largest of the length of the needle compared to the length of haystack minus the offset.\n * @param bool $case_insensitive If case_insensitive is true, comparison is case insensitive.\n * @return int\n */")
	ZEND_RAW_FENTRY("utf8_encode", zif_utf8_encode, arginfo_utf8_encode, ZEND_ACC_DEPRECATED|ZEND_ACC_COMPILE_TIME_EVAL, NULL, NULL)
	ZEND_RAW_FENTRY("utf8_decode", zif_utf8_decode, arginfo_utf8_decode, ZEND_ACC_DEPRECATED|ZEND_ACC_COMPILE_TIME_EVAL, NULL, NULL)
	ZEND_RAW_FENTRY("opendir", zif_opendir, arginfo_opendir, 0, NULL, "/**\n * Open directory handle\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("dir", zif_dir, arginfo_dir, 0, NULL, "/**\n * Return an instance of the Directory class\n * @return Directory|false\n */")
	ZEND_RAW_FENTRY("closedir", zif_closedir, arginfo_closedir, 0, NULL, "/**\n * Close directory handle\n * @return void\n */")
	ZEND_RAW_FENTRY("chdir", zif_chdir, arginfo_chdir, 0, NULL, "/**\n * Change directory\n * @param string $directory The new current directory\n * @return bool\n */")
#if (defined(HAVE_CHROOT) && !defined(ZTS) && defined(ENABLE_CHROOT_FUNC))
	ZEND_RAW_FENTRY("chroot", zif_chroot, arginfo_chroot, 0, NULL, "/**\n * Change the root directory\n * @param string $directory The path to change the root directory to.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("getcwd", zif_getcwd, arginfo_getcwd, 0, NULL, "/**\n * Gets the current working directory\n * @return string|false\n */")
	ZEND_RAW_FENTRY("rewinddir", zif_rewinddir, arginfo_rewinddir, 0, NULL, "/**\n * Rewind directory handle\n * @return void\n */")
	ZEND_RAW_FENTRY("readdir", zif_readdir, arginfo_readdir, 0, NULL, "/**\n * Read entry from directory handle\n * @return string|false\n */")
	ZEND_RAW_FENTRY("scandir", zif_scandir, arginfo_scandir, 0, NULL, "/**\n * List files and directories inside the specified path\n * @param string $directory The directory that will be scanned.\n * @param int $sorting_order By default, the sorted order is alphabetical in ascending order.  If the optional sorting_order is set to SCANDIR_SORT_DESCENDING, then the sort order is alphabetical in descending order. If it is set to SCANDIR_SORT_NONE then the result is unsorted.\n * @param resource|null $context For a description of the context parameter, refer to the streams section of the manual.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("glob", zif_glob, arginfo_glob, 0, NULL, "/**\n * Find pathnames matching a pattern\n * @param string $pattern The pattern. No tilde expansion or parameter substitution is done.\n * @param int $flags Any of the GLOB_* constants.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("exec", zif_exec, arginfo_exec, 0, NULL, "/**\n * Execute an external program\n * @param string $command The command that will be executed.\n * @param array $output If the output argument is present, then the specified array will be filled with every line of output from the command.  Trailing whitespace, such as  , is not included in this array.  Note that if the array already contains some elements, exec will append to the end of the array. If you do not want the function to append elements, call unset on the array before passing it to exec.\n * @param int $result_code If the result_code argument is present along with the output argument, then the return status of the executed command will be written to this variable.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("system", zif_system, arginfo_system, 0, NULL, "/**\n * Execute an external program and display the output\n * @param string $command The command that will be executed.\n * @param int $result_code If the result_code argument is present, then the return status of the executed command will be written to this variable.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("passthru", zif_passthru, arginfo_passthru, 0, NULL, "/**\n * Execute an external program and display raw output\n * @param string $command The command that will be executed.\n * @param int $result_code If the result_code argument is present, the return status of the Unix command will be placed here.\n * @return false|null\n */")
	ZEND_RAW_FENTRY("escapeshellcmd", zif_escapeshellcmd, arginfo_escapeshellcmd, 0, NULL, "/**\n * Escape shell metacharacters\n * @param string $command The command that will be escaped.\n * @return string\n */")
	ZEND_RAW_FENTRY("escapeshellarg", zif_escapeshellarg, arginfo_escapeshellarg, 0, NULL, "/**\n * Escape a string to be used as a shell argument\n * @param string $arg The argument that will be escaped.\n * @return string\n */")
	ZEND_RAW_FENTRY("shell_exec", zif_shell_exec, arginfo_shell_exec, 0, NULL, "/**\n * Execute command via shell and return the complete output as a string\n * @param string $command The command that will be executed.\n * @return string|false|null\n */")
#if defined(HAVE_NICE)
	ZEND_RAW_FENTRY("proc_nice", zif_proc_nice, arginfo_proc_nice, 0, NULL, "/**\n * Change the priority of the current process\n * @param int $priority The new priority value, the value of this may differ on platforms.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("flock", zif_flock, arginfo_flock, 0, NULL, "/**\n * Portable advisory file locking\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @param int $operation operation is one of the following: LOCK_SH to acquire a shared lock (reader). LOCK_EX to acquire an exclusive lock (writer). LOCK_UN to release a lock (shared or exclusive).\n * @param int $would_block The optional third argument is set to 1 if the lock would block (EWOULDBLOCK errno condition).\n * @return bool\n */")
	ZEND_RAW_FENTRY("get_meta_tags", zif_get_meta_tags, arginfo_get_meta_tags, 0, NULL, "/**\n * Extracts all meta tag content attributes from a file and returns an array\n * @param string $filename The path to the HTML file, as a string. This can be a local file or an URL.\n * @param bool $use_include_path Setting use_include_path to true will result in PHP trying to open the file along the standard include path as per the include_path directive. This is used for local files, not URLs.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("pclose", zif_pclose, arginfo_pclose, 0, NULL, "/**\n * Closes process file pointer\n * @param resource $handle The file pointer must be valid, and must have been returned by a successful call to popen.\n * @return int\n */")
	ZEND_RAW_FENTRY("popen", zif_popen, arginfo_popen, 0, NULL, "/**\n * Opens process file pointer\n * @param string $command The command\n * @param string $mode The mode. Either \'r\' for reading, or \'w\' for writing.\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("readfile", zif_readfile, arginfo_readfile, 0, NULL, "/**\n * Outputs a file\n * @param string $filename The filename being read.\n * @param bool $use_include_path You can use the optional second parameter and set it to true, if you want to search for the file in the include_path, too.\n * @param resource|null $context A context stream resource.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("rewind", zif_rewind, arginfo_rewind, 0, NULL, "/**\n * Rewind the position of a file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen.\n * @return bool\n */")
	ZEND_RAW_FENTRY("rmdir", zif_rmdir, arginfo_rmdir, 0, NULL, "/**\n * Removes directory\n * @param string $directory Path to the directory.\n * @param resource|null $context A context stream resource.\n * @return bool\n */")
	ZEND_RAW_FENTRY("umask", zif_umask, arginfo_umask, 0, NULL, "/**\n * Changes the current umask\n * @param int|null $mask The new umask.\n * @return int\n */")
	ZEND_RAW_FENTRY("fclose", zif_fclose, arginfo_fclose, 0, NULL, "/**\n * Closes an open file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen.\n * @return bool\n */")
	ZEND_RAW_FENTRY("feof", zif_feof, arginfo_feof, 0, NULL, "/**\n * Tests for end-of-file on a file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @return bool\n */")
	ZEND_RAW_FENTRY("fgetc", zif_fgetc, arginfo_fgetc, 0, NULL, "/**\n * Gets character from file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @return string|false\n */")
	ZEND_RAW_FENTRY("fgets", zif_fgets, arginfo_fgets, 0, NULL, "/**\n * Gets line from file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @param int|null $length Reading ends when length - 1 bytes have been read, or a newline (which is included in the return value), or an EOF (whichever comes first). If no length is specified, it will keep reading from the stream until it reaches the end of the line.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("fread", zif_fread, arginfo_fread, 0, NULL, "/**\n * Binary-safe file read\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @param int $length Up to length number of bytes read.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("fopen", zif_fopen, arginfo_fopen, 0, NULL, "/**\n * Opens file or URL\n * @param string $filename If filename is of the form \"scheme:...\", it is assumed to be a URL and PHP will search for a protocol handler (also known as a wrapper) for that scheme. If no wrappers for that protocol are registered, PHP will emit a notice to help you track potential problems in your script and then continue as though filename specifies a regular file.\n * @param string $mode The mode parameter specifies the type of access you require to the stream.  It may be any of the following: A list of possible modes for fopen using mode mode Description \'r\' Open for reading only; place the file pointer at the beginning of the file. \'r+\' Open for reading and writing; place the file pointer at the beginning of the file. \'w\' Open for writing only; place the file pointer at the beginning of the file and truncate the file to zero length. If the file does not exist, attempt to create it. \'w+\' Open for reading and writing; otherwise it has the same behavior as \'w\'. \'a\' Open for writing only; place the file pointer at the end of the file. If the file does not exist, attempt to create it. In this mode, fseek has no effect, writes are always appended. \'a+\' Open for reading and writing; place the file pointer at the end of the file. If the file does not exist, attempt to create it. In this mode, fseek only affects the reading position, writes are always appended. \'x\' Create and open for writing only; place the file pointer at the beginning of the file.  If the file already exists, the fopen call will fail by returning false and generating an error of level E_WARNING.  If the file does not exist, attempt to create it.  This is equivalent to specifying O_EXCL|O_CREAT flags for the underlying open(2) system call. \'x+\' Create and open for reading and writing; otherwise it has the same behavior as \'x\'. \'c\' Open the file for writing only. If the file does not exist, it is created. If it exists, it is neither truncated (as opposed to \'w\'), nor the call to this function fails (as is the case with \'x\'). The file pointer is positioned on the beginning of the file. This may be useful if it\'s desired to get an advisory lock (see flock) before attempting to modify the file, as using \'w\' could truncate the file before the lock was obtained (if truncation is desired, ftruncate can be used after the lock is requested). \'c+\' Open the file for reading and writing; otherwise it has the same behavior as \'c\'. \'e\' Set close-on-exec flag on the opened file descriptor. Only available in PHP compiled on POSIX.1-2008 conformant systems. \'n\' Set non-blocking flag on the opened file descriptor. Only available in PHP compiled on POSIX.1-2008 conformant systems.\n * @param bool $use_include_path The optional third use_include_path parameter can be set to true if you want to search for the file in the include_path, too.\n * @param resource|null $context A context stream resource.\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("fscanf", zif_fscanf, arginfo_fscanf, 0, NULL, "/**\n * Parses input from a file according to a format\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @param string $format The interpreted format for string, which is described in the documentation for sprintf with following differences: Function is not locale-aware. F, g, G and b are not supported. D stands for decimal number. i stands for integer with base detection. n stands for number of characters processed so far. s stops reading at any whitespace character. * instead of argnum$ suppresses the assignment of this conversion specification.\n * @param mixed $vars The optional assigned values.\n * @return array|int|false|null\n */")
	ZEND_RAW_FENTRY("fpassthru", zif_fpassthru, arginfo_fpassthru, 0, NULL, "/**\n * Output all remaining data on a file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @return int\n */")
	ZEND_RAW_FENTRY("ftruncate", zif_ftruncate, arginfo_ftruncate, 0, NULL, "/**\n * Truncates a file to a given length\n * @param resource $stream The file pointer.\n * @param int $size The size to truncate to.\n * @return bool\n */")
	ZEND_RAW_FENTRY("fstat", zif_fstat, arginfo_fstat, 0, NULL, "/**\n * Gets information about a file using an open file pointer\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("fseek", zif_fseek, arginfo_fseek, 0, NULL, "/**\n * Seeks on a file pointer\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @param int $offset The offset.\n * @param int $whence whence values are: SEEK_SET - Set position equal to offset bytes from the start of the file. SEEK_CUR - Set position to current location plus offset bytes. SEEK_END - Set position to end-of-file plus offset bytes.\n * @return int\n */")
	ZEND_RAW_FENTRY("ftell", zif_ftell, arginfo_ftell, 0, NULL, "/**\n * Returns the current position of the file read/write pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or popen. ftell gives undefined results for append-only streams (opened with \"a\" flag).\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fflush", zif_fflush, arginfo_fflush, 0, NULL, "/**\n * Flushes the output to a file\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @return bool\n */")
	ZEND_RAW_FENTRY("fsync", zif_fsync, arginfo_fsync, 0, NULL, "/**\n * Synchronizes changes to the file (including meta-data)\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @return bool\n */")
	ZEND_RAW_FENTRY("fdatasync", zif_fdatasync, arginfo_fdatasync, 0, NULL, "/**\n * Synchronizes data (but not meta-data) to the file\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @return bool\n */")
	ZEND_RAW_FENTRY("fwrite", zif_fwrite, arginfo_fwrite, 0, NULL, "/**\n * Binary-safe file write\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @param string $data The string that is to be written.\n * @param int|null $length If length is an integer, writing will stop after length bytes have been written or the end of data is reached, whichever comes first.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fputs", zif_fwrite, arginfo_fputs, 0, NULL, "/**\n * Alias fwrite\n */")
	ZEND_RAW_FENTRY("mkdir", zif_mkdir, arginfo_mkdir, 0, NULL, "/**\n * Makes directory\n * @param string $directory The directory path. A URL can be used as a filename with this function if the fopen wrappers have been enabled. See fopen for more details on how to specify the filename. See the  for links to information about what abilities the various wrappers have, notes on their usage, and information on any predefined variables they may provide.\n * @param int $permissions The permissions are 0777 by default, which means the widest possible access. For more information on permissions, read the details on the chmod page.\n * @param bool $recursive If true, then any parent directories to the directory specified will also be created, with the same permissions.\n * @param resource|null $context A context stream resource.\n * @return bool\n */")
	ZEND_RAW_FENTRY("rename", zif_rename, arginfo_rename, 0, NULL, "/**\n * Renames a file or directory\n * @param string $from The old name.\n * @param string $to The new name. On Windows, if to already exists, it must be writable. Otherwise rename fails and issues E_WARNING.\n * @param resource|null $context A context stream resource.\n * @return bool\n */")
	ZEND_RAW_FENTRY("copy", zif_copy, arginfo_copy, 0, NULL, "/**\n * Copies file\n * @param string $from Path to the source file.\n * @param string $to The destination path. If to is a URL, the copy operation may fail if the wrapper does not support overwriting of existing files.\n * @param resource|null $context A valid context resource created with stream_context_create.\n * @return bool\n */")
	ZEND_RAW_FENTRY("tempnam", zif_tempnam, arginfo_tempnam, 0, NULL, "/**\n * Create file with unique file name\n * @param string $directory The directory where the temporary filename will be created.\n * @param string $prefix The prefix of the generated temporary filename.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("tmpfile", zif_tmpfile, arginfo_tmpfile, 0, NULL, "/**\n * Creates a temporary file\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("file", zif_file, arginfo_file, 0, NULL, "/**\n * Reads entire file into an array\n * @param string $filename Path to the file.\n * @param int $flags The optional parameter flags can be one, or more, of the following constants: FILE_USE_INCLUDE_PATH Search for the file in the include_path. FILE_IGNORE_NEW_LINES Omit newline at the end of each array element. FILE_SKIP_EMPTY_LINES Skip empty lines. FILE_NO_DEFAULT_CONTEXT Don\'t use the default context.\n * @param resource|null $context A context stream resource.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("file_get_contents", zif_file_get_contents, arginfo_file_get_contents, 0, NULL, "/**\n * Reads entire file into a string\n * @param string $filename Name of the file to read.\n * @param bool $use_include_path The FILE_USE_INCLUDE_PATH constant can be used to trigger include path search. This is not possible if strict typing is enabled, since FILE_USE_INCLUDE_PATH is an int. Use true instead.\n * @param resource|null $context A valid context resource created with stream_context_create. If you don\'t need to use a custom context, you can skip this parameter by null.\n * @param int $offset The offset where the reading starts on the original stream. Negative offsets count from the end of the stream.\n * @param int|null $length Maximum length of data read. The default is to read until end of file is reached. Note that this parameter is applied to the stream processed by the filters.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("unlink", zif_unlink, arginfo_unlink, 0, NULL, "/**\n * Deletes a file\n * @param string $filename Path to the file.\n * @param resource|null $context A context stream resource.\n * @return bool\n */")
	ZEND_RAW_FENTRY("file_put_contents", zif_file_put_contents, arginfo_file_put_contents, 0, NULL, "/**\n * Write data to a file\n * @param string $filename Path to the file where to write the data.\n * @param mixed $data The data to write. Can be either a string, an array or a stream resource.\n * @param int $flags The value of flags can be any combination of the following flags, joined with the binary OR (|) operator.\n * @param resource|null $context A valid context resource created with stream_context_create.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fputcsv", zif_fputcsv, arginfo_fputcsv, 0, NULL, "/**\n * Format line as CSV and write to file pointer\n * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).\n * @param array $fields An array of strings.\n * @param string $eol The optional eol parameter sets a custom End of Line sequence.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fgetcsv", zif_fgetcsv, arginfo_fgetcsv, 0, NULL, "/**\n * Gets line from file pointer and parse for CSV fields\n * @param resource $stream A valid file pointer to a file successfully opened by fopen, popen, or fsockopen.\n * @param int|null $length Must be greater than the longest line (in characters) to be found in the CSV file (allowing for trailing line-end characters). Otherwise the line is split in chunks of length characters, unless the split would occur inside an enclosure.\n * @param string $separator The separator parameter sets the field separator. It must be a single byte character.\n * @param string $enclosure The enclosure parameter sets the field enclosure character. It must be a single byte character.\n * @param string $escape The escape parameter sets the escape character. It must be a single byte character or the empty string. The empty string (\"\") disables the proprietary escape mechanism.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("realpath", zif_realpath, arginfo_realpath, 0, NULL, "/**\n * Returns canonicalized absolute pathname\n * @param string $path The path being checked. Whilst a path must be supplied, the value can be an empty string. In this case, the value is interpreted as the current directory.\n * @return string|false\n */")
#if defined(HAVE_FNMATCH)
	ZEND_RAW_FENTRY("fnmatch", zif_fnmatch, arginfo_fnmatch, 0, NULL, "/**\n * Match filename against a pattern\n * @param string $pattern The pattern to match against. Usually, the pattern will contain wildcards like \'?\' and \'*\'. Wildcards to be used in pattern parameter Wildcard Description ? Question mark will match any single character. For example, pattern \"file?.txt\" will match \"file1.txt\" and \"fileA.txt\", but will not match \"file10.txt\". * Asterisk will match zero or more characters. For example, pattern \"foo*.xml\" will match \"foo.xml\" and \"foobar.xml\". [ ] Square brackets are used to create ranges of ASCII codepoints or sets of characters. For example, pattern \"index.php[45]\" will match \"index.php4\" and \"index.php5\", but will not match \"index.phpt\". Well known ranges are [0-9], [a-z], and [A-Z]. Multiple sets and ranges can be used at the same time, for example [0-9a-zABC]. ! Exclamation mark is used to negate characters within square brackets. For example, \"[!A-Z]*.html\" will match \"demo.html\", but will not match \"Demo.html\". \\ Backslash is used to escape special characters. For example, \"Name\\?\" will match \"Name?\", but will not match \"Names\".\n * @param string $filename The tested string. This function is especially useful for filenames, but may also be used on regular strings.\n * @param int $flags The value of flags can be any combination of the following flags, joined with the binary OR (|) operator. A list of possible flags for fnmatch Flag Description FNM_NOESCAPE Disable backslash escaping. FNM_PATHNAME Slash in string only matches slash in the given pattern. FNM_PERIOD Leading period in string must be exactly matched by period in the given pattern. FNM_CASEFOLD Caseless match. Part of the GNU extension.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("sys_get_temp_dir", zif_sys_get_temp_dir, arginfo_sys_get_temp_dir, 0, NULL, "/**\n * Returns directory path used for temporary files\n * @return string\n */")
	ZEND_RAW_FENTRY("fileatime", zif_fileatime, arginfo_fileatime, 0, NULL, "/**\n * Gets last access time of file\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("filectime", zif_filectime, arginfo_filectime, 0, NULL, "/**\n * Gets inode change time of file\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("filegroup", zif_filegroup, arginfo_filegroup, 0, NULL, "/**\n * Gets file group\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fileinode", zif_fileinode, arginfo_fileinode, 0, NULL, "/**\n * Gets file inode\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("filemtime", zif_filemtime, arginfo_filemtime, 0, NULL, "/**\n * Gets file modification time\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fileowner", zif_fileowner, arginfo_fileowner, 0, NULL, "/**\n * Gets file owner\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("fileperms", zif_fileperms, arginfo_fileperms, 0, NULL, "/**\n * Gets file permissions\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("filesize", zif_filesize, arginfo_filesize, 0, NULL, "/**\n * Gets file size\n * @param string $filename Path to the file.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("filetype", zif_filetype, arginfo_filetype, 0, NULL, "/**\n * Gets file type\n * @param string $filename Path to the file.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("file_exists", zif_file_exists, arginfo_file_exists, 0, NULL, "/**\n * Checks whether a file or directory exists\n * @param string $filename Path to the file or directory.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_writable", zif_is_writable, arginfo_is_writable, 0, NULL, "/**\n * Tells whether the filename is writable\n * @param string $filename The filename being checked.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_writeable", zif_is_writable, arginfo_is_writeable, 0, NULL, "/**\n * Alias is_writable\n */")
	ZEND_RAW_FENTRY("is_readable", zif_is_readable, arginfo_is_readable, 0, NULL, "/**\n * Tells whether a file exists and is readable\n * @param string $filename Path to the file.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_executable", zif_is_executable, arginfo_is_executable, 0, NULL, "/**\n * Tells whether the filename is executable\n * @param string $filename Path to the file.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_file", zif_is_file, arginfo_is_file, 0, NULL, "/**\n * Tells whether the filename is a regular file\n * @param string $filename Path to the file.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_dir", zif_is_dir, arginfo_is_dir, 0, NULL, "/**\n * Tells whether the filename is a directory\n * @param string $filename Path to the file. If filename is a relative filename, it will be checked relative to the current working directory. If filename is a symbolic or hard link then the link will be resolved and checked. If you have enabled open_basedir further restrictions may apply.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_link", zif_is_link, arginfo_is_link, 0, NULL, "/**\n * Tells whether the filename is a symbolic link\n * @param string $filename Path to the file.\n * @return bool\n */")
	ZEND_RAW_FENTRY("stat", zif_stat, arginfo_stat, 0, NULL, "/**\n * Gives information about a file\n * @param string $filename Path to the file.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("lstat", zif_lstat, arginfo_lstat, 0, NULL, "/**\n * Gives information about a file or symbolic link\n * @param string $filename Path to a file or a symbolic link.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("chown", zif_chown, arginfo_chown, 0, NULL, "/**\n * Changes file owner\n * @param string $filename Path to the file.\n * @param string|int $user A user name or number.\n * @return bool\n */")
	ZEND_RAW_FENTRY("chgrp", zif_chgrp, arginfo_chgrp, 0, NULL, "/**\n * Changes file group\n * @param string $filename Path to the file.\n * @param string|int $group A group name or number.\n * @return bool\n */")
#if defined(HAVE_LCHOWN)
	ZEND_RAW_FENTRY("lchown", zif_lchown, arginfo_lchown, 0, NULL, "/**\n * Changes user ownership of symlink\n * @param string $filename Path to the file.\n * @param string|int $user User name or number.\n * @return bool\n */")
	ZEND_RAW_FENTRY("lchgrp", zif_lchgrp, arginfo_lchgrp, 0, NULL, "/**\n * Changes group ownership of symlink\n * @param string $filename Path to the symlink.\n * @param string|int $group The group specified by name or number.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("chmod", zif_chmod, arginfo_chmod, 0, NULL, "/**\n * Changes file mode\n * @param string $filename Path to the file.\n * @param int $permissions Note that permissions is not automatically assumed to be an octal value, so to ensure the expected operation, you need to prefix permissions with a zero (0). Strings such as \"g+w\" will not work properly.\n * @return bool\n */")
#if defined(HAVE_UTIME)
	ZEND_RAW_FENTRY("touch", zif_touch, arginfo_touch, 0, NULL, "/**\n * Sets access and modification time of file\n * @param string $filename The name of the file being touched.\n * @param int|null $mtime The touch time. If mtime is null, the current system time is used.\n * @param int|null $atime If not null, the access time of the given filename is set to the value of atime. Otherwise, it is set to the value passed to the mtime parameter. If both are null, the current system time is used.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("clearstatcache", zif_clearstatcache, arginfo_clearstatcache, 0, NULL, "/**\n * Clears file status cache\n * @param bool $clear_realpath_cache Whether to also clear the realpath cache.\n * @param string $filename Clear the realpath cache for a specific filename only; only used if clear_realpath_cache is true.\n * @return void\n */")
	ZEND_RAW_FENTRY("disk_total_space", zif_disk_total_space, arginfo_disk_total_space, 0, NULL, "/**\n * Returns the total size of a filesystem or disk partition\n * @param string $directory A directory of the filesystem or disk partition.\n * @return float|false\n */")
	ZEND_RAW_FENTRY("disk_free_space", zif_disk_free_space, arginfo_disk_free_space, 0, NULL, "/**\n * Returns available space on filesystem or disk partition\n * @param string $directory A directory of the filesystem or disk partition.\n * @return float|false\n */")
	ZEND_RAW_FENTRY("diskfreespace", zif_disk_free_space, arginfo_diskfreespace, 0, NULL, "/**\n * Alias disk_free_space\n */")
	ZEND_RAW_FENTRY("realpath_cache_get", zif_realpath_cache_get, arginfo_realpath_cache_get, 0, NULL, "/**\n * Get realpath cache entries\n * @return array\n */")
	ZEND_RAW_FENTRY("realpath_cache_size", zif_realpath_cache_size, arginfo_realpath_cache_size, 0, NULL, "/**\n * Get realpath cache size\n * @return int\n */")
	ZEND_RAW_FENTRY("sprintf", zif_sprintf, arginfo_sprintf, 0, NULL, "/**\n * Return a formatted string\n * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.\n * @return string\n */")
	ZEND_RAW_FENTRY("printf", zif_printf, arginfo_printf, 0, NULL, "/**\n * Output a formatted string\n * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.\n * @return int\n */")
	ZEND_RAW_FENTRY("vprintf", zif_vprintf, arginfo_vprintf, 0, NULL, "/**\n * Output a formatted string\n * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.\n * @return int\n */")
	ZEND_RAW_FENTRY("vsprintf", zif_vsprintf, arginfo_vsprintf, 0, NULL, "/**\n * Return a formatted string\n * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.\n * @return string\n */")
	ZEND_RAW_FENTRY("fprintf", zif_fprintf, arginfo_fprintf, 0, NULL, "/**\n * Write a formatted string to a stream\n * @param resource $stream A file system pointer resource that is typically created using fopen.\n * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.\n * @return int\n */")
	ZEND_RAW_FENTRY("vfprintf", zif_vfprintf, arginfo_vfprintf, 0, NULL, "/**\n * Write a formatted string to a stream\n * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.\n * @return int\n */")
	ZEND_RAW_FENTRY("fsockopen", zif_fsockopen, arginfo_fsockopen, 0, NULL, "/**\n * Open Internet or Unix domain socket connection\n * @param string $hostname If OpenSSL support is installed, you may prefix the hostname with either ssl: or tls: to use an SSL or TLS client connection over TCPIP to connect to the remote host.\n * @param int $port The port number. This can be omitted and skipped with -1 for transports that do not use ports, such as unix:.\n * @param int $error_code If provided, holds the system level error number that occurred in the system-level connect() call.\n * @param string $error_message The error message as a string.\n * @param float|null $timeout The connection timeout, in seconds. When null, the default_socket_timeout php.ini setting is used.\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("pfsockopen", zif_pfsockopen, arginfo_pfsockopen, 0, NULL, "/**\n * Open persistent Internet or Unix domain socket connection\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("http_build_query", zif_http_build_query, arginfo_http_build_query, 0, NULL, "/**\n * Generate URL-encoded query string\n * @param array|object $data May be an array or object containing properties.\n * @param string $numeric_prefix If numeric indices are used in the base array and this parameter is provided, it will be prepended to the numeric index for elements in the base array only.\n * @param string|null $arg_separator The argument separator. If not set or null, arg_separator.output is used to separate arguments.\n * @param int $encoding_type By default, PHP_QUERY_RFC1738.\n * @return string\n */")
	ZEND_RAW_FENTRY("http_get_last_response_headers", zif_http_get_last_response_headers, arginfo_http_get_last_response_headers, 0, NULL, "/**\n * Retrieve last HTTP response headers\n * @return array|null\n */")
	ZEND_RAW_FENTRY("http_clear_last_response_headers", zif_http_clear_last_response_headers, arginfo_http_clear_last_response_headers, 0, NULL, "/**\n * Clears the stored HTTP response headers\n * @return void\n */")
	ZEND_RAW_FENTRY("request_parse_body", zif_request_parse_body, arginfo_request_parse_body, 0, NULL, "/**\n * Read and parse the request body and return the result\n * @return array\n */")
	ZEND_RAW_FENTRY("image_type_to_mime_type", zif_image_type_to_mime_type, arginfo_image_type_to_mime_type, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get Mime-Type for image-type returned by getimagesize,\n * exif_read_data, exif_thumbnail, exif_imagetype\n * @param int $image_type One of the IMAGETYPE_* constants.\n * @return string\n */")
	ZEND_RAW_FENTRY("image_type_to_extension", zif_image_type_to_extension, arginfo_image_type_to_extension, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get file extension for image type\n * @param int $image_type One of the IMAGETYPE_* constant.\n * @param bool $include_dot Whether to prepend a dot to the extension or not. Default to true.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("getimagesize", zif_getimagesize, arginfo_getimagesize, 0, NULL, "/**\n * Get the size of an image\n * @param string $filename This parameter specifies the file you wish to retrieve information about. It can reference a local file or (configuration permitting) a remote file using one of the supported streams.\n * @param array $image_info This optional parameter allows you to extract some extended information from the image file. Currently, this will return the different JPG APP markers as an associative array. Some programs use these APP markers to embed text information in images. A very common one is to embed IPTC information in the APP13 marker. You can use the iptcparse function to parse the binary APP13 marker into something readable.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("getimagesizefromstring", zif_getimagesizefromstring, arginfo_getimagesizefromstring, 0, NULL, "/**\n * Get the size of an image from a string\n * @return array|false\n */")
	ZEND_RAW_FENTRY("phpinfo", zif_phpinfo, arginfo_phpinfo, 0, NULL, "/**\n * Outputs information about PHP\'s configuration\n * @param int $flags The output may be customized by passing one or more of the following constants bitwise values summed together in the optional flags parameter. One can also combine the respective constants or bitwise values together with the bitwise or operator.\n * @return true\n */")
	ZEND_RAW_FENTRY("phpversion", zif_phpversion, arginfo_phpversion, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Gets the current PHP version\n * @param string|null $extension An optional extension name.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("phpcredits", zif_phpcredits, arginfo_phpcredits, 0, NULL, "/**\n * Prints out the credits for PHP\n * @param int $flags To generate a custom credits page, you may want to use the flags parameter.\n * @return true\n */")
	ZEND_RAW_FENTRY("php_sapi_name", zif_php_sapi_name, arginfo_php_sapi_name, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Returns the type of interface between web server and PHP\n * @return string|false\n */")
	ZEND_RAW_FENTRY("php_uname", zif_php_uname, arginfo_php_uname, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Returns information about the operating system PHP is running on\n * @param string $mode mode is a single character that defines what information is returned: \'a\': This is the default. Returns the same information as the individual modes \'s\' \'n\' \'r\' \'v\' \'m\' separated by spaces. \'s\': Operating system name. eg. FreeBSD. \'n\': Host name. eg. localhost.example.com. \'r\': Release name. eg. 5.1.2-RELEASE. \'v\': Version information. Varies a lot between operating systems. \'m\': Machine type. eg. i386.\n * @return string\n */")
	ZEND_RAW_FENTRY("php_ini_scanned_files", zif_php_ini_scanned_files, arginfo_php_ini_scanned_files, 0, NULL, "/**\n * Return a list of .ini files parsed from the additional ini dir\n * @return string|false\n */")
	ZEND_RAW_FENTRY("php_ini_loaded_file", zif_php_ini_loaded_file, arginfo_php_ini_loaded_file, 0, NULL, "/**\n * Retrieve a path to the loaded php.ini file\n * @return string|false\n */")
	ZEND_RAW_FENTRY("iptcembed", zif_iptcembed, arginfo_iptcembed, 0, NULL, "/**\n * Embeds binary IPTC data into a JPEG image\n * @param string $iptc_data The data to be written.\n * @param string $filename Path to the JPEG image.\n * @param int $spool Spool flag. If the spool flag is less than 2 then the JPEG will be returned as a string. Otherwise the JPEG will be printed to STDOUT.\n * @return string|bool\n */")
	ZEND_RAW_FENTRY("iptcparse", zif_iptcparse, arginfo_iptcparse, 0, NULL, "/**\n * Parse a binary IPTC block into single tags\n * @param string $iptc_block A binary IPTC block.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("levenshtein", zif_levenshtein, arginfo_levenshtein, 0, NULL, "/**\n * Calculate Levenshtein distance between two strings\n * @param string $string1 One of the strings being evaluated for Levenshtein distance.\n * @param string $string2 One of the strings being evaluated for Levenshtein distance.\n * @param int $insertion_cost Defines the cost of insertion.\n * @param int $replacement_cost Defines the cost of replacement.\n * @param int $deletion_cost Defines the cost of deletion.\n * @return int\n */")
#if (defined(HAVE_SYMLINK) || defined(PHP_WIN32))
	ZEND_RAW_FENTRY("readlink", zif_readlink, arginfo_readlink, 0, NULL, "/**\n * Returns the target of a symbolic link\n * @param string $path The symbolic link path.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("linkinfo", zif_linkinfo, arginfo_linkinfo, 0, NULL, "/**\n * Gets information about a link\n * @param string $path Path to the link.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("symlink", zif_symlink, arginfo_symlink, 0, NULL, "/**\n * Creates a symbolic link\n * @param string $target Target of the link.\n * @param string $link The link name.\n * @return bool\n */")
	ZEND_RAW_FENTRY("link", zif_link, arginfo_link, 0, NULL, "/**\n * Create a hard link\n * @param string $target Target of the link.\n * @param string $link The link name.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("mail", zif_mail, arginfo_mail, 0, NULL, "/**\n * Send mail\n * @param string $to Receiver, or receivers of the mail.\n * @param string $subject Subject of the email to be sent.\n * @param string $message Message to be sent.\n * @param array|string $additional_headers String or array to be inserted at the end of the email header.\n * @param string $additional_params The additional_params parameter can be used to pass additional flags as command line options to the program configured to be used when sending mail, as defined by the sendmail_path configuration setting. For example, this can be used to set the envelope sender address when using sendmail with the -f sendmail option.\n * @return bool\n */")
	ZEND_RAW_FENTRY("abs", zif_abs, arginfo_abs, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Absolute value\n * @param int|float $num The numeric value to process\n * @return int|float\n */")
	ZEND_RAW_FENTRY("ceil", zif_ceil, arginfo_ceil, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Round fractions up\n * @param int|float $num The value to round\n * @return float\n */")
	ZEND_RAW_FENTRY("floor", zif_floor, arginfo_floor, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Round fractions down\n * @param int|float $num The numeric value to round\n * @return float\n */")
	ZEND_RAW_FENTRY("round", zif_round, arginfo_round, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Rounds a float\n * @param int|float $num The value to round.\n * @param int $precision The optional number of decimal digits to round to.\n * @param int|RoundingMode $mode Use RoundingMode or one of the following constants to specify the mode in which rounding occurs. Constants Description PHP_ROUND_HALF_UP Rounds num away from zero when it is half way there, making 1.5 into 2 and -1.5 into -2. PHP_ROUND_HALF_DOWN Rounds num towards zero when it is half way there, making 1.5 into 1 and -1.5 into -1. PHP_ROUND_HALF_EVEN Rounds num towards the nearest even value when it is half way there, making both 1.5 and 2.5 into 2. PHP_ROUND_HALF_ODD Rounds num towards the nearest odd value when it is half way there, making 1.5 into 1 and 2.5 into 3. However, please note that some newly added modes only exist in RoundingMode.\n * @return float\n */")
	ZEND_RAW_FENTRY("sin", zif_sin, arginfo_sin, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Sine\n * @param float $num A value in radians\n * @return float\n */")
	ZEND_RAW_FENTRY("cos", zif_cos, arginfo_cos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Cosine\n * @param float $num An angle in radians\n * @return float\n */")
	ZEND_RAW_FENTRY("tan", zif_tan, arginfo_tan, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Tangent\n * @param float $num The argument to process in radians\n * @return float\n */")
	ZEND_RAW_FENTRY("asin", zif_asin, arginfo_asin, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Arc sine\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("acos", zif_acos, arginfo_acos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Arc cosine\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("atan", zif_atan, arginfo_atan, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Arc tangent\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("atanh", zif_atanh, arginfo_atanh, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Inverse hyperbolic tangent\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("atan2", zif_atan2, arginfo_atan2, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Arc tangent of two variables\n * @param float $y Dividend parameter\n * @param float $x Divisor parameter\n * @return float\n */")
	ZEND_RAW_FENTRY("sinh", zif_sinh, arginfo_sinh, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Hyperbolic sine\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("cosh", zif_cosh, arginfo_cosh, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Hyperbolic cosine\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("tanh", zif_tanh, arginfo_tanh, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Hyperbolic tangent\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("asinh", zif_asinh, arginfo_asinh, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Inverse hyperbolic sine\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("acosh", zif_acosh, arginfo_acosh, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Inverse hyperbolic cosine\n * @param float $num The value to process\n * @return float\n */")
	ZEND_RAW_FENTRY("expm1", zif_expm1, arginfo_expm1, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Returns exp($num) - 1, computed in a way that is accurate even\n * when the value of number is close to zero\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("log1p", zif_log1p, arginfo_log1p, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Returns log(1 + number), computed in a way that is accurate even when\n * the value of number is close to zero\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("pi", zif_pi, arginfo_pi, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get value of pi\n * @return float\n */")
	ZEND_RAW_FENTRY("is_finite", zif_is_finite, arginfo_is_finite, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Checks whether a float is finite\n * @param float $num The float to check\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_nan", zif_is_nan, arginfo_is_nan, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Checks whether a float is NAN\n * @param float $num The float to check\n * @return bool\n */")
	ZEND_RAW_FENTRY("intdiv", zif_intdiv, arginfo_intdiv, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Integer division\n * @return int\n */")
	ZEND_RAW_FENTRY("is_infinite", zif_is_infinite, arginfo_is_infinite, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Checks whether a float is infinite\n * @param float $num The float to check\n * @return bool\n */")
	ZEND_RAW_FENTRY("pow", zif_pow, arginfo_pow, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Exponential expression\n * @param mixed $num The base to use\n * @param mixed $exponent The exponent\n * @return int|float|object\n */")
	ZEND_RAW_FENTRY("exp", zif_exp, arginfo_exp, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Calculates the exponent of e\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("log", zif_log, arginfo_log, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Natural logarithm\n * @param float $num The value to calculate the logarithm for\n * @param float $base The optional logarithmic base to use (defaults to \'e\' and so to the natural logarithm).\n * @return float\n */")
	ZEND_RAW_FENTRY("log10", zif_log10, arginfo_log10, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Base-10 logarithm\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("sqrt", zif_sqrt, arginfo_sqrt, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Square root\n * @param float $num The argument to process\n * @return float\n */")
	ZEND_RAW_FENTRY("hypot", zif_hypot, arginfo_hypot, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Calculate the length of the hypotenuse of a right-angle triangle\n * @param float $x Length of first side\n * @param float $y Length of second side\n * @return float\n */")
	ZEND_RAW_FENTRY("deg2rad", zif_deg2rad, arginfo_deg2rad, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Converts the number in degrees to the radian equivalent\n * @param float $num Angular value in degrees\n * @return float\n */")
	ZEND_RAW_FENTRY("rad2deg", zif_rad2deg, arginfo_rad2deg, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Converts the radian number to the equivalent number in degrees\n * @param float $num A radian value\n * @return float\n */")
	ZEND_RAW_FENTRY("bindec", zif_bindec, arginfo_bindec, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Binary to decimal\n * @param string $binary_string The binary string to convert. Any invalid characters in binary_string are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.\n * @return int|float\n */")
	ZEND_RAW_FENTRY("hexdec", zif_hexdec, arginfo_hexdec, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Hexadecimal to decimal\n * @param string $hex_string The hexadecimal string to convert\n * @return int|float\n */")
	ZEND_RAW_FENTRY("octdec", zif_octdec, arginfo_octdec, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Octal to decimal\n * @param string $octal_string The octal string to convert. Any invalid characters in octal_string are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.\n * @return int|float\n */")
	ZEND_RAW_FENTRY("decbin", zif_decbin, arginfo_decbin, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decimal to binary\n * @param int $num Decimal value to convert\n * @return string\n */")
	ZEND_RAW_FENTRY("decoct", zif_decoct, arginfo_decoct, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decimal to octal\n * @param int $num Decimal value to convert\n * @return string\n */")
	ZEND_RAW_FENTRY("dechex", zif_dechex, arginfo_dechex, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_dechex, "/**\n * Decimal to hexadecimal\n * @param int $num The decimal value to convert.\n * @return string\n */")
	ZEND_RAW_FENTRY("base_convert", zif_base_convert, arginfo_base_convert, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Convert a number between arbitrary bases\n * @param string $num The number to convert. Any invalid characters in num are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.\n * @param int $from_base The base num is in\n * @param int $to_base The base to convert num to\n * @return string\n */")
	ZEND_RAW_FENTRY("number_format", zif_number_format, arginfo_number_format, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Format a number with grouped thousands\n * @param float $num The number being formatted.\n * @param int $decimals Sets the number of decimal digits. If 0, the decimal_separator is omitted from the return value. As of PHP 8.3.0, when the value is negative, num is rounded to decimals significant digits before the decimal point. Prior to PHP 8.3.0, negative values were ignored and handled the same as 0.\n * @param string|null $decimal_separator Sets the separator for the decimal point.\n * @param string|null $thousands_separator Sets the thousands separator.\n * @return string\n */")
	ZEND_RAW_FENTRY("fmod", zif_fmod, arginfo_fmod, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Returns the floating point remainder (modulo) of the division\n * of the arguments\n * @param float $num1 The dividend\n * @param float $num2 The divisor\n * @return float\n */")
	ZEND_RAW_FENTRY("fdiv", zif_fdiv, arginfo_fdiv, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Divides two numbers, according to IEEE 754\n * @param float $num1 The dividend (numerator)\n * @param float $num2 The divisor\n * @return float\n */")
	ZEND_RAW_FENTRY("fpow", zif_fpow, arginfo_fpow, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Raise one number to the power of another, according to IEEE 754\n * @return float\n */")
#if defined(HAVE_GETTIMEOFDAY)
	ZEND_RAW_FENTRY("microtime", zif_microtime, arginfo_microtime, 0, NULL, "/**\n * Return current Unix timestamp with microseconds\n * @param bool $as_float If used and set to true, microtime will return a float instead of a string, as described in the return values section below.\n * @return string|float\n */")
	ZEND_RAW_FENTRY("gettimeofday", zif_gettimeofday, arginfo_gettimeofday, 0, NULL, "/**\n * Get current time\n * @param bool $as_float When set to true, a float instead of an array is returned.\n * @return array|float\n */")
#endif
#if defined(HAVE_GETRUSAGE)
	ZEND_RAW_FENTRY("getrusage", zif_getrusage, arginfo_getrusage, 0, NULL, "/**\n * Gets the current resource usages\n * @param int $mode If mode is 1, getrusage will be called with RUSAGE_CHILDREN.\n * @return array|false\n */")
#endif
	ZEND_RAW_FENTRY("pack", zif_pack, arginfo_pack, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Pack data into binary string\n * @param string $format The format string consists of format codes followed by an optional repeater argument. The repeater argument can be either an integer value or * for repeating to the end of the input data. For a, A, h, H the repeat count specifies how many characters of one data argument are taken, for @ it is the absolute position where to put the next data, for everything else the repeat count specifies how many data arguments are consumed and packed into the resulting binary string.\n * @return string\n */")
	ZEND_RAW_FENTRY("unpack", zif_unpack, arginfo_unpack, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Unpack data from binary string\n * @param string $format See pack for an explanation of the format codes.\n * @param string $string The packed data.\n * @param int $offset The offset to begin unpacking from.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("password_get_info", zif_password_get_info, arginfo_password_get_info, 0, NULL, "/**\n * Returns information about the given hash\n * @return array\n */")
	ZEND_RAW_FENTRY("password_hash", zif_password_hash, arginfo_password_hash, 0, NULL, "/**\n * Creates a password hash\n * @return string\n */")
	ZEND_RAW_FENTRY("password_needs_rehash", zif_password_needs_rehash, arginfo_password_needs_rehash, 0, NULL, "/**\n * Checks if the given hash matches the given options\n * @return bool\n */")
	ZEND_RAW_FENTRY("password_verify", zif_password_verify, arginfo_password_verify, 0, NULL, "/**\n * Verifies that a password matches a hash\n * @return bool\n */")
	ZEND_RAW_FENTRY("password_algos", zif_password_algos, arginfo_password_algos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get available password hashing algorithm IDs\n * @return array\n */")
#if defined(PHP_CAN_SUPPORT_PROC_OPEN)
	ZEND_RAW_FENTRY("proc_open", zif_proc_open, arginfo_proc_open, 0, NULL, "/**\n * Execute a command and open file pointers for input/output\n * @param array|string $command The commandline to execute as string. Special characters have to be properly escaped, and proper quoting has to be applied.\n * @param array $descriptor_spec An indexed array where the key represents the descriptor number and the value represents how PHP will pass that descriptor to the child process. 0 is stdin, 1 is stdout, while 2 is stderr.\n * @param array $pipes Will be set to an indexed array of file pointers that correspond to PHP\'s end of any pipes that are created.\n * @param string|null $cwd The initial working dir for the command. This must be an absolute directory path, or null if you want to use the default value (the working dir of the current PHP process)\n * @param array|null $env_vars An array with the environment variables for the command that will be run, or null to use the same environment as the current PHP process\n * @param array|null $options Allows you to specify additional options. Currently supported options include: suppress_errors (windows only): suppresses errors generated by this function when it\'s set to true bypass_shell (windows only): bypass cmd.exe shell when set to true blocking_pipes (windows only): force blocking pipes when set to true create_process_group (windows only): allow the child process to handle CTRL events when set to true create_new_console (windows only): the new process has a new console, instead of inheriting its parent\'s console\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("proc_close", zif_proc_close, arginfo_proc_close, 0, NULL, "/**\n * Close a process opened by proc_open and return the exit code of that process\n * @param resource $process The proc_open resource that will be closed.\n * @return int\n */")
	ZEND_RAW_FENTRY("proc_terminate", zif_proc_terminate, arginfo_proc_terminate, 0, NULL, "/**\n * Kills a process opened by proc_open\n * @param resource $process The proc_open resource that will be closed.\n * @param int $signal This optional parameter is only useful on POSIX operating systems; you may specify a signal to send to the process using the kill(2) system call.  The default is SIGTERM.\n * @return bool\n */")
	ZEND_RAW_FENTRY("proc_get_status", zif_proc_get_status, arginfo_proc_get_status, 0, NULL, "/**\n * Get information about a process opened by proc_open\n * @param resource $process The proc_open resource that will be evaluated.\n * @return array\n */")
#endif
	ZEND_RAW_FENTRY("quoted_printable_decode", zif_quoted_printable_decode, arginfo_quoted_printable_decode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Convert a quoted-printable string to an 8 bit string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("quoted_printable_encode", zif_quoted_printable_encode, arginfo_quoted_printable_encode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Convert a 8 bit string to a quoted-printable string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("soundex", zif_soundex, arginfo_soundex, 0, NULL, "/**\n * Calculate the soundex key of a string\n * @param string $string The input string.\n * @return string\n */")
	ZEND_RAW_FENTRY("stream_select", zif_stream_select, arginfo_stream_select, 0, NULL, "/**\n * Runs the equivalent of the select() system call on the given\n * arrays of streams with a timeout specified by seconds and microseconds\n * @param array|null $read The streams listed in the read array will be watched to see if characters become available for reading (more precisely, to see if a read will not block - in particular, a stream resource is also ready on end-of-file, in which case an fread will return a zero length string).\n * @param array|null $write The streams listed in the write array will be watched to see if a write will not block.\n * @param array|null $except The streams listed in the except array will be watched for high priority exceptional (\"out-of-band\") data arriving.\n * @param int|null $seconds The seconds and microseconds together form the timeout parameter, seconds specifies the number of seconds while microseconds the number of microseconds. The timeout is an upper bound on the amount of time that stream_select will wait before it returns. If seconds and microseconds are both set to 0, stream_select will not wait for data - instead it will return immediately, indicating the current status of the streams.\n * @param int|null $microseconds See seconds description.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("stream_context_create", zif_stream_context_create, arginfo_stream_context_create, 0, NULL, "/**\n * Creates a stream context\n * @param array|null $options Must be an associative array of associative arrays in the format $arr[\'wrapper\'][\'option\'] = $value, or null. Refer to context options for a list of available wrappers and options.\n * @param array|null $params Must be an associative array in the format $arr[\'parameter\'] = $value, or null. Refer to context parameters for a listing of standard stream parameters.\n * @return resource\n */")
	ZEND_RAW_FENTRY("stream_context_set_params", zif_stream_context_set_params, arginfo_stream_context_set_params, 0, NULL, "/**\n * Set parameters for a stream/wrapper/context\n * @param resource $context The stream or context to apply the parameters too.\n * @param array $params An associative array of parameters to be set in the following format: $params[\'paramname\'] = \"paramvalue\";.\n * @return true\n */")
	ZEND_RAW_FENTRY("stream_context_get_params", zif_stream_context_get_params, arginfo_stream_context_get_params, 0, NULL, "/**\n * Retrieves parameters from a context\n * @param resource $context A stream resource or a context resource\n * @return array\n */")
	ZEND_RAW_FENTRY("stream_context_set_option", zif_stream_context_set_option, arginfo_stream_context_set_option, 0, NULL, "/**\n * Sets an option for a stream/wrapper/context\n * @param resource $stream_or_context The stream or context resource to apply the options to.\n * @param string $wrapper The name of the wrapper (which may be different than the protocol). Refer to context options and parameters for a listing of stream options.\n * @param string $option_name The name of the option.\n * @param mixed $value The value of the option.\n * @param array $options The options to set for stream_or_context.\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("stream_context_set_options", zif_stream_context_set_options, arginfo_stream_context_set_options, 0, NULL, "/**\n * Sets options on the specified context\n * @param resource $context The stream or context resource to apply the options to.\n * @param array $options The options to set for context.\n * @return true\n */")
	ZEND_RAW_FENTRY("stream_context_get_options", zif_stream_context_get_options, arginfo_stream_context_get_options, 0, NULL, "/**\n * Retrieve options for a stream/wrapper/context\n * @param resource $stream_or_context The stream or context to get options from\n * @return array\n */")
	ZEND_RAW_FENTRY("stream_context_get_default", zif_stream_context_get_default, arginfo_stream_context_get_default, 0, NULL, "/**\n * Retrieve the default stream context\n * @return resource\n */")
	ZEND_RAW_FENTRY("stream_context_set_default", zif_stream_context_set_default, arginfo_stream_context_set_default, 0, NULL, "/**\n * Set the default stream context\n * @param array $options The options to set for the default context.\n * @return resource\n */")
	ZEND_RAW_FENTRY("stream_filter_prepend", zif_stream_filter_prepend, arginfo_stream_filter_prepend, 0, NULL, "/**\n * Attach a filter to a stream\n * @param resource $stream The target stream.\n * @param string $filtername The filter name.\n * @param int $read_write By default, stream_filter_prepend will attach the filter to the read filter chain if the file was opened for reading (i.e. File Mode: r, andor +).  The filter will also be attached to the write filter chain if the file was opened for writing (i.e. File Mode: w, a, andor +). STREAM_FILTER_READ, STREAM_FILTER_WRITE, andor STREAM_FILTER_ALL can also be passed to the read_write parameter to override this behavior. See stream_filter_append for an example of using this parameter.\n * @param mixed $params This filter will be added with the specified params to the beginning of the list and will therefore be called first during stream operations.  To add a filter to the end of the list, use stream_filter_append.\n * @return resource\n */")
	ZEND_RAW_FENTRY("stream_filter_append", zif_stream_filter_append, arginfo_stream_filter_append, 0, NULL, "/**\n * Attach a filter to a stream\n * @param resource $stream The target stream.\n * @param string $filtername The filter name.\n * @param int $read_write By default, stream_filter_append will attach the filter to the read filter chain if the file was opened for reading (i.e. File Mode: r, andor +).  The filter will also be attached to the write filter chain if the file was opened for writing (i.e. File Mode: w, a, andor +). STREAM_FILTER_READ, STREAM_FILTER_WRITE, andor STREAM_FILTER_ALL can also be passed to the read_write parameter to override this behavior.\n * @param mixed $params This filter will be added with the specified params to the end of the list and will therefore be called last during stream operations. To add a filter to the beginning of the list, use stream_filter_prepend.\n * @return resource\n */")
	ZEND_RAW_FENTRY("stream_filter_remove", zif_stream_filter_remove, arginfo_stream_filter_remove, 0, NULL, "/**\n * Remove a filter from a stream\n * @param resource $stream_filter The stream filter to be removed.\n * @return bool\n */")
	ZEND_RAW_FENTRY("stream_socket_client", zif_stream_socket_client, arginfo_stream_socket_client, 0, NULL, "/**\n * Open Internet or Unix domain socket connection\n * @param string $address Address to the socket to connect to.\n * @param int $error_code Will be set to the system level error number if connection fails.\n * @param string $error_message Will be set to the system level error message if the connection fails.\n * @param float|null $timeout Number of seconds until the connect() system call should timeout. By default, default_socket_timeout is used. This parameter only applies when not making asynchronous connection attempts. To set a timeout for readingwriting data over the socket, use the stream_set_timeout, as the timeout only applies while making connecting the socket.\n * @param int $flags Bitmask field which may be set to any combination of connection flags. Currently the select of connection flags is limited to STREAM_CLIENT_CONNECT (default), STREAM_CLIENT_ASYNC_CONNECT and STREAM_CLIENT_PERSISTENT.\n * @param resource|null $context A valid context resource created with stream_context_create.\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("stream_socket_server", zif_stream_socket_server, arginfo_stream_socket_server, 0, NULL, "/**\n * Create an Internet or Unix domain server socket\n * @param string $address The type of socket created is determined by the transport specified using standard URL formatting: transport:target.\n * @param int $error_code If the optional error_code and error_message arguments are present they will be set to indicate the actual system level error that occurred in the system-level socket(), bind(), and listen() calls. If the value returned in error_code is 0 and the function returned false, it is an indication that the error occurred before the bind() call. This is most likely due to a problem initializing the socket. Note that the error_code and error_message arguments will always be passed by reference.\n * @param string $error_message See error_code description.\n * @param int $flags A bitmask field which may be set to any combination of socket creation flags.\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("stream_socket_accept", zif_stream_socket_accept, arginfo_stream_socket_accept, 0, NULL, "/**\n * Accept a connection on a socket created by stream_socket_server\n * @param resource $socket The server socket to accept a connection from.\n * @param float|null $timeout Override the default socket accept timeout. Time should be given in seconds. By default, default_socket_timeout is used.\n * @param string $peer_name Will be set to the name (address) of the client which connected, if included and available from the selected transport.\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("stream_socket_get_name", zif_stream_socket_get_name, arginfo_stream_socket_get_name, 0, NULL, "/**\n * Retrieve the name of the local or remote sockets\n * @param resource $socket The socket to get the name of.\n * @param bool $remote If set to true the remote socket name will be returned, if set to false the local socket name will be returned.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("stream_socket_recvfrom", zif_stream_socket_recvfrom, arginfo_stream_socket_recvfrom, 0, NULL, "/**\n * Receives data from a socket, connected or not\n * @param resource $socket The remote socket.\n * @param int $length The number of bytes to receive from the socket.\n * @param int $flags The value of flags can be any combination of the following: Possible values for flags STREAM_OOB Process OOB (out-of-band) data. STREAM_PEEK Retrieve data from the socket, but do not consume the buffer. Subsequent calls to fread or stream_socket_recvfrom will see the same data.\n * @param string|null $address If address is provided it will be populated with the address of the remote socket.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("stream_socket_sendto", zif_stream_socket_sendto, arginfo_stream_socket_sendto, 0, NULL, "/**\n * Sends a message to a socket, whether it is connected or not\n * @param resource $socket The socket to send data to.\n * @param string $data The data to be sent.\n * @param int $flags The value of flags can be any combination of the following: possible values for flags STREAM_OOB Process OOB (out-of-band) data.\n * @param string $address The address specified when the socket stream was created will be used unless an alternate address is specified in address.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("stream_socket_enable_crypto", zif_stream_socket_enable_crypto, arginfo_stream_socket_enable_crypto, 0, NULL, "/**\n * Turns encryption on/off on an already connected socket\n * @param resource $stream The stream resource.\n * @param bool $enable Enabledisable cryptography on the stream.\n * @param int|null $crypto_method Setup encryption on the stream. Valid methods are STREAM_CRYPTO_METHOD_SSLv2_CLIENT STREAM_CRYPTO_METHOD_SSLv3_CLIENT STREAM_CRYPTO_METHOD_SSLv23_CLIENT STREAM_CRYPTO_METHOD_ANY_CLIENT STREAM_CRYPTO_METHOD_TLS_CLIENT STREAM_CRYPTO_METHOD_TLSv1_0_CLIENT STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT STREAM_CRYPTO_METHOD_TLSv1_3_CLIENT (as of PHP 7.4.0) STREAM_CRYPTO_METHOD_SSLv2_SERVER STREAM_CRYPTO_METHOD_SSLv3_SERVER STREAM_CRYPTO_METHOD_SSLv23_SERVER STREAM_CRYPTO_METHOD_ANY_SERVER STREAM_CRYPTO_METHOD_TLS_SERVER STREAM_CRYPTO_METHOD_TLSv1_0_SERVER STREAM_CRYPTO_METHOD_TLSv1_1_SERVER STREAM_CRYPTO_METHOD_TLSv1_2_SERVER STREAM_CRYPTO_METHOD_TLSv1_3_SERVER (as of PHP 7.4.0)\n * @param resource|null $session_stream Seed the stream with settings from session_stream.\n * @return int|bool\n */")
#if defined(HAVE_SHUTDOWN)
	ZEND_RAW_FENTRY("stream_socket_shutdown", zif_stream_socket_shutdown, arginfo_stream_socket_shutdown, 0, NULL, "/**\n * Shutdown a full-duplex connection\n * @param resource $stream An open stream (opened with stream_socket_client, for example)\n * @param int $mode One of the following constants: STREAM_SHUT_RD (disable further receptions), STREAM_SHUT_WR (disable further transmissions) or STREAM_SHUT_RDWR (disable further receptions and transmissions).\n * @return bool\n */")
#endif
#if defined(HAVE_SOCKETPAIR)
	ZEND_RAW_FENTRY("stream_socket_pair", zif_stream_socket_pair, arginfo_stream_socket_pair, 0, NULL, "/**\n * Creates a pair of connected, indistinguishable socket streams\n * @param int $domain The protocol family to be used: STREAM_PF_INET, STREAM_PF_INET6 or STREAM_PF_UNIX\n * @param int $type The type of communication to be used: STREAM_SOCK_DGRAM, STREAM_SOCK_RAW, STREAM_SOCK_RDM, STREAM_SOCK_SEQPACKET or STREAM_SOCK_STREAM\n * @param int $protocol The protocol to be used: STREAM_IPPROTO_ICMP, STREAM_IPPROTO_IP, STREAM_IPPROTO_RAW, STREAM_IPPROTO_TCP or STREAM_IPPROTO_UDP\n * @return array|false\n */")
#endif
	ZEND_RAW_FENTRY("stream_copy_to_stream", zif_stream_copy_to_stream, arginfo_stream_copy_to_stream, 0, NULL, "/**\n * Copies data from one stream to another\n * @param resource $from The source stream\n * @param resource $to The destination stream\n * @param int|null $length Maximum bytes to copy. By default all bytes left are copied.\n * @param int $offset The offset where to start to copy data\n * @return int|false\n */")
	ZEND_RAW_FENTRY("stream_get_contents", zif_stream_get_contents, arginfo_stream_get_contents, 0, NULL, "/**\n * Reads remainder of a stream into a string\n * @param resource $stream A stream resource (e.g. returned from fopen)\n * @param int|null $length The maximum bytes to read. Defaults to null (read all the remaining buffer).\n * @param int $offset Seek to the specified offset before reading. If this number is negative, no seeking will occur and reading will start from the current position.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("stream_supports_lock", zif_stream_supports_lock, arginfo_stream_supports_lock, 0, NULL, "/**\n * Tells whether the stream supports locking\n * @param resource $stream The stream to check.\n * @return bool\n */")
	ZEND_RAW_FENTRY("stream_set_write_buffer", zif_stream_set_write_buffer, arginfo_stream_set_write_buffer, 0, NULL, "/**\n * Sets write file buffering on the given stream\n * @param resource $stream The file pointer.\n * @param int $size The number of bytes to buffer. If size is 0 then write operations are unbuffered.  This ensures that all writes with fwrite are completed before other processes are allowed to write to that output stream.\n * @return int\n */")
	ZEND_RAW_FENTRY("set_file_buffer", zif_stream_set_write_buffer, arginfo_set_file_buffer, 0, NULL, "/**\n * Alias stream_set_write_buffer\n */")
	ZEND_RAW_FENTRY("stream_set_read_buffer", zif_stream_set_read_buffer, arginfo_stream_set_read_buffer, 0, NULL, "/**\n * Set read file buffering on the given stream\n * @return int\n */")
	ZEND_RAW_FENTRY("stream_set_blocking", zif_stream_set_blocking, arginfo_stream_set_blocking, 0, NULL, "/**\n * Set blocking/non-blocking mode on a stream\n * @param resource $stream The stream.\n * @param bool $enable If enable is false, the given stream will be switched to non-blocking mode, and if true, it will be switched to blocking mode.  This affects calls like fgets and fread that read from the stream.  In non-blocking mode an fgets call will always return right away while in blocking mode it will wait for data to become available on the stream.\n * @return bool\n */")
	ZEND_RAW_FENTRY("socket_set_blocking", zif_stream_set_blocking, arginfo_socket_set_blocking, 0, NULL, "/**\n * Alias stream_set_blocking\n */")
	ZEND_RAW_FENTRY("stream_get_meta_data", zif_stream_get_meta_data, arginfo_stream_get_meta_data, 0, NULL, "/**\n * Retrieves header/meta data from streams/file pointers\n * @param resource $stream The stream can be any stream created by fopen, fsockopen pfsockopen and stream_socket_client.\n * @return array\n */")
	ZEND_RAW_FENTRY("socket_get_status", zif_stream_get_meta_data, arginfo_socket_get_status, 0, NULL, "/**\n * Alias stream_get_meta_data\n */")
	ZEND_RAW_FENTRY("stream_get_line", zif_stream_get_line, arginfo_stream_get_line, 0, NULL, "/**\n * Gets line from stream resource up to a given delimiter\n * @param resource $stream A valid file handle.\n * @param int $length The maximum number of bytes to read from the handle. Negative values are not supported. Zero (0) means the default socket chunk size, i.e. 8192 bytes.\n * @param string $ending An optional string delimiter.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("stream_resolve_include_path", zif_stream_resolve_include_path, arginfo_stream_resolve_include_path, 0, NULL, "/**\n * Resolve filename against the include path\n * @param string $filename The filename to resolve.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("stream_get_wrappers", zif_stream_get_wrappers, arginfo_stream_get_wrappers, 0, NULL, "/**\n * Retrieve list of registered streams\n * @return array\n */")
	ZEND_RAW_FENTRY("stream_get_transports", zif_stream_get_transports, arginfo_stream_get_transports, 0, NULL, "/**\n * Retrieve list of registered socket transports\n * @return array\n */")
	ZEND_RAW_FENTRY("stream_is_local", zif_stream_is_local, arginfo_stream_is_local, 0, NULL, "/**\n * Checks if a stream is a local stream\n * @param resource|string $stream The stream resource or URL to check.\n * @return bool\n */")
	ZEND_RAW_FENTRY("stream_isatty", zif_stream_isatty, arginfo_stream_isatty, 0, NULL, "/**\n * Check if a stream is a TTY\n * @return bool\n */")
#if defined(PHP_WIN32)
	ZEND_RAW_FENTRY("sapi_windows_vt100_support", zif_sapi_windows_vt100_support, arginfo_sapi_windows_vt100_support, 0, NULL, "/**\n * Get or set VT100 support for the specified stream associated to an output buffer of a Windows console.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("stream_set_chunk_size", zif_stream_set_chunk_size, arginfo_stream_set_chunk_size, 0, NULL, "/**\n * Set the stream chunk size\n * @return int\n */")
#if (defined(HAVE_SYS_TIME_H) || defined(PHP_WIN32))
	ZEND_RAW_FENTRY("stream_set_timeout", zif_stream_set_timeout, arginfo_stream_set_timeout, 0, NULL, "/**\n * Set timeout period on a stream\n * @param resource $stream The target stream.\n * @param int $seconds The seconds part of the timeout to be set.\n * @param int $microseconds The microseconds part of the timeout to be set.\n * @return bool\n */")
	ZEND_RAW_FENTRY("socket_set_timeout", zif_stream_set_timeout, arginfo_socket_set_timeout, ZEND_ACC_DEPRECATED, NULL, NULL)
#endif
	ZEND_RAW_FENTRY("gettype", zif_gettype, arginfo_gettype, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get the type of a variable\n * @param mixed $value The variable being type checked.\n * @return string\n */")
	ZEND_RAW_FENTRY("get_debug_type", zif_get_debug_type, arginfo_get_debug_type, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Gets the type name of a variable in a way that is suitable for debugging\n * @param mixed $value The variable being type checked.\n * @return string\n */")
	ZEND_RAW_FENTRY("settype", zif_settype, arginfo_settype, 0, NULL, "/**\n * Set the type of a variable\n * @param mixed $var The variable being converted.\n * @param string $type Possibles values of type are: \"boolean\" or \"bool\" \"integer\" or \"int\" \"float\" or \"double\" \"string\" \"array\" \"object\" \"null\"\n * @return bool\n */")
	ZEND_RAW_FENTRY("intval", zif_intval, arginfo_intval, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get the integer value of a variable\n * @param mixed $value The scalar value being converted to an integer\n * @param int $base The base for the conversion\n * @return int\n */")
	ZEND_RAW_FENTRY("floatval", zif_floatval, arginfo_floatval, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get float value of a variable\n * @param mixed $value May be any scalar type. floatval should not be used on objects, as doing so will emit an E_WARNING level error and return 1.\n * @return float\n */")
	ZEND_RAW_FENTRY("doubleval", zif_floatval, arginfo_doubleval, 0, NULL, "/**\n * Alias floatval\n */")
	ZEND_RAW_FENTRY("boolval", zif_boolval, arginfo_boolval, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get the boolean value of a variable\n * @return bool\n */")
	ZEND_RAW_FENTRY("strval", zif_strval, arginfo_strval, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Get string value of a variable\n * @param mixed $value The variable that is being converted to a string.\n * @return string\n */")
	ZEND_RAW_FENTRY("is_null", zif_is_null, arginfo_is_null, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds whether a variable is null\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_resource", zif_is_resource, arginfo_is_resource, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds whether a variable is a resource\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_bool", zif_is_bool, arginfo_is_bool, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds out whether a variable is a boolean\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_int", zif_is_int, arginfo_is_int, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find whether the type of a variable is integer\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_integer", zif_is_int, arginfo_is_integer, 0, NULL, "/**\n * Alias is_int\n */")
	ZEND_RAW_FENTRY("is_long", zif_is_int, arginfo_is_long, 0, NULL, "/**\n * Alias is_int\n */")
	ZEND_RAW_FENTRY("is_float", zif_is_float, arginfo_is_float, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds whether the type of a variable is float\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_double", zif_is_float, arginfo_is_double, 0, NULL, "/**\n * Alias is_float\n */")
	ZEND_RAW_FENTRY("is_numeric", zif_is_numeric, arginfo_is_numeric, ZEND_ACC_COMPILE_TIME_EVAL, frameless_function_infos_is_numeric, "/**\n * Finds whether a variable is a number or a numeric string\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_string", zif_is_string, arginfo_is_string, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Find whether the type of a variable is string\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_array", zif_is_array, arginfo_is_array, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds whether a variable is an array\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_object", zif_is_object, arginfo_is_object, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds whether a variable is an object\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_scalar", zif_is_scalar, arginfo_is_scalar, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Finds whether a variable is a scalar\n * @param mixed $value The variable being evaluated.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_callable", zif_is_callable, arginfo_is_callable, 0, NULL, "/**\n * Verify that a value can be called as a function from the current scope\n * @param mixed $value The value to be checked.\n * @param bool $syntax_only If set to true the function only verifies that value might be a function or method. It will reject any values that are not invokable objects, Closure, strings, or arrays that do not have a valid structure to be used as a callback. A valid callable array has 2 entries, the first of which is an object or a string, and the second a string.\n * @param string $callable_name Receives the \"callable name\", e.g. \"SomeClass::someMethod\". Note, however, that despite the implication that SomeClass::someMethod() is a callable static method, this is not the case.\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_iterable", zif_is_iterable, arginfo_is_iterable, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Verify that the contents of a variable is an iterable value\n * @param mixed $value The value to check\n * @return bool\n */")
	ZEND_RAW_FENTRY("is_countable", zif_is_countable, arginfo_is_countable, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Verify that the contents of a variable is a countable value\n * @param mixed $value The value to check\n * @return bool\n */")
#if defined(HAVE_GETTIMEOFDAY)
	ZEND_RAW_FENTRY("uniqid", zif_uniqid, arginfo_uniqid, 0, NULL, "/**\n * Generate a time-based identifier\n * @param string $prefix Can be useful, for instance, if you generate identifiers simultaneously on several hosts that could generate the same identifier at the same microsecond. (This can happen even on a single host if the system clock is moved backwards, such as by an NTP adjustment.)\n * @param bool $more_entropy If set to true, uniqid will add additional entropy (using the combined linear congruential generator) at the end of the return value, which increases the likelihood that the result will be unique.\n * @return string\n */")
#endif
	ZEND_RAW_FENTRY("parse_url", zif_parse_url, arginfo_parse_url, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Parse a URL and return its components\n * @param string $url The URL to parse.\n * @param int $component Specify one of PHP_URL_SCHEME, PHP_URL_HOST, PHP_URL_PORT, PHP_URL_USER, PHP_URL_PASS, PHP_URL_PATH, PHP_URL_QUERY or PHP_URL_FRAGMENT to retrieve just a specific URL component as a string (except when PHP_URL_PORT is given, in which case the return value will be an int).\n * @return int|string|array|null|false\n */")
	ZEND_RAW_FENTRY("urlencode", zif_urlencode, arginfo_urlencode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * URL-encodes string\n * @param string $string The string to be encoded.\n * @return string\n */")
	ZEND_RAW_FENTRY("urldecode", zif_urldecode, arginfo_urldecode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decodes URL-encoded string\n * @param string $string The string to be decoded.\n * @return string\n */")
	ZEND_RAW_FENTRY("rawurlencode", zif_rawurlencode, arginfo_rawurlencode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * URL-encode according to RFC 3986\n * @param string $string The URL to be encoded.\n * @return string\n */")
	ZEND_RAW_FENTRY("rawurldecode", zif_rawurldecode, arginfo_rawurldecode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decode URL-encoded strings\n * @param string $string The URL to be decoded.\n * @return string\n */")
	ZEND_RAW_FENTRY("get_headers", zif_get_headers, arginfo_get_headers, 0, NULL, "/**\n * Fetches all the headers sent by the server in response to an HTTP request\n * @param string $url The target URL.\n * @param bool $associative If the optional associative parameter is set to true, get_headers parses the response and sets the array\'s keys.\n * @param resource|null $context A valid context resource created with stream_context_create, or null to use the default context.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("stream_bucket_make_writeable", zif_stream_bucket_make_writeable, arginfo_stream_bucket_make_writeable, 0, NULL, "/**\n * Returns a bucket object from the brigade to operate on\n * @param resource $brigade The brigade to return a bucket object from.\n * @return StreamBucket|null\n */")
	ZEND_RAW_FENTRY("stream_bucket_prepend", zif_stream_bucket_prepend, arginfo_stream_bucket_prepend, 0, NULL, "/**\n * Prepend bucket to brigade\n * @return void\n */")
	ZEND_RAW_FENTRY("stream_bucket_append", zif_stream_bucket_append, arginfo_stream_bucket_append, 0, NULL, "/**\n * Append bucket to brigade\n * @return void\n */")
	ZEND_RAW_FENTRY("stream_bucket_new", zif_stream_bucket_new, arginfo_stream_bucket_new, 0, NULL, "/**\n * Create a new bucket for use on the current stream\n * @return StreamBucket\n */")
	ZEND_RAW_FENTRY("stream_get_filters", zif_stream_get_filters, arginfo_stream_get_filters, 0, NULL, "/**\n * Retrieve list of registered filters\n * @return array\n */")
	ZEND_RAW_FENTRY("stream_filter_register", zif_stream_filter_register, arginfo_stream_filter_register, 0, NULL, "/**\n * Register a user defined stream filter\n * @param string $filter_name The filter name to be registered.\n * @param string $class To implement a filter, you need to define a class as an extension of php_user_filter with a number of member functions. When performing readwrite operations on the stream to which your filter is attached, PHP will pass the data through your filter (and any other filters attached to that stream) so that the data may be modified as desired. You must implement the methods exactly as described in php_user_filter - doing otherwise will lead to undefined behaviour.\n * @return bool\n */")
	ZEND_RAW_FENTRY("convert_uuencode", zif_convert_uuencode, arginfo_convert_uuencode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Uuencode a string\n * @param string $string The data to be encoded.\n * @return string\n */")
	ZEND_RAW_FENTRY("convert_uudecode", zif_convert_uudecode, arginfo_convert_uudecode, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Decode a uuencoded string\n * @param string $string The uuencoded data.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("var_dump", zif_var_dump, arginfo_var_dump, 0, NULL, "/**\n * Dumps information about a variable\n * @param mixed $value The expression to dump.\n * @param mixed $values Further expressions to dump.\n * @return void\n */")
	ZEND_RAW_FENTRY("var_export", zif_var_export, arginfo_var_export, 0, NULL, "/**\n * Outputs or returns a parsable string representation of a variable\n * @param mixed $value The variable you want to export.\n * @param bool $return If used and set to true, var_export will return the variable representation instead of outputting it.\n * @return string|null\n */")
	ZEND_RAW_FENTRY("debug_zval_dump", zif_debug_zval_dump, arginfo_debug_zval_dump, 0, NULL, "/**\n * Dumps a string representation of an internal zval structure to output\n * @param mixed $value The variable or value to dump.\n * @param mixed $values Further variables or values to dump.\n * @return void\n */")
	ZEND_RAW_FENTRY("serialize", zif_serialize, arginfo_serialize, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Generates a storable representation of a value\n * @param mixed $value The value to be serialized. serialize handles all types, except the resource-type and some objects (see note below). You can even serialize arrays that contain references to itself. Circular references inside the arrayobject you are serializing will also be stored. Any other reference will be lost.\n * @return string\n */")
	ZEND_RAW_FENTRY("unserialize", zif_unserialize, arginfo_unserialize, 0, NULL, "/**\n * Creates a PHP value from a stored representation\n * @param string $data The serialized string.\n * @param array $options Any options to be provided to unserialize, as an associative array.\n * @return mixed\n */")
	ZEND_RAW_FENTRY("memory_get_usage", zif_memory_get_usage, arginfo_memory_get_usage, 0, NULL, "/**\n * Returns the amount of memory allocated to PHP\n * @param bool $real_usage Set this to true to get total memory allocated from system, including unused pages. If not set or false only the used memory is reported.\n * @return int\n */")
	ZEND_RAW_FENTRY("memory_get_peak_usage", zif_memory_get_peak_usage, arginfo_memory_get_peak_usage, 0, NULL, "/**\n * Returns the peak of memory allocated by PHP\n * @param bool $real_usage Set this to true to get the real size of memory allocated from system. If not set or false only the memory used by emalloc() is reported.\n * @return int\n */")
	ZEND_RAW_FENTRY("memory_reset_peak_usage", zif_memory_reset_peak_usage, arginfo_memory_reset_peak_usage, 0, NULL, "/**\n * Reset the peak memory usage\n * @return void\n */")
	ZEND_RAW_FENTRY("version_compare", zif_version_compare, arginfo_version_compare, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Compares two \"PHP-standardized\" version number strings\n * @param string $version1 First version number.\n * @param string $version2 Second version number.\n * @param string|null $operator An optional operator. The possible operators are: <, lt, <=, le, >, gt, >=, ge, ==, =, eq, !=, <>, ne respectively.\n * @return int|bool\n */")
#if defined(PHP_WIN32)
	ZEND_RAW_FENTRY("sapi_windows_cp_set", zif_sapi_windows_cp_set, arginfo_sapi_windows_cp_set, 0, NULL, "/**\n * Set process codepage\n * @return bool\n */")
	ZEND_RAW_FENTRY("sapi_windows_cp_get", zif_sapi_windows_cp_get, arginfo_sapi_windows_cp_get, 0, NULL, "/**\n * Get current codepage\n * @return int\n */")
	ZEND_RAW_FENTRY("sapi_windows_cp_conv", zif_sapi_windows_cp_conv, arginfo_sapi_windows_cp_conv, 0, NULL, "/**\n * Convert string from one codepage to another\n * @return string|null\n */")
	ZEND_RAW_FENTRY("sapi_windows_cp_is_utf8", zif_sapi_windows_cp_is_utf8, arginfo_sapi_windows_cp_is_utf8, 0, NULL, "/**\n * Indicates whether the codepage is UTF-8 compatible\n * @return bool\n */")
	ZEND_RAW_FENTRY("sapi_windows_set_ctrl_handler", zif_sapi_windows_set_ctrl_handler, arginfo_sapi_windows_set_ctrl_handler, 0, NULL, "/**\n * Set or remove a CTRL event handler\n * @return bool\n */")
	ZEND_RAW_FENTRY("sapi_windows_generate_ctrl_event", zif_sapi_windows_generate_ctrl_event, arginfo_sapi_windows_generate_ctrl_event, 0, NULL, "/**\n * Send a CTRL event to another process\n * @return bool\n */")
#endif
	ZEND_FE_END
};

static void register_basic_functions_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("EXTR_OVERWRITE", PHP_EXTR_OVERWRITE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_SKIP", PHP_EXTR_SKIP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_PREFIX_SAME", PHP_EXTR_PREFIX_SAME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_PREFIX_ALL", PHP_EXTR_PREFIX_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_PREFIX_INVALID", PHP_EXTR_PREFIX_INVALID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_PREFIX_IF_EXISTS", PHP_EXTR_PREFIX_IF_EXISTS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_IF_EXISTS", PHP_EXTR_IF_EXISTS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("EXTR_REFS", PHP_EXTR_REFS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_ASC", PHP_SORT_ASC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_DESC", PHP_SORT_DESC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_REGULAR", PHP_SORT_REGULAR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_NUMERIC", PHP_SORT_NUMERIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_STRING", PHP_SORT_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_LOCALE_STRING", PHP_SORT_LOCALE_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_NATURAL", PHP_SORT_NATURAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("SORT_FLAG_CASE", PHP_SORT_FLAG_CASE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CASE_LOWER", PHP_CASE_LOWER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CASE_UPPER", PHP_CASE_UPPER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("COUNT_NORMAL", PHP_COUNT_NORMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("COUNT_RECURSIVE", PHP_COUNT_RECURSIVE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ARRAY_FILTER_USE_VALUE", ARRAY_FILTER_USE_VALUE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ARRAY_FILTER_USE_BOTH", ARRAY_FILTER_USE_BOTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ARRAY_FILTER_USE_KEY", ARRAY_FILTER_USE_KEY, CONST_PERSISTENT);
	zend_constant *const_ASSERT_ACTIVE = REGISTER_LONG_CONSTANT("ASSERT_ACTIVE", PHP_ASSERT_ACTIVE, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_ASSERT_CALLBACK = REGISTER_LONG_CONSTANT("ASSERT_CALLBACK", PHP_ASSERT_CALLBACK, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_ASSERT_BAIL = REGISTER_LONG_CONSTANT("ASSERT_BAIL", PHP_ASSERT_BAIL, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_ASSERT_WARNING = REGISTER_LONG_CONSTANT("ASSERT_WARNING", PHP_ASSERT_WARNING, CONST_PERSISTENT | CONST_DEPRECATED);
	zend_constant *const_ASSERT_EXCEPTION = REGISTER_LONG_CONSTANT("ASSERT_EXCEPTION", PHP_ASSERT_EXCEPTION, CONST_PERSISTENT | CONST_DEPRECATED);
	REGISTER_LONG_CONSTANT("CONNECTION_ABORTED", PHP_CONNECTION_ABORTED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CONNECTION_NORMAL", PHP_CONNECTION_NORMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CONNECTION_TIMEOUT", PHP_CONNECTION_TIMEOUT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_USER", ZEND_INI_USER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_PERDIR", ZEND_INI_PERDIR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_SYSTEM", ZEND_INI_SYSTEM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_ALL", ZEND_INI_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_SCANNER_NORMAL", ZEND_INI_SCANNER_NORMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_SCANNER_RAW", ZEND_INI_SCANNER_RAW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INI_SCANNER_TYPED", ZEND_INI_SCANNER_TYPED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_SCHEME", PHP_URL_SCHEME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_HOST", PHP_URL_HOST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_PORT", PHP_URL_PORT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_USER", PHP_URL_USER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_PASS", PHP_URL_PASS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_PATH", PHP_URL_PATH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_QUERY", PHP_URL_QUERY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_URL_FRAGMENT", PHP_URL_FRAGMENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_QUERY_RFC1738", PHP_QUERY_RFC1738, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_QUERY_RFC3986", PHP_QUERY_RFC3986, CONST_PERSISTENT);
	REGISTER_DOUBLE_CONSTANT("M_E", M_E, CONST_PERSISTENT);
	ZEND_ASSERT(M_E == 2.718281828459045);
	REGISTER_DOUBLE_CONSTANT("M_LOG2E", M_LOG2E, CONST_PERSISTENT);
	ZEND_ASSERT(M_LOG2E == 1.4426950408889634);
	REGISTER_DOUBLE_CONSTANT("M_LOG10E", M_LOG10E, CONST_PERSISTENT);
	ZEND_ASSERT(M_LOG10E == 0.4342944819032518);
	REGISTER_DOUBLE_CONSTANT("M_LN2", M_LN2, CONST_PERSISTENT);
	ZEND_ASSERT(M_LN2 == 0.6931471805599453);
	REGISTER_DOUBLE_CONSTANT("M_LN10", M_LN10, CONST_PERSISTENT);
	ZEND_ASSERT(M_LN10 == 2.302585092994046);
	REGISTER_DOUBLE_CONSTANT("M_PI", M_PI, CONST_PERSISTENT);
	ZEND_ASSERT(M_PI == 3.141592653589793);
	REGISTER_DOUBLE_CONSTANT("M_PI_2", M_PI_2, CONST_PERSISTENT);
	ZEND_ASSERT(M_PI_2 == 1.5707963267948966);
	REGISTER_DOUBLE_CONSTANT("M_PI_4", M_PI_4, CONST_PERSISTENT);
	ZEND_ASSERT(M_PI_4 == 0.7853981633974483);
	REGISTER_DOUBLE_CONSTANT("M_1_PI", M_1_PI, CONST_PERSISTENT);
	ZEND_ASSERT(M_1_PI == 0.3183098861837907);
	REGISTER_DOUBLE_CONSTANT("M_2_PI", M_2_PI, CONST_PERSISTENT);
	ZEND_ASSERT(M_2_PI == 0.6366197723675814);
	REGISTER_DOUBLE_CONSTANT("M_SQRTPI", M_SQRTPI, CONST_PERSISTENT);
	ZEND_ASSERT(M_SQRTPI == 1.772453850905516);
	REGISTER_DOUBLE_CONSTANT("M_2_SQRTPI", M_2_SQRTPI, CONST_PERSISTENT);
	ZEND_ASSERT(M_2_SQRTPI == 1.1283791670955126);
	REGISTER_DOUBLE_CONSTANT("M_LNPI", M_LNPI, CONST_PERSISTENT);
	ZEND_ASSERT(M_LNPI == 1.1447298858494002);
	REGISTER_DOUBLE_CONSTANT("M_EULER", M_EULER, CONST_PERSISTENT);
	ZEND_ASSERT(M_EULER == 0.5772156649015329);
	REGISTER_DOUBLE_CONSTANT("M_SQRT2", M_SQRT2, CONST_PERSISTENT);
	ZEND_ASSERT(M_SQRT2 == 1.4142135623730951);
	REGISTER_DOUBLE_CONSTANT("M_SQRT1_2", M_SQRT1_2, CONST_PERSISTENT);
	ZEND_ASSERT(M_SQRT1_2 == 0.7071067811865476);
	REGISTER_DOUBLE_CONSTANT("M_SQRT3", M_SQRT3, CONST_PERSISTENT);
	ZEND_ASSERT(M_SQRT3 == 1.7320508075688772);
	REGISTER_DOUBLE_CONSTANT("INF", ZEND_INFINITY, CONST_PERSISTENT);
	REGISTER_DOUBLE_CONSTANT("NAN", ZEND_NAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_ROUND_HALF_UP", PHP_ROUND_HALF_UP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_ROUND_HALF_DOWN", PHP_ROUND_HALF_DOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_ROUND_HALF_EVEN", PHP_ROUND_HALF_EVEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PHP_ROUND_HALF_ODD", PHP_ROUND_HALF_ODD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SALT_LENGTH", PHP_MAX_SALT_LEN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_STD_DES", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_EXT_DES", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_MD5", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_BLOWFISH", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SHA256", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CRYPT_SHA512", 1, CONST_PERSISTENT);
#if (defined(PHP_WIN32) || (defined(HAVE_DNS_SEARCH_FUNC) && defined(HAVE_FULL_DNS_FUNCS)))
	REGISTER_LONG_CONSTANT("DNS_A", PHP_DNS_A, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_NS", PHP_DNS_NS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_CNAME", PHP_DNS_CNAME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_SOA", PHP_DNS_SOA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_PTR", PHP_DNS_PTR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_HINFO", PHP_DNS_HINFO, CONST_PERSISTENT);
#endif
#if (defined(PHP_WIN32) || (defined(HAVE_DNS_SEARCH_FUNC) && defined(HAVE_FULL_DNS_FUNCS))) && (!defined(PHP_WIN32))
	REGISTER_LONG_CONSTANT("DNS_CAA", PHP_DNS_CAA, CONST_PERSISTENT);
#endif
#if (defined(PHP_WIN32) || (defined(HAVE_DNS_SEARCH_FUNC) && defined(HAVE_FULL_DNS_FUNCS)))
	REGISTER_LONG_CONSTANT("DNS_MX", PHP_DNS_MX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_TXT", PHP_DNS_TXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_SRV", PHP_DNS_SRV, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_NAPTR", PHP_DNS_NAPTR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_AAAA", PHP_DNS_AAAA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_A6", PHP_DNS_A6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_ANY", PHP_DNS_ANY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DNS_ALL", PHP_DNS_ALL, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("HTML_SPECIALCHARS", PHP_HTML_SPECIALCHARS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("HTML_ENTITIES", PHP_HTML_ENTITIES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_COMPAT", ENT_COMPAT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_QUOTES", ENT_QUOTES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_NOQUOTES", ENT_NOQUOTES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_IGNORE", ENT_IGNORE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_SUBSTITUTE", ENT_SUBSTITUTE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_DISALLOWED", ENT_DISALLOWED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_HTML401", ENT_HTML401, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_XML1", ENT_XML1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_XHTML", ENT_XHTML, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ENT_HTML5", ENT_HTML5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_GIF", IMAGE_FILETYPE_GIF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_JPEG", IMAGE_FILETYPE_JPEG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_PNG", IMAGE_FILETYPE_PNG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_SWF", IMAGE_FILETYPE_SWF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_PSD", IMAGE_FILETYPE_PSD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_BMP", IMAGE_FILETYPE_BMP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_TIFF_II", IMAGE_FILETYPE_TIFF_II, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_TIFF_MM", IMAGE_FILETYPE_TIFF_MM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_JPC", IMAGE_FILETYPE_JPC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_JP2", IMAGE_FILETYPE_JP2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_JPX", IMAGE_FILETYPE_JPX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_JB2", IMAGE_FILETYPE_JB2, CONST_PERSISTENT);
#if (defined(HAVE_ZLIB) && !defined(COMPILE_DL_ZLIB))
	REGISTER_LONG_CONSTANT("IMAGETYPE_SWC", IMAGE_FILETYPE_SWC, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("IMAGETYPE_IFF", IMAGE_FILETYPE_IFF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_WBMP", IMAGE_FILETYPE_WBMP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_JPEG2000", IMAGE_FILETYPE_JPC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_XBM", IMAGE_FILETYPE_XBM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_ICO", IMAGE_FILETYPE_ICO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_WEBP", IMAGE_FILETYPE_WEBP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_AVIF", IMAGE_FILETYPE_AVIF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_HEIF", IMAGE_FILETYPE_HEIF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_UNKNOWN", IMAGE_FILETYPE_UNKNOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMAGETYPE_COUNT", IMAGE_FILETYPE_FIXED_COUNT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_GENERAL", PHP_INFO_GENERAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_CREDITS", PHP_INFO_CREDITS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_CONFIGURATION", PHP_INFO_CONFIGURATION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_MODULES", PHP_INFO_MODULES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_ENVIRONMENT", PHP_INFO_ENVIRONMENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_VARIABLES", PHP_INFO_VARIABLES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_LICENSE", PHP_INFO_LICENSE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("INFO_ALL", PHP_INFO_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_GROUP", PHP_CREDITS_GROUP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_GENERAL", PHP_CREDITS_GENERAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_SAPI", PHP_CREDITS_SAPI, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_MODULES", PHP_CREDITS_MODULES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_DOCS", PHP_CREDITS_DOCS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_FULLPAGE", PHP_CREDITS_FULLPAGE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_QA", PHP_CREDITS_QA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CREDITS_ALL", PHP_CREDITS_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_EMERG", LOG_EMERG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_ALERT", LOG_ALERT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_CRIT", LOG_CRIT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_ERR", LOG_ERR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_WARNING", LOG_WARNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_NOTICE", LOG_NOTICE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_INFO", LOG_INFO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_DEBUG", LOG_DEBUG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_KERN", LOG_KERN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_USER", LOG_USER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_MAIL", LOG_MAIL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_DAEMON", LOG_DAEMON, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_AUTH", LOG_AUTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_SYSLOG", LOG_SYSLOG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LPR", LOG_LPR, CONST_PERSISTENT);
#if defined(LOG_NEWS)
	REGISTER_LONG_CONSTANT("LOG_NEWS", LOG_NEWS, CONST_PERSISTENT);
#endif
#if defined(LOG_UUCP)
	REGISTER_LONG_CONSTANT("LOG_UUCP", LOG_UUCP, CONST_PERSISTENT);
#endif
#if defined(LOG_CRON)
	REGISTER_LONG_CONSTANT("LOG_CRON", LOG_CRON, CONST_PERSISTENT);
#endif
#if defined(LOG_AUTHPRIV)
	REGISTER_LONG_CONSTANT("LOG_AUTHPRIV", LOG_AUTHPRIV, CONST_PERSISTENT);
#endif
#if !defined(PHP_WIN32)
	REGISTER_LONG_CONSTANT("LOG_LOCAL0", LOG_LOCAL0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL1", LOG_LOCAL1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL2", LOG_LOCAL2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL3", LOG_LOCAL3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL4", LOG_LOCAL4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL5", LOG_LOCAL5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL6", LOG_LOCAL6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_LOCAL7", LOG_LOCAL7, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("LOG_PID", LOG_PID, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_CONS", LOG_CONS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_ODELAY", LOG_ODELAY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOG_NDELAY", LOG_NDELAY, CONST_PERSISTENT);
#if defined(LOG_NOWAIT)
	REGISTER_LONG_CONSTANT("LOG_NOWAIT", LOG_NOWAIT, CONST_PERSISTENT);
#endif
#if defined(LOG_PERROR)
	REGISTER_LONG_CONSTANT("LOG_PERROR", LOG_PERROR, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("STR_PAD_LEFT", PHP_STR_PAD_LEFT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STR_PAD_RIGHT", PHP_STR_PAD_RIGHT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("STR_PAD_BOTH", PHP_STR_PAD_BOTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PATHINFO_DIRNAME", PHP_PATHINFO_DIRNAME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PATHINFO_BASENAME", PHP_PATHINFO_BASENAME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PATHINFO_EXTENSION", PHP_PATHINFO_EXTENSION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PATHINFO_FILENAME", PHP_PATHINFO_FILENAME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PATHINFO_ALL", PHP_PATHINFO_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CHAR_MAX", CHAR_MAX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LC_CTYPE", LC_CTYPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LC_NUMERIC", LC_NUMERIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LC_TIME", LC_TIME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LC_COLLATE", LC_COLLATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LC_MONETARY", LC_MONETARY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LC_ALL", LC_ALL, CONST_PERSISTENT);
#if defined(LC_MESSAGES)
	REGISTER_LONG_CONSTANT("LC_MESSAGES", LC_MESSAGES, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ABDAY_1)
	REGISTER_LONG_CONSTANT("ABDAY_1", ABDAY_1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABDAY_2", ABDAY_2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABDAY_3", ABDAY_3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABDAY_4", ABDAY_4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABDAY_5", ABDAY_5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABDAY_6", ABDAY_6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABDAY_7", ABDAY_7, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(DAY_1)
	REGISTER_LONG_CONSTANT("DAY_1", DAY_1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DAY_2", DAY_2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DAY_3", DAY_3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DAY_4", DAY_4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DAY_5", DAY_5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DAY_6", DAY_6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DAY_7", DAY_7, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ABMON_1)
	REGISTER_LONG_CONSTANT("ABMON_1", ABMON_1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_2", ABMON_2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_3", ABMON_3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_4", ABMON_4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_5", ABMON_5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_6", ABMON_6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_7", ABMON_7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_8", ABMON_8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_9", ABMON_9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_10", ABMON_10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_11", ABMON_11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ABMON_12", ABMON_12, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(MON_1)
	REGISTER_LONG_CONSTANT("MON_1", MON_1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_2", MON_2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_3", MON_3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_4", MON_4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_5", MON_5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_6", MON_6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_7", MON_7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_8", MON_8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_9", MON_9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_10", MON_10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_11", MON_11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MON_12", MON_12, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(AM_STR)
	REGISTER_LONG_CONSTANT("AM_STR", AM_STR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(PM_STR)
	REGISTER_LONG_CONSTANT("PM_STR", PM_STR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(D_T_FMT)
	REGISTER_LONG_CONSTANT("D_T_FMT", D_T_FMT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(D_FMT)
	REGISTER_LONG_CONSTANT("D_FMT", D_FMT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(T_FMT)
	REGISTER_LONG_CONSTANT("T_FMT", T_FMT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(T_FMT_AMPM)
	REGISTER_LONG_CONSTANT("T_FMT_AMPM", T_FMT_AMPM, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ERA)
	REGISTER_LONG_CONSTANT("ERA", ERA, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ERA_YEAR)
	REGISTER_LONG_CONSTANT("ERA_YEAR", ERA_YEAR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ERA_D_T_FMT)
	REGISTER_LONG_CONSTANT("ERA_D_T_FMT", ERA_D_T_FMT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ERA_D_FMT)
	REGISTER_LONG_CONSTANT("ERA_D_FMT", ERA_D_FMT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ERA_T_FMT)
	REGISTER_LONG_CONSTANT("ERA_T_FMT", ERA_T_FMT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(ALT_DIGITS)
	REGISTER_LONG_CONSTANT("ALT_DIGITS", ALT_DIGITS, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(INT_CURR_SYMBOL)
	REGISTER_LONG_CONSTANT("INT_CURR_SYMBOL", INT_CURR_SYMBOL, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(CURRENCY_SYMBOL)
	REGISTER_LONG_CONSTANT("CURRENCY_SYMBOL", CURRENCY_SYMBOL, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(CRNCYSTR)
	REGISTER_LONG_CONSTANT("CRNCYSTR", CRNCYSTR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(MON_DECIMAL_POINT)
	REGISTER_LONG_CONSTANT("MON_DECIMAL_POINT", MON_DECIMAL_POINT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(MON_THOUSANDS_SEP)
	REGISTER_LONG_CONSTANT("MON_THOUSANDS_SEP", MON_THOUSANDS_SEP, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(MON_GROUPING)
	REGISTER_LONG_CONSTANT("MON_GROUPING", MON_GROUPING, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(POSITIVE_SIGN)
	REGISTER_LONG_CONSTANT("POSITIVE_SIGN", POSITIVE_SIGN, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(NEGATIVE_SIGN)
	REGISTER_LONG_CONSTANT("NEGATIVE_SIGN", NEGATIVE_SIGN, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(INT_FRAC_DIGITS)
	REGISTER_LONG_CONSTANT("INT_FRAC_DIGITS", INT_FRAC_DIGITS, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(FRAC_DIGITS)
	REGISTER_LONG_CONSTANT("FRAC_DIGITS", FRAC_DIGITS, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(P_CS_PRECEDES)
	REGISTER_LONG_CONSTANT("P_CS_PRECEDES", P_CS_PRECEDES, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(P_SEP_BY_SPACE)
	REGISTER_LONG_CONSTANT("P_SEP_BY_SPACE", P_SEP_BY_SPACE, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(N_CS_PRECEDES)
	REGISTER_LONG_CONSTANT("N_CS_PRECEDES", N_CS_PRECEDES, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(N_SEP_BY_SPACE)
	REGISTER_LONG_CONSTANT("N_SEP_BY_SPACE", N_SEP_BY_SPACE, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(P_SIGN_POSN)
	REGISTER_LONG_CONSTANT("P_SIGN_POSN", P_SIGN_POSN, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(N_SIGN_POSN)
	REGISTER_LONG_CONSTANT("N_SIGN_POSN", N_SIGN_POSN, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(DECIMAL_POINT)
	REGISTER_LONG_CONSTANT("DECIMAL_POINT", DECIMAL_POINT, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(RADIXCHAR)
	REGISTER_LONG_CONSTANT("RADIXCHAR", RADIXCHAR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(THOUSANDS_SEP)
	REGISTER_LONG_CONSTANT("THOUSANDS_SEP", THOUSANDS_SEP, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(THOUSEP)
	REGISTER_LONG_CONSTANT("THOUSEP", THOUSEP, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(GROUPING)
	REGISTER_LONG_CONSTANT("GROUPING", GROUPING, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(YESEXPR)
	REGISTER_LONG_CONSTANT("YESEXPR", YESEXPR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(NOEXPR)
	REGISTER_LONG_CONSTANT("NOEXPR", NOEXPR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(YESSTR)
	REGISTER_LONG_CONSTANT("YESSTR", YESSTR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(NOSTR)
	REGISTER_LONG_CONSTANT("NOSTR", NOSTR, CONST_PERSISTENT);
#endif
#if defined(HAVE_NL_LANGINFO) && defined(CODESET)
	REGISTER_LONG_CONSTANT("CODESET", CODESET, CONST_PERSISTENT);
#endif


	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "crypt", sizeof("crypt") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#if defined(HAVE_STRPTIME)

	zend_attribute *attribute_Deprecated_func_strptime_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "strptime", sizeof("strptime") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_strptime_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_2));
	attribute_Deprecated_func_strptime_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_strptime_0_arg1_str = zend_string_init("use date_parse_from_format() (for locale-independent parsing), or IntlDateFormatter::parse() (for locale-dependent parsing) instead", strlen("use date_parse_from_format() (for locale-independent parsing), or IntlDateFormatter::parse() (for locale-dependent parsing) instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_strptime_0->args[1].value, attribute_Deprecated_func_strptime_0_arg1_str);
	attribute_Deprecated_func_strptime_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
#endif

	zend_attribute *attribute_Deprecated_func_assert_options_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "assert_options", sizeof("assert_options") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 1);
	ZVAL_STR(&attribute_Deprecated_func_assert_options_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_3));
	attribute_Deprecated_func_assert_options_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);

	zend_attribute *attribute_Deprecated_func_utf8_encode_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "utf8_encode", sizeof("utf8_encode") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_utf8_encode_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_2));
	attribute_Deprecated_func_utf8_encode_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_utf8_encode_0_arg1_str = zend_string_init("visit the php.net documentation for various alternatives", strlen("visit the php.net documentation for various alternatives"), 1);
	ZVAL_STR(&attribute_Deprecated_func_utf8_encode_0->args[1].value, attribute_Deprecated_func_utf8_encode_0_arg1_str);
	attribute_Deprecated_func_utf8_encode_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_utf8_decode_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "utf8_decode", sizeof("utf8_decode") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_utf8_decode_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_2));
	attribute_Deprecated_func_utf8_decode_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_func_utf8_decode_0->args[1].value, attribute_Deprecated_func_utf8_encode_0_arg1_str);
	attribute_Deprecated_func_utf8_decode_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "password_hash", sizeof("password_hash") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "password_verify", sizeof("password_verify") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#if (defined(HAVE_SYS_TIME_H) || defined(PHP_WIN32))

	zend_attribute *attribute_Deprecated_func_socket_set_timeout_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "socket_set_timeout", sizeof("socket_set_timeout") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_socket_set_timeout_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_5));
	attribute_Deprecated_func_socket_set_timeout_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_socket_set_timeout_0_arg1_str = zend_string_init("use stream_set_timeout() instead", strlen("use stream_set_timeout() instead"), 1);
	ZVAL_STR(&attribute_Deprecated_func_socket_set_timeout_0->args[1].value, attribute_Deprecated_func_socket_set_timeout_0_arg1_str);
	attribute_Deprecated_func_socket_set_timeout_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
#endif

	zend_attribute *attribute_Deprecated_const_ASSERT_ACTIVE_0 = zend_add_global_constant_attribute(const_ASSERT_ACTIVE, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_ASSERT_ACTIVE_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_3));
	attribute_Deprecated_const_ASSERT_ACTIVE_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_const_ASSERT_ACTIVE_0_arg1_str = zend_string_init("as assert_options() is deprecated", strlen("as assert_options() is deprecated"), 1);
	ZVAL_STR(&attribute_Deprecated_const_ASSERT_ACTIVE_0->args[1].value, attribute_Deprecated_const_ASSERT_ACTIVE_0_arg1_str);
	attribute_Deprecated_const_ASSERT_ACTIVE_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_ASSERT_CALLBACK_0 = zend_add_global_constant_attribute(const_ASSERT_CALLBACK, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_ASSERT_CALLBACK_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_3));
	attribute_Deprecated_const_ASSERT_CALLBACK_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_ASSERT_CALLBACK_0->args[1].value, attribute_Deprecated_const_ASSERT_ACTIVE_0_arg1_str);
	attribute_Deprecated_const_ASSERT_CALLBACK_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_ASSERT_BAIL_0 = zend_add_global_constant_attribute(const_ASSERT_BAIL, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_ASSERT_BAIL_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_3));
	attribute_Deprecated_const_ASSERT_BAIL_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_ASSERT_BAIL_0->args[1].value, attribute_Deprecated_const_ASSERT_ACTIVE_0_arg1_str);
	attribute_Deprecated_const_ASSERT_BAIL_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_ASSERT_WARNING_0 = zend_add_global_constant_attribute(const_ASSERT_WARNING, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_ASSERT_WARNING_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_3));
	attribute_Deprecated_const_ASSERT_WARNING_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_ASSERT_WARNING_0->args[1].value, attribute_Deprecated_const_ASSERT_ACTIVE_0_arg1_str);
	attribute_Deprecated_const_ASSERT_WARNING_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_const_ASSERT_EXCEPTION_0 = zend_add_global_constant_attribute(const_ASSERT_EXCEPTION, ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_const_ASSERT_EXCEPTION_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_3));
	attribute_Deprecated_const_ASSERT_EXCEPTION_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_const_ASSERT_EXCEPTION_0->args[1].value, attribute_Deprecated_const_ASSERT_ACTIVE_0_arg1_str);
	attribute_Deprecated_const_ASSERT_EXCEPTION_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
}

static zend_class_entry *register_class___PHP_Incomplete_Class(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "__PHP_Incomplete_Class", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_ALLOW_DYNAMIC_PROPERTIES);

	zend_string *attribute_name_AllowDynamicProperties_class___PHP_Incomplete_Class_0 = zend_string_init_interned("AllowDynamicProperties", sizeof("AllowDynamicProperties") - 1, true);
	zend_add_class_attribute(class_entry, attribute_name_AllowDynamicProperties_class___PHP_Incomplete_Class_0, 0);
	zend_string_release_ex(attribute_name_AllowDynamicProperties_class___PHP_Incomplete_Class_0, true);

	return class_entry;
}

static zend_class_entry *register_class_AssertionError(zend_class_entry *class_entry_Error)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AssertionError", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_Error, 0);

	return class_entry;
}

static zend_class_entry *register_class_RoundingMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("RoundingMode", IS_UNDEF, NULL);

	zend_enum_add_case_cstr(class_entry, "HalfAwayFromZero", NULL);

	zend_enum_add_case_cstr(class_entry, "HalfTowardsZero", NULL);

	zend_enum_add_case_cstr(class_entry, "HalfEven", NULL);

	zend_enum_add_case_cstr(class_entry, "HalfOdd", NULL);

	zend_enum_add_case_cstr(class_entry, "TowardsZero", NULL);

	zend_enum_add_case_cstr(class_entry, "AwayFromZero", NULL);

	zend_enum_add_case_cstr(class_entry, "NegativeInfinity", NULL);

	zend_enum_add_case_cstr(class_entry, "PositiveInfinity", NULL);

	return class_entry;
}
