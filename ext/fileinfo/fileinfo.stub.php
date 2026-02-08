<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue MAGIC_NONE
 */
const FILEINFO_NONE = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_SYMLINK
 */
const FILEINFO_SYMLINK = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_MIME
 */
const FILEINFO_MIME = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_MIME_TYPE
 */
const FILEINFO_MIME_TYPE = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_MIME_ENCODING
 */
const FILEINFO_MIME_ENCODING = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_DEVICES
 */
const FILEINFO_DEVICES = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_CONTINUE
 */
const FILEINFO_CONTINUE = UNKNOWN;
#ifdef MAGIC_PRESERVE_ATIME
/**
 * @var int
 * @cvalue MAGIC_PRESERVE_ATIME
 */
const FILEINFO_PRESERVE_ATIME = UNKNOWN;
#endif
#ifdef MAGIC_RAW
/**
 * @var int
 * @cvalue MAGIC_RAW
 */
const FILEINFO_RAW = UNKNOWN;
#endif
/**
 * @var int
 * @cvalue MAGIC_APPLE
 */
const FILEINFO_APPLE = UNKNOWN;
/**
 * @var int
 * @cvalue MAGIC_EXTENSION
 */
const FILEINFO_EXTENSION = UNKNOWN;

/** @not-serializable */
class finfo
{
    /** @alias finfo_open */
    public function __construct(int $flags = FILEINFO_NONE, ?string $magic_database = null) {}

    /**
     * @param resource|null $context
     * @tentative-return-type
     * @alias finfo_file
     */
    public function file(string $filename, int $flags = FILEINFO_NONE, $context = null): string|false {}

    /**
     * @param resource|null $context
     * @tentative-return-type
     * @alias finfo_buffer
     */
    public function buffer(string $string, int $flags = FILEINFO_NONE, $context = null): string|false {}

    /**
     * @alias finfo_set_flags
     * @tentative-return-type
     */
    public function set_flags(int $flags): true {}
}

/** @genstubs-expose-comment-block
 * Create a new finfo instance
 * @return finfo|false
 */
/** @refcount 1 */
function finfo_open(int $flags = FILEINFO_NONE, ?string $magic_database = null): finfo|false {}

#[\Deprecated(since: '8.5', message: 'as finfo objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Close finfo instance
 * @return bool
 */
function finfo_close(finfo $finfo): true {}

/** @genstubs-expose-comment-block
 * Set libmagic configuration options
 * @return true|true
 */
function finfo_set_flags(finfo $finfo, int $flags): true {}

/** @genstubs-expose-comment-block
 * Return information about a file
 * @return string|false|string|false
 */
/**
 * @param resource|null $context
 * @refcount 1
 */
function finfo_file(finfo $finfo, string $filename, int $flags = FILEINFO_NONE, $context = null): string|false {}

/** @genstubs-expose-comment-block
 * Return information about a string buffer
 * @return string|false|string|false
 */
/**
 * @param resource|null $context
 * @refcount 1
 */
function finfo_buffer(finfo $finfo, string $string, int $flags = FILEINFO_NONE, $context = null): string|false {}

/** @genstubs-expose-comment-block
 * Detect MIME Content-type for a file
 * @return string|false
 */
/**
 * @param resource|string $filename
 * @refcount 1
 */
function mime_content_type($filename): string|false {}
