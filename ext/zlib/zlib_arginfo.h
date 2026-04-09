/* This is a generated file, edit zlib.stub.php instead.
 * Stub hash: f9d0dd22620126a18029edaca009398653017d8b */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_ob_gzhandler, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_zlib_get_coding_type, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzfile, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The file name.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, use_include_path, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_gzopen, 0, 0, 2)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The file name.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_STRING, 0, "As in fopen (rb or wb) but can also include a compression level (wb9) or a strategy: f for filtered data as in wb6f, h for Huffman only compression as in wb1h. (See the description of deflateInit2 in zlib.h for more information about the strategy parameter.)")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, use_include_path, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_readgzfile, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The file name. This file will be opened from the filesystem and its contents written to standard output.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, use_include_path, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_zlib_encode, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, level, IS_LONG, 0, "-1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_zlib_decode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, max_length, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzdeflate, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The data to deflate.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, level, IS_LONG, 0, "-1", "The level of compression. Can be given as 0 for no compression up to 9 for maximum compression. If not given, the default compression level will be the default compression level of the zlib library.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_LONG, 0, "ZLIB_ENCODING_RAW", "One of ZLIB_ENCODING_* constants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzencode, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The data to encode.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, level, IS_LONG, 0, "-1", "The level of compression. Can be given as 0 for no compression up to 9 for maximum compression. If not given, the default compression level will be the default compression level of the zlib library.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_LONG, 0, "ZLIB_ENCODING_GZIP", "The encoding mode. Can be FORCE_GZIP (the default) or FORCE_DEFLATE.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzcompress, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The data to compress.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, level, IS_LONG, 0, "-1", "The level of compression. Can be given as 0 for no compression up to 9 for maximum compression.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, encoding, IS_LONG, 0, "ZLIB_ENCODING_DEFLATE", "One of ZLIB_ENCODING_* constants.")
ZEND_END_ARG_INFO()

#define arginfo_gzinflate arginfo_zlib_decode

#define arginfo_gzdecode arginfo_zlib_decode

#define arginfo_gzuncompress arginfo_zlib_decode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzwrite, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The string to write.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "The number of uncompressed bytes to write. If supplied, writing will stop after length (uncompressed) bytes have been written or the end of data is reached, whichever comes first.")
ZEND_END_ARG_INFO()

#define arginfo_gzputs arginfo_gzwrite

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gzrewind, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

#define arginfo_gzclose arginfo_gzrewind

#define arginfo_gzeof arginfo_gzrewind

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzgetc, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gzpassthru, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gzseek, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_LONG, 0, "The seeked offset.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, whence, IS_LONG, 0, "SEEK_SET", "whence values are: SEEK_SET - Set position equal to offset bytes. SEEK_CUR - Set position to current location plus offset.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gztell, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzread, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "The number of bytes to read.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_gzgets, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 1, "null", "The length of data to get.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_deflate_init, 0, 1, DeflateContext, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_LONG, 0)
	ZEND_ARG_TYPE_MASK(0, options, MAY_BE_ARRAY|MAY_BE_OBJECT, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_deflate_add, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, context, DeflateContext, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flush_mode, IS_LONG, 0, "ZLIB_SYNC_FLUSH")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_inflate_init, 0, 1, InflateContext, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_LONG, 0)
	ZEND_ARG_TYPE_MASK(0, options, MAY_BE_ARRAY|MAY_BE_OBJECT, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_inflate_add, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, context, InflateContext, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flush_mode, IS_LONG, 0, "ZLIB_SYNC_FLUSH")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_inflate_get_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, context, InflateContext, 0)
ZEND_END_ARG_INFO()

#define arginfo_inflate_get_read_len arginfo_inflate_get_status

ZEND_FUNCTION(ob_gzhandler);
ZEND_FUNCTION(zlib_get_coding_type);
ZEND_FUNCTION(gzfile);
ZEND_FUNCTION(gzopen);
ZEND_FUNCTION(readgzfile);
ZEND_FUNCTION(zlib_encode);
ZEND_FUNCTION(zlib_decode);
ZEND_FUNCTION(gzdeflate);
ZEND_FUNCTION(gzencode);
ZEND_FUNCTION(gzcompress);
ZEND_FUNCTION(gzinflate);
ZEND_FUNCTION(gzdecode);
ZEND_FUNCTION(gzuncompress);
ZEND_FUNCTION(fwrite);
ZEND_FUNCTION(rewind);
ZEND_FUNCTION(fclose);
ZEND_FUNCTION(feof);
ZEND_FUNCTION(fgetc);
ZEND_FUNCTION(fpassthru);
ZEND_FUNCTION(fseek);
ZEND_FUNCTION(ftell);
ZEND_FUNCTION(fread);
ZEND_FUNCTION(fgets);
ZEND_FUNCTION(deflate_init);
ZEND_FUNCTION(deflate_add);
ZEND_FUNCTION(inflate_init);
ZEND_FUNCTION(inflate_add);
ZEND_FUNCTION(inflate_get_status);
ZEND_FUNCTION(inflate_get_read_len);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("ob_gzhandler", zif_ob_gzhandler, arginfo_ob_gzhandler, 0, NULL, "/**\n * ob_start callback function to gzip output buffer\n * @return string|false\n */")
	ZEND_RAW_FENTRY("zlib_get_coding_type", zif_zlib_get_coding_type, arginfo_zlib_get_coding_type, 0, NULL, "/**\n * Returns the coding type used for output compression\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzfile", zif_gzfile, arginfo_gzfile, 0, NULL, "/**\n * Read entire gz-file into an array\n * @param string $filename The file name.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("gzopen", zif_gzopen, arginfo_gzopen, 0, NULL, "/**\n * Open gz-file\n * @param string $filename The file name.\n * @param string $mode As in fopen (rb or wb) but can also include a compression level (wb9) or a strategy: f for filtered data as in wb6f, h for Huffman only compression as in wb1h. (See the description of deflateInit2 in zlib.h for more information about the strategy parameter.)\n * @return resource|false\n */")
	ZEND_RAW_FENTRY("readgzfile", zif_readgzfile, arginfo_readgzfile, 0, NULL, "/**\n * Output a gz-file\n * @param string $filename The file name. This file will be opened from the filesystem and its contents written to standard output.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("zlib_encode", zif_zlib_encode, arginfo_zlib_encode, 0, NULL, "/**\n * Compress data with the specified encoding\n * @return string|false\n */")
	ZEND_RAW_FENTRY("zlib_decode", zif_zlib_decode, arginfo_zlib_decode, 0, NULL, "/**\n * Uncompress any raw/gzip/zlib encoded data\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzdeflate", zif_gzdeflate, arginfo_gzdeflate, 0, NULL, "/**\n * Deflate a string\n * @param string $data The data to deflate.\n * @param int $level The level of compression. Can be given as 0 for no compression up to 9 for maximum compression. If not given, the default compression level will be the default compression level of the zlib library.\n * @param int $encoding One of ZLIB_ENCODING_* constants.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzencode", zif_gzencode, arginfo_gzencode, 0, NULL, "/**\n * Create a gzip compressed string\n * @param string $data The data to encode.\n * @param int $level The level of compression. Can be given as 0 for no compression up to 9 for maximum compression. If not given, the default compression level will be the default compression level of the zlib library.\n * @param int $encoding The encoding mode. Can be FORCE_GZIP (the default) or FORCE_DEFLATE.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzcompress", zif_gzcompress, arginfo_gzcompress, 0, NULL, "/**\n * Compress a string\n * @param string $data The data to compress.\n * @param int $level The level of compression. Can be given as 0 for no compression up to 9 for maximum compression.\n * @param int $encoding One of ZLIB_ENCODING_* constants.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzinflate", zif_gzinflate, arginfo_gzinflate, 0, NULL, "/**\n * Inflate a deflated string\n * @param string $data The data compressed by gzdeflate.\n * @param int $max_length The maximum length of decoded data.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzdecode", zif_gzdecode, arginfo_gzdecode, 0, NULL, "/**\n * Decodes a gzip compressed string\n * @param string $data The data to decode, encoded by gzencode.\n * @param int $max_length The maximum length of data to decode.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzuncompress", zif_gzuncompress, arginfo_gzuncompress, 0, NULL, "/**\n * Uncompress a compressed string\n * @param string $data The data compressed by gzcompress.\n * @param int $max_length The maximum length of data to decode.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzwrite", zif_fwrite, arginfo_gzwrite, 0, NULL, "/**\n * Binary-safe gz-file write\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @param string $data The string to write.\n * @param int|null $length The number of uncompressed bytes to write. If supplied, writing will stop after length (uncompressed) bytes have been written or the end of data is reached, whichever comes first.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("gzputs", zif_fwrite, arginfo_gzputs, 0, NULL, "/**\n * Alias gzwrite\n */")
	ZEND_RAW_FENTRY("gzrewind", zif_rewind, arginfo_gzrewind, 0, NULL, "/**\n * Rewind the position of a gz-file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @return bool\n */")
	ZEND_RAW_FENTRY("gzclose", zif_fclose, arginfo_gzclose, 0, NULL, "/**\n * Close an open gz-file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @return bool\n */")
	ZEND_RAW_FENTRY("gzeof", zif_feof, arginfo_gzeof, 0, NULL, "/**\n * Test for EOF on a gz-file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @return bool\n */")
	ZEND_RAW_FENTRY("gzgetc", zif_fgetc, arginfo_gzgetc, 0, NULL, "/**\n * Get character from gz-file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzpassthru", zif_fpassthru, arginfo_gzpassthru, 0, NULL, "/**\n * Output all remaining data on a gz-file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @return int\n */")
	ZEND_RAW_FENTRY("gzseek", zif_fseek, arginfo_gzseek, 0, NULL, "/**\n * Seek on a gz-file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @param int $offset The seeked offset.\n * @param int $whence whence values are: SEEK_SET - Set position equal to offset bytes. SEEK_CUR - Set position to current location plus offset.\n * @return int\n */")
	ZEND_RAW_FENTRY("gztell", zif_ftell, arginfo_gztell, 0, NULL, "/**\n * Tell gz-file pointer read/write position\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("gzread", zif_fread, arginfo_gzread, 0, NULL, "/**\n * Binary-safe gz-file read\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @param int $length The number of bytes to read.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("gzgets", zif_fgets, arginfo_gzgets, 0, NULL, "/**\n * Get line from file pointer\n * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.\n * @param int|null $length The length of data to get.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("deflate_init", zif_deflate_init, arginfo_deflate_init, 0, NULL, "/**\n * Initialize an incremental deflate context\n * @return DeflateContext|false\n */")
	ZEND_RAW_FENTRY("deflate_add", zif_deflate_add, arginfo_deflate_add, 0, NULL, "/**\n * Incrementally deflate data\n * @return string|false\n */")
	ZEND_RAW_FENTRY("inflate_init", zif_inflate_init, arginfo_inflate_init, 0, NULL, "/**\n * Initialize an incremental inflate context\n * @return InflateContext|false\n */")
	ZEND_RAW_FENTRY("inflate_add", zif_inflate_add, arginfo_inflate_add, 0, NULL, "/**\n * Incrementally inflate encoded data\n * @return string|false\n */")
	ZEND_RAW_FENTRY("inflate_get_status", zif_inflate_get_status, arginfo_inflate_get_status, 0, NULL, "/**\n * Get decompression status\n * @return int\n */")
	ZEND_RAW_FENTRY("inflate_get_read_len", zif_inflate_get_read_len, arginfo_inflate_get_read_len, 0, NULL, "/**\n * Get number of bytes read so far\n * @return int\n */")
	ZEND_FE_END
};

static void register_zlib_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("FORCE_GZIP", PHP_ZLIB_ENCODING_GZIP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("FORCE_DEFLATE", PHP_ZLIB_ENCODING_DEFLATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_ENCODING_RAW", PHP_ZLIB_ENCODING_RAW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_ENCODING_GZIP", PHP_ZLIB_ENCODING_GZIP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_ENCODING_DEFLATE", PHP_ZLIB_ENCODING_DEFLATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_NO_FLUSH", Z_NO_FLUSH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_PARTIAL_FLUSH", Z_PARTIAL_FLUSH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_SYNC_FLUSH", Z_SYNC_FLUSH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_FULL_FLUSH", Z_FULL_FLUSH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_BLOCK", Z_BLOCK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_FINISH", Z_FINISH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_FILTERED", Z_FILTERED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_HUFFMAN_ONLY", Z_HUFFMAN_ONLY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_RLE", Z_RLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_FIXED", Z_FIXED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_DEFAULT_STRATEGY", Z_DEFAULT_STRATEGY, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("ZLIB_VERSION", ZLIB_VERSION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_VERNUM", ZLIB_VERNUM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_OK", Z_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_STREAM_END", Z_STREAM_END, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_NEED_DICT", Z_NEED_DICT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_ERRNO", Z_ERRNO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_STREAM_ERROR", Z_STREAM_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_DATA_ERROR", Z_DATA_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_MEM_ERROR", Z_MEM_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_BUF_ERROR", Z_BUF_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("ZLIB_VERSION_ERROR", Z_VERSION_ERROR, CONST_PERSISTENT);
}

static zend_class_entry *register_class_InflateContext(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "InflateContext", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_DeflateContext(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "DeflateContext", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
