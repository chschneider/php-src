<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue php_session_disabled
 */
const PHP_SESSION_DISABLED = UNKNOWN;
/**
 * @var int
 * @cvalue php_session_none
 */
const PHP_SESSION_NONE = UNKNOWN;
/**
 * @var int
 * @cvalue php_session_active
 */
const PHP_SESSION_ACTIVE = UNKNOWN;

/** @genstubs-expose-comment-block
 * Get and/or set the current session name
 * @param string|null $name The session name references the name of the session, which is used in cookies and URLs (e.g. PHPSESSID). It should contain only alphanumeric characters; it should be short and descriptive (i.e. for users with enabled cookie warnings). If name is specified and not null, the name of the current session is changed to its value.
 * @return string|false
 */
/** @refcount 1 */
function session_name(?string $name = null): string|false {}

/** @genstubs-expose-comment-block
 * Get and/or set the current session module
 * @param string|null $module If module is specified and not null, that module will be used instead. Passing "user" to this parameter is forbidden. Instead session_set_save_handler has to be called to set a user defined session handler.
 * @return string|false
 */
/** @refcount 1 */
function session_module_name(?string $module = null): string|false {}

/** @genstubs-expose-comment-block
 * Get and/or set the current session save path
 * @param string|null $path Session data path. If specified and not null, the path to which data is saved will be changed. session_save_path needs to be called before session_start for that purpose.
 * @return string|false
 */
/** @refcount 1 */
function session_save_path(?string $path = null): string|false {}

/** @genstubs-expose-comment-block
 * Get and/or set the current session id
 * @param string|null $id If id is specified and not null, it will replace the current session id. session_id needs to be called before session_start for that purpose. Depending on the session handler, not all characters are allowed within the session id. For example, the file session handler only allows characters in the range [a-zA-Z0-9,-]!
 * @return string|false
 */
function session_id(?string $id = null): string|false {}

/** @genstubs-expose-comment-block
 * Create new session id
 * @param string $prefix If prefix is specified, new session id is prefixed by prefix. Not all characters are allowed within the session id.  Characters in the range [a-zA-Z0-9,-] are allowed. Maximum length is 256 characters.
 * @return string|false
 */
/** @refcount 1 */
function session_create_id(string $prefix = ""): string|false {}

/** @genstubs-expose-comment-block
 * Update the current session id with a newly generated one
 * @param bool $delete_old_session Whether to delete the old associated session file or not. You should not delete old session if you need to avoid races caused by deletion or detectavoid session hijack attacks.
 * @return bool
 */
function session_regenerate_id(bool $delete_old_session = false): bool {}

/** @genstubs-expose-comment-block
 * Decodes session data from a session encoded string
 * @param string $data The encoded data to be stored.
 * @return bool
 */
function session_decode(string $data): bool {}

/** @genstubs-expose-comment-block
 * Encodes the current session data as a session encoded string
 * @return string|false
 */
/** @refcount 1 */
function session_encode(): string|false {}

/** @genstubs-expose-comment-block
 * Destroys all data registered to a session
 * @return bool
 */
function session_destroy(): bool {}

/** @genstubs-expose-comment-block
 * Free all session variables
 * @return bool
 */
function session_unset(): bool {}

/** @genstubs-expose-comment-block
 * Perform session data garbage collection
 * @return int|false
 */
function session_gc(): int|false {}

/** @genstubs-expose-comment-block
 * Get the session cookie parameters
 * @return array
 */
/**
 * @return array<string, mixed>
 * @refcount 1
 */
function session_get_cookie_params(): array {}

/** @genstubs-expose-comment-block
 * Write session data and end session
 * @return bool
 */
function session_write_close(): bool {}

/** @genstubs-expose-comment-block
 * Discard session array changes and finish session
 * @return bool
 */
function session_abort(): bool {}

/** @genstubs-expose-comment-block
 * Re-initialize session array with original values
 * @return bool
 */
function session_reset(): bool {}

/** @genstubs-expose-comment-block
 * Returns the current session status
 * @return int
 */
function session_status(): int {}

/** @genstubs-expose-comment-block
 * Session shutdown function
 * @return void
 */
function session_register_shutdown(): void {}

/** @genstubs-expose-comment-block
 * Alias session_write_close
 */
/** @alias session_write_close */
function session_commit(): bool {}

/** @genstubs-expose-comment-block
 * Sets user-level session storage functions
 * @param object $sessionhandler An instance of a class implementing SessionHandlerInterface, and optionally SessionIdInterface andor SessionUpdateTimestampHandlerInterface, such as SessionHandler, to register as the session handler.
 * @param bool $register_shutdown Register session_write_close as a register_shutdown_function function.
 * @param callable $open A callable with the following signature: boolopen stringsavePath stringsessionName
 * @param callable $close A callable with the following signature: boolclose
 * @param callable $read A callable with the following signature: stringread stringsessionId
 * @param callable $write A callable with the following signature: boolwrite stringsessionId stringdata
 * @param callable $destroy A callable with the following signature: booldestroy stringsessionId
 * @param callable $gc A callable with the following signature: boolgc intlifetime
 * @param callable $create_sid A callable with the following signature: stringcreate_sid
 * @param callable $validate_sid A callable with the following signature: boolvalidate_sid stringkey
 * @param callable $update_timestamp A callable with the following signature: boolupdate_timestamp stringkey stringval
 * @return bool|bool
 */
/**
 * @param callable|object $open
 * @param callable|bool $close
 */
function session_set_save_handler(
    $open,
    $close = UNKNOWN,
    callable $read = UNKNOWN,
    callable $write = UNKNOWN,
    callable $destroy = UNKNOWN,
    callable $gc = UNKNOWN,
    ?callable $create_sid = null,
    ?callable $validate_sid = null,
    ?callable $update_timestamp = null
): bool {}

/** @genstubs-expose-comment-block
 * Get and/or set the current cache limiter
 * @param string|null $value If value is specified and not null, the name of the current cache limiter is changed to the new value.
 * @return string|false
 */
/** @refcount 1 */
function session_cache_limiter(?string $value = null): string|false {}

/** @genstubs-expose-comment-block
 * Get and/or set current cache expire
 * @param int|null $value If value is given and not null, the current cache expire is replaced with value.
 * @return int|false
 */
function session_cache_expire(?int $value = null): int|false {}

/** @genstubs-expose-comment-block
 * Set the session cookie parameters
 * @param int $lifetime_or_options When using the first signature, lifetime of the session cookie, defined in seconds.
 * @param string|null $path Path on the domain where the cookie will work. Use a single slash ('') for all paths on the domain.
 * @param string|null $domain Cookie domain, for example 'www.php.net'. To make cookies visible on all subdomains then the domain must be prefixed with a dot like '.php.net'.
 * @param bool|null $secure If true cookie will only be sent over secure connections.
 * @param bool|null $httponly If set to true then PHP will attempt to send the httponly flag when setting the session cookie.
 * @return bool|bool
 */
function session_set_cookie_params(array|int $lifetime_or_options, ?string $path = null, ?string $domain = null, ?bool $secure = null, ?bool $httponly = null): bool {}

/** @genstubs-expose-comment-block
 * Start new or resume existing session
 * @return bool
 */
function session_start(array $options = []): bool {}

interface SessionHandlerInterface
{
    /** @tentative-return-type */
    public function open(string $path, string $name): bool;

    /** @tentative-return-type */
    public function close(): bool;

    /** @tentative-return-type */
    public function read(string $id): string|false;

    /** @tentative-return-type */
    public function write(string $id, string $data): bool;

    /** @tentative-return-type */
    public function destroy(string $id): bool;

    /** @tentative-return-type */
    public function gc(int $max_lifetime): int|false;
}

interface SessionIdInterface
{
    /** @tentative-return-type */
    public function create_sid(): string;
}

interface SessionUpdateTimestampHandlerInterface
{
    /** @tentative-return-type */
    public function validateId(string $id): bool;

    /** @tentative-return-type */
    public function updateTimestamp(string $id, string $data): bool;
}

class SessionHandler implements SessionHandlerInterface, SessionIdInterface
{
    /** @tentative-return-type */
    public function open(string $path, string $name): bool {}

    /** @tentative-return-type */
    public function close(): bool {}

    /** @tentative-return-type */
    public function read(string $id): string|false {}

    /** @tentative-return-type */
    public function write(string $id, string $data): bool {}

    /** @tentative-return-type */
    public function destroy(string $id): bool {}

    /** @tentative-return-type */
    public function gc(int $max_lifetime): int|false {}

    /** @tentative-return-type */
    public function create_sid(): string {}
}
