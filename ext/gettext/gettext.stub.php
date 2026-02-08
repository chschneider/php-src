<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Sets the default domain
 * @param string|null $domain The new message domain, or null to get the current setting without changing it
 * @return string
 */
/** @refcount 1 */
function textdomain(?string $domain = null): string {}

/** @genstubs-expose-comment-block
 * Lookup a message in the current domain
 * @param string $message The message being translated.
 * @return string
 */
/** @refcount 1 */
function gettext(string $message): string {}

/** @genstubs-expose-comment-block
 * Alias gettext
 */
/** @alias gettext */
function _(string $message): string {}

/** @genstubs-expose-comment-block
 * Override the current domain
 * @param string $domain The domain
 * @param string $message The message
 * @return string
 */
/** @refcount 1 */
function dgettext(string $domain, string $message): string {}

/** @genstubs-expose-comment-block
 * Overrides the domain for a single lookup
 * @param string $domain The domain
 * @param string $message The message
 * @param int $category The category
 * @return string
 */
/** @refcount 1 */
function dcgettext(string $domain, string $message, int $category): string {}

/** @genstubs-expose-comment-block
 * Sets or gets the path for a domain
 * @param string $domain The domain.
 * @param string|null $directory The directory path. An empty string means the current directory. If null, the currently set directory is returned.
 * @return string|false
 */
/** @refcount 1 */
function bindtextdomain(string $domain, ?string $directory = null): string|false {}

#ifdef HAVE_NGETTEXT
/** @genstubs-expose-comment-block
 * Plural version of gettext
 * @param string $singular The singular message ID.
 * @param string $plural The plural message ID.
 * @param int $count The number (e.g. item count) to determine the translation for the respective grammatical number.
 * @return string
 */
/** @refcount 1 */
function ngettext(string $singular, string $plural, int $count): string {}
#endif

#ifdef HAVE_DNGETTEXT
/** @genstubs-expose-comment-block
 * Plural version of dgettext
 * @param string $domain The domain
 * @return string
 */
/** @refcount 1 */
function dngettext(string $domain, string $singular, string $plural, int $count): string {}
#endif

#ifdef HAVE_DCNGETTEXT
/** @genstubs-expose-comment-block
 * Plural version of dcgettext
 * @param string $domain The domain
 * @return string
 */
/** @refcount 1 */
function dcngettext(string $domain, string $singular, string $plural, int $count, int $category): string {}
#endif

#ifdef HAVE_BIND_TEXTDOMAIN_CODESET
/** @genstubs-expose-comment-block
 * Specify or get the character encoding in which the messages from the DOMAIN message catalog will be returned
 * @param string $domain The domain.
 * @param string|null $codeset The code set. If null, the currently set encoding is returned.
 * @return string|false
 */
/** @refcount 1 */
function bind_textdomain_codeset(string $domain, ?string $codeset = null): string|false {}
#endif
