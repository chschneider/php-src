/* This is a generated file, edit hash.stub.php instead.
 * Stub hash: 43d4d5b7d357bee673ee3a76d437715ed11b6cdd */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_algos.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "Message to be hashed.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "An array of options for the various hashing algorithms. Currently, only the \"seed\" parameter is supported by the MurmurHash variants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_hash_file, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_algos.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "URL describing location of file to be hashed; Supports fopen wrappers.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "An array of options for the various hashing algorithms. Currently, only the \"seed\" parameter is supported by the MurmurHash variants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_hmac, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "Message to be hashed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, key, IS_STRING, 0, "Shared secret key used for generating the HMAC variant of the message digest.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_hash_hmac_file, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "URL describing location of file to be hashed; Supports fopen wrappers.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, key, IS_STRING, 0, "Shared secret key used for generating the HMAC variant of the message digest.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_hash_init, 0, 1, HashContext, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_algos. Non-cryptographic hash functions are not allowed if the HASH_HMAC flag is specified.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "Optional settings for hash generation, currently supports only one option: HASH_HMAC.  When specified, the key must be specified.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, key, IS_STRING, 0, "\"\"", "When HASH_HMAC is specified for flags, a shared secret key to be used with the HMAC hashing method must be supplied in this parameter.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "An array of options for the various hashing algorithms. Currently, only the \"seed\" parameter is supported by the MurmurHash variants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_update, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, context, HashContext, 0, "Hashing context returned by hash_init.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "Message to be included in the hash digest.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_update_stream, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, context, HashContext, 0, "Hashing context returned by hash_init.")
	ZEND_ARG_INFO(0, stream)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 0, "-1", "Maximum number of characters to copy from stream into the hashing context.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_update_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, context, HashContext, 0, "Hashing context returned by hash_init.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "URL describing location of file to be hashed; Supports fopen wrappers.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, stream_context, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_final, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, context, HashContext, 0, "Hashing context returned by hash_init.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_hash_copy, 0, 1, HashContext, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, context, HashContext, 0, "Hashing context returned by hash_init.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_algos, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_hash_hmac_algos arginfo_hash_algos

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_pbkdf2, 0, 4, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, password, IS_STRING, 0, "The password to use for the derivation.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, salt, IS_STRING, 0, "The salt to use for the derivation. This value should be generated randomly.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, iterations, IS_LONG, 0, "The number of internal iterations to perform for the derivation.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 0, "0", "The length of the output string. If binary is true this corresponds to the byte-length of the derived key, if binary is false this corresponds to twice the byte-length of the derived key (as every byte of the key is returned as two hexits).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "An array of options for the various hashing algorithms. Currently, only the \"seed\" key is supported by the MurmurHash variants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_equals, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, known_string, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, user_string, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_hash_hkdf, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, algo, IS_STRING, 0, "Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, key, IS_STRING, 0, "Input keying material (raw binary). Cannot be empty.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, length, IS_LONG, 0, "0", "Desired output length in bytes. Cannot be greater than 255 times the chosen hash function size.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, info, IS_STRING, 0, "\"\"", "Applicationcontext-specific info string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, salt, IS_STRING, 0, "\"\"", "Salt to use during derivation.")
ZEND_END_ARG_INFO()

#if defined(PHP_MHASH_BC)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mhash_get_block_size, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, algo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mhash_get_hash_name, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, algo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mhash_keygen_s2k, 0, 4, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, algo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_mhash_count, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_mhash, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, algo, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, key, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_HashContext___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_HashContext___serialize arginfo_hash_algos

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_HashContext___unserialize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_HashContext___debugInfo arginfo_hash_algos

ZEND_FUNCTION(hash);
ZEND_FUNCTION(hash_file);
ZEND_FUNCTION(hash_hmac);
ZEND_FUNCTION(hash_hmac_file);
ZEND_FUNCTION(hash_init);
ZEND_FUNCTION(hash_update);
ZEND_FUNCTION(hash_update_stream);
ZEND_FUNCTION(hash_update_file);
ZEND_FUNCTION(hash_final);
ZEND_FUNCTION(hash_copy);
ZEND_FUNCTION(hash_algos);
ZEND_FUNCTION(hash_hmac_algos);
ZEND_FUNCTION(hash_pbkdf2);
ZEND_FUNCTION(hash_equals);
ZEND_FUNCTION(hash_hkdf);
#if defined(PHP_MHASH_BC)
ZEND_FUNCTION(mhash_get_block_size);
ZEND_FUNCTION(mhash_get_hash_name);
ZEND_FUNCTION(mhash_keygen_s2k);
ZEND_FUNCTION(mhash_count);
ZEND_FUNCTION(mhash);
#endif
ZEND_METHOD(HashContext, __construct);
ZEND_METHOD(HashContext, __serialize);
ZEND_METHOD(HashContext, __unserialize);
ZEND_METHOD(HashContext, __debugInfo);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("hash", zif_hash, arginfo_hash, 0, NULL, "/**\n * Generate a hash value (message digest)\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_algos.\n * @param string $data Message to be hashed.\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @param array $options An array of options for the various hashing algorithms. Currently, only the \"seed\" parameter is supported by the MurmurHash variants.\n * @return string\n */")
	ZEND_RAW_FENTRY("hash_file", zif_hash_file, arginfo_hash_file, 0, NULL, "/**\n * Generate a hash value using the contents of a given file\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_algos.\n * @param string $filename URL describing location of file to be hashed; Supports fopen wrappers.\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @param array $options An array of options for the various hashing algorithms. Currently, only the \"seed\" parameter is supported by the MurmurHash variants.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("hash_hmac", zif_hash_hmac, arginfo_hash_hmac, 0, NULL, "/**\n * Generate a keyed hash value using the HMAC method\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.\n * @param string $data Message to be hashed.\n * @param string $key Shared secret key used for generating the HMAC variant of the message digest.\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @return string\n */")
	ZEND_RAW_FENTRY("hash_hmac_file", zif_hash_hmac_file, arginfo_hash_hmac_file, 0, NULL, "/**\n * Generate a keyed hash value using the HMAC method and the contents of a given file\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.\n * @param string $filename URL describing location of file to be hashed; Supports fopen wrappers.\n * @param string $key Shared secret key used for generating the HMAC variant of the message digest.\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("hash_init", zif_hash_init, arginfo_hash_init, 0, NULL, "/**\n * Initialize an incremental hashing context\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_algos. Non-cryptographic hash functions are not allowed if the HASH_HMAC flag is specified.\n * @param int $flags Optional settings for hash generation, currently supports only one option: HASH_HMAC.  When specified, the key must be specified.\n * @param string $key When HASH_HMAC is specified for flags, a shared secret key to be used with the HMAC hashing method must be supplied in this parameter.\n * @param array $options An array of options for the various hashing algorithms. Currently, only the \"seed\" parameter is supported by the MurmurHash variants.\n * @return HashContext\n */")
	ZEND_RAW_FENTRY("hash_update", zif_hash_update, arginfo_hash_update, 0, NULL, "/**\n * Pump data into an active hashing context\n * @param HashContext $context Hashing context returned by hash_init.\n * @param string $data Message to be included in the hash digest.\n * @return true\n */")
	ZEND_RAW_FENTRY("hash_update_stream", zif_hash_update_stream, arginfo_hash_update_stream, 0, NULL, "/**\n * Pump data into an active hashing context from an open stream\n * @param HashContext $context Hashing context returned by hash_init.\n * @param resource $stream Open file handle as returned by any stream creation function.\n * @param int $length Maximum number of characters to copy from stream into the hashing context.\n * @return int\n */")
	ZEND_RAW_FENTRY("hash_update_file", zif_hash_update_file, arginfo_hash_update_file, 0, NULL, "/**\n * Pump data into an active hashing context from a file\n * @param HashContext $context Hashing context returned by hash_init.\n * @param string $filename URL describing location of file to be hashed; Supports fopen wrappers.\n * @param resource|null $stream_context Stream context as returned by stream_context_create.\n * @return bool\n */")
	ZEND_RAW_FENTRY("hash_final", zif_hash_final, arginfo_hash_final, 0, NULL, "/**\n * Finalize an incremental hash and return resulting digest\n * @param HashContext $context Hashing context returned by hash_init.\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @return string\n */")
	ZEND_RAW_FENTRY("hash_copy", zif_hash_copy, arginfo_hash_copy, 0, NULL, "/**\n * Copy hashing context\n * @param HashContext $context Hashing context returned by hash_init.\n * @return HashContext\n */")
	ZEND_RAW_FENTRY("hash_algos", zif_hash_algos, arginfo_hash_algos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return a list of registered hashing algorithms\n * @return array\n */")
	ZEND_RAW_FENTRY("hash_hmac_algos", zif_hash_hmac_algos, arginfo_hash_hmac_algos, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return a list of registered hashing algorithms suitable for hash_hmac\n * @return array\n */")
	ZEND_RAW_FENTRY("hash_pbkdf2", zif_hash_pbkdf2, arginfo_hash_pbkdf2, 0, NULL, "/**\n * Generate a PBKDF2 key derivation of a supplied password\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.\n * @param string $password The password to use for the derivation.\n * @param string $salt The salt to use for the derivation. This value should be generated randomly.\n * @param int $iterations The number of internal iterations to perform for the derivation.\n * @param int $length The length of the output string. If binary is true this corresponds to the byte-length of the derived key, if binary is false this corresponds to twice the byte-length of the derived key (as every byte of the key is returned as two hexits).\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @param array $options An array of options for the various hashing algorithms. Currently, only the \"seed\" key is supported by the MurmurHash variants.\n * @return string\n */")
	ZEND_RAW_FENTRY("hash_equals", zif_hash_equals, arginfo_hash_equals, 0, NULL, "/**\n * Timing attack safe string comparison\n * @return bool\n */")
	ZEND_RAW_FENTRY("hash_hkdf", zif_hash_hkdf, arginfo_hash_hkdf, 0, NULL, "/**\n * Generate a HKDF key derivation of a supplied key input\n * @param string $algo Name of selected hashing algorithm (e.g. \"sha256\"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.\n * @param string $key Input keying material (raw binary). Cannot be empty.\n * @param int $length Desired output length in bytes. Cannot be greater than 255 times the chosen hash function size.\n * @param string $info Applicationcontext-specific info string.\n * @param string $salt Salt to use during derivation.\n * @return string\n */")
#if defined(PHP_MHASH_BC)
	ZEND_RAW_FENTRY("mhash_get_block_size", zif_mhash_get_block_size, arginfo_mhash_get_block_size, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("mhash_get_hash_name", zif_mhash_get_hash_name, arginfo_mhash_get_hash_name, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("mhash_keygen_s2k", zif_mhash_keygen_s2k, arginfo_mhash_keygen_s2k, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("mhash_count", zif_mhash_count, arginfo_mhash_count, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("mhash", zif_mhash, arginfo_mhash, ZEND_ACC_DEPRECATED, NULL, NULL)
#endif
	ZEND_FE_END
};

static const zend_function_entry class_HashContext_methods[] = {
	ZEND_ME(HashContext, __construct, arginfo_class_HashContext___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(HashContext, __serialize, arginfo_class_HashContext___serialize, ZEND_ACC_PUBLIC)
	ZEND_ME(HashContext, __unserialize, arginfo_class_HashContext___unserialize, ZEND_ACC_PUBLIC)
	ZEND_ME(HashContext, __debugInfo, arginfo_class_HashContext___debugInfo, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_hash_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("HASH_HMAC", PHP_HASH_HMAC, CONST_PERSISTENT);


	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_hmac", sizeof("hash_hmac") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_hmac_file", sizeof("hash_hmac_file") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_init", sizeof("hash_init") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_pbkdf2", sizeof("hash_pbkdf2") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_equals", sizeof("hash_equals") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_equals", sizeof("hash_equals") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "hash_hkdf", sizeof("hash_hkdf") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#if defined(PHP_MHASH_BC)

	zend_attribute *attribute_Deprecated_func_mhash_get_block_size_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mhash_get_block_size", sizeof("mhash_get_block_size") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 1);
	ZVAL_STR(&attribute_Deprecated_func_mhash_get_block_size_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_mhash_get_block_size_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);

	zend_attribute *attribute_Deprecated_func_mhash_get_hash_name_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mhash_get_hash_name", sizeof("mhash_get_hash_name") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 1);
	ZVAL_STR(&attribute_Deprecated_func_mhash_get_hash_name_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_mhash_get_hash_name_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);

	zend_attribute *attribute_Deprecated_func_mhash_keygen_s2k_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mhash_keygen_s2k", sizeof("mhash_keygen_s2k") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 1);
	ZVAL_STR(&attribute_Deprecated_func_mhash_keygen_s2k_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_mhash_keygen_s2k_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);

	zend_attribute *attribute_Deprecated_func_mhash_count_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mhash_count", sizeof("mhash_count") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 1);
	ZVAL_STR(&attribute_Deprecated_func_mhash_count_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_mhash_count_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);

	zend_attribute *attribute_Deprecated_func_mhash_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "mhash", sizeof("mhash") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 1);
	ZVAL_STR(&attribute_Deprecated_func_mhash_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_1));
	attribute_Deprecated_func_mhash_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
#endif
}

static zend_class_entry *register_class_HashContext(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "HashContext", class_HashContext_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	return class_entry;
}
