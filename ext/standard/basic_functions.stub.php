<?php

/**
 * @generate-class-entries
 * @generate-c-enums
 */

/* array.c */

/**
 * @var int
 * @cvalue PHP_EXTR_OVERWRITE
 */
const EXTR_OVERWRITE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_SKIP
 */
const EXTR_SKIP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_PREFIX_SAME
 */
const EXTR_PREFIX_SAME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_PREFIX_ALL
 */
const EXTR_PREFIX_ALL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_PREFIX_INVALID
 */
const EXTR_PREFIX_INVALID = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_PREFIX_IF_EXISTS
 */
const EXTR_PREFIX_IF_EXISTS = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_IF_EXISTS
 */
const EXTR_IF_EXISTS = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_EXTR_REFS
 */
const EXTR_REFS = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_SORT_ASC
 */
const SORT_ASC = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_SORT_DESC
 */
const SORT_DESC = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_SORT_REGULAR
 */
const SORT_REGULAR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_SORT_NUMERIC
 */
const SORT_NUMERIC = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_SORT_STRING
 */
const SORT_STRING = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_SORT_LOCALE_STRING
 */
const SORT_LOCALE_STRING = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_SORT_NATURAL
 */
const SORT_NATURAL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_SORT_FLAG_CASE
 */
const SORT_FLAG_CASE = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_CASE_LOWER
 */
const CASE_LOWER = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_CASE_UPPER
 */
const CASE_UPPER = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_COUNT_NORMAL
 */
const COUNT_NORMAL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_COUNT_RECURSIVE
 */
const COUNT_RECURSIVE = UNKNOWN;

/**
 * @var int
 * @cvalue ARRAY_FILTER_USE_VALUE
 */
const ARRAY_FILTER_USE_VALUE = UNKNOWN;
/**
 * @var int
 * @cvalue ARRAY_FILTER_USE_BOTH
 */
const ARRAY_FILTER_USE_BOTH = UNKNOWN;
/**
 * @var int
 * @cvalue ARRAY_FILTER_USE_KEY
 */
const ARRAY_FILTER_USE_KEY = UNKNOWN;

/* assert.c */

/**
 * @var int
 * @cvalue PHP_ASSERT_ACTIVE
 */
#[\Deprecated(since: '8.3', message: 'as assert_options() is deprecated')]
const ASSERT_ACTIVE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ASSERT_CALLBACK
 */
#[\Deprecated(since: '8.3', message: 'as assert_options() is deprecated')]
const ASSERT_CALLBACK = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ASSERT_BAIL
 */
#[\Deprecated(since: '8.3', message: 'as assert_options() is deprecated')]
const ASSERT_BAIL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ASSERT_WARNING
 */
#[\Deprecated(since: '8.3', message: 'as assert_options() is deprecated')]
const ASSERT_WARNING = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ASSERT_EXCEPTION
 */
#[\Deprecated(since: '8.3', message: 'as assert_options() is deprecated')]
const ASSERT_EXCEPTION = UNKNOWN;

/* basic_functions.h */

/**
 * @var int
 * @cvalue PHP_CONNECTION_ABORTED
 */
const CONNECTION_ABORTED = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_CONNECTION_NORMAL
 */
const CONNECTION_NORMAL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_CONNECTION_TIMEOUT
 */
const CONNECTION_TIMEOUT = UNKNOWN;

/**
 * @var int
 * @cvalue ZEND_INI_USER
 */
const INI_USER = UNKNOWN;
/**
 * @var int
 * @cvalue ZEND_INI_PERDIR
 */
const INI_PERDIR = UNKNOWN;
/**
 * @var int
 * @cvalue ZEND_INI_SYSTEM
 */
const INI_SYSTEM = UNKNOWN;
/**
 * @var int
 * @cvalue ZEND_INI_ALL
 */
const INI_ALL = UNKNOWN;

/**
 * @var int
 * @cvalue ZEND_INI_SCANNER_NORMAL
 */
const INI_SCANNER_NORMAL = UNKNOWN;
/**
 * @var int
 * @cvalue ZEND_INI_SCANNER_RAW
 */
const INI_SCANNER_RAW = UNKNOWN;
/**
 * @var int
 * @cvalue ZEND_INI_SCANNER_TYPED
 */
const INI_SCANNER_TYPED = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_URL_SCHEME
 */
const PHP_URL_SCHEME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_HOST
 */
const PHP_URL_HOST = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_PORT
 */
const PHP_URL_PORT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_USER
 */
const PHP_URL_USER = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_PASS
 */
const PHP_URL_PASS = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_PATH
 */
const PHP_URL_PATH = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_QUERY
 */
const PHP_URL_QUERY = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_URL_FRAGMENT
 */
const PHP_URL_FRAGMENT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_QUERY_RFC1738
 */
const PHP_QUERY_RFC1738 = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_QUERY_RFC3986
 */
const PHP_QUERY_RFC3986 = UNKNOWN;

/**
 * @cvalue M_E
 */
const M_E = 2.718281828459045;
/**
 * @cvalue M_LOG2E
 */
const M_LOG2E = 1.4426950408889634074;
/**
 * @cvalue M_LOG10E
 */
const M_LOG10E = 0.43429448190325182765;
/**
 * @cvalue M_LN2
 */
const M_LN2 = 0.69314718055994530942;
/**
 * @cvalue M_LN10
 */
const M_LN10 = 2.30258509299404568402;
/**
 * @cvalue M_PI
 */
const M_PI = 3.14159265358979323846;
/**
 * @cvalue M_PI_2
 */
const M_PI_2 = 1.57079632679489661923;
/**
 * @cvalue M_PI_4
 */
const M_PI_4 = 0.78539816339744830962;
/**
 * @cvalue M_1_PI
 */
const M_1_PI = 0.31830988618379067154;
/**
 * @cvalue M_2_PI
 */
const M_2_PI = 0.63661977236758134308;
/**
 * @cvalue M_SQRTPI
 */
const M_SQRTPI = 1.77245385090551602729;
/**
 * @cvalue M_2_SQRTPI
 */
const M_2_SQRTPI = 1.12837916709551257390;
/**
 * @cvalue M_LNPI
 */
const M_LNPI = 1.14472988584940017414;
/**
 * @cvalue M_EULER
 */
const M_EULER = 0.57721566490153286061;
/**
 * @cvalue M_SQRT2
 */
const M_SQRT2 = 1.41421356237309504880;
/**
 * @cvalue M_SQRT1_2
 */
const M_SQRT1_2 = 0.70710678118654752440;
/**
 * @cvalue M_SQRT3
 */
const M_SQRT3 = 1.73205080756887729352;
/**
 * @var float
 * @cvalue ZEND_INFINITY
 */
const INF = UNKNOWN;
/**
 * @var float
 * @cvalue ZEND_NAN
 */
const NAN = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_ROUND_HALF_UP
 */
const PHP_ROUND_HALF_UP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ROUND_HALF_DOWN
 */
const PHP_ROUND_HALF_DOWN = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ROUND_HALF_EVEN
 */
const PHP_ROUND_HALF_EVEN = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ROUND_HALF_ODD
 */
const PHP_ROUND_HALF_ODD = UNKNOWN;

/* crypt.c */

/**
 * @var int
 * @cvalue PHP_MAX_SALT_LEN
 */
const CRYPT_SALT_LENGTH = UNKNOWN;
const CRYPT_STD_DES = 1;
const CRYPT_EXT_DES = 1;
const CRYPT_MD5 = 1;
const CRYPT_BLOWFISH = 1;
const CRYPT_SHA256 = 1;
const CRYPT_SHA512 = 1;

/* dns.c */

#if (defined(PHP_WIN32) || (defined(HAVE_DNS_SEARCH_FUNC) && defined(HAVE_FULL_DNS_FUNCS)))
/**
 * @var int
 * @cvalue PHP_DNS_A
 */
const DNS_A = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_NS
 */
const DNS_NS = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_CNAME
 */
const DNS_CNAME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_SOA
 */
const DNS_SOA = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_PTR
 */
const DNS_PTR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_HINFO
 */
const DNS_HINFO = UNKNOWN;
#if (!defined(PHP_WIN32))
/**
 * @var int
 * @cvalue PHP_DNS_CAA
 */
const DNS_CAA = UNKNOWN;
#endif
/**
 * @var int
 * @cvalue PHP_DNS_MX
 */
const DNS_MX = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_TXT
 */
const DNS_TXT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_SRV
 */
const DNS_SRV = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_NAPTR
 */
const DNS_NAPTR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_AAAA
 */
const DNS_AAAA = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_A6
 */
const DNS_A6 = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_ANY
 */
const DNS_ANY = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_DNS_ALL
 */
const DNS_ALL = UNKNOWN;
#endif

/* html.c */

/**
* @var int
* @cvalue PHP_HTML_SPECIALCHARS
*/
const HTML_SPECIALCHARS = UNKNOWN;
/**
* @var int
* @cvalue PHP_HTML_ENTITIES
*/
const HTML_ENTITIES = UNKNOWN;
/**
* @var int
* @cvalue ENT_COMPAT
*/
const ENT_COMPAT = UNKNOWN;
/**
* @var int
* @cvalue ENT_QUOTES
*/
const ENT_QUOTES = UNKNOWN;
/**
* @var int
* @cvalue ENT_NOQUOTES
*/
const ENT_NOQUOTES = UNKNOWN;
/**
* @var int
* @cvalue ENT_IGNORE
*/
const ENT_IGNORE = UNKNOWN;
/**
* @var int
* @cvalue ENT_SUBSTITUTE
*/
const ENT_SUBSTITUTE = UNKNOWN;
/**
* @var int
* @cvalue ENT_DISALLOWED
*/
const ENT_DISALLOWED = UNKNOWN;
/**
* @var int
* @cvalue ENT_HTML401
*/
const ENT_HTML401 = UNKNOWN;
/**
* @var int
* @cvalue ENT_XML1
*/
const ENT_XML1 = UNKNOWN;
/**
* @var int
* @cvalue ENT_XHTML
*/
const ENT_XHTML = UNKNOWN;
/**
* @var int
* @cvalue ENT_HTML5
*/
const ENT_HTML5 = UNKNOWN;

/* image.c */

/**
 * @var int
 * @cvalue IMAGE_FILETYPE_GIF
 */
const IMAGETYPE_GIF = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_JPEG
 */
const IMAGETYPE_JPEG = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_PNG
 */
const IMAGETYPE_PNG = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_SWF
 */
const IMAGETYPE_SWF = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_PSD
 */
const IMAGETYPE_PSD = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_BMP
 */
const IMAGETYPE_BMP = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_TIFF_II
 */
const IMAGETYPE_TIFF_II = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_TIFF_MM
 */
const IMAGETYPE_TIFF_MM = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_JPC
 */
const IMAGETYPE_JPC = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_JP2
 */
const IMAGETYPE_JP2 = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_JPX
 */
const IMAGETYPE_JPX = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_JB2
 */
const IMAGETYPE_JB2 = UNKNOWN;
#if (defined(HAVE_ZLIB) && !defined(COMPILE_DL_ZLIB))
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_SWC
 */
const IMAGETYPE_SWC = UNKNOWN;
#endif
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_IFF
 */
const IMAGETYPE_IFF = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_WBMP
 */
const IMAGETYPE_WBMP = UNKNOWN;
/* keep alias */
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_JPC
 */
const IMAGETYPE_JPEG2000 = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_XBM
 */
const IMAGETYPE_XBM = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_ICO
 */
const IMAGETYPE_ICO = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_WEBP
 */
const IMAGETYPE_WEBP = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_AVIF
 */
const IMAGETYPE_AVIF = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_HEIF
 */
const IMAGETYPE_HEIF = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_UNKNOWN
 */
const IMAGETYPE_UNKNOWN = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILETYPE_FIXED_COUNT
 */
const IMAGETYPE_COUNT = UNKNOWN;

/* info.c */

/**
 * @var int
 * @cvalue PHP_INFO_GENERAL
 */
const INFO_GENERAL = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_CREDITS
*/
const INFO_CREDITS = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_CONFIGURATION
*/
const INFO_CONFIGURATION = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_MODULES
*/
const INFO_MODULES = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_ENVIRONMENT
*/
const INFO_ENVIRONMENT = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_VARIABLES
*/
const INFO_VARIABLES = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_LICENSE
*/
const INFO_LICENSE = UNKNOWN;
/**
* @var int
* @cvalue PHP_INFO_ALL
*/
const INFO_ALL = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_GROUP
*/
const CREDITS_GROUP = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_GENERAL
*/
const CREDITS_GENERAL = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_SAPI
*/
const CREDITS_SAPI = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_MODULES
*/
const CREDITS_MODULES = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_DOCS
*/
const CREDITS_DOCS = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_FULLPAGE
*/
const CREDITS_FULLPAGE = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_QA
*/
const CREDITS_QA = UNKNOWN;
/**
* @var int
* @cvalue PHP_CREDITS_ALL
*/
const CREDITS_ALL = UNKNOWN;

/* syslog.c */

/* error levels */

/**
 * system unusable
 * @var int
 * @cvalue LOG_EMERG
 */
const LOG_EMERG = UNKNOWN;
/**
 * immediate action required
 * @var int
 * @cvalue LOG_ALERT
 */
const LOG_ALERT = UNKNOWN;
/**
 * critical conditions
 * @var int
 * @cvalue LOG_CRIT
 */
const LOG_CRIT = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_ERR
 */
const LOG_ERR = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_WARNING
 */
const LOG_WARNING = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_NOTICE
 */
const LOG_NOTICE = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_INFO
 */
const LOG_INFO = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_DEBUG
 */
const LOG_DEBUG = UNKNOWN;
/* facility: type of program logging the message */
/**
 * @var int
 * @cvalue LOG_KERN
 */
const LOG_KERN = UNKNOWN;
/**
 * generic user level
 * @var int
 * @cvalue LOG_USER
 */
const LOG_USER = UNKNOWN;
/**
 * log to email
 * @var int
 * @cvalue LOG_MAIL
 */
const LOG_MAIL = UNKNOWN;
/**
 * other system daemons
 * @var int
 * @cvalue LOG_DAEMON
 */
const LOG_DAEMON = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_AUTH
 */
const LOG_AUTH = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_SYSLOG
 */
const LOG_SYSLOG = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LPR
 */
const LOG_LPR = UNKNOWN;
#ifdef LOG_NEWS
/* No LOG_NEWS on HP-UX */
/**
 * usenet new
 * @var int
 * @cvalue LOG_NEWS
 */
const LOG_NEWS = UNKNOWN;
#endif
#ifdef LOG_UUCP
/* No LOG_UUCP on HP-UX */
/**
 * @var int
 * @cvalue LOG_UUCP
 */
const LOG_UUCP = UNKNOWN;
#endif
#ifdef LOG_CRON
/* apparently some systems don't have this one */
/**
 * @var int
 * @cvalue LOG_CRON
 */
const LOG_CRON = UNKNOWN;
#endif
#ifdef LOG_AUTHPRIV
/* AIX doesn't have LOG_AUTHPRIV */
/**
 * @var int
 * @cvalue LOG_AUTHPRIV
 */
const LOG_AUTHPRIV = UNKNOWN;
#endif
#ifndef PHP_WIN32
/**
 * @var int
 * @cvalue LOG_LOCAL0
 */
const LOG_LOCAL0 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL1
 */
const LOG_LOCAL1 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL2
 */
const LOG_LOCAL2 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL3
 */
const LOG_LOCAL3 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL4
 */
const LOG_LOCAL4 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL5
 */
const LOG_LOCAL5 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL6
 */
const LOG_LOCAL6 = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_LOCAL7
 */
const LOG_LOCAL7 = UNKNOWN;
#endif
/* options */
/**
 * @var int
 * @cvalue LOG_PID
 */
const LOG_PID = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_CONS
 */
const LOG_CONS = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_ODELAY
 */
const LOG_ODELAY = UNKNOWN;
/**
 * @var int
 * @cvalue LOG_NDELAY
 */
const LOG_NDELAY = UNKNOWN;
#ifdef LOG_NOWAIT
/**
 * @var int
 * @cvalue LOG_NOWAIT
 */
const LOG_NOWAIT = UNKNOWN;
#endif
#ifdef LOG_PERROR
/* AIX doesn't have LOG_PERROR */
/**
 * log to stderr
 * @var int
 * @cvalue LOG_PERROR
 */
const LOG_PERROR = UNKNOWN;
#endif

/* string.c */

/**
 * @var int
 * @cvalue PHP_STR_PAD_LEFT
 */
const STR_PAD_LEFT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_STR_PAD_RIGHT
 */
const STR_PAD_RIGHT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_STR_PAD_BOTH
 */
const STR_PAD_BOTH = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PATHINFO_DIRNAME
 */
const PATHINFO_DIRNAME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PATHINFO_BASENAME
 */
const PATHINFO_BASENAME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PATHINFO_EXTENSION
 */
const PATHINFO_EXTENSION = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PATHINFO_FILENAME
 */
const PATHINFO_FILENAME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_PATHINFO_ALL
 */
const PATHINFO_ALL = UNKNOWN;

/**
 * If last members of struct lconv equal CHAR_MAX, no grouping is done
 * @var int
 * @cvalue CHAR_MAX
 */
const CHAR_MAX = UNKNOWN;
/**
 * @var int
 * @cvalue LC_CTYPE
 */
const LC_CTYPE = UNKNOWN;
/**
 * @var int
 * @cvalue LC_NUMERIC
 */
const LC_NUMERIC = UNKNOWN;
/**
 * @var int
 * @cvalue LC_TIME
 */
const LC_TIME = UNKNOWN;
/**
 * @var int
 * @cvalue LC_COLLATE
 */
const LC_COLLATE = UNKNOWN;
/**
 * @var int
 * @cvalue LC_MONETARY
 */
const LC_MONETARY = UNKNOWN;
/**
 * @var int
 * @cvalue LC_ALL
 */
const LC_ALL = UNKNOWN;
#ifdef LC_MESSAGES
/**
 * @var int
 * @cvalue LC_MESSAGES
 */
const LC_MESSAGES = UNKNOWN;
#endif

#ifdef HAVE_NL_LANGINFO
#ifdef ABDAY_1
/**
 * @var int
 * @cvalue ABDAY_1
 */
const ABDAY_1 = UNKNOWN;
/**
 * @var int
 * @cvalue ABDAY_2
 */
const ABDAY_2 = UNKNOWN;
/**
 * @var int
 * @cvalue ABDAY_3
 */
const ABDAY_3 = UNKNOWN;
/**
 * @var int
 * @cvalue ABDAY_4
 */
const ABDAY_4 = UNKNOWN;
/**
 * @var int
 * @cvalue ABDAY_5
 */
const ABDAY_5 = UNKNOWN;
/**
 * @var int
 * @cvalue ABDAY_6
 */
const ABDAY_6 = UNKNOWN;
/**
 * @var int
 * @cvalue ABDAY_7
 */
const ABDAY_7 = UNKNOWN;
#endif
#ifdef DAY_1
/**
 * @var int
 * @cvalue DAY_1
 */
const DAY_1 = UNKNOWN;
/**
 * @var int
 * @cvalue DAY_2
 */
const DAY_2 = UNKNOWN;
/**
 * @var int
 * @cvalue DAY_3
 */
const DAY_3 = UNKNOWN;
/**
 * @var int
 * @cvalue DAY_4
 */
const DAY_4 = UNKNOWN;
/**
 * @var int
 * @cvalue DAY_5
 */
const DAY_5 = UNKNOWN;
/**
 * @var int
 * @cvalue DAY_6
 */
const DAY_6 = UNKNOWN;
/**
 * @var int
 * @cvalue DAY_7
 */
const DAY_7 = UNKNOWN;
#endif
#ifdef ABMON_1
/**
 * @var int
 * @cvalue ABMON_1
 */
const ABMON_1 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_2
 */
const ABMON_2 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_3
 */
const ABMON_3 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_4
 */
const ABMON_4 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_5
 */
const ABMON_5 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_6
 */
const ABMON_6 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_7
 */
const ABMON_7 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_8
 */
const ABMON_8 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_9
 */
const ABMON_9 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_10
 */
const ABMON_10 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_11
 */
const ABMON_11 = UNKNOWN;
/**
 * @var int
 * @cvalue ABMON_12
 */
const ABMON_12 = UNKNOWN;
#endif
#ifdef MON_1
/**
 * @var int
 * @cvalue MON_1
 */
const MON_1 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_2
 */
const MON_2 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_3
 */
const MON_3 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_4
 */
const MON_4 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_5
 */
const MON_5 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_6
 */
const MON_6 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_7
 */
const MON_7 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_8
 */
const MON_8 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_9
 */
const MON_9 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_10
 */
const MON_10 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_11
 */
const MON_11 = UNKNOWN;
/**
 * @var int
 * @cvalue MON_12
 */
const MON_12 = UNKNOWN;
#endif
#ifdef AM_STR
/**
 * @var int
 * @cvalue AM_STR
 */
const AM_STR = UNKNOWN;
#endif
#ifdef PM_STR
/**
 * @var int
 * @cvalue PM_STR
 */
const PM_STR = UNKNOWN;
#endif
#ifdef D_T_FMT
/**
 * @var int
 * @cvalue D_T_FMT
 */
const D_T_FMT = UNKNOWN;
#endif
#ifdef D_FMT
/**
 * @var int
 * @cvalue D_FMT
 */
const D_FMT = UNKNOWN;
#endif
#ifdef T_FMT
/**
 * @var int
 * @cvalue T_FMT
 */
const T_FMT = UNKNOWN;
#endif
#ifdef T_FMT_AMPM
/**
 * @var int
 * @cvalue T_FMT_AMPM
 */
const T_FMT_AMPM = UNKNOWN;
#endif
#ifdef ERA
/**
 * @var int
 * @cvalue ERA
 */
const ERA = UNKNOWN;
#endif
#ifdef ERA_YEAR
/**
 * @var int
 * @cvalue ERA_YEAR
 */
const ERA_YEAR = UNKNOWN;
#endif
#ifdef ERA_D_T_FMT
/**
 * @var int
 * @cvalue ERA_D_T_FMT
 */
const ERA_D_T_FMT = UNKNOWN;
#endif
#ifdef ERA_D_FMT
/**
 * @var int
 * @cvalue ERA_D_FMT
 */
const ERA_D_FMT = UNKNOWN;
#endif
#ifdef ERA_T_FMT
/**
 * @var int
 * @cvalue ERA_T_FMT
 */
const ERA_T_FMT = UNKNOWN;
#endif
#ifdef ALT_DIGITS
/**
 * @var int
 * @cvalue ALT_DIGITS
 */
const ALT_DIGITS = UNKNOWN;
#endif
#ifdef INT_CURR_SYMBOL
/**
 * @var int
 * @cvalue INT_CURR_SYMBOL
 */
const INT_CURR_SYMBOL = UNKNOWN;
#endif
#ifdef CURRENCY_SYMBOL
/**
 * @var int
 * @cvalue CURRENCY_SYMBOL
 */
const CURRENCY_SYMBOL = UNKNOWN;
#endif
#ifdef CRNCYSTR
/**
 * @var int
 * @cvalue CRNCYSTR
 */
const CRNCYSTR = UNKNOWN;
#endif
#ifdef MON_DECIMAL_POINT
/**
 * @var int
 * @cvalue MON_DECIMAL_POINT
 */
const MON_DECIMAL_POINT = UNKNOWN;
#endif
#ifdef MON_THOUSANDS_SEP
/**
 * @var int
 * @cvalue MON_THOUSANDS_SEP
 */
const MON_THOUSANDS_SEP = UNKNOWN;
#endif
#ifdef MON_GROUPING
/**
 * @var int
 * @cvalue MON_GROUPING
 */
const MON_GROUPING = UNKNOWN;
#endif
#ifdef POSITIVE_SIGN
/**
 * @var int
 * @cvalue POSITIVE_SIGN
 */
const POSITIVE_SIGN = UNKNOWN;
#endif
#ifdef NEGATIVE_SIGN
/**
 * @var int
 * @cvalue NEGATIVE_SIGN
 */
const NEGATIVE_SIGN = UNKNOWN;
#endif
#ifdef INT_FRAC_DIGITS
/**
 * @var int
 * @cvalue INT_FRAC_DIGITS
 */
const INT_FRAC_DIGITS = UNKNOWN;
#endif
#ifdef FRAC_DIGITS
/**
 * @var int
 * @cvalue FRAC_DIGITS
 */
const FRAC_DIGITS = UNKNOWN;
#endif
#ifdef P_CS_PRECEDES
/**
 * @var int
 * @cvalue P_CS_PRECEDES
 */
const P_CS_PRECEDES = UNKNOWN;
#endif
#ifdef P_SEP_BY_SPACE
/**
 * @var int
 * @cvalue P_SEP_BY_SPACE
 */
const P_SEP_BY_SPACE = UNKNOWN;
#endif
#ifdef N_CS_PRECEDES
/**
 * @var int
 * @cvalue N_CS_PRECEDES
 */
const N_CS_PRECEDES = UNKNOWN;
#endif
#ifdef N_SEP_BY_SPACE
/**
 * @var int
 * @cvalue N_SEP_BY_SPACE
 */
const N_SEP_BY_SPACE = UNKNOWN;
#endif
#ifdef P_SIGN_POSN
/**
 * @var int
 * @cvalue P_SIGN_POSN
 */
const P_SIGN_POSN = UNKNOWN;
#endif
#ifdef N_SIGN_POSN
/**
 * @var int
 * @cvalue N_SIGN_POSN
 */
const N_SIGN_POSN = UNKNOWN;
#endif
#ifdef DECIMAL_POINT
/**
 * @var int
 * @cvalue DECIMAL_POINT
 */
const DECIMAL_POINT = UNKNOWN;
#endif
#ifdef RADIXCHAR
/**
 * @var int
 * @cvalue RADIXCHAR
 */
const RADIXCHAR = UNKNOWN;
#endif
#ifdef THOUSANDS_SEP
/**
 * @var int
 * @cvalue THOUSANDS_SEP
 */
const THOUSANDS_SEP = UNKNOWN;
#endif
#ifdef THOUSEP
/**
 * @var int
 * @cvalue THOUSEP
 */
const THOUSEP = UNKNOWN;
#endif
#ifdef GROUPING
/**
 * @var int
 * @cvalue GROUPING
 */
const GROUPING = UNKNOWN;
#endif
#ifdef YESEXPR
/**
 * @var int
 * @cvalue YESEXPR
 */
const YESEXPR = UNKNOWN;
#endif
#ifdef NOEXPR
/**
 * @var int
 * @cvalue NOEXPR
 */
const NOEXPR = UNKNOWN;
#endif
#ifdef YESSTR
/**
 * @var int
 * @cvalue YESSTR
 */
const YESSTR = UNKNOWN;
#endif
#ifdef NOSTR
/**
 * @var int
 * @cvalue NOSTR
 */
const NOSTR = UNKNOWN;
#endif
#ifdef CODESET
/**
 * @var int
 * @cvalue CODESET
 */
const CODESET = UNKNOWN;
#endif
#endif

/** @undocumentable */
#[AllowDynamicProperties]
final class __PHP_Incomplete_Class
{
}

class AssertionError extends Error
{
}

/* main/main.c */

/** @genstubs-expose-comment-block
 * Limits the maximum execution time
 * @param int $seconds The maximum execution time, in seconds. If set to zero, no time limit is imposed.
 * @return bool
 */
function set_time_limit(int $seconds): bool {}

/* main/SAPI.c */

/** @genstubs-expose-comment-block
 * Call a header function
 * @return bool
 */
function header_register_callback(callable $callback): bool {}

/* main/output.c */

/** @genstubs-expose-comment-block
 * Turn on output buffering
 * @param callable|null $callback An optional callback callable may be specified. It can also be bypassed by passing null.
 * @param int $chunk_size If the optional parameter chunk_size is passed, the buffer will be flushed after any block of code resulting in output that causes the buffer's length to equal or exceed chunk_size. The default value 0 means that all output is buffered until the buffer is turned off. See  for more details.
 * @param int $flags The flags parameter is a bitmask that controls the operations that can be performed on the output buffer. The default is to allow output buffers to be cleaned, flushed and removed, which can be set explicitly via the buffer control flags . See for more details.
 * @return bool
 */
/** @param callable|null $callback */
function ob_start($callback = null, int $chunk_size = 0, int $flags = PHP_OUTPUT_HANDLER_STDFLAGS): bool {}

/** @genstubs-expose-comment-block
 * Flush (send) the return value of the active output handler
 * @return bool
 */
function ob_flush(): bool {}

/** @genstubs-expose-comment-block
 * Clean (erase) the contents of the active output buffer
 * @return bool
 */
function ob_clean(): bool {}

/** @genstubs-expose-comment-block
 * Flush (send) the return value of the active output handler
 * and turn the active output buffer off
 * @return bool
 */
function ob_end_flush(): bool {}

/** @genstubs-expose-comment-block
 * Clean (erase) the contents of the active output buffer and turn it off
 * @return bool
 */
function ob_end_clean(): bool {}

/** @genstubs-expose-comment-block
 * Flush (send) the return value of the active output handler,
 * return the contents of the active output buffer and turn it off
 * @return string|false
 */
/** @refcount 1 */
function ob_get_flush(): string|false {}

/** @genstubs-expose-comment-block
 * Get the contents of the active output buffer and turn it off
 * @return string|false
 */
/** @refcount 1 */
function ob_get_clean(): string|false {}

/** @genstubs-expose-comment-block
 * Return the contents of the output buffer
 * @return string|false
 */
function ob_get_contents(): string|false {}

/** @genstubs-expose-comment-block
 * Return the nesting level of the output buffering mechanism
 * @return int
 */
function ob_get_level(): int {}

/** @genstubs-expose-comment-block
 * Return the length of the output buffer
 * @return int|false
 */
function ob_get_length(): int|false {}

/** @genstubs-expose-comment-block
 * List all output handlers in use
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function ob_list_handlers(): array {}

/** @genstubs-expose-comment-block
 * Get status of output buffers
 * @param bool $full_status true to return all active output buffer levels. If false or not set, only the top level output buffer is returned.
 * @return array
 */
/**
 * @return array<int|string, int|string|array>
 * @refcount 1
 */
function ob_get_status(bool $full_status = false): array {}

/** @genstubs-expose-comment-block
 * Turn implicit flush on/off
 * @param bool $enable true to turn implicit flushing on, false otherwise.
 * @return void
 */
function ob_implicit_flush(bool $enable = true): void {}

/** @genstubs-expose-comment-block
 * Reset URL rewriter values
 * @return bool
 */
function output_reset_rewrite_vars(): bool {}

/** @genstubs-expose-comment-block
 * Add URL rewriter values
 * @param string $name The variable name.
 * @param string $value The variable value.
 * @return bool
 */
function output_add_rewrite_var(string $name, string $value): bool {}

/* main/streams/userspace.c */

/** @genstubs-expose-comment-block
 * Register a URL wrapper implemented as a PHP class
 * @param string $protocol The wrapper name to be registered. Valid protocol names must contain alphanumerics, dots (.), plusses (+), or hyphens (-) only.
 * @param string $class The classname which implements the protocol.
 * @param int $flags Should be set to STREAM_IS_URL if protocol is a URL protocol. Default is 0, local stream.
 * @return bool
 */
function stream_wrapper_register(string $protocol, string $class, int $flags = 0): bool {}

/** @genstubs-expose-comment-block
 * Alias stream_wrapper_register
 */
/** @alias stream_wrapper_register */
function stream_register_wrapper(string $protocol, string $class, int $flags = 0): bool {}

/** @genstubs-expose-comment-block
 * Unregister a URL wrapper
 * @return bool
 */
function stream_wrapper_unregister(string $protocol): bool {}

/** @genstubs-expose-comment-block
 * Restores a previously unregistered built-in wrapper
 * @return bool
 */
function stream_wrapper_restore(string $protocol): bool {}

/* array.c */

/** @genstubs-expose-comment-block
 * Push one or more elements onto the end of array
 * @param array $array The input array.
 * @param mixed $values The values to push onto the end of the array.
 * @return int
 */
function array_push(array &$array, mixed ...$values): int {}

/** @genstubs-expose-comment-block
 * Sort an array by key in descending order
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:
 * @return true
 */
function krsort(array &$array, int $flags = SORT_REGULAR): true {}

/** @genstubs-expose-comment-block
 * Sort an array by key in ascending order
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:
 * @return true
 */
function ksort(array &$array, int $flags = SORT_REGULAR): true {}

/** @genstubs-expose-comment-block
 * Counts all elements in an array or in a Countable object
 * @param Countable|array $value An array or Countable object.
 * @param int $mode If the optional mode parameter is set to COUNT_RECURSIVE (or 1), count will recursively count the array.  This is particularly useful for counting all the elements of a multidimensional array.
 * @return int
 */
/** @compile-time-eval */
function count(Countable|array $value, int $mode = COUNT_NORMAL): int {}

/** @genstubs-expose-comment-block
 * Alias count
 */
/** @alias count */
function sizeof(Countable|array $value, int $mode = COUNT_NORMAL): int {}

/** @genstubs-expose-comment-block
 * Sort an array using a "natural order" algorithm
 * @param array $array The input array.
 * @return true
 */
function natsort(array &$array): true {}

/** @genstubs-expose-comment-block
 * Sort an array using a case insensitive "natural order" algorithm
 * @param array $array The input array.
 * @return true
 */
function natcasesort(array &$array): true {}

/** @genstubs-expose-comment-block
 * Sort an array in ascending order and maintain index association
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:
 * @return true
 */
function asort(array &$array, int $flags = SORT_REGULAR): true {}

/** @genstubs-expose-comment-block
 * Sort an array in descending order and maintain index association
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:
 * @return true
 */
function arsort(array &$array, int $flags = SORT_REGULAR): true {}

/** @genstubs-expose-comment-block
 * Sort an array in ascending order
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:
 * @return true
 */
function sort(array &$array, int $flags = SORT_REGULAR): true {}

/** @genstubs-expose-comment-block
 * Sort an array in descending order
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the sorting behavior using these values:
 * @return true
 */
function rsort(array &$array, int $flags = SORT_REGULAR): true {}

/** @genstubs-expose-comment-block
 * Sort an array by values using a user-defined comparison function
 * @param array $array The input array.
 * @param callable $callback The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return true
 */
function usort(array &$array, callable $callback): true {}

/** @genstubs-expose-comment-block
 * Sort an array with a user-defined comparison function and maintain index association
 * @param array $array The input array.
 * @param callable $callback The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return true
 */
function uasort(array &$array, callable $callback): true {}

/** @genstubs-expose-comment-block
 * Sort an array by keys using a user-defined comparison function
 * @param array $array The input array.
 * @param callable $callback The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return true
 */
function uksort(array &$array, callable $callback): true {}

/** @genstubs-expose-comment-block
 * Set the internal pointer of an array to its last element
 * @param array|object $array The array.  This array is passed by reference because it is modified by the function.  This means you must pass it a real variable and not a function returning an array because only actual variables may be passed by reference.
 * @return mixed
 */
function end(array|object &$array): mixed {}

/** @genstubs-expose-comment-block
 * Rewind the internal array pointer
 * @param array|object $array The input array.
 * @return mixed
 */
function prev(array|object &$array): mixed {}

/** @genstubs-expose-comment-block
 * Advance the internal pointer of an array
 * @param array|object $array The array being affected.
 * @return mixed
 */
function next(array|object &$array): mixed {}

/** @genstubs-expose-comment-block
 * Set the internal pointer of an array to its first element
 * @param array|object $array The input array.
 * @return mixed
 */
function reset(array|object &$array): mixed {}

/** @genstubs-expose-comment-block
 * Return the current element in an array
 * @param array|object $array The array.
 * @return mixed
 */
function current(array|object $array): mixed {}

/** @genstubs-expose-comment-block
 * Alias current
 */
/** @alias current */
function pos(array|object $array): mixed {}

/** @genstubs-expose-comment-block
 * Fetch a key from an array
 * @param array|object $array The array.
 * @return int|string|null
 */
function key(array|object $array): int|string|null {}

/** @genstubs-expose-comment-block
 * Find lowest value
 * @param mixed $value Any comparable value.
 * @param mixed $values Any comparable values.
 * @param array $value_array An array containing the values.
 * @return mixed|mixed
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 */
function min(mixed $value, mixed ...$values): mixed {}

/** @genstubs-expose-comment-block
 * Find highest value
 * @param mixed $value Any comparable value.
 * @param mixed $values Any comparable values.
 * @param array $value_array An array containing the values.
 * @return mixed|mixed
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 */
function max(mixed $value, mixed ...$values): mixed {}

/**
 * @compile-time-eval
 * @frameless-function {"arity": 3}
 */
function clamp(mixed $value, mixed $min, mixed $max): mixed {}

/** @genstubs-expose-comment-block
 * Apply a user supplied function to every member of an array
 * @param array|object $array The input array.
 * @param callable $callback Typically, callback takes on two parameters. The array parameter's value being the first, and the keyindex second.
 * @param mixed $arg If the optional arg parameter is supplied, it will be passed as the third parameter to the callback.
 * @return true
 */
function array_walk(array|object &$array, callable $callback, mixed $arg = UNKNOWN): true {}

/** @genstubs-expose-comment-block
 * Apply a user function recursively to every member of an array
 * @param array|object $array The input array.
 * @param callable $callback Typically, callback takes on two parameters. The array parameter's value being the first, and the keyindex second.
 * @param mixed $arg If the optional arg parameter is supplied, it will be passed as the third parameter to the callback.
 * @return true
 */
function array_walk_recursive(array|object &$array, callable $callback, mixed $arg = UNKNOWN): true {}

/** @genstubs-expose-comment-block
 * Checks if a value exists in an array
 * @param mixed $needle The searched value.
 * @param array $haystack The array.
 * @param bool $strict If the third parameter strict is set to true then the in_array function will also check the types of the needle in the haystack.
 * @return bool
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 * @frameless-function {"arity": 3}
 */
function in_array(mixed $needle, array $haystack, bool $strict = false): bool {}

/** @genstubs-expose-comment-block
 * Searches the array for a given value and returns the first corresponding key if successful
 * @param mixed $needle The searched value.
 * @param array $haystack The array.
 * @param bool $strict If the third parameter strict is set to true then the array_search function will search for identical elements in the haystack. This means it will also perform a strict type comparison of the needle in the haystack, and objects must be the same instance.
 * @return int|string|false
 */
/**
 * @compile-time-eval
 */
function array_search(mixed $needle, array $haystack, bool $strict = false): int|string|false {}

/** @genstubs-expose-comment-block
 * Import variables into the current symbol table from an array
 * @param array $array An associative array. This function treats keys as variable names and values as variable values.  For each keyvalue pair it will create a variable in the current symbol table, subject to flags and prefix parameters.
 * @param int $flags The way invalidnumeric keys and collisions are treated is determined by the extraction flags. It can be one of the following values: EXTR_OVERWRITE If there is a collision, overwrite the existing variable. EXTR_SKIP If there is a collision, don't overwrite the existing variable. EXTR_PREFIX_SAME If there is a collision, prefix the variable name with prefix. EXTR_PREFIX_ALL Prefix all variable names with prefix. EXTR_PREFIX_INVALID Only prefix invalidnumeric variable names with prefix. EXTR_IF_EXISTS Only overwrite the variable if it already exists in the current symbol table, otherwise do nothing.  This is useful for defining a list of valid variables and then extracting only those variables you have defined out of $_REQUEST, for example. EXTR_PREFIX_IF_EXISTS Only create prefixed variable names if the non-prefixed version of the same variable exists in the current symbol table. EXTR_REFS Extracts variables as references. This effectively means that the values of the imported variables are still referencing the values of the array parameter. You can use this flag on its own or combine it with any other flag by OR'ing the flags.
 * @param string $prefix Note that prefix is only required if flags is EXTR_PREFIX_SAME, EXTR_PREFIX_ALL, EXTR_PREFIX_INVALID or EXTR_PREFIX_IF_EXISTS. If the prefixed result is not a valid variable name, it is not imported into the symbol table. Prefixes are automatically separated from the array key by an underscore character.
 * @return int
 */
/** @prefer-ref $array */
function extract(array &$array, int $flags = EXTR_OVERWRITE, string $prefix = ""): int {}

/** @genstubs-expose-comment-block
 * Create array containing variables and their values
 * @param array|string $var_name compact takes a variable number of parameters. Each parameter can be either a string containing the name of the variable, or an array of variable names.  The array can contain other arrays of variable names inside it; compact handles it recursively.
 * @return array
 */
/**
 * @param array|string $var_name
 * @param array|string $var_names
 * @return array<string, mixed|ref>
 * @refcount 1
 */
function compact($var_name, ...$var_names): array {}

/** @genstubs-expose-comment-block
 * Fill an array with values
 * @param int $start_index The first index of the returned array.
 * @param int $count Number of elements to insert. Must be greater than or equal to zero, and less than or equal to 2147483647.
 * @param mixed $value Value to use for filling
 * @return array
 */
/** @return array<int, mixed> */
function array_fill(int $start_index, int $count, mixed $value): array {}

/** @genstubs-expose-comment-block
 * Fill an array with values, specifying keys
 * @param array $keys Array of values that will be used as keys. Illegal values for key will be converted to string.
 * @param mixed $value Value to use for filling
 * @return array
 */
/** @refcount 1 */
function array_fill_keys(array $keys, mixed $value): array {}

/** @genstubs-expose-comment-block
 * Create an array containing a range of elements
 * @param string|int|float $start First value of the sequence.
 * @param string|int|float $end Last possible value of the sequence.
 * @param int|float $step step indicates by how much is the produced sequence progressed between values of the sequence.
 * @return array
 */
function range(string|int|float $start, string|int|float $end, int|float $step = 1): array {}

/** @genstubs-expose-comment-block
 * Shuffle an array
 * @param array $array The array.
 * @return true
 */
function shuffle(array &$array): true {}

/** @genstubs-expose-comment-block
 * Pop the element off the end of array
 * @param array $array The array to get the value from.
 * @return mixed
 */
function array_pop(array &$array): mixed {}

/** @genstubs-expose-comment-block
 * Shift an element off the beginning of array
 * @param array $array The input array.
 * @return mixed
 */
function array_shift(array &$array): mixed {}

/** @genstubs-expose-comment-block
 * Prepend one or more elements to the beginning of an array
 * @param array $array The input array.
 * @param mixed $values The values to prepend.
 * @return int
 */
function array_unshift(array &$array, mixed ...$values): int {}

/** @genstubs-expose-comment-block
 * Remove a portion of the array and replace it with something else
 * @param array $array The input array.
 * @param int $offset If offset is positive then the start of the removed portion is at that offset from the beginning of the array array.
 * @param int|null $length If length is omitted, removes everything from offset to the end of the array.
 * @param mixed $replacement If replacement array is specified, then the removed elements are replaced with elements from this array.
 * @return array
 */
function array_splice(array &$array, int $offset, ?int $length = null, mixed $replacement = []): array {}

/** @genstubs-expose-comment-block
 * Extract a slice of the array
 * @param array $array The input array.
 * @param int $offset If offset is non-negative, the sequence will start at that offset in the array.
 * @param int|null $length If length is given and is positive, then the sequence will have up to that many elements in it.
 * @param bool $preserve_keys array_slice will reorder and reset the integer array indices by default. This behaviour can be changed by setting preserve_keys to true. String keys are always preserved, regardless of this parameter.
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_slice(array $array, int $offset, ?int $length = null, bool $preserve_keys = false): array {}

/** @genstubs-expose-comment-block
 * Merge one or more arrays
 * @param array $arrays Variable list of arrays to merge.
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_merge(array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Merge one or more arrays recursively
 * @param array $arrays Variable list of arrays to recursively merge.
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_merge_recursive(array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Replaces elements from passed arrays into the first array
 * @param array $array The array in which elements are replaced.
 * @param array $replacements Arrays from which elements will be extracted. Values from later arrays overwrite the previous values.
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_replace(array $array, array ...$replacements): array {}

/** @genstubs-expose-comment-block
 * Replaces elements from passed arrays into the first array recursively
 * @param array $array The array in which elements are replaced.
 * @param array $replacements Arrays from which elements will be extracted.
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_replace_recursive(array $array, array ...$replacements): array {}

/** @genstubs-expose-comment-block
 * Return all the keys or a subset of the keys of an array
 * @param array $array An array containing keys to return.
 * @param mixed $filter_value If specified, then only keys containing this value are returned.
 * @param bool $strict Determines if strict comparison (===) should be used during the search.
 * @return array|array
 */
/**
 * @return array<int, int|string>
 * @compile-time-eval
 */
function array_keys(array $array, mixed $filter_value = UNKNOWN, bool $strict = false): array {}

/** @genstubs-expose-comment-block
 * Gets the first key of an array
 * @return int|string|null
 */
/**
 * @compile-time-eval
 */
function array_key_first(array $array): int|string|null {}

/** @genstubs-expose-comment-block
 * Gets the last key of an array
 * @return int|string|null
 */
/**
 * @compile-time-eval
 */
function array_key_last(array $array): int|string|null {}

/** @genstubs-expose-comment-block
 * Gets the first value of an array
 * @return mixed
 */
/**
 * @compile-time-eval
 */
function array_first(array $array): mixed {}

/** @genstubs-expose-comment-block
 * Gets the last value of an array
 * @return mixed
 */
/**
 * @compile-time-eval
 */
function array_last(array $array): mixed {}

/** @genstubs-expose-comment-block
 * Return all the values of an array
 * @param array $array The array.
 * @return array
 */
/**
 * @return array<int, mixed|ref>
 * @compile-time-eval
 */
function array_values(array $array): array {}

/** @genstubs-expose-comment-block
 * Counts the occurrences of each distinct value in an array
 * @param array $array The array of values to count
 * @return array
 */
/**
 * @return array<int|string, int>
 * @compile-time-eval
 * @refcount 1
 */
function array_count_values(array $array): array {}

/** @genstubs-expose-comment-block
 * Return the values from a single column in the input array
 * @param array $array A multi-dimensional array or an array of objects from which to pull a column of values from. If an array of objects is provided, then public properties can be directly pulled. In order for protected or private properties to be pulled, the class must implement both the __get and __isset magic methods.
 * @param int|string|null $column_key The column of values to return. This value may be an integer key of the column you wish to retrieve, or it may be a string key name for an associative array or property name. It may also be null to return complete arrays or objects (this is useful together with index_key to reindex the array).
 * @param int|string|null $index_key The column to use as the indexkeys for the returned array. This value may be the integer key of the column, or it may be the string key name. The value is cast as usual for array keys (however, prior to PHP 8.0.0, objects supporting conversion to string were also allowed).
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_column(array $array, int|string|null $column_key, int|string|null $index_key = null): array {}

/** @genstubs-expose-comment-block
 * Return an array with elements in reverse order
 * @param array $array The input array.
 * @param bool $preserve_keys If set to true numeric keys are preserved. Non-numeric keys are not affected by this setting and will always be preserved.
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_reverse(array $array, bool $preserve_keys = false): array {}

/** @genstubs-expose-comment-block
 * Pad array to the specified length with a value
 * @param array $array Initial array of values to pad.
 * @param int $length New size of the array.
 * @param mixed $value Value to pad if array is less than length.
 * @return array
 */
function array_pad(array $array, int $length, mixed $value): array {}

/** @genstubs-expose-comment-block
 * Exchanges all keys with their associated values in an array
 * @param array $array An array of keyvalue pairs to be flipped.
 * @return array
 */
/**
 * @return array<int|string, int|string>
 * @compile-time-eval
 * @refcount 1
 */
function array_flip(array $array): array {}

/** @genstubs-expose-comment-block
 * Changes the case of all keys in an array
 * @param array $array The array to work on
 * @param int $case Either CASE_UPPER or CASE_LOWER (default)
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_change_key_case(array $array, int $case = CASE_LOWER): array {}

/** @genstubs-expose-comment-block
 * Removes duplicate values from an array
 * @param array $array The input array.
 * @param int $flags The optional second parameter flags may be used to modify the comparison behavior using these values:
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_unique(array $array, int $flags = SORT_STRING): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays using keys for comparison
 * @param array $array The array with master keys to check.
 * @param array $arrays Arrays to compare keys against.
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_intersect_key(array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays using a callback function on the keys for comparison
 * @param array $array Initial array for comparison of the arrays.
 * @param array $arrays Arrays to compare keys against.
 * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 */
function array_intersect_ukey(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays
 * @param array $array The array with master values to check.
 * @param array $arrays Arrays to compare values against.
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_intersect(array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays, compares data by a callback function
 * @param array $array The first array.
 * @param array $arrays Arrays to compare against.
 * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 */
function array_uintersect(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays with additional index check
 * @param array $array The array with master values to check.
 * @param array $arrays Arrays to compare values against.
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_intersect_assoc(array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays with additional index check, compares data by a callback function
 * @param array $array The first array.
 * @param array $arrays Arrays to compare against.
 * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 * @refcount 1
 */
function array_uintersect_assoc(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays with additional index check, compares indexes by a callback function
 * @param array $array Initial array for comparison of the arrays.
 * @param array $arrays Arrays to compare keys against.
 * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 */
function array_intersect_uassoc(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the intersection of arrays with additional index check, compares data and indexes by separate callback functions
 * @param array $array1 The first array.
 * @param array $arrays Further arrays.
 * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @param callable $key_compare_func Key comparison callback function.
 * @return array
 */
/**
 * @param array|callable $rest
 */
function array_uintersect_uassoc(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays using keys for comparison
 * @param array $array The array to compare from
 * @param array $arrays Arrays to compare against
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_diff_key(array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays using a callback function on the keys for comparison
 * @param array $array The array to compare from
 * @param array $arrays Arrays to compare against
 * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 * @refcount 1
 */
function array_diff_ukey(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays
 * @param array $array The array to compare from
 * @param array $arrays Arrays to compare against
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_diff(array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays by using a callback function for data comparison
 * @param array $array The first array.
 * @param array $arrays Arrays to compare against.
 * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 * @refcount 1
 */
function array_udiff(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays with additional index check
 * @param array $array The array to compare from
 * @param array $arrays Arrays to compare against
 * @return array
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function array_diff_assoc(array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays with additional index check which is performed by a user supplied callback function
 * @param array $array The array to compare from
 * @param array $arrays Arrays to compare against
 * @param callable $key_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 * @refcount 1
 */
function array_diff_uassoc(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays with additional index check, compares data by a callback function
 * @param array $array The first array.
 * @param array $arrays Arrays to compare against.
 * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @return array
 */
/**
 * @param array|callable $rest
 * @refcount 1
 */
function array_udiff_assoc(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Computes the difference of arrays with additional index check, compares data and indexes by a callback function
 * @param array $array The first array.
 * @param array $arrays Arrays to compare against.
 * @param callable $value_compare_func The comparison function must return an integer less than, equal to, or greater than zero if the first argument is considered to be respectively less than, equal to, or greater than the second.
 * @param callable $key_compare_func The comparison of keys (indices) is done also by the callback function key_compare_func. This behaviour is unlike what array_udiff_assoc does, since the latter compares the indices by using an internal function.
 * @return array
 */
/**
 * @param array|callable $rest
 * @refcount 1
 */
function array_udiff_uassoc(array $array, ...$rest): array {}

/** @genstubs-expose-comment-block
 * Sort multiple or multi-dimensional arrays
 * @param array $array1 An array being sorted.
 * @param mixed $array1_sort_order The order used to sort the previous array argument. Either SORT_ASC to sort ascendingly or SORT_DESC to sort descendingly.
 * @param mixed $array1_sort_flags Sort options for the previous array argument:
 * @param mixed $rest More arrays, optionally followed by sort order and flags. Only elements corresponding to equivalent elements in previous arrays are compared. In other words, the sort is lexicographical.
 * @return bool
 */
/**
 * @param array $array
 * @param array|int $rest
 * @prefer-ref $array
 * @prefer-ref $rest
 */
function array_multisort(&$array, &...$rest): true {}

/** @genstubs-expose-comment-block
 * Pick one or more random keys out of an array
 * @param array $array The input array. Cannot be empty.
 * @param int $num Specifies how many entries should be picked. Must be greater than zero, and less than or equal to the length of array
 * @return int|string|array
 */
/** @return int|string|array<int, int|string> */
function array_rand(array $array, int $num = 1): int|string|array {}

/** @genstubs-expose-comment-block
 * Calculate the sum of values in an array
 * @param array $array The input array.
 * @return int|float
 */
/**
 * @compile-time-eval
 */
function array_sum(array $array): int|float {}

/** @genstubs-expose-comment-block
 * Calculate the product of values in an array
 * @param array $array The array.
 * @return int|float
 */
/**
 * @compile-time-eval
 */
function array_product(array $array): int|float {}

/** @genstubs-expose-comment-block
 * Iteratively reduce the array to a single value using a callback function
 * @param array $array The input array.
 * @param callable $callback Holds the return value of the previous iteration; in the case of the first iteration it instead holds the value of initial.
 * @param mixed $initial If the optional initial is available, it will be used at the beginning of the process, or as a final result in case the array is empty.
 * @return mixed
 */
function array_reduce(array $array, callable $callback, mixed $initial = null): mixed {}

/** @genstubs-expose-comment-block
 * Filters elements of an array using a callback function
 * @param array $array The array to iterate over
 * @param callable|null $callback The callback function to use
 * @param int $mode Flag determining what arguments are sent to callback: ARRAY_FILTER_USE_KEY - pass key as the only argument to callback instead of the value ARRAY_FILTER_USE_BOTH - pass both value and key as arguments to callback instead of the value Default is 0 which will pass value as the only argument to callback instead.
 * @return array
 */
function array_filter(array $array, ?callable $callback = null, int $mode = ARRAY_FILTER_USE_KEY): array {}

/** @genstubs-expose-comment-block
 * Returns the first element satisfying a callback function
 * @return mixed
 */
function array_find(array $array, callable $callback): mixed {}

/** @genstubs-expose-comment-block
 * Returns the key of the first element satisfying a callback function
 * @return mixed
 */
function array_find_key(array $array, callable $callback): mixed {}

/** @genstubs-expose-comment-block
 * Checks if at least one array element satisfies a callback function
 * @return bool
 */
function array_any(array $array, callable $callback): bool {}

/** @genstubs-expose-comment-block
 * Checks if all array elements satisfy a callback function
 * @return bool
 */
function array_all(array $array, callable $callback): bool {}

/** @genstubs-expose-comment-block
 * Applies the callback to the elements of the given arrays
 * @param callable|null $callback A callable to run for each element in each array.
 * @param array $array An array to run through the callback function.
 * @param array $arrays Supplementary variable list of array arguments to run through the callback function.
 * @return array
 */
function array_map(?callable $callback, array $array, array ...$arrays): array {}

/** @genstubs-expose-comment-block
 * Checks if the given key or index exists in the array
 * @param string|int|float|bool|resource|null $key Value to check.
 * @param array $array An array with keys to check.
 * @return bool
 */
/**
 * @param string|int $key
 * @compile-time-eval
 */
function array_key_exists($key, array $array): bool {}

/** @genstubs-expose-comment-block
 * Alias array_key_exists
 */
/**
 * @param string|int $key
 * @alias array_key_exists
 */
function key_exists($key, array $array): bool {}

/** @genstubs-expose-comment-block
 * Split an array into chunks
 * @param array $array The array to work on
 * @param int $length The size of each chunk
 * @param bool $preserve_keys When set to true keys will be preserved. Default is false which will reindex the chunk numerically
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_chunk(array $array, int $length, bool $preserve_keys = false): array {}

/** @genstubs-expose-comment-block
 * Creates an array by using one array for keys and another for its values
 * @param array $keys Array of keys to be used. Illegal values for key will be converted to string.
 * @param array $values Array of values to be used
 * @return array
 */
/**
 * @compile-time-eval
 */
function array_combine(array $keys, array $values): array {}

/** @genstubs-expose-comment-block
 * Checks whether a given array is a list
 * @param array $array The array being evaluated.
 * @return bool
 */
/** @compile-time-eval */
function array_is_list(array $array): bool {}

/* base64.c */

/** @genstubs-expose-comment-block
 * Encodes data with MIME base64
 * @param string $string The data to encode.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function base64_encode(string $string): string {}

/** @genstubs-expose-comment-block
 * Decodes data encoded with MIME base64
 * @param string $string The encoded data.
 * @param bool $strict If the strict parameter is set to true then the base64_decode function will return false if the input contains character from outside the base64 alphabet. Otherwise invalid characters will be silently discarded.
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function base64_decode(string $string, bool $strict = false): string|false {}

/* basic_functions.c */

/** @genstubs-expose-comment-block
 * Returns the value of a constant
 * @param string $name The constant name.
 * @return mixed
 */
function constant(string $name): mixed {}

/** @genstubs-expose-comment-block
 * Converts a string containing an (IPv4) Internet Protocol dotted address into a long integer
 * @param string $ip A standard format address.
 * @return int|false
 */
function ip2long(string $ip): int|false {}

/** @genstubs-expose-comment-block
 * Converts a long integer address into a string in (IPv4) Internet standard dotted format
 * @param int $ip A proper address representation in long integer.
 * @return string
 */
/** @refcount 1 */
function long2ip(int $ip): string {}

/** @genstubs-expose-comment-block
 * Gets the value of a single or all environment variables
 * @param string|null $name The variable name as a string or null.
 * @param bool $local_only When set to true, only local environment variables are returned, set by the operating system or putenv. It only has an effect when name is a string.
 * @return string|array|false
 */
/**
 * @return string|array<string, string>|false
 * @refcount 1
 */
function getenv(?string $name = null, bool $local_only = false): string|array|false {}

#ifdef HAVE_PUTENV
/** @genstubs-expose-comment-block
 * Sets the value of an environment variable
 * @param string $assignment The setting, like "FOO=BAR"
 * @return bool
 */
function putenv(string $assignment): bool {}
#endif

/** @genstubs-expose-comment-block
 * Gets options from the command line argument list
 * @return array|false
 */
/**
 * @param int $rest_index
 * @return array<int|string, string|array|false>|false
 * @refcount 1
 */
function getopt(string $short_options, array $long_options = [], &$rest_index = null): array|false {}

/** @genstubs-expose-comment-block
 * Flush system output buffer
 * @return void
 */
function flush(): void {}

/** @genstubs-expose-comment-block
 * Delay execution
 * @param int $seconds Halt time in seconds (must be greater than or equal to 0).
 * @return int
 */
function sleep(int $seconds): int {}

/** @genstubs-expose-comment-block
 * Delay execution in microseconds
 * @param int $microseconds Halt time in microseconds. A microsecond is one millionth of a second.
 * @return void
 */
function usleep(int $microseconds): void {}

#ifdef HAVE_NANOSLEEP
/** @genstubs-expose-comment-block
 * Delay for a number of seconds and nanoseconds
 * @param int $seconds Must be a non-negative integer.
 * @param int $nanoseconds Must be a non-negative integer less than 1 billion.
 * @return array|bool
 */
/**
 * @return array<string, int>|bool
 * @refcount 1
 */
function time_nanosleep(int $seconds, int $nanoseconds): array|bool {}

/** @genstubs-expose-comment-block
 * Make the script sleep until the specified time
 * @param float $timestamp The timestamp when the script should wake.
 * @return bool
 */
function time_sleep_until(float $timestamp): bool {}
#endif

/** @genstubs-expose-comment-block
 * Gets the name of the owner of the current PHP script
 * @return string
 */
/** @refcount 1 */
function get_current_user(): string {}

/** @genstubs-expose-comment-block
 * Gets the value of a PHP configuration option
 * @param string $option The configuration option name.
 * @return string|array|false
 */
/** @return string|array<int|string, string|array>|false */
function get_cfg_var(string $option): string|array|false {}

/** @genstubs-expose-comment-block
 * Send an error message to the defined error handling routines
 * @param string $message The error message that should be logged.
 * @param int $message_type Says where the error should go. The possible message types are as follows:
 * @param string|null $destination The destination. Its meaning depends on the message_type parameter as described above.
 * @param string|null $additional_headers The extra headers. It's used when the message_type parameter is set to 1. This message type uses the same internal function as mail does.
 * @return bool
 */
function error_log(string $message, int $message_type = 0, ?string $destination = null, ?string $additional_headers = null): bool {}

/** @genstubs-expose-comment-block
 * Get the last occurred error
 * @return array|null
 */
/**
 * @return array<string, int|string|array>|null
 * @refcount 1
 */
function error_get_last(): ?array {}

/** @genstubs-expose-comment-block
 * Clear the most recent error
 * @return void
 */
function error_clear_last(): void {}

/** @genstubs-expose-comment-block
 * Call the callback given by the first parameter
 * @param callable $callback The callable to be called.
 * @param mixed $args Zero or more parameters to be passed to the callback.
 * @return mixed
 */
function call_user_func(callable $callback, mixed ...$args): mixed {}

/** @genstubs-expose-comment-block
 * Call a callback with an array of parameters
 * @param callable $callback The callable to be called.
 * @param array $args The parameters to be passed to the callback, as an array.
 * @return mixed
 */
function call_user_func_array(callable $callback, array $args): mixed {}

/** @genstubs-expose-comment-block
 * Call a static method
 * @param callable $callback The function or method to be called. This parameter may be an array, with the name of the class, and the method, or a string, with a function name.
 * @param mixed $args Zero or more parameters to be passed to the function.
 * @return mixed
 */
function forward_static_call(callable $callback, mixed ...$args): mixed {}

/** @genstubs-expose-comment-block
 * Call a static method and pass the arguments as array
 * @param callable $callback The function or method to be called. This parameter may be an array, with the name of the class, and the method, or a string, with a function name.
 * @param array $args One parameter, gathering all the method parameter in one array.
 * @return mixed
 */
function forward_static_call_array(callable $callback, array $args): mixed {}

/** @genstubs-expose-comment-block
 * Register a function for execution on shutdown
 * @param callable $callback The shutdown callback to register.
 * @param mixed $args It is possible to pass parameters to the shutdown function by passing additional parameters.
 * @return void
 */
function register_shutdown_function(callable $callback, mixed ...$args): void {}

/** @genstubs-expose-comment-block
 * Syntax highlighting of a file
 * @param string $filename Path to the PHP file to be highlighted.
 * @param bool $return Set this parameter to true to make this function return the highlighted code.
 * @return string|bool
 */
/** @refcount 1 */
function highlight_file(string $filename, bool $return = false): string|bool {}

/** @genstubs-expose-comment-block
 * Alias highlight_file
 */
/** @alias highlight_file */
function show_source(string $filename, bool $return = false): string|bool {}

/** @genstubs-expose-comment-block
 * Return source with stripped comments and whitespace
 * @param string $filename Path to the PHP file.
 * @return string
 */
/** @refcount 1 */
function php_strip_whitespace(string $filename): string {}

/** @genstubs-expose-comment-block
 * Syntax highlighting of a string
 * @param string $string The PHP code to be highlighted. This should include the opening tag.
 * @param bool $return Set this parameter to true to make this function return the highlighted code.
 * @return string|true
 */
/** @refcount 1 */
function highlight_string(string $string, bool $return = false): string|true {}

/** @genstubs-expose-comment-block
 * Gets the value of a configuration option
 * @param string $option The configuration option name.
 * @return string|false
 */
function ini_get(string $option): string|false {}

/** @genstubs-expose-comment-block
 * Gets all configuration options
 * @param string|null $extension An optional extension name. If not null or the string core, the function returns only options specific for that extension.
 * @param bool $details Retrieve details settings or only the current value for each setting. Default is true (retrieve details).
 * @return array|false
 */
/**
 * @return array<string, string|array|null>|false
 * @refcount 1
 */
function ini_get_all(?string $extension = null, bool $details = true): array|false {}

/** @genstubs-expose-comment-block
 * Sets the value of a configuration option
 * @param string|int|float|bool|null $value The new value for the option.
 * @return string|false
 */
function ini_set(string $option, string|int|float|bool|null $value): string|false {}

/** @genstubs-expose-comment-block
 * Alias ini_set
 */
/** @alias ini_set */
function ini_alter(string $option, string|int|float|bool|null $value): string|false {}

/** @genstubs-expose-comment-block
 * Restores the value of a configuration option
 * @param string $option The configuration option name.
 * @return void
 */
function ini_restore(string $option): void {}

/** @genstubs-expose-comment-block
 * Get interpreted size from ini shorthand syntax
 * @param string $shorthand Ini shorthand to parse, must be a number followed by an optional multiplier. The following multipliers are supported: kK (1024), mM (1048576), gG (1073741824). The number can be a decimal, hex (prefixed with 0x or 0X), octal (prefixed with 0o, 0O or 0) or binary (prefixed with 0b or 0B)
 * @return int
 */
function ini_parse_quantity(string $shorthand): int {}

/** @genstubs-expose-comment-block
 * Sets the include_path configuration option
 * @param string $include_path The new value for the include_path
 * @return string|false
 */
/** @refcount 1 */
function set_include_path(string $include_path): string|false {}

/** @genstubs-expose-comment-block
 * Gets the current include_path configuration option
 * @return string|false
 */
function get_include_path(): string|false {}

/** @genstubs-expose-comment-block
 * Prints human-readable information about a variable
 * @param mixed $value The expression to be printed.
 * @param bool $return If you would like to capture the output of print_r, use the return parameter.  When this parameter is set to true, print_r will return the information rather than print it.
 * @return string|true
 */
/** @refcount 1 */
function print_r(mixed $value, bool $return = false): string|true {}

/** @genstubs-expose-comment-block
 * Check whether client disconnected
 * @return int
 */
function connection_aborted(): int {}

/** @genstubs-expose-comment-block
 * Returns connection status bitfield
 * @return int
 */
function connection_status(): int {}

/** @genstubs-expose-comment-block
 * Set whether a client disconnect should abort script execution
 * @param bool|null $enable If set and not null, this function will set the ignore_user_abort ini setting to the given enable. Otherwise, this function will only return the previous setting without changing it.
 * @return int
 */
function ignore_user_abort(?bool $enable = null): int {}

#ifdef HAVE_GETSERVBYNAME
/** @genstubs-expose-comment-block
 * Get port number associated with an Internet service and protocol
 * @param string $service The Internet service name, as a string.
 * @param string $protocol protocol is either "tcp" or "udp" (in lowercase).
 * @return int|false
 */
function getservbyname(string $service, string $protocol): int|false {}
#endif

#ifdef HAVE_GETSERVBYPORT
/** @genstubs-expose-comment-block
 * Get Internet service which corresponds to port and protocol
 * @param int $port The port number.
 * @param string $protocol protocol is either "tcp" or "udp" (in lowercase).
 * @return string|false
 */
/** @refcount 1 */
function getservbyport(int $port, string $protocol): string|false {}
#endif

#ifdef HAVE_GETPROTOBYNAME
/** @genstubs-expose-comment-block
 * Get protocol number associated with protocol name
 * @param string $protocol The protocol name.
 * @return int|false
 */
function getprotobyname(string $protocol): int|false {}
#endif

#ifdef HAVE_GETPROTOBYNUMBER
/** @genstubs-expose-comment-block
 * Get protocol name associated with protocol number
 * @param int $protocol The protocol number.
 * @return string|false
 */
/** @refcount 1 */
function getprotobynumber(int $protocol): string|false {}
#endif

/** @genstubs-expose-comment-block
 * Register a function for execution on each tick
 * @param callable $callback The function to register.
 * @return bool
 */
function register_tick_function(callable $callback, mixed ...$args): bool {}

/** @genstubs-expose-comment-block
 * De-register a function for execution on each tick
 * @param callable $callback The function to de-register.
 * @return void
 */
function unregister_tick_function(callable $callback): void {}

/** @genstubs-expose-comment-block
 * Tells whether the file was uploaded via HTTP POST
 * @param string $filename The filename being checked.
 * @return bool
 */
function is_uploaded_file(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Moves an uploaded file to a new location
 * @param string $from The filename of the uploaded file.
 * @param string $to The destination of the moved file.
 * @return bool
 */
function move_uploaded_file(string $from, string $to): bool {}

/** @genstubs-expose-comment-block
 * Parse a configuration file
 * @param string $filename The filename of the ini file being parsed. If a relative path is used, it is evaluated relative to the current working directory, then the include_path.
 * @param bool $process_sections By setting the process_sections parameter to true, you get a multidimensional array, with the section names and settings included. The default for process_sections is false
 * @param int $scanner_mode Can either be INI_SCANNER_NORMAL (default) or INI_SCANNER_RAW. If INI_SCANNER_RAW is supplied, then option values will not be parsed.
 * @return array|false
 */
/**
 * @return array<int|string, bool|int|float|string|array|null>|false
 * @refcount 1
 */
function parse_ini_file(string $filename, bool $process_sections = false, int $scanner_mode = INI_SCANNER_NORMAL): array|false {}

/** @genstubs-expose-comment-block
 * Parse a configuration string
 * @param string $ini_string The contents of the ini file being parsed.
 * @param bool $process_sections By setting the process_sections parameter to true, you get a multidimensional array, with the section names and settings included. The default for process_sections is false
 * @param int $scanner_mode Can either be INI_SCANNER_NORMAL (default) or INI_SCANNER_RAW. If INI_SCANNER_RAW is supplied, then option values will not be parsed.
 * @return array|false
 */
/**
 * @return array<int|string, bool|int|float|string|array|null>|false
 * @compile-time-eval
 * @refcount 1
 */
function parse_ini_string(string $ini_string, bool $process_sections = false, int $scanner_mode = INI_SCANNER_NORMAL): array|false {}

#if ZEND_DEBUG
/**
 * @return array<string, string|array>
 * @refcount 1
 */
function config_get_hash(): array {}
#endif

#ifdef HAVE_GETLOADAVG
/** @genstubs-expose-comment-block
 * Gets system load average
 * @return array|false
 */
/**
 * @return array<int, float>|false
 * @refcount 1
 */
function sys_getloadavg(): array|false {}
#endif

/* browscap.c */

/** @genstubs-expose-comment-block
 * Tells what the user's browser is capable of
 * @param string|null $user_agent The User Agent to be analyzed. By default, the value of HTTP User-Agent header is used; however, you can alter this (i.e., look up another browser's info) by passing this parameter.
 * @param bool $return_array If set to true, this function will return an array instead of an object.
 * @return object|array|false
 */
/**
 * @return object|array<string, mixed>|false
 * @refcount 1
 */
function get_browser(?string $user_agent = null, bool $return_array = false): object|array|false {}

/* crc32.c */

/** @genstubs-expose-comment-block
 * Calculates the crc32 polynomial of a string
 * @param string $string The data.
 * @return int
 */
/** @compile-time-eval */
function crc32(string $string): int {}

/* crypt.c */

/** @genstubs-expose-comment-block
 * One-way string hashing
 * @param string $string The string to be hashed.
 * @param string $salt A salt string to base the hashing on. If not provided, the behaviour is defined by the algorithm implementation and can lead to unexpected results.
 * @return string
 */
/** @refcount 1 */
function crypt(#[\SensitiveParameter] string $string, string $salt): string {}

/* datetime.c */

#ifdef HAVE_STRPTIME
/**
 * @return array<string, int|string>|false
 * @refcount 1
 */
#[\Deprecated(since: '8.2', message: 'use date_parse_from_format() (for locale-independent parsing), or IntlDateFormatter::parse() (for locale-dependent parsing) instead')]
/** @genstubs-expose-comment-block
 * Parse a time/date generated with strftime
 * @param string $timestamp The string to parse (e.g. returned from strftime).
 * @param string $format The format used in timestamp (e.g. the same as used in strftime). Note that some of the format options available to strftime may not have any effect within strptime; the exact subset that are supported will vary based on the operating system and C library in use.
 * @return array|false
 */
function strptime(string $timestamp, string $format): array|false {}
#endif

/* dns.c */

#ifdef HAVE_GETHOSTNAME
/** @genstubs-expose-comment-block
 * Gets the host name
 * @return string|false
 */
/** @refcount 1 */
function gethostname(): string|false {}
#endif

/** @genstubs-expose-comment-block
 * Get the Internet host name corresponding to a given IP address
 * @param string $ip The host IP address.
 * @return string|false
 */
/** @refcount 1 */
function gethostbyaddr(string $ip): string|false {}

/** @genstubs-expose-comment-block
 * Get the IPv4 address corresponding to a given Internet host name
 * @param string $hostname The host name.
 * @return string
 */
/** @refcount 1 */
function gethostbyname(string $hostname): string {}

/** @genstubs-expose-comment-block
 * Get a list of IPv4 addresses corresponding to a given Internet host
 * name
 * @param string $hostname The host name.
 * @return array|false
 */
/**
 * @return array<int, string>|false
 * @refcount 1
 */
function gethostbynamel(string $hostname): array|false {}

#if (defined(PHP_WIN32) || defined(HAVE_DNS_SEARCH_FUNC))
/** @genstubs-expose-comment-block
 * Alias checkdnsrr
 */
function dns_check_record(string $hostname, string $type = "MX"): bool {}

/** @genstubs-expose-comment-block
 * Check DNS records corresponding to a given Internet host name or IP address
 * @param string $hostname hostname may either be the IP address in dotted-quad notation or the host name.
 * @param string $type type may be any one of: A, MX, NS, SOA, PTR, CNAME, AAAA, A6, SRV, NAPTR, TXT or ANY.
 * @return bool
 */
/** @alias dns_check_record */
function checkdnsrr(string $hostname, string $type = "MX"): bool {}

/** @genstubs-expose-comment-block
 * Fetch DNS Resource Records associated with a hostname
 * @param string $hostname hostname should be a valid DNS hostname such as "www.example.com". Reverse lookups can be generated using in-addr.arpa notation, but gethostbyaddr is more suitable for the majority of reverse lookups.
 * @param int $type By default, dns_get_record will search for any resource records associated with hostname. To limit the query, use one of the DNS_* constants.
 * @param array $authoritative_name_servers Passed by reference and, if given, will be populated with Resource Records for the Authoritative Name Servers.
 * @param array $additional_records Passed by reference and, if given, will be populated with any Additional Records.
 * @param bool $raw The type will be interpreted as a raw DNS type ID (the DNS_* constants cannot be used). The return value will contain a data key, which needs to be manually parsed.
 * @return array|false
 */
/**
 * @param array $authoritative_name_servers
 * @param array $additional_records
 * @return array<int, array>|false
 * @refcount 1
 */
function dns_get_record(string $hostname, int $type = DNS_ANY, &$authoritative_name_servers = null, &$additional_records = null, bool $raw = false): array|false {}

/** @genstubs-expose-comment-block
 * Alias getmxrr
 */
/**
 * @param array $hosts
 * @param array $weights
 */
function dns_get_mx(string $hostname, &$hosts, &$weights = null): bool {}

/** @genstubs-expose-comment-block
 * Get MX records corresponding to a given Internet host name
 * @param string $hostname The Internet host name.
 * @param array $hosts A list of the MX records found is placed into the array hosts.
 * @param array $weights If the weights array is given, it will be filled with the weight information gathered.
 * @return bool
 */
/**
 * @param array $hosts
 * @param array $weights
 * @alias dns_get_mx
 */
function getmxrr(string $hostname, &$hosts, &$weights = null): bool {}
#endif

/* net.c */

#if (defined(PHP_WIN32) || defined(HAVE_GETIFADDRS) || defined(__PASE__))
/** @genstubs-expose-comment-block
 * Get network interfaces
 * @return array|false
 */
function net_get_interfaces(): array|false {}
#endif

/* ftok.c */

#ifdef HAVE_FTOK
/** @genstubs-expose-comment-block
 * Convert a pathname and a project identifier to a System V IPC key
 * @return int
 */
function ftok(string $filename, string $project_id): int {}
#endif

/* hrtime.c */

/** @genstubs-expose-comment-block
 * Get the system's high resolution time
 * @param bool $as_number Whether the high resolution time should be returned as array or number.
 * @return array|int|float|false
 */
function hrtime(bool $as_number = false): array|int|float|false {}

/* md5.c */

/** @genstubs-expose-comment-block
 * Calculate the md5 hash of a string
 * @param string $string The string.
 * @param bool $binary If the optional binary is set to true, then the md5 digest is instead returned in raw binary format with a length of 16.
 * @return string
 */
/** @refcount 1 */
function md5(string $string, bool $binary = false): string {}

/** @genstubs-expose-comment-block
 * Calculates the md5 hash of a given file
 * @param string $filename The filename
 * @param bool $binary When true, returns the digest in raw binary format with a length of 16.
 * @return string|false
 */
/** @refcount 1 */
function md5_file(string $filename, bool $binary = false): string|false {}

/* pageinfo.c */

/** @genstubs-expose-comment-block
 * Gets PHP script owner's UID
 * @return int|false
 */
function getmyuid(): int|false {}

/** @genstubs-expose-comment-block
 * Get PHP script owner's GID
 * @return int|false
 */
function getmygid(): int|false {}

/** @genstubs-expose-comment-block
 * Gets PHP's process ID
 * @return int|false
 */
function getmypid(): int|false {}

/** @genstubs-expose-comment-block
 * Gets the inode of the current script
 * @return int|false
 */
function getmyinode(): int|false {}

/** @genstubs-expose-comment-block
 * Gets time of last page modification
 * @return int|false
 */
function getlastmod(): int|false {}

/* sha1.c */

/** @genstubs-expose-comment-block
 * Calculate the sha1 hash of a string
 * @param string $string The input string.
 * @param bool $binary If the optional binary is set to true, then the sha1 digest is instead returned in raw binary format with a length of 20, otherwise the returned value is a 40-character hexadecimal number.
 * @return string
 */
/** @refcount 1 */
function sha1(string $string, bool $binary = false): string {}

/** @genstubs-expose-comment-block
 * Calculate the sha1 hash of a file
 * @param string $filename The filename of the file to hash.
 * @param bool $binary When true, returns the digest in raw binary format with a length of 20.
 * @return string|false
 */
/** @refcount 1 */
function sha1_file(string $filename, bool $binary = false): string|false {}

/* syslog.c */

#ifdef HAVE_SYSLOG_H
/** @genstubs-expose-comment-block
 * Open connection to system logger
 * @param string $prefix The string prefix is added to each message.
 * @param int $flags Bitmask of the following constants: LOG_CONS LOG_NDELAY LOG_ODELAY LOG_NOWAIT LOG_PERROR LOG_PID
 * @param int $facility The facility argument is used to specify what type of program is logging the message. This lets the configuration file specify that messages from different facilities will be handled differently. Must be one of the following constants: LOG_AUTH LOG_AUTHPRIV LOG_CRON LOG_DAEMON LOG_KERN LOG_LOCAL[0-7] LOG_LPR LOG_MAIL LOG_NEWS LOG_SYSLOG LOG_USER LOG_UUCP
 * @return true
 */
function openlog(string $prefix, int $flags, int $facility): true {}

/** @genstubs-expose-comment-block
 * Close connection to system logger
 * @return true
 */
function closelog(): true {}

/** @genstubs-expose-comment-block
 * Generate a system log message
 * @param int $priority One of the LOG_EMERG LOG_ALERT LOG_CRIT LOG_ERR LOG_WARNING LOG_NOTICE LOG_INFO LOG_DEBUG constants.
 * @param string $message The message to send.
 * @return true
 */
function syslog(int $priority, string $message): true {}
#endif

/** @genstubs-expose-comment-block
 * Converts a packed internet address to a human readable representation
 * @param string $ip A 32bit IPv4, or 128bit IPv6 address.
 * @return string|false
 */
/** @refcount 1 */
function inet_ntop(string $ip): string|false {}

/** @genstubs-expose-comment-block
 * Converts a human readable IP address to its packed in_addr representation
 * @param string $ip A human readable IPv4 or IPv6 address.
 * @return string|false
 */
/** @refcount 1 */
function inet_pton(string $ip): string|false {}

/* metaphone.c */

/** @genstubs-expose-comment-block
 * Calculate the metaphone key of a string
 * @param string $string The input string.
 * @param int $max_phonemes This parameter restricts the returned metaphone key to max_phonemes characters in length. However, the resulting phonemes are always transcribed completely, so the resulting string length may be slightly longer than max_phonemes. The default value of 0 means no restriction.
 * @return string
 */
/** @refcount 1 */
function metaphone(string $string, int $max_phonemes = 0): string {}
/** @genstubs-expose-comment-block
 * Send a raw HTTP header
 * @param string $header The header string.
 * @param bool $replace The optional replace parameter indicates whether the header should replace a previous similar header, or add a second header of the same type.  By default it will replace, but if you pass in false as the second argument you can force multiple headers of the same type.  For example:
 * @param int $response_code Forces the HTTP response code to the specified value. Note that this parameter only has an effect if the header is not empty.
 * @return void
 */

/* {{{ head.c */
function header(string $header, bool $replace = true, int $response_code = 0): void {}

/** @genstubs-expose-comment-block
 * Remove previously set headers
 * @param string|null $name The header name to be removed. When null, all previously set headers are removed.
 * @return void
 */
function header_remove(?string $name = null): void {}

/** @genstubs-expose-comment-block
 * Send a cookie without urlencoding the cookie value
 * @return bool|bool
 */
function setrawcookie(string $name, string $value = "", array|int $expires_or_options = 0, string $path = "", string $domain = "", bool $secure = false, bool $httponly = false): bool {}

/** @genstubs-expose-comment-block
 * Send a cookie
 * @return bool|bool
 */
function setcookie(string $name, string $value = "", array|int $expires_or_options = 0, string $path = "", string $domain = "", bool $secure = false, bool $httponly = false): bool {}

/** @genstubs-expose-comment-block
 * Get or Set the HTTP response code
 * @param int $response_code The optional response_code will set the response code.
 * @return int|bool
 */
function http_response_code(int $response_code = 0): int|bool {}

/** @genstubs-expose-comment-block
 * Checks if or where headers have been sent
 * @param string $filename If the optional filename and line parameters are set, headers_sent will put the PHP source file name and line number where output started in the filename and line variables.
 * @param int $line The line number where the output started.
 * @return bool
 */
/**
 * @param string $filename
 * @param int $line
 */
function headers_sent(&$filename = null, &$line = null): bool {}

/** @genstubs-expose-comment-block
 * Returns a list of response headers sent (or ready to send)
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function headers_list(): array {}

/* {{{ html.c */

/** @genstubs-expose-comment-block
 * Convert special characters to HTML entities
 * @param string $string The string being converted.
 * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes, invalid code unit sequences and the used document type. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_IGNORE Silently discard invalid code unit sequences instead of returning an empty string. Using this flag is discouraged as it may have security implications. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_DISALLOWED Replace invalid code points for the given document type with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of leaving them as is. This may be useful, for instance, to ensure the well-formedness of XML documents with embedded external content. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.
 * @param string|null $encoding An optional argument defining the encoding used when converting characters.
 * @param bool $double_encode When double_encode is turned off PHP will not encode existing html entities, the default is to convert everything.
 * @return string
 */
/** @refcount 1 */
function htmlspecialchars(string $string, int $flags = ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401, ?string $encoding = null, bool $double_encode = true): string {}

/** @genstubs-expose-comment-block
 * Convert special HTML entities back to characters
 * @param string $string The string to decode.
 * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes and which document type to use. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.
 * @return string
 */
function htmlspecialchars_decode(string $string, int $flags = ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401): string {}

/** @genstubs-expose-comment-block
 * Convert HTML entities to their corresponding characters
 * @param string $string The input string.
 * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes and which document type to use. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.
 * @param string|null $encoding An optional argument defining the encoding used when converting characters.
 * @return string
 */
function html_entity_decode(string $string, int $flags = ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401, ?string $encoding = null): string {}

/** @genstubs-expose-comment-block
 * Convert all applicable characters to HTML entities
 * @param string $string The input string.
 * @param int $flags A bitmask of one or more of the following flags, which specify how to handle quotes, invalid code unit sequences and the used document type. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Will convert double-quotes and leave single-quotes alone. ENT_QUOTES Will convert both double and single quotes. ENT_NOQUOTES Will leave both double and single quotes unconverted. ENT_IGNORE Silently discard invalid code unit sequences instead of returning an empty string. Using this flag is discouraged as it may have security implications. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#FFFD; (otherwise) instead of returning an empty string. ENT_DISALLOWED Replace invalid code points for the given document type with a Unicode Replacement Character U+FFFD (UTF-8) or &#FFFD; (otherwise) instead of leaving them as is. This may be useful, for instance, to ensure the well-formedness of XML documents with embedded external content. ENT_HTML401 Handle code as HTML 4.01. ENT_XML1 Handle code as XML 1. ENT_XHTML Handle code as XHTML. ENT_HTML5 Handle code as HTML 5.
 * @param string|null $encoding An optional argument defining the encoding used when converting characters.
 * @param bool $double_encode When double_encode is turned off PHP will not encode existing html entities. The default is to convert everything.
 * @return string
 */
/** @refcount 1 */
function htmlentities(string $string, int $flags = ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401, ?string $encoding = null, bool $double_encode = true): string {}

/** @genstubs-expose-comment-block
 * Returns the translation table used by htmlspecialchars and htmlentities
 * @param int $table Which table to return. Either HTML_ENTITIES or HTML_SPECIALCHARS.
 * @param int $flags A bitmask of one or more of the following flags, which specify which quotes the table will contain as well as which document type the table is for. The default is ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401. Available flags constants Constant Name Description ENT_COMPAT Table will contain entities for double-quotes, but not for single-quotes. ENT_QUOTES Table will contain entities for both double and single quotes. ENT_NOQUOTES Table will neither contain entities for single quotes nor for double quotes. ENT_SUBSTITUTE Replace invalid code unit sequences with a Unicode Replacement Character U+FFFD (UTF-8) or &#xFFFD; (otherwise) instead of returning an empty string. ENT_HTML401 Table for HTML 4.01. ENT_XML1 Table for XML 1. ENT_XHTML Table for XHTML. ENT_HTML5 Table for HTML 5.
 * @param string $encoding Encoding to use. If omitted, the default value for this argument is UTF-8.
 * @return array
 */
/**
 * @return array<string, string>
 * @refcount 1
 */
function get_html_translation_table(int $table = HTML_SPECIALCHARS, int $flags = ENT_QUOTES | ENT_SUBSTITUTE | ENT_HTML401, string $encoding = "UTF-8"): array {}

/* }}} */

/* assert.c */

/** @genstubs-expose-comment-block
 * Checks an assertion
 * @param mixed $assertion This is any expression that returns a value, which will be executed and the result is used to indicate whether the assertion succeeded or failed.
 * @param Throwable|string|null $description If description is an instance of Throwable, it will be thrown only if the assertion is executed and fails. As of PHP 8.0.0, this is done prior to calling the potentially defined assertion callback. As of PHP 8.0.0, the object will be thrown regardless of the configuration of assert.exception. As of PHP 8.0.0, the assert.bail setting has no effect in this case.
 * @return bool|void|void
 */
function assert(mixed $assertion, Throwable|string|null $description = null): bool {}

#[\Deprecated(since: '8.3')]
/** @genstubs-expose-comment-block
 * Set/get the various assert flags
 * @param int $option Assert Options Option INI Setting Default value Description ASSERT_ACTIVE assert.active 1 enable assert evaluation ASSERT_EXCEPTION assert.exception 1 throws an AssertionError for each failed assertions ASSERT_WARNING assert.warning 1 issue a PHP warning for each failed assertion ASSERT_BAIL assert.bail 0 terminate execution on failed assertions ASSERT_QUIET_EVAL assert.quiet_eval 0 disable error_reporting during assertion expression evaluation. Removed as of PHP 8.0.0. ASSERT_CALLBACK assert.callback (null) Callback to call on failed assertions
 * @param mixed $value An optional new value for the option.
 * @return mixed
 */
function assert_options(int $option, mixed $value = UNKNOWN): mixed {}

/* string.c */

/** @genstubs-expose-comment-block
 * Convert binary data into hexadecimal representation
 * @param string $string A string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function bin2hex(string $string): string {}

/** @genstubs-expose-comment-block
 * Decodes a hexadecimally encoded binary string
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function hex2bin(string $string): string|false {}

/** @genstubs-expose-comment-block
 * Finds the length of the initial segment of a string consisting
 * entirely of characters contained within a given mask
 * @param string $string The string to examine.
 * @param string $characters The list of allowable characters.
 * @param int $offset The position in string to start searching.
 * @param int|null $length The length of the segment from string to examine.
 * @return int
 */
/**
 * @compile-time-eval
 */
function strspn(string $string, string $characters, int $offset = 0, ?int $length = null): int {}

/** @genstubs-expose-comment-block
 * Find length of initial segment not matching mask
 * @param string $string The string to examine.
 * @param string $characters The string containing every disallowed character.
 * @param int $offset The position in string to start searching.
 * @param int|null $length The length of the segment from string to examine.
 * @return int
 */
/**
 * @compile-time-eval
 */
function strcspn(string $string, string $characters, int $offset = 0, ?int $length = null): int {}

#ifdef HAVE_NL_LANGINFO
/** @genstubs-expose-comment-block
 * Query language and locale information
 * @param int $item item may be an integer value of the element or the constant name of the element. The following is a list of constant names for item that may be used and their description. Some of these constants may not be defined or hold no value for certain locales. nl_langinfo Constants Constant Description LC_TIME Category Constants ABDAY_(1-7) Abbreviated name of n-th day of the week. DAY_(1-7) Name of the n-th day of the week (DAY_1 = Sunday). ABMON_(1-12) Abbreviated name of the n-th month of the year. MON_(1-12) Name of the n-th month of the year. AM_STR String for Ante meridian. PM_STR String for Post meridian. D_T_FMT String that can be used as the format string for strftime to represent time and date. D_FMT String that can be used as the format string for strftime to represent date. T_FMT String that can be used as the format string for strftime to represent time. T_FMT_AMPM String that can be used as the format string for strftime to represent time in 12-hour format with antepost meridian. ERA Alternate era. ERA_YEAR Year in alternate era format. ERA_D_T_FMT Date and time in alternate era format (string can be used in strftime). ERA_D_FMT Date in alternate era format (string can be used in strftime). ERA_T_FMT Time in alternate era format (string can be used in strftime). LC_MONETARY Category Constants INT_CURR_SYMBOL International currency symbol. CURRENCY_SYMBOL Local currency symbol. CRNCYSTR Same value as CURRENCY_SYMBOL. MON_DECIMAL_POINT Decimal point character. MON_THOUSANDS_SEP Thousands separator (groups of three digits). MON_GROUPING Like "grouping" element. POSITIVE_SIGN Sign for positive values. NEGATIVE_SIGN Sign for negative values. INT_FRAC_DIGITS International fractional digits. FRAC_DIGITS Local fractional digits. P_CS_PRECEDES Returns 1 if CURRENCY_SYMBOL precedes a positive value. P_SEP_BY_SPACE Returns 1 if a space separates CURRENCY_SYMBOL from a positive value. N_CS_PRECEDES Returns 1 if CURRENCY_SYMBOL precedes a negative value. N_SEP_BY_SPACE Returns 1 if a space separates CURRENCY_SYMBOL from a negative value. P_SIGN_POSN Returns 0 if parentheses surround the quantity and CURRENCY_SYMBOL. Returns 1 if the sign string precedes the quantity and CURRENCY_SYMBOL. Returns 2 if the sign string follows the quantity and CURRENCY_SYMBOL. Returns 3 if the sign string immediately precedes the CURRENCY_SYMBOL. Returns 4 if the sign string immediately follows the CURRENCY_SYMBOL. N_SIGN_POSN LC_NUMERIC Category Constants DECIMAL_POINT Decimal point character. RADIXCHAR Same value as DECIMAL_POINT. THOUSANDS_SEP Separator character for thousands (groups of three digits). THOUSEP Same value as THOUSANDS_SEP. GROUPING LC_MESSAGES Category Constants YESEXPR Regex string for matching "yes" input. NOEXPR Regex string for matching "no" input. YESSTR Output string for "yes". NOSTR Output string for "no". LC_CTYPE Category Constants CODESET Return a string with the name of the character encoding.
 * @return string|false
 */
/** @refcount 1 */
function nl_langinfo(int $item): string|false {}
#endif

/** @genstubs-expose-comment-block
 * Locale based string comparison
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @return int
 */
function strcoll(string $string1, string $string2): int {}

/** @genstubs-expose-comment-block
 * Strip whitespace (or other characters) from the beginning and end of a string
 * @return string
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 1}
 * @frameless-function {"arity": 2}
 */
function trim(string $string, string $characters = " \n\r\t\v\0"): string {}

/** @genstubs-expose-comment-block
 * Strip whitespace (or other characters) from the end of a string
 * @return string
 */
/** @compile-time-eval */
function rtrim(string $string, string $characters = " \n\r\t\v\0"): string {}

/** @genstubs-expose-comment-block
 * Alias rtrim
 */
/** @alias rtrim */
function chop(string $string, string $characters = " \n\r\t\v\0"): string {}

/** @genstubs-expose-comment-block
 * Strip whitespace (or other characters) from the beginning of a string
 * @return string
 */
/** @compile-time-eval */
function ltrim(string $string, string $characters = " \n\r\t\v\0"): string {}

/** @genstubs-expose-comment-block
 * Wraps a string to a given number of characters
 * @param string $string The input string.
 * @param int $width The number of characters at which the string will be wrapped.
 * @param string $break The line is broken using the optional break parameter. It must not be an empty string.
 * @param bool $cut_long_words If the cut_long_words is set to true, the string is always wrapped at or before the specified width.  So if you have a word that is larger than the given width, it is broken apart. (See second example). When false the function does not split the word even if the width is smaller than the word width.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function wordwrap(string $string, int $width = 75, string $break = "\n", bool $cut_long_words = false): string {}

/** @genstubs-expose-comment-block
 * Split a string by a string
 * @param string $separator The boundary string.
 * @param string $string The input string.
 * @param int $limit If limit is set and positive, the returned array will contain a maximum of limit elements with the last element containing the rest of string.
 * @return array
 */
/**
 * @return array<int, string>
 * @compile-time-eval
 * @refcount 1
 */
function explode(string $separator, string $string, int $limit = PHP_INT_MAX): array {}

/** @genstubs-expose-comment-block
 * Join array elements with a string
 * @param string $separator Optional. Defaults to an empty string.
 * @param array $array The array of strings to implode.
 * @return string|string|string
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 1}
 * @frameless-function {"arity": 2}
 */
function implode(string|array $separator, ?array $array = null): string {}

/** @genstubs-expose-comment-block
 * Alias implode
 */
/** @alias implode */
function join(string|array $separator, ?array $array = null): string {}

/** @genstubs-expose-comment-block
 * Tokenize string
 * @param string $string The string being split up into smaller strings (tokens).
 * @param string $token The delimiter used when splitting up string.
 * @return string|false|string|false
 */
/**
 * @refcount 1
 */
function strtok(string $string, ?string $token = null): string|false {}

/** @genstubs-expose-comment-block
 * Make a string uppercase
 * @param string $string The input string.
 * @return string
 */
/** @compile-time-eval */
function strtoupper(string $string): string {}

/** @genstubs-expose-comment-block
 * Make a string lowercase
 * @param string $string The input string.
 * @return string
 */
/** @compile-time-eval */
function strtolower(string $string): string {}

/** @genstubs-expose-comment-block
 * Increment an alphanumeric string
 * @param string $string The input string.
 * @return string
 */
function str_increment(string $string): string {}

/** @genstubs-expose-comment-block
 * Decrement an alphanumeric string
 * @param string $string The input string.
 * @return string
 */
function str_decrement(string $string): string {}

/** @genstubs-expose-comment-block
 * Returns trailing name component of path
 * @param string $path A path.
 * @param string $suffix If the name component ends in suffix this will also be cut off.
 * @return string
 */
/** @refcount 1 */
function basename(string $path, string $suffix = ""): string {}

/** @genstubs-expose-comment-block
 * Returns a parent directory's path
 * @param string $path A path.
 * @param int $levels The number of parent directories to go up.
 * @return string
 */
/**
 * @refcount 1
 * @frameless-function {"arity": 1}
 * @frameless-function {"arity": 2}
 */
function dirname(string $path, int $levels = 1): string {}

/** @genstubs-expose-comment-block
 * Returns information about a file path
 * @param string $path The path to be parsed.
 * @param int $flags If present, specifies a specific element to be returned; one of PATHINFO_DIRNAME, PATHINFO_BASENAME, PATHINFO_EXTENSION or PATHINFO_FILENAME.
 * @return array|string
 */
/**
 * @return array<string, string>|string
 * @refcount 1
 */
function pathinfo(string $path, int $flags = PATHINFO_ALL): array|string {}

/** @genstubs-expose-comment-block
 * Case-insensitive strstr
 * @param string $haystack The string to search in
 * @param string $needle The string to search for.
 * @param bool $before_needle If true, stristr returns the part of the haystack before the first occurrence of the needle (excluding needle).
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function stristr(string $haystack, string $needle, bool $before_needle = false): string|false {}

/** @genstubs-expose-comment-block
 * Find the first occurrence of a string
 * @param string $haystack The input string.
 * @param string $needle The string to search for.
 * @param bool $before_needle If true, strstr returns the part of the haystack before the first occurrence of the needle (excluding the needle).
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 * @frameless-function {"arity": 2}
 * @frameless-function {"arity": 3}
 */
function strstr(string $haystack, string $needle, bool $before_needle = false): string|false {}

/** @genstubs-expose-comment-block
 * Alias strstr
 */
/** @alias strstr */
function strchr(string $haystack, string $needle, bool $before_needle = false): string|false {}

/** @genstubs-expose-comment-block
 * Find the position of the first occurrence of a substring in a string
 * @param string $haystack The string to search in.
 * @param string $needle The string to search for.
 * @param int $offset If specified, search will start this number of characters counted from the beginning of the string. If the offset is negative, the search will start this number of characters counted from the end of the string.
 * @return int|false
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 * @frameless-function {"arity": 3}
 */
function strpos(string $haystack, string $needle, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Find the position of the first occurrence of a case-insensitive substring in a string
 * @param string $haystack The string to search in.
 * @param string $needle The string to search for.
 * @param int $offset If specified, search will start this number of characters counted from the beginning of the string. If the offset is negative, the search will start this number of characters counted from the end of the string.
 * @return int|false
 */
/** @compile-time-eval */
function stripos(string $haystack, string $needle, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Find the position of the last occurrence of a substring in a string
 * @param string $haystack The string to search in.
 * @param string $needle The string to search for.
 * @param int $offset If zero or positive, the search is performed left to right skipping the first offset bytes of the haystack.
 * @return int|false
 */
/** @compile-time-eval */
function strrpos(string $haystack, string $needle, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Find the position of the last occurrence of a case-insensitive substring in a string
 * @param string $haystack The string to search in.
 * @param string $needle The string to search for.
 * @param int $offset If zero or positive, the search is performed left to right skipping the first offset bytes of the haystack.
 * @return int|false
 */
/** @compile-time-eval */
function strripos(string $haystack, string $needle, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Find the last occurrence of a character in a string
 * @param string $haystack The string to search in
 * @param string $needle If needle contains more than one character, only the first is used. This behavior is different from that of strstr.
 * @param bool $before_needle If true, strrchr returns the part of the haystack before the last occurrence of the needle (excluding the needle).
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function strrchr(string $haystack, string $needle, bool $before_needle = false): string|false {}

/** @genstubs-expose-comment-block
 * Determine if a string contains a given substring
 * @param string $haystack The string to search in.
 * @param string $needle The substring to search for in the haystack.
 * @return bool
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 */
function str_contains(string $haystack, string $needle): bool {}

/** @genstubs-expose-comment-block
 * Checks if a string starts with a given substring
 * @param string $haystack The string to search in.
 * @param string $needle The substring to search for in the haystack.
 * @return bool
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 */
function str_starts_with(string $haystack, string $needle): bool {}

/** @genstubs-expose-comment-block
 * Checks if a string ends with a given substring
 * @param string $haystack The string to search in.
 * @param string $needle The substring to search for in the haystack.
 * @return bool
 */
/** @compile-time-eval */
function str_ends_with(string $haystack, string $needle): bool {}

/** @genstubs-expose-comment-block
 * Split a string into smaller chunks
 * @param string $string The string to be chunked.
 * @param int $length The chunk length.
 * @param string $separator The line ending sequence.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function chunk_split(string $string, int $length = 76, string $separator = "\r\n"): string {}

/** @genstubs-expose-comment-block
 * Return part of a string
 * @param string $string The input string.
 * @param int $offset If offset is non-negative, the returned string will start at the offset'th position in string, counting from zero. For instance, in the string 'abcdef', the character at position 0 is 'a', the character at position 2 is 'c', and so forth.
 * @param int|null $length If length is given and is positive, the string returned will contain at most length characters beginning from offset (depending on the length of string).
 * @return string
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 * @frameless-function {"arity": 3}
 */
function substr(string $string, int $offset, ?int $length = null): string {}

/** @genstubs-expose-comment-block
 * Replace text within a portion of a string
 * @param array|string $string The input string.
 * @param array|string $replace The replacement string.
 * @param array|int $offset If offset is non-negative, the replacing will begin at the offset'th offset into string.
 * @param array|int|null $length If given and is positive, it represents the length of the portion of string which is to be replaced. If it is negative, it represents the number of characters from the end of string at which to stop replacing. If it is not given, then it will default to strlen( string ); i.e. end the replacing at the end of string. Of course, if length is zero then this function will have the effect of inserting replace into string at the given offset offset.
 * @return string|array
 */
/**
 * @return string|array<int|string, string>
 * @compile-time-eval
 */
function substr_replace(array|string $string, array|string $replace, array|int $offset, array|int|null $length = null): string|array {}

/** @genstubs-expose-comment-block
 * Quote meta characters
 * @param string $string The input string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function quotemeta(string $string): string {}

/** @genstubs-expose-comment-block
 * Convert the first byte of a string to a value between 0 and 255
 * @param string $character A character.
 * @return int
 */
/** @compile-time-eval */
function ord(string $character): int {}

/** @genstubs-expose-comment-block
 * Generate a single-byte string from a number
 * @param int $codepoint An integer between 0 and 255.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function chr(int $codepoint): string {}

/** @genstubs-expose-comment-block
 * Make a string's first character uppercase
 * @param string $string The input string.
 * @return string
 */
/** @compile-time-eval */
function ucfirst(string $string): string {}

/** @genstubs-expose-comment-block
 * Make a string's first character lowercase
 * @param string $string The input string.
 * @return string
 */
/** @compile-time-eval */
function lcfirst(string $string): string {}

/** @genstubs-expose-comment-block
 * Uppercase the first character of each word in a string
 * @param string $string The input string.
 * @param string $separators The optional separators contains the word separator characters.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function ucwords(string $string, string $separators = " \t\r\n\f\v"): string {}

/** @genstubs-expose-comment-block
 * Translate characters or replace substrings
 * @param string $string The string being translated.
 * @param string $from The string being translated to to.
 * @param string $to The string replacing from.
 * @param array $replace_pairs The replace_pairs parameter may be used instead of to and from, in which case it's an array in the form array('from' => 'to', ...).
 * @return string|string
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 2}
 * @frameless-function {"arity": 3}
 */
function strtr(string $string, string|array $from, ?string $to = null): string {}

/** @genstubs-expose-comment-block
 * Reverse a string
 * @param string $string The string to be reversed.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function strrev(string $string): string {}

/** @genstubs-expose-comment-block
 * Calculate the similarity between two strings
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @param float $percent By passing a reference as third argument, similar_text will calculate the similarity in percent, by dividing the result of similar_text by the average of the lengths of the given strings times 100.
 * @return int
 */
/** @param float $percent */
function similar_text(string $string1, string $string2, &$percent = null): int {}

/** @genstubs-expose-comment-block
 * Quote string with slashes in a C style
 * @param string $string The string to be escaped.
 * @param string $characters A list of characters to be escaped. If characters contains characters  , \r etc., they are converted in C-like style, while other non-alphanumeric characters with ASCII codes lower than 32 and higher than 126 converted to octal representation.
 * @return string
 */
/**
 * @compile-time-eval
 */
function addcslashes(string $string, string $characters): string {}

/** @genstubs-expose-comment-block
 * Quote string with slashes
 * @param string $string The string to be escaped.
 * @return string
 */
/**
 * @compile-time-eval
 */
function addslashes(string $string): string {}

/** @genstubs-expose-comment-block
 * Un-quote string quoted with addcslashes
 * @param string $string The string to be unescaped.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function stripcslashes(string $string): string {}

/** @genstubs-expose-comment-block
 * Un-quotes a quoted string
 * @param string $string The input string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function stripslashes(string $string): string {}

/** @genstubs-expose-comment-block
 * Replace all occurrences of the search string with the replacement string
 * @param array|string $search The value being searched for, otherwise known as the needle. An array may be used to designate multiple needles.
 * @param array|string $replace The replacement value that replaces found search values. An array may be used to designate multiple replacements.
 * @param string|array $subject The string or array being searched and replaced on, otherwise known as the haystack.
 * @param int $count If passed, this will be set to the number of replacements performed.
 * @return string|array
 */
/**
 * @param int $count
 * @return string|array<int|string, string>
 * @compile-time-eval
 * @frameless-function {"arity": 3}
 */
function str_replace(array|string $search, array|string $replace, string|array $subject, &$count = null): string|array {}

/** @genstubs-expose-comment-block
 * Case-insensitive version of str_replace
 * @param array|string $search The value being searched for, otherwise known as the needle.  An array may be used to designate multiple needles.
 * @param array|string $replace The replacement value that replaces found search values. An array may be used to designate multiple replacements.
 * @param string|array $subject The string or array being searched and replaced on, otherwise known as the haystack.
 * @param int $count If passed, this will be set to the number of replacements performed.
 * @return string|array
 */
/**
 * @param int $count
 * @return string|array<int|string, string>
 * @compile-time-eval
 */
function str_ireplace(array|string $search, array|string $replace, string|array $subject, &$count = null): string|array {}

/** @genstubs-expose-comment-block
 * Convert logical Hebrew text to visual text
 * @param string $string A Hebrew input string.
 * @param int $max_chars_per_line This optional parameter indicates maximum number of characters per line that will be returned.
 * @return string
 */
/** @refcount 1 */
function hebrev(string $string, int $max_chars_per_line = 0): string {}

/** @genstubs-expose-comment-block
 * Inserts HTML line breaks before all newlines in a string
 * @param string $string The input string.
 * @param bool $use_xhtml Whether to use XHTML compatible line breaks or not.
 * @return string
 */
/**
 * @compile-time-eval
 */
function nl2br(string $string, bool $use_xhtml = true): string {}

/** @genstubs-expose-comment-block
 * Strip HTML and PHP tags from a string
 * @param string $string The input string.
 * @param array|string|null $allowed_tags You can use the optional second parameter to specify tags which should not be stripped. These are either given as string, or as of PHP 7.4.0, as array. Refer to the example below regarding the format of this parameter.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function strip_tags(string $string, array|string|null $allowed_tags = null): string {}

/** @genstubs-expose-comment-block
 * Set locale information
 * @param int $category category is a named constant specifying the category of the functions affected by the locale setting: LC_ALL for all of the below LC_COLLATE for string comparison, see strcoll LC_CTYPE for character classification and conversion, for example ctype_alpha LC_MONETARY for localeconv LC_NUMERIC for decimal separator (See also localeconv) LC_TIME for date and time formatting with strftime LC_MESSAGES for system responses (available if PHP was compiled with libintl)
 * @param string|null $locales If locales is the empty string "" or is null, the locale names will be set from the values of environment variables with the same names as the above categories, or from "LANG".
 * @param string $rest Optional string parameters to try as locale settings until success.
 * @param array $locale_array Each array element is tried to be set as new locale until success. This is useful if a locale is known under different names on different systems or for providing a fallback for a possibly not available locale.
 * @return string|false|string|false
 */
/**
 * @param array|string|null $locales
 * @param string|null $rest
 */
function setlocale(int $category, $locales, ...$rest): string|false {}

/** @genstubs-expose-comment-block
 * Parse a string as a URL query string
 * @param string $string The input string.
 * @param array $result A variable passed by reference, which will be set to an array containing the key-value pairs extracted from string. If the result parameter is not passed, a separate variable is set in the local scope for each key.
 * @return void
 */
/** @param array $result */
function parse_str(string $string, &$result): void {}

/** @genstubs-expose-comment-block
 * Parse a CSV string into an array
 * @param string $string The string to parse.
 * @return array
 */
/**
 * @return array<int, string|null>
 * @refcount 1
 */
function str_getcsv(string $string, string $separator = ",", string $enclosure = "\"", string $escape = "\\"): array {}

/** @genstubs-expose-comment-block
 * Repeat a string
 * @param string $string The string to be repeated.
 * @param int $times Number of time the string string should be repeated.
 * @return string
 */
/** @refcount 1 */
function str_repeat(string $string, int $times): string {}

/** @genstubs-expose-comment-block
 * Return information about characters used in a string
 * @param string $string The examined string.
 * @param int $mode See return values.
 * @return array|string
 */
/**
 * @return array<int, int>|string
 * @compile-time-eval
 * @refcount 1
 */
function count_chars(string $string, int $mode = 0): array|string {}

/** @genstubs-expose-comment-block
 * String comparisons using a "natural order" algorithm
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @return int
 */
function strnatcmp(string $string1, string $string2): int {}

/** @genstubs-expose-comment-block
 * Get numeric formatting information
 * @return array
 */
/**
 * @return array<string, int|string|array>
 * @refcount 1
 */
function localeconv(): array {}

/** @genstubs-expose-comment-block
 * Case insensitive string comparisons using a "natural order" algorithm
 * @param string $string1 The first string.
 * @param string $string2 The second string.
 * @return int
 */
function strnatcasecmp(string $string1, string $string2): int {}

/** @genstubs-expose-comment-block
 * Count the number of substring occurrences
 * @param string $haystack The string to search in
 * @param string $needle The substring to search for
 * @param int $offset The offset where to start counting. If the offset is negative, counting starts from the end of the string.
 * @param int|null $length The maximum length after the specified offset to search for the substring. It outputs a warning if the offset plus the length is greater than the haystack length. A negative length counts from the end of haystack.
 * @return int
 */
/**
 * @compile-time-eval
 */
function substr_count(string $haystack, string $needle, int $offset = 0, ?int $length = null): int {}

/** @genstubs-expose-comment-block
 * Pad a string to a certain length with another string
 * @param string $string The input string.
 * @param int $length The desired length of the final padded string. If the value of length is negative, less than, or equal to the length of the input string, no padding takes place, and string will be returned.
 * @param string $pad_string The pad_string may be truncated if the required number of padding characters can't be evenly divided by the pad_string's length.
 * @param int $pad_type Optional argument pad_type can be STR_PAD_RIGHT, STR_PAD_LEFT, or STR_PAD_BOTH. If pad_type is not specified it is assumed to be STR_PAD_RIGHT.
 * @return string
 */
function str_pad(string $string, int $length, string $pad_string = " ", int $pad_type = STR_PAD_RIGHT): string {}

/** @genstubs-expose-comment-block
 * Parses input from a string according to a format
 * @param string $string The input string being parsed.
 * @param string $format The interpreted format for string, which is described in the documentation for sprintf with following differences: Function is not locale-aware. F, g, G and b are not supported. D stands for decimal number. i stands for integer with base detection. n stands for number of characters processed so far. s stops reading at any whitespace character. * instead of argnum$ suppresses the assignment of this conversion specification.
 * @param mixed $vars Optionally pass in variables by reference that will contain the parsed values.
 * @return array|int|null
 */
/**
 * @return array<int, mixed>|int|null
 * @refcount 1
 */
function sscanf(string $string, string $format, mixed &...$vars): array|int|null {}

/** @genstubs-expose-comment-block
 * Perform the rot13 transform on a string
 * @param string $string The input string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function str_rot13(string $string): string {}

/** @genstubs-expose-comment-block
 * Randomly shuffles a string
 * @param string $string The input string.
 * @return string
 */
/** @refcount 1 */
function str_shuffle(string $string): string {}

/** @genstubs-expose-comment-block
 * Return information about words used in a string
 * @param string $string The string
 * @param int $format Specify the return value of this function. The current supported values are: 0 - returns the number of words found 1 - returns an array containing all the words found inside the string 2 - returns an associative array, where the key is the numeric position of the word inside the string and the value is the actual word itself
 * @param string|null $characters A list of additional characters which will be considered as 'word'
 * @return array|int
 */
/**
 * @return array<int, string>|int
 * @refcount 1
 */
function str_word_count(string $string, int $format = 0, ?string $characters = null): array|int {}

/** @genstubs-expose-comment-block
 * Convert a string to an array
 * @param string $string The input string.
 * @param int $length Maximum length of the chunk.
 * @return array
 */
/**
 * @return array<int, string>
 * @compile-time-eval
 */
function str_split(string $string, int $length = 1): array {}

/** @genstubs-expose-comment-block
 * Search a string for any of a set of characters
 * @param string $string The string where characters is looked for.
 * @param string $characters This parameter is case sensitive.
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function strpbrk(string $string, string $characters): string|false {}

/** @genstubs-expose-comment-block
 * Binary safe comparison of two strings from an offset, up to length characters
 * @param string $haystack The main string being compared.
 * @param string $needle The secondary string being compared.
 * @param int $offset The start position for the comparison. If negative, it starts counting from the end of the string.
 * @param int|null $length The length of the comparison. The default value is the largest of the length of the needle compared to the length of haystack minus the offset.
 * @param bool $case_insensitive If case_insensitive is true, comparison is case insensitive.
 * @return int
 */
/**
 * @compile-time-eval
 */
function substr_compare(string $haystack, string $needle, int $offset, ?int $length = null, bool $case_insensitive = false): int {}

/**
 * @compile-time-eval
 * @refcount 1
 */
#[\Deprecated(since: '8.2', message: 'visit the php.net documentation for various alternatives')]
/** @genstubs-expose-comment-block
 * Converts a string from ISO-8859-1 to UTF-8
 * @param string $string An ISO-8859-1 string.
 * @return string
 */
function utf8_encode(string $string): string {}

/**
 * @compile-time-eval
 * @refcount 1
 */
#[\Deprecated(since: '8.2', message: 'visit the php.net documentation for various alternatives')]
/** @genstubs-expose-comment-block
 * Converts a string from UTF-8 to ISO-8859-1, replacing invalid or unrepresentable
 * characters
 * @param string $string A UTF-8 encoded string.
 * @return string
 */
function utf8_decode(string $string): string {}

/* dir.c */

/** @genstubs-expose-comment-block
 * Open directory handle
 * @return resource|false
 */
/**
 * @param resource|null $context
 * @return resource|false
 */
function opendir(string $directory, $context = null) {}

/** @genstubs-expose-comment-block
 * Return an instance of the Directory class
 * @return Directory|false
 */
/**
 * @param resource|null $context
 * @refcount 1
 */
function dir(string $directory, $context = null): Directory|false {}

/** @genstubs-expose-comment-block
 * Close directory handle
 * @return void
 */
/** @param resource|null $dir_handle */
function closedir($dir_handle = null): void {}

/** @genstubs-expose-comment-block
 * Change directory
 * @param string $directory The new current directory
 * @return bool
 */
function chdir(string $directory): bool {}

#if (defined(HAVE_CHROOT) && !defined(ZTS) && defined(ENABLE_CHROOT_FUNC))
/** @genstubs-expose-comment-block
 * Change the root directory
 * @param string $directory The path to change the root directory to.
 * @return bool
 */
function chroot(string $directory): bool {}
#endif

/** @genstubs-expose-comment-block
 * Gets the current working directory
 * @return string|false
 */
/** @refcount 1 */
function getcwd(): string|false {}

/** @genstubs-expose-comment-block
 * Rewind directory handle
 * @return void
 */
/** @param resource|null $dir_handle */
function rewinddir($dir_handle = null): void {}

/** @genstubs-expose-comment-block
 * Read entry from directory handle
 * @return string|false
 */
/**
 * @param resource|null $dir_handle
 * @refcount 1
 */
function readdir($dir_handle = null): string|false {}

/** @genstubs-expose-comment-block
 * List files and directories inside the specified path
 * @param string $directory The directory that will be scanned.
 * @param int $sorting_order By default, the sorted order is alphabetical in ascending order.  If the optional sorting_order is set to SCANDIR_SORT_DESCENDING, then the sort order is alphabetical in descending order. If it is set to SCANDIR_SORT_NONE then the result is unsorted.
 * @param resource|null $context For a description of the context parameter, refer to the streams section of the manual.
 * @return array|false
 */
/**
 * @param resource|null $context
 * @return array<int, string>|false
 * @refcount 1
 */
function scandir(string $directory, int $sorting_order = SCANDIR_SORT_ASCENDING, $context = null): array|false {}

/** @genstubs-expose-comment-block
 * Find pathnames matching a pattern
 * @param string $pattern The pattern. No tilde expansion or parameter substitution is done.
 * @param int $flags Any of the GLOB_* constants.
 * @return array|false
 */
/**
 * @return array<int, string>|false
 */
function glob(string $pattern, int $flags = 0): array|false {}

/* exec.c */

/** @genstubs-expose-comment-block
 * Execute an external program
 * @param string $command The command that will be executed.
 * @param array $output If the output argument is present, then the specified array will be filled with every line of output from the command.  Trailing whitespace, such as  , is not included in this array.  Note that if the array already contains some elements, exec will append to the end of the array. If you do not want the function to append elements, call unset on the array before passing it to exec.
 * @param int $result_code If the result_code argument is present along with the output argument, then the return status of the executed command will be written to this variable.
 * @return string|false
 */
/**
 * @param array $output
 * @param int $result_code
 * @refcount 1
 */
function exec(string $command, &$output = null, &$result_code = null): string|false {}

/** @genstubs-expose-comment-block
 * Execute an external program and display the output
 * @param string $command The command that will be executed.
 * @param int $result_code If the result_code argument is present, then the return status of the executed command will be written to this variable.
 * @return string|false
 */
/**
 * @param int $result_code
 * @refcount 1
 */
function system(string $command, &$result_code = null): string|false {}

/** @genstubs-expose-comment-block
 * Execute an external program and display raw output
 * @param string $command The command that will be executed.
 * @param int $result_code If the result_code argument is present, the return status of the Unix command will be placed here.
 * @return false|null
 */
/** @param int $result_code */
function passthru(string $command, &$result_code = null): false|null {}

/** @genstubs-expose-comment-block
 * Escape shell metacharacters
 * @param string $command The command that will be escaped.
 * @return string
 */
/** @refcount 1 */
function escapeshellcmd(string $command): string {}

/** @genstubs-expose-comment-block
 * Escape a string to be used as a shell argument
 * @param string $arg The argument that will be escaped.
 * @return string
 */
/** @refcount 1 */
function escapeshellarg(string $arg): string {}

/** @genstubs-expose-comment-block
 * Execute command via shell and return the complete output as a string
 * @param string $command The command that will be executed.
 * @return string|false|null
 */
/** @refcount 1 */
function shell_exec(string $command): string|false|null {}

#ifdef HAVE_NICE
/** @genstubs-expose-comment-block
 * Change the priority of the current process
 * @param int $priority The new priority value, the value of this may differ on platforms.
 * @return bool
 */
function proc_nice(int $priority): bool {}
#endif

/* file.c */

/** @genstubs-expose-comment-block
 * Portable advisory file locking
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @param int $operation operation is one of the following: LOCK_SH to acquire a shared lock (reader). LOCK_EX to acquire an exclusive lock (writer). LOCK_UN to release a lock (shared or exclusive).
 * @param int $would_block The optional third argument is set to 1 if the lock would block (EWOULDBLOCK errno condition).
 * @return bool
 */
/**
 * @param resource $stream
 * @param int $would_block
 */
function flock($stream, int $operation, &$would_block = null): bool {}

/** @genstubs-expose-comment-block
 * Extracts all meta tag content attributes from a file and returns an array
 * @param string $filename The path to the HTML file, as a string. This can be a local file or an URL.
 * @param bool $use_include_path Setting use_include_path to true will result in PHP trying to open the file along the standard include path as per the include_path directive. This is used for local files, not URLs.
 * @return array|false
 */
/**
 * @return array<string, string>|false
 * @refcount 1
 */
function get_meta_tags(string $filename, bool $use_include_path = false): array|false {}

/** @genstubs-expose-comment-block
 * Closes process file pointer
 * @param resource $handle The file pointer must be valid, and must have been returned by a successful call to popen.
 * @return int
 */
/** @param resource $handle */
function pclose($handle): int {}

/** @genstubs-expose-comment-block
 * Opens process file pointer
 * @param string $command The command
 * @param string $mode The mode. Either 'r' for reading, or 'w' for writing.
 * @return resource|false
 */
/**
 * @return resource|false
 * @refcount 1
 */
function popen(string $command, string $mode) {}

/** @genstubs-expose-comment-block
 * Outputs a file
 * @param string $filename The filename being read.
 * @param bool $use_include_path You can use the optional second parameter and set it to true, if you want to search for the file in the include_path, too.
 * @param resource|null $context A context stream resource.
 * @return int|false
 */
/** @param resource|null $context */
function readfile(string $filename, bool $use_include_path = false, $context = null): int|false {}

/** @genstubs-expose-comment-block
 * Rewind the position of a file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen.
 * @return bool
 */
/** @param resource $stream */
function rewind($stream): bool {}

/** @genstubs-expose-comment-block
 * Removes directory
 * @param string $directory Path to the directory.
 * @param resource|null $context A context stream resource.
 * @return bool
 */
/** @param resource|null $context */
function rmdir(string $directory, $context = null): bool {}

/** @genstubs-expose-comment-block
 * Changes the current umask
 * @param int|null $mask The new umask.
 * @return int
 */
function umask(?int $mask = null): int {}

/** @genstubs-expose-comment-block
 * Closes an open file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen.
 * @return bool
 */
/** @param resource $stream */
function fclose($stream): bool {}

/** @genstubs-expose-comment-block
 * Tests for end-of-file on a file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @return bool
 */
/** @param resource $stream */
function feof($stream): bool {}

/** @genstubs-expose-comment-block
 * Gets character from file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @return string|false
 */
/** @param resource $stream */
function fgetc($stream): string|false {}

/** @genstubs-expose-comment-block
 * Gets line from file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @param int|null $length Reading ends when length - 1 bytes have been read, or a newline (which is included in the return value), or an EOF (whichever comes first). If no length is specified, it will keep reading from the stream until it reaches the end of the line.
 * @return string|false
 */
/**
 * @param resource $stream
 * @refcount 1
 */
function fgets($stream, ?int $length = null): string|false {}

/** @genstubs-expose-comment-block
 * Binary-safe file read
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @param int $length Up to length number of bytes read.
 * @return string|false
 */
/**
 * @param resource $stream
 * @refcount 1
 */
function fread($stream, int $length): string|false {}

/** @genstubs-expose-comment-block
 * Opens file or URL
 * @param string $filename If filename is of the form "scheme:...", it is assumed to be a URL and PHP will search for a protocol handler (also known as a wrapper) for that scheme. If no wrappers for that protocol are registered, PHP will emit a notice to help you track potential problems in your script and then continue as though filename specifies a regular file.
 * @param string $mode The mode parameter specifies the type of access you require to the stream.  It may be any of the following: A list of possible modes for fopen using mode mode Description 'r' Open for reading only; place the file pointer at the beginning of the file. 'r+' Open for reading and writing; place the file pointer at the beginning of the file. 'w' Open for writing only; place the file pointer at the beginning of the file and truncate the file to zero length. If the file does not exist, attempt to create it. 'w+' Open for reading and writing; otherwise it has the same behavior as 'w'. 'a' Open for writing only; place the file pointer at the end of the file. If the file does not exist, attempt to create it. In this mode, fseek has no effect, writes are always appended. 'a+' Open for reading and writing; place the file pointer at the end of the file. If the file does not exist, attempt to create it. In this mode, fseek only affects the reading position, writes are always appended. 'x' Create and open for writing only; place the file pointer at the beginning of the file.  If the file already exists, the fopen call will fail by returning false and generating an error of level E_WARNING.  If the file does not exist, attempt to create it.  This is equivalent to specifying O_EXCL|O_CREAT flags for the underlying open(2) system call. 'x+' Create and open for reading and writing; otherwise it has the same behavior as 'x'. 'c' Open the file for writing only. If the file does not exist, it is created. If it exists, it is neither truncated (as opposed to 'w'), nor the call to this function fails (as is the case with 'x'). The file pointer is positioned on the beginning of the file. This may be useful if it's desired to get an advisory lock (see flock) before attempting to modify the file, as using 'w' could truncate the file before the lock was obtained (if truncation is desired, ftruncate can be used after the lock is requested). 'c+' Open the file for reading and writing; otherwise it has the same behavior as 'c'. 'e' Set close-on-exec flag on the opened file descriptor. Only available in PHP compiled on POSIX.1-2008 conformant systems. 'n' Set non-blocking flag on the opened file descriptor. Only available in PHP compiled on POSIX.1-2008 conformant systems.
 * @param bool $use_include_path The optional third use_include_path parameter can be set to true if you want to search for the file in the include_path, too.
 * @param resource|null $context A context stream resource.
 * @return resource|false
 */
/**
 * @param resource|null $context
 * @return resource|false
 * @refcount 1
 */
function fopen(string $filename, string $mode, bool $use_include_path = false, $context = null) {}

/** @genstubs-expose-comment-block
 * Parses input from a file according to a format
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @param string $format The interpreted format for string, which is described in the documentation for sprintf with following differences: Function is not locale-aware. F, g, G and b are not supported. D stands for decimal number. i stands for integer with base detection. n stands for number of characters processed so far. s stops reading at any whitespace character. * instead of argnum$ suppresses the assignment of this conversion specification.
 * @param mixed $vars The optional assigned values.
 * @return array|int|false|null
 */
/**
 * @param resource $stream
 * @return array<int, mixed>|int|false|null
 * @refcount 1
 */
function fscanf($stream, string $format, mixed &...$vars): array|int|false|null {}

/** @genstubs-expose-comment-block
 * Output all remaining data on a file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @return int
 */
/** @param resource $stream */
function fpassthru($stream): int {}

/** @genstubs-expose-comment-block
 * Truncates a file to a given length
 * @param resource $stream The file pointer.
 * @param int $size The size to truncate to.
 * @return bool
 */
/** @param resource $stream */
function ftruncate($stream, int $size): bool {}

/** @genstubs-expose-comment-block
 * Gets information about a file using an open file pointer
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @return array|false
 */
/**
 * @param resource $stream
 * @return array<int|string, int>|false
 * @refcount 1
 */
function fstat($stream): array|false {}

/** @genstubs-expose-comment-block
 * Seeks on a file pointer
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @param int $offset The offset.
 * @param int $whence whence values are: SEEK_SET - Set position equal to offset bytes from the start of the file. SEEK_CUR - Set position to current location plus offset bytes. SEEK_END - Set position to end-of-file plus offset bytes.
 * @return int
 */
/** @param resource $stream */
function fseek($stream, int $offset, int $whence = SEEK_SET): int {}

/** @genstubs-expose-comment-block
 * Returns the current position of the file read/write pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or popen. ftell gives undefined results for append-only streams (opened with "a" flag).
 * @return int|false
 */
/** @param resource $stream */
function ftell($stream): int|false {}

/** @genstubs-expose-comment-block
 * Flushes the output to a file
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @return bool
 */
/** @param resource $stream */
function fflush($stream): bool {}

/** @genstubs-expose-comment-block
 * Synchronizes changes to the file (including meta-data)
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @return bool
 */
/** @param resource $stream */
function fsync($stream): bool {}

/** @genstubs-expose-comment-block
 * Synchronizes data (but not meta-data) to the file
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @return bool
 */
/** @param resource $stream */
function fdatasync($stream): bool {}

/** @genstubs-expose-comment-block
 * Binary-safe file write
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @param string $data The string that is to be written.
 * @param int|null $length If length is an integer, writing will stop after length bytes have been written or the end of data is reached, whichever comes first.
 * @return int|false
 */
/** @param resource $stream */
function fwrite($stream, string $data, ?int $length = null): int|false {}

/** @genstubs-expose-comment-block
 * Alias fwrite
 */
/**
 * @param resource $stream
 * @alias fwrite
 */
function fputs($stream, string $data, ?int $length = null): int|false {}

/** @genstubs-expose-comment-block
 * Makes directory
 * @param string $directory The directory path. A URL can be used as a filename with this function if the fopen wrappers have been enabled. See fopen for more details on how to specify the filename. See the  for links to information about what abilities the various wrappers have, notes on their usage, and information on any predefined variables they may provide.
 * @param int $permissions The permissions are 0777 by default, which means the widest possible access. For more information on permissions, read the details on the chmod page.
 * @param bool $recursive If true, then any parent directories to the directory specified will also be created, with the same permissions.
 * @param resource|null $context A context stream resource.
 * @return bool
 */
/** @param resource|null $context */
function mkdir(string $directory, int $permissions = 0777, bool $recursive = false, $context = null): bool {}

/** @genstubs-expose-comment-block
 * Renames a file or directory
 * @param string $from The old name.
 * @param string $to The new name. On Windows, if to already exists, it must be writable. Otherwise rename fails and issues E_WARNING.
 * @param resource|null $context A context stream resource.
 * @return bool
 */
/** @param resource|null $context */
function rename(string $from, string $to, $context = null): bool {}

/** @genstubs-expose-comment-block
 * Copies file
 * @param string $from Path to the source file.
 * @param string $to The destination path. If to is a URL, the copy operation may fail if the wrapper does not support overwriting of existing files.
 * @param resource|null $context A valid context resource created with stream_context_create.
 * @return bool
 */
/** @param resource|null $context */
function copy(string $from, string $to, $context = null): bool {}

/** @genstubs-expose-comment-block
 * Create file with unique file name
 * @param string $directory The directory where the temporary filename will be created.
 * @param string $prefix The prefix of the generated temporary filename.
 * @return string|false
 */
/** @refcount 1 */
function tempnam(string $directory, string $prefix): string|false {}

/** @genstubs-expose-comment-block
 * Creates a temporary file
 * @return resource|false
 */
/**
 * @return resource|false
 * @refcount 1
 */
function tmpfile() {}

/** @genstubs-expose-comment-block
 * Reads entire file into an array
 * @param string $filename Path to the file.
 * @param int $flags The optional parameter flags can be one, or more, of the following constants: FILE_USE_INCLUDE_PATH Search for the file in the include_path. FILE_IGNORE_NEW_LINES Omit newline at the end of each array element. FILE_SKIP_EMPTY_LINES Skip empty lines. FILE_NO_DEFAULT_CONTEXT Don't use the default context.
 * @param resource|null $context A context stream resource.
 * @return array|false
 */
/**
 * @param resource|null $context
 * @return array<int, string>|false
 * @refcount 1
 */
function file(string $filename, int $flags = 0, $context = null): array|false {}

/** @genstubs-expose-comment-block
 * Reads entire file into a string
 * @param string $filename Name of the file to read.
 * @param bool $use_include_path The FILE_USE_INCLUDE_PATH constant can be used to trigger include path search. This is not possible if strict typing is enabled, since FILE_USE_INCLUDE_PATH is an int. Use true instead.
 * @param resource|null $context A valid context resource created with stream_context_create. If you don't need to use a custom context, you can skip this parameter by null.
 * @param int $offset The offset where the reading starts on the original stream. Negative offsets count from the end of the stream.
 * @param int|null $length Maximum length of data read. The default is to read until end of file is reached. Note that this parameter is applied to the stream processed by the filters.
 * @return string|false
 */
/**
 * @param resource|null $context
 * @refcount 1
 */
function file_get_contents(string $filename, bool $use_include_path = false, $context = null, int $offset = 0, ?int $length = null): string|false {}

/** @genstubs-expose-comment-block
 * Deletes a file
 * @param string $filename Path to the file.
 * @param resource|null $context A context stream resource.
 * @return bool
 */
/** @param resource|null $context */
function unlink(string $filename, $context = null): bool {}

/** @genstubs-expose-comment-block
 * Write data to a file
 * @param string $filename Path to the file where to write the data.
 * @param mixed $data The data to write. Can be either a string, an array or a stream resource.
 * @param int $flags The value of flags can be any combination of the following flags, joined with the binary OR (|) operator.
 * @param resource|null $context A valid context resource created with stream_context_create.
 * @return int|false
 */
/** @param resource|null $context */
function file_put_contents(string $filename, mixed $data, int $flags = 0, $context = null): int|false {}

/** @genstubs-expose-comment-block
 * Format line as CSV and write to file pointer
 * @param resource $stream The file pointer must be valid, and must point to a file successfully opened by fopen or fsockopen (and not yet closed by fclose).
 * @param array $fields An array of strings.
 * @param string $eol The optional eol parameter sets a custom End of Line sequence.
 * @return int|false
 */
/** @param resource $stream */
function fputcsv($stream, array $fields, string $separator = ",", string $enclosure = "\"", string $escape = "\\", string $eol = "\n"): int|false {}

/** @genstubs-expose-comment-block
 * Gets line from file pointer and parse for CSV fields
 * @param resource $stream A valid file pointer to a file successfully opened by fopen, popen, or fsockopen.
 * @param int|null $length Must be greater than the longest line (in characters) to be found in the CSV file (allowing for trailing line-end characters). Otherwise the line is split in chunks of length characters, unless the split would occur inside an enclosure.
 * @param string $separator The separator parameter sets the field separator. It must be a single byte character.
 * @param string $enclosure The enclosure parameter sets the field enclosure character. It must be a single byte character.
 * @param string $escape The escape parameter sets the escape character. It must be a single byte character or the empty string. The empty string ("") disables the proprietary escape mechanism.
 * @return array|false
 */
/**
 * @param resource $stream
 * @return array<int, string|null>|false
 * @refcount 1
 */
function fgetcsv($stream, ?int $length = null, string $separator = ",", string $enclosure = "\"", string $escape = "\\"): array|false {}

/** @genstubs-expose-comment-block
 * Returns canonicalized absolute pathname
 * @param string $path The path being checked. Whilst a path must be supplied, the value can be an empty string. In this case, the value is interpreted as the current directory.
 * @return string|false
 */
/** @refcount 1 */
function realpath(string $path): string|false {}

#ifdef HAVE_FNMATCH
/** @genstubs-expose-comment-block
 * Match filename against a pattern
 * @param string $pattern The pattern to match against. Usually, the pattern will contain wildcards like '?' and '*'. Wildcards to be used in pattern parameter Wildcard Description ? Question mark will match any single character. For example, pattern "file?.txt" will match "file1.txt" and "fileA.txt", but will not match "file10.txt". * Asterisk will match zero or more characters. For example, pattern "foo*.xml" will match "foo.xml" and "foobar.xml". [ ] Square brackets are used to create ranges of ASCII codepoints or sets of characters. For example, pattern "index.php[45]" will match "index.php4" and "index.php5", but will not match "index.phpt". Well known ranges are [0-9], [a-z], and [A-Z]. Multiple sets and ranges can be used at the same time, for example [0-9a-zABC]. ! Exclamation mark is used to negate characters within square brackets. For example, "[!A-Z]*.html" will match "demo.html", but will not match "Demo.html". \ Backslash is used to escape special characters. For example, "Name\?" will match "Name?", but will not match "Names".
 * @param string $filename The tested string. This function is especially useful for filenames, but may also be used on regular strings.
 * @param int $flags The value of flags can be any combination of the following flags, joined with the binary OR (|) operator. A list of possible flags for fnmatch Flag Description FNM_NOESCAPE Disable backslash escaping. FNM_PATHNAME Slash in string only matches slash in the given pattern. FNM_PERIOD Leading period in string must be exactly matched by period in the given pattern. FNM_CASEFOLD Caseless match. Part of the GNU extension.
 * @return bool
 */
function fnmatch(string $pattern, string $filename, int $flags = 0): bool {}
#endif

/** @genstubs-expose-comment-block
 * Returns directory path used for temporary files
 * @return string
 */
/** @refcount 1 */
function sys_get_temp_dir(): string {}

/* filestat.c */

/** @genstubs-expose-comment-block
 * Gets last access time of file
 * @param string $filename Path to the file.
 * @return int|false
 */
function fileatime(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets inode change time of file
 * @param string $filename Path to the file.
 * @return int|false
 */
function filectime(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file group
 * @param string $filename Path to the file.
 * @return int|false
 */
function filegroup(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file inode
 * @param string $filename Path to the file.
 * @return int|false
 */
function fileinode(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file modification time
 * @param string $filename Path to the file.
 * @return int|false
 */
function filemtime(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file owner
 * @param string $filename Path to the file.
 * @return int|false
 */
function fileowner(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file permissions
 * @param string $filename Path to the file.
 * @return int|false
 */
function fileperms(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file size
 * @param string $filename Path to the file.
 * @return int|false
 */
function filesize(string $filename): int|false {}

/** @genstubs-expose-comment-block
 * Gets file type
 * @param string $filename Path to the file.
 * @return string|false
 */
/** @refcount 1 */
function filetype(string $filename): string|false {}

/** @genstubs-expose-comment-block
 * Checks whether a file or directory exists
 * @param string $filename Path to the file or directory.
 * @return bool
 */
function file_exists(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether the filename is writable
 * @param string $filename The filename being checked.
 * @return bool
 */
function is_writable(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Alias is_writable
 */
/** @alias is_writable */
function is_writeable(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether a file exists and is readable
 * @param string $filename Path to the file.
 * @return bool
 */
function is_readable(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether the filename is executable
 * @param string $filename Path to the file.
 * @return bool
 */
function is_executable(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether the filename is a regular file
 * @param string $filename Path to the file.
 * @return bool
 */
function is_file(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether the filename is a directory
 * @param string $filename Path to the file. If filename is a relative filename, it will be checked relative to the current working directory. If filename is a symbolic or hard link then the link will be resolved and checked. If you have enabled open_basedir further restrictions may apply.
 * @return bool
 */
function is_dir(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether the filename is a symbolic link
 * @param string $filename Path to the file.
 * @return bool
 */
function is_link(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Gives information about a file
 * @param string $filename Path to the file.
 * @return array|false
 */
/**
 * @return array<int|string, bool|int|string>|false
 * @refcount 1
 */
function stat(string $filename): array|false {}

/** @genstubs-expose-comment-block
 * Gives information about a file or symbolic link
 * @param string $filename Path to a file or a symbolic link.
 * @return array|false
 */
/**
 * @return array<int|string, bool|int|string>|false
 * @refcount 1
 */
function lstat(string $filename): array|false {}

/** @genstubs-expose-comment-block
 * Changes file owner
 * @param string $filename Path to the file.
 * @param string|int $user A user name or number.
 * @return bool
 */
function chown(string $filename, string|int $user): bool {}

/** @genstubs-expose-comment-block
 * Changes file group
 * @param string $filename Path to the file.
 * @param string|int $group A group name or number.
 * @return bool
 */
function chgrp(string $filename, string|int $group): bool {}

#ifdef HAVE_LCHOWN
/** @genstubs-expose-comment-block
 * Changes user ownership of symlink
 * @param string $filename Path to the file.
 * @param string|int $user User name or number.
 * @return bool
 */
function lchown(string $filename, string|int $user): bool {}

/** @genstubs-expose-comment-block
 * Changes group ownership of symlink
 * @param string $filename Path to the symlink.
 * @param string|int $group The group specified by name or number.
 * @return bool
 */
function lchgrp(string $filename, string|int $group): bool {}
#endif

/** @genstubs-expose-comment-block
 * Changes file mode
 * @param string $filename Path to the file.
 * @param int $permissions Note that permissions is not automatically assumed to be an octal value, so to ensure the expected operation, you need to prefix permissions with a zero (0). Strings such as "g+w" will not work properly.
 * @return bool
 */
function chmod(string $filename, int $permissions): bool {}

#ifdef HAVE_UTIME
/** @genstubs-expose-comment-block
 * Sets access and modification time of file
 * @param string $filename The name of the file being touched.
 * @param int|null $mtime The touch time. If mtime is null, the current system time is used.
 * @param int|null $atime If not null, the access time of the given filename is set to the value of atime. Otherwise, it is set to the value passed to the mtime parameter. If both are null, the current system time is used.
 * @return bool
 */
function touch(string $filename, ?int $mtime = null, ?int $atime = null): bool {}
#endif

/** @genstubs-expose-comment-block
 * Clears file status cache
 * @param bool $clear_realpath_cache Whether to also clear the realpath cache.
 * @param string $filename Clear the realpath cache for a specific filename only; only used if clear_realpath_cache is true.
 * @return void
 */
function clearstatcache(bool $clear_realpath_cache = false, string $filename = ""): void {}

/** @genstubs-expose-comment-block
 * Returns the total size of a filesystem or disk partition
 * @param string $directory A directory of the filesystem or disk partition.
 * @return float|false
 */
function disk_total_space(string $directory): float|false {}

/** @genstubs-expose-comment-block
 * Returns available space on filesystem or disk partition
 * @param string $directory A directory of the filesystem or disk partition.
 * @return float|false
 */
function disk_free_space(string $directory): float|false {}

/** @genstubs-expose-comment-block
 * Alias disk_free_space
 */
/** @alias disk_free_space */
function diskfreespace(string $directory): float|false {}

/** @genstubs-expose-comment-block
 * Get realpath cache entries
 * @return array
 */
/**
 * @return array<string, array>
 * @refcount 1
 */
function realpath_cache_get(): array {}

/** @genstubs-expose-comment-block
 * Get realpath cache size
 * @return int
 */
function realpath_cache_size(): int {}

/* formatted_print.c */

/** @genstubs-expose-comment-block
 * Return a formatted string
 * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.
 * @return string
 */
/** @refcount 1 */
function sprintf(string $format, mixed ...$values): string {}

/** @genstubs-expose-comment-block
 * Output a formatted string
 * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.
 * @return int
 */
function printf(string $format, mixed ...$values): int {}

/** @genstubs-expose-comment-block
 * Output a formatted string
 * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.
 * @return int
 */
function vprintf(string $format, array $values): int {}

/** @genstubs-expose-comment-block
 * Return a formatted string
 * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.
 * @return string
 */
/** @refcount 1 */
function vsprintf(string $format, array $values): string {}

/** @genstubs-expose-comment-block
 * Write a formatted string to a stream
 * @param resource $stream A file system pointer resource that is typically created using fopen.
 * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.
 * @return int
 */
/** @param resource $stream */
function fprintf($stream, string $format, mixed ...$values): int {}

/** @genstubs-expose-comment-block
 * Write a formatted string to a stream
 * @param string $format The format string is composed of zero or more directives: ordinary characters (excluding %%) that are copied directly to the result and conversion specifications, each of which results in fetching its own parameter.
 * @return int
 */
/** @param resource $stream */
function vfprintf($stream, string $format, array $values): int {}

/* fsock.c */

/** @genstubs-expose-comment-block
 * Open Internet or Unix domain socket connection
 * @param string $hostname If OpenSSL support is installed, you may prefix the hostname with either ssl: or tls: to use an SSL or TLS client connection over TCPIP to connect to the remote host.
 * @param int $port The port number. This can be omitted and skipped with -1 for transports that do not use ports, such as unix:.
 * @param int $error_code If provided, holds the system level error number that occurred in the system-level connect() call.
 * @param string $error_message The error message as a string.
 * @param float|null $timeout The connection timeout, in seconds. When null, the default_socket_timeout php.ini setting is used.
 * @return resource|false
 */
/**
 * @param int $error_code
 * @param string $error_message
 * @return resource|false
 * @refcount 1
 */
function fsockopen(string $hostname, int $port = -1, &$error_code = null, &$error_message = null, ?float $timeout = null) {}

/** @genstubs-expose-comment-block
 * Open persistent Internet or Unix domain socket connection
 * @return resource|false
 */
/**
 * @param int $error_code
 * @param string $error_message
 * @return resource|false
 */
function pfsockopen(string $hostname, int $port = -1, &$error_code = null, &$error_message = null, ?float $timeout = null) {}

/* http.c */

/** @genstubs-expose-comment-block
 * Generate URL-encoded query string
 * @param array|object $data May be an array or object containing properties.
 * @param string $numeric_prefix If numeric indices are used in the base array and this parameter is provided, it will be prepended to the numeric index for elements in the base array only.
 * @param string|null $arg_separator The argument separator. If not set or null, arg_separator.output is used to separate arguments.
 * @param int $encoding_type By default, PHP_QUERY_RFC1738.
 * @return string
 */
/** @refcount 1 */
function http_build_query(array|object $data, string $numeric_prefix = "", ?string $arg_separator = null, int $encoding_type = PHP_QUERY_RFC1738): string {}

/** @genstubs-expose-comment-block
 * Retrieve last HTTP response headers
 * @return array|null
 */
function http_get_last_response_headers(): ?array {}

/** @genstubs-expose-comment-block
 * Clears the stored HTTP response headers
 * @return void
 */
function http_clear_last_response_headers(): void {}

/** @genstubs-expose-comment-block
 * Read and parse the request body and return the result
 * @return array
 */
/**
 * @param array|null $options
 * @return array<int, array>
 * @refcount 1
 */
function request_parse_body(?array $options = null): array {}

/* image.c */

/** @genstubs-expose-comment-block
 * Get Mime-Type for image-type returned by getimagesize,
 * exif_read_data, exif_thumbnail, exif_imagetype
 * @param int $image_type One of the IMAGETYPE_* constants.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function image_type_to_mime_type(int $image_type): string {}

/** @genstubs-expose-comment-block
 * Get file extension for image type
 * @param int $image_type One of the IMAGETYPE_* constant.
 * @param bool $include_dot Whether to prepend a dot to the extension or not. Default to true.
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function image_type_to_extension(int $image_type, bool $include_dot = true): string|false {}

/** @genstubs-expose-comment-block
 * Get the size of an image
 * @param string $filename This parameter specifies the file you wish to retrieve information about. It can reference a local file or (configuration permitting) a remote file using one of the supported streams.
 * @param array $image_info This optional parameter allows you to extract some extended information from the image file. Currently, this will return the different JPG APP markers as an associative array. Some programs use these APP markers to embed text information in images. A very common one is to embed IPTC information in the APP13 marker. You can use the iptcparse function to parse the binary APP13 marker into something readable.
 * @return array|false
 */
/**
 * @param array $image_info
 * @return array<int|string, int|string>|false
 * @refcount 1
 */
function getimagesize(string $filename, &$image_info = null): array|false {}

/** @genstubs-expose-comment-block
 * Get the size of an image from a string
 * @return array|false
 */
/**
 * @param array $image_info
 * @return array<int|string, int|string>|false
 * @refcount 1
 */
function getimagesizefromstring(string $string, &$image_info = null): array|false {}

/* info.c */

/** @genstubs-expose-comment-block
 * Outputs information about PHP's configuration
 * @param int $flags The output may be customized by passing one or more of the following constants bitwise values summed together in the optional flags parameter. One can also combine the respective constants or bitwise values together with the bitwise or operator.
 * @return true
 */
function phpinfo(int $flags = INFO_ALL): true {} // make return type void

/** @genstubs-expose-comment-block
 * Gets the current PHP version
 * @param string|null $extension An optional extension name.
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function phpversion(?string $extension = null): string|false {}

/** @genstubs-expose-comment-block
 * Prints out the credits for PHP
 * @param int $flags To generate a custom credits page, you may want to use the flags parameter.
 * @return true
 */
function phpcredits(int $flags = CREDITS_ALL): true {}

/** @genstubs-expose-comment-block
 * Returns the type of interface between web server and PHP
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function php_sapi_name(): string|false {}

/** @genstubs-expose-comment-block
 * Returns information about the operating system PHP is running on
 * @param string $mode mode is a single character that defines what information is returned: 'a': This is the default. Returns the same information as the individual modes 's' 'n' 'r' 'v' 'm' separated by spaces. 's': Operating system name. eg. FreeBSD. 'n': Host name. eg. localhost.example.com. 'r': Release name. eg. 5.1.2-RELEASE. 'v': Version information. Varies a lot between operating systems. 'm': Machine type. eg. i386.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function php_uname(string $mode = "a"): string {}

/** @genstubs-expose-comment-block
 * Return a list of .ini files parsed from the additional ini dir
 * @return string|false
 */
/** @refcount 1 */
function php_ini_scanned_files(): string|false {}

/** @genstubs-expose-comment-block
 * Retrieve a path to the loaded php.ini file
 * @return string|false
 */
/** @refcount 1 */
function php_ini_loaded_file(): string|false {}

/* iptc.c */

/** @genstubs-expose-comment-block
 * Embeds binary IPTC data into a JPEG image
 * @param string $iptc_data The data to be written.
 * @param string $filename Path to the JPEG image.
 * @param int $spool Spool flag. If the spool flag is less than 2 then the JPEG will be returned as a string. Otherwise the JPEG will be printed to STDOUT.
 * @return string|bool
 */
/** @refcount 1 */
function iptcembed(string $iptc_data, string $filename, int $spool = 0): string|bool {}

/** @genstubs-expose-comment-block
 * Parse a binary IPTC block into single tags
 * @param string $iptc_block A binary IPTC block.
 * @return array|false
 */
/**
 * @return array<string, array>|false
 * @refcount 1
 */
function iptcparse(string $iptc_block): array|false {}

/* levenshtein.c */

/** @genstubs-expose-comment-block
 * Calculate Levenshtein distance between two strings
 * @param string $string1 One of the strings being evaluated for Levenshtein distance.
 * @param string $string2 One of the strings being evaluated for Levenshtein distance.
 * @param int $insertion_cost Defines the cost of insertion.
 * @param int $replacement_cost Defines the cost of replacement.
 * @param int $deletion_cost Defines the cost of deletion.
 * @return int
 */
function levenshtein(string $string1, string $string2, int $insertion_cost = 1, int $replacement_cost = 1, int $deletion_cost = 1): int {}

/* link.c */

#if (defined(HAVE_SYMLINK) || defined(PHP_WIN32))
/** @genstubs-expose-comment-block
 * Returns the target of a symbolic link
 * @param string $path The symbolic link path.
 * @return string|false
 */
/** @refcount 1 */
function readlink(string $path): string|false {}

/** @genstubs-expose-comment-block
 * Gets information about a link
 * @param string $path Path to the link.
 * @return int|false
 */
function linkinfo(string $path): int|false {}

/** @genstubs-expose-comment-block
 * Creates a symbolic link
 * @param string $target Target of the link.
 * @param string $link The link name.
 * @return bool
 */
function symlink(string $target, string $link): bool {}

/** @genstubs-expose-comment-block
 * Create a hard link
 * @param string $target Target of the link.
 * @param string $link The link name.
 * @return bool
 */
function link(string $target, string $link): bool {}
#endif

/* mail.c */

/** @genstubs-expose-comment-block
 * Send mail
 * @param string $to Receiver, or receivers of the mail.
 * @param string $subject Subject of the email to be sent.
 * @param string $message Message to be sent.
 * @param array|string $additional_headers String or array to be inserted at the end of the email header.
 * @param string $additional_params The additional_params parameter can be used to pass additional flags as command line options to the program configured to be used when sending mail, as defined by the sendmail_path configuration setting. For example, this can be used to set the envelope sender address when using sendmail with the -f sendmail option.
 * @return bool
 */
function mail(string $to, string $subject, string $message, array|string $additional_headers = [], string $additional_params = ""): bool {}

/* math.c */

/** @genstubs-expose-comment-block
 * Absolute value
 * @param int|float $num The numeric value to process
 * @return int|float
 */
/** @compile-time-eval */
function abs(int|float $num): int|float {}

/** @genstubs-expose-comment-block
 * Round fractions up
 * @param int|float $num The value to round
 * @return float
 */
/** @compile-time-eval */
function ceil(int|float $num): float {}

/** @genstubs-expose-comment-block
 * Round fractions down
 * @param int|float $num The numeric value to round
 * @return float
 */
/** @compile-time-eval */
function floor(int|float $num): float {}

enum RoundingMode {
    case HalfAwayFromZero;
    case HalfTowardsZero;
    case HalfEven;
    case HalfOdd;
    case TowardsZero;
    case AwayFromZero;
    case NegativeInfinity;
    case PositiveInfinity;
}

/** @genstubs-expose-comment-block
 * Rounds a float
 * @param int|float $num The value to round.
 * @param int $precision The optional number of decimal digits to round to.
 * @param int|RoundingMode $mode Use RoundingMode or one of the following constants to specify the mode in which rounding occurs. Constants Description PHP_ROUND_HALF_UP Rounds num away from zero when it is half way there, making 1.5 into 2 and -1.5 into -2. PHP_ROUND_HALF_DOWN Rounds num towards zero when it is half way there, making 1.5 into 1 and -1.5 into -1. PHP_ROUND_HALF_EVEN Rounds num towards the nearest even value when it is half way there, making both 1.5 and 2.5 into 2. PHP_ROUND_HALF_ODD Rounds num towards the nearest odd value when it is half way there, making 1.5 into 1 and 2.5 into 3. However, please note that some newly added modes only exist in RoundingMode.
 * @return float
 */
/** @compile-time-eval */
function round(int|float $num, int $precision = 0, int|RoundingMode $mode = RoundingMode::HalfAwayFromZero): float {}

/** @genstubs-expose-comment-block
 * Sine
 * @param float $num A value in radians
 * @return float
 */
/** @compile-time-eval */
function sin(float $num): float {}

/** @genstubs-expose-comment-block
 * Cosine
 * @param float $num An angle in radians
 * @return float
 */
/** @compile-time-eval */
function cos(float $num): float {}

/** @genstubs-expose-comment-block
 * Tangent
 * @param float $num The argument to process in radians
 * @return float
 */
/** @compile-time-eval */
function tan(float $num): float {}

/** @genstubs-expose-comment-block
 * Arc sine
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function asin(float $num): float {}

/** @genstubs-expose-comment-block
 * Arc cosine
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function acos(float $num): float {}

/** @genstubs-expose-comment-block
 * Arc tangent
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function atan(float $num): float {}

/** @genstubs-expose-comment-block
 * Inverse hyperbolic tangent
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function atanh(float $num): float {}

/** @genstubs-expose-comment-block
 * Arc tangent of two variables
 * @param float $y Dividend parameter
 * @param float $x Divisor parameter
 * @return float
 */
/** @compile-time-eval */
function atan2(float $y, float $x): float {}

/** @genstubs-expose-comment-block
 * Hyperbolic sine
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function sinh(float $num): float {}

/** @genstubs-expose-comment-block
 * Hyperbolic cosine
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function cosh(float $num): float {}

/** @genstubs-expose-comment-block
 * Hyperbolic tangent
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function tanh(float $num): float {}

/** @genstubs-expose-comment-block
 * Inverse hyperbolic sine
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function asinh(float $num): float {}

/** @genstubs-expose-comment-block
 * Inverse hyperbolic cosine
 * @param float $num The value to process
 * @return float
 */
/** @compile-time-eval */
function acosh(float $num): float {}

/** @genstubs-expose-comment-block
 * Returns exp($num) - 1, computed in a way that is accurate even
 * when the value of number is close to zero
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function expm1(float $num): float {}

/** @genstubs-expose-comment-block
 * Returns log(1 + number), computed in a way that is accurate even when
 * the value of number is close to zero
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function log1p(float $num): float {}

/** @genstubs-expose-comment-block
 * Get value of pi
 * @return float
 */
/** @compile-time-eval */
function pi(): float {}

/** @genstubs-expose-comment-block
 * Checks whether a float is finite
 * @param float $num The float to check
 * @return bool
 */
/** @compile-time-eval */
function is_finite(float $num): bool {}

/** @genstubs-expose-comment-block
 * Checks whether a float is NAN
 * @param float $num The float to check
 * @return bool
 */
/** @compile-time-eval */
function is_nan(float $num): bool {}

/** @genstubs-expose-comment-block
 * Integer division
 * @return int
 */
/** @compile-time-eval */
function intdiv(int $num1, int $num2): int {}

/** @genstubs-expose-comment-block
 * Checks whether a float is infinite
 * @param float $num The float to check
 * @return bool
 */
/** @compile-time-eval */
function is_infinite(float $num): bool {}

/** @genstubs-expose-comment-block
 * Exponential expression
 * @param mixed $num The base to use
 * @param mixed $exponent The exponent
 * @return int|float|object
 */
/** @compile-time-eval */
function pow(mixed $num, mixed $exponent): int|float|object {}

/** @genstubs-expose-comment-block
 * Calculates the exponent of e
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function exp(float $num): float {}

/** @genstubs-expose-comment-block
 * Natural logarithm
 * @param float $num The value to calculate the logarithm for
 * @param float $base The optional logarithmic base to use (defaults to 'e' and so to the natural logarithm).
 * @return float
 */
/** @compile-time-eval */
function log(float $num, float $base = M_E): float {}

/** @genstubs-expose-comment-block
 * Base-10 logarithm
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function log10(float $num): float {}

/** @genstubs-expose-comment-block
 * Square root
 * @param float $num The argument to process
 * @return float
 */
/** @compile-time-eval */
function sqrt(float $num): float {}

/** @genstubs-expose-comment-block
 * Calculate the length of the hypotenuse of a right-angle triangle
 * @param float $x Length of first side
 * @param float $y Length of second side
 * @return float
 */
/** @compile-time-eval */
function hypot(float $x, float $y): float {}

/** @genstubs-expose-comment-block
 * Converts the number in degrees to the radian equivalent
 * @param float $num Angular value in degrees
 * @return float
 */
/** @compile-time-eval */
function deg2rad(float $num): float {}

/** @genstubs-expose-comment-block
 * Converts the radian number to the equivalent number in degrees
 * @param float $num A radian value
 * @return float
 */
/** @compile-time-eval */
function rad2deg(float $num): float {}

/** @genstubs-expose-comment-block
 * Binary to decimal
 * @param string $binary_string The binary string to convert. Any invalid characters in binary_string are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.
 * @return int|float
 */
/** @compile-time-eval */
function bindec(string $binary_string): int|float {}

/** @genstubs-expose-comment-block
 * Hexadecimal to decimal
 * @param string $hex_string The hexadecimal string to convert
 * @return int|float
 */
/** @compile-time-eval */
function hexdec(string $hex_string): int|float {}

/** @genstubs-expose-comment-block
 * Octal to decimal
 * @param string $octal_string The octal string to convert. Any invalid characters in octal_string are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.
 * @return int|float
 */
/** @compile-time-eval */
function octdec(string $octal_string): int|float {}

/** @genstubs-expose-comment-block
 * Decimal to binary
 * @param int $num Decimal value to convert
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function decbin(int $num): string {}

/** @genstubs-expose-comment-block
 * Decimal to octal
 * @param int $num Decimal value to convert
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function decoct(int $num): string {}

/** @genstubs-expose-comment-block
 * Decimal to hexadecimal
 * @param int $num The decimal value to convert.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 * @frameless-function {"arity": 1}
 */
function dechex(int $num): string {}

/** @genstubs-expose-comment-block
 * Convert a number between arbitrary bases
 * @param string $num The number to convert. Any invalid characters in num are silently ignored. As of PHP 7.4.0 supplying any invalid characters is deprecated.
 * @param int $from_base The base num is in
 * @param int $to_base The base to convert num to
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function base_convert(string $num, int $from_base, int $to_base): string {}

/** @genstubs-expose-comment-block
 * Format a number with grouped thousands
 * @param float $num The number being formatted.
 * @param int $decimals Sets the number of decimal digits. If 0, the decimal_separator is omitted from the return value. As of PHP 8.3.0, when the value is negative, num is rounded to decimals significant digits before the decimal point. Prior to PHP 8.3.0, negative values were ignored and handled the same as 0.
 * @param string|null $decimal_separator Sets the separator for the decimal point.
 * @param string|null $thousands_separator Sets the thousands separator.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function number_format(float $num, int $decimals = 0, ?string $decimal_separator = ".", ?string $thousands_separator = ","): string {}

/** @genstubs-expose-comment-block
 * Returns the floating point remainder (modulo) of the division
 * of the arguments
 * @param float $num1 The dividend
 * @param float $num2 The divisor
 * @return float
 */
/**
 * @compile-time-eval
 */
function fmod(float $num1, float $num2): float {}

/** @genstubs-expose-comment-block
 * Divides two numbers, according to IEEE 754
 * @param float $num1 The dividend (numerator)
 * @param float $num2 The divisor
 * @return float
 */
/**
 * @compile-time-eval
 */
function fdiv(float $num1, float $num2): float {}

/** @genstubs-expose-comment-block
 * Raise one number to the power of another, according to IEEE 754
 * @return float
 */
/**
 * @compile-time-eval
 */
function fpow(float $num, float $exponent): float {}

/* microtime.c */

#ifdef HAVE_GETTIMEOFDAY
/** @genstubs-expose-comment-block
 * Return current Unix timestamp with microseconds
 * @param bool $as_float If used and set to true, microtime will return a float instead of a string, as described in the return values section below.
 * @return string|float
 */
/** @refcount 1 */
function microtime(bool $as_float = false): string|float {}

/** @genstubs-expose-comment-block
 * Get current time
 * @param bool $as_float When set to true, a float instead of an array is returned.
 * @return array|float
 */
/**
 * @return array<string, int>|float
 * @refcount 1
 */
function gettimeofday(bool $as_float = false): array|float {}
#endif

#ifdef HAVE_GETRUSAGE
/** @genstubs-expose-comment-block
 * Gets the current resource usages
 * @param int $mode If mode is 1, getrusage will be called with RUSAGE_CHILDREN.
 * @return array|false
 */
/**
 * @return array<string, int>|false
 * @refcount 1
 */
function getrusage(int $mode = 0): array|false {}
#endif

/* pack.c */

/** @genstubs-expose-comment-block
 * Pack data into binary string
 * @param string $format The format string consists of format codes followed by an optional repeater argument. The repeater argument can be either an integer value or * for repeating to the end of the input data. For a, A, h, H the repeat count specifies how many characters of one data argument are taken, for @ it is the absolute position where to put the next data, for everything else the repeat count specifies how many data arguments are consumed and packed into the resulting binary string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function pack(string $format, mixed ...$values): string {}

/** @genstubs-expose-comment-block
 * Unpack data from binary string
 * @param string $format See pack for an explanation of the format codes.
 * @param string $string The packed data.
 * @param int $offset The offset to begin unpacking from.
 * @return array|false
 */
/**
 * @return array<int|string, mixed>|false
 * @compile-time-eval
 * @refcount 1
 */
function unpack(string $format, string $string, int $offset = 0): array|false {}

/* password.c */

/** @genstubs-expose-comment-block
 * Returns information about the given hash
 * @return array
 */
/**
 * @return array<string, string|array|null>
 * @refcount 1
 */
function password_get_info(string $hash): array {}

/** @genstubs-expose-comment-block
 * Creates a password hash
 * @return string
 */
/**
 * @refcount 1
 */
function password_hash(#[\SensitiveParameter] string $password, string|int|null $algo, array $options = []): string {}

/** @genstubs-expose-comment-block
 * Checks if the given hash matches the given options
 * @return bool
 */
function password_needs_rehash(string $hash, string|int|null $algo, array $options = []): bool {}

/** @genstubs-expose-comment-block
 * Verifies that a password matches a hash
 * @return bool
 */
function password_verify(#[\SensitiveParameter] string $password, string $hash): bool {}

/** @genstubs-expose-comment-block
 * Get available password hashing algorithm IDs
 * @return array
 */
/**
 * @compile-time-eval
 */
function password_algos(): array {}

/* proc_open.c */

#ifdef PHP_CAN_SUPPORT_PROC_OPEN
/** @genstubs-expose-comment-block
 * Execute a command and open file pointers for input/output
 * @param array|string $command The commandline to execute as string. Special characters have to be properly escaped, and proper quoting has to be applied.
 * @param array $descriptor_spec An indexed array where the key represents the descriptor number and the value represents how PHP will pass that descriptor to the child process. 0 is stdin, 1 is stdout, while 2 is stderr.
 * @param array $pipes Will be set to an indexed array of file pointers that correspond to PHP's end of any pipes that are created.
 * @param string|null $cwd The initial working dir for the command. This must be an absolute directory path, or null if you want to use the default value (the working dir of the current PHP process)
 * @param array|null $env_vars An array with the environment variables for the command that will be run, or null to use the same environment as the current PHP process
 * @param array|null $options Allows you to specify additional options. Currently supported options include: suppress_errors (windows only): suppresses errors generated by this function when it's set to true bypass_shell (windows only): bypass cmd.exe shell when set to true blocking_pipes (windows only): force blocking pipes when set to true create_process_group (windows only): allow the child process to handle CTRL events when set to true create_new_console (windows only): the new process has a new console, instead of inheriting its parent's console
 * @return resource|false
 */
/**
 * @param array $pipes
 * @return resource|false
 * @refcount 1
 */
function proc_open(array|string $command, array $descriptor_spec, &$pipes, ?string $cwd = null, ?array $env_vars = null, ?array $options = null) {}

/** @genstubs-expose-comment-block
 * Close a process opened by proc_open and return the exit code of that process
 * @param resource $process The proc_open resource that will be closed.
 * @return int
 */
/** @param resource $process */
function proc_close($process): int {}

/** @genstubs-expose-comment-block
 * Kills a process opened by proc_open
 * @param resource $process The proc_open resource that will be closed.
 * @param int $signal This optional parameter is only useful on POSIX operating systems; you may specify a signal to send to the process using the kill(2) system call.  The default is SIGTERM.
 * @return bool
 */
/** @param resource $process */
function proc_terminate($process, int $signal = 15): bool {}

/** @genstubs-expose-comment-block
 * Get information about a process opened by proc_open
 * @param resource $process The proc_open resource that will be evaluated.
 * @return array
 */
/**
 * @param resource $process
 * @return array<string, bool|int|string>
 * @refcount 1
 */
function proc_get_status($process): array {}
#endif

/* quot_print.c */

/** @genstubs-expose-comment-block
 * Convert a quoted-printable string to an 8 bit string
 * @param string $string The input string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function quoted_printable_decode(string $string): string {}

/** @genstubs-expose-comment-block
 * Convert a 8 bit string to a quoted-printable string
 * @param string $string The input string.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function quoted_printable_encode(string $string): string {}

/* soundex.c */

/** @genstubs-expose-comment-block
 * Calculate the soundex key of a string
 * @param string $string The input string.
 * @return string
 */
/** @refcount 1 */
function soundex(string $string): string {}

/* streamsfuncs.c */

/** @genstubs-expose-comment-block
 * Runs the equivalent of the select() system call on the given
 * arrays of streams with a timeout specified by seconds and microseconds
 * @param array|null $read The streams listed in the read array will be watched to see if characters become available for reading (more precisely, to see if a read will not block - in particular, a stream resource is also ready on end-of-file, in which case an fread will return a zero length string).
 * @param array|null $write The streams listed in the write array will be watched to see if a write will not block.
 * @param array|null $except The streams listed in the except array will be watched for high priority exceptional ("out-of-band") data arriving.
 * @param int|null $seconds The seconds and microseconds together form the timeout parameter, seconds specifies the number of seconds while microseconds the number of microseconds. The timeout is an upper bound on the amount of time that stream_select will wait before it returns. If seconds and microseconds are both set to 0, stream_select will not wait for data - instead it will return immediately, indicating the current status of the streams.
 * @param int|null $microseconds See seconds description.
 * @return int|false
 */
function stream_select(?array &$read, ?array &$write, ?array &$except, ?int $seconds, ?int $microseconds = null): int|false {}

/** @genstubs-expose-comment-block
 * Creates a stream context
 * @param array|null $options Must be an associative array of associative arrays in the format $arr['wrapper']['option'] = $value, or null. Refer to context options for a list of available wrappers and options.
 * @param array|null $params Must be an associative array in the format $arr['parameter'] = $value, or null. Refer to context parameters for a listing of standard stream parameters.
 * @return resource
 */
/**
 * @return resource
 * @refcount 1
 */
function stream_context_create(?array $options = null, ?array $params = null) {}

/** @genstubs-expose-comment-block
 * Set parameters for a stream/wrapper/context
 * @param resource $context The stream or context to apply the parameters too.
 * @param array $params An associative array of parameters to be set in the following format: $params['paramname'] = "paramvalue";.
 * @return true
 */
/** @param resource $context */
function stream_context_set_params($context, array $params): true {}

/** @genstubs-expose-comment-block
 * Retrieves parameters from a context
 * @param resource $context A stream resource or a context resource
 * @return array
 */
/**
 * @param resource $context
 * @return array<string, mixed>
 * @refcount 1
 */
function stream_context_get_params($context): array {}

/** @genstubs-expose-comment-block
 * Sets an option for a stream/wrapper/context
 * @param resource $stream_or_context The stream or context resource to apply the options to.
 * @param string $wrapper The name of the wrapper (which may be different than the protocol). Refer to context options and parameters for a listing of stream options.
 * @param string $option_name The name of the option.
 * @param mixed $value The value of the option.
 * @param array $options The options to set for stream_or_context.
 * @return bool|bool
 */
/** @param resource $context */
function stream_context_set_option($context, array|string $wrapper_or_options, ?string $option_name = null, mixed $value = UNKNOWN): true {}

/** @genstubs-expose-comment-block
 * Sets options on the specified context
 * @param resource $context The stream or context resource to apply the options to.
 * @param array $options The options to set for context.
 * @return true
 */
/** @param resource $context */
function stream_context_set_options($context, array $options): true {}

/** @genstubs-expose-comment-block
 * Retrieve options for a stream/wrapper/context
 * @param resource $stream_or_context The stream or context to get options from
 * @return array
 */
/**
 * @param resource $stream_or_context
 * @return array<string, mixed>
 */
function stream_context_get_options($stream_or_context): array {}

/** @genstubs-expose-comment-block
 * Retrieve the default stream context
 * @return resource
 */
/** @return resource */
function stream_context_get_default(?array $options = null) {}

/** @genstubs-expose-comment-block
 * Set the default stream context
 * @param array $options The options to set for the default context.
 * @return resource
 */
/** @return resource */
function stream_context_set_default(array $options) {}

/** @genstubs-expose-comment-block
 * Attach a filter to a stream
 * @param resource $stream The target stream.
 * @param string $filtername The filter name.
 * @param int $read_write By default, stream_filter_prepend will attach the filter to the read filter chain if the file was opened for reading (i.e. File Mode: r, andor +).  The filter will also be attached to the write filter chain if the file was opened for writing (i.e. File Mode: w, a, andor +). STREAM_FILTER_READ, STREAM_FILTER_WRITE, andor STREAM_FILTER_ALL can also be passed to the read_write parameter to override this behavior. See stream_filter_append for an example of using this parameter.
 * @param mixed $params This filter will be added with the specified params to the beginning of the list and will therefore be called first during stream operations.  To add a filter to the end of the list, use stream_filter_append.
 * @return resource
 */
/**
 * @param resource $stream
 * @return resource|false
 */
function stream_filter_prepend($stream, string $filter_name, int $mode = 0, mixed $params = UNKNOWN) {}

/** @genstubs-expose-comment-block
 * Attach a filter to a stream
 * @param resource $stream The target stream.
 * @param string $filtername The filter name.
 * @param int $read_write By default, stream_filter_append will attach the filter to the read filter chain if the file was opened for reading (i.e. File Mode: r, andor +).  The filter will also be attached to the write filter chain if the file was opened for writing (i.e. File Mode: w, a, andor +). STREAM_FILTER_READ, STREAM_FILTER_WRITE, andor STREAM_FILTER_ALL can also be passed to the read_write parameter to override this behavior.
 * @param mixed $params This filter will be added with the specified params to the end of the list and will therefore be called last during stream operations. To add a filter to the beginning of the list, use stream_filter_prepend.
 * @return resource
 */
/**
 * @param resource $stream
 * @return resource|false
 */
function stream_filter_append($stream, string $filter_name, int $mode = 0, mixed $params = UNKNOWN) {}

/** @genstubs-expose-comment-block
 * Remove a filter from a stream
 * @param resource $stream_filter The stream filter to be removed.
 * @return bool
 */
/** @param resource $stream_filter */
function stream_filter_remove($stream_filter): bool {}

/** @genstubs-expose-comment-block
 * Open Internet or Unix domain socket connection
 * @param string $address Address to the socket to connect to.
 * @param int $error_code Will be set to the system level error number if connection fails.
 * @param string $error_message Will be set to the system level error message if the connection fails.
 * @param float|null $timeout Number of seconds until the connect() system call should timeout. By default, default_socket_timeout is used. This parameter only applies when not making asynchronous connection attempts. To set a timeout for readingwriting data over the socket, use the stream_set_timeout, as the timeout only applies while making connecting the socket.
 * @param int $flags Bitmask field which may be set to any combination of connection flags. Currently the select of connection flags is limited to STREAM_CLIENT_CONNECT (default), STREAM_CLIENT_ASYNC_CONNECT and STREAM_CLIENT_PERSISTENT.
 * @param resource|null $context A valid context resource created with stream_context_create.
 * @return resource|false
 */
/**
 * @param int $error_code
 * @param string $error_message
 * @param resource|null $context
 * @return resource|false
 * @refcount 1
 */
function stream_socket_client(string $address, &$error_code = null, &$error_message = null, ?float $timeout = null, int $flags = STREAM_CLIENT_CONNECT, $context = null) {}

/** @genstubs-expose-comment-block
 * Create an Internet or Unix domain server socket
 * @param string $address The type of socket created is determined by the transport specified using standard URL formatting: transport:target.
 * @param int $error_code If the optional error_code and error_message arguments are present they will be set to indicate the actual system level error that occurred in the system-level socket(), bind(), and listen() calls. If the value returned in error_code is 0 and the function returned false, it is an indication that the error occurred before the bind() call. This is most likely due to a problem initializing the socket. Note that the error_code and error_message arguments will always be passed by reference.
 * @param string $error_message See error_code description.
 * @param int $flags A bitmask field which may be set to any combination of socket creation flags.
 * @return resource|false
 */
/**
 * @param int $error_code
 * @param string $error_message
 * @param resource|null $context
 * @return resource|false
 * @refcount 1
 */
function stream_socket_server(string $address, &$error_code = null, &$error_message = null, int $flags = STREAM_SERVER_BIND | STREAM_SERVER_LISTEN, $context = null) {}

/** @genstubs-expose-comment-block
 * Accept a connection on a socket created by stream_socket_server
 * @param resource $socket The server socket to accept a connection from.
 * @param float|null $timeout Override the default socket accept timeout. Time should be given in seconds. By default, default_socket_timeout is used.
 * @param string $peer_name Will be set to the name (address) of the client which connected, if included and available from the selected transport.
 * @return resource|false
 */
/**
 * @param resource $socket
 * @param string $peer_name
 * @return resource|false
 * @refcount 1
 */
function stream_socket_accept($socket, ?float $timeout = null, &$peer_name = null) {}

/** @genstubs-expose-comment-block
 * Retrieve the name of the local or remote sockets
 * @param resource $socket The socket to get the name of.
 * @param bool $remote If set to true the remote socket name will be returned, if set to false the local socket name will be returned.
 * @return string|false
 */
/** @param resource $socket */
function stream_socket_get_name($socket, bool $remote): string|false {}

/** @genstubs-expose-comment-block
 * Receives data from a socket, connected or not
 * @param resource $socket The remote socket.
 * @param int $length The number of bytes to receive from the socket.
 * @param int $flags The value of flags can be any combination of the following: Possible values for flags STREAM_OOB Process OOB (out-of-band) data. STREAM_PEEK Retrieve data from the socket, but do not consume the buffer. Subsequent calls to fread or stream_socket_recvfrom will see the same data.
 * @param string|null $address If address is provided it will be populated with the address of the remote socket.
 * @return string|false
 */
/**
 * @param resource $socket
 * @param string|null $address
 * @refcount 1
 */
function stream_socket_recvfrom($socket, int $length, int $flags = 0, &$address = null): string|false {}

/** @genstubs-expose-comment-block
 * Sends a message to a socket, whether it is connected or not
 * @param resource $socket The socket to send data to.
 * @param string $data The data to be sent.
 * @param int $flags The value of flags can be any combination of the following: possible values for flags STREAM_OOB Process OOB (out-of-band) data.
 * @param string $address The address specified when the socket stream was created will be used unless an alternate address is specified in address.
 * @return int|false
 */
/** @param resource $socket */
function stream_socket_sendto($socket, string $data, int $flags = 0, string $address = ""): int|false {}

/** @genstubs-expose-comment-block
 * Turns encryption on/off on an already connected socket
 * @param resource $stream The stream resource.
 * @param bool $enable Enabledisable cryptography on the stream.
 * @param int|null $crypto_method Setup encryption on the stream. Valid methods are STREAM_CRYPTO_METHOD_SSLv2_CLIENT STREAM_CRYPTO_METHOD_SSLv3_CLIENT STREAM_CRYPTO_METHOD_SSLv23_CLIENT STREAM_CRYPTO_METHOD_ANY_CLIENT STREAM_CRYPTO_METHOD_TLS_CLIENT STREAM_CRYPTO_METHOD_TLSv1_0_CLIENT STREAM_CRYPTO_METHOD_TLSv1_1_CLIENT STREAM_CRYPTO_METHOD_TLSv1_2_CLIENT STREAM_CRYPTO_METHOD_TLSv1_3_CLIENT (as of PHP 7.4.0) STREAM_CRYPTO_METHOD_SSLv2_SERVER STREAM_CRYPTO_METHOD_SSLv3_SERVER STREAM_CRYPTO_METHOD_SSLv23_SERVER STREAM_CRYPTO_METHOD_ANY_SERVER STREAM_CRYPTO_METHOD_TLS_SERVER STREAM_CRYPTO_METHOD_TLSv1_0_SERVER STREAM_CRYPTO_METHOD_TLSv1_1_SERVER STREAM_CRYPTO_METHOD_TLSv1_2_SERVER STREAM_CRYPTO_METHOD_TLSv1_3_SERVER (as of PHP 7.4.0)
 * @param resource|null $session_stream Seed the stream with settings from session_stream.
 * @return int|bool
 */
/**
 * @param resource $stream
 * @param resource|null $session_stream
 */
function stream_socket_enable_crypto($stream, bool $enable, ?int $crypto_method = null, $session_stream = null): int|bool {}

#ifdef HAVE_SHUTDOWN
/** @genstubs-expose-comment-block
 * Shutdown a full-duplex connection
 * @param resource $stream An open stream (opened with stream_socket_client, for example)
 * @param int $mode One of the following constants: STREAM_SHUT_RD (disable further receptions), STREAM_SHUT_WR (disable further transmissions) or STREAM_SHUT_RDWR (disable further receptions and transmissions).
 * @return bool
 */
/** @param resource $stream */
function stream_socket_shutdown($stream, int $mode): bool {}
#endif

#ifdef HAVE_SOCKETPAIR
/** @genstubs-expose-comment-block
 * Creates a pair of connected, indistinguishable socket streams
 * @param int $domain The protocol family to be used: STREAM_PF_INET, STREAM_PF_INET6 or STREAM_PF_UNIX
 * @param int $type The type of communication to be used: STREAM_SOCK_DGRAM, STREAM_SOCK_RAW, STREAM_SOCK_RDM, STREAM_SOCK_SEQPACKET or STREAM_SOCK_STREAM
 * @param int $protocol The protocol to be used: STREAM_IPPROTO_ICMP, STREAM_IPPROTO_IP, STREAM_IPPROTO_RAW, STREAM_IPPROTO_TCP or STREAM_IPPROTO_UDP
 * @return array|false
 */
/**
 * @return array<int, resource>|false
 * @refcount 1
 */
function stream_socket_pair(int $domain, int $type, int $protocol): array|false {}
#endif

/** @genstubs-expose-comment-block
 * Copies data from one stream to another
 * @param resource $from The source stream
 * @param resource $to The destination stream
 * @param int|null $length Maximum bytes to copy. By default all bytes left are copied.
 * @param int $offset The offset where to start to copy data
 * @return int|false
 */
/**
 * @param resource $from
 * @param resource $to
 */
function stream_copy_to_stream($from, $to, ?int $length = null, int $offset = 0): int|false {}

/** @genstubs-expose-comment-block
 * Reads remainder of a stream into a string
 * @param resource $stream A stream resource (e.g. returned from fopen)
 * @param int|null $length The maximum bytes to read. Defaults to null (read all the remaining buffer).
 * @param int $offset Seek to the specified offset before reading. If this number is negative, no seeking will occur and reading will start from the current position.
 * @return string|false
 */
/**
 * @param resource $stream
 * @refcount 1
 */
function stream_get_contents($stream, ?int $length = null, int $offset = -1): string|false {}

/** @genstubs-expose-comment-block
 * Tells whether the stream supports locking
 * @param resource $stream The stream to check.
 * @return bool
 */
/** @param resource $stream */
function stream_supports_lock($stream): bool {}

/** @genstubs-expose-comment-block
 * Sets write file buffering on the given stream
 * @param resource $stream The file pointer.
 * @param int $size The number of bytes to buffer. If size is 0 then write operations are unbuffered.  This ensures that all writes with fwrite are completed before other processes are allowed to write to that output stream.
 * @return int
 */
/** @param resource $stream */
function stream_set_write_buffer($stream, int $size): int {}

/** @genstubs-expose-comment-block
 * Alias stream_set_write_buffer
 */
/**
 * @param resource $stream
 * @alias stream_set_write_buffer
 */
function set_file_buffer($stream, int $size): int {}

/** @genstubs-expose-comment-block
 * Set read file buffering on the given stream
 * @return int
 */
/** @param resource $stream */
function stream_set_read_buffer($stream, int $size): int {}

/** @genstubs-expose-comment-block
 * Set blocking/non-blocking mode on a stream
 * @param resource $stream The stream.
 * @param bool $enable If enable is false, the given stream will be switched to non-blocking mode, and if true, it will be switched to blocking mode.  This affects calls like fgets and fread that read from the stream.  In non-blocking mode an fgets call will always return right away while in blocking mode it will wait for data to become available on the stream.
 * @return bool
 */
/** @param resource $stream */
function stream_set_blocking($stream, bool $enable): bool {}

/** @genstubs-expose-comment-block
 * Alias stream_set_blocking
 */
/**
 * @param resource $stream
 * @alias stream_set_blocking
 */
function socket_set_blocking($stream, bool $enable): bool {}

/** @genstubs-expose-comment-block
 * Retrieves header/meta data from streams/file pointers
 * @param resource $stream The stream can be any stream created by fopen, fsockopen pfsockopen and stream_socket_client.
 * @return array
 */
/**
 * @param resource $stream
 * @return array<string, mixed>
 */
function stream_get_meta_data($stream): array {}

/** @genstubs-expose-comment-block
 * Alias stream_get_meta_data
 */
/**
 * @param resource $stream
 * @return array<string, mixed>
 * @alias stream_get_meta_data
 */
function socket_get_status($stream): array {}

/** @genstubs-expose-comment-block
 * Gets line from stream resource up to a given delimiter
 * @param resource $stream A valid file handle.
 * @param int $length The maximum number of bytes to read from the handle. Negative values are not supported. Zero (0) means the default socket chunk size, i.e. 8192 bytes.
 * @param string $ending An optional string delimiter.
 * @return string|false
 */
/**
 * @param resource $stream
 * @refcount 1
 */
function stream_get_line($stream, int $length, string $ending = ""): string|false {}

/** @genstubs-expose-comment-block
 * Resolve filename against the include path
 * @param string $filename The filename to resolve.
 * @return string|false
 */
/** @refcount 1 */
function stream_resolve_include_path(string $filename): string|false {}

/** @genstubs-expose-comment-block
 * Retrieve list of registered streams
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function stream_get_wrappers(): array {}

/** @genstubs-expose-comment-block
 * Retrieve list of registered socket transports
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function stream_get_transports(): array {}

/** @genstubs-expose-comment-block
 * Checks if a stream is a local stream
 * @param resource|string $stream The stream resource or URL to check.
 * @return bool
 */
/** @param resource|string $stream */
function stream_is_local($stream): bool {}

/** @genstubs-expose-comment-block
 * Check if a stream is a TTY
 * @return bool
 */
/** @param resource $stream */
function stream_isatty($stream): bool {}

#ifdef PHP_WIN32
/** @genstubs-expose-comment-block
 * Get or set VT100 support for the specified stream associated to an output buffer of a Windows console.
 * @return bool
 */
/** @param resource $stream */
function sapi_windows_vt100_support($stream, ?bool $enable = null): bool {}
#endif

/** @genstubs-expose-comment-block
 * Set the stream chunk size
 * @return int
 */
/** @param resource $stream */
function stream_set_chunk_size($stream, int $size): int {}

#if (defined(HAVE_SYS_TIME_H) || defined(PHP_WIN32))
/** @genstubs-expose-comment-block
 * Set timeout period on a stream
 * @param resource $stream The target stream.
 * @param int $seconds The seconds part of the timeout to be set.
 * @param int $microseconds The microseconds part of the timeout to be set.
 * @return bool
 */
/** @param resource $stream */
function stream_set_timeout($stream, int $seconds, int $microseconds = 0): bool {}

/**
 * @param resource $stream
 * @alias stream_set_timeout
 */
#[\Deprecated(since: '8.5', message: "use stream_set_timeout() instead")]
/** @genstubs-expose-comment-block
 * Alias stream_set_timeout
 */
function socket_set_timeout($stream, int $seconds, int $microseconds = 0): bool {}
#endif

/* type.c */

/** @genstubs-expose-comment-block
 * Get the type of a variable
 * @param mixed $value The variable being type checked.
 * @return string
 */
/**
 * @compile-time-eval
 */
function gettype(mixed $value): string {}

/** @genstubs-expose-comment-block
 * Gets the type name of a variable in a way that is suitable for debugging
 * @param mixed $value The variable being type checked.
 * @return string
 */
/**
 * @compile-time-eval
 */
function get_debug_type(mixed $value): string {}

/** @genstubs-expose-comment-block
 * Set the type of a variable
 * @param mixed $var The variable being converted.
 * @param string $type Possibles values of type are: "boolean" or "bool" "integer" or "int" "float" or "double" "string" "array" "object" "null"
 * @return bool
 */
function settype(mixed &$var, string $type): bool {}

/** @genstubs-expose-comment-block
 * Get the integer value of a variable
 * @param mixed $value The scalar value being converted to an integer
 * @param int $base The base for the conversion
 * @return int
 */
/**
 * @compile-time-eval
 */
function intval(mixed $value, int $base = 10): int {}

/** @genstubs-expose-comment-block
 * Get float value of a variable
 * @param mixed $value May be any scalar type. floatval should not be used on objects, as doing so will emit an E_WARNING level error and return 1.
 * @return float
 */
/**
 * @compile-time-eval
 */
function floatval(mixed $value): float {}

/** @genstubs-expose-comment-block
 * Alias floatval
 */
/** @alias floatval */
function doubleval(mixed $value): float {}

/** @genstubs-expose-comment-block
 * Get the boolean value of a variable
 * @return bool
 */
/**
 * @compile-time-eval
 */
function boolval(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Get string value of a variable
 * @param mixed $value The variable that is being converted to a string.
 * @return string
 */
/**
 * @compile-time-eval
 */
function strval(mixed $value): string {}

/** @genstubs-expose-comment-block
 * Finds whether a variable is null
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_null(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds whether a variable is a resource
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_resource(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds out whether a variable is a boolean
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_bool(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Find whether the type of a variable is integer
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_int(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Alias is_int
 */
/** @alias is_int */
function is_integer(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Alias is_int
 */
/** @alias is_int */
function is_long(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds whether the type of a variable is float
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_float(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Alias is_float
 */
/** @alias is_float */
function is_double(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds whether a variable is a number or a numeric string
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 * @frameless-function {"arity": 1}
 */
function is_numeric(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Find whether the type of a variable is string
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_string(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds whether a variable is an array
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_array(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds whether a variable is an object
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_object(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Finds whether a variable is a scalar
 * @param mixed $value The variable being evaluated.
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_scalar(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Verify that a value can be called as a function from the current scope
 * @param mixed $value The value to be checked.
 * @param bool $syntax_only If set to true the function only verifies that value might be a function or method. It will reject any values that are not invokable objects, Closure, strings, or arrays that do not have a valid structure to be used as a callback. A valid callable array has 2 entries, the first of which is an object or a string, and the second a string.
 * @param string $callable_name Receives the "callable name", e.g. "SomeClass::someMethod". Note, however, that despite the implication that SomeClass::someMethod() is a callable static method, this is not the case.
 * @return bool
 */
/** @param string $callable_name */
function is_callable(mixed $value, bool $syntax_only = false, &$callable_name = null): bool {}

/** @genstubs-expose-comment-block
 * Verify that the contents of a variable is an iterable value
 * @param mixed $value The value to check
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_iterable(mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Verify that the contents of a variable is a countable value
 * @param mixed $value The value to check
 * @return bool
 */
/**
 * @compile-time-eval
 */
function is_countable(mixed $value): bool {}

/* uniqid.c */

#ifdef HAVE_GETTIMEOFDAY
/** @genstubs-expose-comment-block
 * Generate a time-based identifier
 * @param string $prefix Can be useful, for instance, if you generate identifiers simultaneously on several hosts that could generate the same identifier at the same microsecond. (This can happen even on a single host if the system clock is moved backwards, such as by an NTP adjustment.)
 * @param bool $more_entropy If set to true, uniqid will add additional entropy (using the combined linear congruential generator) at the end of the return value, which increases the likelihood that the result will be unique.
 * @return string
 */
/** @refcount 1 */
function uniqid(string $prefix = "", bool $more_entropy = false): string {}
#endif

/* url.c */

/** @genstubs-expose-comment-block
 * Parse a URL and return its components
 * @param string $url The URL to parse.
 * @param int $component Specify one of PHP_URL_SCHEME, PHP_URL_HOST, PHP_URL_PORT, PHP_URL_USER, PHP_URL_PASS, PHP_URL_PATH, PHP_URL_QUERY or PHP_URL_FRAGMENT to retrieve just a specific URL component as a string (except when PHP_URL_PORT is given, in which case the return value will be an int).
 * @return int|string|array|null|false
 */
/**
 * @return int|string|array<string, int|string>|null|false
 * @compile-time-eval
 * @refcount 1
 */
function parse_url(string $url, int $component = -1): int|string|array|null|false {}

/** @genstubs-expose-comment-block
 * URL-encodes string
 * @param string $string The string to be encoded.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function urlencode(string $string): string {}

/** @genstubs-expose-comment-block
 * Decodes URL-encoded string
 * @param string $string The string to be decoded.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function urldecode(string $string): string {}

/** @genstubs-expose-comment-block
 * URL-encode according to RFC 3986
 * @param string $string The URL to be encoded.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function rawurlencode(string $string): string {}

/** @genstubs-expose-comment-block
 * Decode URL-encoded strings
 * @param string $string The URL to be decoded.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function rawurldecode(string $string): string {}

/** @genstubs-expose-comment-block
 * Fetches all the headers sent by the server in response to an HTTP request
 * @param string $url The target URL.
 * @param bool $associative If the optional associative parameter is set to true, get_headers parses the response and sets the array's keys.
 * @param resource|null $context A valid context resource created with stream_context_create, or null to use the default context.
 * @return array|false
 */
/**
 * @param resource|null $context
 * @return array<int|string, string|array>|false
 * @refcount 1
 */
function get_headers(string $url, bool $associative = false, $context = null): array|false {}

/* user_filters.c */

/** @genstubs-expose-comment-block
 * Returns a bucket object from the brigade to operate on
 * @param resource $brigade The brigade to return a bucket object from.
 * @return StreamBucket|null
 */
/**
 * @param resource $brigade
 * @refcount 1
 */
function stream_bucket_make_writeable($brigade): ?StreamBucket {}

/** @genstubs-expose-comment-block
 * Prepend bucket to brigade
 * @return void
 */
/** @param resource $brigade */
function stream_bucket_prepend($brigade, StreamBucket $bucket): void {}

/** @genstubs-expose-comment-block
 * Append bucket to brigade
 * @return void
 */
/** @param resource $brigade */
function stream_bucket_append($brigade, StreamBucket $bucket): void {}

/** @genstubs-expose-comment-block
 * Create a new bucket for use on the current stream
 * @return StreamBucket
 */
/**
 * @param resource $stream
 * @refcount 1
 */
function stream_bucket_new($stream, string $buffer): StreamBucket {}

/** @genstubs-expose-comment-block
 * Retrieve list of registered filters
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function stream_get_filters(): array {}

/** @genstubs-expose-comment-block
 * Register a user defined stream filter
 * @param string $filter_name The filter name to be registered.
 * @param string $class To implement a filter, you need to define a class as an extension of php_user_filter with a number of member functions. When performing readwrite operations on the stream to which your filter is attached, PHP will pass the data through your filter (and any other filters attached to that stream) so that the data may be modified as desired. You must implement the methods exactly as described in php_user_filter - doing otherwise will lead to undefined behaviour.
 * @return bool
 */
function stream_filter_register(string $filter_name, string $class): bool {}

/* uuencode.c */

/** @genstubs-expose-comment-block
 * Uuencode a string
 * @param string $string The data to be encoded.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function convert_uuencode(string $string): string {}

/** @genstubs-expose-comment-block
 * Decode a uuencoded string
 * @param string $string The uuencoded data.
 * @return string|false
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function convert_uudecode(string $string): string|false {}

/* var.c */

/** @genstubs-expose-comment-block
 * Dumps information about a variable
 * @param mixed $value The expression to dump.
 * @param mixed $values Further expressions to dump.
 * @return void
 */
function var_dump(mixed $value, mixed ...$values): void {}

/** @genstubs-expose-comment-block
 * Outputs or returns a parsable string representation of a variable
 * @param mixed $value The variable you want to export.
 * @param bool $return If used and set to true, var_export will return the variable representation instead of outputting it.
 * @return string|null
 */
/** @refcount 1 */
function var_export(mixed $value, bool $return = false): ?string {}

/** @genstubs-expose-comment-block
 * Dumps a string representation of an internal zval structure to output
 * @param mixed $value The variable or value to dump.
 * @param mixed $values Further variables or values to dump.
 * @return void
 */
function debug_zval_dump(mixed $value, mixed ...$values): void {}

/** @genstubs-expose-comment-block
 * Generates a storable representation of a value
 * @param mixed $value The value to be serialized. serialize handles all types, except the resource-type and some objects (see note below). You can even serialize arrays that contain references to itself. Circular references inside the arrayobject you are serializing will also be stored. Any other reference will be lost.
 * @return string
 */
/**
 * @compile-time-eval
 * @refcount 1
 */
function serialize(mixed $value): string {}

/** @genstubs-expose-comment-block
 * Creates a PHP value from a stored representation
 * @param string $data The serialized string.
 * @param array $options Any options to be provided to unserialize, as an associative array.
 * @return mixed
 */
function unserialize(string $data, array $options = []): mixed {}

/** @genstubs-expose-comment-block
 * Returns the amount of memory allocated to PHP
 * @param bool $real_usage Set this to true to get total memory allocated from system, including unused pages. If not set or false only the used memory is reported.
 * @return int
 */
function memory_get_usage(bool $real_usage = false): int {}

/** @genstubs-expose-comment-block
 * Returns the peak of memory allocated by PHP
 * @param bool $real_usage Set this to true to get the real size of memory allocated from system. If not set or false only the memory used by emalloc() is reported.
 * @return int
 */
function memory_get_peak_usage(bool $real_usage = false): int {}

/** @genstubs-expose-comment-block
 * Reset the peak memory usage
 * @return void
 */
function memory_reset_peak_usage(): void {}

/* versioning.c */

/** @genstubs-expose-comment-block
 * Compares two "PHP-standardized" version number strings
 * @param string $version1 First version number.
 * @param string $version2 Second version number.
 * @param string|null $operator An optional operator. The possible operators are: <, lt, <=, le, >, gt, >=, ge, ==, =, eq, !=, <>, ne respectively.
 * @return int|bool
 */
/** @compile-time-eval */
function version_compare(string $version1, string $version2, ?string $operator = null): int|bool {}

/* win32/codepage.c */

#ifdef PHP_WIN32
/** @genstubs-expose-comment-block
 * Set process codepage
 * @return bool
 */
function sapi_windows_cp_set(int $codepage): bool {}

/** @genstubs-expose-comment-block
 * Get current codepage
 * @return int
 */
function sapi_windows_cp_get(string $kind = ""): int {}

/** @genstubs-expose-comment-block
 * Convert string from one codepage to another
 * @return string|null
 */
function sapi_windows_cp_conv(int|string $in_codepage, int|string $out_codepage, string $subject): ?string {}

/** @genstubs-expose-comment-block
 * Indicates whether the codepage is UTF-8 compatible
 * @return bool
 */
function sapi_windows_cp_is_utf8(): bool {}

/** @genstubs-expose-comment-block
 * Set or remove a CTRL event handler
 * @return bool
 */
function sapi_windows_set_ctrl_handler(?callable $handler, bool $add = true): bool {}

/** @genstubs-expose-comment-block
 * Send a CTRL event to another process
 * @return bool
 */
function sapi_windows_generate_ctrl_event(int $event, int $pid = 0): bool {}
#endif
