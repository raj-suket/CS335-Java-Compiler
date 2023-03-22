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

#ifndef YY_YY_TEST_TAB_H_INCLUDED
# define YY_YY_TEST_TAB_H_INCLUDED
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
    BOOL_LITERAL = 297,
    NULL_LITERAL = 298,
    INT_LITERAL = 299,
    FLOAT_LITERAL = 300,
    STRING_LITERAL = 301,
    TEXTBLOCK_LITERAL = 302,
    CHAR_LITERAL = 303,
    LRB = 304,
    LSB = 305,
    LT = 306,
    MINUS = 307,
    MINUSET = 308,
    MODULE = 309,
    MODULO = 310,
    MULT = 311,
    MULTET = 312,
    NATIVE = 313,
    NEQ = 314,
    NEW = 315,
    NOT = 316,
    OPENS = 317,
    OR = 318,
    PACKAGE = 319,
    PLUS = 320,
    PLUSET = 321,
    POW = 322,
    PRIVATE = 323,
    PROTECTED = 324,
    PROVIDES = 325,
    PUBLIC = 326,
    QUEST = 327,
    RCB = 328,
    REQUIRES = 329,
    RETURN = 330,
    RIGHTSHIFT = 331,
    RRB = 332,
    RSB = 333,
    SEMICOLON = 334,
    STATIC = 335,
    SUPER = 336,
    SWITCH = 337,
    SYNCHRONIZED = 338,
    THIS = 339,
    THREEGREAT = 340,
    THROW = 341,
    THROWS = 342,
    TILDE = 343,
    TO = 344,
    TRANSIENT = 345,
    TRANSITIVE = 346,
    TRY = 347,
    USES = 348,
    VAR = 349,
    VOID = 350,
    VOLATILE = 351,
    WHILE = 352,
    WITH = 353
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 61 "test.y"

    struct Node* str_val;
    std::string* lex;

#line 161 "test.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TEST_TAB_H_INCLUDED  */
