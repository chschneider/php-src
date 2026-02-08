<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Terminate apache process after this request
 * @return void
 */
function apache_child_terminate(): void {}

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
