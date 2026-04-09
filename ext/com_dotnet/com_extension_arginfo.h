/* This is a generated file, edit com_extension.stub.php instead.
 * Stub hash: a71146c008969a8c7bda4f28236a9b2b938374a0 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_variant_set, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, variant, variant, 0, "The variant.")
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_variant_add, 0, 2, variant, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, left, IS_MIXED, 0, "The left operand.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, right, IS_MIXED, 0, "The right operand.")
ZEND_END_ARG_INFO()

#define arginfo_variant_cat arginfo_variant_add

#define arginfo_variant_sub arginfo_variant_add

#define arginfo_variant_mul arginfo_variant_add

#define arginfo_variant_and arginfo_variant_add

#define arginfo_variant_div arginfo_variant_add

#define arginfo_variant_eqv arginfo_variant_add

#define arginfo_variant_idiv arginfo_variant_add

#define arginfo_variant_imp arginfo_variant_add

#define arginfo_variant_mod arginfo_variant_add

#define arginfo_variant_or arginfo_variant_add

#define arginfo_variant_pow arginfo_variant_add

#define arginfo_variant_xor arginfo_variant_add

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_variant_abs, 0, 1, variant, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The variant.")
ZEND_END_ARG_INFO()

#define arginfo_variant_fix arginfo_variant_abs

#define arginfo_variant_int arginfo_variant_abs

#define arginfo_variant_neg arginfo_variant_abs

#define arginfo_variant_not arginfo_variant_abs

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_variant_round, 0, 2, variant, 1)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, value, IS_MIXED, 0, "The variant.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, decimals, IS_LONG, 0, "Number of decimal places.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_variant_cmp, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, left, IS_MIXED, 0, "The left operand.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, right, IS_MIXED, 0, "The right operand.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, locale_id, IS_LONG, 0, "LOCALE_SYSTEM_DEFAULT", "A valid Locale Identifier to use when comparing strings (this affects string collation).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "flags can be one or more of the following values OR'd together, and affects string comparisons: Variant Comparison Flags value meaning NORM_IGNORECASE Compare case insensitively NORM_IGNORENONSPACE Ignore nonspacing characters NORM_IGNORESYMBOLS Ignore symbols NORM_IGNOREWIDTH Ignore string width NORM_IGNOREKANATYPE Ignore Kana type NORM_IGNOREKASHIDA Ignore Arabic kashida characters")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_variant_date_to_timestamp, 0, 1, IS_LONG, 1)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, variant, variant, 0, "The variant.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_variant_date_from_timestamp, 0, 1, variant, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, timestamp, IS_LONG, 0, "A unix timestamp.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_variant_get_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, variant, variant, 0, "The variant object.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_variant_set_type, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, variant, variant, 0, "The variant.")
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_variant_cast, 0, 2, variant, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, variant, variant, 0, "The variant.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, type, IS_LONG, 0, "type should be one of the VT_* constants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_com_get_active_object, 0, 1, variant, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, prog_id, IS_STRING, 0, "prog_id must be either the ProgID or CLSID for the object that you want to access (for example Word.Application).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, codepage, IS_LONG, 1, "null", "Acts in precisely the same way that it does for the  class.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_com_create_guid, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_com_event_sink, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, variant, variant, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, sink_object, IS_OBJECT, 0, "sink_object should be an instance of a class with methods named after those of the desired dispinterface; you may use com_print_typeinfo to help generate a template class for this purpose.")
	ZEND_ARG_TYPE_MASK_DOCCOMMENT(0, sink_interface, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null", "PHP will attempt to use the default dispinterface type specified by the typelibrary associated with variant, but you may override this choice by setting sink_interface to the name of the dispinterface that you want to use.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_com_print_typeinfo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, variant, variant, MAY_BE_STRING, NULL, "variant should be either an instance of a COM object, or be the name of a typelibrary (which will be resolved according to the rules set out in com_load_typelib).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, dispatch_interface, IS_STRING, 1, "null", "The name of an IDispatch descendant interface that you want to display.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, display_sink, _IS_BOOL, 0, "false", "If set to true, the corresponding sink interface will be displayed instead.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_com_message_pump, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, timeout_milliseconds, IS_LONG, 0, "0", "The timeout, in milliseconds.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_com_load_typelib, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, typelib, IS_STRING, 0, "typelib can be one of the following: The filename of a .tlb file or the executable module that contains the type library. The type library GUID, followed by its version number, for example {00000200-0000-0010-8000-00AA006D2EA4},2,0. The type library name, e.g. Microsoft OLE DB ActiveX Data Objects 1.0 Library. PHP will attempt to resolve the type library in this order, as the process gets more and more expensive as you progress down the list; searching for the type library by name is handled by physically enumerating the registry until we find a match.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, case_insensitive, _IS_BOOL, 0, "true", "The case_insensitive behaves inversely to the parameter $case_insensitive in the define function.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_variant___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, value, IS_MIXED, 0, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "VT_EMPTY")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, codepage, IS_LONG, 0, "CP_ACP")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_com___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, module_name, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, server_name, MAY_BE_ARRAY|MAY_BE_STRING|MAY_BE_NULL, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, codepage, IS_LONG, 0, "CP_ACP")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, typelib, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

#if defined(HAVE_MSCOREE_H)
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_dotnet___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, assembly_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, datatype_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, codepage, IS_LONG, 0, "CP_ACP")
ZEND_END_ARG_INFO()
#endif

ZEND_FUNCTION(variant_set);
ZEND_FUNCTION(variant_add);
ZEND_FUNCTION(variant_cat);
ZEND_FUNCTION(variant_sub);
ZEND_FUNCTION(variant_mul);
ZEND_FUNCTION(variant_and);
ZEND_FUNCTION(variant_div);
ZEND_FUNCTION(variant_eqv);
ZEND_FUNCTION(variant_idiv);
ZEND_FUNCTION(variant_imp);
ZEND_FUNCTION(variant_mod);
ZEND_FUNCTION(variant_or);
ZEND_FUNCTION(variant_pow);
ZEND_FUNCTION(variant_xor);
ZEND_FUNCTION(variant_abs);
ZEND_FUNCTION(variant_fix);
ZEND_FUNCTION(variant_int);
ZEND_FUNCTION(variant_neg);
ZEND_FUNCTION(variant_not);
ZEND_FUNCTION(variant_round);
ZEND_FUNCTION(variant_cmp);
ZEND_FUNCTION(variant_date_to_timestamp);
ZEND_FUNCTION(variant_date_from_timestamp);
ZEND_FUNCTION(variant_get_type);
ZEND_FUNCTION(variant_set_type);
ZEND_FUNCTION(variant_cast);
ZEND_FUNCTION(com_get_active_object);
ZEND_FUNCTION(com_create_guid);
ZEND_FUNCTION(com_event_sink);
ZEND_FUNCTION(com_print_typeinfo);
ZEND_FUNCTION(com_message_pump);
ZEND_FUNCTION(com_load_typelib);
ZEND_METHOD(variant, __construct);
ZEND_METHOD(com, __construct);
#if defined(HAVE_MSCOREE_H)
ZEND_METHOD(dotnet, __construct);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("variant_set", zif_variant_set, arginfo_variant_set, 0, NULL, "/**\n * Assigns a new value for a variant object\n * @param variant $variant The variant.\n * @return void\n */")
	ZEND_RAW_FENTRY("variant_add", zif_variant_add, arginfo_variant_add, 0, NULL, "/**\n * \"Adds\" two variant values together and returns the result\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_cat", zif_variant_cat, arginfo_variant_cat, 0, NULL, "/**\n * Concatenates two variant values together and returns the result\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_sub", zif_variant_sub, arginfo_variant_sub, 0, NULL, "/**\n * Subtracts the value of the right variant from the left variant value\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_mul", zif_variant_mul, arginfo_variant_mul, 0, NULL, "/**\n * Multiplies the values of the two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_and", zif_variant_and, arginfo_variant_and, 0, NULL, "/**\n * Performs a bitwise AND operation between two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_div", zif_variant_div, arginfo_variant_div, 0, NULL, "/**\n * Returns the result from dividing two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_eqv", zif_variant_eqv, arginfo_variant_eqv, 0, NULL, "/**\n * Performs a bitwise equivalence on two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_idiv", zif_variant_idiv, arginfo_variant_idiv, 0, NULL, "/**\n * Converts variants to integers and then returns the result from dividing them\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_imp", zif_variant_imp, arginfo_variant_imp, 0, NULL, "/**\n * Performs a bitwise implication on two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_mod", zif_variant_mod, arginfo_variant_mod, 0, NULL, "/**\n * Divides two variants and returns only the remainder\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_or", zif_variant_or, arginfo_variant_or, 0, NULL, "/**\n * Performs a logical disjunction on two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_pow", zif_variant_pow, arginfo_variant_pow, 0, NULL, "/**\n * Returns the result of performing the power function with two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_xor", zif_variant_xor, arginfo_variant_xor, 0, NULL, "/**\n * Performs a logical exclusion on two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_abs", zif_variant_abs, arginfo_variant_abs, 0, NULL, "/**\n * Returns the absolute value of a variant\n * @param mixed $value The variant.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_fix", zif_variant_fix, arginfo_variant_fix, 0, NULL, "/**\n * Returns the integer portion of a variant\n * @param mixed $value The variant.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_int", zif_variant_int, arginfo_variant_int, 0, NULL, "/**\n * Returns the integer portion of a variant\n * @param mixed $value The variant.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_neg", zif_variant_neg, arginfo_variant_neg, 0, NULL, "/**\n * Performs logical negation on a variant\n * @param mixed $value The variant.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_not", zif_variant_not, arginfo_variant_not, 0, NULL, "/**\n * Performs bitwise not negation on a variant\n * @param mixed $value The variant.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_round", zif_variant_round, arginfo_variant_round, 0, NULL, "/**\n * Rounds a variant to the specified number of decimal places\n * @param mixed $value The variant.\n * @param int $decimals Number of decimal places.\n * @return variant|null\n */")
	ZEND_RAW_FENTRY("variant_cmp", zif_variant_cmp, arginfo_variant_cmp, 0, NULL, "/**\n * Compares two variants\n * @param mixed $left The left operand.\n * @param mixed $right The right operand.\n * @param int $locale_id A valid Locale Identifier to use when comparing strings (this affects string collation).\n * @param int $flags flags can be one or more of the following values OR\'d together, and affects string comparisons: Variant Comparison Flags value meaning NORM_IGNORECASE Compare case insensitively NORM_IGNORENONSPACE Ignore nonspacing characters NORM_IGNORESYMBOLS Ignore symbols NORM_IGNOREWIDTH Ignore string width NORM_IGNOREKANATYPE Ignore Kana type NORM_IGNOREKASHIDA Ignore Arabic kashida characters\n * @return int\n */")
	ZEND_RAW_FENTRY("variant_date_to_timestamp", zif_variant_date_to_timestamp, arginfo_variant_date_to_timestamp, 0, NULL, "/**\n * Converts a variant date/time value to Unix timestamp\n * @param variant $variant The variant.\n * @return int|null\n */")
	ZEND_RAW_FENTRY("variant_date_from_timestamp", zif_variant_date_from_timestamp, arginfo_variant_date_from_timestamp, 0, NULL, "/**\n * Returns a variant date representation of a Unix timestamp\n * @param int $timestamp A unix timestamp.\n * @return variant\n */")
	ZEND_RAW_FENTRY("variant_get_type", zif_variant_get_type, arginfo_variant_get_type, 0, NULL, "/**\n * Returns the type of a variant object\n * @param variant $variant The variant object.\n * @return int\n */")
	ZEND_RAW_FENTRY("variant_set_type", zif_variant_set_type, arginfo_variant_set_type, 0, NULL, "/**\n * Convert a variant into another type \"in-place\"\n * @param variant $variant The variant.\n * @return void\n */")
	ZEND_RAW_FENTRY("variant_cast", zif_variant_cast, arginfo_variant_cast, 0, NULL, "/**\n * Convert a variant into a new variant object of another type\n * @param variant $variant The variant.\n * @param int $type type should be one of the VT_* constants.\n * @return variant\n */")
	ZEND_RAW_FENTRY("com_get_active_object", zif_com_get_active_object, arginfo_com_get_active_object, 0, NULL, "/**\n * Returns a handle to an already running instance of a COM object\n * @param string $prog_id prog_id must be either the ProgID or CLSID for the object that you want to access (for example Word.Application).\n * @param int|null $codepage Acts in precisely the same way that it does for the  class.\n * @return variant\n */")
	ZEND_RAW_FENTRY("com_create_guid", zif_com_create_guid, arginfo_com_create_guid, 0, NULL, "/**\n * Generate a globally unique identifier (GUID)\n * @return string|false\n */")
	ZEND_RAW_FENTRY("com_event_sink", zif_com_event_sink, arginfo_com_event_sink, 0, NULL, "/**\n * Connect events from a COM object to a PHP object\n * @param object $sink_object sink_object should be an instance of a class with methods named after those of the desired dispinterface; you may use com_print_typeinfo to help generate a template class for this purpose.\n * @param array|string|null $sink_interface PHP will attempt to use the default dispinterface type specified by the typelibrary associated with variant, but you may override this choice by setting sink_interface to the name of the dispinterface that you want to use.\n * @return bool\n */")
	ZEND_RAW_FENTRY("com_print_typeinfo", zif_com_print_typeinfo, arginfo_com_print_typeinfo, 0, NULL, "/**\n * Print out a PHP class definition for a dispatchable interface\n * @param variant|string $variant variant should be either an instance of a COM object, or be the name of a typelibrary (which will be resolved according to the rules set out in com_load_typelib).\n * @param string|null $dispatch_interface The name of an IDispatch descendant interface that you want to display.\n * @param bool $display_sink If set to true, the corresponding sink interface will be displayed instead.\n * @return bool\n */")
	ZEND_RAW_FENTRY("com_message_pump", zif_com_message_pump, arginfo_com_message_pump, 0, NULL, "/**\n * Process COM messages, sleeping for up to timeoutms milliseconds\n * @param int $timeout_milliseconds The timeout, in milliseconds.\n * @return bool\n */")
	ZEND_RAW_FENTRY("com_load_typelib", zif_com_load_typelib, arginfo_com_load_typelib, 0, NULL, "/**\n * Loads a Typelib\n * @param string $typelib typelib can be one of the following: The filename of a .tlb file or the executable module that contains the type library. The type library GUID, followed by its version number, for example {00000200-0000-0010-8000-00AA006D2EA4},2,0. The type library name, e.g. Microsoft OLE DB ActiveX Data Objects 1.0 Library. PHP will attempt to resolve the type library in this order, as the process gets more and more expensive as you progress down the list; searching for the type library by name is handled by physically enumerating the registry until we find a match.\n * @param bool $case_insensitive The case_insensitive behaves inversely to the parameter $case_insensitive in the define function.\n * @return bool\n */")
	ZEND_FE_END
};

static const zend_function_entry class_variant_methods[] = {
	ZEND_ME(variant, __construct, arginfo_class_variant___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_com_methods[] = {
	ZEND_ME(com, __construct, arginfo_class_com___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

#if defined(HAVE_MSCOREE_H)
static const zend_function_entry class_dotnet_methods[] = {
	ZEND_ME(dotnet, __construct, arginfo_class_dotnet___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};
#endif

static void register_com_extension_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("CLSCTX_INPROC_SERVER", CLSCTX_INPROC_SERVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CLSCTX_INPROC_HANDLER", CLSCTX_INPROC_HANDLER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CLSCTX_LOCAL_SERVER", CLSCTX_LOCAL_SERVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CLSCTX_REMOTE_SERVER", CLSCTX_REMOTE_SERVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CLSCTX_SERVER", CLSCTX_SERVER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CLSCTX_ALL", CLSCTX_ALL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_NULL", VT_NULL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_EMPTY", VT_EMPTY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_UI1", VT_UI1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_I1", VT_I1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_UI2", VT_UI2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_I2", VT_I2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_UI4", VT_UI4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_I4", VT_I4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_R4", VT_R4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_R8", VT_R8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_BOOL", VT_BOOL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_ERROR", VT_ERROR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_CY", VT_CY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_DATE", VT_DATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_BSTR", VT_BSTR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_DECIMAL", VT_DECIMAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_UNKNOWN", VT_UNKNOWN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_DISPATCH", VT_DISPATCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_VARIANT", VT_VARIANT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_INT", VT_INT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_UINT", VT_UINT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_ARRAY", VT_ARRAY, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_BYREF", VT_BYREF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_ACP", CP_ACP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_MACCP", CP_MACCP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_OEMCP", CP_OEMCP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_UTF7", CP_UTF7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_UTF8", CP_UTF8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_SYMBOL", CP_SYMBOL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CP_THREAD_ACP", CP_THREAD_ACP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VARCMP_LT", VARCMP_LT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VARCMP_EQ", VARCMP_EQ, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VARCMP_GT", VARCMP_GT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VARCMP_NULL", VARCMP_NULL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOCALE_SYSTEM_DEFAULT", LOCALE_SYSTEM_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("LOCALE_NEUTRAL", LOCALE_NEUTRAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NORM_IGNORECASE", NORM_IGNORECASE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NORM_IGNORENONSPACE", NORM_IGNORENONSPACE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NORM_IGNORESYMBOLS", NORM_IGNORESYMBOLS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NORM_IGNOREWIDTH", NORM_IGNOREWIDTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("NORM_IGNOREKANATYPE", NORM_IGNOREKANATYPE, CONST_PERSISTENT);
#if defined(NORM_IGNOREKASHIDA)
	REGISTER_LONG_CONSTANT("NORM_IGNOREKASHIDA", NORM_IGNOREKASHIDA, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("DISP_E_DIVBYZERO", PHP_DISP_E_DIVBYZERO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DISP_E_OVERFLOW", PHP_DISP_E_OVERFLOW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DISP_E_BADINDEX", PHP_DISP_E_BADINDEX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("DISP_E_PARAMNOTFOUND", PHP_DISP_E_PARAMNOTFOUND, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("MK_E_UNAVAILABLE", PHP_MK_E_UNAVAILABLE, CONST_PERSISTENT);
#if SIZEOF_ZEND_LONG == 8
	REGISTER_LONG_CONSTANT("VT_UI8", VT_UI8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("VT_I8", VT_I8, CONST_PERSISTENT);
#endif
}

static zend_class_entry *register_class_variant(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "variant", class_variant_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_com(zend_class_entry *class_entry_variant)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "com", class_com_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_variant, 0);

	return class_entry;
}

#if defined(HAVE_MSCOREE_H)
static zend_class_entry *register_class_dotnet(zend_class_entry *class_entry_variant)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "dotnet", class_dotnet_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_variant, 0);

	return class_entry;
}
#endif

static zend_class_entry *register_class_com_safearray_proxy(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "com_safearray_proxy", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	return class_entry;
}

static zend_class_entry *register_class_com_exception(zend_class_entry *class_entry_Exception)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "com_exception", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_Exception, ZEND_ACC_FINAL);

	return class_entry;
}
