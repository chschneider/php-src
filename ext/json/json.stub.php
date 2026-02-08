<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PHP_JSON_HEX_TAG
 */
const JSON_HEX_TAG = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_HEX_AMP
 */
const JSON_HEX_AMP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_HEX_APOS
 */
const JSON_HEX_APOS = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_HEX_QUOT
 */
const JSON_HEX_QUOT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_FORCE_OBJECT
 */
const JSON_FORCE_OBJECT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_NUMERIC_CHECK
 */
const JSON_NUMERIC_CHECK = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_UNESCAPED_SLASHES
 */
const JSON_UNESCAPED_SLASHES = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_PRETTY_PRINT
 */
const JSON_PRETTY_PRINT = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_UNESCAPED_UNICODE
 */
const JSON_UNESCAPED_UNICODE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_PARTIAL_OUTPUT_ON_ERROR
 */
const JSON_PARTIAL_OUTPUT_ON_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_PRESERVE_ZERO_FRACTION
 */
const JSON_PRESERVE_ZERO_FRACTION = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_UNESCAPED_LINE_TERMINATORS
 */
const JSON_UNESCAPED_LINE_TERMINATORS = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_JSON_OBJECT_AS_ARRAY
 */
const JSON_OBJECT_AS_ARRAY = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_BIGINT_AS_STRING
 */
const JSON_BIGINT_AS_STRING = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_JSON_INVALID_UTF8_IGNORE
 */
const JSON_INVALID_UTF8_IGNORE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_INVALID_UTF8_SUBSTITUTE
 */
const JSON_INVALID_UTF8_SUBSTITUTE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_THROW_ON_ERROR
 */
const JSON_THROW_ON_ERROR = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_JSON_ERROR_NONE
 */
const JSON_ERROR_NONE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_DEPTH
 */
const JSON_ERROR_DEPTH = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_STATE_MISMATCH
 */
const JSON_ERROR_STATE_MISMATCH = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_CTRL_CHAR
 */
const JSON_ERROR_CTRL_CHAR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_SYNTAX
 */
const JSON_ERROR_SYNTAX = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_UTF8
 */
const JSON_ERROR_UTF8 = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_RECURSION
 */
const JSON_ERROR_RECURSION = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_INF_OR_NAN
 */
const JSON_ERROR_INF_OR_NAN = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_UNSUPPORTED_TYPE
 */
const JSON_ERROR_UNSUPPORTED_TYPE = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_INVALID_PROPERTY_NAME
 */
const JSON_ERROR_INVALID_PROPERTY_NAME = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_UTF16
 */
const JSON_ERROR_UTF16 = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_JSON_ERROR_NON_BACKED_ENUM
 */
const JSON_ERROR_NON_BACKED_ENUM = UNKNOWN;

/** @genstubs-expose-comment-block
 * Returns the JSON representation of a value
 * @param mixed $value The value being encoded. Can be any type except a resource.
 * @param int $flags Bitmask consisting of JSON_FORCE_OBJECT, JSON_HEX_QUOT, JSON_HEX_TAG, JSON_HEX_AMP, JSON_HEX_APOS, JSON_INVALID_UTF8_IGNORE, JSON_INVALID_UTF8_SUBSTITUTE, JSON_NUMERIC_CHECK, JSON_PARTIAL_OUTPUT_ON_ERROR, JSON_PRESERVE_ZERO_FRACTION, JSON_PRETTY_PRINT, JSON_UNESCAPED_LINE_TERMINATORS, JSON_UNESCAPED_SLASHES, JSON_UNESCAPED_UNICODE, JSON_THROW_ON_ERROR. The behaviour of these constants is described on the JSON constants page.
 * @param int $depth Set the maximum depth. Must be greater than zero.
 * @return string|false
 */
/** @refcount 1 */
function json_encode(mixed $value, int $flags = 0, int $depth = 512): string|false {}

/** @genstubs-expose-comment-block
 * Decodes a JSON string
 * @param string $json The json string being decoded.
 * @param bool|null $associative When true, JSON objects will be returned as associative arrays; when false, JSON objects will be returned as objects. When null, JSON objects will be returned as associative arrays or objects depending on whether JSON_OBJECT_AS_ARRAY is set in the flags.
 * @param int $depth Maximum nesting depth of the structure being decoded. The value must be greater than 0, and less than or equal to 2147483647.
 * @param int $flags Bitmask of JSON_BIGINT_AS_STRING, JSON_INVALID_UTF8_IGNORE, JSON_INVALID_UTF8_SUBSTITUTE, JSON_OBJECT_AS_ARRAY, JSON_THROW_ON_ERROR. The behaviour of these constants is described on the JSON constants page.
 * @return mixed
 */
function json_decode(string $json, ?bool $associative = null, int $depth = 512, int $flags = 0): mixed {}

/** @genstubs-expose-comment-block
 * Checks if a string contains valid JSON
 * @param string $json The string to validate.
 * @param int $depth Maximum nesting depth of the structure being decoded. The value must be greater than 0, and less than or equal to 2147483647.
 * @param int $flags Currently only JSON_INVALID_UTF8_IGNORE is accepted.
 * @return bool
 */
function json_validate(string $json, int $depth = 512, int $flags = 0): bool {}

/** @genstubs-expose-comment-block
 * Returns the last error occurred
 * @return int
 */
function json_last_error(): int {}

/** @genstubs-expose-comment-block
 * Returns the error string of the last json_validate(), json_encode() or json_decode() call
 * @return string
 */
/** @refcount 1 */
function json_last_error_msg(): string {}

interface JsonSerializable
{
    /** @tentative-return-type */
    public function jsonSerialize(): mixed;
}

class JsonException extends Exception
{
}
