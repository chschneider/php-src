/* This is a generated file, edit gettext.stub.php instead.
 * Stub hash: 2fdab8032c19552a35345e723a16fa05262c8840 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_textdomain, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, domain, IS_STRING, 1, "null", "The new message domain, or null to get the current setting without changing it")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gettext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The message being translated.")
ZEND_END_ARG_INFO()

#define arginfo__ arginfo_gettext

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dgettext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_STRING, 0, "The domain")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The message")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dcgettext, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_STRING, 0, "The domain")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, message, IS_STRING, 0, "The message")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, category, IS_LONG, 0, "The category")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bindtextdomain, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_STRING, 0, "The domain.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, directory, IS_STRING, 1, "null", "The directory path. An empty string means the current directory. If null, the currently set directory is returned.")
ZEND_END_ARG_INFO()

#if defined(HAVE_NGETTEXT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ngettext, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, singular, IS_STRING, 0, "The singular message ID.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, plural, IS_STRING, 0, "The plural message ID.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, count, IS_LONG, 0, "The number (e.g. item count) to determine the translation for the respective grammatical number.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_DNGETTEXT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dngettext, 0, 4, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_STRING, 0, "The domain")
	ZEND_ARG_TYPE_INFO(0, singular, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, plural, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_DCNGETTEXT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_dcngettext, 0, 5, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_STRING, 0, "The domain")
	ZEND_ARG_TYPE_INFO(0, singular, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, plural, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_BIND_TEXTDOMAIN_CODESET)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_bind_textdomain_codeset, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, domain, IS_STRING, 0, "The domain.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, codeset, IS_STRING, 1, "null", "The code set. If null, the currently set encoding is returned.")
ZEND_END_ARG_INFO()
#endif

ZEND_FUNCTION(textdomain);
ZEND_FUNCTION(gettext);
ZEND_FUNCTION(dgettext);
ZEND_FUNCTION(dcgettext);
ZEND_FUNCTION(bindtextdomain);
#if defined(HAVE_NGETTEXT)
ZEND_FUNCTION(ngettext);
#endif
#if defined(HAVE_DNGETTEXT)
ZEND_FUNCTION(dngettext);
#endif
#if defined(HAVE_DCNGETTEXT)
ZEND_FUNCTION(dcngettext);
#endif
#if defined(HAVE_BIND_TEXTDOMAIN_CODESET)
ZEND_FUNCTION(bind_textdomain_codeset);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("textdomain", zif_textdomain, arginfo_textdomain, 0, NULL, "/**\n * Sets the default domain\n * @param string|null $domain The new message domain, or null to get the current setting without changing it\n * @return string\n */")
	ZEND_RAW_FENTRY("gettext", zif_gettext, arginfo_gettext, 0, NULL, "/**\n * Lookup a message in the current domain\n * @param string $message The message being translated.\n * @return string\n */")
	ZEND_RAW_FENTRY("_", zif_gettext, arginfo__, 0, NULL, "/**\n * Alias gettext\n */")
	ZEND_RAW_FENTRY("dgettext", zif_dgettext, arginfo_dgettext, 0, NULL, "/**\n * Override the current domain\n * @param string $domain The domain\n * @param string $message The message\n * @return string\n */")
	ZEND_RAW_FENTRY("dcgettext", zif_dcgettext, arginfo_dcgettext, 0, NULL, "/**\n * Overrides the domain for a single lookup\n * @param string $domain The domain\n * @param string $message The message\n * @param int $category The category\n * @return string\n */")
	ZEND_RAW_FENTRY("bindtextdomain", zif_bindtextdomain, arginfo_bindtextdomain, 0, NULL, "/**\n * Sets or gets the path for a domain\n * @param string $domain The domain.\n * @param string|null $directory The directory path. An empty string means the current directory. If null, the currently set directory is returned.\n * @return string|false\n */")
#if defined(HAVE_NGETTEXT)
	ZEND_RAW_FENTRY("ngettext", zif_ngettext, arginfo_ngettext, 0, NULL, "/**\n * Plural version of gettext\n * @param string $singular The singular message ID.\n * @param string $plural The plural message ID.\n * @param int $count The number (e.g. item count) to determine the translation for the respective grammatical number.\n * @return string\n */")
#endif
#if defined(HAVE_DNGETTEXT)
	ZEND_RAW_FENTRY("dngettext", zif_dngettext, arginfo_dngettext, 0, NULL, "/**\n * Plural version of dgettext\n * @param string $domain The domain\n * @return string\n */")
#endif
#if defined(HAVE_DCNGETTEXT)
	ZEND_RAW_FENTRY("dcngettext", zif_dcngettext, arginfo_dcngettext, 0, NULL, "/**\n * Plural version of dcgettext\n * @param string $domain The domain\n * @return string\n */")
#endif
#if defined(HAVE_BIND_TEXTDOMAIN_CODESET)
	ZEND_RAW_FENTRY("bind_textdomain_codeset", zif_bind_textdomain_codeset, arginfo_bind_textdomain_codeset, 0, NULL, "/**\n * Specify or get the character encoding in which the messages from the DOMAIN message catalog will be returned\n * @param string $domain The domain.\n * @param string|null $codeset The code set. If null, the currently set encoding is returned.\n * @return string|false\n */")
#endif
	ZEND_FE_END
};
