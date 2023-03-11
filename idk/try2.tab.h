/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_TRY2_TAB_H_INCLUDED
# define YY_YY_TRY2_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACT = 258,
    AND = 259,
    ANDET = 260,
    ASSERT = 261,
    BITAND = 262,
    BITOR = 263,
    BOOLEAN = 264,
    BREAK = 265,
    CASE = 266,
    CATCH = 267,
    CLASS = 268,
    COLON = 269,
    COMMA = 270,
    CONTINUE = 271,
    DECREMENT = 272,
    DEFAULT = 273,
    DIVET = 274,
    DIVIDE = 275,
    DO = 276,
    DOT = 277,
    ELSE = 278,
    EQ = 279,
    EQUALTO = 280,
    EXPORTS = 281,
    EXTENDS = 282,
    FINAL = 283,
    FINALLY = 284,
    FLOATINGPOINTTYPE = 285,
    FOR = 286,
    GEQ = 287,
    GT = 288,
    IDENTIFIER = 289,
    IF = 290,
    INCREMENT = 291,
    INSTANCEOF = 292,
    INTEGRALTYPE = 293,
    LCB = 294,
    LEFTSHIFT = 295,
    LEQ = 296,
    LITERAL = 297,
    LRB = 298,
    LSB = 299,
    LT = 300,
    MINUS = 301,
    MINUSET = 302,
    MODULE = 303,
    MODULO = 304,
    MULT = 305,
    MULTET = 306,
    NATIVE = 307,
    NEQ = 308,
    NEW = 309,
    NOT = 310,
    OPENS = 311,
    OR = 312,
    PACKAGE = 313,
    PLUS = 314,
    PLUSET = 315,
    POW = 316,
    PRIVATE = 317,
    PROTECTED = 318,
    PROVIDES = 319,
    PUBLIC = 320,
    QUEST = 321,
    RCB = 322,
    REQUIRES = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RRB = 326,
    RSB = 327,
    SEMICOLON = 328,
    STATIC = 329,
    SUPER = 330,
    SWITCH = 331,
    SYNCHRONIZED = 332,
    THIS = 333,
    THREEGREAT = 334,
    THROW = 335,
    THROWS = 336,
    TILDE = 337,
    TO = 338,
    TRANSIENT = 339,
    TRANSITIVE = 340,
    TRY = 341,
    USES = 342,
    VAR = 343,
    VOID = 344,
    VOLATILE = 345,
    WHILE = 346,
    WITH = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "try2.y"

    struct Node* str_val;

#line 154 "try2.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TRY2_TAB_H_INCLUDED  */
