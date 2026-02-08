<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PHP_MSG_IPC_NOWAIT
 */
const MSG_IPC_NOWAIT = UNKNOWN;
/**
 * @var int
 * @cvalue EAGAIN
 */
const MSG_EAGAIN = UNKNOWN;
/**
 * @var int
 * @cvalue ENOMSG
 */
const MSG_ENOMSG = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_MSG_NOERROR
 */
const MSG_NOERROR = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_MSG_EXCEPT
 */
const MSG_EXCEPT = UNKNOWN;

/**
 * @strict-properties
 * @not-serializable
 */
final class SysvMessageQueue
{
}

/** @genstubs-expose-comment-block
 * Create or attach to a message queue
 * @return SysvMessageQueue|false
 */
function msg_get_queue(int $key, int $permissions = 0666): SysvMessageQueue|false {}

/** @genstubs-expose-comment-block
 * Send a message to a message queue
 * @return bool
 */
/**
 * @param string|int|float|bool $message
 * @param int $error_code
 */
function msg_send(SysvMessageQueue $queue, int $message_type, $message, bool $serialize = true, bool $blocking = true, &$error_code = null): bool {}

/** @genstubs-expose-comment-block
 * Receive a message from a message queue
 * @return bool
 */
/**
 * @param int $received_message_type
 * @param int $error_code
 */
function msg_receive(
    SysvMessageQueue $queue,
    int $desired_message_type,
    &$received_message_type,
    int $max_message_size,
    mixed &$message,
    bool $unserialize = true,
    int $flags = 0,
    &$error_code = null
): bool {}

/** @genstubs-expose-comment-block
 * Destroy a message queue
 * @return bool
 */
function msg_remove_queue(SysvMessageQueue $queue): bool {}

/** @genstubs-expose-comment-block
 * Returns information from the message queue data structure
 * @return array|false
 */
function msg_stat_queue(SysvMessageQueue $queue): array|false {}

/** @genstubs-expose-comment-block
 * Set information in the message queue data structure
 * @return bool
 */
function msg_set_queue(SysvMessageQueue $queue, array $data): bool {}

/** @genstubs-expose-comment-block
 * Check whether a message queue exists
 * @return bool
 */
function msg_queue_exists(int $key): bool {}
