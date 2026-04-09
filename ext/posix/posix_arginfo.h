/* This is a generated file, edit posix.stub.php instead.
 * Stub hash: e2a851ce72fc4d0d3e1ebcc9d04e03e80d583a30 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_kill, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, process_id, IS_LONG, 0, "The process identifier.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, signal, IS_LONG, 0, "One of the PCNTL signals constants.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_getpid, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_posix_getppid arginfo_posix_getpid

#define arginfo_posix_getuid arginfo_posix_getpid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_setuid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, user_id, IS_LONG, 0, "The user id.")
ZEND_END_ARG_INFO()

#define arginfo_posix_geteuid arginfo_posix_getpid

#if defined(HAVE_SETEUID)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_seteuid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, user_id, IS_LONG, 0, "The user id.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_posix_getgid arginfo_posix_getpid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_setgid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, group_id, IS_LONG, 0, "The group id.")
ZEND_END_ARG_INFO()

#define arginfo_posix_getegid arginfo_posix_getpid

#if defined(HAVE_SETEGID)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_setegid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, group_id, IS_LONG, 0, "The group id.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETGROUPS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getgroups, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETLOGIN)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getlogin, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

#define arginfo_posix_getpgrp arginfo_posix_getpid

#if defined(HAVE_SETSID)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_setsid, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_setpgid, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, process_id, IS_LONG, 0, "The process id.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, process_group_id, IS_LONG, 0, "The process group id.")
ZEND_END_ARG_INFO()

#if defined(HAVE_GETPGID)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getpgid, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, process_id, IS_LONG, 0, "The process id.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GETSID)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getsid, 0, 1, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, process_id, IS_LONG, 0, "The process identifier. If set to 0, the current process is assumed.  If an invalid process_id is specified, then false is returned and an error is set which can be checked with posix_get_last_error.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_uname, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#define arginfo_posix_times arginfo_posix_uname

#if defined(HAVE_CTERMID)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_ctermid, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_ttyname, 0, 1, MAY_BE_STRING|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, file_descriptor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_isatty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, file_descriptor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getcwd, 0, 0, MAY_BE_STRING|MAY_BE_FALSE)
ZEND_END_ARG_INFO()

#if defined(HAVE_MKFIFO)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_mkfifo, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the FIFO file.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, permissions, IS_LONG, 0, "The second parameter permissions has to be given in octal notation (e.g. 0644). The permission of the newly created FIFO also depends on the setting of the current umask. The permissions of the created file are (mode & ~umask).")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_MKNOD)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_mknod, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The file to create")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, flags, IS_LONG, 0, "This parameter is constructed by a bitwise OR between file type (one of the following constants: POSIX_S_IFREG, POSIX_S_IFCHR, POSIX_S_IFBLK, POSIX_S_IFIFO or POSIX_S_IFSOCK) and permissions.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, major, IS_LONG, 0, "0", "The major device kernel identifier (required to pass when using S_IFCHR or S_IFBLK).")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, minor, IS_LONG, 0, "0", "The minor device kernel identifier.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_access, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The name of the file to be tested.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "A mask consisting of one or more of POSIX_F_OK, POSIX_R_OK, POSIX_W_OK and POSIX_X_OK.")
ZEND_END_ARG_INFO()

#if defined(HAVE_EACCESS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_eaccess, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The name of a file to be tested.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, flags, IS_LONG, 0, "0", "A mask consisting of one or more of POSIX_F_OK, POSIX_R_OK, POSIX_W_OK and POSIX_X_OK.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getgrnam, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, name, IS_STRING, 0, "The name of the group")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getgrgid, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, group_id, IS_LONG, 0, "The group id.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getpwnam, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, username, IS_STRING, 0, "An alphanumeric username.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getpwuid, 0, 1, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, user_id, IS_LONG, 0, "The user identifier.")
ZEND_END_ARG_INFO()

#if defined(HAVE_GETRLIMIT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_getrlimit, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, resource, IS_LONG, 1, "null", "If null, all current resource limits will be returned. Otherwise, specify the resource limit constant to retrieve a specific limit.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_SETRLIMIT)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_setrlimit, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, resource, IS_LONG, 0, "The resource limit constant corresponding to the limit that is being set.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, soft_limit, IS_LONG, 0, "The soft limit, in whatever unit the resource limit requires, or POSIX_RLIMIT_INFINITY.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, hard_limit, IS_LONG, 0, "The hard limit, in whatever unit the resource limit requires, or POSIX_RLIMIT_INFINITY.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_posix_get_last_error arginfo_posix_getpid

#define arginfo_posix_errno arginfo_posix_getpid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_strerror, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, error_code, IS_LONG, 0, "A POSIX error number, returned by posix_get_last_error. If set to 0, then the string \"Success\" is returned.")
ZEND_END_ARG_INFO()

#if defined(HAVE_INITGROUPS)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_initgroups, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, username, IS_STRING, 0, "The user to calculate the list for.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, group_id, IS_LONG, 0, "Typically the group number from the password file.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_posix_sysconf, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, conf_id, IS_LONG, 0, "Identifier of the variable with the following constants POSIX_SC_ARG_MAX, POSIX_SC_PAGESIZE, POSIX_SC_NPROCESSORS_CONF, POSIX_SC_NPROCESSORS_ONLN, POSIX_SC_CHILD_MAX, POSIX_SC_CLK_TCK")
ZEND_END_ARG_INFO()

#if defined(HAVE_PATHCONF)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_pathconf, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, path, IS_STRING, 0, "The name of the file whose limit you want to get.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, name, IS_LONG, 0, "The name of the configurable limit, one of the following. POSIX_PC_LINK_MAX, POSIX_PC_MAX_CANON, POSIX_PC_MAX_INPUT, POSIX_PC_NAME_MAX, POSIX_PC_PATH_MAX, POSIX_PC_PIPE_BUF, POSIX_PC_CHOWN_RESTRICTED, POSIX_PC_NO_TRUNC, POSIX_PC_ALLOC_SIZE_MIN, POSIX_PC_SYMLINK_MAX.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_FPATHCONF)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_posix_fpathconf, 0, 2, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_INFO(0, file_descriptor)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, name, IS_LONG, 0, "The name of the configurable limit, one of the following. POSIX_PC_LINK_MAX, POSIX_PC_MAX_CANON, POSIX_PC_MAX_INPUT, POSIX_PC_NAME_MAX, POSIX_PC_PATH_MAX, POSIX_PC_PIPE_BUF, POSIX_PC_CHOWN_RESTRICTED, POSIX_PC_NO_TRUNC, POSIX_PC_ALLOC_SIZE_MIN, POSIX_PC_SYMLINK_MAX.")
ZEND_END_ARG_INFO()
#endif

ZEND_FUNCTION(posix_kill);
ZEND_FUNCTION(posix_getpid);
ZEND_FUNCTION(posix_getppid);
ZEND_FUNCTION(posix_getuid);
ZEND_FUNCTION(posix_setuid);
ZEND_FUNCTION(posix_geteuid);
#if defined(HAVE_SETEUID)
ZEND_FUNCTION(posix_seteuid);
#endif
ZEND_FUNCTION(posix_getgid);
ZEND_FUNCTION(posix_setgid);
ZEND_FUNCTION(posix_getegid);
#if defined(HAVE_SETEGID)
ZEND_FUNCTION(posix_setegid);
#endif
#if defined(HAVE_GETGROUPS)
ZEND_FUNCTION(posix_getgroups);
#endif
#if defined(HAVE_GETLOGIN)
ZEND_FUNCTION(posix_getlogin);
#endif
ZEND_FUNCTION(posix_getpgrp);
#if defined(HAVE_SETSID)
ZEND_FUNCTION(posix_setsid);
#endif
ZEND_FUNCTION(posix_setpgid);
#if defined(HAVE_GETPGID)
ZEND_FUNCTION(posix_getpgid);
#endif
#if defined(HAVE_GETSID)
ZEND_FUNCTION(posix_getsid);
#endif
ZEND_FUNCTION(posix_uname);
ZEND_FUNCTION(posix_times);
#if defined(HAVE_CTERMID)
ZEND_FUNCTION(posix_ctermid);
#endif
ZEND_FUNCTION(posix_ttyname);
ZEND_FUNCTION(posix_isatty);
ZEND_FUNCTION(posix_getcwd);
#if defined(HAVE_MKFIFO)
ZEND_FUNCTION(posix_mkfifo);
#endif
#if defined(HAVE_MKNOD)
ZEND_FUNCTION(posix_mknod);
#endif
ZEND_FUNCTION(posix_access);
#if defined(HAVE_EACCESS)
ZEND_FUNCTION(posix_eaccess);
#endif
ZEND_FUNCTION(posix_getgrnam);
ZEND_FUNCTION(posix_getgrgid);
ZEND_FUNCTION(posix_getpwnam);
ZEND_FUNCTION(posix_getpwuid);
#if defined(HAVE_GETRLIMIT)
ZEND_FUNCTION(posix_getrlimit);
#endif
#if defined(HAVE_SETRLIMIT)
ZEND_FUNCTION(posix_setrlimit);
#endif
ZEND_FUNCTION(posix_get_last_error);
ZEND_FUNCTION(posix_strerror);
#if defined(HAVE_INITGROUPS)
ZEND_FUNCTION(posix_initgroups);
#endif
ZEND_FUNCTION(posix_sysconf);
#if defined(HAVE_PATHCONF)
ZEND_FUNCTION(posix_pathconf);
#endif
#if defined(HAVE_FPATHCONF)
ZEND_FUNCTION(posix_fpathconf);
#endif

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("posix_kill", zif_posix_kill, arginfo_posix_kill, 0, NULL, "/**\n * Send a signal to a process\n * @param int $process_id The process identifier.\n * @param int $signal One of the PCNTL signals constants.\n * @return bool\n */")
	ZEND_RAW_FENTRY("posix_getpid", zif_posix_getpid, arginfo_posix_getpid, 0, NULL, "/**\n * Return the current process identifier\n * @return int\n */")
	ZEND_RAW_FENTRY("posix_getppid", zif_posix_getppid, arginfo_posix_getppid, 0, NULL, "/**\n * Return the parent process identifier\n * @return int\n */")
	ZEND_RAW_FENTRY("posix_getuid", zif_posix_getuid, arginfo_posix_getuid, 0, NULL, "/**\n * Return the real user ID of the current process\n * @return int\n */")
	ZEND_RAW_FENTRY("posix_setuid", zif_posix_setuid, arginfo_posix_setuid, 0, NULL, "/**\n * Set the UID of the current process\n * @param int $user_id The user id.\n * @return bool\n */")
	ZEND_RAW_FENTRY("posix_geteuid", zif_posix_geteuid, arginfo_posix_geteuid, 0, NULL, "/**\n * Return the effective user ID of the current process\n * @return int\n */")
#if defined(HAVE_SETEUID)
	ZEND_RAW_FENTRY("posix_seteuid", zif_posix_seteuid, arginfo_posix_seteuid, 0, NULL, "/**\n * Set the effective UID of the current process\n * @param int $user_id The user id.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("posix_getgid", zif_posix_getgid, arginfo_posix_getgid, 0, NULL, "/**\n * Return the real group ID of the current process\n * @return int\n */")
	ZEND_RAW_FENTRY("posix_setgid", zif_posix_setgid, arginfo_posix_setgid, 0, NULL, "/**\n * Set the GID of the current process\n * @param int $group_id The group id.\n * @return bool\n */")
	ZEND_RAW_FENTRY("posix_getegid", zif_posix_getegid, arginfo_posix_getegid, 0, NULL, "/**\n * Return the effective group ID of the current process\n * @return int\n */")
#if defined(HAVE_SETEGID)
	ZEND_RAW_FENTRY("posix_setegid", zif_posix_setegid, arginfo_posix_setegid, 0, NULL, "/**\n * Set the effective GID of the current process\n * @param int $group_id The group id.\n * @return bool\n */")
#endif
#if defined(HAVE_GETGROUPS)
	ZEND_RAW_FENTRY("posix_getgroups", zif_posix_getgroups, arginfo_posix_getgroups, 0, NULL, "/**\n * Return the group set of the current process\n * @return array|false\n */")
#endif
#if defined(HAVE_GETLOGIN)
	ZEND_RAW_FENTRY("posix_getlogin", zif_posix_getlogin, arginfo_posix_getlogin, 0, NULL, "/**\n * Return login name\n * @return string|false\n */")
#endif
	ZEND_RAW_FENTRY("posix_getpgrp", zif_posix_getpgrp, arginfo_posix_getpgrp, 0, NULL, "/**\n * Return the current process group identifier\n * @return int\n */")
#if defined(HAVE_SETSID)
	ZEND_RAW_FENTRY("posix_setsid", zif_posix_setsid, arginfo_posix_setsid, 0, NULL, "/**\n * Make the current process a session leader\n * @return int\n */")
#endif
	ZEND_RAW_FENTRY("posix_setpgid", zif_posix_setpgid, arginfo_posix_setpgid, 0, NULL, "/**\n * Set process group id for job control\n * @param int $process_id The process id.\n * @param int $process_group_id The process group id.\n * @return bool\n */")
#if defined(HAVE_GETPGID)
	ZEND_RAW_FENTRY("posix_getpgid", zif_posix_getpgid, arginfo_posix_getpgid, 0, NULL, "/**\n * Get process group id for job control\n * @param int $process_id The process id.\n * @return int|false\n */")
#endif
#if defined(HAVE_GETSID)
	ZEND_RAW_FENTRY("posix_getsid", zif_posix_getsid, arginfo_posix_getsid, 0, NULL, "/**\n * Get the current sid of the process\n * @param int $process_id The process identifier. If set to 0, the current process is assumed.  If an invalid process_id is specified, then false is returned and an error is set which can be checked with posix_get_last_error.\n * @return int|false\n */")
#endif
	ZEND_RAW_FENTRY("posix_uname", zif_posix_uname, arginfo_posix_uname, 0, NULL, "/**\n * Get system name\n * @return array|false\n */")
	ZEND_RAW_FENTRY("posix_times", zif_posix_times, arginfo_posix_times, 0, NULL, "/**\n * Get process times\n * @return array|false\n */")
#if defined(HAVE_CTERMID)
	ZEND_RAW_FENTRY("posix_ctermid", zif_posix_ctermid, arginfo_posix_ctermid, 0, NULL, "/**\n * Get path name of controlling terminal\n * @return string|false\n */")
#endif
	ZEND_RAW_FENTRY("posix_ttyname", zif_posix_ttyname, arginfo_posix_ttyname, 0, NULL, "/**\n * Determine terminal device name\n * @param resource|int $file_descriptor The file descriptor, which is expected to be either a file resource or an int. An int will be assumed to be a file descriptor that can be passed directly to the underlying system call.\n * @return string|false\n */")
	ZEND_RAW_FENTRY("posix_isatty", zif_posix_isatty, arginfo_posix_isatty, 0, NULL, "/**\n * Determine if a file descriptor is an interactive terminal\n * @param resource|int $file_descriptor The file descriptor, which is expected to be either a file resource or an int. An int will be assumed to be a file descriptor that can be passed directly to the underlying system call.\n * @return bool\n */")
	ZEND_RAW_FENTRY("posix_getcwd", zif_posix_getcwd, arginfo_posix_getcwd, 0, NULL, "/**\n * Pathname of current directory\n * @return string|false\n */")
#if defined(HAVE_MKFIFO)
	ZEND_RAW_FENTRY("posix_mkfifo", zif_posix_mkfifo, arginfo_posix_mkfifo, 0, NULL, "/**\n * Create a fifo special file (a named pipe)\n * @param string $filename Path to the FIFO file.\n * @param int $permissions The second parameter permissions has to be given in octal notation (e.g. 0644). The permission of the newly created FIFO also depends on the setting of the current umask. The permissions of the created file are (mode & ~umask).\n * @return bool\n */")
#endif
#if defined(HAVE_MKNOD)
	ZEND_RAW_FENTRY("posix_mknod", zif_posix_mknod, arginfo_posix_mknod, 0, NULL, "/**\n * Create a special or ordinary file (POSIX.1)\n * @param string $filename The file to create\n * @param int $flags This parameter is constructed by a bitwise OR between file type (one of the following constants: POSIX_S_IFREG, POSIX_S_IFCHR, POSIX_S_IFBLK, POSIX_S_IFIFO or POSIX_S_IFSOCK) and permissions.\n * @param int $major The major device kernel identifier (required to pass when using S_IFCHR or S_IFBLK).\n * @param int $minor The minor device kernel identifier.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("posix_access", zif_posix_access, arginfo_posix_access, 0, NULL, "/**\n * Determine accessibility of a file\n * @param string $filename The name of the file to be tested.\n * @param int $flags A mask consisting of one or more of POSIX_F_OK, POSIX_R_OK, POSIX_W_OK and POSIX_X_OK.\n * @return bool\n */")
#if defined(HAVE_EACCESS)
	ZEND_RAW_FENTRY("posix_eaccess", zif_posix_eaccess, arginfo_posix_eaccess, 0, NULL, "/**\n * Determine accessibility of a file\n * @param string $filename The name of a file to be tested.\n * @param int $flags A mask consisting of one or more of POSIX_F_OK, POSIX_R_OK, POSIX_W_OK and POSIX_X_OK.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("posix_getgrnam", zif_posix_getgrnam, arginfo_posix_getgrnam, 0, NULL, "/**\n * Return info about a group by name\n * @param string $name The name of the group\n * @return array|false\n */")
	ZEND_RAW_FENTRY("posix_getgrgid", zif_posix_getgrgid, arginfo_posix_getgrgid, 0, NULL, "/**\n * Return info about a group by group id\n * @param int $group_id The group id.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("posix_getpwnam", zif_posix_getpwnam, arginfo_posix_getpwnam, 0, NULL, "/**\n * Return info about a user by username\n * @param string $username An alphanumeric username.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("posix_getpwuid", zif_posix_getpwuid, arginfo_posix_getpwuid, 0, NULL, "/**\n * Return info about a user by user id\n * @param int $user_id The user identifier.\n * @return array|false\n */")
#if defined(HAVE_GETRLIMIT)
	ZEND_RAW_FENTRY("posix_getrlimit", zif_posix_getrlimit, arginfo_posix_getrlimit, 0, NULL, "/**\n * Return info about system resource limits\n * @param int|null $resource If null, all current resource limits will be returned. Otherwise, specify the resource limit constant to retrieve a specific limit.\n * @return array|false\n */")
#endif
#if defined(HAVE_SETRLIMIT)
	ZEND_RAW_FENTRY("posix_setrlimit", zif_posix_setrlimit, arginfo_posix_setrlimit, 0, NULL, "/**\n * Set system resource limits\n * @param int $resource The resource limit constant corresponding to the limit that is being set.\n * @param int $soft_limit The soft limit, in whatever unit the resource limit requires, or POSIX_RLIMIT_INFINITY.\n * @param int $hard_limit The hard limit, in whatever unit the resource limit requires, or POSIX_RLIMIT_INFINITY.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("posix_get_last_error", zif_posix_get_last_error, arginfo_posix_get_last_error, 0, NULL, "/**\n * Retrieve the error number set by the last posix function that failed\n * @return int\n */")
	ZEND_RAW_FENTRY("posix_errno", zif_posix_get_last_error, arginfo_posix_errno, 0, NULL, "/**\n * Alias posix_get_last_error\n */")
	ZEND_RAW_FENTRY("posix_strerror", zif_posix_strerror, arginfo_posix_strerror, 0, NULL, "/**\n * Retrieve the system error message associated with the given errno\n * @param int $error_code A POSIX error number, returned by posix_get_last_error. If set to 0, then the string \"Success\" is returned.\n * @return string\n */")
#if defined(HAVE_INITGROUPS)
	ZEND_RAW_FENTRY("posix_initgroups", zif_posix_initgroups, arginfo_posix_initgroups, 0, NULL, "/**\n * Calculate the group access list\n * @param string $username The user to calculate the list for.\n * @param int $group_id Typically the group number from the password file.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("posix_sysconf", zif_posix_sysconf, arginfo_posix_sysconf, 0, NULL, "/**\n * Returns system runtime information\n * @param int $conf_id Identifier of the variable with the following constants POSIX_SC_ARG_MAX, POSIX_SC_PAGESIZE, POSIX_SC_NPROCESSORS_CONF, POSIX_SC_NPROCESSORS_ONLN, POSIX_SC_CHILD_MAX, POSIX_SC_CLK_TCK\n * @return int\n */")
#if defined(HAVE_PATHCONF)
	ZEND_RAW_FENTRY("posix_pathconf", zif_posix_pathconf, arginfo_posix_pathconf, 0, NULL, "/**\n * Returns the value of a configurable limit\n * @param string $path The name of the file whose limit you want to get.\n * @param int $name The name of the configurable limit, one of the following. POSIX_PC_LINK_MAX, POSIX_PC_MAX_CANON, POSIX_PC_MAX_INPUT, POSIX_PC_NAME_MAX, POSIX_PC_PATH_MAX, POSIX_PC_PIPE_BUF, POSIX_PC_CHOWN_RESTRICTED, POSIX_PC_NO_TRUNC, POSIX_PC_ALLOC_SIZE_MIN, POSIX_PC_SYMLINK_MAX.\n * @return int|false\n */")
#endif
#if defined(HAVE_FPATHCONF)
	ZEND_RAW_FENTRY("posix_fpathconf", zif_posix_fpathconf, arginfo_posix_fpathconf, 0, NULL, "/**\n * Returns the value of a configurable limit\n * @param resource|int $file_descriptor The file descriptor, which is expected to be either a file resource or an int. An int will be assumed to be a file descriptor that can be passed directly to the underlying system call.\n * @param int $name The name of the configurable limit, one of the following. POSIX_PC_LINK_MAX, POSIX_PC_MAX_CANON, POSIX_PC_MAX_INPUT, POSIX_PC_NAME_MAX, POSIX_PC_PATH_MAX, POSIX_PC_PIPE_BUF, POSIX_PC_CHOWN_RESTRICTED, POSIX_PC_NO_TRUNC, POSIX_PC_ALLOC_SIZE_MIN, POSIX_PC_SYMLINK_MAX.\n * @return int|false\n */")
#endif
	ZEND_FE_END
};

static void register_posix_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("POSIX_F_OK", F_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("POSIX_X_OK", X_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("POSIX_W_OK", W_OK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("POSIX_R_OK", R_OK, CONST_PERSISTENT);
#if defined(S_IFREG)
	REGISTER_LONG_CONSTANT("POSIX_S_IFREG", S_IFREG, CONST_PERSISTENT);
#endif
#if defined(S_IFCHR)
	REGISTER_LONG_CONSTANT("POSIX_S_IFCHR", S_IFCHR, CONST_PERSISTENT);
#endif
#if defined(S_IFBLK)
	REGISTER_LONG_CONSTANT("POSIX_S_IFBLK", S_IFBLK, CONST_PERSISTENT);
#endif
#if defined(S_IFIFO)
	REGISTER_LONG_CONSTANT("POSIX_S_IFIFO", S_IFIFO, CONST_PERSISTENT);
#endif
#if defined(S_IFSOCK)
	REGISTER_LONG_CONSTANT("POSIX_S_IFSOCK", S_IFSOCK, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_AS)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_AS", RLIMIT_AS, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_CORE)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_CORE", RLIMIT_CORE, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_CPU)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_CPU", RLIMIT_CPU, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_DATA)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_DATA", RLIMIT_DATA, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_FSIZE)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_FSIZE", RLIMIT_FSIZE, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_LOCKS)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_LOCKS", RLIMIT_LOCKS, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_MEMLOCK)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_MEMLOCK", RLIMIT_MEMLOCK, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_MSGQUEUE)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_MSGQUEUE", RLIMIT_MSGQUEUE, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_NICE)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_NICE", RLIMIT_NICE, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_NOFILE)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_NOFILE", RLIMIT_NOFILE, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_NPROC)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_NPROC", RLIMIT_NPROC, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_RSS)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_RSS", RLIMIT_RSS, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_RTPRIO)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_RTPRIO", RLIMIT_RTPRIO, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_RTTIME)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_RTTIME", RLIMIT_RTTIME, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_SIGPENDING)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_SIGPENDING", RLIMIT_SIGPENDING, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_STACK)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_STACK", RLIMIT_STACK, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_KQUEUES)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_KQUEUES", RLIMIT_KQUEUES, CONST_PERSISTENT);
#endif
#if defined(RLIMIT_NPTS)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_NPTS", RLIMIT_NPTS, CONST_PERSISTENT);
#endif
#if defined(HAVE_SETRLIMIT)
	REGISTER_LONG_CONSTANT("POSIX_RLIMIT_INFINITY", RLIM_INFINITY, CONST_PERSISTENT);
#endif
#if defined(_SC_ARG_MAX)
	REGISTER_LONG_CONSTANT("POSIX_SC_ARG_MAX", _SC_ARG_MAX, CONST_PERSISTENT);
#endif
#if defined(_SC_CHILD_MAX)
	REGISTER_LONG_CONSTANT("POSIX_SC_CHILD_MAX", _SC_CHILD_MAX, CONST_PERSISTENT);
#endif
#if defined(_SC_CLK_TCK)
	REGISTER_LONG_CONSTANT("POSIX_SC_CLK_TCK", _SC_CLK_TCK, CONST_PERSISTENT);
#endif
#if defined(_SC_PAGESIZE)
	REGISTER_LONG_CONSTANT("POSIX_SC_PAGESIZE", _SC_PAGESIZE, CONST_PERSISTENT);
#endif
#if defined(_SC_NPROCESSORS_CONF)
	REGISTER_LONG_CONSTANT("POSIX_SC_NPROCESSORS_CONF", _SC_NPROCESSORS_CONF, CONST_PERSISTENT);
#endif
#if defined(_SC_NPROCESSORS_ONLN)
	REGISTER_LONG_CONSTANT("POSIX_SC_NPROCESSORS_ONLN", _SC_NPROCESSORS_ONLN, CONST_PERSISTENT);
#endif
#if defined(_PC_LINK_MAX)
	REGISTER_LONG_CONSTANT("POSIX_PC_LINK_MAX", _PC_LINK_MAX, CONST_PERSISTENT);
#endif
#if defined(_PC_MAX_CANON)
	REGISTER_LONG_CONSTANT("POSIX_PC_MAX_CANON", _PC_MAX_CANON, CONST_PERSISTENT);
#endif
#if defined(_PC_MAX_INPUT)
	REGISTER_LONG_CONSTANT("POSIX_PC_MAX_INPUT", _PC_MAX_INPUT, CONST_PERSISTENT);
#endif
#if defined(_PC_NAME_MAX)
	REGISTER_LONG_CONSTANT("POSIX_PC_NAME_MAX", _PC_NAME_MAX, CONST_PERSISTENT);
#endif
#if defined(_PC_PATH_MAX)
	REGISTER_LONG_CONSTANT("POSIX_PC_PATH_MAX", _PC_PATH_MAX, CONST_PERSISTENT);
#endif
#if defined(_PC_PIPE_BUF)
	REGISTER_LONG_CONSTANT("POSIX_PC_PIPE_BUF", _PC_PIPE_BUF, CONST_PERSISTENT);
#endif
#if defined(_PC_CHOWN_RESTRICTED)
	REGISTER_LONG_CONSTANT("POSIX_PC_CHOWN_RESTRICTED", _PC_CHOWN_RESTRICTED, CONST_PERSISTENT);
#endif
#if defined(_PC_NO_TRUNC)
	REGISTER_LONG_CONSTANT("POSIX_PC_NO_TRUNC", _PC_NO_TRUNC, CONST_PERSISTENT);
#endif
#if defined(_PC_ALLOC_SIZE_MIN)
	REGISTER_LONG_CONSTANT("POSIX_PC_ALLOC_SIZE_MIN", _PC_ALLOC_SIZE_MIN, CONST_PERSISTENT);
#endif
#if defined(_PC_SYMLINK_MAX)
	REGISTER_LONG_CONSTANT("POSIX_PC_SYMLINK_MAX", _PC_SYMLINK_MAX, CONST_PERSISTENT);
#endif
#if defined(_SC_OPEN_MAX)
	REGISTER_LONG_CONSTANT("POSIX_SC_OPEN_MAX", _SC_OPEN_MAX, CONST_PERSISTENT);
#endif
}
