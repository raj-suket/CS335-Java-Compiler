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

#ifndef YY_YY_TRY1_TAB_H_INCLUDED
# define YY_YY_TRY1_TAB_H_INCLUDED
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
    AT = 262,
    BITAND = 263,
    BITOR = 264,
    BOOLEAN = 265,
    BREAK = 266,
    CASE = 267,
    CATCH = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DECREMENT = 273,
    DEFAULT = 274,
    DIVET = 275,
    DIVIDE = 276,
    DO = 277,
    DOT = 278,
    ELSE = 279,
    EQ = 280,
    EQUALTO = 281,
    EXPORTS = 282,
    EXTENDS = 283,
    FINAL = 284,
    FINALLY = 285,
    FLOATINGPOINTTYPE = 286,
    FOR = 287,
    GEQ = 288,
    GT = 289,
    IDENTIFIER = 290,
    IF = 291,
    INCREMENT = 292,
    INSTANCEOF = 293,
    INTEGRALTYPE = 294,
    LCB = 295,
    LEFTSHIFT = 296,
    LEQ = 297,
    LITERAL = 298,
    LRB = 299,
    LSB = 300,
    LT = 301,
    MINUS = 302,
    MINUSET = 303,
    MODULE = 304,
    MODULO = 305,
    MULT = 306,
    MULTET = 307,
    NATIVE = 308,
    NEQ = 309,
    NEW = 310,
    NOT = 311,
    OPENS = 312,
    OR = 313,
    PACKAGE = 314,
    PLUS = 315,
    PLUSET = 316,
    POW = 317,
    PRIVATE = 318,
    PROTECTED = 319,
    PROVIDES = 320,
    PUBLIC = 321,
    QUEST = 322,
    RCB = 323,
    REQUIRES = 324,
    RETURN = 325,
    RIGHTSHIFT = 326,
    RRB = 327,
    RSB = 328,
    SEMICOLON = 329,
    STATIC = 330,
    SUPER = 331,
    SWITCH = 332,
    SYNCHRONIZED = 333,
    THIS = 334,
    THREEGREAT = 335,
    THROW = 336,
    THROWS = 337,
    TILDE = 338,
    TO = 339,
    TRANSIENT = 340,
    TRANSITIVE = 341,
    TRIPLEDOT = 342,
    TRY = 343,
    TWOCOLON = 344,
    USES = 345,
    VAR = 346,
    VOID = 347,
    VOLATILE = 348,
    WHILE = 349,
    WITH = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "try1.y"

    struct Node* str_val;

#line 157 "try1.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TRY1_TAB_H_INCLUDED  */
