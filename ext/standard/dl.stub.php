<?php

/** @genstubs-expose-comment-block
 * Loads a PHP extension at runtime
 * @param string $extension_filename This parameter is only the filename of the extension to load which also depends on your platform. For example, the sockets extension (if compiled as a shared module, not the default!) would be called sockets.so on Unix platforms whereas it is called php_sockets.dll on the Windows platform.
 * @return bool
 */
function dl(string $extension_filename): bool {}
