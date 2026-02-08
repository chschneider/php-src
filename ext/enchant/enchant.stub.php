<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PHP_ENCHANT_MYSPELL
 */
#[\Deprecated(since: '8.0', message: 'as enchant_broker_get_dict_path() and enchant_broker_set_dict_path() are deprecated')]
const ENCHANT_MYSPELL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_ENCHANT_ISPELL
 */
#[\Deprecated(since: '8.0', message: 'as enchant_broker_get_dict_path() and enchant_broker_set_dict_path() are deprecated')]
const ENCHANT_ISPELL = UNKNOWN;
#ifdef HAVE_ENCHANT_GET_VERSION
/**
 * @var string
 * @cvalue PHP_ENCHANT_GET_VERSION
 */
const LIBENCHANT_VERSION = UNKNOWN;
#endif

/**
 * @strict-properties
 * @not-serializable
 */
final class EnchantBroker
{
}

/**
 * @strict-properties
 * @not-serializable
 */
final class EnchantDictionary
{
}

/** @genstubs-expose-comment-block
 * Create a new broker object capable of requesting
 * @return EnchantBroker|false
 */
function enchant_broker_init(): EnchantBroker|false {}

#[\Deprecated(since: '8.0', message: 'as EnchantBroker objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Free the broker resource and its dictionaries
 * @return bool
 */
function enchant_broker_free(EnchantBroker $broker): bool {}

/** @genstubs-expose-comment-block
 * Returns the last error of the broker
 * @return string|false
 */
function enchant_broker_get_error(EnchantBroker $broker): string|false {}

#[\Deprecated(since: '8.0')]
/** @genstubs-expose-comment-block
 * Set the directory path for a given backend
 * @return bool
 */
function enchant_broker_set_dict_path(EnchantBroker $broker, int $type, string $path): bool {}

#[\Deprecated(since: '8.0')]
/** @genstubs-expose-comment-block
 * Get the directory path for a given backend
 * @return string|false
 */
function enchant_broker_get_dict_path(EnchantBroker $broker, int $type): string|false {}

/** @genstubs-expose-comment-block
 * Returns a list of available dictionaries
 * @return array
 */
/**
 * @return array<int, array>
 * @refcount 1
 */
function enchant_broker_list_dicts(EnchantBroker $broker): array {}

/** @genstubs-expose-comment-block
 * Create a new dictionary using a tag
 * @return EnchantDictionary|false
 */
function enchant_broker_request_dict(EnchantBroker $broker, string $tag): EnchantDictionary|false {}

/** @genstubs-expose-comment-block
 * Creates a dictionary using a PWL file
 * @return EnchantDictionary|false
 */
function enchant_broker_request_pwl_dict(EnchantBroker $broker, string $filename): EnchantDictionary|false {}

#[\Deprecated(since: '8.0', message: 'as EnchantDictionary objects are freed automatically')]
/** @genstubs-expose-comment-block
 * Free a dictionary resource
 * @return bool
 */
function enchant_broker_free_dict(EnchantDictionary $dictionary): bool {}

/** @genstubs-expose-comment-block
 * Whether a dictionary exists or not. Using non-empty tag
 * @return bool
 */
function enchant_broker_dict_exists(EnchantBroker $broker, string $tag): bool {}

/** @genstubs-expose-comment-block
 * Declares a preference of dictionaries to use for the language
 * @return bool
 */
function enchant_broker_set_ordering(EnchantBroker $broker, string $tag, string $ordering): bool {}

/** @genstubs-expose-comment-block
 * Enumerates the Enchant providers
 * @return array
 */
/**
 * @return array<int, array>
 * @refcount 1
 */
function enchant_broker_describe(EnchantBroker $broker): array {}

/** @genstubs-expose-comment-block
 * Check the word is correctly spelled and provide suggestions
 * @return bool
 */
/** @param array $suggestions */
function enchant_dict_quick_check(EnchantDictionary $dictionary, string $word, &$suggestions = null): bool {}

/** @genstubs-expose-comment-block
 * Check whether a word is correctly spelled or not
 * @return bool
 */
function enchant_dict_check(EnchantDictionary $dictionary, string $word): bool {}

/** @genstubs-expose-comment-block
 * Will return a list of values if any of those pre-conditions are not met
 * @return array
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function enchant_dict_suggest(EnchantDictionary $dictionary, string $word): array {}

/** @genstubs-expose-comment-block
 * Add a word to personal word list
 * @return void
 */
function enchant_dict_add(EnchantDictionary $dictionary, string $word): void {}

function enchant_dict_remove(EnchantDictionary $dictionary, string $word): void {}

/**
* @alias enchant_dict_add
*/
#[\Deprecated(since: '8.0', message: 'use enchant_dict_add() instead')]
/** @genstubs-expose-comment-block
 * Alias enchant_dict_add
 */
function enchant_dict_add_to_personal(EnchantDictionary $dictionary, string $word): void {}

/** @genstubs-expose-comment-block
 * Add 'word' to this spell-checking session
 * @return void
 */
function enchant_dict_add_to_session(EnchantDictionary $dictionary, string $word): void {}

function enchant_dict_remove_from_session(EnchantDictionary $dictionary, string $word): void {}

/** @genstubs-expose-comment-block
 * Whether or not 'word' exists in this spelling-session
 * @return bool
 */
function enchant_dict_is_added(EnchantDictionary $dictionary, string $word): bool {}

/**
* @alias enchant_dict_is_added
*/
#[\Deprecated(since: '8.0', message: 'use enchant_dict_is_added() instead')]
/** @genstubs-expose-comment-block
 * Alias enchant_dict_is_added
 */
function enchant_dict_is_in_session(EnchantDictionary $dictionary, string $word): bool {}

/** @genstubs-expose-comment-block
 * Add a correction for a word
 * @return void
 */
function enchant_dict_store_replacement(EnchantDictionary $dictionary, string $misspelled, string $correct): void {}

/** @genstubs-expose-comment-block
 * Returns the last error of the current spelling-session
 * @return string|false
 */
function enchant_dict_get_error(EnchantDictionary $dictionary): string|false {}

/** @genstubs-expose-comment-block
 * Describes an individual dictionary
 * @return array
 */
/**
 * @return array<string, string>
 * @refcount 1
 */
function enchant_dict_describe(EnchantDictionary $dictionary): array {}
