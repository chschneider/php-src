/* This is a generated file, edit readline.stub.php instead.
 * Stub hash: e329881e76b940dcde9b1322bf6c620b44fdf2af */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_readline, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, prompt, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_info, 0, 0, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, var_name, IS_STRING, 1, "null")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, value, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_add_history, 0, 1, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, prompt, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_clear_history, 0, 0, IS_TRUE, 0)
ZEND_END_ARG_INFO()

#if defined(HAVE_HISTORY_LIST)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_list_history, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_read_history, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filename, IS_STRING, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_readline_write_history arginfo_readline_read_history

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_completion_function, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#if defined(HAVE_RL_CALLBACK_READ_CHAR)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_callback_handler_install, 0, 2, IS_TRUE, 0)
	ZEND_ARG_TYPE_INFO(0, prompt, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_callback_read_char, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_callback_handler_remove, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_readline_redisplay arginfo_readline_callback_read_char
#endif

#if defined(HAVE_RL_CALLBACK_READ_CHAR) && defined(HAVE_RL_ON_NEW_LINE)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_readline_on_new_line, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_FUNCTION(readline);
ZEND_FUNCTION(readline_info);
ZEND_FUNCTION(readline_add_history);
ZEND_FUNCTION(readline_clear_history);
#if defined(HAVE_HISTORY_LIST)
ZEND_FUNCTION(readline_list_history);
#endif
ZEND_FUNCTION(readline_read_history);
ZEND_FUNCTION(readline_write_history);
ZEND_FUNCTION(readline_completion_function);
#if defined(HAVE_RL_CALLBACK_READ_CHAR)
ZEND_FUNCTION(readline_callback_handler_install);
ZEND_FUNCTION(readline_callback_read_char);
ZEND_FUNCTION(readline_callback_handler_remove);
ZEND_FUNCTION(readline_redisplay);
#endif
#if defined(HAVE_RL_CALLBACK_READ_CHAR) && defined(HAVE_RL_ON_NEW_LINE)
ZEND_FUNCTION(readline_on_new_line);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("readline", zif_readline, arginfo_readline, 0, NULL, "/**\n * Reads a line\n * @return string|false\n */")
	ZEND_RAW_FENTRY("readline_info", zif_readline_info, arginfo_readline_info, 0, NULL, "/**\n * Gets/sets various internal readline variables\n * @return mixed\n */")
	ZEND_RAW_FENTRY("readline_add_history", zif_readline_add_history, arginfo_readline_add_history, 0, NULL, "/**\n * Adds a line to the history\n * @return true\n */")
	ZEND_RAW_FENTRY("readline_clear_history", zif_readline_clear_history, arginfo_readline_clear_history, 0, NULL, "/**\n * Clears the history\n * @return true\n */")
#if defined(HAVE_HISTORY_LIST)
	ZEND_RAW_FENTRY("readline_list_history", zif_readline_list_history, arginfo_readline_list_history, 0, NULL, "/**\n * Lists the history\n * @return array\n */")
#endif
	ZEND_RAW_FENTRY("readline_read_history", zif_readline_read_history, arginfo_readline_read_history, 0, NULL, "/**\n * Reads the history\n * @return bool\n */")
	ZEND_RAW_FENTRY("readline_write_history", zif_readline_write_history, arginfo_readline_write_history, 0, NULL, "/**\n * Writes the history\n * @return bool\n */")
	ZEND_RAW_FENTRY("readline_completion_function", zif_readline_completion_function, arginfo_readline_completion_function, 0, NULL, "/**\n * Registers a completion function\n * @return bool\n */")
#if defined(HAVE_RL_CALLBACK_READ_CHAR)
	ZEND_RAW_FENTRY("readline_callback_handler_install", zif_readline_callback_handler_install, arginfo_readline_callback_handler_install, 0, NULL, "/**\n * Initializes the readline callback interface and terminal, prints the prompt and returns immediately\n * @return true\n */")
	ZEND_RAW_FENTRY("readline_callback_read_char", zif_readline_callback_read_char, arginfo_readline_callback_read_char, 0, NULL, "/**\n * Reads a character and informs the readline callback interface when a line is received\n * @return void\n */")
	ZEND_RAW_FENTRY("readline_callback_handler_remove", zif_readline_callback_handler_remove, arginfo_readline_callback_handler_remove, 0, NULL, "/**\n * Removes a previously installed callback handler and restores terminal settings\n * @return bool\n */")
	ZEND_RAW_FENTRY("readline_redisplay", zif_readline_redisplay, arginfo_readline_redisplay, 0, NULL, "/**\n * Redraws the display\n * @return void\n */")
#endif
#if defined(HAVE_RL_CALLBACK_READ_CHAR) && defined(HAVE_RL_ON_NEW_LINE)
	ZEND_RAW_FENTRY("readline_on_new_line", zif_readline_on_new_line, arginfo_readline_on_new_line, 0, NULL, "/**\n * Inform readline that the cursor has moved to a new line\n * @return void\n */")
#endif
	ZEND_FE_END
};

static void register_readline_symbols(int module_number)
{
	REGISTER_STRING_CONSTANT("READLINE_LIB", READLINE_LIB, CONST_PERSISTENT);
}
