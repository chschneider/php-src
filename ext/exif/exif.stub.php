<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue USE_MBSTRING
 */
const EXIF_USE_MBSTRING = UNKNOWN;

/** @genstubs-expose-comment-block
 * Get the header name for an index
 * @return string|false
 */
/** @refcount 1 */
function exif_tagname(int $index): string|false {}

/** @genstubs-expose-comment-block
 * Reads the EXIF headers from an image file
 * @return array|false
 */
/**
 * @param resource|string $file
 * @return array<string, mixed>|false
 * @refcount 1
 */
function exif_read_data($file, ?string $required_sections = null, bool $as_arrays = false, bool $read_thumbnail = false): array|false {}

/** @genstubs-expose-comment-block
 * Retrieve the embedded thumbnail of an image
 * @return string|false
 */
/**
 * @param resource|string $file
 * @param int $width
 * @param int $height
 * @param int $image_type
 * @refcount 1
 */
function exif_thumbnail($file, &$width = null, &$height = null, &$image_type = null): string|false {}

/** @genstubs-expose-comment-block
 * Determine the type of an image
 * @return int|false
 */
function exif_imagetype(string $filename): int|false {}
