<?php

/** @generate-class-entries */

/**
 * @strict-properties
 * @not-serializable
 */
final class Shmop {}

/** @genstubs-expose-comment-block
 * Create or open shared memory block
 * @param string $mode The flags that you can use: "a" for access (sets SHM_RDONLY for shmat) use this flag when you need to open an existing shared memory segment for read only "c" for create (sets IPC_CREATE) use this flag when you need to create a new shared memory segment or if a segment with the same key exists, try to open it for read and write "w" for read & write access use this flag when you need to read and write to a shared memory segment, use this flag in most cases. "n" create a new memory segment (sets IPC_CREATE|IPC_EXCL) use this flag when you want to create a new shared memory segment but if one already exists with the same flag, fail. This is useful for security purposes, using this you can prevent race condition exploits.
 * @return Shmop|false
 */
function shmop_open(int $key, string $mode, int $permissions, int $size): Shmop|false {}

/** @genstubs-expose-comment-block
 * Read data from shared memory block
 * @return string
 */
function shmop_read(Shmop $shmop, int $offset, int $size): string {}

#[\Deprecated(since: '8.0', message: 'as Shmop objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Close shared memory block
 * @return void
 */
function shmop_close(Shmop $shmop): void {}

/** @genstubs-expose-comment-block
 * Get size of shared memory block
 * @return int
 */
function shmop_size(Shmop $shmop): int {}

/** @genstubs-expose-comment-block
 * Write data into shared memory block
 * @return int
 */
function shmop_write(Shmop $shmop, string $data, int $offset): int {}

/** @genstubs-expose-comment-block
 * Delete shared memory block
 * @return bool
 */
function shmop_delete(Shmop $shmop): bool {}
