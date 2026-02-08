<?php

/** @generate-class-entries */

/**
 * @var string
 * @cvalue PHPDBG_VERSION
 */
const PHPDBG_VERSION = UNKNOWN;

/**
 * @var int
 * @cvalue PHPDBG_COLOR_PROMPT
 */
const PHPDBG_COLOR_PROMPT = UNKNOWN;
/**
 * @var int
 * @cvalue PHPDBG_COLOR_NOTICE
 */
const PHPDBG_COLOR_NOTICE = UNKNOWN;
/**
 * @var int
 * @cvalue PHPDBG_COLOR_ERROR
 */
const PHPDBG_COLOR_ERROR = UNKNOWN;

/** @genstubs-expose-comment-block
 * Inserts a breakpoint at the next opcode
 * @return void
 */
function phpdbg_break_next(): void {}

/** @genstubs-expose-comment-block
 * Inserts a breakpoint at a line in a file
 * @return void
 */
function phpdbg_break_file(string $file, int $line): void {}

/** @genstubs-expose-comment-block
 * Inserts a breakpoint at entry to a method
 * @return void
 */
function phpdbg_break_method(string $class, string $method): void {}

/** @genstubs-expose-comment-block
 * Inserts a breakpoint at entry to a function
 * @return void
 */
function phpdbg_break_function(string $function): void {}

/** @genstubs-expose-comment-block
 * Sets the color of certain elements
 * @return void
 */
function phpdbg_color(int $element, string $color): void {}

/** @genstubs-expose-comment-block
 * Sets the command prompt
 * @return void
 */
function phpdbg_prompt(string $string): void {}

/** @genstubs-expose-comment-block
 * Attempts to set the execution context
 * @return string|bool
 */
function phpdbg_exec(string $context): string|bool {}

/** @genstubs-expose-comment-block
 * Clears all breakpoints
 * @return void
 */
function phpdbg_clear(): void {}

/** @genstubs-expose-comment-block
 * Starts an oplog
 * @return void
 */
function phpdbg_start_oplog(): void {}

/** @genstubs-expose-comment-block
 * Ends an oplog
 * @return array|null
 */
function phpdbg_end_oplog(array $options = []): ?array {}

/** @genstubs-expose-comment-block
 * Gets executable
 * @return array
 */
function phpdbg_get_executable(array $options = []): array {}
