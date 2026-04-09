/* This is a generated file, edit calendar.stub.php instead.
 * Stub hash: 50ae8865de0d26154817a1c3efbde15b4b3b6b48 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_cal_days_in_month, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, calendar, IS_LONG, 0, "Calendar to use for calculation")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, month, IS_LONG, 0, "Month in the selected calendar")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, year, IS_LONG, 0, "Year in the selected calendar")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_cal_from_jd, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, julian_day, IS_LONG, 0, "Julian day as integer")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, calendar, IS_LONG, 0, "Calendar to convert to")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_cal_info, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, calendar, IS_LONG, 0, "-1", "Calendar to return information for. If no calendar is specified information about all calendars is returned.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_cal_to_jd, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, calendar, IS_LONG, 0, "Calendar to convert from, one of CAL_GREGORIAN, CAL_JULIAN, CAL_JEWISH or CAL_FRENCH.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, month, IS_LONG, 0, "The month as a number, the valid range depends on the calendar")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, day, IS_LONG, 0, "The day as a number, the valid range depends on the calendar")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, year, IS_LONG, 0, "The year as a number, the valid range depends on the calendar")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_easter_date, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, year, IS_LONG, 1, "null", "The year must be a number between 1970 and 2037 for 32-bit systems, or between 1970 and 2,000,000,000 for 64-bit systems. If omitted or null, defaults to the current year according to the local time.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "CAL_EASTER_DEFAULT", "Allows Easter dates to be calculated based on the Julian calendar when set to CAL_EASTER_ALWAYS_JULIAN. See also calendar constants.")
ZEND_END_ARG_INFO()

#define arginfo_easter_days arginfo_easter_date

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_frenchtojd, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, month, IS_LONG, 0, "The month as a number from 1 (for Vend\u00e9miaire) to 13 (for the period of 5-6 days at the end of each year)")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, day, IS_LONG, 0, "The day as a number from 1 to 30")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, year, IS_LONG, 0, "The year as a number between 1 and 14")
ZEND_END_ARG_INFO()

#define arginfo_gregoriantojd arginfo_frenchtojd

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_jddayofweek, 0, 1, MAY_BE_LONG|MAY_BE_STRING)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, julian_day, IS_LONG, 0, "A julian day number as integer")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "CAL_DOW_DAYNO")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_jdmonthname, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, julian_day, IS_LONG, 0, "The Julian Day to operate on")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_LONG, 0, "The calendar mode (see table above).")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_jdtofrench, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, julian_day, IS_LONG, 0, "A julian day number as integer")
ZEND_END_ARG_INFO()

#define arginfo_jdtogregorian arginfo_jdtofrench

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_jdtojewish, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, julian_day, IS_LONG, 0, "A julian day number as integer")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, hebrew, _IS_BOOL, 0, "false", "If the hebrew parameter is set to true, the flags parameter is used for Hebrew, ISO-8859-8 encoded string based, output format.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "A bitmask which may consist of CAL_JEWISH_ADD_ALAFIM_GERESH, CAL_JEWISH_ADD_ALAFIM and CAL_JEWISH_ADD_GERESHAYIM.")
ZEND_END_ARG_INFO()

#define arginfo_jdtojulian arginfo_jdtofrench

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_jdtounix, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, julian_day, IS_LONG, 0, "A julian day number between 2440588 and 106751993607888 on 64bit systems, or between 2440588 and 2465443 on 32bit systems.")
ZEND_END_ARG_INFO()

#define arginfo_jewishtojd arginfo_frenchtojd

#define arginfo_juliantojd arginfo_frenchtojd

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_unixtojd, 0, 0, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, timestamp, IS_LONG, 1, "null", "A unix timestamp to convert.")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(cal_days_in_month);
ZEND_FUNCTION(cal_from_jd);
ZEND_FUNCTION(cal_info);
ZEND_FUNCTION(cal_to_jd);
ZEND_FUNCTION(easter_date);
ZEND_FUNCTION(easter_days);
ZEND_FUNCTION(frenchtojd);
ZEND_FUNCTION(gregoriantojd);
ZEND_FUNCTION(jddayofweek);
ZEND_FUNCTION(jdmonthname);
ZEND_FUNCTION(jdtofrench);
ZEND_FUNCTION(jdtogregorian);
ZEND_FUNCTION(jdtojewish);
ZEND_FUNCTION(jdtojulian);
ZEND_FUNCTION(jdtounix);
ZEND_FUNCTION(jewishtojd);
ZEND_FUNCTION(juliantojd);
ZEND_FUNCTION(unixtojd);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("cal_days_in_month", zif_cal_days_in_month, arginfo_cal_days_in_month, 0, NULL, "/**\n * Return the number of days in a month for a given year and calendar\n * @param int $calendar Calendar to use for calculation\n * @param int $month Month in the selected calendar\n * @param int $year Year in the selected calendar\n * @return int\n */")
	ZEND_RAW_FENTRY("cal_from_jd", zif_cal_from_jd, arginfo_cal_from_jd, 0, NULL, "/**\n * Converts from Julian Day Count to a supported calendar\n * @param int $julian_day Julian day as integer\n * @param int $calendar Calendar to convert to\n * @return array\n */")
	ZEND_RAW_FENTRY("cal_info", zif_cal_info, arginfo_cal_info, 0, NULL, "/**\n * Returns information about a particular calendar\n * @param int $calendar Calendar to return information for. If no calendar is specified information about all calendars is returned.\n * @return array\n */")
	ZEND_RAW_FENTRY("cal_to_jd", zif_cal_to_jd, arginfo_cal_to_jd, 0, NULL, "/**\n * Converts from a supported calendar to Julian Day Count\n * @param int $calendar Calendar to convert from, one of CAL_GREGORIAN, CAL_JULIAN, CAL_JEWISH or CAL_FRENCH.\n * @param int $month The month as a number, the valid range depends on the calendar\n * @param int $day The day as a number, the valid range depends on the calendar\n * @param int $year The year as a number, the valid range depends on the calendar\n * @return int\n */")
	ZEND_RAW_FENTRY("easter_date", zif_easter_date, arginfo_easter_date, 0, NULL, "/**\n * Get Unix timestamp for local midnight on Easter of a given year\n * @param int|null $year The year must be a number between 1970 and 2037 for 32-bit systems, or between 1970 and 2,000,000,000 for 64-bit systems. If omitted or null, defaults to the current year according to the local time.\n * @param int $mode Allows Easter dates to be calculated based on the Julian calendar when set to CAL_EASTER_ALWAYS_JULIAN. See also calendar constants.\n * @return int\n */")
	ZEND_RAW_FENTRY("easter_days", zif_easter_days, arginfo_easter_days, 0, NULL, "/**\n * Get number of days after March 21 on which Easter falls for a given year\n * @param int|null $year The year as a positive number. If omitted or null, defaults to the current year according to the local time.\n * @param int $mode Allows Easter dates to be calculated based on the Gregorian calendar during the years 1582 - 1752 when set to CAL_EASTER_ROMAN. See the calendar constants for more valid constants.\n * @return int\n */")
	ZEND_RAW_FENTRY("frenchtojd", zif_frenchtojd, arginfo_frenchtojd, 0, NULL, "/**\n * Converts a date from the French Republican Calendar to a Julian Day Count\n * @param int $month The month as a number from 1 (for Vendémiaire) to 13 (for the period of 5-6 days at the end of each year)\n * @param int $day The day as a number from 1 to 30\n * @param int $year The year as a number between 1 and 14\n * @return int\n */")
	ZEND_RAW_FENTRY("gregoriantojd", zif_gregoriantojd, arginfo_gregoriantojd, 0, NULL, "/**\n * Converts a Gregorian date to Julian Day Count\n * @param int $month The month as a number from 1 (for January) to 12 (for December)\n * @param int $day The day as a number from 1 to 31. If the month has less days then given, overflow occurs; see the example below.\n * @param int $year The year as a number between -4714 and 9999. Negative numbers mean years B.C., positive numbers mean years A.D. Note that there is no year 0; December 31, 1 B.C. is immediately followed by January 1, 1 A.D.\n * @return int\n */")
	ZEND_RAW_FENTRY("jddayofweek", zif_jddayofweek, arginfo_jddayofweek, 0, NULL, "/**\n * Returns the day of the week\n * @param int $julian_day A julian day number as integer\n * @return int|string\n */")
	ZEND_RAW_FENTRY("jdmonthname", zif_jdmonthname, arginfo_jdmonthname, 0, NULL, "/**\n * Returns a month name\n * @param int $julian_day The Julian Day to operate on\n * @param int $mode The calendar mode (see table above).\n * @return string\n */")
	ZEND_RAW_FENTRY("jdtofrench", zif_jdtofrench, arginfo_jdtofrench, 0, NULL, "/**\n * Converts a Julian Day Count to the French Republican Calendar\n * @param int $julian_day A julian day number as integer\n * @return string\n */")
	ZEND_RAW_FENTRY("jdtogregorian", zif_jdtogregorian, arginfo_jdtogregorian, 0, NULL, "/**\n * Converts Julian Day Count to Gregorian date\n * @param int $julian_day A julian day number as integer\n * @return string\n */")
	ZEND_RAW_FENTRY("jdtojewish", zif_jdtojewish, arginfo_jdtojewish, 0, NULL, "/**\n * Converts a Julian day count to a Jewish calendar date\n * @param int $julian_day A julian day number as integer\n * @param bool $hebrew If the hebrew parameter is set to true, the flags parameter is used for Hebrew, ISO-8859-8 encoded string based, output format.\n * @param int $flags A bitmask which may consist of CAL_JEWISH_ADD_ALAFIM_GERESH, CAL_JEWISH_ADD_ALAFIM and CAL_JEWISH_ADD_GERESHAYIM.\n * @return string\n */")
	ZEND_RAW_FENTRY("jdtojulian", zif_jdtojulian, arginfo_jdtojulian, 0, NULL, "/**\n * Converts a Julian Day Count to a Julian Calendar Date\n * @param int $julian_day A julian day number as integer\n * @return string\n */")
	ZEND_RAW_FENTRY("jdtounix", zif_jdtounix, arginfo_jdtounix, 0, NULL, "/**\n * Convert Julian Day to Unix timestamp\n * @param int $julian_day A julian day number between 2440588 and 106751993607888 on 64bit systems, or between 2440588 and 2465443 on 32bit systems.\n * @return int\n */")
	ZEND_RAW_FENTRY("jewishtojd", zif_jewishtojd, arginfo_jewishtojd, 0, NULL, "/**\n * Converts a date in the Jewish Calendar to Julian Day Count\n * @param int $month The month as a number from 1 to 13, where 1 means Tishri, 13 means Elul, and 6 and 7 mean Adar in regular years, but Adar I and Adar II, respectively, in leap years.\n * @param int $day The day as a number from 1 to 30. If the month has only 29 days, the first day of the following month is assumed.\n * @param int $year The year as a number between 1 and 9999\n * @return int\n */")
	ZEND_RAW_FENTRY("juliantojd", zif_juliantojd, arginfo_juliantojd, 0, NULL, "/**\n * Converts a Julian Calendar date to Julian Day Count\n * @param int $month The month as a number from 1 (for January) to 12 (for December)\n * @param int $day The day as a number from 1 to 31\n * @param int $year The year as a number between -4713 and 9999\n * @return int\n */")
	ZEND_RAW_FENTRY("unixtojd", zif_unixtojd, arginfo_unixtojd, 0, NULL, "/**\n * Convert Unix timestamp to Julian Day\n * @param int|null $timestamp A unix timestamp to convert.\n * @return int|false\n */")
	ZEND_FE_END
};

static void register_calendar_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("CAL_GREGORIAN", CAL_GREGORIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_JULIAN", CAL_JULIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_JEWISH", CAL_JEWISH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_FRENCH", CAL_FRENCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_NUM_CALS", CAL_NUM_CALS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_DOW_DAYNO", CAL_DOW_DAYNO, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_DOW_SHORT", CAL_DOW_SHORT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_DOW_LONG", CAL_DOW_LONG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_MONTH_GREGORIAN_SHORT", CAL_MONTH_GREGORIAN_SHORT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_MONTH_GREGORIAN_LONG", CAL_MONTH_GREGORIAN_LONG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_MONTH_JULIAN_SHORT", CAL_MONTH_JULIAN_SHORT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_MONTH_JULIAN_LONG", CAL_MONTH_JULIAN_LONG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_MONTH_JEWISH", CAL_MONTH_JEWISH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_MONTH_FRENCH", CAL_MONTH_FRENCH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_EASTER_DEFAULT", CAL_EASTER_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_EASTER_ROMAN", CAL_EASTER_ROMAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_EASTER_ALWAYS_GREGORIAN", CAL_EASTER_ALWAYS_GREGORIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_EASTER_ALWAYS_JULIAN", CAL_EASTER_ALWAYS_JULIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_JEWISH_ADD_ALAFIM_GERESH", CAL_JEWISH_ADD_ALAFIM_GERESH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_JEWISH_ADD_ALAFIM", CAL_JEWISH_ADD_ALAFIM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("CAL_JEWISH_ADD_GERESHAYIM", CAL_JEWISH_ADD_GERESHAYIM, CONST_PERSISTENT);
}
