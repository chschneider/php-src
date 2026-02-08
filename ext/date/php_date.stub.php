<?php

/** @generate-class-entries */

/**
 * @cvalue DATE_FORMAT_RFC3339
 */
const DATE_ATOM = "Y-m-d\\TH:i:sP";

/**
 * @cvalue DATE_FORMAT_COOKIE
 */
const DATE_COOKIE = "l, d-M-Y H:i:s T";

/**
 * @cvalue DATE_FORMAT_ISO8601
 */
const DATE_ISO8601 = "Y-m-d\\TH:i:sO";

/**
 * @cvalue DATE_FORMAT_ISO8601_EXPANDED
 */
const DATE_ISO8601_EXPANDED = "X-m-d\\TH:i:sP";

/**
 * @cvalue DATE_FORMAT_RFC822
 */
const DATE_RFC822 = "D, d M y H:i:s O";

/**
 * @cvalue DATE_FORMAT_RFC850
 */
const DATE_RFC850 = "l, d-M-y H:i:s T";

/**
 * @cvalue DATE_FORMAT_RFC1036
 */
const DATE_RFC1036 = "D, d M y H:i:s O";

/**
 * @cvalue DATE_FORMAT_RFC1123
 */
const DATE_RFC1123 = "D, d M Y H:i:s O";

/**
 * @cvalue DATE_FORMAT_RFC7231
 */
#[\Deprecated(since: '8.5', message: "as this format ignores the associated timezone and always uses GMT")]
const DATE_RFC7231 = "D, d M Y H:i:s \\G\\M\\T";

/**
 * @cvalue DATE_FORMAT_RFC2822
 */
const DATE_RFC2822 = "D, d M Y H:i:s O";

/**
 * @cvalue DATE_FORMAT_RFC3339
 */
const DATE_RFC3339 = "Y-m-d\\TH:i:sP";

/**
 * @cvalue DATE_FORMAT_RFC3339_EXTENDED
 */
const DATE_RFC3339_EXTENDED = "Y-m-d\\TH:i:s.vP";

/** @var string */
const DATE_RSS = DATE_RFC1123;

/** @var string */
const DATE_W3C = DATE_RFC3339;

/**
 * @var int
 * @cvalue SUNFUNCS_RET_TIMESTAMP
 */
#[\Deprecated(since: '8.4', message: 'as date_sunrise() and date_sunset() were deprecated in 8.1')]
const SUNFUNCS_RET_TIMESTAMP = UNKNOWN;

/**
 * @var int
 * @cvalue SUNFUNCS_RET_STRING
 */
#[\Deprecated(since: '8.4', message: 'as date_sunrise() and date_sunset() were deprecated in 8.1')]
const SUNFUNCS_RET_STRING = UNKNOWN;

/**
 * @var int
 * @cvalue SUNFUNCS_RET_DOUBLE
 */
#[\Deprecated(since: '8.4', message: 'as date_sunrise() and date_sunset() were deprecated in 8.1')]
const SUNFUNCS_RET_DOUBLE = UNKNOWN;

/** @genstubs-expose-comment-block
 * Parse about any English textual datetime description into a Unix timestamp
 * @param string $datetime A datetime string. date.formats
 * @param int|null $baseTimestamp The timestamp which is used as a base for the calculation of relative dates.
 * @return int|false
 */
function strtotime(string $datetime, ?int $baseTimestamp = null): int|false {}

/** @genstubs-expose-comment-block
 * Format a Unix timestamp
 * @return string
 */
/** @refcount 1 */
function date(string $format, ?int $timestamp = null): string {}

/** @genstubs-expose-comment-block
 * Format a local time/date part as integer
 * @param string $format The following characters are recognized in the format parameter string format character Description B Swatch BeatInternet Time d Day of the month h Hour (12 hour format) H Hour (24 hour format) i Minutes I (uppercase i) returns 1 if DST is activated, 0 otherwise L (uppercase l) returns 1 for leap year, 0 otherwise m Month number N ISO-8601 day of the week (1 for Monday through 7 for Sunday) o ISO-8601 year (4 digits) s Seconds t Days in current month U Seconds since the Unix Epoch - January 1 1970 00:00:00 UTC - this is the same as time w Day of the week (0 on Sunday) W ISO-8601 week number of year, weeks starting on Monday y Year (1 or 2 digits - check note below) Y Year (4 digits) z Day of the year Z Timezone offset in seconds
 * @param int|null $timestamp The optional timestamp parameter is an int Unix timestamp that defaults to the current local time if timestamp is omitted or null. In other words, it defaults to the value of time.
 * @return int|false
 */
function idate(string $format, ?int $timestamp = null): int|false {}

/** @genstubs-expose-comment-block
 * Format a GMT/UTC date/time
 * @param string $format The format of the outputted date string. See the formatting options for the date function.
 * @param int|null $timestamp The optional timestamp parameter is an int Unix timestamp that defaults to the current local time if timestamp is omitted or null. In other words, it defaults to the value of time.
 * @return string
 */
/** @refcount 1 */
function gmdate(string $format, ?int $timestamp = null): string {}

/** @genstubs-expose-comment-block
 * Get Unix timestamp for a date
 * @param int $hour The number of the hour relative to the start of the day determined by month, day and year. Negative values reference the hour before midnight of the day in question. Values greater than 23 reference the appropriate hour in the following day(s).
 * @param int|null $minute The number of the minute relative to the start of the hour. Negative values reference the minute in the previous hour. Values greater than 59 reference the appropriate minute in the following hour(s).
 * @param int|null $second The number of seconds relative to the start of the minute. Negative values reference the second in the previous minute. Values greater than 59 reference the appropriate second in the following minute(s).
 * @param int|null $month The number of the month relative to the end of the previous year. Values 1 to 12 reference the normal calendar months of the year in question. Values less than 1 (including negative values) reference the months in the previous year in reverse order, so 0 is December, -1 is November, etc. Values greater than 12 reference the appropriate month in the following year(s).
 * @param int|null $day The number of the day relative to the end of the previous month. Values 1 to 28, 29, 30 or 31 (depending upon the month) reference the normal days in the relevant month. Values less than 1 (including negative values) reference the days in the previous month, so 0 is the last day of the previous month, -1 is the day before that, etc. Values greater than the number of days in the relevant month reference the appropriate day in the following month(s).
 * @param int|null $year The number of the year, may be a two or four digit value, with values between 0-69 mapping to 2000-2069 and 70-100 to 1970-2000. On systems where time_t is a 32bit signed integer, as most common today, the valid range for year is somewhere between 1901 and 2038.
 * @return int|false
 */
function mktime(
    int $hour, ?int $minute = null, ?int $second = null,
    ?int $month = null, ?int $day = null, ?int $year = null): int|false {}

/** @genstubs-expose-comment-block
 * Get Unix timestamp for a GMT date
 * @param int $hour The number of the hour relative to the start of the day determined by month, day and year. Negative values reference the hour before midnight of the day in question. Values greater than 23 reference the appropriate hour in the following day(s).
 * @param int|null $minute The number of the minute relative to the start of the hour. Negative values reference the minute in the previous hour. Values greater than 59 reference the appropriate minute in the following hour(s).
 * @param int|null $second The number of seconds relative to the start of the minute. Negative values reference the second in the previous minute. Values greater than 59 reference the appropriate second in the following minute(s).
 * @param int|null $month The number of the month relative to the end of the previous year. Values 1 to 12 reference the normal calendar months of the year in question. Values less than 1 (including negative values) reference the months in the previous year in reverse order, so 0 is December, -1 is November, etc. Values greater than 12 reference the appropriate month in the following year(s).
 * @param int|null $day The number of the day relative to the end of the previous month. Values 1 to 28, 29, 30 or 31 (depending upon the month) reference the normal days in the relevant month. Values less than 1 (including negative values) reference the days in the previous month, so 0 is the last day of the previous month, -1 is the day before that, etc. Values greater than the number of days in the relevant month reference the appropriate day in the following month(s).
 * @param int|null $year The year
 * @return int|false
 */
function gmmktime(
    int $hour, ?int $minute = null, ?int $second = null,
    ?int $month = null, ?int $day = null, ?int $year = null): int|false {}

/** @genstubs-expose-comment-block
 * Validate a Gregorian date
 * @param int $month The month is between 1 and 12 inclusive.
 * @param int $day The day is within the allowed number of days for the given month.  Leap years are taken into consideration.
 * @param int $year The year is between 1 and 32767 inclusive.
 * @return bool
 */
function checkdate(int $month, int $day, int $year): bool {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1', message: 'use IntlDateFormatter::format() instead')]
/** @genstubs-expose-comment-block
 * Format a local time/date according to locale settings
 * @param string $format The following characters are recognized in the format parameter string format Description Example returned values Day --- --- %a An abbreviated textual representation of the day Sun through Sat %A A full textual representation of the day Sunday through Saturday %d Two-digit day of the month (with leading zeros) 01 to 31 %e Day of the month, with a space preceding single digits. Not implemented as described on Windows. See below for more information. 1 to 31 %j Day of the year, 3 digits with leading zeros 001 to 366 %u ISO-8601 numeric representation of the day of the week 1 (for Monday) through 7 (for Sunday) %w Numeric representation of the day of the week 0 (for Sunday) through 6 (for Saturday) Week --- --- %U Week number of the given year, starting with the first Sunday as the first week 13 (for the 13th full week of the year) %V ISO-8601:1988 week number of the given year, starting with the first week of the year with at least 4 weekdays, with Monday being the start of the week 01 through 53 (where 53 accounts for an overlapping week) %W A numeric representation of the week of the year, starting with the first Monday as the first week 46 (for the 46th week of the year beginning with a Monday) Month --- --- %b Abbreviated month name, based on the locale Jan through Dec %B Full month name, based on the locale January through December %h Abbreviated month name, based on the locale (an alias of %b) Jan through Dec %m Two digit representation of the month 01 (for January) through 12 (for December) Year --- --- %C Two digit representation of the century (year divided by 100, truncated to an integer) 19 for the 20th Century %g Two digit representation of the year going by ISO-8601:1988 standards (see %V) Example: 09 for the week of January 6, 2009 %G The full four-digit version of %g Example: 2008 for the week of January 3, 2009 %y Two digit representation of the year Example: 09 for 2009, 79 for 1979 %Y Four digit representation for the year Example: 2038 Time --- --- %H Two digit representation of the hour in 24-hour format 00 through 23 %k Hour in 24-hour format, with a space preceding single digits 0 through 23 %I Two digit representation of the hour in 12-hour format 01 through 12 %l (lower-case 'L') Hour in 12-hour format, with a space preceding single digits 1 through 12 %M Two digit representation of the minute 00 through 59 %p UPPER-CASE 'AM' or 'PM' based on the given time Example: AM for 00:31, PM for 22:23. The exact result depends on the Operating System, and they can also return lower-case variants, or variants with dots (such as a.m.). %P lower-case 'am' or 'pm' based on the given time Example: am for 00:31, pm for 22:23. Not supported by all Operating Systems. %r Same as "%I:%M:%S %p" Example: 09:34:17 PM for 21:34:17 %R Same as "%H:%M" Example: 00:35 for 12:35 AM, 16:44 for 4:44 PM %S Two digit representation of the second 00 through 59 %T Same as "%H:%M:%S" Example: 21:34:17 for 09:34:17 PM %X Preferred time representation based on locale, without the date Example: 03:59:16 or 15:59:16 %z The time zone offset. Not implemented as described on Windows. See below for more information. Example: -0500 for US Eastern Time %Z The time zone abbreviation. Not implemented as described on Windows. See below for more information. Example: EST for Eastern Time Time and Date Stamps --- --- %c Preferred date and time stamp based on locale Example: Tue Feb  5 00:45:10 2009 for February 5, 2009 at 12:45:10 AM %D Same as "%m%d%y" Example: 020509 for February 5, 2009 %F Same as "%Y-%m-%d" (commonly used in database datestamps) Example: 2009-02-05 for February 5, 2009 %s Unix Epoch Time timestamp (same as the time function) Example: 305815200 for September 10, 1979 08:40:00 AM %x Preferred date representation based on locale, without the time Example: 020509 for February 5, 2009 Miscellaneous --- --- %n A newline character (" ") --- %t A Tab character ("\t") --- %%% A literal percentage character ("%%") ---
 * @param int|null $timestamp The optional timestamp parameter is an int Unix timestamp that defaults to the current local time if timestamp is omitted or null. In other words, it defaults to the value of time.
 * @return string|false
 */
function strftime(string $format, ?int $timestamp = null): string|false {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1', message: 'use IntlDateFormatter::format() instead')]
/** @genstubs-expose-comment-block
 * Format a GMT/UTC time/date according to locale settings
 * @param string $format See description in strftime.
 * @param int|null $timestamp The optional timestamp parameter is an int Unix timestamp that defaults to the current local time if timestamp is omitted or null. In other words, it defaults to the value of time.
 * @return string|false
 */
function gmstrftime(string $format, ?int $timestamp = null): string|false {}

/** @genstubs-expose-comment-block
 * Return current Unix timestamp
 * @return int
 */
function time(): int {}

/** @genstubs-expose-comment-block
 * Get the local time
 * @param int|null $timestamp The optional timestamp parameter is an int Unix timestamp that defaults to the current local time if timestamp is omitted or null. In other words, it defaults to the value of time.
 * @param bool $associative Determines whether the function should return a regular, numerically indexed array, or an associative one.
 * @return array
 */
/**
 * @return array<int|string, int>
 * @refcount 1
 */
function localtime(?int $timestamp = null, bool $associative = false): array {}

/** @genstubs-expose-comment-block
 * Get date/time information
 * @param int|null $timestamp The optional timestamp parameter is an int Unix timestamp that defaults to the current local time if timestamp is omitted or null. In other words, it defaults to the value of time.
 * @return array
 */
/**
 * @return array<int|string, int|string>
 * @refcount 1
 */
function getdate(?int $timestamp = null): array {}

/** @genstubs-expose-comment-block
 * create a new DateTime object
 * @return DateTime|false
 */
/** @refcount 1 */
function date_create(string $datetime = "now", ?DateTimeZone $timezone = null): DateTime|false {}

/** @genstubs-expose-comment-block
 * create a new DateTimeImmutable object
 * @return DateTimeImmutable|false
 */
/** @refcount 1 */
function date_create_immutable(
    string $datetime = "now", ?DateTimeZone $timezone = null): DateTimeImmutable|false {}

/** @genstubs-expose-comment-block
 * Alias DateTime::createFromFormat
 */
/** @refcount 1 */
function date_create_from_format(
    string $format, string $datetime, ?DateTimeZone $timezone = null): DateTime|false {}

/** @genstubs-expose-comment-block
 * Alias DateTimeImmutable::createFromFormat
 */
/** @refcount 1 */
function date_create_immutable_from_format(
    string $format, string $datetime, ?DateTimeZone $timezone = null): DateTimeImmutable|false {}

/** @genstubs-expose-comment-block
 * Returns associative array with detailed info about given date/time
 * @param string $datetime Datetime in format accepted by DateTimeImmutable::__construct.
 * @return array
 */
/**
 * @return array<string, mixed>
 * @refcount 1
 */
function date_parse(string $datetime): array {}

/** @genstubs-expose-comment-block
 * Get info about given date formatted according to the specified format
 * @param string $format Documentation on how the format is used, please refer to the documentation of DateTimeImmutable::createFromFormat. The same rules apply.
 * @param string $datetime String representing the datetime.
 * @return array
 */
/**
 * @return array<string, mixed>
 * @refcount 1
 */
function date_parse_from_format(string $format, string $datetime): array {}

/** @genstubs-expose-comment-block
 * Alias DateTimeImmutable::getLastErrors
 */
/**
 * @return array<string, int|array>|false
 * @refcount 1
 */
function date_get_last_errors(): array|false {}

/** @genstubs-expose-comment-block
 * Alias DateTime::format
 */
/** @refcount 1 */
function date_format(DateTimeInterface $object, string $format): string {}

/** @genstubs-expose-comment-block
 * Alias DateTime::modify
 */
function date_modify(DateTime $object, string $modifier): DateTime|false {}

/** @genstubs-expose-comment-block
 * Alias DateTime::add
 */
function date_add(DateTime $object, DateInterval $interval): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::sub
 */
function date_sub(DateTime $object, DateInterval $interval): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::getTimezone
 */
/** @refcount 1 */
function date_timezone_get(DateTimeInterface $object): DateTimeZone|false {}

/** @genstubs-expose-comment-block
 * Alias DateTime::setTimezone
 */
function date_timezone_set(DateTime $object, DateTimeZone $timezone): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::getOffset
 */
function date_offset_get(DateTimeInterface $object): int {}

/** @genstubs-expose-comment-block
 * Alias DateTime::diff
 */
/** @refcount 1 */
function date_diff(
    DateTimeInterface $baseObject, DateTimeInterface $targetObject, bool $absolute = false): DateInterval {}

/** @genstubs-expose-comment-block
 * Alias DateTime::setTime
 */
function date_time_set(
    DateTime $object, int $hour, int $minute, int $second = 0, int $microsecond = 0): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::setDate
 */
function date_date_set(DateTime $object, int $year, int $month, int $day): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::setISODate
 */
function date_isodate_set(DateTime $object, int $year, int $week, int $dayOfWeek = 1): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::setTimestamp
 */
function date_timestamp_set(DateTime $object, int $timestamp): DateTime {}

/** @genstubs-expose-comment-block
 * Alias DateTime::getTimestamp
 */
function date_timestamp_get(DateTimeInterface $object): int {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::__construct
 */
/** @refcount 1 */
function timezone_open(string $timezone): DateTimeZone|false {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::getName
 */
/** @refcount 1 */
function timezone_name_get(DateTimeZone $object): string {}

/** @genstubs-expose-comment-block
 * Returns a timezone name by guessing from abbreviation and UTC offset
 * @param string $abbr Time zone abbreviation.
 * @param int $utcOffset Offset from GMT in seconds. Defaults to -1 which means that first found time zone corresponding to abbr is returned. Otherwise exact offset is searched and only if not found then the first time zone with any offset is returned.
 * @param int $isDST Daylight saving time indicator. Defaults to -1, which means that whether the time zone has daylight saving or not is not taken into consideration when searching. If this is set to 1, then the utcOffset is assumed to be an offset with daylight saving in effect; if 0, then utcOffset is assumed to be an offset without daylight saving in effect. If abbr doesn't exist then the time zone is searched solely by the utcOffset and isDST.
 * @return string|false
 */
/** @refcount 1 */
function timezone_name_from_abbr(string $abbr, int $utcOffset = -1, int $isDST = -1): string|false {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::getOffset
 */
function timezone_offset_get(DateTimeZone $object, DateTimeInterface $datetime): int {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::getTransitions
 */
/**
 * @return array<int, array>|false
 * @refcount 1
 */
function timezone_transitions_get(
    DateTimeZone $object, int $timestampBegin = PHP_INT_MIN, int $timestampEnd = 2147483647): array|false {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::getLocation
 */
/**
 * @return array<string, float|string>|false
 * @refcount 1
 */
function timezone_location_get(DateTimeZone $object): array|false {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::listIdentifiers
 */
/**
 * @return array<int, string>
 * @refcount 1
 */
function timezone_identifiers_list(int $timezoneGroup = DateTimeZone::ALL, ?string $countryCode = null): array {}

/** @genstubs-expose-comment-block
 * Alias DateTimeZone::listAbbreviations
 */
/**
 * @return array<string, array>
 * @refcount 1
 */
function timezone_abbreviations_list(): array {}

/** @genstubs-expose-comment-block
 * Gets the version of the timezonedb
 * @return string
 */
/** @refcount 1 */
function timezone_version_get(): string {}

/** @genstubs-expose-comment-block
 * Alias DateInterval::createFromDateString
 */
/** @refcount 1 */
function date_interval_create_from_date_string(string $datetime): DateInterval|false {}

/** @genstubs-expose-comment-block
 * Alias DateInterval::format
 */
/** @refcount 1 */
function date_interval_format(DateInterval $object, string $format): string {}

/** @genstubs-expose-comment-block
 * Sets the default timezone used by all date/time functions in a script
 * @param string $timezoneId The timezone identifier, like UTC, AfricaLagos, AsiaHong_Kong, or EuropeLisbon. The list of valid identifiers is available in the .
 * @return bool
 */
function date_default_timezone_set(string $timezoneId): bool {}

/** @genstubs-expose-comment-block
 * Gets the default timezone used by all date/time functions in a script
 * @return string
 */
/** @refcount 1 */
function date_default_timezone_get(): string {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1', message: 'use date_sun_info() instead')]
/** @genstubs-expose-comment-block
 * Returns time of sunrise for a given day and location
 * @param int $timestamp The timestamp of the day from which the sunrise time is taken.
 * @param int $returnFormat returnFormat constants constant description example SUNFUNCS_RET_STRING returns the result as string 16:46 SUNFUNCS_RET_DOUBLE returns the result as float 16.78243132 SUNFUNCS_RET_TIMESTAMP returns the result as int (timestamp) 1095034606
 * @param float|null $latitude Defaults to North, pass in a negative value for South. See also: date.default_latitude
 * @param float|null $longitude Defaults to East, pass in a negative value for West. See also: date.default_longitude
 * @param float|null $zenith zenith is the angle between the center of the sun and a line perpendicular to earth's surface. It defaults to date.sunrise_zenith Common zenith angles Angle Description 90°50' Sunrise: the point where the sun becomes visible. 96° Civil twilight: conventionally used to signify the start of dawn. 102° Nautical twilight: the point at which the horizon starts being visible at sea. 108° Astronomical twilight: the point at which the sun starts being the source of any illumination.
 * @param float|null $utcOffset Specified in hours. The utcOffset is ignored, if returnFormat is SUNFUNCS_RET_TIMESTAMP.
 * @return string|int|float|false
 */
function date_sunrise(
    int $timestamp, int $returnFormat = SUNFUNCS_RET_STRING,
    ?float $latitude = null, ?float $longitude = null, ?float $zenith = null,
    ?float $utcOffset = null): string|int|float|false {}

/**
 * @refcount 1
 */
#[\Deprecated(since: '8.1', message: 'use date_sun_info() instead')]
/** @genstubs-expose-comment-block
 * Returns time of sunset for a given day and location
 * @param int $timestamp The timestamp of the day from which the sunset time is taken.
 * @param int $returnFormat returnFormat constants constant description example SUNFUNCS_RET_STRING returns the result as string 16:46 SUNFUNCS_RET_DOUBLE returns the result as float 16.78243132 SUNFUNCS_RET_TIMESTAMP returns the result as int (timestamp) 1095034606
 * @param float|null $latitude Defaults to North, pass in a negative value for South. See also: date.default_latitude
 * @param float|null $longitude Defaults to East, pass in a negative value for West. See also: date.default_longitude
 * @param float|null $zenith zenith is the angle between the center of the sun and a line perpendicular to earth's surface. It defaults to date.sunset_zenith Common zenith angles Angle Description 90°50' Sunset: the point where the sun becomes invisible. 96° Civil twilight: conventionally used to signify the end of dusk. 102° Nautical twilight: the point at which the horizon ends being visible at sea. 108° Astronomical twilight: the point at which the sun ends being the source of any illumination.
 * @param float|null $utcOffset Specified in hours. The utcOffset is ignored, if returnFormat is SUNFUNCS_RET_TIMESTAMP.
 * @return string|int|float|false
 */
function date_sunset(
    int $timestamp, int $returnFormat = SUNFUNCS_RET_STRING,
    ?float $latitude = null, ?float $longitude = null, ?float $zenith = null,
    ?float $utcOffset = null): string|int|float|false {}

/** @genstubs-expose-comment-block
 * Returns an array with information about sunset/sunrise and twilight begin/end
 * @param int $timestamp Unix timestamp.
 * @param float $latitude Latitude in degrees.
 * @param float $longitude Longitude in degrees.
 * @return array
 */
/**
 * @return array<string, bool|int>
 * @refcount 1
 */
function date_sun_info(int $timestamp, float $latitude, float $longitude): array {}

interface DateTimeInterface
{
    public const string ATOM = DATE_ATOM;

    public const string COOKIE = DATE_COOKIE;

    public const string ISO8601 = DATE_ISO8601;

    public const string ISO8601_EXPANDED = DATE_ISO8601_EXPANDED;

    public const string RFC822 = DATE_RFC822;

    public const string RFC850 = DATE_RFC850;

    public const string RFC1036 = DATE_RFC1036;

    public const string RFC1123 = DATE_RFC1123;

    #[\Deprecated(since: '8.5', message: "as this format ignores the associated timezone and always uses GMT")]
    public const string RFC7231 = DATE_RFC7231;

    public const string RFC2822 = DATE_RFC2822;

    public const string RFC3339 = DATE_RFC3339;

    public const string RFC3339_EXTENDED = DATE_RFC3339_EXTENDED;

    public const string RSS = DATE_RSS;

    public const string W3C = DATE_W3C;

    /** @tentative-return-type */
    public function format(string $format): string;

    /** @tentative-return-type */
    public function getTimezone(): DateTimeZone|false;

    /** @tentative-return-type */
    public function getOffset(): int;

    /** @tentative-return-type */
    public function getTimestamp(): int;

    public function getMicrosecond(): int;

    /** @tentative-return-type */
    public function diff(DateTimeInterface $targetObject, bool $absolute = false): DateInterval;

    /** @tentative-return-type */
    #[\Deprecated(since: '8.5', message: 'this method is obsolete, as serialization hooks are provided by __unserialize() and __serialize()')]
    public function __wakeup(): void;

    public function __serialize(): array;

    public function __unserialize(array $data): void;
}

class DateTime implements DateTimeInterface
{
    public function __construct(string $datetime = "now", ?DateTimeZone $timezone = null) {}

    public function __serialize(): array {}

    public function __unserialize(array $data): void {}

    /** @tentative-return-type */
    #[\Deprecated(since: '8.5', message: 'this method is obsolete, as serialization hooks are provided by __unserialize() and __serialize()')]
    public function __wakeup(): void {}

    /** @tentative-return-type */
    public static function __set_state(array $array): DateTime {}

    /** @tentative-return-type */
    public static function createFromImmutable(DateTimeImmutable $object): static {}

    /** @return static */
    public static function createFromInterface(DateTimeInterface $object): DateTime {} // TODO return type should be static

    /**
     * @tentative-return-type
     * @alias date_create_from_format
     */
    public static function createFromFormat(string $format, string $datetime, ?DateTimeZone $timezone = null): DateTime|false {}

    /** @tentative-return-type */
    public static function createFromTimestamp(int|float $timestamp): static {}

    /**
     * @return array<string, int|array>|false
     * @tentative-return-type
     * @alias date_get_last_errors
     */
    public static function getLastErrors(): array|false {}

    /**
     * @tentative-return-type
     * @alias date_format
     */
    public function format(string $format): string {}

    /**
     * @tentative-return-type
     */
    public function modify(string $modifier): DateTime {}

    /**
     * @tentative-return-type
     * @alias date_add
     */
    public function add(DateInterval $interval): DateTime {}

    /**
     * @tentative-return-type
     */
    public function sub(DateInterval $interval): DateTime {}

    /**
     * @tentative-return-type
     * @alias date_timezone_get
     */
    public function getTimezone(): DateTimeZone|false {}

    /**
     * @tentative-return-type
     * @alias date_timezone_set
     */
    public function setTimezone(DateTimeZone $timezone): DateTime {}

    /**
     * @tentative-return-type
     * @alias date_offset_get
     */
    public function getOffset(): int {}

    public function getMicrosecond(): int {}

    /**
     * @tentative-return-type
     * @alias date_time_set
     */
    public function setTime(int $hour, int $minute, int $second = 0, int $microsecond = 0): DateTime {}

    /**
     * @tentative-return-type
     * @alias date_date_set
     */
    public function setDate(int $year, int $month, int $day): DateTime {}

    /**
     * @tentative-return-type
     * @alias date_isodate_set
     */
    public function setISODate(int $year, int $week, int $dayOfWeek = 1): DateTime {}

    /**
     * @tentative-return-type
     * @alias date_timestamp_set
     */
    public function setTimestamp(int $timestamp): DateTime {}

    public function setMicrosecond(int $microsecond): static {}

    /**
     * @tentative-return-type
     * @alias date_timestamp_get
     */
    public function getTimestamp(): int {}

    /**
     * @tentative-return-type
     * @alias date_diff
     */
    public function diff(DateTimeInterface $targetObject, bool $absolute = false): DateInterval {}
}

class DateTimeImmutable implements DateTimeInterface
{
    public function __construct(string $datetime = "now", ?DateTimeZone $timezone = null) {}

    public function __serialize(): array {}

    public function __unserialize(array $data): void {}

    /** @tentative-return-type */
    #[\Deprecated(since: '8.5', message: 'this method is obsolete, as serialization hooks are provided by __unserialize() and __serialize()')]
    public function __wakeup(): void {}

    /** @tentative-return-type */
    public static function __set_state(array $array): DateTimeImmutable {}

    /**
     * @tentative-return-type
     * @alias date_create_immutable_from_format
     */
    public static function createFromFormat(string $format, string $datetime, ?DateTimeZone $timezone = null): DateTimeImmutable|false {}

    /** @tentative-return-type */
    public static function createFromTimestamp(int|float $timestamp): static {}

    /**
     * @return array<string, int|array>|false
     * @tentative-return-type
     * @alias date_get_last_errors
     */
    public static function getLastErrors(): array|false {}

    /**
     * @tentative-return-type
     * @alias date_format
     */
    public function format(string $format): string {}

    /**
     * @tentative-return-type
     * @alias date_timezone_get
     */
    public function getTimezone(): DateTimeZone|false {}

    /**
     * @tentative-return-type
     * @alias date_offset_get
     */
    public function getOffset(): int {}

    /**
     * @tentative-return-type
     * @alias date_timestamp_get
     */
    public function getTimestamp(): int {}

    /**
     * @alias DateTime::getMicrosecond
     */
    public function getMicrosecond(): int {}

    /**
     * @tentative-return-type
     * @alias date_diff
     */
    public function diff(DateTimeInterface $targetObject, bool $absolute = false): DateInterval {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::modify() does not modify the object itself")]
    public function modify(string $modifier): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::add() does not modify the object itself")]
    public function add(DateInterval $interval): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::sub() does not modify the object itself")]
    public function sub(DateInterval $interval): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::setTimezone() does not modify the object itself")]
    public function setTimezone(DateTimeZone $timezone): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::setTime() does not modify the object itself")]
    public function setTime(int $hour, int $minute, int $second = 0, int $microsecond = 0): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::setDate() does not modify the object itself")]
    public function setDate(int $year, int $month, int $day): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::setISODate() does not modify the object itself")]
    public function setISODate(int $year, int $week, int $dayOfWeek = 1): DateTimeImmutable {}

    /** @tentative-return-type */
    #[\NoDiscard(message: "as DateTimeImmutable::setTimestamp() does not modify the object itself")]
    public function setTimestamp(int $timestamp): DateTimeImmutable {}

    #[\NoDiscard(message: "as DateTimeImmutable::setMicrosecond() does not modify the object itself")]
    public function setMicrosecond(int $microsecond): static {}

    /** @tentative-return-type */
    public static function createFromMutable(DateTime $object): static {}

    /** @return static */
    public static function createFromInterface(DateTimeInterface $object): DateTimeImmutable {} // TODO return type should be static
}

class DateTimeZone
{
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_AFRICA */
    public const int AFRICA = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_AMERICA */
    public const int AMERICA = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_ANTARCTICA */
    public const int ANTARCTICA = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_ARCTIC */
    public const int ARCTIC = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_ASIA */
    public const int ASIA = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_ATLANTIC */
    public const int ATLANTIC = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_AUSTRALIA */
    public const int AUSTRALIA = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_EUROPE */
    public const int EUROPE = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_INDIAN */
    public const int INDIAN = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_PACIFIC */
    public const int PACIFIC = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_UTC */
    public const int UTC = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_ALL */
    public const int ALL = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_GROUP_ALL_W_BC */
    public const int ALL_WITH_BC = UNKNOWN;
    /** @cvalue PHP_DATE_TIMEZONE_PER_COUNTRY */
    public const int PER_COUNTRY = UNKNOWN;

    public function __construct(string $timezone) {}

    /**
     * @tentative-return-type
     * @alias timezone_name_get
     */
    public function getName(): string {}

    /**
     * @tentative-return-type
     * @alias timezone_offset_get
     */
    public function getOffset(DateTimeInterface $datetime): int {}

    /**
     * @return array<int, array>|false
     * @tentative-return-type
     * @alias timezone_transitions_get
     */
    public function getTransitions(int $timestampBegin = PHP_INT_MIN, int $timestampEnd = 2147483647): array|false {}

    /**
     * @return array<string, float|string>|false
     * @tentative-return-type
     * @alias timezone_location_get
     */
    public function getLocation(): array|false {}

    /**
     * @return array<string, array>
     * @tentative-return-type
     * @alias timezone_abbreviations_list
     */
    public static function listAbbreviations(): array {}

    /**
     * @return array<int, string>
     * @tentative-return-type
     * @alias timezone_identifiers_list
     */
    public static function listIdentifiers(int $timezoneGroup = DateTimeZone::ALL, ?string $countryCode = null): array {}

    public function __serialize(): array {}

    public function __unserialize(array $data): void {}

    /** @tentative-return-type */
    #[\Deprecated(since: '8.5', message: 'this method is obsolete, as serialization hooks are provided by __unserialize() and __serialize()')]
    public function __wakeup(): void {}

    /** @tentative-return-type */
    public static function __set_state(array $array): DateTimeZone {}
}

class DateInterval
{
    public function __construct(string $duration) {}

    /**
     * @tentative-return-type
     */
    public static function createFromDateString(string $datetime): DateInterval {}

    /**
     * @tentative-return-type
     * @alias date_interval_format
     */
    public function format(string $format): string {}

    public function __serialize(): array;

    public function __unserialize(array $data): void;

    /** @tentative-return-type */
    #[\Deprecated(since: '8.5', message: 'this method is obsolete, as serialization hooks are provided by __unserialize() and __serialize()')]
    public function __wakeup(): void {}

    /** @tentative-return-type */
    public static function __set_state(array $array): DateInterval {}
}

class DatePeriod implements IteratorAggregate
{
    /** @cvalue PHP_DATE_PERIOD_EXCLUDE_START_DATE */
    public const int EXCLUDE_START_DATE = UNKNOWN;
    /** @cvalue PHP_DATE_PERIOD_INCLUDE_END_DATE */
    public const int INCLUDE_END_DATE = UNKNOWN;

    /**
     * @readonly
     * @virtual
     */
    public ?DateTimeInterface $start;
    /**
     * @readonly
     * @virtual
     */
    public ?DateTimeInterface $current;
    /**
     * @readonly
     * @virtual
     */
    public ?DateTimeInterface $end;
    /**
     * @readonly
     * @virtual
     */
    public ?DateInterval $interval;
    /**
     * @readonly
     * @virtual
     */
    public int $recurrences;
    /**
     * @readonly
     * @virtual
     */
    public bool $include_start_date;
    /**
     * @readonly
     * @virtual
     */
    public bool $include_end_date;

    public static function createFromISO8601String(string $specification, int $options = 0): static {}

    /**
     * @param DateTimeInterface|string $start
     * @param DateInterval|int $interval
     * @param DateTimeInterface|int $end
     * @param int $options
     */
    public function __construct($start, $interval = UNKNOWN, $end = UNKNOWN, $options = UNKNOWN) {}

    /** @tentative-return-type */
    public function getStartDate(): DateTimeInterface {}

    /** @tentative-return-type */
    public function getEndDate(): ?DateTimeInterface {}

    /** @tentative-return-type */
    public function getDateInterval(): DateInterval {}

    /** @tentative-return-type */
    public function getRecurrences(): ?int {}

    public function __serialize(): array;

    public function __unserialize(array $data): void;

    /** @tentative-return-type */
    #[\Deprecated(since: '8.5', message: 'this method is obsolete, as serialization hooks are provided by __unserialize() and __serialize()')]
    public function __wakeup(): void {}

    /** @tentative-return-type */
    public static function __set_state(array $array): DatePeriod {}

    public function getIterator(): Iterator {}
}

/**
 * @strict-properties
 */
class DateError extends Error
{
}

/**
 * @strict-properties
 */
class DateObjectError extends DateError
{
}

/**
 * @strict-properties
 */
class DateRangeError extends DateError
{
}

/**
 * @strict-properties
 */
class DateException extends Exception
{
}

/**
 * @strict-properties
 */
class DateInvalidTimeZoneException extends DateException
{
}

/**
 * @strict-properties
 */
class DateInvalidOperationException extends DateException
{
}

/**
 * @strict-properties
 */
class DateMalformedStringException extends DateException
{
}

/**
 * @strict-properties
 */
class DateMalformedIntervalStringException extends DateException
{
}

/**
 * @strict-properties
 */
class DateMalformedPeriodStringException extends DateException
{
}
