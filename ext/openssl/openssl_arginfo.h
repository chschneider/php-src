/* This is a generated file, edit openssl.stub.php instead.
 * Stub hash: 89f275c8b685f6f8c586a09a6d551ab97c0bc26d */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_export_to_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_filename, IS_STRING, 0, "Path to the output file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, no_text, _IS_BOOL, 0, "true", "The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_export, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_INFO(1, output)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, no_text, _IS_BOOL, 0, "true", "The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_x509_fingerprint, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, digest_algo, IS_STRING, 0, "\"sha1\"", "The digest method or hash algorithm to use, e.g. \"sha256\", one of openssl_get_md_methods.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "When set to true, outputs raw binary data. false outputs lowercase hexits.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_check_private_key, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "The certificate.")
	ZEND_ARG_INFO(0, private_key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_verify, 0, 2, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_INFO(0, public_key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_x509_parse, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "X509 certificate. See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, short_names, _IS_BOOL, 0, "true", "short_names controls how the data is indexed in the array - if short_names is true (the default) then fields will be indexed with the short name form, otherwise, the long name form will be used - e.g.: CN is the shortname form of commonName.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_x509_checkpurpose, 0, 2, MAY_BE_BOOL|MAY_BE_LONG)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "The examined certificate.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, purpose, IS_LONG, 0, "openssl_x509_checkpurpose purposes Constant Description X509_PURPOSE_SSL_CLIENT Can the certificate be used for the client side of an SSL connection? X509_PURPOSE_SSL_SERVER Can the certificate be used for the server side of an SSL connection? X509_PURPOSE_NS_SSL_SERVER Can the cert be used for Netscape SSL server? X509_PURPOSE_SMIME_SIGN Can the cert be used to sign S/MIME email? X509_PURPOSE_SMIME_ENCRYPT Can the cert be used to encrypt S/MIME email? X509_PURPOSE_CRL_SIGN Can the cert be used to sign a certificate revocation list (CRL)? X509_PURPOSE_ANY Can the cert be used for Any/All purposes? These options are not bitfields - you may specify one only!")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, ca_info, IS_ARRAY, 0, "[]", "ca_info should be an array of trusted CA files/dirs as described in Certificate Verification.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, untrusted_certificates_file, IS_STRING, 1, "null", "If specified, this should be the name of a PEM encoded file holding certificates that can be used to help verify the certificate, although no trust is placed in the certificates that come from that file.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_x509_read, 0, 1, OpenSSLCertificate, MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "X509 certificate. See Key/Certificate parameters for a list of valid values.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_x509_free, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, certificate, OpenSSLCertificate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs12_export_to_file, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_filename, IS_STRING, 0, "Path to the output file.")
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, passphrase, IS_STRING, 0, "Encryption password for unlocking the PKCS#12 file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "Optional array, other keys will be ignored. Key Description \"extracerts\" array of extra certificates or a single certificate to be included in the PKCS#12 file. \"friendly_name\" string to be used for the supplied certificate and key")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs12_export, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_INFO(1, output)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, passphrase, IS_STRING, 0, "Encryption password for unlocking the PKCS#12 file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "Optional array, other keys will be ignored. Key Description \"extracerts\" array of extra certificates or a single certificate to be included in the PKCS#12 file. \"friendly_name\" string to be used for the supplied certificate and key")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs12_read, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pkcs12, IS_STRING, 0, "The certificate store contents, not its file name.")
	ZEND_ARG_INFO(1, certificates)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, passphrase, IS_STRING, 0, "Encryption password for unlocking the PKCS#12 file.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_csr_export_to_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, csr, OpenSSLCertificateSigningRequest, MAY_BE_STRING, NULL, "See CSR parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_filename, IS_STRING, 0, "Path to the output file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, no_text, _IS_BOOL, 0, "true", "The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_csr_export, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, csr, OpenSSLCertificateSigningRequest, MAY_BE_STRING, NULL, "See CSR parameters for a list of valid values.")
	ZEND_ARG_INFO(1, output)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, no_text, _IS_BOOL, 0, "true", "The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_csr_sign, 0, 4, OpenSSLCertificate, MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, csr, OpenSSLCertificateSigningRequest, MAY_BE_STRING, NULL, "A CSR previously generated by openssl_csr_new. It can also be the path to a PEM encoded CSR when specified as file://path/to/csr or an exported string generated by openssl_csr_export.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, ca_certificate, OpenSSLCertificate, MAY_BE_STRING|MAY_BE_NULL, NULL, "The generated certificate will be signed by ca_certificate. If ca_certificate is null, the generated certificate will be a self-signed certificate.")
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, days, IS_LONG, 0, "days specifies the length of time for which the generated certificate will be valid, in days.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "You can finetune the CSR signing by options. See openssl_csr_new for more information about options.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, serial, IS_LONG, 0, "0", "An optional the serial number of issued certificate. If not specified it will default to 0.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, serial_hex, IS_STRING, 1, "null", "An optional hexadecimal string representing the serial number of the issued certificate. If set, it takes precedence over the serial parameter value. If not specified or set to null, the serial parameter value is used instead.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_csr_new, 0, 2, OpenSSLCertificateSigningRequest, MAY_BE_BOOL)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, distinguished_names, IS_ARRAY, 0, "The Distinguished Name or subject fields to be included in the certificate. The distinguished_names is an associative array where the keys represent the attribute names of Distinguished Names and the values can either be strings (for single value) or arrays (if multiple values need to be set).")
	ZEND_ARG_INFO(1, private_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "By default, the information in your system openssl.conf is used to initialize the request; you can specify a configuration file section by setting the config_section_section key in options.  You can also specify an alternative OpenSSL configuration file by setting the value of the config key to the path of the file you want to use. The following keys, if present in options behave as their equivalents in the openssl.conf, as listed in the table below. Configuration overrides options key type openssl.conf equivalent description digest_alg string default_md Digest method or signature hash, usually one of openssl_get_md_methods x509_extensions string x509_extensions Selects which extensions should be used when creating an x509 certificate req_extensions string req_extensions Selects which extensions should be used when creating a CSR private_key_bits int default_bits Specifies how many bits should be used to generate a private key private_key_type int none Specifies the type of private key to create.  This can be one of OPENSSL_KEYTYPE_DSA, OPENSSL_KEYTYPE_DH, OPENSSL_KEYTYPE_RSA or OPENSSL_KEYTYPE_EC. The default value is OPENSSL_KEYTYPE_RSA. encrypt_key bool encrypt_key Should an exported key (with passphrase) be encrypted? encrypt_key_cipher int none One of cipher constants. curve_name string none One of openssl_get_curve_names. config string N/A Path to your own alternative openssl.conf file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, extra_attributes, IS_ARRAY, 1, "null", "extra_attributes is used to specify additional attributes for the CSR. It is an associative arrays where the keys are converted to OIDs and applied as CSR attributes.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_csr_get_subject, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, csr, OpenSSLCertificateSigningRequest, MAY_BE_STRING, NULL, "See CSR parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, short_names, _IS_BOOL, 0, "true", "short_names controls how the data is indexed in the array - if short_names is true (the default) then fields will be indexed with the short name form, otherwise, the long name form will be used - e.g.: CN is the shortname form of commonName.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_csr_get_public_key, 0, 1, OpenSSLAsymmetricKey, MAY_BE_FALSE)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, csr, OpenSSLCertificateSigningRequest, MAY_BE_STRING, NULL, "See CSR parameters for a list of valid values.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, short_names, _IS_BOOL, 0, "true", "This parameter is ignored")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_pkey_new, 0, 0, OpenSSLAsymmetricKey, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "It is possible to fine-tune the key generation (e.g. specifying the number of bits or parameters) using the options parameter. These options can either be algorithm-specific parameters used for key generation, or generic options used also in CSRgeneration if not specified. See openssl_csr_new for more information about how to use options for a CSR. Among those options only private_key_bits, private_key_type, curve_name, and config are used for key generation. Algorithm-specific options are used if the associative array includes one of the specific keys. \"rsa\" key for setting RSA parameters. options type format required description \"n\" string binary number yes modulus \"e\" string binary number no public exponent \"d\" string binary number yes private exponent \"p\" string binary number no prime 1 \"q\" string binary number no prime 2 \"dmp1\" string binary number no exponent1, d mod (p-1) \"dmq1\" string binary number no exponent2, d mod (q-1) \"iqmp\" string binary number no coefficient, (inverse of q) mod p \"dsa\" key for setting DSA parameters. options type format required description \"p\" string binary number no prime number (public) \"q\" string binary number no 160-bit subprime, q | p-1 (public) \"g\" string binary number no generator of subgroup (public) \"priv_key\" string PEM key no private key x \"pub_key\" string PEM key no public key y = g^x \"dh\" key for DH (Diffie\u2013Hellman key exchange) parameters. Options Type Format Required Description \"p\" string binary number no prime number (shared) \"g\" string binary number no generator of Z_p (shared) \"priv_key\" string PEM key no private DH value x \"pub_key\" string PEM key no public DH value g^x \"ec\" key for Elliptic curve parameters Options Type Format Required Description \"curve_name\" string name no name of curve, see openssl_get_curve_names \"p\" string binary number no prime of the field for curve over Fp \"a\" string binary number no coofecient a of the curve for Fp: y^2 mod p = x^3 + ax + b mod p \"b\" string binary number no coofecient b of the curve for Fp: y^2 mod p = x^3 + ax + b mod p \"seed\" string binary number no optional random number seed used to generate coefficient b \"generator\" string binary encoded point no curve generator point \"g_x\" string binary number no curver generator point x coordinat \"g_y\" string binary number no curver generator point y coordinat \"cofactor\" string binary number no curve cofactor \"order\" string binary number no curve order \"x\" string binary number no x coordinate (public) \"y\" string binary number no y coordinate (public) \"d\" string binary number no private key \"x25519\", \"x448\", \"ed25519\", \"ed448\" keys for Curve25519 and Curve448 parameters. Options Type Format Required Description \"priv_key\" string PEM key no private key \"pub_key\" string PEM key no public key")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkey_export_to_file, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_filename, IS_STRING, 0, "Path to the output file.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, passphrase, IS_STRING, 1, "null", "The key can be optionally protected by a passphrase.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "options can be used to fine-tune the export process by specifying and/or overriding options for the openssl configuration file. See openssl_csr_new for more information about options.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkey_export, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(1, output)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, passphrase, IS_STRING, 1, "null", "The key is optionally protected by passphrase.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 1, "null", "options can be used to fine-tune the export process by specifying and/or overriding options for the openssl configuration file.  See openssl_csr_new for more information about options.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_pkey_get_public, 0, 1, OpenSSLAsymmetricKey, MAY_BE_FALSE)
	ZEND_ARG_INFO(0, public_key)
ZEND_END_ARG_INFO()

#define arginfo_openssl_get_publickey arginfo_openssl_pkey_get_public

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkey_free, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, key, OpenSSLAsymmetricKey, 0)
ZEND_END_ARG_INFO()

#define arginfo_openssl_free_key arginfo_openssl_pkey_free

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_openssl_pkey_get_private, 0, 1, OpenSSLAsymmetricKey, MAY_BE_FALSE)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, passphrase, IS_STRING, 1, "null", "The optional parameter passphrase must be used if the specified key is encrypted (protected by a passphrase).")
ZEND_END_ARG_INFO()

#define arginfo_openssl_get_privatekey arginfo_openssl_pkey_get_private

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_pkey_get_details, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, key, OpenSSLAsymmetricKey, 0, "Resource holding the key.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_pbkdf2, 0, 4, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, salt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, key_length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iterations, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, digest_algo, IS_STRING, 0, "\"sha1\"")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_pkcs7_verify, 0, 2, MAY_BE_BOOL|MAY_BE_LONG)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, input_filename, IS_STRING, 0, "Path to the message.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, flags, IS_LONG, 0, "flags can be used to affect how the signature is verified - see PKCS7 constants for more information.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, signers_certificates_filename, IS_STRING, 1, "null", "If the signers_certificates_filename is specified, it should be a string holding the name of a file into which the certificates of the persons that signed the messages will be stored in PEM format.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, ca_info, IS_ARRAY, 0, "[]", "If the ca_info is specified, it should hold information about the trusted CA certificates to use in the verification process - see certificate verification for more information about this parameter.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, untrusted_certificates_filename, IS_STRING, 1, "null", "If the untrusted_certificates_filename is specified, it is the filename of a file containing a bunch of certificates to use as untrusted CAs.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, content, IS_STRING, 1, "null", "You can specify a filename with content that will be filled with the verified data, but with the signature information stripped.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, output_filename, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_encrypt, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, output_filename, IS_STRING, 0)
	ZEND_ARG_INFO(0, certificate)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, headers, IS_ARRAY, 1, "headers is an array of headers that will be prepended to the data after it has been encrypted.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "flags can be used to specify options that affect the encoding process - see PKCS7 constants.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, cipher_algo, IS_LONG, 0, "OPENSSL_CIPHER_AES_128_CBC", "One of cipher constants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_sign, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, input_filename, IS_STRING, 0, "The input file you are intending to digitally sign.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_filename, IS_STRING, 0, "The file which the digital signature will be written to.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL, "The X.509 certificate used to digitally sign input_filename. See Key/Certificate parameters for a list of valid values.")
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, headers, IS_ARRAY, 1, "headers is an array of headers that will be prepended to the data after it has been signed (see openssl_pkcs7_encrypt for more information about the format of this parameter).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "PKCS7_DETACHED", "flags can be used to alter the output - see PKCS7 constants.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, untrusted_certificates_filename, IS_STRING, 1, "null", "untrusted_certificates_filename specifies the name of a file containing a bunch of extra certificates to include in the signature which can for example be used to help the recipient to verify the certificate that you used.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_decrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_filename, IS_STRING, 0, "The decrypted message is written to the file specified by output_filename.")
	ZEND_ARG_INFO(0, certificate)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, private_key, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_pkcs7_read, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, certificates)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_cms_verify, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, certificates, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ca_info, IS_ARRAY, 0, "[]")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, untrusted_certificates_filename, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, content, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pk7, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, sigfile, IS_STRING, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_LONG, 0, "OPENSSL_ENCODING_SMIME")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_cms_encrypt, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, output_filename, IS_STRING, 0)
	ZEND_ARG_INFO(0, certificate)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_LONG, 0, "OPENSSL_ENCODING_SMIME")
	ZEND_ARG_TYPE_MASK(0, cipher_algo, MAY_BE_STRING|MAY_BE_LONG, "OPENSSL_CIPHER_AES_128_CBC")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_cms_sign, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, output_filename, IS_STRING, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, certificate, OpenSSLCertificate, MAY_BE_STRING, NULL)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO(0, headers, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_LONG, 0, "OPENSSL_ENCODING_SMIME")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, untrusted_certificates_filename, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_cms_decrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, output_filename, IS_STRING, 0)
	ZEND_ARG_INFO(0, certificate)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, private_key, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, encoding, IS_LONG, 0, "OPENSSL_ENCODING_SMIME")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_cms_read, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, input_filename, IS_STRING, 0)
	ZEND_ARG_INFO(1, certificates)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_private_encrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, encrypted_data)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, padding, IS_LONG, 0, "OPENSSL_PKCS1_PADDING", "padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_NO_PADDING.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_private_decrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, decrypted_data)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, padding, IS_LONG, 0, "OPENSSL_PKCS1_PADDING", "padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_SSLV23_PADDING, OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_NO_PADDING.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, digest_algo, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_public_encrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, encrypted_data)
	ZEND_ARG_INFO(0, public_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, padding, IS_LONG, 0, "OPENSSL_PKCS1_PADDING", "padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_SSLV23_PADDING, OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_NO_PADDING.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, digest_algo, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_public_decrypt, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(1, decrypted_data)
	ZEND_ARG_INFO(0, public_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, padding, IS_LONG, 0, "OPENSSL_PKCS1_PADDING", "padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_NO_PADDING.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_error_string, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_sign, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The string of data you wish to sign")
	ZEND_ARG_INFO(1, signature)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, algorithm, MAY_BE_STRING|MAY_BE_LONG, "OPENSSL_ALGO_SHA1", "int - one of these Signature Algorithms.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, padding, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_verify, 0, 3, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The string of data used to generate the signature previously")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, signature, IS_STRING, 0, "A raw binary string, generated by openssl_sign or similar means")
	ZEND_ARG_INFO(0, public_key)
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, algorithm, MAY_BE_STRING|MAY_BE_LONG, "OPENSSL_ALGO_SHA1", "int - one of these Signature Algorithms.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, padding, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_seal, 0, 5, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The data to seal.")
	ZEND_ARG_INFO(1, sealed_data)
	ZEND_ARG_INFO(1, encrypted_keys)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, public_key, IS_ARRAY, 0, "Array of OpenSSLAsymmetricKey instances containing public keys.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, cipher_algo, IS_STRING, 0, "The cipher method. The default value for PHP versions prior to 8.0 is ('RC4') which is considered insecure. It is strongly recommended to explicitly specify a secure cipher method.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, iv, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_open, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The sealed data.")
	ZEND_ARG_INFO(1, output)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, encrypted_key, IS_STRING, 0, "The encrypted symmetric key that can be decrypted using private_key.")
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, cipher_algo, IS_STRING, 0, "The cipher method used for decryption of data. The default value for PHP versions prior to 8.0 is ('RC4') which is considered insecure. It is strongly recommended to explicitly specify a secure cipher method.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, iv, IS_STRING, 1, "null", "The initialization vector used for decryption of data. It is required if the cipher method requires IV. This can be found out by calling openssl_cipher_iv_length with cipher_algo.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_get_md_methods, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, aliases, _IS_BOOL, 0, "false", "Set to true if digest aliases should be included within the returned array.")
ZEND_END_ARG_INFO()

#define arginfo_openssl_get_cipher_methods arginfo_openssl_get_md_methods

#if defined(HAVE_EVP_PKEY_EC)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_get_curve_names, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_digest, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The data.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, digest_algo, IS_STRING, 0, "The digest method to use, e.g. \"sha256\", see openssl_get_md_methods for a list of available digest methods.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, binary, _IS_BOOL, 0, "false", "Setting to true will return as raw output data, otherwise the return value is binhex encoded.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_encrypt, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The plaintext message data to be encrypted.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, cipher_algo, IS_STRING, 0, "The cipher method. For a list of available cipher methods, use openssl_get_cipher_methods.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, passphrase, IS_STRING, 0, "The passphrase. If the passphrase is shorter than expected, it is silently padded with NUL characters; if the passphrase is longer than expected, it is silently truncated.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_LONG, 0, "0", "options is a bitwise disjunction of the flags OPENSSL_RAW_DATA, and OPENSSL_ZERO_PADDING or OPENSSL_DONT_ZERO_PAD_KEY.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, iv, IS_STRING, 0, "\"\"", "A non-null Initialization Vector. If the IV is shorter than expected, it is padded with NUL characters and warning is emitted; if the passphrase is longer than expected, it is truncated and warning is emitted.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, tag, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, aad, IS_STRING, 0, "\"\"", "Additional authenticated data.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, tag_length, IS_LONG, 0, "16", "The length of the authentication tag. Its value can be between 4 and 16 for GCM mode.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_decrypt, 0, 3, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "The encrypted message to be decrypted.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, cipher_algo, IS_STRING, 0, "The cipher method. For a list of available cipher methods, use openssl_get_cipher_methods.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, passphrase, IS_STRING, 0, "The passphrase. If the passphrase is shorter than expected, it is silently padded with NUL characters; if the passphrase is longer than expected, it is silently truncated.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_LONG, 0, "0", "options can be one of OPENSSL_RAW_DATA, OPENSSL_ZERO_PADDING or OPENSSL_DONT_ZERO_PAD_KEY.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, iv, IS_STRING, 0, "\"\"", "A non-null Initialization Vector. If the IV is shorter than expected, it is padded with NUL characters and warning is emitted; if the passphrase is longer than expected, it is truncated and warning is emitted.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, tag, IS_STRING, 1, "null", "The authentication tag in AEAD cipher mode. If it is incorrect, the authentication fails and the function returns false.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, aad, IS_STRING, 0, "\"\"", "Additional authenticated data.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_cipher_iv_length, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, cipher_algo, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_openssl_cipher_key_length arginfo_openssl_cipher_iv_length

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_dh_compute_key, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, public_key, IS_STRING, 0, "DH Public key of the remote party.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, private_key, OpenSSLAsymmetricKey, 0, "A local DH private key, corresponding to the public key to be shared with the remote party.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_pkey_derive, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, public_key)
	ZEND_ARG_INFO(0, private_key)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, key_length, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_random_pseudo_bytes, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, length, IS_LONG, 0, "The length of the desired string of bytes. Must be a positive integer less than or equal to 2147483647. PHP will try to cast this parameter to a non-null integer to use it.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, strong_result, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_spki_new, 0, 2, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, private_key, OpenSSLAsymmetricKey, 0)
	ZEND_ARG_TYPE_INFO(0, challenge, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, digest_algo, IS_LONG, 0, "OPENSSL_ALGO_MD5")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_spki_verify, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, spki, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_openssl_spki_export, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, spki, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_openssl_spki_export_challenge arginfo_openssl_spki_export

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_get_cert_locations, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#if defined(HAVE_OPENSSL_ARGON2)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_password_hash, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_ARRAY, 0, "[]")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_openssl_password_verify, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, algo, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, hash, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_FUNCTION(openssl_x509_export_to_file);
ZEND_FUNCTION(openssl_x509_export);
ZEND_FUNCTION(openssl_x509_fingerprint);
ZEND_FUNCTION(openssl_x509_check_private_key);
ZEND_FUNCTION(openssl_x509_verify);
ZEND_FUNCTION(openssl_x509_parse);
ZEND_FUNCTION(openssl_x509_checkpurpose);
ZEND_FUNCTION(openssl_x509_read);
ZEND_FUNCTION(openssl_x509_free);
ZEND_FUNCTION(openssl_pkcs12_export_to_file);
ZEND_FUNCTION(openssl_pkcs12_export);
ZEND_FUNCTION(openssl_pkcs12_read);
ZEND_FUNCTION(openssl_csr_export_to_file);
ZEND_FUNCTION(openssl_csr_export);
ZEND_FUNCTION(openssl_csr_sign);
ZEND_FUNCTION(openssl_csr_new);
ZEND_FUNCTION(openssl_csr_get_subject);
ZEND_FUNCTION(openssl_csr_get_public_key);
ZEND_FUNCTION(openssl_pkey_new);
ZEND_FUNCTION(openssl_pkey_export_to_file);
ZEND_FUNCTION(openssl_pkey_export);
ZEND_FUNCTION(openssl_pkey_get_public);
ZEND_FUNCTION(openssl_pkey_free);
ZEND_FUNCTION(openssl_pkey_get_private);
ZEND_FUNCTION(openssl_pkey_get_details);
ZEND_FUNCTION(openssl_pbkdf2);
ZEND_FUNCTION(openssl_pkcs7_verify);
ZEND_FUNCTION(openssl_pkcs7_encrypt);
ZEND_FUNCTION(openssl_pkcs7_sign);
ZEND_FUNCTION(openssl_pkcs7_decrypt);
ZEND_FUNCTION(openssl_pkcs7_read);
ZEND_FUNCTION(openssl_cms_verify);
ZEND_FUNCTION(openssl_cms_encrypt);
ZEND_FUNCTION(openssl_cms_sign);
ZEND_FUNCTION(openssl_cms_decrypt);
ZEND_FUNCTION(openssl_cms_read);
ZEND_FUNCTION(openssl_private_encrypt);
ZEND_FUNCTION(openssl_private_decrypt);
ZEND_FUNCTION(openssl_public_encrypt);
ZEND_FUNCTION(openssl_public_decrypt);
ZEND_FUNCTION(openssl_error_string);
ZEND_FUNCTION(openssl_sign);
ZEND_FUNCTION(openssl_verify);
ZEND_FUNCTION(openssl_seal);
ZEND_FUNCTION(openssl_open);
ZEND_FUNCTION(openssl_get_md_methods);
ZEND_FUNCTION(openssl_get_cipher_methods);
#if defined(HAVE_EVP_PKEY_EC)
ZEND_FUNCTION(openssl_get_curve_names);
#endif
ZEND_FUNCTION(openssl_digest);
ZEND_FUNCTION(openssl_encrypt);
ZEND_FUNCTION(openssl_decrypt);
ZEND_FUNCTION(openssl_cipher_iv_length);
ZEND_FUNCTION(openssl_cipher_key_length);
ZEND_FUNCTION(openssl_dh_compute_key);
ZEND_FUNCTION(openssl_pkey_derive);
ZEND_FUNCTION(openssl_random_pseudo_bytes);
ZEND_FUNCTION(openssl_spki_new);
ZEND_FUNCTION(openssl_spki_verify);
ZEND_FUNCTION(openssl_spki_export);
ZEND_FUNCTION(openssl_spki_export_challenge);
ZEND_FUNCTION(openssl_get_cert_locations);
#if defined(HAVE_OPENSSL_ARGON2)
ZEND_FUNCTION(openssl_password_hash);
ZEND_FUNCTION(openssl_password_verify);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("openssl_x509_export_to_file", zif_openssl_x509_export_to_file, arginfo_openssl_x509_export_to_file, 0, NULL, "/**\n * Exports a certificate to file\n * @param OpenSSLCertificate|string $certificate See Key/Certificate parameters for a list of valid values.\n * @param string $output_filename Path to the output file.\n * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_x509_export", zif_openssl_x509_export, arginfo_openssl_x509_export, 0, NULL, "/**\n * Exports a certificate as a string\n * @param OpenSSLCertificate|string $certificate See Key/Certificate parameters for a list of valid values.\n * @param string $output On success, this will hold the PEM.\n * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_x509_fingerprint", zif_openssl_x509_fingerprint, arginfo_openssl_x509_fingerprint, 0, NULL, "/**\n * Calculates the fingerprint, or digest, of a given X.509 certificate\n * @param OpenSSLCertificate|string $certificate See Key/Certificate parameters for a list of valid values.\n * @param string $digest_algo The digest method or hash algorithm to use, e.g. \"sha256\", one of openssl_get_md_methods.\n * @param bool $binary When set to true, outputs raw binary data. false outputs lowercase hexits.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_x509_check_private_key", zif_openssl_x509_check_private_key, arginfo_openssl_x509_check_private_key, 0, NULL, "/**\n * Checks if a private key corresponds to a certificate\n * @param OpenSSLCertificate|string $certificate The certificate.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key The private key.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_x509_verify", zif_openssl_x509_verify, arginfo_openssl_x509_verify, 0, NULL, "/**\n * Verifies digital signature of x509 certificate against a public key\n * @param OpenSSLCertificate|string $certificate See Key/Certificate parameters for a list of valid values.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key OpenSSLAsymmetricKey - a key, returned by openssl_get_publickey\n * @return int\n */")
	ZEND_RAW_FENTRY("openssl_x509_parse", zif_openssl_x509_parse, arginfo_openssl_x509_parse, 0, NULL, "/**\n * Parse an X509 certificate and return the information as an array\n * @param OpenSSLCertificate|string $certificate X509 certificate. See Key/Certificate parameters for a list of valid values.\n * @param bool $short_names short_names controls how the data is indexed in the array - if short_names is true (the default) then fields will be indexed with the short name form, otherwise, the long name form will be used - e.g.: CN is the shortname form of commonName.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("openssl_x509_checkpurpose", zif_openssl_x509_checkpurpose, arginfo_openssl_x509_checkpurpose, 0, NULL, "/**\n * Verifies if a certificate can be used for a particular purpose\n * @param OpenSSLCertificate|string $certificate The examined certificate.\n * @param int $purpose openssl_x509_checkpurpose purposes Constant Description X509_PURPOSE_SSL_CLIENT Can the certificate be used for the client side of an SSL connection? X509_PURPOSE_SSL_SERVER Can the certificate be used for the server side of an SSL connection? X509_PURPOSE_NS_SSL_SERVER Can the cert be used for Netscape SSL server? X509_PURPOSE_SMIME_SIGN Can the cert be used to sign S/MIME email? X509_PURPOSE_SMIME_ENCRYPT Can the cert be used to encrypt S/MIME email? X509_PURPOSE_CRL_SIGN Can the cert be used to sign a certificate revocation list (CRL)? X509_PURPOSE_ANY Can the cert be used for Any/All purposes? These options are not bitfields - you may specify one only!\n * @param array $ca_info ca_info should be an array of trusted CA files/dirs as described in Certificate Verification.\n * @param string|null $untrusted_certificates_file If specified, this should be the name of a PEM encoded file holding certificates that can be used to help verify the certificate, although no trust is placed in the certificates that come from that file.\n * @return bool|int\n */")
	ZEND_RAW_FENTRY("openssl_x509_read", zif_openssl_x509_read, arginfo_openssl_x509_read, 0, NULL, "/**\n * Parse an X.509 certificate and return an object for\n * it\n * @param OpenSSLCertificate|string $certificate X509 certificate. See Key/Certificate parameters for a list of valid values.\n * @return OpenSSLCertificate|false\n */")
	ZEND_RAW_FENTRY("openssl_x509_free", zif_openssl_x509_free, arginfo_openssl_x509_free, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("openssl_pkcs12_export_to_file", zif_openssl_pkcs12_export_to_file, arginfo_openssl_pkcs12_export_to_file, 0, NULL, "/**\n * Exports a PKCS#12 Compatible Certificate Store File\n * @param OpenSSLCertificate|string $certificate See Key/Certificate parameters for a list of valid values.\n * @param string $output_filename Path to the output file.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key Private key component of PKCS#12 file. See Public/Private Key parameters for a list of valid values.\n * @param string $passphrase Encryption password for unlocking the PKCS#12 file.\n * @param array $options Optional array, other keys will be ignored. Key Description \"extracerts\" array of extra certificates or a single certificate to be included in the PKCS#12 file. \"friendly_name\" string to be used for the supplied certificate and key\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkcs12_export", zif_openssl_pkcs12_export, arginfo_openssl_pkcs12_export, 0, NULL, "/**\n * Exports a PKCS#12 Compatible Certificate Store File to variable\n * @param OpenSSLCertificate|string $certificate See Key/Certificate parameters for a list of valid values.\n * @param string $output On success, this will hold the PKCS#12.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key Private key component of PKCS#12 file. See Public/Private Key parameters for a list of valid values.\n * @param string $passphrase Encryption password for unlocking the PKCS#12 file.\n * @param array $options Optional array, other keys will be ignored. Key Description \"extracerts\" array of extra certificates or a single certificate to be included in the PKCS#12 file. \"friendly_name\" string to be used for the supplied certificate and key\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkcs12_read", zif_openssl_pkcs12_read, arginfo_openssl_pkcs12_read, 0, NULL, "/**\n * Parse a PKCS#12 Certificate Store into an array\n * @param string $pkcs12 The certificate store contents, not its file name.\n * @param array $certificates On success, this will hold the Certificate Store Data.\n * @param string $passphrase Encryption password for unlocking the PKCS#12 file.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_csr_export_to_file", zif_openssl_csr_export_to_file, arginfo_openssl_csr_export_to_file, 0, NULL, "/**\n * Exports a CSR to a file\n * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.\n * @param string $output_filename Path to the output file.\n * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_csr_export", zif_openssl_csr_export, arginfo_openssl_csr_export, 0, NULL, "/**\n * Exports a CSR as a string\n * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.\n * @param string $output on success, this string will contain the PEM encoded CSR\n * @param bool $no_text The optional parameter notext affects the verbosity of the output; if it is false, then additional human-readable information is included in the output. The default value of notext is true.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_csr_sign", zif_openssl_csr_sign, arginfo_openssl_csr_sign, 0, NULL, "/**\n * Sign a CSR with another certificate (or itself) and generate a certificate\n * @param OpenSSLCertificateSigningRequest|string $csr A CSR previously generated by openssl_csr_new. It can also be the path to a PEM encoded CSR when specified as file://path/to/csr or an exported string generated by openssl_csr_export.\n * @param OpenSSLCertificate|string|null $ca_certificate The generated certificate will be signed by ca_certificate. If ca_certificate is null, the generated certificate will be a self-signed certificate.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key is the private key that corresponds to ca_certificate.\n * @param int $days days specifies the length of time for which the generated certificate will be valid, in days.\n * @param array|null $options You can finetune the CSR signing by options. See openssl_csr_new for more information about options.\n * @param int $serial An optional the serial number of issued certificate. If not specified it will default to 0.\n * @param string|null $serial_hex An optional hexadecimal string representing the serial number of the issued certificate. If set, it takes precedence over the serial parameter value. If not specified or set to null, the serial parameter value is used instead.\n * @return OpenSSLCertificate|false\n */")
	ZEND_RAW_FENTRY("openssl_csr_new", zif_openssl_csr_new, arginfo_openssl_csr_new, 0, NULL, "/**\n * Generates a CSR\n * @param array $distinguished_names The Distinguished Name or subject fields to be included in the certificate. The distinguished_names is an associative array where the keys represent the attribute names of Distinguished Names and the values can either be strings (for single value) or arrays (if multiple values need to be set).\n * @param OpenSSLAsymmetricKey|null $private_key private_key should be set to a private key that was previously generated by openssl_pkey_new (or otherwise obtained from the other openssl_pkey family of functions), or null variable. If its value is null variable, a new private key is generated based on the supplied options and assigned to supplied variable. The corresponding public portion of the key will be used to sign the CSR.\n * @param array|null $options By default, the information in your system openssl.conf is used to initialize the request; you can specify a configuration file section by setting the config_section_section key in options.  You can also specify an alternative OpenSSL configuration file by setting the value of the config key to the path of the file you want to use. The following keys, if present in options behave as their equivalents in the openssl.conf, as listed in the table below. Configuration overrides options key type openssl.conf equivalent description digest_alg string default_md Digest method or signature hash, usually one of openssl_get_md_methods x509_extensions string x509_extensions Selects which extensions should be used when creating an x509 certificate req_extensions string req_extensions Selects which extensions should be used when creating a CSR private_key_bits int default_bits Specifies how many bits should be used to generate a private key private_key_type int none Specifies the type of private key to create.  This can be one of OPENSSL_KEYTYPE_DSA, OPENSSL_KEYTYPE_DH, OPENSSL_KEYTYPE_RSA or OPENSSL_KEYTYPE_EC. The default value is OPENSSL_KEYTYPE_RSA. encrypt_key bool encrypt_key Should an exported key (with passphrase) be encrypted? encrypt_key_cipher int none One of cipher constants. curve_name string none One of openssl_get_curve_names. config string N/A Path to your own alternative openssl.conf file.\n * @param array|null $extra_attributes extra_attributes is used to specify additional attributes for the CSR. It is an associative arrays where the keys are converted to OIDs and applied as CSR attributes.\n * @return OpenSSLCertificateSigningRequest|bool\n */")
	ZEND_RAW_FENTRY("openssl_csr_get_subject", zif_openssl_csr_get_subject, arginfo_openssl_csr_get_subject, 0, NULL, "/**\n * Returns the subject of a CSR\n * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.\n * @param bool $short_names short_names controls how the data is indexed in the array - if short_names is true (the default) then fields will be indexed with the short name form, otherwise, the long name form will be used - e.g.: CN is the shortname form of commonName.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("openssl_csr_get_public_key", zif_openssl_csr_get_public_key, arginfo_openssl_csr_get_public_key, 0, NULL, "/**\n * Returns the public key of a CSR\n * @param OpenSSLCertificateSigningRequest|string $csr See CSR parameters for a list of valid values.\n * @param bool $short_names This parameter is ignored\n * @return OpenSSLAsymmetricKey|false\n */")
	ZEND_RAW_FENTRY("openssl_pkey_new", zif_openssl_pkey_new, arginfo_openssl_pkey_new, 0, NULL, "/**\n * Generates a new private key\n * @param array|null $options It is possible to fine-tune the key generation (e.g. specifying the number of bits or parameters) using the options parameter. These options can either be algorithm-specific parameters used for key generation, or generic options used also in CSRgeneration if not specified. See openssl_csr_new for more information about how to use options for a CSR. Among those options only private_key_bits, private_key_type, curve_name, and config are used for key generation. Algorithm-specific options are used if the associative array includes one of the specific keys. \"rsa\" key for setting RSA parameters. options type format required description \"n\" string binary number yes modulus \"e\" string binary number no public exponent \"d\" string binary number yes private exponent \"p\" string binary number no prime 1 \"q\" string binary number no prime 2 \"dmp1\" string binary number no exponent1, d mod (p-1) \"dmq1\" string binary number no exponent2, d mod (q-1) \"iqmp\" string binary number no coefficient, (inverse of q) mod p \"dsa\" key for setting DSA parameters. options type format required description \"p\" string binary number no prime number (public) \"q\" string binary number no 160-bit subprime, q | p-1 (public) \"g\" string binary number no generator of subgroup (public) \"priv_key\" string PEM key no private key x \"pub_key\" string PEM key no public key y = g^x \"dh\" key for DH (Diffie–Hellman key exchange) parameters. Options Type Format Required Description \"p\" string binary number no prime number (shared) \"g\" string binary number no generator of Z_p (shared) \"priv_key\" string PEM key no private DH value x \"pub_key\" string PEM key no public DH value g^x \"ec\" key for Elliptic curve parameters Options Type Format Required Description \"curve_name\" string name no name of curve, see openssl_get_curve_names \"p\" string binary number no prime of the field for curve over Fp \"a\" string binary number no coofecient a of the curve for Fp: y^2 mod p = x^3 + ax + b mod p \"b\" string binary number no coofecient b of the curve for Fp: y^2 mod p = x^3 + ax + b mod p \"seed\" string binary number no optional random number seed used to generate coefficient b \"generator\" string binary encoded point no curve generator point \"g_x\" string binary number no curver generator point x coordinat \"g_y\" string binary number no curver generator point y coordinat \"cofactor\" string binary number no curve cofactor \"order\" string binary number no curve order \"x\" string binary number no x coordinate (public) \"y\" string binary number no y coordinate (public) \"d\" string binary number no private key \"x25519\", \"x448\", \"ed25519\", \"ed448\" keys for Curve25519 and Curve448 parameters. Options Type Format Required Description \"priv_key\" string PEM key no private key \"pub_key\" string PEM key no public key\n * @return OpenSSLAsymmetricKey|false\n */")
	ZEND_RAW_FENTRY("openssl_pkey_export_to_file", zif_openssl_pkey_export_to_file, arginfo_openssl_pkey_export_to_file, 0, NULL, "/**\n * Gets an exportable representation of a key into a file\n * @param string $output_filename Path to the output file.\n * @param string|null $passphrase The key can be optionally protected by a passphrase.\n * @param array|null $options options can be used to fine-tune the export process by specifying and/or overriding options for the openssl configuration file. See openssl_csr_new for more information about options.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkey_export", zif_openssl_pkey_export, arginfo_openssl_pkey_export, 0, NULL, "/**\n * Gets an exportable representation of a key into a string\n * @param string|null $passphrase The key is optionally protected by passphrase.\n * @param array|null $options options can be used to fine-tune the export process by specifying and/or overriding options for the openssl configuration file.  See openssl_csr_new for more information about options.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkey_get_public", zif_openssl_pkey_get_public, arginfo_openssl_pkey_get_public, 0, NULL, "/**\n * Extract public key from certificate and prepare it for use\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key public_key can be one of the following: an OpenSSLAsymmetricKey instance a string having the format file://path/to/file.pem. The named file must contain a PEM encoded certificate/public key (it may contain both). A PEM formatted public key.\n * @return OpenSSLAsymmetricKey|false\n */")
	ZEND_RAW_FENTRY("openssl_get_publickey", zif_openssl_pkey_get_public, arginfo_openssl_get_publickey, 0, NULL, "/**\n * Alias openssl_pkey_get_public\n */")
	ZEND_RAW_FENTRY("openssl_pkey_free", zif_openssl_pkey_free, arginfo_openssl_pkey_free, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("openssl_free_key", zif_openssl_pkey_free, arginfo_openssl_free_key, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("openssl_pkey_get_private", zif_openssl_pkey_get_private, arginfo_openssl_pkey_get_private, 0, NULL, "/**\n * Get a private key\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key can be one of the following: a string having the format file://path/to/file.pem. The named file must contain a PEM encoded certificate/private key (it may contain both). A PEM formatted private key.\n * @param string|null $passphrase The optional parameter passphrase must be used if the specified key is encrypted (protected by a passphrase).\n * @return OpenSSLAsymmetricKey|false\n */")
	ZEND_RAW_FENTRY("openssl_get_privatekey", zif_openssl_pkey_get_private, arginfo_openssl_get_privatekey, 0, NULL, "/**\n * Alias openssl_pkey_get_private\n */")
	ZEND_RAW_FENTRY("openssl_pkey_get_details", zif_openssl_pkey_get_details, arginfo_openssl_pkey_get_details, 0, NULL, "/**\n * Returns an array with the key details\n * @param OpenSSLAsymmetricKey $key Resource holding the key.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("openssl_pbkdf2", zif_openssl_pbkdf2, arginfo_openssl_pbkdf2, 0, NULL, "/**\n * Generates a PKCS5 v2 PBKDF2 string\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_pkcs7_verify", zif_openssl_pkcs7_verify, arginfo_openssl_pkcs7_verify, 0, NULL, "/**\n * Verifies the signature of an S/MIME signed message\n * @param string $input_filename Path to the message.\n * @param int $flags flags can be used to affect how the signature is verified - see PKCS7 constants for more information.\n * @param string|null $signers_certificates_filename If the signers_certificates_filename is specified, it should be a string holding the name of a file into which the certificates of the persons that signed the messages will be stored in PEM format.\n * @param array $ca_info If the ca_info is specified, it should hold information about the trusted CA certificates to use in the verification process - see certificate verification for more information about this parameter.\n * @param string|null $untrusted_certificates_filename If the untrusted_certificates_filename is specified, it is the filename of a file containing a bunch of certificates to use as untrusted CAs.\n * @param string|null $content You can specify a filename with content that will be filled with the verified data, but with the signature information stripped.\n * @return bool|int\n */")
	ZEND_RAW_FENTRY("openssl_pkcs7_encrypt", zif_openssl_pkcs7_encrypt, arginfo_openssl_pkcs7_encrypt, 0, NULL, "/**\n * Encrypt an S/MIME message\n * @param OpenSSLCertificate|array|string $certificate Either a lone X.509 certificate, or an array of X.509 certificates.\n * @param array|null $headers headers is an array of headers that will be prepended to the data after it has been encrypted.\n * @param int $flags flags can be used to specify options that affect the encoding process - see PKCS7 constants.\n * @param int $cipher_algo One of cipher constants.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkcs7_sign", zif_openssl_pkcs7_sign, arginfo_openssl_pkcs7_sign, 0, NULL, "/**\n * Sign an S/MIME message\n * @param string $input_filename The input file you are intending to digitally sign.\n * @param string $output_filename The file which the digital signature will be written to.\n * @param OpenSSLCertificate|string $certificate The X.509 certificate used to digitally sign input_filename. See Key/Certificate parameters for a list of valid values.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key is the private key corresponding to certificate. See Public/Private Key parameters for a list of valid values.\n * @param array|null $headers headers is an array of headers that will be prepended to the data after it has been signed (see openssl_pkcs7_encrypt for more information about the format of this parameter).\n * @param int $flags flags can be used to alter the output - see PKCS7 constants.\n * @param string|null $untrusted_certificates_filename untrusted_certificates_filename specifies the name of a file containing a bunch of extra certificates to include in the signature which can for example be used to help the recipient to verify the certificate that you used.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkcs7_decrypt", zif_openssl_pkcs7_decrypt, arginfo_openssl_pkcs7_decrypt, 0, NULL, "/**\n * Decrypts an S/MIME encrypted message\n * @param string $output_filename The decrypted message is written to the file specified by output_filename.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_pkcs7_read", zif_openssl_pkcs7_read, arginfo_openssl_pkcs7_read, 0, NULL, "/**\n * Export the PKCS7 file to an array of PEM certificates\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_cms_verify", zif_openssl_cms_verify, arginfo_openssl_cms_verify, 0, NULL, "/**\n * Verify a CMS signature\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_cms_encrypt", zif_openssl_cms_encrypt, arginfo_openssl_cms_encrypt, 0, NULL, "/**\n * Encrypt a CMS message\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_cms_sign", zif_openssl_cms_sign, arginfo_openssl_cms_sign, 0, NULL, "/**\n * Sign a file\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_cms_decrypt", zif_openssl_cms_decrypt, arginfo_openssl_cms_decrypt, 0, NULL, "/**\n * Decrypt a CMS message\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_cms_read", zif_openssl_cms_read, arginfo_openssl_cms_read, 0, NULL, "/**\n * Export the CMS file to an array of PEM certificates\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_private_encrypt", zif_openssl_private_encrypt, arginfo_openssl_private_encrypt, 0, NULL, "/**\n * Encrypts data with private key\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key must be the private key that corresponds to the public key that will be used to decrypt the data.\n * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_NO_PADDING.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_private_decrypt", zif_openssl_private_decrypt, arginfo_openssl_private_decrypt, 0, NULL, "/**\n * Decrypts data with private key\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key private_key must be the private key that corresponds to the public key that was used to encrypt the data.\n * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_SSLV23_PADDING, OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_NO_PADDING.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_public_encrypt", zif_openssl_public_encrypt, arginfo_openssl_public_encrypt, 0, NULL, "/**\n * Encrypts data with public key\n * @param string $encrypted_data This will hold the result of the encryption.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key public_key must be the public key that corresponds to the private key that will be used to decrypt the data.\n * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_SSLV23_PADDING, OPENSSL_PKCS1_OAEP_PADDING, OPENSSL_NO_PADDING.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_public_decrypt", zif_openssl_public_decrypt, arginfo_openssl_public_decrypt, 0, NULL, "/**\n * Decrypts data with public key\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key public_key must be the public key that corresponds to the private key that was used to encrypt the data.\n * @param int $padding padding can be one of OPENSSL_PKCS1_PADDING, OPENSSL_NO_PADDING.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_error_string", zif_openssl_error_string, arginfo_openssl_error_string, 0, NULL, "/**\n * Return openSSL error message\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_sign", zif_openssl_sign, arginfo_openssl_sign, 0, NULL, "/**\n * Generate signature\n * @param string $data The string of data you wish to sign\n * @param string $signature If the call was successful the signature is returned in signature.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key OpenSSLAsymmetricKey - a key, returned by openssl_get_privatekey\n * @param string|int $algorithm int - one of these Signature Algorithms.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_verify", zif_openssl_verify, arginfo_openssl_verify, 0, NULL, "/**\n * Verify signature\n * @param string $data The string of data used to generate the signature previously\n * @param string $signature A raw binary string, generated by openssl_sign or similar means\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $public_key OpenSSLAsymmetricKey - a key, returned by openssl_get_publickey\n * @param string|int $algorithm int - one of these Signature Algorithms.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("openssl_seal", zif_openssl_seal, arginfo_openssl_seal, 0, NULL, "/**\n * Seal (encrypt) data\n * @param string $data The data to seal.\n * @param string $sealed_data The sealed data.\n * @param array $encrypted_keys Array of encrypted keys.\n * @param array $public_key Array of OpenSSLAsymmetricKey instances containing public keys.\n * @param string $cipher_algo The cipher method. The default value for PHP versions prior to 8.0 is (\'RC4\') which is considered insecure. It is strongly recommended to explicitly specify a secure cipher method.\n * @param string $iv The initialization vector for decryption of data. It is required if the cipher method requires IV. This can be found out by calling openssl_cipher_iv_length with cipher_algo.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("openssl_open", zif_openssl_open, arginfo_openssl_open, 0, NULL, "/**\n * Open sealed data\n * @param string $data The sealed data.\n * @param string $output If the call is successful the opened data is returned in this parameter.\n * @param string $encrypted_key The encrypted symmetric key that can be decrypted using private_key.\n * @param OpenSSLAsymmetricKey|OpenSSLCertificate|array|string $private_key The private key used for decrypting encrypted_key.\n * @param string $cipher_algo The cipher method used for decryption of data. The default value for PHP versions prior to 8.0 is (\'RC4\') which is considered insecure. It is strongly recommended to explicitly specify a secure cipher method.\n * @param string|null $iv The initialization vector used for decryption of data. It is required if the cipher method requires IV. This can be found out by calling openssl_cipher_iv_length with cipher_algo.\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_get_md_methods", zif_openssl_get_md_methods, arginfo_openssl_get_md_methods, 0, NULL, "/**\n * Gets available digest methods\n * @param bool $aliases Set to true if digest aliases should be included within the returned array.\n * @return array\n */")
	ZEND_RAW_FENTRY("openssl_get_cipher_methods", zif_openssl_get_cipher_methods, arginfo_openssl_get_cipher_methods, 0, NULL, "/**\n * Gets available cipher methods\n * @param bool $aliases Set to true if cipher aliases should be included within the returned array.\n * @return array\n */")
#if defined(HAVE_EVP_PKEY_EC)
	ZEND_RAW_FENTRY("openssl_get_curve_names", zif_openssl_get_curve_names, arginfo_openssl_get_curve_names, 0, NULL, "/**\n * Gets list of available curve names for ECC\n * @return array|false\n */")
#endif
	ZEND_RAW_FENTRY("openssl_digest", zif_openssl_digest, arginfo_openssl_digest, 0, NULL, "/**\n * Computes a digest\n * @param string $data The data.\n * @param string $digest_algo The digest method to use, e.g. \"sha256\", see openssl_get_md_methods for a list of available digest methods.\n * @param bool $binary Setting to true will return as raw output data, otherwise the return value is binhex encoded.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_encrypt", zif_openssl_encrypt, arginfo_openssl_encrypt, 0, NULL, "/**\n * Encrypts data\n * @param string $data The plaintext message data to be encrypted.\n * @param string $cipher_algo The cipher method. For a list of available cipher methods, use openssl_get_cipher_methods.\n * @param string $passphrase The passphrase. If the passphrase is shorter than expected, it is silently padded with NUL characters; if the passphrase is longer than expected, it is silently truncated.\n * @param int $options options is a bitwise disjunction of the flags OPENSSL_RAW_DATA, and OPENSSL_ZERO_PADDING or OPENSSL_DONT_ZERO_PAD_KEY.\n * @param string $iv A non-null Initialization Vector. If the IV is shorter than expected, it is padded with NUL characters and warning is emitted; if the passphrase is longer than expected, it is truncated and warning is emitted.\n * @param string $tag The authentication tag passed by reference when using AEAD cipher mode (GCM or CCM).\n * @param string $aad Additional authenticated data.\n * @param int $tag_length The length of the authentication tag. Its value can be between 4 and 16 for GCM mode.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_decrypt", zif_openssl_decrypt, arginfo_openssl_decrypt, 0, NULL, "/**\n * Decrypts data\n * @param string $data The encrypted message to be decrypted.\n * @param string $cipher_algo The cipher method. For a list of available cipher methods, use openssl_get_cipher_methods.\n * @param string $passphrase The passphrase. If the passphrase is shorter than expected, it is silently padded with NUL characters; if the passphrase is longer than expected, it is silently truncated.\n * @param int $options options can be one of OPENSSL_RAW_DATA, OPENSSL_ZERO_PADDING or OPENSSL_DONT_ZERO_PAD_KEY.\n * @param string $iv A non-null Initialization Vector. If the IV is shorter than expected, it is padded with NUL characters and warning is emitted; if the passphrase is longer than expected, it is truncated and warning is emitted.\n * @param string|null $tag The authentication tag in AEAD cipher mode. If it is incorrect, the authentication fails and the function returns false.\n * @param string $aad Additional authenticated data.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_cipher_iv_length", zif_openssl_cipher_iv_length, arginfo_openssl_cipher_iv_length, 0, NULL, "/**\n * Gets the cipher iv length\n * @return int|false\n */")
	ZEND_RAW_FENTRY("openssl_cipher_key_length", zif_openssl_cipher_key_length, arginfo_openssl_cipher_key_length, 0, NULL, "/**\n * Gets the cipher key length\n * @return int|false\n */")
	ZEND_RAW_FENTRY("openssl_dh_compute_key", zif_openssl_dh_compute_key, arginfo_openssl_dh_compute_key, 0, NULL, "/**\n * Computes shared secret for public value of remote DH public key and local DH key\n * @param string $public_key DH Public key of the remote party.\n * @param OpenSSLAsymmetricKey $private_key A local DH private key, corresponding to the public key to be shared with the remote party.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_pkey_derive", zif_openssl_pkey_derive, arginfo_openssl_pkey_derive, 0, NULL, "/**\n * Computes shared secret for public value of remote and local DH or ECDH key\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_random_pseudo_bytes", zif_openssl_random_pseudo_bytes, arginfo_openssl_random_pseudo_bytes, 0, NULL, "/**\n * Generate a pseudo-random string of bytes\n * @param int $length The length of the desired string of bytes. Must be a positive integer less than or equal to 2147483647. PHP will try to cast this parameter to a non-null integer to use it.\n * @param bool $strong_result If passed into the function, this will hold a bool value that determines if the algorithm used was \"cryptographically strong\", e.g., safe for usage with GPG, passwords, etc. true if it did, otherwise false\n * @return string\n */")
	ZEND_RAW_FENTRY("openssl_spki_new", zif_openssl_spki_new, arginfo_openssl_spki_new, 0, NULL, "/**\n * Generate a new signed public key and challenge\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_spki_verify", zif_openssl_spki_verify, arginfo_openssl_spki_verify, 0, NULL, "/**\n * Verifies a signed public key and challenge\n * @return bool\n */")
	ZEND_RAW_FENTRY("openssl_spki_export", zif_openssl_spki_export, arginfo_openssl_spki_export, 0, NULL, "/**\n * Exports a valid PEM formatted public key signed public key and challenge\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_spki_export_challenge", zif_openssl_spki_export_challenge, arginfo_openssl_spki_export_challenge, 0, NULL, "/**\n * Exports the challenge associated with a signed public key and challenge\n * @return string|false\n */")
	ZEND_RAW_FENTRY("openssl_get_cert_locations", zif_openssl_get_cert_locations, arginfo_openssl_get_cert_locations, 0, NULL, "/**\n * Retrieve the available certificate locations\n * @return array\n */")
#if defined(HAVE_OPENSSL_ARGON2)
	ZEND_FE(openssl_password_hash, arginfo_openssl_password_hash)
	ZEND_FE(openssl_password_verify, arginfo_openssl_password_verify)
#endif
	ZEND_FE_END
};

static void register_openssl_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("OPENSSL_VERSION_TEXT", OPENSSL_VERSION_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_VERSION_NUMBER", OPENSSL_VERSION_NUMBER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_SSL_CLIENT", X509_PURPOSE_SSL_CLIENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_SSL_SERVER", X509_PURPOSE_SSL_SERVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_NS_SSL_SERVER", X509_PURPOSE_NS_SSL_SERVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_SMIME_SIGN", X509_PURPOSE_SMIME_SIGN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_SMIME_ENCRYPT", X509_PURPOSE_SMIME_ENCRYPT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_CRL_SIGN", X509_PURPOSE_CRL_SIGN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_ANY", X509_PURPOSE_ANY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_OCSP_HELPER", X509_PURPOSE_OCSP_HELPER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("X509_PURPOSE_TIMESTAMP_SIGN", X509_PURPOSE_TIMESTAMP_SIGN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_SHA1", OPENSSL_ALGO_SHA1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_MD5", OPENSSL_ALGO_MD5, CONST_PERSISTENT);
#if !defined(OPENSSL_NO_MD4)
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_MD4", OPENSSL_ALGO_MD4, CONST_PERSISTENT);
#endif
#if !defined(OPENSSL_NO_MD2)
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_MD2", OPENSSL_ALGO_MD2, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_SHA224", OPENSSL_ALGO_SHA224, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_SHA256", OPENSSL_ALGO_SHA256, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_SHA384", OPENSSL_ALGO_SHA384, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_SHA512", OPENSSL_ALGO_SHA512, CONST_PERSISTENT);
#if !defined(OPENSSL_NO_RMD160)
	REGISTER_LONG_CONSTANT("OPENSSL_ALGO_RMD160", OPENSSL_ALGO_RMD160, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("PKCS7_DETACHED", PKCS7_DETACHED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_TEXT", PKCS7_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOINTERN", PKCS7_NOINTERN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOVERIFY", PKCS7_NOVERIFY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOCHAIN", PKCS7_NOCHAIN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOCERTS", PKCS7_NOCERTS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOATTR", PKCS7_NOATTR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_BINARY", PKCS7_BINARY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOSIGS", PKCS7_NOSIGS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOOLDMIMETYPE", PKCS7_NOOLDMIMETYPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOSMIMECAP", PKCS7_NOSMIMECAP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_CRLFEOL", PKCS7_CRLFEOL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NOCRL", PKCS7_NOCRL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PKCS7_NO_DUAL_CONTENT", PKCS7_NO_DUAL_CONTENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_DETACHED", CMS_DETACHED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_TEXT", CMS_TEXT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_NOINTERN", CMS_NOINTERN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_NOVERIFY", CMS_NOVERIFY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_NOCERTS", CMS_NOCERTS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_NOATTR", CMS_NOATTR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_BINARY", CMS_BINARY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_NOSIGS", CMS_NOSIGS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CMS_OLDMIMETYPE", CMS_NOOLDMIMETYPE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_PKCS1_PADDING", RSA_PKCS1_PADDING, CONST_PERSISTENT);
#if defined(RSA_SSLV23_PADDING)
	REGISTER_LONG_CONSTANT("OPENSSL_SSLV23_PADDING", RSA_SSLV23_PADDING, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("OPENSSL_NO_PADDING", RSA_NO_PADDING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_PKCS1_OAEP_PADDING", RSA_PKCS1_OAEP_PADDING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_PKCS1_PSS_PADDING", RSA_PKCS1_PSS_PADDING, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("OPENSSL_DEFAULT_STREAM_CIPHERS", OPENSSL_DEFAULT_STREAM_CIPHERS, CONST_PERSISTENT);
#if !defined(OPENSSL_NO_RC2)
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_RC2_40", PHP_OPENSSL_CIPHER_RC2_40, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_RC2_128", PHP_OPENSSL_CIPHER_RC2_128, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_RC2_64", PHP_OPENSSL_CIPHER_RC2_64, CONST_PERSISTENT);
#endif
#if !defined(OPENSSL_NO_DES)
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_DES", PHP_OPENSSL_CIPHER_DES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_3DES", PHP_OPENSSL_CIPHER_3DES, CONST_PERSISTENT);
#endif
#if !defined(OPENSSL_NO_AES)
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_AES_128_CBC", PHP_OPENSSL_CIPHER_AES_128_CBC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_AES_192_CBC", PHP_OPENSSL_CIPHER_AES_192_CBC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_CIPHER_AES_256_CBC", PHP_OPENSSL_CIPHER_AES_256_CBC, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_RSA", OPENSSL_KEYTYPE_RSA, CONST_PERSISTENT);
#if !defined(OPENSSL_NO_DSA)
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_DSA", OPENSSL_KEYTYPE_DSA, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_DH", OPENSSL_KEYTYPE_DH, CONST_PERSISTENT);
#if defined(HAVE_EVP_PKEY_EC)
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_EC", OPENSSL_KEYTYPE_EC, CONST_PERSISTENT);
#endif
#if PHP_OPENSSL_API_VERSION >= 0x30000
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_X25519", OPENSSL_KEYTYPE_X25519, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_ED25519", OPENSSL_KEYTYPE_ED25519, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_X448", OPENSSL_KEYTYPE_X448, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_KEYTYPE_ED448", OPENSSL_KEYTYPE_ED448, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("OPENSSL_RAW_DATA", OPENSSL_RAW_DATA, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ZERO_PADDING", OPENSSL_ZERO_PADDING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_DONT_ZERO_PAD_KEY", OPENSSL_DONT_ZERO_PAD_KEY, CONST_PERSISTENT);
#if !defined(OPENSSL_NO_TLSEXT)
	REGISTER_LONG_CONSTANT("OPENSSL_TLSEXT_SERVER_NAME", 1, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("OPENSSL_ENCODING_DER", ENCODING_DER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ENCODING_SMIME", ENCODING_SMIME, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("OPENSSL_ENCODING_PEM", ENCODING_PEM, CONST_PERSISTENT);


	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_x509_check_private_key", sizeof("openssl_x509_check_private_key") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_attribute *attribute_Deprecated_func_openssl_x509_free_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_x509_free", sizeof("openssl_x509_free") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_openssl_x509_free_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_0));
	attribute_Deprecated_func_openssl_x509_free_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_openssl_x509_free_0_arg1_str = zend_string_init("as OpenSSLCertificate objects are freed automatically", strlen("as OpenSSLCertificate objects are freed automatically"), 1);
	ZVAL_STR(&attribute_Deprecated_func_openssl_x509_free_0->args[1].value, attribute_Deprecated_func_openssl_x509_free_0_arg1_str);
	attribute_Deprecated_func_openssl_x509_free_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs12_export_to_file", sizeof("openssl_pkcs12_export_to_file") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs12_export_to_file", sizeof("openssl_pkcs12_export_to_file") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs12_export", sizeof("openssl_pkcs12_export") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs12_export", sizeof("openssl_pkcs12_export") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs12_read", sizeof("openssl_pkcs12_read") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_csr_sign", sizeof("openssl_csr_sign") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_csr_new", sizeof("openssl_csr_new") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_export_to_file", sizeof("openssl_pkey_export_to_file") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_export_to_file", sizeof("openssl_pkey_export_to_file") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_export", sizeof("openssl_pkey_export") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_export", sizeof("openssl_pkey_export") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_attribute *attribute_Deprecated_func_openssl_pkey_free_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_free", sizeof("openssl_pkey_free") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_openssl_pkey_free_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_0));
	attribute_Deprecated_func_openssl_pkey_free_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_openssl_pkey_free_0_arg1_str = zend_string_init("as OpenSSLAsymmetricKey objects are freed automatically", strlen("as OpenSSLAsymmetricKey objects are freed automatically"), 1);
	ZVAL_STR(&attribute_Deprecated_func_openssl_pkey_free_0->args[1].value, attribute_Deprecated_func_openssl_pkey_free_0_arg1_str);
	attribute_Deprecated_func_openssl_pkey_free_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_attribute *attribute_Deprecated_func_openssl_free_key_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_free_key", sizeof("openssl_free_key") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_openssl_free_key_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_0));
	attribute_Deprecated_func_openssl_free_key_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	ZVAL_STR_COPY(&attribute_Deprecated_func_openssl_free_key_0->args[1].value, attribute_Deprecated_func_openssl_pkey_free_0_arg1_str);
	attribute_Deprecated_func_openssl_free_key_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_get_private", sizeof("openssl_pkey_get_private") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_get_private", sizeof("openssl_pkey_get_private") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_get_privatekey", sizeof("openssl_get_privatekey") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_get_privatekey", sizeof("openssl_get_privatekey") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pbkdf2", sizeof("openssl_pbkdf2") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs7_sign", sizeof("openssl_pkcs7_sign") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs7_decrypt", sizeof("openssl_pkcs7_decrypt") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkcs7_decrypt", sizeof("openssl_pkcs7_decrypt") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_cms_sign", sizeof("openssl_cms_sign") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_cms_decrypt", sizeof("openssl_cms_decrypt") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_cms_decrypt", sizeof("openssl_cms_decrypt") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_private_encrypt", sizeof("openssl_private_encrypt") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_private_encrypt", sizeof("openssl_private_encrypt") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_private_decrypt", sizeof("openssl_private_decrypt") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_private_decrypt", sizeof("openssl_private_decrypt") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_public_encrypt", sizeof("openssl_public_encrypt") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_public_decrypt", sizeof("openssl_public_decrypt") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_sign", sizeof("openssl_sign") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_seal", sizeof("openssl_seal") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_open", sizeof("openssl_open") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_open", sizeof("openssl_open") - 1), 3, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_encrypt", sizeof("openssl_encrypt") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_encrypt", sizeof("openssl_encrypt") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_decrypt", sizeof("openssl_decrypt") - 1), 2, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_dh_compute_key", sizeof("openssl_dh_compute_key") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_pkey_derive", sizeof("openssl_pkey_derive") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_spki_new", sizeof("openssl_spki_new") - 1), 0, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#if defined(HAVE_OPENSSL_ARGON2)

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_password_hash", sizeof("openssl_password_hash") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);

	zend_add_parameter_attribute(zend_hash_str_find_ptr(CG(function_table), "openssl_password_verify", sizeof("openssl_password_verify") - 1), 1, ZSTR_KNOWN(ZEND_STR_SENSITIVEPARAMETER), 0);
#endif
}

static zend_class_entry *register_class_OpenSSLCertificate(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "OpenSSLCertificate", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_OpenSSLCertificateSigningRequest(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "OpenSSLCertificateSigningRequest", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_OpenSSLAsymmetricKey(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "OpenSSLAsymmetricKey", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
