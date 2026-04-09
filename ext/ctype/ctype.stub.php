<?php

/** @generate-class-entries */

/** @genstubs-expose-comment-block
 * Check for alphanumeric character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_alnum(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for alphabetic character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_alpha(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for control character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_cntrl(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for numeric character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_digit(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for lowercase character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_lower(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for any printable character(s) except space
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_graph(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for printable character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_print(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for any printable character which is not whitespace or an
 * alphanumeric character
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_punct(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for whitespace character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_space(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for uppercase character(s)
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_upper(mixed $text): bool {}

/** @genstubs-expose-comment-block
 * Check for character(s) representing a hexadecimal digit
 * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.
 * @return bool
 */
function ctype_xdigit(mixed $text): bool {}
