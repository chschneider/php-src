<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PHP_ZLIB_ENCODING_GZIP
 */
const FORCE_GZIP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ZLIB_ENCODING_DEFLATE
 */
const FORCE_DEFLATE = UNKNOWN;

/**
 * @var int
 * @cvalue PHP_ZLIB_ENCODING_RAW
 */
const ZLIB_ENCODING_RAW = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ZLIB_ENCODING_GZIP
 */
const ZLIB_ENCODING_GZIP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ZLIB_ENCODING_DEFLATE
 */
const ZLIB_ENCODING_DEFLATE = UNKNOWN;

/**
 * @var int
 * @cvalue Z_NO_FLUSH
 */
const ZLIB_NO_FLUSH = UNKNOWN;
/**
 * @var int
 * @cvalue Z_PARTIAL_FLUSH
 */
const ZLIB_PARTIAL_FLUSH = UNKNOWN;
/**
 * @var int
 * @cvalue Z_SYNC_FLUSH
 */
const ZLIB_SYNC_FLUSH = UNKNOWN;
/**
 * @var int
 * @cvalue Z_FULL_FLUSH
 */
const ZLIB_FULL_FLUSH = UNKNOWN;
/**
 * @var int
 * @cvalue Z_BLOCK
 */
const ZLIB_BLOCK = UNKNOWN;
/**
 * @var int
 * @cvalue Z_FINISH
 */
const ZLIB_FINISH = UNKNOWN;

/**
 * @var int
 * @cvalue Z_FILTERED
 */
const ZLIB_FILTERED = UNKNOWN;
/**
 * @var int
 * @cvalue Z_HUFFMAN_ONLY
 */
const ZLIB_HUFFMAN_ONLY = UNKNOWN;
/**
 * @var int
 * @cvalue Z_RLE
 */
const ZLIB_RLE = UNKNOWN;
/**
 * @var int
 * @cvalue Z_FIXED
 */
const ZLIB_FIXED = UNKNOWN;
/**
 * @var int
 * @cvalue Z_DEFAULT_STRATEGY
 */
const ZLIB_DEFAULT_STRATEGY = UNKNOWN;

/**
 * @var string
 * @cvalue ZLIB_VERSION
 */
const ZLIB_VERSION = UNKNOWN;
/**
 * @var int
 * @cvalue ZLIB_VERNUM
 */
const ZLIB_VERNUM = UNKNOWN;

/**
 * @var int
 * @cvalue Z_OK
 */
const ZLIB_OK = UNKNOWN;
/**
 * @var int
 * @cvalue Z_STREAM_END
 */
const ZLIB_STREAM_END = UNKNOWN;
/**
 * @var int
 * @cvalue Z_NEED_DICT
 */
const ZLIB_NEED_DICT = UNKNOWN;
/**
 * @var int
 * @cvalue Z_ERRNO
 */
const ZLIB_ERRNO = UNKNOWN;
/**
 * @var int
 * @cvalue Z_STREAM_ERROR
 */
const ZLIB_STREAM_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue Z_DATA_ERROR
 */
const ZLIB_DATA_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue Z_MEM_ERROR
 */
const ZLIB_MEM_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue Z_BUF_ERROR
 */
const ZLIB_BUF_ERROR = UNKNOWN;
/**
 * @var int
 * @cvalue Z_VERSION_ERROR
 */
const ZLIB_VERSION_ERROR = UNKNOWN;

/**
 * @strict-properties
 * @not-serializable
 */
final class InflateContext
{
}

/**
 * @strict-properties
 * @not-serializable
 */
final class DeflateContext
{
}

/** @genstubs-expose-comment-block
 * ob_start callback function to gzip output buffer
 * @return string|false
 */
/** @refcount 1 */
function ob_gzhandler(string $data, int $flags): string|false {}

/** @genstubs-expose-comment-block
 * Returns the coding type used for output compression
 * @return string|false
 */
/** @refcount 1 */
function zlib_get_coding_type(): string|false {}

/** @genstubs-expose-comment-block
 * Read entire gz-file into an array
 * @param string $filename The file name.
 * @return array|false
 */
/**
 * @return array<int, string>|false
 * @refcount 1
 */
function gzfile(string $filename, bool $use_include_path = false): array|false {}

/** @genstubs-expose-comment-block
 * Open gz-file
 * @param string $filename The file name.
 * @param string $mode As in fopen (rb or wb) but can also include a compression level (wb9) or a strategy: f for filtered data as in wb6f, h for Huffman only compression as in wb1h. (See the description of deflateInit2 in zlib.h for more information about the strategy parameter.)
 * @return resource|false
 */
/**
 * @return resource|false
 * @refcount 1
 */
function gzopen(string $filename, string $mode, bool $use_include_path = false) {}

/** @genstubs-expose-comment-block
 * Output a gz-file
 * @param string $filename The file name. This file will be opened from the filesystem and its contents written to standard output.
 * @return int|false
 */
function readgzfile(string $filename, bool $use_include_path = false): int|false {}

/** @genstubs-expose-comment-block
 * Compress data with the specified encoding
 * @return string|false
 */
/** @refcount 1 */
function zlib_encode(string $data, int $encoding, int $level = -1): string|false {}

/** @genstubs-expose-comment-block
 * Uncompress any raw/gzip/zlib encoded data
 * @return string|false
 */
/** @refcount 1 */
function zlib_decode(string $data, int $max_length = 0): string|false {}

/** @genstubs-expose-comment-block
 * Deflate a string
 * @param string $data The data to deflate.
 * @param int $level The level of compression. Can be given as 0 for no compression up to 9 for maximum compression. If not given, the default compression level will be the default compression level of the zlib library.
 * @param int $encoding One of ZLIB_ENCODING_* constants.
 * @return string|false
 */
/** @refcount 1 */
function gzdeflate(string $data, int $level = -1, int $encoding = ZLIB_ENCODING_RAW): string|false {}

/** @genstubs-expose-comment-block
 * Create a gzip compressed string
 * @param string $data The data to encode.
 * @param int $level The level of compression. Can be given as 0 for no compression up to 9 for maximum compression. If not given, the default compression level will be the default compression level of the zlib library.
 * @param int $encoding The encoding mode. Can be FORCE_GZIP (the default) or FORCE_DEFLATE.
 * @return string|false
 */
/** @refcount 1 */
function gzencode(string $data, int $level = -1, int $encoding = ZLIB_ENCODING_GZIP): string|false {}

/** @genstubs-expose-comment-block
 * Compress a string
 * @param string $data The data to compress.
 * @param int $level The level of compression. Can be given as 0 for no compression up to 9 for maximum compression.
 * @param int $encoding One of ZLIB_ENCODING_* constants.
 * @return string|false
 */
/** @refcount 1 */
function gzcompress(string $data, int $level = -1, int $encoding = ZLIB_ENCODING_DEFLATE): string|false {}

/** @genstubs-expose-comment-block
 * Inflate a deflated string
 * @param string $data The data compressed by gzdeflate.
 * @param int $max_length The maximum length of decoded data.
 * @return string|false
 */
/** @refcount 1 */
function gzinflate(string $data, int $max_length = 0): string|false {}

/** @genstubs-expose-comment-block
 * Decodes a gzip compressed string
 * @param string $data The data to decode, encoded by gzencode.
 * @param int $max_length The maximum length of data to decode.
 * @return string|false
 */
/** @refcount 1 */
function gzdecode(string $data, int $max_length = 0): string|false {}

/** @genstubs-expose-comment-block
 * Uncompress a compressed string
 * @param string $data The data compressed by gzcompress.
 * @param int $max_length The maximum length of data to decode.
 * @return string|false
 */
/** @refcount 1 */
function gzuncompress(string $data, int $max_length = 0): string|false {}

/** @genstubs-expose-comment-block
 * Binary-safe gz-file write
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @param string $data The string to write.
 * @param int|null $length The number of uncompressed bytes to write. If supplied, writing will stop after length (uncompressed) bytes have been written or the end of data is reached, whichever comes first.
 * @return int|false
 */
/**
 * @param resource $stream
 * @alias fwrite
 */
function gzwrite($stream, string $data, ?int $length = null): int|false {}

/** @genstubs-expose-comment-block
 * Alias gzwrite
 */
/**
 * @param resource $stream
 * @alias fwrite
 * @undocumentable gzputs is an alias of gzwrite, but transitive aliases are not yet supported
 */
function gzputs($stream, string $data, ?int $length = null): int|false {}

/** @genstubs-expose-comment-block
 * Rewind the position of a gz-file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @return bool
 */
/**
 * @param resource $stream
 * @alias rewind
 */
function gzrewind($stream): bool {}

/** @genstubs-expose-comment-block
 * Close an open gz-file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @return bool
 */
/**
 * @param resource $stream
 * @alias fclose
 */
function gzclose($stream): bool {}

/** @genstubs-expose-comment-block
 * Test for EOF on a gz-file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @return bool
 */
/**
 * @param resource $stream
 * @alias feof
 */
function gzeof($stream): bool {}

/** @genstubs-expose-comment-block
 * Get character from gz-file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @return string|false
 */
/**
 * @param resource $stream
 * @alias fgetc
 */
function gzgetc($stream): string|false {}

/** @genstubs-expose-comment-block
 * Output all remaining data on a gz-file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @return int
 */
/**
 * @param resource $stream
 * @alias fpassthru
 */
function gzpassthru($stream): int {}

/** @genstubs-expose-comment-block
 * Seek on a gz-file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @param int $offset The seeked offset.
 * @param int $whence whence values are: SEEK_SET - Set position equal to offset bytes. SEEK_CUR - Set position to current location plus offset.
 * @return int
 */
/**
 * @param resource $stream
 * @alias fseek
 */
function gzseek($stream, int $offset, int $whence = SEEK_SET): int {}

/** @genstubs-expose-comment-block
 * Tell gz-file pointer read/write position
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @return int|false
 */
/**
 * @param resource $stream
 * @alias ftell
 */
function gztell($stream): int|false {}

/** @genstubs-expose-comment-block
 * Binary-safe gz-file read
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @param int $length The number of bytes to read.
 * @return string|false
 */
/**
 * @param resource $stream
 * @alias fread
 */
function gzread($stream, int $length): string|false {}

/** @genstubs-expose-comment-block
 * Get line from file pointer
 * @param resource $stream The gz-file pointer. It must be valid, and must point to a file successfully opened by gzopen.
 * @param int|null $length The length of data to get.
 * @return string|false
 */
/**
 * @param resource $stream
 * @alias fgets
 */
function gzgets($stream, ?int $length = null): string|false {}

/** @genstubs-expose-comment-block
 * Initialize an incremental deflate context
 * @return DeflateContext|false
 */
function deflate_init(int $encoding, array|object $options = []): DeflateContext|false {}

/** @genstubs-expose-comment-block
 * Incrementally deflate data
 * @return string|false
 */
function deflate_add(DeflateContext $context, string $data, int $flush_mode = ZLIB_SYNC_FLUSH): string|false {}

/** @genstubs-expose-comment-block
 * Initialize an incremental inflate context
 * @return InflateContext|false
 */
function inflate_init(int $encoding, array|object $options = []): InflateContext|false {}

/** @genstubs-expose-comment-block
 * Incrementally inflate encoded data
 * @return string|false
 */
function inflate_add(InflateContext $context, string $data, int $flush_mode = ZLIB_SYNC_FLUSH): string|false {}

/** @genstubs-expose-comment-block
 * Get decompression status
 * @return int
 */
function inflate_get_status(InflateContext $context): int {}

/** @genstubs-expose-comment-block
 * Get number of bytes read so far
 * @return int
 */
function inflate_get_read_len(InflateContext $context): int {}
