<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue CAL_GREGORIAN
 */
const CAL_GREGORIAN = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_JULIAN
 */
const CAL_JULIAN = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_JEWISH
 */
const CAL_JEWISH = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_FRENCH
 */
const CAL_FRENCH = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_NUM_CALS
 */
const CAL_NUM_CALS = UNKNOWN;

/**
 * @var int
 * @cvalue CAL_DOW_DAYNO
 */
const CAL_DOW_DAYNO = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_DOW_SHORT
 */
const CAL_DOW_SHORT = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_DOW_LONG
 */
const CAL_DOW_LONG = UNKNOWN;

/**
 * @var int
 * @cvalue CAL_MONTH_GREGORIAN_SHORT
 */
const CAL_MONTH_GREGORIAN_SHORT = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_MONTH_GREGORIAN_LONG
 */
const CAL_MONTH_GREGORIAN_LONG = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_MONTH_JULIAN_SHORT
 */
const CAL_MONTH_JULIAN_SHORT = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_MONTH_JULIAN_LONG
 */
const CAL_MONTH_JULIAN_LONG = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_MONTH_JEWISH
 */
const CAL_MONTH_JEWISH = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_MONTH_FRENCH
 */
const CAL_MONTH_FRENCH = UNKNOWN;

/**
 * @var int
 * @cvalue CAL_EASTER_DEFAULT
 */
const CAL_EASTER_DEFAULT = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_EASTER_ROMAN
 */
const CAL_EASTER_ROMAN = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_EASTER_ALWAYS_GREGORIAN
 */
const CAL_EASTER_ALWAYS_GREGORIAN = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_EASTER_ALWAYS_JULIAN
 */
const CAL_EASTER_ALWAYS_JULIAN = UNKNOWN;

/**
 * @var int
 * @cvalue CAL_JEWISH_ADD_ALAFIM_GERESH
 */
const CAL_JEWISH_ADD_ALAFIM_GERESH = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_JEWISH_ADD_ALAFIM
 */
const CAL_JEWISH_ADD_ALAFIM = UNKNOWN;
/**
 * @var int
 * @cvalue CAL_JEWISH_ADD_GERESHAYIM
 */
const CAL_JEWISH_ADD_GERESHAYIM = UNKNOWN;

/** @genstubs-expose-comment-block
 * Return the number of days in a month for a given year and calendar
 * @param int $calendar Calendar to use for calculation
 * @param int $month Month in the selected calendar
 * @param int $year Year in the selected calendar
 * @return int
 */
function cal_days_in_month(int $calendar, int $month, int $year): int {}

/** @genstubs-expose-comment-block
 * Converts from Julian Day Count to a supported calendar
 * @param int $julian_day Julian day as integer
 * @param int $calendar Calendar to convert to
 * @return array
 */
/**
 * @return array<string, int|string|null>
 * @refcount 1
 */
function cal_from_jd(int $julian_day, int $calendar): array {}

/** @genstubs-expose-comment-block
 * Returns information about a particular calendar
 * @param int $calendar Calendar to return information for. If no calendar is specified information about all calendars is returned.
 * @return array
 */
/**
 * @return array<int|string, int|string|array>
 * @refcount 1
 */
function cal_info(int $calendar = -1): array {}

/** @genstubs-expose-comment-block
 * Converts from a supported calendar to Julian Day Count
 * @param int $calendar Calendar to convert from, one of CAL_GREGORIAN, CAL_JULIAN, CAL_JEWISH or CAL_FRENCH.
 * @param int $month The month as a number, the valid range depends on the calendar
 * @param int $day The day as a number, the valid range depends on the calendar
 * @param int $year The year as a number, the valid range depends on the calendar
 * @return int
 */
function cal_to_jd(int $calendar, int $month, int $day, int $year): int {}

/** @genstubs-expose-comment-block
 * Get Unix timestamp for local midnight on Easter of a given year
 * @param int|null $year The year must be a number between 1970 and 2037 for 32-bit systems, or between 1970 and 2,000,000,000 for 64-bit systems. If omitted or null, defaults to the current year according to the local time.
 * @param int $mode Allows Easter dates to be calculated based on the Julian calendar when set to CAL_EASTER_ALWAYS_JULIAN. See also calendar constants.
 * @return int
 */
function easter_date(?int $year = null, int $mode = CAL_EASTER_DEFAULT): int {}

/** @genstubs-expose-comment-block
 * Get number of days after March 21 on which Easter falls for a given year
 * @param int|null $year The year as a positive number. If omitted or null, defaults to the current year according to the local time.
 * @param int $mode Allows Easter dates to be calculated based on the Gregorian calendar during the years 1582 - 1752 when set to CAL_EASTER_ROMAN. See the calendar constants for more valid constants.
 * @return int
 */
function easter_days(?int $year = null, int $mode = CAL_EASTER_DEFAULT): int {}

/** @genstubs-expose-comment-block
 * Converts a date from the French Republican Calendar to a Julian Day Count
 * @param int $month The month as a number from 1 (for Vendémiaire) to 13 (for the period of 5-6 days at the end of each year)
 * @param int $day The day as a number from 1 to 30
 * @param int $year The year as a number between 1 and 14
 * @return int
 */
function frenchtojd(int $month, int $day, int $year): int {}

/** @genstubs-expose-comment-block
 * Converts a Gregorian date to Julian Day Count
 * @param int $month The month as a number from 1 (for January) to 12 (for December)
 * @param int $day The day as a number from 1 to 31. If the month has less days then given, overflow occurs; see the example below.
 * @param int $year The year as a number between -4714 and 9999. Negative numbers mean years B.C., positive numbers mean years A.D. Note that there is no year 0; December 31, 1 B.C. is immediately followed by January 1, 1 A.D.
 * @return int
 */
function gregoriantojd(int $month, int $day, int $year): int {}

/** @genstubs-expose-comment-block
 * Returns the day of the week
 * @param int $julian_day A julian day number as integer
 * @return int|string
 */
function jddayofweek(int $julian_day, int $mode = CAL_DOW_DAYNO): int|string {}

/** @genstubs-expose-comment-block
 * Returns a month name
 * @param int $julian_day The Julian Day to operate on
 * @param int $mode The calendar mode (see table above).
 * @return string
 */
function jdmonthname(int $julian_day, int $mode): string {}

/** @genstubs-expose-comment-block
 * Converts a Julian Day Count to the French Republican Calendar
 * @param int $julian_day A julian day number as integer
 * @return string
 */
function jdtofrench(int $julian_day): string {}

/** @genstubs-expose-comment-block
 * Converts Julian Day Count to Gregorian date
 * @param int $julian_day A julian day number as integer
 * @return string
 */
function jdtogregorian(int $julian_day): string {}

/** @genstubs-expose-comment-block
 * Converts a Julian day count to a Jewish calendar date
 * @param int $julian_day A julian day number as integer
 * @param bool $hebrew If the hebrew parameter is set to true, the flags parameter is used for Hebrew, ISO-8859-8 encoded string based, output format.
 * @param int $flags A bitmask which may consist of CAL_JEWISH_ADD_ALAFIM_GERESH, CAL_JEWISH_ADD_ALAFIM and CAL_JEWISH_ADD_GERESHAYIM.
 * @return string
 */
function jdtojewish(int $julian_day, bool $hebrew = false, int $flags = 0): string {}

/** @genstubs-expose-comment-block
 * Converts a Julian Day Count to a Julian Calendar Date
 * @param int $julian_day A julian day number as integer
 * @return string
 */
function jdtojulian(int $julian_day): string {}

/** @genstubs-expose-comment-block
 * Convert Julian Day to Unix timestamp
 * @param int $julian_day A julian day number between 2440588 and 106751993607888 on 64bit systems, or between 2440588 and 2465443 on 32bit systems.
 * @return int
 */
function jdtounix(int $julian_day): int {}

/** @genstubs-expose-comment-block
 * Converts a date in the Jewish Calendar to Julian Day Count
 * @param int $month The month as a number from 1 to 13, where 1 means Tishri, 13 means Elul, and 6 and 7 mean Adar in regular years, but Adar I and Adar II, respectively, in leap years.
 * @param int $day The day as a number from 1 to 30. If the month has only 29 days, the first day of the following month is assumed.
 * @param int $year The year as a number between 1 and 9999
 * @return int
 */
function jewishtojd(int $month, int $day, int $year): int {}

/** @genstubs-expose-comment-block
 * Converts a Julian Calendar date to Julian Day Count
 * @param int $month The month as a number from 1 (for January) to 12 (for December)
 * @param int $day The day as a number from 1 to 31
 * @param int $year The year as a number between -4713 and 9999
 * @return int
 */
function juliantojd(int $month, int $day, int $year): int {}

/** @genstubs-expose-comment-block
 * Convert Unix timestamp to Julian Day
 * @param int|null $timestamp A unix timestamp to convert.
 * @return int|false
 */
function unixtojd(?int $timestamp = null): int|false {}
