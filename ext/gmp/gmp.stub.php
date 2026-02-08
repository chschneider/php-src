<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue GMP_ROUND_ZERO
 */
const GMP_ROUND_ZERO = UNKNOWN;
/**
 * @var int
 * @cvalue GMP_ROUND_PLUSINF
 */
const GMP_ROUND_PLUSINF = UNKNOWN;
/**
 * @var int
 * @cvalue GMP_ROUND_MINUSINF
 */
const GMP_ROUND_MINUSINF = UNKNOWN;

#ifdef mpir_version
/**
 * @var string
 * @cvalue GMP_MPIR_VERSION_STRING
 */
const GMP_MPIR_VERSION = UNKNOWN;
#endif
/**
 * @var string
 * @cvalue GMP_VERSION_STRING
 */
const GMP_VERSION = UNKNOWN;

/**
 * @var int
 * @cvalue GMP_MSW_FIRST
 */
const GMP_MSW_FIRST = UNKNOWN;
/**
 * @var int
 * @cvalue GMP_LSW_FIRST
 */
const GMP_LSW_FIRST = UNKNOWN;
/**
 * @var int
 * @cvalue GMP_LITTLE_ENDIAN
 */
const GMP_LITTLE_ENDIAN = UNKNOWN;
/**
 * @var int
 * @cvalue GMP_BIG_ENDIAN
 */
const GMP_BIG_ENDIAN = UNKNOWN;
/**
 * @var int
 * @cvalue GMP_NATIVE_ENDIAN
 */
const GMP_NATIVE_ENDIAN = UNKNOWN;

final class GMP
{
    public function __construct(int|string $num = 0, int $base = 0) {}

    public function __serialize(): array {}

    public function __unserialize(array $data): void {}
}

/** @genstubs-expose-comment-block
 * Create GMP number
 * @return GMP
 */
function gmp_init(int|string $num, int $base = 0): GMP {}

/** @genstubs-expose-comment-block
 * Import from a binary string
 * @param string $data The binary string being imported
 * @param int $word_size Default value is 1. The number of bytes in each chunk of binary data. This is mainly used in conjunction with the options parameter.
 * @param int $flags Default value is GMP_MSW_FIRST | GMP_NATIVE_ENDIAN.
 * @return GMP
 */
function gmp_import(string $data, int $word_size = 1, int $flags = GMP_MSW_FIRST | GMP_NATIVE_ENDIAN): GMP {}

/** @genstubs-expose-comment-block
 * Export to a binary string
 * @param GMP|int|string $num The GMP number being exported
 * @param int $word_size Default value is 1. The number of bytes in each chunk of binary data. This is mainly used in conjunction with the options parameter.
 * @param int $flags Default value is GMP_MSW_FIRST | GMP_NATIVE_ENDIAN.
 * @return string
 */
function gmp_export(GMP|int|string $num, int $word_size = 1, int $flags = GMP_MSW_FIRST | GMP_NATIVE_ENDIAN): string {}

/** @genstubs-expose-comment-block
 * Convert GMP number to integer
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return int
 */
function gmp_intval(GMP|int|string $num): int {}

/** @genstubs-expose-comment-block
 * Convert GMP number to string
 * @param GMP|int|string $num The GMP number that will be converted to a string.
 * @param int $base The base of the returned number. The default base is 10. Allowed values for the base are from 2 to 62 and -2 to -36.
 * @return string
 */
function gmp_strval(GMP|int|string $num, int $base = 10): string {}

/** @genstubs-expose-comment-block
 * Add numbers
 * @param GMP|int|string $num1 The first summand (augent).
 * @param GMP|int|string $num2 The second summand (addend).
 * @return GMP
 */
function gmp_add(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Subtract numbers
 * @param GMP|int|string $num1 The number being subtracted from.
 * @param GMP|int|string $num2 The number subtracted from num1.
 * @return GMP
 */
function gmp_sub(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Multiply numbers
 * @param GMP|int|string $num1 A number that will be multiplied by num2.
 * @param GMP|int|string $num2 A number that will be multiplied by num1.
 * @return GMP
 */
function gmp_mul(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Divide numbers and get quotient and remainder
 * @param GMP|int|string $num1 The number being divided.
 * @param GMP|int|string $num2 The number that num1 is being divided by.
 * @param int $rounding_mode See the gmp_div_q function for description of the rounding_mode argument.
 * @return array
 */
/**
 * @return array<int, GMP>
 * @refcount 1
 */
function gmp_div_qr(GMP|int|string $num1, GMP|int|string $num2, int $rounding_mode = GMP_ROUND_ZERO): array {}

/** @genstubs-expose-comment-block
 * Divide numbers
 * @param GMP|int|string $num1 The number being divided.
 * @param GMP|int|string $num2 The number that num1 is being divided by.
 * @param int $rounding_mode The result rounding is defined by the rounding_mode, which can have the following values: GMP_ROUND_ZERO: The result is truncated towards 0. GMP_ROUND_PLUSINF: The result is rounded towards +infinity. GMP_ROUND_MINUSINF: The result is rounded towards -infinity.
 * @return GMP
 */
function gmp_div_q(GMP|int|string $num1, GMP|int|string $num2, int $rounding_mode = GMP_ROUND_ZERO): GMP {}

/** @genstubs-expose-comment-block
 * Remainder of the division of numbers
 * @param GMP|int|string $num1 The number being divided.
 * @param GMP|int|string $num2 The number that num1 is being divided by.
 * @param int $rounding_mode See the gmp_div_q function for description of the rounding_mode argument.
 * @return GMP
 */
function gmp_div_r(GMP|int|string $num1, GMP|int|string $num2, int $rounding_mode = GMP_ROUND_ZERO): GMP {}

/** @genstubs-expose-comment-block
 * Alias gmp_div_q
 */
/** @alias gmp_div_q */
function gmp_div(GMP|int|string $num1, GMP|int|string $num2, int $rounding_mode = GMP_ROUND_ZERO): GMP {}

/** @genstubs-expose-comment-block
 * Modulo operation
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 The modulo that is being evaluated.
 * @return GMP
 */
function gmp_mod(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Exact division of numbers
 * @param GMP|int|string $num1 The number being divided.
 * @param GMP|int|string $num2 The number that num1 is being divided by.
 * @return GMP
 */
function gmp_divexact(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Negate number
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_neg(GMP|int|string $num): GMP {}

/** @genstubs-expose-comment-block
 * Absolute value
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_abs(GMP|int|string $num): GMP {}

/** @genstubs-expose-comment-block
 * Factorial
 * @param GMP|int|string $num The factorial number.
 * @return GMP
 */
function gmp_fact(GMP|int|string $num): GMP {}

/** @genstubs-expose-comment-block
 * Calculate square root
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_sqrt(GMP|int|string $num): GMP {}

/** @genstubs-expose-comment-block
 * Square root with remainder
 * @param GMP|int|string $num The number being square rooted.
 * @return array
 */
/**
 * @return array<int, GMP>
 * @refcount 1
 */
function gmp_sqrtrem(GMP|int|string $num): array {}

/** @genstubs-expose-comment-block
 * Take the integer part of nth root
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param int $nth The positive root to take of num.
 * @return GMP
 */
function gmp_root(GMP|int|string $num, int $nth): GMP {}

/** @genstubs-expose-comment-block
 * Take the integer part and remainder of nth root
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param int $nth The positive root to take of num.
 * @return array
 */
/**
 * @return array<int, GMP>
 * @refcount 1
 */
function gmp_rootrem(GMP|int|string $num, int $nth): array {}

/** @genstubs-expose-comment-block
 * Raise number into power
 * @param GMP|int|string $num The base number.
 * @param int $exponent The positive power to raise the num.
 * @return GMP
 */
function gmp_pow(GMP|int|string $num, int $exponent): GMP {}

/** @genstubs-expose-comment-block
 * Raise number into power with modulo
 * @param GMP|int|string $num The base number.
 * @param GMP|int|string $exponent The positive power to raise the num.
 * @param GMP|int|string $modulus The modulo.
 * @return GMP
 */
function gmp_powm(GMP|int|string $num, GMP|int|string $exponent, GMP|int|string $modulus): GMP {}

/** @genstubs-expose-comment-block
 * Perfect square check
 * @param GMP|int|string $num The number being checked as a perfect square.
 * @return bool
 */
function gmp_perfect_square(GMP|int|string $num): bool {}

/** @genstubs-expose-comment-block
 * Perfect power check
 * @return bool
 */
function gmp_perfect_power(GMP|int|string $num): bool {}

/** @genstubs-expose-comment-block
 * Check if number is "probably prime"
 * @param GMP|int|string $num The number being checked as a prime.
 * @param int $repetitions Reasonable values of repetitions vary from 5 to 10 (default being 10); a higher value lowers the probability for a non-prime to pass as a "probable" prime.
 * @return int
 */
function gmp_prob_prime(GMP|int|string $num, int $repetitions = 10): int {}

/** @genstubs-expose-comment-block
 * Calculate GCD
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_gcd(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Calculate GCD and multipliers
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return array
 */
/**
 * @return array<string, GMP>
 * @refcount 1
 */
function gmp_gcdext(GMP|int|string $num1, GMP|int|string $num2): array {}

/** @genstubs-expose-comment-block
 * Calculate LCM
 * @return GMP
 */
function gmp_lcm(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Inverse by modulo
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP|false
 */
function gmp_invert(GMP|int|string $num1, GMP|int|string $num2): GMP|false {}

/** @genstubs-expose-comment-block
 * Jacobi symbol
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return int
 */
function gmp_jacobi(GMP|int|string $num1, GMP|int|string $num2): int {}

/** @genstubs-expose-comment-block
 * Legendre symbol
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return int
 */
function gmp_legendre(GMP|int|string $num1, GMP|int|string $num2): int {}

/** @genstubs-expose-comment-block
 * Kronecker symbol
 * @return int
 */
function gmp_kronecker(GMP|int|string $num1, GMP|int|string $num2): int {}

/** @genstubs-expose-comment-block
 * Compare numbers
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return int
 */
function gmp_cmp(GMP|int|string $num1, GMP|int|string $num2): int {}

/** @genstubs-expose-comment-block
 * Sign of number
 * @param GMP|int|string $num Either a GMP object, or a numeric string provided that it is possible to convert the latter to an int.
 * @return int
 */
function gmp_sign(GMP|int|string $num): int {}

/** @genstubs-expose-comment-block
 * Sets the RNG seed
 * @param GMP|int|string $seed The seed to be set for the gmp_random, gmp_random_bits, and gmp_random_range functions.
 * @return void
 */
function gmp_random_seed(GMP|int|string $seed): void {}

/** @genstubs-expose-comment-block
 * Random number
 * @param int $bits The number of bits to generate.
 * @return GMP
 */
function gmp_random_bits(int $bits): GMP {}

/** @genstubs-expose-comment-block
 * Get a uniformly selected integer
 * @param GMP|int|string $min A GMP number representing the lower bound for the random number
 * @param GMP|int|string $max A GMP number representing the upper bound for the random number
 * @return GMP
 */
function gmp_random_range(GMP|int|string $min, GMP|int|string $max): GMP {}

/** @genstubs-expose-comment-block
 * Bitwise AND
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_and(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Bitwise OR
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_or(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Calculates one's complement
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_com(GMP|int|string $num): GMP {}

/** @genstubs-expose-comment-block
 * Bitwise XOR
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_xor(GMP|int|string $num1, GMP|int|string $num2): GMP {}

/** @genstubs-expose-comment-block
 * Set bit
 * @param GMP $num A GMP object.
 * @param int $index The index of the bit to set.  Index 0 represents the least significant bit.
 * @param bool $value True to set the bit (set it to 1on); false to clear the bit (set it to 0off).
 * @return void
 */
function gmp_setbit(GMP $num, int $index, bool $value = true): void {}

/** @genstubs-expose-comment-block
 * Clear bit
 * @param GMP $num A GMP object.
 * @param int $index The index of the bit to clear.  Index 0 represents the least significant bit.
 * @return void
 */
function gmp_clrbit(GMP $num, int $index): void {}

/** @genstubs-expose-comment-block
 * Tests if a bit is set
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param int $index The bit to test
 * @return bool
 */
function gmp_testbit(GMP|int|string $num, int $index): bool {}

/** @genstubs-expose-comment-block
 * Scan for 0
 * @param GMP|int|string $num1 The number to scan.
 * @param int $start The starting bit.
 * @return int
 */
function gmp_scan0(GMP|int|string $num1, int $start): int {}

/** @genstubs-expose-comment-block
 * Scan for 1
 * @param GMP|int|string $num1 The number to scan.
 * @param int $start The starting bit.
 * @return int
 */
function gmp_scan1(GMP|int|string $num1, int $start): int {}

/** @genstubs-expose-comment-block
 * Population count
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return int
 */
function gmp_popcount(GMP|int|string $num): int {}

/** @genstubs-expose-comment-block
 * Hamming distance
 * @param GMP|int|string $num1 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @param GMP|int|string $num2 A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return int
 */
function gmp_hamdist(GMP|int|string $num1, GMP|int|string $num2): int {}

/** @genstubs-expose-comment-block
 * Find next prime number
 * @param GMP|int|string $num A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_nextprime(GMP|int|string $num): GMP {}

/** @genstubs-expose-comment-block
 * Calculates binomial coefficient
 * @param GMP|int|string $n A GMP object, an integer, or a string that can be interpreted as a number following the same logic as if the string was used in gmp_init with automatic base detection (i.e. when base is equal to 0).
 * @return GMP
 */
function gmp_binomial(GMP|int|string $n, int $k): GMP {}
