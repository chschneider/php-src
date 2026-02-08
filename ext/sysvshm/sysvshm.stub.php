<?php

/** @generate-class-entries */

/**
 * @strict-properties
 * @not-serializable
 */
final class SysvSharedMemory
{
}

/** @genstubs-expose-comment-block
 * Creates or open a shared memory segment
 * @return SysvSharedMemory|false
 */
function shm_attach(int $key, ?int $size = null, int $permissions = 0666): SysvSharedMemory|false {}

/** @genstubs-expose-comment-block
 * Disconnects from shared memory segment
 * @return bool
 */
function shm_detach(SysvSharedMemory $shm): true {}

/** @genstubs-expose-comment-block
 * Check whether a specific entry exists
 * @return bool
 */
function shm_has_var(SysvSharedMemory $shm, int $key): bool {}

/** @genstubs-expose-comment-block
 * Removes shared memory from Unix systems
 * @return bool
 */
function shm_remove(SysvSharedMemory $shm): bool {}

/** @genstubs-expose-comment-block
 * Inserts or updates a variable in shared memory
 * @return bool
 */
function shm_put_var(SysvSharedMemory $shm, int $key, mixed $value): bool {}

/** @genstubs-expose-comment-block
 * Returns a variable from shared memory
 * @return mixed
 */
function shm_get_var(SysvSharedMemory $shm, int $key): mixed {}

/** @genstubs-expose-comment-block
 * Removes a variable from shared memory
 * @return bool
 */
function shm_remove_var(SysvSharedMemory $shm, int $key): bool {}
