<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Perform a partial request for the specified URI and return all info about it
 * @param string $filename The filename (URI) that's being requested.
 * @return object|false
 */
function apache_lookup_uri(string $filename): object|false {}

/** @genstubs-expose-comment-block
 * Perform an Apache sub-request
 * @param string $uri The file that the virtual command will be performed on.
 * @return bool
 */
function virtual(string $uri): bool {}

/** @genstubs-expose-comment-block
 * Fetch all HTTP request headers
 * @return array
 */
function apache_request_headers(): array {}

/** @genstubs-expose-comment-block
 * Fetch all HTTP request headers
 * @return array
 */
/** @alias apache_request_headers */
function getallheaders(): array {}

/** @genstubs-expose-comment-block
 * Fetch all HTTP response headers
 * @return array
 */
function apache_response_headers(): array {}

/** @genstubs-expose-comment-block
 * Get and set apache request notes
 * @param string $note_name The name of the note.
 * @param string|null $note_value The value of the note.
 * @return string|false
 */
function apache_note(string $note_name, ?string $note_value = null): string|false {}

/** @genstubs-expose-comment-block
 * Set an Apache subprocess_env variable
 * @param string $variable The environment variable that's being set.
 * @param string $value The new variable value.
 * @param bool $walk_to_top Whether to set the top-level variable available to all Apache layers.
 * @return bool
 */
function apache_setenv(string $variable, string $value, bool $walk_to_top = false): bool {}

/** @genstubs-expose-comment-block
 * Get an Apache subprocess_env variable
 * @param string $variable The Apache environment variable
 * @param bool $walk_to_top Whether to get the top-level variable available to all Apache layers.
 * @return string|false
 */
function apache_getenv(string $variable, bool $walk_to_top = false): string|false {}

/** @genstubs-expose-comment-block
 * Fetch Apache version
 * @return string|false
 */
function apache_get_version(): string|false {}

/** @genstubs-expose-comment-block
 * Get a list of loaded Apache modules
 * @return array
 */
function apache_get_modules(): array {}
