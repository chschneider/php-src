<?php

/** @generate-class-entries */

function litespeed_request_headers(): array {}

/** @genstubs-expose-comment-block
 * Fetch all HTTP request headers
 * @return array
 */
/** @alias litespeed_request_headers */
function getallheaders(): array {}

/** @genstubs-expose-comment-block
 * Fetch all HTTP request headers
 * @return array
 */
/** @alias litespeed_request_headers */
function apache_request_headers(): array {}

function litespeed_response_headers(): array|false {}

/** @genstubs-expose-comment-block
 * Fetch all HTTP response headers
 * @return array
 */
/** @alias litespeed_response_headers */
function apache_response_headers(): array|false {}

/** @genstubs-expose-comment-block
 * Get a list of loaded Apache modules
 * @return array
 */
function apache_get_modules(): array {}

function litespeed_finish_request(): bool {}
