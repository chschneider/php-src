/* This is a generated file, edit gmp.stub.php instead.
 * Stub hash: 809ab7bf9ac95ff2998a4ab59c445a5dcbab861b */

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_init, 0, 1, GMP, 0)
	ZEND_ARG_TYPE_MASK(0, num, MAY_BE_LONG|MAY_BE_STRING, NULL)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_import, 0, 1, GMP, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The binary string being imported")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, word_size, IS_LONG, 0, "1", "Default value is 1. The number of bytes in each chunk of binary data. This is mainly used in conjunction with the options parameter.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "GMP_MSW_FIRST | GMP_NATIVE_ENDIAN", "Default value is GMP_MSW_FIRST | GMP_NATIVE_ENDIAN.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_export, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The GMP number being exported")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, word_size, IS_LONG, 0, "1", "Default value is 1. The number of bytes in each chunk of binary data. This is mainly used in conjunction with the options parameter.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "GMP_MSW_FIRST | GMP_NATIVE_ENDIAN", "Default value is GMP_MSW_FIRST | GMP_NATIVE_ENDIAN.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_intval, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_strval, 0, 1, IS_STRING, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The GMP number that will be converted to a string.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, base, IS_LONG, 0, "10", "The base of the returned number. The default base is 10. Allowed values for the base are from 2 to 62 and -2 to -36.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_add, 0, 2, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The first summand (augent).")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num2, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The second summand (addend).")
ZEND_END_ARG_INFO()

#define arginfo_gmp_sub arginfo_gmp_add

#define arginfo_gmp_mul arginfo_gmp_add

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_div_qr, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number being divided.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num2, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number that num1 is being divided by.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, rounding_mode, IS_LONG, 0, "GMP_ROUND_ZERO", "See the gmp_div_q function for description of the rounding_mode argument.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_div_q, 0, 2, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number being divided.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num2, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number that num1 is being divided by.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, rounding_mode, IS_LONG, 0, "GMP_ROUND_ZERO", "The result rounding is defined by the rounding_mode, which can have the following values: GMP_ROUND_ZERO: The result is truncated towards 0. GMP_ROUND_PLUSINF: The result is rounded towards +infinity. GMP_ROUND_MINUSINF: The result is rounded towards -infinity.")
ZEND_END_ARG_INFO()

#define arginfo_gmp_div_r arginfo_gmp_div_q

#define arginfo_gmp_div arginfo_gmp_div_q

#define arginfo_gmp_mod arginfo_gmp_add

#define arginfo_gmp_divexact arginfo_gmp_add

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_neg, 0, 1, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
ZEND_END_ARG_INFO()

#define arginfo_gmp_abs arginfo_gmp_neg

#define arginfo_gmp_fact arginfo_gmp_neg

#define arginfo_gmp_sqrt arginfo_gmp_neg

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_sqrtrem, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number being square rooted.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_root, 0, 2, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, nth, IS_LONG, 0, "The positive root to take of num.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_rootrem, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, nth, IS_LONG, 0, "The positive root to take of num.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_pow, 0, 2, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The base number.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, exponent, IS_LONG, 0, "The positive power to raise the num.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_powm, 0, 3, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The base number.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, exponent, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The positive power to raise the num.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, modulus, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The modulo.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_perfect_square, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number being checked as a perfect square.")
ZEND_END_ARG_INFO()

#define arginfo_gmp_perfect_power arginfo_gmp_perfect_square

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_prob_prime, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number being checked as a prime.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, repetitions, IS_LONG, 0, "10", "Reasonable values of repetitions vary from 5 to 10 (default being 10); a higher value lowers the probability for a non-prime to pass as a \"probable\" prime.")
ZEND_END_ARG_INFO()

#define arginfo_gmp_gcd arginfo_gmp_add

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_gcdext, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num2, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
ZEND_END_ARG_INFO()

#define arginfo_gmp_lcm arginfo_gmp_add

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_gmp_invert, 0, 2, GMP, MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num2, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_jacobi, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num2, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
ZEND_END_ARG_INFO()

#define arginfo_gmp_legendre arginfo_gmp_jacobi

#define arginfo_gmp_kronecker arginfo_gmp_jacobi

#define arginfo_gmp_cmp arginfo_gmp_jacobi

#define arginfo_gmp_sign arginfo_gmp_intval

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_random_seed, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, seed, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The seed to be set for the gmp_random, gmp_random_bits, and gmp_random_range functions.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_random_bits, 0, 1, GMP, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, bits, IS_LONG, 0, "The number of bits to generate.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_random_range, 0, 2, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, min, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP number representing the lower bound for the random number")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, max, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP number representing the upper bound for the random number")
ZEND_END_ARG_INFO()

#define arginfo_gmp_and arginfo_gmp_add

#define arginfo_gmp_or arginfo_gmp_add

#define arginfo_gmp_com arginfo_gmp_neg

#define arginfo_gmp_xor arginfo_gmp_add

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_setbit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, num, GMP, 0, "A GMP object.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, index, IS_LONG, 0, "The index of the bit to set.  Index 0 represents the least significant bit.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, value, _IS_BOOL, 0, "true", "True to set the bit (set it to 1/on); false to clear the bit (set it to 0/off).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_clrbit, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, num, GMP, 0, "A GMP object.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, index, IS_LONG, 0, "The index of the bit to clear.  Index 0 represents the least significant bit.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_testbit, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, index, IS_LONG, 0, "The bit to test")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gmp_scan0, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, num1, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "The number to scan.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, start, IS_LONG, 0, "The starting bit.")
ZEND_END_ARG_INFO()

#define arginfo_gmp_scan1 arginfo_gmp_scan0

#define arginfo_gmp_popcount arginfo_gmp_intval

#define arginfo_gmp_hamdist arginfo_gmp_jacobi

#define arginfo_gmp_nextprime arginfo_gmp_neg

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_gmp_binomial, 0, 2, GMP, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, n, GMP, MAY_BE_LONG|MAY_BE_STRING, NULL, "A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).")
	ZEND_ARG_TYPE_INFO(0, k, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_GMP___construct, 0, 0, 0)
	ZEND_ARG_TYPE_MASK(0, num, MAY_BE_LONG|MAY_BE_STRING, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, base, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GMP___serialize, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_GMP___unserialize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_FUNCTION(gmp_init);
ZEND_FUNCTION(gmp_import);
ZEND_FUNCTION(gmp_export);
ZEND_FUNCTION(gmp_intval);
ZEND_FUNCTION(gmp_strval);
ZEND_FUNCTION(gmp_add);
ZEND_FUNCTION(gmp_sub);
ZEND_FUNCTION(gmp_mul);
ZEND_FUNCTION(gmp_div_qr);
ZEND_FUNCTION(gmp_div_q);
ZEND_FUNCTION(gmp_div_r);
ZEND_FUNCTION(gmp_mod);
ZEND_FUNCTION(gmp_divexact);
ZEND_FUNCTION(gmp_neg);
ZEND_FUNCTION(gmp_abs);
ZEND_FUNCTION(gmp_fact);
ZEND_FUNCTION(gmp_sqrt);
ZEND_FUNCTION(gmp_sqrtrem);
ZEND_FUNCTION(gmp_root);
ZEND_FUNCTION(gmp_rootrem);
ZEND_FUNCTION(gmp_pow);
ZEND_FUNCTION(gmp_powm);
ZEND_FUNCTION(gmp_perfect_square);
ZEND_FUNCTION(gmp_perfect_power);
ZEND_FUNCTION(gmp_prob_prime);
ZEND_FUNCTION(gmp_gcd);
ZEND_FUNCTION(gmp_gcdext);
ZEND_FUNCTION(gmp_lcm);
ZEND_FUNCTION(gmp_invert);
ZEND_FUNCTION(gmp_jacobi);
ZEND_FUNCTION(gmp_legendre);
ZEND_FUNCTION(gmp_kronecker);
ZEND_FUNCTION(gmp_cmp);
ZEND_FUNCTION(gmp_sign);
ZEND_FUNCTION(gmp_random_seed);
ZEND_FUNCTION(gmp_random_bits);
ZEND_FUNCTION(gmp_random_range);
ZEND_FUNCTION(gmp_and);
ZEND_FUNCTION(gmp_or);
ZEND_FUNCTION(gmp_com);
ZEND_FUNCTION(gmp_xor);
ZEND_FUNCTION(gmp_setbit);
ZEND_FUNCTION(gmp_clrbit);
ZEND_FUNCTION(gmp_testbit);
ZEND_FUNCTION(gmp_scan0);
ZEND_FUNCTION(gmp_scan1);
ZEND_FUNCTION(gmp_popcount);
ZEND_FUNCTION(gmp_hamdist);
ZEND_FUNCTION(gmp_nextprime);
ZEND_FUNCTION(gmp_binomial);
ZEND_METHOD(GMP, __construct);
ZEND_METHOD(GMP, __serialize);
ZEND_METHOD(GMP, __unserialize);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("gmp_init", zif_gmp_init, arginfo_gmp_init, 0, NULL, "/**\n * Create GMP number\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_import", zif_gmp_import, arginfo_gmp_import, 0, NULL, "/**\n * Import from a binary string\n * @param string $data The binary string being imported\n * @param int $word_size Default value is 1. The number of bytes in each chunk of binary data. This is mainly used in conjunction with the options parameter.\n * @param int $flags Default value is GMP_MSW_FIRST | GMP_NATIVE_ENDIAN.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_export", zif_gmp_export, arginfo_gmp_export, 0, NULL, "/**\n * Export to a binary string\n * @param GMP|int|string $num The GMP number being exported\n * @param int $word_size Default value is 1. The number of bytes in each chunk of binary data. This is mainly used in conjunction with the options parameter.\n * @param int $flags Default value is GMP_MSW_FIRST | GMP_NATIVE_ENDIAN.\n * @return string\n */")
	ZEND_RAW_FENTRY("gmp_intval", zif_gmp_intval, arginfo_gmp_intval, 0, NULL, "/**\n * Convert GMP number to integer\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_strval", zif_gmp_strval, arginfo_gmp_strval, 0, NULL, "/**\n * Convert GMP number to string\n * @param GMP|int|string $num The GMP number that will be converted to a string.\n * @param int $base The base of the returned number. The default base is 10. Allowed values for the base are from 2 to 62 and -2 to -36.\n * @return string\n */")
	ZEND_RAW_FENTRY("gmp_add", zif_gmp_add, arginfo_gmp_add, 0, NULL, "/**\n * Add numbers\n * @param GMP|int|string $num1 The first summand (augent).\n * @param GMP|int|string $num2 The second summand (addend).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_sub", zif_gmp_sub, arginfo_gmp_sub, 0, NULL, "/**\n * Subtract numbers\n * @param GMP|int|string $num1 The number being subtracted from.\n * @param GMP|int|string $num2 The number subtracted from num1.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_mul", zif_gmp_mul, arginfo_gmp_mul, 0, NULL, "/**\n * Multiply numbers\n * @param GMP|int|string $num1 A number that will be multiplied by num2.\n * @param GMP|int|string $num2 A number that will be multiplied by num1.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_div_qr", zif_gmp_div_qr, arginfo_gmp_div_qr, 0, NULL, "/**\n * Divide numbers and get quotient and remainder\n * @param GMP|int|string $num1 The number being divided.\n * @param GMP|int|string $num2 The number that num1 is being divided by.\n * @param int $rounding_mode See the gmp_div_q function for description of the rounding_mode argument.\n * @return array\n */")
	ZEND_RAW_FENTRY("gmp_div_q", zif_gmp_div_q, arginfo_gmp_div_q, 0, NULL, "/**\n * Divide numbers\n * @param GMP|int|string $num1 The number being divided.\n * @param GMP|int|string $num2 The number that num1 is being divided by.\n * @param int $rounding_mode The result rounding is defined by the rounding_mode, which can have the following values: GMP_ROUND_ZERO: The result is truncated towards 0. GMP_ROUND_PLUSINF: The result is rounded towards +infinity. GMP_ROUND_MINUSINF: The result is rounded towards -infinity.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_div_r", zif_gmp_div_r, arginfo_gmp_div_r, 0, NULL, "/**\n * Remainder of the division of numbers\n * @param GMP|int|string $num1 The number being divided.\n * @param GMP|int|string $num2 The number that num1 is being divided by.\n * @param int $rounding_mode See the gmp_div_q function for description of the rounding_mode argument.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_div", zif_gmp_div_q, arginfo_gmp_div, 0, NULL, "/**\n * Alias gmp_div_q\n */")
	ZEND_RAW_FENTRY("gmp_mod", zif_gmp_mod, arginfo_gmp_mod, 0, NULL, "/**\n * Modulo operation\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 The modulo that is being evaluated.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_divexact", zif_gmp_divexact, arginfo_gmp_divexact, 0, NULL, "/**\n * Exact division of numbers\n * @param GMP|int|string $num1 The number being divided.\n * @param GMP|int|string $num2 The number that num1 is being divided by.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_neg", zif_gmp_neg, arginfo_gmp_neg, 0, NULL, "/**\n * Negate number\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_abs", zif_gmp_abs, arginfo_gmp_abs, 0, NULL, "/**\n * Absolute value\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_fact", zif_gmp_fact, arginfo_gmp_fact, 0, NULL, "/**\n * Factorial\n * @param GMP|int|string $num The factorial number.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_sqrt", zif_gmp_sqrt, arginfo_gmp_sqrt, 0, NULL, "/**\n * Calculate square root\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_sqrtrem", zif_gmp_sqrtrem, arginfo_gmp_sqrtrem, 0, NULL, "/**\n * Square root with remainder\n * @param GMP|int|string $num The number being square rooted.\n * @return array\n */")
	ZEND_RAW_FENTRY("gmp_root", zif_gmp_root, arginfo_gmp_root, 0, NULL, "/**\n * Take the integer part of nth root\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param int $nth The positive root to take of num.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_rootrem", zif_gmp_rootrem, arginfo_gmp_rootrem, 0, NULL, "/**\n * Take the integer part and remainder of nth root\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param int $nth The positive root to take of num.\n * @return array\n */")
	ZEND_RAW_FENTRY("gmp_pow", zif_gmp_pow, arginfo_gmp_pow, 0, NULL, "/**\n * Raise number into power\n * @param GMP|int|string $num The base number.\n * @param int $exponent The positive power to raise the num.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_powm", zif_gmp_powm, arginfo_gmp_powm, 0, NULL, "/**\n * Raise number into power with modulo\n * @param GMP|int|string $num The base number.\n * @param GMP|int|string $exponent The positive power to raise the num.\n * @param GMP|int|string $modulus The modulo.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_perfect_square", zif_gmp_perfect_square, arginfo_gmp_perfect_square, 0, NULL, "/**\n * Perfect square check\n * @param GMP|int|string $num The number being checked as a perfect square.\n * @return bool\n */")
	ZEND_RAW_FENTRY("gmp_perfect_power", zif_gmp_perfect_power, arginfo_gmp_perfect_power, 0, NULL, "/**\n * Perfect power check\n * @return bool\n */")
	ZEND_RAW_FENTRY("gmp_prob_prime", zif_gmp_prob_prime, arginfo_gmp_prob_prime, 0, NULL, "/**\n * Check if number is \"probably prime\"\n * @param GMP|int|string $num The number being checked as a prime.\n * @param int $repetitions Reasonable values of repetitions vary from 5 to 10 (default being 10); a higher value lowers the probability for a non-prime to pass as a \"probable\" prime.\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_gcd", zif_gmp_gcd, arginfo_gmp_gcd, 0, NULL, "/**\n * Calculate GCD\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_gcdext", zif_gmp_gcdext, arginfo_gmp_gcdext, 0, NULL, "/**\n * Calculate GCD and multipliers\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return array\n */")
	ZEND_RAW_FENTRY("gmp_lcm", zif_gmp_lcm, arginfo_gmp_lcm, 0, NULL, "/**\n * Calculate LCM\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_invert", zif_gmp_invert, arginfo_gmp_invert, 0, NULL, "/**\n * Inverse by modulo\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP|false\n */")
	ZEND_RAW_FENTRY("gmp_jacobi", zif_gmp_jacobi, arginfo_gmp_jacobi, 0, NULL, "/**\n * Jacobi symbol\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_legendre", zif_gmp_legendre, arginfo_gmp_legendre, 0, NULL, "/**\n * Legendre symbol\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_kronecker", zif_gmp_kronecker, arginfo_gmp_kronecker, 0, NULL, "/**\n * Kronecker symbol\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_cmp", zif_gmp_cmp, arginfo_gmp_cmp, 0, NULL, "/**\n * Compare numbers\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_sign", zif_gmp_sign, arginfo_gmp_sign, 0, NULL, "/**\n * Sign of number\n * @param GMP|int|string $num Either a GMP object, or a numeric string provided that it is possible to convert the latter to an int.\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_random_seed", zif_gmp_random_seed, arginfo_gmp_random_seed, 0, NULL, "/**\n * Sets the RNG seed\n * @param GMP|int|string $seed The seed to be set for the gmp_random, gmp_random_bits, and gmp_random_range functions.\n * @return void\n */")
	ZEND_RAW_FENTRY("gmp_random_bits", zif_gmp_random_bits, arginfo_gmp_random_bits, 0, NULL, "/**\n * Random number\n * @param int $bits The number of bits to generate.\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_random_range", zif_gmp_random_range, arginfo_gmp_random_range, 0, NULL, "/**\n * Get a uniformly selected integer\n * @param GMP|int|string $min A GMP number representing the lower bound for the random number\n * @param GMP|int|string $max A GMP number representing the upper bound for the random number\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_and", zif_gmp_and, arginfo_gmp_and, 0, NULL, "/**\n * Bitwise AND\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_or", zif_gmp_or, arginfo_gmp_or, 0, NULL, "/**\n * Bitwise OR\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_com", zif_gmp_com, arginfo_gmp_com, 0, NULL, "/**\n * Calculates one\'s complement\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_xor", zif_gmp_xor, arginfo_gmp_xor, 0, NULL, "/**\n * Bitwise XOR\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_setbit", zif_gmp_setbit, arginfo_gmp_setbit, 0, NULL, "/**\n * Set bit\n * @param GMP $num A GMP object.\n * @param int $index The index of the bit to set.  Index 0 represents the least significant bit.\n * @param bool $value True to set the bit (set it to 1/on); false to clear the bit (set it to 0/off).\n * @return void\n */")
	ZEND_RAW_FENTRY("gmp_clrbit", zif_gmp_clrbit, arginfo_gmp_clrbit, 0, NULL, "/**\n * Clear bit\n * @param GMP $num A GMP object.\n * @param int $index The index of the bit to clear.  Index 0 represents the least significant bit.\n * @return void\n */")
	ZEND_RAW_FENTRY("gmp_testbit", zif_gmp_testbit, arginfo_gmp_testbit, 0, NULL, "/**\n * Tests if a bit is set\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param int $index The bit to test\n * @return bool\n */")
	ZEND_RAW_FENTRY("gmp_scan0", zif_gmp_scan0, arginfo_gmp_scan0, 0, NULL, "/**\n * Scan for 0\n * @param GMP|int|string $num1 The number to scan.\n * @param int $start The starting bit.\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_scan1", zif_gmp_scan1, arginfo_gmp_scan1, 0, NULL, "/**\n * Scan for 1\n * @param GMP|int|string $num1 The number to scan.\n * @param int $start The starting bit.\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_popcount", zif_gmp_popcount, arginfo_gmp_popcount, 0, NULL, "/**\n * Population count\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_hamdist", zif_gmp_hamdist, arginfo_gmp_hamdist, 0, NULL, "/**\n * Hamming distance\n * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return int\n */")
	ZEND_RAW_FENTRY("gmp_nextprime", zif_gmp_nextprime, arginfo_gmp_nextprime, 0, NULL, "/**\n * Find next prime number\n * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_RAW_FENTRY("gmp_binomial", zif_gmp_binomial, arginfo_gmp_binomial, 0, NULL, "/**\n * Calculates binomial coefficient\n * @param GMP|int|string $n A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).\n * @return GMP\n */")
	ZEND_FE_END
};

static const zend_function_entry class_GMP_methods[] = {
	ZEND_ME(GMP, __construct, arginfo_class_GMP___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(GMP, __serialize, arginfo_class_GMP___serialize, ZEND_ACC_PUBLIC)
	ZEND_ME(GMP, __unserialize, arginfo_class_GMP___unserialize, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static void register_gmp_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("GMP_ROUND_ZERO", GMP_ROUND_ZERO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_ROUND_PLUSINF", GMP_ROUND_PLUSINF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_ROUND_MINUSINF", GMP_ROUND_MINUSINF, CONST_PERSISTENT);
#if defined(mpir_version)
	REGISTER_STRING_CONSTANT("GMP_MPIR_VERSION", GMP_MPIR_VERSION_STRING, CONST_PERSISTENT);
#endif
	REGISTER_STRING_CONSTANT("GMP_VERSION", GMP_VERSION_STRING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_MSW_FIRST", GMP_MSW_FIRST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_LSW_FIRST", GMP_LSW_FIRST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_LITTLE_ENDIAN", GMP_LITTLE_ENDIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_BIG_ENDIAN", GMP_BIG_ENDIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GMP_NATIVE_ENDIAN", GMP_NATIVE_ENDIAN, CONST_PERSISTENT);
}

static zend_class_entry *register_class_GMP(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GMP", class_GMP_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	return class_entry;
}
