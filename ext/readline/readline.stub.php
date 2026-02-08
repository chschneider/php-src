<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue READLINE_LIB
 */
const READLINE_LIB = UNKNOWN;

/** @genstubs-expose-comment-block
 * Reads a line
 * @return string|false
 */
function readline(?string $prompt = null): string|false {}

/** @genstubs-expose-comment-block
 * Gets/sets various internal readline variables
 * @return mixed
 */
/** @param int|string|bool|null $value */
function readline_info(?string $var_name = null, $value = null): mixed {}

/** @genstubs-expose-comment-block
 * Adds a line to the history
 * @return true
 */
function readline_add_history(string $prompt): true {}

/** @genstubs-expose-comment-block
 * Clears the history
 * @return true
 */
function readline_clear_history(): true {}

#ifdef HAVE_HISTORY_LIST
/** @genstubs-expose-comment-block
 * Lists the history
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function readline_list_history(): array {}
#endif

/** @genstubs-expose-comment-block
 * Reads the history
 * @return bool
 */
function readline_read_history(?string $filename = null): bool {}

/** @genstubs-expose-comment-block
 * Writes the history
 * @return bool
 */
function readline_write_history(?string $filename = null): bool {}

/** @genstubs-expose-comment-block
 * Registers a completion function
 * @return bool
 */
function readline_completion_function(callable $callback): bool {}


#ifdef HAVE_RL_CALLBACK_READ_CHAR
/** @genstubs-expose-comment-block
 * Initializes the readline callback interface and terminal, prints the prompt and returns immediately
 * @return true
 */
function readline_callback_handler_install(string $prompt, callable $callback): true {}

/** @genstubs-expose-comment-block
 * Reads a character and informs the readline callback interface when a line is received
 * @return void
 */
function readline_callback_read_char(): void {}

/** @genstubs-expose-comment-block
 * Removes a previously installed callback handler and restores terminal settings
 * @return bool
 */
function readline_callback_handler_remove(): bool {}

/** @genstubs-expose-comment-block
 * Redraws the display
 * @return void
 */
function readline_redisplay(): void {}

#ifdef HAVE_RL_ON_NEW_LINE
/** @genstubs-expose-comment-block
 * Inform readline that the cursor has moved to a new line
 * @return void
 */
function readline_on_new_line(): void {}
#endif
#endif
