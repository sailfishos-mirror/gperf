dnl autoconf configuration for gperf/tests

dnl Copyright (C) 1998-2024 Free Software Foundation, Inc.
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
AC_CONFIG_SRCDIR([c-parse.gperf])
AC_CONFIG_AUX_DIR([../build-aux])
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
if test $ac_cv_c_compiler_gnu = yes && test $ac_cv_cxx_compiler_gnu = yes; then
  CHECK_LANG_SYNTAX='check-lang-syntax'
else
  CHECK_LANG_SYNTAX=''
fi
AC_SUBST([CHECK_LANG_SYNTAX])
dnl
dnl           That's it.
dnl
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
