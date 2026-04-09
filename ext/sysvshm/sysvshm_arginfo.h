/* This is a generated file, edit sysvshm.stub.php instead.
 * Stub hash: 4dcc3f484a901c91e0828631294314b8a2b00dbb */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_shm_attach, 0, 1, SysvSharedMemory, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, size, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, permissions, IS_LONG, 0, "0666")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shm_detach, 0, 1, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, shm, SysvSharedMemory, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shm_has_var, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, shm, SysvSharedMemory, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shm_remove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, shm, SysvSharedMemory, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shm_put_var, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, shm, SysvSharedMemory, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_shm_get_var, 0, 2, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, shm, SysvSharedMemory, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_shm_remove_var arginfo_shm_has_var

ZEND_FUNCTION(shm_attach);
ZEND_FUNCTION(shm_detach);
ZEND_FUNCTION(shm_has_var);
ZEND_FUNCTION(shm_remove);
ZEND_FUNCTION(shm_put_var);
ZEND_FUNCTION(shm_get_var);
ZEND_FUNCTION(shm_remove_var);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("shm_attach", zif_shm_attach, arginfo_shm_attach, 0, NULL, "/**\n * Creates or open a shared memory segment\n * @return SysvSharedMemory|false\n */")
	ZEND_RAW_FENTRY("shm_detach", zif_shm_detach, arginfo_shm_detach, 0, NULL, "/**\n * Disconnects from shared memory segment\n * @return true\n */")
	ZEND_RAW_FENTRY("shm_has_var", zif_shm_has_var, arginfo_shm_has_var, 0, NULL, "/**\n * Check whether a specific entry exists\n * @return bool\n */")
	ZEND_RAW_FENTRY("shm_remove", zif_shm_remove, arginfo_shm_remove, 0, NULL, "/**\n * Removes shared memory from Unix systems\n * @return bool\n */")
	ZEND_RAW_FENTRY("shm_put_var", zif_shm_put_var, arginfo_shm_put_var, 0, NULL, "/**\n * Inserts or updates a variable in shared memory\n * @return bool\n */")
	ZEND_RAW_FENTRY("shm_get_var", zif_shm_get_var, arginfo_shm_get_var, 0, NULL, "/**\n * Returns a variable from shared memory\n * @return mixed\n */")
	ZEND_RAW_FENTRY("shm_remove_var", zif_shm_remove_var, arginfo_shm_remove_var, 0, NULL, "/**\n * Removes a variable from shared memory\n * @return bool\n */")
	ZEND_FE_END
};

static zend_class_entry *register_class_SysvSharedMemory(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "SysvSharedMemory", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
