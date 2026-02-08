<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PHP_HASH_HMAC
 */
const HASH_HMAC = UNKNOWN;

/** @genstubs-expose-comment-block
 * Generate a hash value (message digest)
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_algos.
 * @param string $data Message to be hashed.
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @param array $options An array of options for the various hashing algorithms. Currently, only the "seed" parameter is supported by the MurmurHash variants.
 * @return string
 */
/** @refcount 1 */
function hash(string $algo, string $data, bool $binary = false, array $options = []): string {}

/** @genstubs-expose-comment-block
 * Generate a hash value using the contents of a given file
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_algos.
 * @param string $filename URL describing location of file to be hashed; Supports fopen wrappers.
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @param array $options An array of options for the various hashing algorithms. Currently, only the "seed" parameter is supported by the MurmurHash variants.
 * @return string|false
 */
/** @refcount 1 */
function hash_file(string $algo, string $filename, bool $binary = false, array $options = []): string|false {}

/** @genstubs-expose-comment-block
 * Generate a keyed hash value using the HMAC method
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.
 * @param string $data Message to be hashed.
 * @param string $key Shared secret key used for generating the HMAC variant of the message digest.
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @return string
 */
/**
 * @refcount 1
 */
function hash_hmac(string $algo, string $data, #[\SensitiveParameter] string $key, bool $binary = false): string {}

/** @genstubs-expose-comment-block
 * Generate a keyed hash value using the HMAC method and the contents of a given file
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.
 * @param string $filename URL describing location of file to be hashed; Supports fopen wrappers.
 * @param string $key Shared secret key used for generating the HMAC variant of the message digest.
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @return string|false
 */
/**
 * @refcount 1
 */
function hash_hmac_file(string $algo, string $filename, #[\SensitiveParameter] string $key, bool $binary = false): string|false {}

/** @genstubs-expose-comment-block
 * Initialize an incremental hashing context
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_algos. Non-cryptographic hash functions are not allowed if the HASH_HMAC flag is specified.
 * @param int $flags Optional settings for hash generation, currently supports only one option: HASH_HMAC.  When specified, the key must be specified.
 * @param string $key When HASH_HMAC is specified for flags, a shared secret key to be used with the HMAC hashing method must be supplied in this parameter.
 * @param array $options An array of options for the various hashing algorithms. Currently, only the "seed" parameter is supported by the MurmurHash variants.
 * @return HashContext
 */
/**
 * @refcount 1
 */
function hash_init(string $algo, int $flags = 0, #[\SensitiveParameter] string $key = "", array $options = []): HashContext {}

/** @genstubs-expose-comment-block
 * Pump data into an active hashing context
 * @param HashContext $context Hashing context returned by hash_init.
 * @param string $data Message to be included in the hash digest.
 * @return true
 */
function hash_update(HashContext $context, string $data): true {}

/** @genstubs-expose-comment-block
 * Pump data into an active hashing context from an open stream
 * @param HashContext $context Hashing context returned by hash_init.
 * @param resource $stream Open file handle as returned by any stream creation function.
 * @param int $length Maximum number of characters to copy from stream into the hashing context.
 * @return int
 */
/** @param resource $stream */
function hash_update_stream(HashContext $context, $stream, int $length = -1): int {}

/** @genstubs-expose-comment-block
 * Pump data into an active hashing context from a file
 * @param HashContext $context Hashing context returned by hash_init.
 * @param string $filename URL describing location of file to be hashed; Supports fopen wrappers.
 * @param resource|null $stream_context Stream context as returned by stream_context_create.
 * @return bool
 */
/** @param resource|null $stream_context */
function hash_update_file(HashContext $context, string $filename, $stream_context = null): bool {}

/** @genstubs-expose-comment-block
 * Finalize an incremental hash and return resulting digest
 * @param HashContext $context Hashing context returned by hash_init.
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @return string
 */
/** @refcount 1 */
function hash_final(HashContext $context, bool $binary = false): string {}

/** @genstubs-expose-comment-block
 * Copy hashing context
 * @param HashContext $context Hashing context returned by hash_init.
 * @return HashContext
 */
/** @refcount 1 */
function hash_copy(HashContext $context): HashContext {}

/** @genstubs-expose-comment-block
 * Return a list of registered hashing algorithms
 * @return array
 */
/**
 * @return array<int, string>
 * @compile-time-eval
 * @refcount 1
 */
function hash_algos(): array {}

/** @genstubs-expose-comment-block
 * Return a list of registered hashing algorithms suitable for hash_hmac
 * @return array
 */
/**
 * @return array<int, string>
 * @compile-time-eval
 * @refcount 1
 */
function hash_hmac_algos(): array {}

/** @genstubs-expose-comment-block
 * Generate a PBKDF2 key derivation of a supplied password
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.
 * @param string $password The password to use for the derivation.
 * @param string $salt The salt to use for the derivation. This value should be generated randomly.
 * @param int $iterations The number of internal iterations to perform for the derivation.
 * @param int $length The length of the output string. If binary is true this corresponds to the byte-length of the derived key, if binary is false this corresponds to twice the byte-length of the derived key (as every byte of the key is returned as two hexits).
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @param array $options An array of options for the various hashing algorithms. Currently, only the "seed" key is supported by the MurmurHash variants.
 * @return string
 */
/**
 * @refcount 1
 */
function hash_pbkdf2(string $algo, #[\SensitiveParameter] string $password, string $salt, int $iterations, int $length = 0, bool $binary = false, array $options = []): string {}

/** @genstubs-expose-comment-block
 * Timing attack safe string comparison
 * @return bool
 */
function hash_equals(#[\SensitiveParameter] string $known_string, #[\SensitiveParameter] string $user_string): bool {}

/** @genstubs-expose-comment-block
 * Generate a HKDF key derivation of a supplied key input
 * @param string $algo Name of selected hashing algorithm (e.g. "sha256"). For a list of supported algorithms see hash_hmac_algos. Non-cryptographic hash functions are not allowed.
 * @param string $key Input keying material (raw binary). Cannot be empty.
 * @param int $length Desired output length in bytes. Cannot be greater than 255 times the chosen hash function size.
 * @param string $info Applicationcontext-specific info string.
 * @param string $salt Salt to use during derivation.
 * @return string
 */
/**
 * @refcount 1
 */
function hash_hkdf(string $algo, #[\SensitiveParameter] string $key, int $length = 0, string $info = "", string $salt = ""): string {}

#ifdef PHP_MHASH_BC
#[\Deprecated(since: '8.1')]
/** @genstubs-expose-comment-block
 * Gets the block size of the specified hash
 * @param int $algo The hash ID. One of the MHASH_hashname constants.
 * @return int|false
 */
function mhash_get_block_size(int $algo): int|false {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1')]
/** @genstubs-expose-comment-block
 * Gets the name of the specified hash
 * @param int $algo The hash ID. One of the MHASH_hashname constants.
 * @return string|false
 */
function mhash_get_hash_name(int $algo): string|false {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1')]
/** @genstubs-expose-comment-block
 * Generates a key
 * @param int $algo The hash ID used to create the key. One of the MHASH_hashname constants.
 * @param string $password An user supplied password.
 * @param string $salt Must be different and random enough for every key you generate in order to create different keys. Because salt must be known when you check the keys, it is a good idea to append the key to it. Salt has a fixed length of 8 bytes and will be padded with zeros if you supply less bytes.
 * @param int $length The key length, in bytes.
 * @return string|false
 */
function mhash_keygen_s2k(int $algo, string $password, string $salt, int $length): string|false {}

#[\Deprecated(since: '8.1')]
/** @genstubs-expose-comment-block
 * Gets the highest available hash ID
 * @return int
 */
function mhash_count(): int {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1')]
/** @genstubs-expose-comment-block
 * Computes hash
 * @param int $algo The hash ID. One of the MHASH_hashname constants.
 * @param string $data The user input, as a string.
 * @param string|null $key If specified, the function will return the resulting HMAC instead. HMAC is keyed hashing for message authentication, or simply a message digest that depends on the specified key. Not all algorithms supported in mhash can be used in HMAC mode.
 * @return string|false
 */
function mhash(int $algo, string $data, ?string $key = null): string|false {}
#endif

final class HashContext
{
    private function __construct() {}

    public function __serialize(): array {}

    public function __unserialize(array $data): void {}

    public function __debugInfo(): array {}
}
