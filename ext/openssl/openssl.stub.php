<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue OPENSSL_VERSION_TEXT
 */
const OPENSSL_VERSION_TEXT = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_VERSION_NUMBER
 */
const OPENSSL_VERSION_NUMBER = UNKNOWN;

/**
 * @var int
 * @cvalue X509_PURPOSE_SSL_CLIENT
 */
const X509_PURPOSE_SSL_CLIENT = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_SSL_SERVER
 */
const X509_PURPOSE_SSL_SERVER = UNKNOWN;

/**
 * @var int
 * @cvalue X509_PURPOSE_NS_SSL_SERVER
 */
const X509_PURPOSE_NS_SSL_SERVER = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_SMIME_SIGN
 */
const X509_PURPOSE_SMIME_SIGN = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_SMIME_ENCRYPT
 */
const X509_PURPOSE_SMIME_ENCRYPT = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_CRL_SIGN
 */
const X509_PURPOSE_CRL_SIGN = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_ANY
 */
const X509_PURPOSE_ANY = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_OCSP_HELPER
 */
const X509_PURPOSE_OCSP_HELPER = UNKNOWN;
/**
 * @var int
 * @cvalue X509_PURPOSE_TIMESTAMP_SIGN
 */
const X509_PURPOSE_TIMESTAMP_SIGN = UNKNOWN;

/* digest algorithm constants */

/**
 * @var int
 * @cvalue OPENSSL_ALGO_SHA1
 */
const OPENSSL_ALGO_SHA1 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_ALGO_MD5
 */
const OPENSSL_ALGO_MD5 = UNKNOWN;
#ifndef OPENSSL_NO_MD4
/**
 * @var int
 * @cvalue OPENSSL_ALGO_MD4
 */
const OPENSSL_ALGO_MD4 = UNKNOWN;
#endif
#ifndef OPENSSL_NO_MD2
/**
 * @var int
 * @cvalue OPENSSL_ALGO_MD2
 */
const OPENSSL_ALGO_MD2 = UNKNOWN;
#endif
/**
 * @var int
 * @cvalue OPENSSL_ALGO_SHA224
 */
const OPENSSL_ALGO_SHA224 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_ALGO_SHA256
 */
const OPENSSL_ALGO_SHA256 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_ALGO_SHA384
 */
const OPENSSL_ALGO_SHA384 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_ALGO_SHA512
 */
const OPENSSL_ALGO_SHA512 = UNKNOWN;
#ifndef OPENSSL_NO_RMD160
/**
 * @var int
 * @cvalue OPENSSL_ALGO_RMD160
 */
const OPENSSL_ALGO_RMD160 = UNKNOWN;
#endif

/* flags for S/MIME */

/**
 * @var int
 * @cvalue PKCS7_DETACHED
 */
const PKCS7_DETACHED = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_TEXT
 */
const PKCS7_TEXT = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOINTERN
 */
const PKCS7_NOINTERN = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOVERIFY
 */
const PKCS7_NOVERIFY = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOCHAIN
 */
const PKCS7_NOCHAIN = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOCERTS
 */
const PKCS7_NOCERTS = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOATTR
 */
const PKCS7_NOATTR = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_BINARY
 */
const PKCS7_BINARY = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOSIGS
 */
const PKCS7_NOSIGS = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOOLDMIMETYPE
 */
const PKCS7_NOOLDMIMETYPE = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOSMIMECAP
 */
const PKCS7_NOSMIMECAP = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_CRLFEOL
 */
const PKCS7_CRLFEOL = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NOCRL
 */
const PKCS7_NOCRL = UNKNOWN;
/**
 * @var int
 * @cvalue PKCS7_NO_DUAL_CONTENT
 */
const PKCS7_NO_DUAL_CONTENT = UNKNOWN;

/**
 * @var int
 * @cvalue CMS_DETACHED
 */
const OPENSSL_CMS_DETACHED = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_TEXT
 */
const OPENSSL_CMS_TEXT = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_NOINTERN
 */
const OPENSSL_CMS_NOINTERN = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_NOVERIFY
 */
const OPENSSL_CMS_NOVERIFY = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_NOCERTS
 */
const OPENSSL_CMS_NOCERTS = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_NOATTR
 */
const OPENSSL_CMS_NOATTR = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_BINARY
 */
const OPENSSL_CMS_BINARY = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_NOSIGS
 */
const OPENSSL_CMS_NOSIGS = UNKNOWN;
/**
 * @var int
 * @cvalue CMS_NOOLDMIMETYPE
 */
const OPENSSL_CMS_OLDMIMETYPE = UNKNOWN;

/**
 * @var int
 * @cvalue RSA_PKCS1_PADDING
 */
const OPENSSL_PKCS1_PADDING = UNKNOWN;
#ifdef RSA_SSLV23_PADDING
/**
 * @var int
 * @cvalue RSA_SSLV23_PADDING
 */
const OPENSSL_SSLV23_PADDING = UNKNOWN;
#endif

/**
 * @var int
 * @cvalue RSA_NO_PADDING
 */
const OPENSSL_NO_PADDING = UNKNOWN;
/**
 * @var int
 * @cvalue RSA_PKCS1_OAEP_PADDING
 */
const OPENSSL_PKCS1_OAEP_PADDING = UNKNOWN;
/**
 * @var int
 * @cvalue RSA_PKCS1_PSS_PADDING
 */
const OPENSSL_PKCS1_PSS_PADDING = UNKNOWN;

/* Informational stream wrapper constants */

/**
 * @var string
 * @cvalue OPENSSL_DEFAULT_STREAM_CIPHERS
 */
const OPENSSL_DEFAULT_STREAM_CIPHERS = UNKNOWN;

/* Ciphers */

#ifndef OPENSSL_NO_RC2
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_RC2_40
 */
const OPENSSL_CIPHER_RC2_40 = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_RC2_128
 */
const OPENSSL_CIPHER_RC2_128 = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_RC2_64
 */
const OPENSSL_CIPHER_RC2_64 = UNKNOWN;
#endif

#ifndef OPENSSL_NO_DES
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_DES
 */
const OPENSSL_CIPHER_DES = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_3DES
 */
const OPENSSL_CIPHER_3DES = UNKNOWN;
#endif

#ifndef OPENSSL_NO_AES
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_AES_128_CBC
 */
const OPENSSL_CIPHER_AES_128_CBC = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_AES_192_CBC
 */
const OPENSSL_CIPHER_AES_192_CBC = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_OPENSSL_CIPHER_AES_256_CBC
 */
const OPENSSL_CIPHER_AES_256_CBC = UNKNOWN;
#endif

/* Values for key types */

/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_RSA
 */
const OPENSSL_KEYTYPE_RSA = UNKNOWN;
#ifndef OPENSSL_NO_DSA
/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_DSA
 */
const OPENSSL_KEYTYPE_DSA = UNKNOWN;
#endif

/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_DH
 */
const OPENSSL_KEYTYPE_DH = UNKNOWN;
#ifdef HAVE_EVP_PKEY_EC
/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_EC
 */
const OPENSSL_KEYTYPE_EC = UNKNOWN;
#endif
#if PHP_OPENSSL_API_VERSION >= 0x30000
/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_X25519
 */
const OPENSSL_KEYTYPE_X25519 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_ED25519
 */
const OPENSSL_KEYTYPE_ED25519 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_X448
 */
const OPENSSL_KEYTYPE_X448 = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_KEYTYPE_ED448
 */
const OPENSSL_KEYTYPE_ED448 = UNKNOWN;
#endif

/**
 * @var int
 * @cvalue OPENSSL_RAW_DATA
 */
const OPENSSL_RAW_DATA = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_ZERO_PADDING
 */
const OPENSSL_ZERO_PADDING = UNKNOWN;
/**
 * @var int
 * @cvalue OPENSSL_DONT_ZERO_PAD_KEY
 */
const OPENSSL_DONT_ZERO_PAD_KEY = UNKNOWN;

#ifndef OPENSSL_NO_TLSEXT
const OPENSSL_TLSEXT_SERVER_NAME = 1;
#endif

/* Register encodings */

/**
 * @var int
 * @cvalue ENCODING_DER
 */
const OPENSSL_ENCODING_DER = UNKNOWN;
/**
 * @var int
 * @cvalue ENCODING_SMIME
 */
const OPENSSL_ENCODING_SMIME = UNKNOWN;
/**
 * @var int
 * @cvalue ENCODING_PEM
 */
const OPENSSL_ENCODING_PEM = UNKNOWN;


/**
 * @strict-properties
 * @not-serializable
 */
final class OpenSSLCertificate
{
}

/**
 * @strict-properties
 * @not-serializable
 */
final class OpenSSLCertificateSigningRequest
{
}

/**
 * @strict-properties
 * @not-serializable
 */
final class OpenSSLAsymmetricKey
{
}

/** @genstubs-expose-comment-block
 * Exports a certificate to file
 * @param OpenSSLCertificate|string $certificate See KeyCertificate parameters for a list of valid values.
 * @param string $output_filename Path to the output file.
 * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.
 * @return bool
 */
function openssl_x509_export_to_file(OpenSSLCertificate|string $certificate, string $output_filename, bool $no_text = true): bool {}

/** @genstubs-expose-comment-block
 * Exports a certificate as a string
 * @param OpenSSLCertificate|string $certificate See KeyCertificate parameters for a list of valid values.
 * @param string $output On success, this will hold the PEM.
 * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.
 * @return bool
 */
/** @param string $output */
function openssl_x509_export(OpenSSLCertificate|string $certificate, &$output, bool $no_text = true): bool {}

/** @genstubs-expose-comment-block
 * Calculates the fingerprint, or digest, of a given X.509 certificate
 * @param OpenSSLCertificate|string $certificate See KeyCertificate parameters for a list of valid values.
 * @param string $digest_algo The digest method or hash algorithm to use, e.g. "sha256", one of openssl_get_md_methods.
 * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.
 * @return string|false
 */
function openssl_x509_fingerprint(OpenSSLCertificate|string $certificate, string $digest_algo = "sha1", bool $binary = false): string|false {}

/** @genstubs-expose-comment-block
 * Checks if a private key corresponds to a certificate
 * @param OpenSSLCertificate|string $certificate The certificate.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key The private key.
 * @return bool
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_x509_check_private_key(OpenSSLCertificate|string $certificate, #[\SensitiveParameter] $private_key): bool {}

/** @genstubs-expose-comment-block
 * Verifies digital signature of x509 certificate against a public key
 * @param OpenSSLCertificate|string $certificate See KeyCertificate parameters for a list of valid values.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key OpenSSLAsymmetricKey - a key, returned by openssl_get_publickey
 * @return int
 */
/** @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key */
function openssl_x509_verify(OpenSSLCertificate|string $certificate, $public_key): int {}

/** @genstubs-expose-comment-block
 * Parse an X509 certificate and return the information as an array
 * @param OpenSSLCertificate|string $certificate X509 certificate. See KeyCertificate parameters for a list of valid values.
 * @param bool $short_names short_names controls how the data is indexed in the array - if short_names is true (the default) then fields will be indexed with the short name form, otherwise, the long name form will be used - e.g.: CN is the shortname form of commonName.
 * @return array|false
 */
/**
 * @return array<string, int|string|array>|false
 * @refcount 1
 */
function openssl_x509_parse(OpenSSLCertificate|string $certificate, bool $short_names = true): array|false {}

/** @genstubs-expose-comment-block
 * Verifies if a certificate can be used for a particular purpose
 * @param OpenSSLCertificate|string $certificate The examined certificate.
 * @param int $purpose openssl_x509_checkpurpose purposes Constant Description X509_PURPOSE_SSL_CLIENT Can the certificate be used for the client side of an SSL connection? X509_PURPOSE_SSL_SERVER Can the certificate be used for the server side of an SSL connection? X509_PURPOSE_NS_SSL_SERVER Can the cert be used for Netscape SSL server? X509_PURPOSE_SMIME_SIGN Can the cert be used to sign SMIME email? X509_PURPOSE_SMIME_ENCRYPT Can the cert be used to encrypt SMIME email? X509_PURPOSE_CRL_SIGN Can the cert be used to sign a certificate revocation list (CRL)? X509_PURPOSE_ANY Can the cert be used for AnyAll purposes? These options are not bitfields - you may specify one only!
 * @param array $ca_info ca_info should be an array of trusted CA filesdirs as described in Certificate Verification.
 * @param string|null $untrusted_certificates_file If specified, this should be the name of a PEM encoded file holding certificates that can be used to help verify the certificate, although no trust is placed in the certificates that come from that file.
 * @return bool|int
 */
function openssl_x509_checkpurpose(OpenSSLCertificate|string $certificate, int $purpose, array $ca_info = [], ?string $untrusted_certificates_file = null): bool|int {}

/** @genstubs-expose-comment-block
 * Parse an X.509 certificate and return an object for
 * it
 * @param OpenSSLCertificate|string $certificate X509 certificate. See KeyCertificate parameters for a list of valid values.
 * @return OpenSSLCertificate|false
 */
function openssl_x509_read(OpenSSLCertificate|string $certificate): OpenSSLCertificate|false {}

#[\Deprecated(since: '8.0', message: 'as OpenSSLCertificate objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Free certificate resource
 * @return void
 */
function openssl_x509_free(OpenSSLCertificate $certificate): void {}

/** @genstubs-expose-comment-block
 * Exports a PKCS#12 Compatible Certificate Store File
 * @param OpenSSLCertificate|string $certificate See KeyCertificate parameters for a list of valid values.
 * @param string $output_filename Path to the output file.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key Private key component of PKCS#12 file. See PublicPrivate Key parameters for a list of valid values.
 * @param string $passphrase Encryption password for unlocking the PKCS#12 file.
 * @param array $options Optional array, other keys will be ignored. Key Description "extracerts" array of extra certificates or a single certificate to be included in the PKCS#12 file. "friendly_name" string to be used for the supplied certificate and key
 * @return bool
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_pkcs12_export_to_file(OpenSSLCertificate|string $certificate, string $output_filename, #[\SensitiveParameter] $private_key, #[\SensitiveParameter] string $passphrase, array $options = []): bool {}

/** @genstubs-expose-comment-block
 * Exports a PKCS#12 Compatible Certificate Store File to variable
 * @param OpenSSLCertificate|string $certificate See KeyCertificate parameters for a list of valid values.
 * @param string $output On success, this will hold the PKCS#12.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key Private key component of PKCS#12 file. See PublicPrivate Key parameters for a list of valid values.
 * @param string $passphrase Encryption password for unlocking the PKCS#12 file.
 * @param array $options Optional array, other keys will be ignored. Key Description "extracerts" array of extra certificates or a single certificate to be included in the PKCS#12 file. "friendly_name" string to be used for the supplied certificate and key
 * @return bool
 */
/**
 * @param string $output
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_pkcs12_export(OpenSSLCertificate|string $certificate, &$output, #[\SensitiveParameter] $private_key, #[\SensitiveParameter] string $passphrase, array $options = []): bool {}

/** @genstubs-expose-comment-block
 * Parse a PKCS#12 Certificate Store into an array
 * @param string $pkcs12 The certificate store contents, not its file name.
 * @param array $certificates On success, this will hold the Certificate Store Data.
 * @param string $passphrase Encryption password for unlocking the PKCS#12 file.
 * @return bool
 */
/**
 * @param array $certificates
 */
function openssl_pkcs12_read(string $pkcs12, &$certificates, #[\SensitiveParameter] string $passphrase): bool {}

/** @genstubs-expose-comment-block
 * Exports a CSR to a file
 * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.
 * @param string $output_filename Path to the output file.
 * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.
 * @return bool
 */
function openssl_csr_export_to_file(OpenSSLCertificateSigningRequest|string $csr, string $output_filename, bool $no_text = true): bool {}

/** @genstubs-expose-comment-block
 * Exports a CSR as a string
 * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.
 * @param string $output on success, this string will contain the PEM encoded CSR
 * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.
 * @return bool
 */
/** @param string $output */
function openssl_csr_export(OpenSSLCertificateSigningRequest|string $csr, &$output, bool $no_text = true): bool {}

/** @genstubs-expose-comment-block
 * Sign a CSR with another certificate (or itself) and generate a certificate
 * @param OpenSSLCertificateSigningRequest|string $csr A CSR previously generated by openssl_csr_new. It can also be the path to a PEM encoded CSR when specified as file:pathtocsr or an exported string generated by openssl_csr_export.
 * @param OpenSSLCertificate|string|null $ca_certificate The generated certificate will be signed by ca_certificate. If ca_certificate is null, the generated certificate will be a self-signed certificate.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key is the private key that corresponds to ca_certificate.
 * @param int $days days specifies the length of time for which the generated certificate will be valid, in days.
 * @param array|null $options You can finetune the CSR signing by options. See openssl_csr_new for more information about options.
 * @param int $serial An optional the serial number of issued certificate. If not specified it will default to 0.
 * @param string|null $serial_hex An optional hexadecimal string representing the serial number of the issued certificate. If set, it takes precedence over the serial parameter value. If not specified or set to null, the serial parameter value is used instead.
 * @return OpenSSLCertificate|false
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_csr_sign(OpenSSLCertificateSigningRequest|string $csr, OpenSSLCertificate|string|null $ca_certificate, #[\SensitiveParameter] $private_key, int $days, ?array $options = null, int $serial = 0, ?string $serial_hex = null): OpenSSLCertificate|false {}

/** @genstubs-expose-comment-block
 * Generates a CSR
 * @param array $distinguished_names The Distinguished Name or subject fields to be included in the certificate. The distinguished_names is an associative array where the keys represent the attribute names of Distinguished Names and the values can either be strings (for single value) or arrays (if multiple values need to be set).
 * @param OpenSSLAsymmetricKey|null $private_key private_key should be set to a private key that was previously generated by openssl_pkey_new (or otherwise obtained from the other openssl_pkey family of functions), or null variable. If its value is null variable, a new private key is generated based on the supplied options and assigned to supplied variable. The corresponding public portion of the key will be used to sign the CSR.
 * @param array|null $options By default, the information in your system openssl.conf is used to initialize the request; you can specify a configuration file section by setting the config_section_section key in options.  You can also specify an alternative OpenSSL configuration file by setting the value of the config key to the path of the file you want to use. The following keys, if present in options behave as their equivalents in the openssl.conf, as listed in the table below. Configuration overrides options key type openssl.conf equivalent description digest_alg string default_md Digest method or signature hash, usually one of openssl_get_md_methods x509_extensions string x509_extensions Selects which extensions should be used when creating an x509 certificate req_extensions string req_extensions Selects which extensions should be used when creating a CSR private_key_bits int default_bits Specifies how many bits should be used to generate a private key private_key_type int none Specifies the type of private key to create.  This can be one of OPENSSL_KEYTYPE_DSA, OPENSSL_KEYTYPE_DH, OPENSSL_KEYTYPE_RSA or OPENSSL_KEYTYPE_EC. The default value is OPENSSL_KEYTYPE_RSA. encrypt_key bool encrypt_key Should an exported key (with passphrase) be encrypted? encrypt_key_cipher int none One of cipher constants. curve_name string none One of openssl_get_curve_names. config string NA Path to your own alternative openssl.conf file.
 * @param array|null $extra_attributes extra_attributes is used to specify additional attributes for the CSR. It is an associative arrays where the keys are converted to OIDs and applied as CSR attributes.
 * @return OpenSSLCertificateSigningRequest|bool
 */
/**
 * @param OpenSSLAsymmetricKey|null $private_key
 */
function openssl_csr_new(array $distinguished_names, #[\SensitiveParameter] &$private_key, ?array $options = null, ?array $extra_attributes = null): OpenSSLCertificateSigningRequest|bool {}

/** @genstubs-expose-comment-block
 * Returns the subject of a CSR
 * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.
 * @param bool $short_names short_names controls how the data is indexed in the array - if short_names is true (the default) then fields will be indexed with the short name form, otherwise, the long name form will be used - e.g.: CN is the shortname form of commonName.
 * @return array|false
 */
/**
 * @return array<string, string|array>|false
 * @refcount 1
 */
function openssl_csr_get_subject(OpenSSLCertificateSigningRequest|string $csr, bool $short_names = true): array|false {}

/** @genstubs-expose-comment-block
 * Returns the public key of a CSR
 * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.
 * @param bool $short_names This parameter is ignored
 * @return OpenSSLAsymmetricKey|false
 */
function openssl_csr_get_public_key(OpenSSLCertificateSigningRequest|string $csr, bool $short_names = true): OpenSSLAsymmetricKey|false {}

/** @genstubs-expose-comment-block
 * Generates a new private key
 * @param array|null $options It is possible to fine-tune the key generation (e.g. specifying the number of bits or parameters) using the options parameter. These options can either be algorithm-specific parameters used for key generation, or generic options used also in CSRgeneration if not specified. See openssl_csr_new for more information about how to use options for a CSR. Among those options only private_key_bits, private_key_type, curve_name, and config are used for key generation. Algorithm-specific options are used if the associative array includes one of the specific keys. "rsa" key for setting RSA parameters. options type format required description "n" string binary number yes modulus "e" string binary number no public exponent "d" string binary number yes private exponent "p" string binary number no prime 1 "q" string binary number no prime 2 "dmp1" string binary number no exponent1, d mod (p-1) "dmq1" string binary number no exponent2, d mod (q-1) "iqmp" string binary number no coefficient, (inverse of q) mod p "dsa" key for setting DSA parameters. options type format required description "p" string binary number no prime number (public) "q" string binary number no 160-bit subprime, q | p-1 (public) "g" string binary number no generator of subgroup (public) "priv_key" string PEM key no private key x "pub_key" string PEM key no public key y = g^x "dh" key for DH (Diffie–Hellman key exchange) parameters. Options Type Format Required Description "p" string binary number no prime number (shared) "g" string binary number no generator of Z_p (shared) "priv_key" string PEM key no private DH value x "pub_key" string PEM key no public DH value g^x "ec" key for Elliptic curve parameters Options Type Format Required Description "curve_name" string name no name of curve, see openssl_get_curve_names "p" string binary number no prime of the field for curve over Fp "a" string binary number no coofecient a of the curve for Fp: y^2 mod p = x^3 + ax + b mod p "b" string binary number no coofecient b of the curve for Fp: y^2 mod p = x^3 + ax + b mod p "seed" string binary number no optional random number seed used to generate coefficient b "generator" string binary encoded point no curve generator point "g_x" string binary number no curver generator point x coordinat "g_y" string binary number no curver generator point y coordinat "cofactor" string binary number no curve cofactor "order" string binary number no curve order "x" string binary number no x coordinate (public) "y" string binary number no y coordinate (public) "d" string binary number no private key "x25519", "x448", "ed25519", "ed448" keys for Curve25519 and Curve448 parameters. Options Type Format Required Description "priv_key" string PEM key no private key "pub_key" string PEM key no public key
 * @return OpenSSLAsymmetricKey|false
 */
function openssl_pkey_new(?array $options = null): OpenSSLAsymmetricKey|false {}

/** @genstubs-expose-comment-block
 * Gets an exportable representation of a key into a file
 * @param string $output_filename Path to the output file.
 * @param string|null $passphrase The key can be optionally protected by a passphrase.
 * @param array|null $options options can be used to fine-tune the export process by specifying andor overriding options for the openssl configuration file. See openssl_csr_new for more information about options.
 * @return bool
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $key
 */
function openssl_pkey_export_to_file(#[\SensitiveParameter] $key, string $output_filename, #[\SensitiveParameter] ?string $passphrase = null, ?array $options = null): bool {}

/** @genstubs-expose-comment-block
 * Gets an exportable representation of a key into a string
 * @param string|null $passphrase The key is optionally protected by passphrase.
 * @param array|null $options options can be used to fine-tune the export process by specifying andor overriding options for the openssl configuration file.  See openssl_csr_new for more information about options.
 * @return bool
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $key
 * @param string $output
 */
function openssl_pkey_export(#[\SensitiveParameter] $key, &$output, #[\SensitiveParameter] ?string $passphrase = null, ?array $options = null): bool {}

/** @genstubs-expose-comment-block
 * Extract public key from certificate and prepare it for use
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key public_key can be one of the following: an OpenSSLAsymmetricKey instance a string having the format file:pathtofile.pem. The named file must contain a PEM encoded certificatepublic key (it may contain both). A PEM formatted public key.
 * @return OpenSSLAsymmetricKey|false
 */
/** @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key */
function openssl_pkey_get_public($public_key): OpenSSLAsymmetricKey|false {}

/** @genstubs-expose-comment-block
 * Alias openssl_pkey_get_public
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key
 * @alias openssl_pkey_get_public
 */
function openssl_get_publickey($public_key): OpenSSLAsymmetricKey|false {}

#[\Deprecated(since: '8.0', message: 'as OpenSSLAsymmetricKey objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Frees a private key
 * @param OpenSSLAsymmetricKey $key Resource holding the key.
 * @return void
 */
function openssl_pkey_free(OpenSSLAsymmetricKey $key): void {}

/**
 * @alias openssl_pkey_free
 */
#[\Deprecated(since: '8.0', message: 'as OpenSSLAsymmetricKey objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Free key resource
 * @return void
 */
function openssl_free_key(OpenSSLAsymmetricKey $key): void {}

/** @genstubs-expose-comment-block
 * Get a private key
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key can be one of the following: a string having the format file:pathtofile.pem. The named file must contain a PEM encoded certificateprivate key (it may contain both). A PEM formatted private key.
 * @param string|null $passphrase The optional parameter passphrase must be used if the specified key is encrypted (protected by a passphrase).
 * @return OpenSSLAsymmetricKey|false
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_pkey_get_private(#[\SensitiveParameter] $private_key, #[\SensitiveParameter] ?string $passphrase = null): OpenSSLAsymmetricKey|false {}

/** @genstubs-expose-comment-block
 * Alias openssl_pkey_get_private
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 * @alias openssl_pkey_get_private
 */
function openssl_get_privatekey(#[\SensitiveParameter] $private_key, #[\SensitiveParameter] ?string $passphrase = null): OpenSSLAsymmetricKey|false {}

/** @genstubs-expose-comment-block
 * Returns an array with the key details
 * @param OpenSSLAsymmetricKey $key Resource holding the key.
 * @return array|false
 */
/**
 * @return array<string, int|string|array>|false
 * @refcount 1
 */
function openssl_pkey_get_details(OpenSSLAsymmetricKey $key): array|false {}

/** @genstubs-expose-comment-block
 * Generates a PKCS5 v2 PBKDF2 string
 * @return string|false
 */
function openssl_pbkdf2(#[\SensitiveParameter] string $password, string $salt, int $key_length, int $iterations, string $digest_algo = "sha1"): string|false {}

/** @genstubs-expose-comment-block
 * Verifies the signature of an S/MIME signed message
 * @param string $input_filename Path to the message.
 * @param int $flags flags can be used to affect how the signature is verified - see PKCS7 constants for more information.
 * @param string|null $signers_certificates_filename If the signers_certificates_filename is specified, it should be a string holding the name of a file into which the certificates of the persons that signed the messages will be stored in PEM format.
 * @param array $ca_info If the ca_info is specified, it should hold information about the trusted CA certificates to use in the verification process - see certificate verification for more information about this parameter.
 * @param string|null $untrusted_certificates_filename If the untrusted_certificates_filename is specified, it is the filename of a file containing a bunch of certificates to use as untrusted CAs.
 * @param string|null $content You can specify a filename with content that will be filled with the verified data, but with the signature information stripped.
 * @return bool|int
 */
function openssl_pkcs7_verify(string $input_filename, int $flags, ?string $signers_certificates_filename = null, array $ca_info = [], ?string $untrusted_certificates_filename = null, ?string $content = null, ?string $output_filename = null): bool|int {}

/** @genstubs-expose-comment-block
 * Encrypt an S/MIME message
 * @param OpenSSLCertificate|array|string $certificate Either a lone X.509 certificate, or an array of X.509 certificates.
 * @param array|null $headers headers is an array of headers that will be prepended to the data after it has been encrypted.
 * @param int $flags flags can be used to specify options that affect the encoding process - see PKCS7 constants.
 * @param int $cipher_algo One of cipher constants.
 * @return bool
 */
/** @param OpenSSLCertificate|array|string $certificate */
function openssl_pkcs7_encrypt(string $input_filename, string $output_filename, $certificate, ?array $headers, int $flags = 0, int $cipher_algo = OPENSSL_CIPHER_AES_128_CBC): bool {}

/** @genstubs-expose-comment-block
 * Sign an S/MIME message
 * @param string $input_filename The input file you are intending to digitally sign.
 * @param string $output_filename The file which the digital signature will be written to.
 * @param OpenSSLCertificate|string $certificate The X.509 certificate used to digitally sign input_filename. See KeyCertificate parameters for a list of valid values.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key is the private key corresponding to certificate. See PublicPrivate Key parameters for a list of valid values.
 * @param array|null $headers headers is an array of headers that will be prepended to the data after it has been signed (see openssl_pkcs7_encrypt for more information about the format of this parameter).
 * @param int $flags flags can be used to alter the output - see PKCS7 constants.
 * @param string|null $untrusted_certificates_filename untrusted_certificates_filename specifies the name of a file containing a bunch of extra certificates to include in the signature which can for example be used to help the recipient to verify the certificate that you used.
 * @return bool
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_pkcs7_sign(string $input_filename, string $output_filename, OpenSSLCertificate|string $certificate, #[\SensitiveParameter] $private_key, ?array $headers, int $flags = PKCS7_DETACHED, ?string $untrusted_certificates_filename = null): bool {}

/** @genstubs-expose-comment-block
 * Decrypts an S/MIME encrypted message
 * @param string $output_filename The decrypted message is written to the file specified by output_filename.
 * @return bool
 */
/**
 * @param OpenSSLCertificate|string $certificate
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string|null $private_key
 */
function openssl_pkcs7_decrypt(string $input_filename, string $output_filename, #[\SensitiveParameter] $certificate, #[\SensitiveParameter] $private_key = null): bool {}

/** @genstubs-expose-comment-block
 * Export the PKCS7 file to an array of PEM certificates
 * @return bool
 */
/** @param array $certificates */
function openssl_pkcs7_read(string $data, &$certificates): bool {}

/** @genstubs-expose-comment-block
 * Verify a CMS signature
 * @return bool
 */
function openssl_cms_verify(string $input_filename, int $flags = 0, ?string $certificates = null, array $ca_info = [], ?string $untrusted_certificates_filename = null, ?string $content = null, ?string $pk7 = null, ?string $sigfile = null, int $encoding = OPENSSL_ENCODING_SMIME): bool {}

/** @genstubs-expose-comment-block
 * Encrypt a CMS message
 * @return bool
 */
/** @param OpenSSLCertificate|array|string $certificate */
function openssl_cms_encrypt(string $input_filename, string $output_filename, $certificate, ?array $headers, int $flags = 0, int $encoding = OPENSSL_ENCODING_SMIME, string|int $cipher_algo = OPENSSL_CIPHER_AES_128_CBC): bool {}

/** @genstubs-expose-comment-block
 * Sign a file
 * @return bool
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_cms_sign(string $input_filename, string $output_filename, OpenSSLCertificate|string $certificate, #[\SensitiveParameter] $private_key, ?array $headers, int $flags = 0, int $encoding = OPENSSL_ENCODING_SMIME, ?string $untrusted_certificates_filename = null): bool {}

/** @genstubs-expose-comment-block
 * Decrypt a CMS message
 * @return bool
 */
/**
 * @param OpenSSLCertificate|string $certificate
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string|null $private_key
 */
function openssl_cms_decrypt(string $input_filename, string $output_filename, #[\SensitiveParameter] $certificate, #[\SensitiveParameter] $private_key = null, int $encoding = OPENSSL_ENCODING_SMIME): bool {}

/** @genstubs-expose-comment-block
 * Export the CMS file to an array of PEM certificates
 * @return bool
 */
/** @param array $certificates */
function openssl_cms_read(string $input_filename, &$certificates): bool {}

/** @genstubs-expose-comment-block
 * Encrypts data with private key
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key must be the private key that corresponds to the public key that will be used to decrypt the data.
 * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_NO_PADDING.
 * @return bool
 */
/**
 * @param string $encrypted_data
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_private_encrypt(#[\SensitiveParameter] string $data, &$encrypted_data, #[\SensitiveParameter] $private_key, int $padding = OPENSSL_PKCS1_PADDING): bool {}

/** @genstubs-expose-comment-block
 * Decrypts data with private key
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key must be the private key that corresponds to the public key that was used to encrypt the data.
 * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_SSLV23_PADDING, OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_NO_PADDING.
 * @return bool
 */
/**
 * @param string $decrypted_data
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_private_decrypt(string $data, #[\SensitiveParameter] &$decrypted_data, #[\SensitiveParameter] $private_key, int $padding = OPENSSL_PKCS1_PADDING, ?string $digest_algo = null): bool {}

/** @genstubs-expose-comment-block
 * Encrypts data with public key
 * @param string $encrypted_data This will hold the result of the encryption.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key public_key must be the public key that corresponds to the private key that will be used to decrypt the data.
 * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_SSLV23_PADDING, OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_NO_PADDING.
 * @return bool
 */
/**
 * @param string $encrypted_data
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key
 */
function openssl_public_encrypt(#[\SensitiveParameter] string $data, &$encrypted_data, $public_key, int $padding = OPENSSL_PKCS1_PADDING, ?string $digest_algo = null): bool {}

/** @genstubs-expose-comment-block
 * Decrypts data with public key
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key public_key must be the public key that corresponds to the private key that was used to encrypt the data.
 * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_NO_PADDING.
 * @return bool
 */
/**
 * @param string $decrypted_data
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key
 */
function openssl_public_decrypt(string $data, #[\SensitiveParameter] &$decrypted_data, $public_key, int $padding = OPENSSL_PKCS1_PADDING): bool {}

/** @genstubs-expose-comment-block
 * Return openSSL error message
 * @return string|false
 */
function openssl_error_string(): string|false {}

/** @genstubs-expose-comment-block
 * Generate signature
 * @param string $data The string of data you wish to sign
 * @param string $signature If the call was successful the signature is returned in signature.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key OpenSSLAsymmetricKey - a key, returned by openssl_get_privatekey
 * @param string|int $algorithm int - one of these Signature Algorithms.
 * @return bool
 */
/**
 * @param string $signature
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_sign(string $data, &$signature, #[\SensitiveParameter] $private_key, string|int $algorithm = OPENSSL_ALGO_SHA1, int $padding = 0): bool {}

/** @genstubs-expose-comment-block
 * Verify signature
 * @param string $data The string of data used to generate the signature previously
 * @param string $signature A raw binary string, generated by openssl_sign or similar means
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key OpenSSLAsymmetricKey - a key, returned by openssl_get_publickey
 * @param string|int $algorithm int - one of these Signature Algorithms.
 * @return int|false
 */
/** @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key */
function openssl_verify(string $data, string $signature, $public_key, string|int $algorithm = OPENSSL_ALGO_SHA1, int $padding = 0): int|false {}

/** @genstubs-expose-comment-block
 * Seal (encrypt) data
 * @param string $data The data to seal.
 * @param string $sealed_data The sealed data.
 * @param array $encrypted_keys Array of encrypted keys.
 * @param array $public_key Array of OpenSSLAsymmetricKey instances containing public keys.
 * @param string $cipher_algo The cipher method. The default value for PHP versions prior to 8.0 is ('RC4') which is considered insecure. It is strongly recommended to explicitly specify a secure cipher method.
 * @param string $iv The initialization vector for decryption of data. It is required if the cipher method requires IV. This can be found out by calling openssl_cipher_iv_length with cipher_algo.
 * @return int|false
 */
/**
 * @param string $sealed_data
 * @param array $encrypted_keys
 * @param string $iv
 */
function openssl_seal(#[\SensitiveParameter] string $data, &$sealed_data, &$encrypted_keys, array $public_key, string $cipher_algo, &$iv = null): int|false {}

/** @genstubs-expose-comment-block
 * Open sealed data
 * @param string $data The sealed data.
 * @param string $output If the call is successful the opened data is returned in this parameter.
 * @param string $encrypted_key The encrypted symmetric key that can be decrypted using private_key.
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key The private key used for decrypting encrypted_key.
 * @param string $cipher_algo The cipher method used for decryption of data. The default value for PHP versions prior to 8.0 is ('RC4') which is considered insecure. It is strongly recommended to explicitly specify a secure cipher method.
 * @param string|null $iv The initialization vector used for decryption of data. It is required if the cipher method requires IV. This can be found out by calling openssl_cipher_iv_length with cipher_algo.
 * @return bool
 */
/**
 * @param string $output
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_open(string $data, #[\SensitiveParameter] &$output, string $encrypted_key, #[\SensitiveParameter] $private_key, string $cipher_algo, ?string $iv = null): bool {}

/** @genstubs-expose-comment-block
 * Gets available digest methods
 * @param bool $aliases Set to true if digest aliases should be included within the returned array.
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function openssl_get_md_methods(bool $aliases = false): array {}

/** @genstubs-expose-comment-block
 * Gets available cipher methods
 * @param bool $aliases Set to true if cipher aliases should be included within the returned array.
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function openssl_get_cipher_methods(bool $aliases = false): array {}

#ifdef HAVE_EVP_PKEY_EC
/** @genstubs-expose-comment-block
 * Gets list of available curve names for ECC
 * @return array|false
 */
/**
 * @return array<int, string>|false
 * @refcount 1
 */
function openssl_get_curve_names(): array|false {}
#endif

/** @genstubs-expose-comment-block
 * Computes a digest
 * @param string $data The data.
 * @param string $digest_algo The digest method to use, e.g. "sha256", see openssl_get_md_methods for a list of available digest methods.
 * @param bool $binary Setting to true will return as raw output data, otherwise the return value is binhex encoded.
 * @return string|false
 */
function openssl_digest(string $data, string $digest_algo, bool $binary = false): string|false {}

/** @genstubs-expose-comment-block
 * Encrypts data
 * @param string $data The plaintext message data to be encrypted.
 * @param string $cipher_algo The cipher method. For a list of available cipher methods, use openssl_get_cipher_methods.
 * @param string $passphrase The passphrase. If the passphrase is shorter than expected, it is silently padded with NUL characters; if the passphrase is longer than expected, it is silently truncated.
 * @param int $options options is a bitwise disjunction of the flags OPENSSL_RAW_DATA, and OPENSSL_ZERO_PADDING or OPENSSL_DONT_ZERO_PAD_KEY.
 * @param string $iv A non-null Initialization Vector. If the IV is shorter than expected, it is padded with NUL characters and warning is emitted; if the passphrase is longer than expected, it is truncated and warning is emitted.
 * @param string $tag The authentication tag passed by reference when using AEAD cipher mode (GCM or CCM).
 * @param string $aad Additional authenticated data.
 * @param int $tag_length The length of the authentication tag. Its value can be between 4 and 16 for GCM mode.
 * @return string|false
 */
/**
 * @param string $tag
 */
function openssl_encrypt(#[\SensitiveParameter] string $data, string $cipher_algo, #[\SensitiveParameter] string $passphrase, int $options = 0, string $iv = "", &$tag = null, string $aad = "", int $tag_length = 16): string|false {}

/** @genstubs-expose-comment-block
 * Decrypts data
 * @param string $data The encrypted message to be decrypted.
 * @param string $cipher_algo The cipher method. For a list of available cipher methods, use openssl_get_cipher_methods.
 * @param string $passphrase The passphrase. If the passphrase is shorter than expected, it is silently padded with NUL characters; if the passphrase is longer than expected, it is silently truncated.
 * @param int $options options can be one of OPENSSL_RAW_DATA, OPENSSL_ZERO_PADDING or OPENSSL_DONT_ZERO_PAD_KEY.
 * @param string $iv A non-null Initialization Vector. If the IV is shorter than expected, it is padded with NUL characters and warning is emitted; if the passphrase is longer than expected, it is truncated and warning is emitted.
 * @param string|null $tag The authentication tag in AEAD cipher mode. If it is incorrect, the authentication fails and the function returns false.
 * @param string $aad Additional authenticated data.
 * @return string|false
 */
function openssl_decrypt(string $data, string $cipher_algo, #[\SensitiveParameter] string $passphrase, int $options = 0, string $iv = "", ?string $tag = null, string $aad = ""): string|false {}

/** @genstubs-expose-comment-block
 * Gets the cipher iv length
 * @return int|false
 */
function openssl_cipher_iv_length(string $cipher_algo): int|false {}

/** @genstubs-expose-comment-block
 * Gets the cipher key length
 * @return int|false
 */
function openssl_cipher_key_length(string $cipher_algo): int|false {}

/** @genstubs-expose-comment-block
 * Computes shared secret for public value of remote DH public key and local DH key
 * @param string $public_key DH Public key of the remote party.
 * @param OpenSSLAsymmetricKey $private_key A local DH private key, corresponding to the public key to be shared with the remote party.
 * @return string|false
 */
function openssl_dh_compute_key(string $public_key, #[\SensitiveParameter] OpenSSLAsymmetricKey $private_key): string|false {}

/** @genstubs-expose-comment-block
 * Computes shared secret for public value of remote and local DH or ECDH key
 * @return string|false
 */
/**
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key
 * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key
 */
function openssl_pkey_derive($public_key, #[\SensitiveParameter] $private_key, int $key_length = 0): string|false {}

/** @genstubs-expose-comment-block
 * Generate a pseudo-random string of bytes
 * @param int $length The length of the desired string of bytes. Must be a positive integer less than or equal to 2147483647. PHP will try to cast this parameter to a non-null integer to use it.
 * @param bool $strong_result If passed into the function, this will hold a bool value that determines if the algorithm used was "cryptographically strong", e.g., safe for usage with GPG, passwords, etc. true if it did, otherwise false
 * @return string
 */
/** @param bool $strong_result */
function openssl_random_pseudo_bytes(int $length, &$strong_result = null): string {}

/** @genstubs-expose-comment-block
 * Generate a new signed public key and challenge
 * @return string|false
 */
function openssl_spki_new(#[\SensitiveParameter] OpenSSLAsymmetricKey $private_key, string $challenge, int $digest_algo = OPENSSL_ALGO_MD5): string|false {}

/** @genstubs-expose-comment-block
 * Verifies a signed public key and challenge
 * @return bool
 */
function openssl_spki_verify(string $spki): bool {}

/** @genstubs-expose-comment-block
 * Exports a valid PEM formatted public key signed public key and challenge
 * @return string|false
 */
function openssl_spki_export(string $spki): string|false {}

/** @genstubs-expose-comment-block
 * Exports the challenge associated with a signed public key and challenge
 * @return string|false
 */
function openssl_spki_export_challenge(string $spki): string|false {}

/** @genstubs-expose-comment-block
 * Retrieve the available certificate locations
 * @return array
 */
/**
 * @return array<string, string>
 * @refcount 1
 */
function openssl_get_cert_locations(): array {}

#if defined(HAVE_OPENSSL_ARGON2)
function openssl_password_hash(string $algo, #[\SensitiveParameter] string $password, array $options = []): string {}
function openssl_password_verify(string $algo, #[\SensitiveParameter] string $password, string $hash): bool {}
#endif
