/* This may look like C code, but it is really -*- C++ -*- */

/* Input routines.

   Copyright (C) 1989-1998, 2002-2003, 2025 Free Software Foundation, Inc.
   Written by Douglas C. Schmidt <schmidt@ics.uci.edu>
   and Bruno Haible <bruno@clisp.org>.

   This file is part of GNU GPERF.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#ifndef input_h
#define input_h 1

#include <stdio.h>
#include "keyword-list.h"

template <class KT>
  class Input
  {
  public:
                          Input (FILE *stream, Keyword_Factory<KT> *keyword_factory);
                          ~Input ();
    void                  read_input ();
  private:
    /* Input stream.  */
    FILE *                _stream;
    /* Creates the keywords.  */
    Keyword_Factory<KT> * const _factory;
  public:
    /* Memory block containing the entire input.  */
    char *                _input;
    char *                _input_end;
    /* The C code from the declarations section.  */
    const char *          _verbatim_declarations;
    const char *          _verbatim_declarations_end;
    unsigned int          _verbatim_declarations_lineno;
    /* The C code from the end of the file.  */
    const char *          _verbatim_code;
    const char *          _verbatim_code_end;
    unsigned int          _verbatim_code_lineno;
    /* Declaration of struct type for a keyword and its attributes.  */
    const char *          _struct_decl;
    unsigned int          _struct_decl_lineno;
    /* Return type of the lookup function.  */
    const char *          _return_type;
    /* Shorthand for user-defined struct tag type.  */
    const char *          _struct_tag;
    /* List of all keywords.  */
    Keyword_List<KT> *    _head;
    /* Whether the keyword chars would have different values in a different
       character set.  */
    bool                  _charset_dependent;
  };

#endif
