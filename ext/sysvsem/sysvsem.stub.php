<?php

/** @generate-class-entries */

/**
 * @strict-properties
 * @not-serializable
 */
final class SysvSemaphore
{
}

/** @genstubs-expose-comment-block
 * Get a semaphore id
 * @return SysvSemaphore|false
 */
function sem_get(int $key, int $max_acquire = 1, int $permissions = 0666, bool $auto_release = true): SysvSemaphore|false {}

/** @genstubs-expose-comment-block
 * Acquire a semaphore
 * @return bool
 */
function sem_acquire(SysvSemaphore $semaphore, bool $non_blocking = false): bool {}

/** @genstubs-expose-comment-block
 * Release a semaphore
 * @return bool
 */
function sem_release(SysvSemaphore $semaphore): bool {}

/** @genstubs-expose-comment-block
 * Remove a semaphore
 * @return bool
 */
function sem_remove(SysvSemaphore $semaphore): bool {}
