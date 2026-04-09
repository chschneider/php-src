/* This is a generated file, edit shmop.stub.php instead.
 * Stub hash: 6a39445d79ffb799042d8a7a97ae4a093d374db7 */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_shmop_open, 0, 4, Shmop, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_STRING, 0, "The flags that you can use: \"a\" for access (sets SHM_RDONLY for shmat) use this flag when you need to open an existing shared memory segment for read only \"c\" for create (sets IPC_CREATE) use this flag when you need to create a new shared memory segment or if a segment with the same key exists, try to open it for read and write \"w\" for read & write access use this flag when you need to read and write to a shared memory segment, use this flag in most cases. \"n\" create a new memory segment (sets IPC_CREATE|IPC_EXCL) use this flag when you want to create a new shared memory segment but if one already exists with the same flag, fail. This is useful for security purposes, using this you can prevent race condition exploits.")
	ZEND_ARG_TYPE_INFO(0, permissions, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_read, 0, 3, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, shmop, Shmop, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_close, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, shmop, Shmop, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, shmop, Shmop, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_write, 0, 3, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, shmop, Shmop, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shmop_delete, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, shmop, Shmop, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(shmop_open);
ZEND_FUNCTION(shmop_read);
ZEND_FUNCTION(shmop_close);
ZEND_FUNCTION(shmop_size);
ZEND_FUNCTION(shmop_write);
ZEND_FUNCTION(shmop_delete);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("shmop_open", zif_shmop_open, arginfo_shmop_open, 0, NULL, "/**\n * Create or open shared memory block\n * @param string $mode The flags that you can use: \"a\" for access (sets SHM_RDONLY for shmat) use this flag when you need to open an existing shared memory segment for read only \"c\" for create (sets IPC_CREATE) use this flag when you need to create a new shared memory segment or if a segment with the same key exists, try to open it for read and write \"w\" for read & write access use this flag when you need to read and write to a shared memory segment, use this flag in most cases. \"n\" create a new memory segment (sets IPC_CREATE|IPC_EXCL) use this flag when you want to create a new shared memory segment but if one already exists with the same flag, fail. This is useful for security purposes, using this you can prevent race condition exploits.\n * @return Shmop|false\n */")
	ZEND_RAW_FENTRY("shmop_read", zif_shmop_read, arginfo_shmop_read, 0, NULL, "/**\n * Read data from shared memory block\n * @return string\n */")
	ZEND_RAW_FENTRY("shmop_close", zif_shmop_close, arginfo_shmop_close, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("shmop_size", zif_shmop_size, arginfo_shmop_size, 0, NULL, "/**\n * Get size of shared memory block\n * @return int\n */")
	ZEND_RAW_FENTRY("shmop_write", zif_shmop_write, arginfo_shmop_write, 0, NULL, "/**\n * Write data into shared memory block\n * @return int\n */")
	ZEND_RAW_FENTRY("shmop_delete", zif_shmop_delete, arginfo_shmop_delete, 0, NULL, "/**\n * Delete shared memory block\n * @return bool\n */")
	ZEND_FE_END
};

static void register_shmop_symbols(int module_number)
{

	zend_attribute *attribute_Deprecated_func_shmop_close_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "shmop_close", sizeof("shmop_close") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_shmop_close_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_0));
	attribute_Deprecated_func_shmop_close_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_shmop_close_0_arg1_str = zend_string_init("as Shmop objects are freed automatically", strlen("as Shmop objects are freed automatically"), 1);
	ZVAL_STR(&attribute_Deprecated_func_shmop_close_0->args[1].value, attribute_Deprecated_func_shmop_close_0_arg1_str);
	attribute_Deprecated_func_shmop_close_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
}

static zend_class_entry *register_class_Shmop(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "Shmop", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
