<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Resets the contents of the opcode cache
 * @return bool
 */
function opcache_reset(): bool {}

/** @genstubs-expose-comment-block
 * Get status information about the cache
 * @return array|false
 */
/**
 * @return array<string, mixed>|false
 * @refcount 1
 */
function opcache_get_status(bool $include_scripts = true): array|false {}

/** @genstubs-expose-comment-block
 * Compiles and caches a PHP script without executing it
 * @return bool
 */
function opcache_compile_file(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Invalidates a cached script
 * @return bool
 */
function opcache_invalidate(string $filename, bool $force = false): bool {}

/** @genstubs-expose-comment-block
 * Blacklists a function from being JIT compiled
 * @return void
 */
function opcache_jit_blacklist(Closure $closure): void {}

/** @genstubs-expose-comment-block
 * Get configuration information about the cache
 * @return array|false
 */
/**
 * @return array<string, mixed>|false
 * @refcount 1
 */
function opcache_get_configuration(): array|false {}

/** @genstubs-expose-comment-block
 * Tells whether a script is cached in OPCache
 * @return bool
 */
function opcache_is_script_cached(string $filename): bool {}

/** @genstubs-expose-comment-block
 * Tells whether a script is cached in OPCache file cache
 * @return bool
 */
function opcache_is_script_cached_in_file_cache(string $filename): bool {}
