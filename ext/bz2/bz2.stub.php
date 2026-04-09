<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Opens a bzip2 compressed file
 * @return resource|false
 */
/**
 * @param string|resource $file
 * @return resource|false
 */
 function bzopen($file, string $mode) {}

/** @genstubs-expose-comment-block
 * Binary safe bzip2 file read
 * @return string|false
 */
/** @param resource $bz */
function bzread($bz, int $length = 1024): string|false {}

/** @genstubs-expose-comment-block
 * Binary safe bzip2 file write
 * @return int|false
 */
/**
 * @param resource $bz
 * @implementation-alias fwrite
 */
function bzwrite($bz, string $data, ?int $length = null): int|false {}

/** @genstubs-expose-comment-block
 * Do nothing
 * @return bool
 */
/**
 * @param resource $bz
 * @implementation-alias fflush
 */
function bzflush($bz): bool {}

/** @genstubs-expose-comment-block
 * Close a bzip2 file
 * @return bool
 */
/**
 * @param resource $bz
 * @implementation-alias fclose
 */
function bzclose($bz): bool {}

/** @genstubs-expose-comment-block
 * Returns a bzip2 error number
 * @return int
 */
/** @param resource $bz */
function bzerrno($bz): int {}

/** @genstubs-expose-comment-block
 * Returns a bzip2 error string
 * @return string
 */
/** @param resource $bz */
function bzerrstr($bz): string {}

/** @genstubs-expose-comment-block
 * Returns the bzip2 error number and error string in an array
 * @return array
 */
/**
 * @param resource $bz
 * @return array<string, int|string>
 * @refcount 1
 */
function bzerror($bz): array {}

/** @genstubs-expose-comment-block
 * Compress a string into bzip2 encoded data
 * @return string|int
 */
function bzcompress(string $data, int $block_size = 4, int $work_factor = 0): string|int {}

/** @genstubs-expose-comment-block
 * Decompresses bzip2 encoded data
 * @return string|int|false
 */
function bzdecompress(string $data, bool $use_less_memory = false): string|int|false {}
