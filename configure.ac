#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([serial_sample], [1.0.0], [thina@yourinventit.com])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE(foreign)

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lev':
AC_CHECK_LIB([ev], [main])

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h stdlib.h string.h syslog.h termios.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_MODE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset strerror])

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
