/* This is a generated file, edit bz2.stub.php instead.
 * Stub hash: feb045682e62b44eb2e39b84c921f0eb6261d8d0 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_bzopen, 0, 0, 2)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, mode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bzread, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, bz)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, length, IS_LONG, 0, "1024")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bzwrite, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, bz)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, length, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzflush, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

#define arginfo_bzclose arginfo_bzflush

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzerrno, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzerrstr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_bzerror, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, bz)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bzcompress, 0, 1, MAY_BE_STRING|MAY_BE_LONG)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, block_size, IS_LONG, 0, "4")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, work_factor, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bzdecompress, 0, 1, MAY_BE_STRING|MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, use_less_memory, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(bzopen);
ZEND_FUNCTION(bzread);
ZEND_FUNCTION(fwrite);
ZEND_FUNCTION(fflush);
ZEND_FUNCTION(fclose);
ZEND_FUNCTION(bzerrno);
ZEND_FUNCTION(bzerrstr);
ZEND_FUNCTION(bzerror);
ZEND_FUNCTION(bzcompress);
ZEND_FUNCTION(bzdecompress);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("bzopen", zif_bzopen, arginfo_bzopen, 0, NULL, "/**\n * Opens a bzip2 compressed file\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("bzread", zif_bzread, arginfo_bzread, 0, NULL, "/**\n * Binary safe bzip2 file read\n * @return string|false\n */")
	ZEND_RAW_FENTRY("bzwrite", zif_fwrite, arginfo_bzwrite, 0, NULL, "/**\n * Binary safe bzip2 file write\n * @return int|false\n */")
	ZEND_RAW_FENTRY("bzflush", zif_fflush, arginfo_bzflush, 0, NULL, "/**\n * Do nothing\n * @return bool\n */")
	ZEND_RAW_FENTRY("bzclose", zif_fclose, arginfo_bzclose, 0, NULL, "/**\n * Close a bzip2 file\n * @return bool\n */")
	ZEND_RAW_FENTRY("bzerrno", zif_bzerrno, arginfo_bzerrno, 0, NULL, "/**\n * Returns a bzip2 error number\n * @return int\n */")
	ZEND_RAW_FENTRY("bzerrstr", zif_bzerrstr, arginfo_bzerrstr, 0, NULL, "/**\n * Returns a bzip2 error string\n * @return string\n */")
	ZEND_RAW_FENTRY("bzerror", zif_bzerror, arginfo_bzerror, 0, NULL, "/**\n * Returns the bzip2 error number and error string in an array\n * @return array\n */")
	ZEND_RAW_FENTRY("bzcompress", zif_bzcompress, arginfo_bzcompress, 0, NULL, "/**\n * Compress a string into bzip2 encoded data\n * @return string|int\n */")
	ZEND_RAW_FENTRY("bzdecompress", zif_bzdecompress, arginfo_bzdecompress, 0, NULL, "/**\n * Decompresses bzip2 encoded data\n * @return string|int|false\n */")
	ZEND_FE_END
};
