dnl autoconf configuration for gperf/src

dnl Copyright (C) 1998-2025 Free Software Foundation, Inc.
dnl Written by Douglas C. Schmidt <schmidt@ics.uci.edu>
dnl and Bruno Haible <bruno@clisp.org>.
dnl
dnl This file is part of GNU GPERF.
dnl
dnl This program is free software: you can redistribute it and/or modify
dnl it under the terms of the GNU General Public License as published by
dnl the Free Software Foundation; either version 3 of the License, or
dnl (at your option) any later version.
dnl
dnl This program is distributed in the hope that it will be useful,
dnl but WITHOUT ANY WARRANTY; without even the implied warranty of
dnl MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
dnl GNU General Public License for more details.
dnl
dnl You should have received a copy of the GNU General Public License
dnl along with this program.  If not, see <https://www.gnu.org/licenses/>.

AC_PREREQ([2.64])
AC_INIT
AC_CONFIG_SRCDIR([main.cc])
AC_CONFIG_AUX_DIR([../build-aux])
AC_CONFIG_HEADERS([config.h])
AC_PROG_MAKE_SET
dnl
dnl           checks for programs
dnl
AC_PROG_CC
                      dnl sets variable CC
AC_PROG_CPP
                      dnl sets variable CPP
AC_PROG_CXX
                      dnl sets variable CXX
AC_PROG_CXXCPP
                      dnl sets variable CXXCPP
AC_PROG_INSTALL
                      dnl sets variables INSTALL, INSTALL_DATA, INSTALL_PROGRAM
dnl
dnl           checks for compiler characteristics
dnl
AC_CACHE_CHECK([for stack-allocated variable-size arrays],
  [gp_cv_cxx_dynamic_array],
  [AC_LANG_PUSH([C++])
   AC_COMPILE_IFELSE(
     [AC_LANG_PROGRAM([[int func (int n) { int dynamic_array[n]; }]], [[]])],
     [gp_cv_cxx_dynamic_array=yes], [gp_cv_cxx_dynamic_array=no])
   AC_LANG_POP([C++])
  ])
if test $gp_cv_cxx_dynamic_array = yes; then
  AC_DEFINE([HAVE_DYNAMIC_ARRAY], [1],
    [Define if the C++ compiler supports stack-allocated variable-size arrays.])
fi
dnl
dnl           checks for functions and declarations
dnl
dnl
dnl           checks for libraries
dnl
AC_CHECK_LIB([m], [rand], [GPERF_LIBM="-lm"], [GPERF_LIBM=""])
AC_SUBST([GPERF_LIBM])
dnl
dnl           Include lib/config.h through src/config.h.
dnl
AH_BOTTOM([
#undef/**/PACKAGE_NAME
#undef/**/PACKAGE_STRING
#undef/**/PACKAGE_TARNAME
#undef/**/PACKAGE_VERSION
#include "../lib/config.h"
])
dnl
dnl           That's it.
dnl
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
