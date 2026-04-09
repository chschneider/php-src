/* This is a generated file, edit ctype.stub.php instead.
 * Stub hash: bd27099f1d2261be061ef554a4132ab4cea7c520 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_ctype_alnum, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, text, IS_MIXED, 0, "The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.")
ZEND_END_ARG_INFO()

#define arginfo_ctype_alpha arginfo_ctype_alnum

#define arginfo_ctype_cntrl arginfo_ctype_alnum

#define arginfo_ctype_digit arginfo_ctype_alnum

#define arginfo_ctype_lower arginfo_ctype_alnum

#define arginfo_ctype_graph arginfo_ctype_alnum

#define arginfo_ctype_print arginfo_ctype_alnum

#define arginfo_ctype_punct arginfo_ctype_alnum

#define arginfo_ctype_space arginfo_ctype_alnum

#define arginfo_ctype_upper arginfo_ctype_alnum

#define arginfo_ctype_xdigit arginfo_ctype_alnum

ZEND_FUNCTION(ctype_alnum);
ZEND_FUNCTION(ctype_alpha);
ZEND_FUNCTION(ctype_cntrl);
ZEND_FUNCTION(ctype_digit);
ZEND_FUNCTION(ctype_lower);
ZEND_FUNCTION(ctype_graph);
ZEND_FUNCTION(ctype_print);
ZEND_FUNCTION(ctype_punct);
ZEND_FUNCTION(ctype_space);
ZEND_FUNCTION(ctype_upper);
ZEND_FUNCTION(ctype_xdigit);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("ctype_alnum", zif_ctype_alnum, arginfo_ctype_alnum, 0, NULL, "/**\n * Check for alphanumeric character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_alpha", zif_ctype_alpha, arginfo_ctype_alpha, 0, NULL, "/**\n * Check for alphabetic character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_cntrl", zif_ctype_cntrl, arginfo_ctype_cntrl, 0, NULL, "/**\n * Check for control character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_digit", zif_ctype_digit, arginfo_ctype_digit, 0, NULL, "/**\n * Check for numeric character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_lower", zif_ctype_lower, arginfo_ctype_lower, 0, NULL, "/**\n * Check for lowercase character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_graph", zif_ctype_graph, arginfo_ctype_graph, 0, NULL, "/**\n * Check for any printable character(s) except space\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_print", zif_ctype_print, arginfo_ctype_print, 0, NULL, "/**\n * Check for printable character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_punct", zif_ctype_punct, arginfo_ctype_punct, 0, NULL, "/**\n * Check for any printable character which is not whitespace or an\n * alphanumeric character\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_space", zif_ctype_space, arginfo_ctype_space, 0, NULL, "/**\n * Check for whitespace character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_upper", zif_ctype_upper, arginfo_ctype_upper, 0, NULL, "/**\n * Check for uppercase character(s)\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_RAW_FENTRY("ctype_xdigit", zif_ctype_xdigit, arginfo_ctype_xdigit, 0, NULL, "/**\n * Check for character(s) representing a hexadecimal digit\n * @param mixed $text The tested string. If an int between -128 and 255 inclusive is provided, it is interpreted as the ASCII value of a single character (negative values have 256 added in order to allow characters in the Extended ASCII range). Any other integer is interpreted as a string containing the decimal digits of the integer. As of PHP 8.1.0, passing a non-string argument is deprecated. In the future, the argument will be interpreted as a string instead of an ASCII codepoint. Depending on the intended behavior, the argument should either be cast to string or an explicit call to chr should be made.\n * @return bool\n */")
	ZEND_FE_END
};
