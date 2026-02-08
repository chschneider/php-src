<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue LIBXML_VERSION
 */
const LIBXML_VERSION = UNKNOWN;
/**
 * @var string
 * @cvalue LIBXML_DOTTED_VERSION
 */
const LIBXML_DOTTED_VERSION = UNKNOWN;
/**
 * @var string
 * @cvalue PHP_LIBXML_LOADED_VERSION
 */
const LIBXML_LOADED_VERSION = UNKNOWN;

/**
 * @var int
 * @cvalue XML_PARSE_RECOVER
 */
const LIBXML_RECOVER = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NOENT
 */
const LIBXML_NOENT = UNKNOWN;
#if LIBXML_VERSION >= 21300
/**
 * @var int
 * @cvalue XML_PARSE_NO_XXE
 */
const LIBXML_NO_XXE = UNKNOWN;
#endif
/**
 * @var int
 * @cvalue XML_PARSE_DTDLOAD
 */
const LIBXML_DTDLOAD = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_DTDATTR
 */
const LIBXML_DTDATTR = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_DTDVALID
 */
const LIBXML_DTDVALID = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NOERROR
 */
const LIBXML_NOERROR = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NOWARNING
 */
const LIBXML_NOWARNING = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NOBLANKS
 */
const LIBXML_NOBLANKS = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_XINCLUDE
 */
const LIBXML_XINCLUDE = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NSCLEAN
 */
const LIBXML_NSCLEAN = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NOCDATA
 */
const LIBXML_NOCDATA = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_NONET
 */
const LIBXML_NONET = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_PEDANTIC
 */
const LIBXML_PEDANTIC = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_COMPACT
 */
const LIBXML_COMPACT = UNKNOWN;
/**
 * @var int
 * @cvalue XML_SAVE_NO_DECL
 */
const LIBXML_NOXMLDECL = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_HUGE
 */
const LIBXML_PARSEHUGE = UNKNOWN;
/**
 * @var int
 * @cvalue XML_PARSE_BIG_LINES
 */
const LIBXML_BIGLINES = UNKNOWN;
/**
 * @var int
 * @cvalue LIBXML_SAVE_NOEMPTYTAG
 */
const LIBXML_NOEMPTYTAG = UNKNOWN;

#ifdef LIBXML_SCHEMAS_ENABLED
/**
 * @var int
 * @cvalue XML_SCHEMA_VAL_VC_I_CREATE
 */
const LIBXML_SCHEMA_CREATE = UNKNOWN;
#endif

/**
 * @var int
 * @cvalue HTML_PARSE_NOIMPLIED
 */
const LIBXML_HTML_NOIMPLIED = UNKNOWN;

/**
 * @var int
 * @cvalue HTML_PARSE_NODEFDTD
 */
const LIBXML_HTML_NODEFDTD = UNKNOWN;

/**
 * @var int
 * @cvalue XML_ERR_NONE
 */
const LIBXML_ERR_NONE = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERR_WARNING
 */
const LIBXML_ERR_WARNING = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERR_ERROR
 */
const LIBXML_ERR_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue XML_ERR_FATAL
 */
const LIBXML_ERR_FATAL = UNKNOWN;

class LibXMLError
{
    public int $level;
    public int $code;
    public int $column;
    public string $message;
    public string $file;
    public int $line;
}

/** @genstubs-expose-comment-block
 * Set the streams context for the next libxml document load or write
 * @param resource $context The stream context resource (created with stream_context_create)
 * @return void
 */
/** @param resource $context */
function libxml_set_streams_context($context): void {}

/** @genstubs-expose-comment-block
 * Disable libxml errors and allow user to fetch error information as needed
 * @param bool|null $use_errors Enable (true) user error handling or disable (false) user error handling. Disabling will also clear any existing libxml errors.
 * @return bool
 */
function libxml_use_internal_errors(?bool $use_errors = null): bool {}

/** @genstubs-expose-comment-block
 * Retrieve last error from libxml
 * @return LibXMLError|false
 */
function libxml_get_last_error(): LibXMLError|false {}

/** @genstubs-expose-comment-block
 * Retrieve array of errors
 * @return array
 */
/** @return array<int, LibXMLError> */
function libxml_get_errors(): array {}

/** @genstubs-expose-comment-block
 * Clear libxml error buffer
 * @return void
 */
function libxml_clear_errors(): void {}

#[\Deprecated(since: '8.0', message: 'as external entity loading is disabled by default')]
/** @genstubs-expose-comment-block
 * Disable the ability to load external entities
 * @param bool $disable Disable (true) or enable (false) libxml extensions (such as , and ) to load external entities.
 * @return bool
 */
function libxml_disable_entity_loader(bool $disable = true): bool {}

/** @genstubs-expose-comment-block
 * Changes the default external entity loader
 * @return bool
 */
function libxml_set_external_entity_loader(?callable $resolver_function): true {}

/** @genstubs-expose-comment-block
 * Get the current external entity loader
 * @return callable|null
 */
function libxml_get_external_entity_loader(): ?callable {}
