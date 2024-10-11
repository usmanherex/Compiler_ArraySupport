/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SSC_TAB_H_INCLUDED
# define YY_YY_SSC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tok_printd = 258,              /* tok_printd  */
    tok_double = 259,              /* tok_double  */
    tok_prints = 260,              /* tok_prints  */
    tok_iterator = 261,            /* tok_iterator  */
    tok_hasNext = 262,             /* tok_hasNext  */
    tok_next = 263,                /* tok_next  */
    tok_slice = 264,               /* tok_slice  */
    tok_while = 265,               /* tok_while  */
    tok_new = 266,                 /* tok_new  */
    tok_add = 267,                 /* tok_add  */
    tok_resize = 268,              /* tok_resize  */
    tok_dynamic_array = 269,       /* tok_dynamic_array  */
    tok_sum = 270,                 /* tok_sum  */
    tok_min = 271,                 /* tok_min  */
    tok_max = 272,                 /* tok_max  */
    tok_avg = 273,                 /* tok_avg  */
    tok_serialize = 274,           /* tok_serialize  */
    tok_deserialize = 275,         /* tok_deserialize  */
    tok_view = 276,                /* tok_view  */
    tok_identifier = 277,          /* tok_identifier  */
    tok_double_literal = 278,      /* tok_double_literal  */
    tok_string_literal = 279,      /* tok_string_literal  */
    tok_integer_literal = 280      /* tok_integer_literal  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "ssc.y"

    char *identifier;
    double double_literal;
    int integer_literal;
    char *string_literal;
    struct DestructuringList *destructuring_list;

#line 97 "ssc.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SSC_TAB_H_INCLUDED  */
