/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include<bits/stdc++.h>
#include "symbol_table.h"
using namespace std;
extern int yylineno;
int yyerror(const char* s)
{
	cerr<<"Error\n"<<'\n';
    exit(0);
}
int yylex(void);

struct Node{
    string val;
    vector<Node*> children;
};

Node* createnode (string  val, vector<Node*>  children){
    Node * temp = new Node;
    temp->val = val;
    for(int i=0;i<children.size();i++){
        temp->children.push_back(children[i]);
    }
    return temp;
}

Node* root;

vector<Node *> emp;
vector<Node *> vec;

map<string, tab_item> sym_table;
map<vector<int> , int> counts;

int to_declare = 0;
int type_id = 0;

vector<int> current_scope = {0};

void hide_scope(){
    current_scope.pop_back();
}

void incr_scope(){
    current_scope.push_back(counts[current_scope]++);
}

#line 118 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
#line 50 "parser.y"

    struct Node* str_val;
    std::string* lex;

#line 268 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3653

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  156
/* YYNRULES -- Number of rules.  */
#define YYNRULES  373
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  690

#define YYUNDEFTOK  2
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   293,   293,   304,   308,   312,   316,   320,   321,   325,
     326,   330,   331,   335,   336,   337,   341,   342,   346,   350,
     354,   355,   359,   360,   364,   365,   369,   370,   371,   372,
     373,   374,   375,   376,   380,   381,   385,   386,   390,   391,
     395,   396,   397,   401,   402,   406,   410,   414,   415,   420,
     420,   421,   421,   422,   422,   423,   423,   427,   428,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   445,
     449,   450,   454,   455,   459,   460,   461,   462,   466,   467,
     468,   472,   473,   477,   478,   482,   483,   487,   488,   492,
     493,   497,   497,   501,   502,   503,   504,   505,   506,   507,
     508,   512,   512,   512,   513,   514,   518,   519,   523,   524,
     528,   532,   533,   537,   538,   542,   542,   546,   546,   550,
     550,   551,   551,   552,   552,   553,   553,   557,   557,   557,
     558,   562,   563,   564,   565,   569,   570,   571,   572,   573,
     574,   575,   576,   580,   581,   582,   583,   587,   588,   592,
     593,   597,   598,   602,   603,   607,   611,   612,   613,   614,
     618,   619,   620,   621,   622,   623,   627,   628,   629,   630,
     631,   635,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   650,   651,   655,   659,   663,   667,
     671,   672,   673,   674,   675,   676,   677,   681,   685,   689,
     693,   697,   698,   699,   700,   704,   705,   709,   710,   714,
     718,   719,   723,   724,   728,   732,   736,   740,   741,   745,
     746,   750,   751,   752,   753,   754,   755,   756,   757,   761,
     762,   763,   764,   765,   766,   767,   768,   772,   773,   777,
     781,   782,   786,   790,   794,   795,   799,   800,   804,   805,
     809,   813,   817,   818,   819,   823,   824,   828,   829,   833,
     834,   838,   839,   843,   847,   848,   852,   853,   854,   855,
     856,   857,   858,   859,   863,   864,   865,   869,   870,   871,
     872,   876,   877,   881,   882,   886,   887,   888,   889,   890,
     891,   892,   893,   897,   898,   902,   903,   904,   905,   906,
     907,   911,   912,   916,   920,   921,   925,   929,   930,   934,
     938,   939,   940,   944,   945,   946,   947,   948,   949,   953,
     954,   958,   962,   963,   967,   968,   972,   973,   977,   978,
     982,   983,   987,   988,   989,   993,   994,   995,   996,   997,
     998,  1002,  1006,  1007,  1008,  1009,  1013,  1014,  1015,  1019,
    1020,  1021,  1022,  1026,  1027,  1028,  1029,  1030,  1034,  1038,
    1042,  1043,  1044,  1045,  1046,  1050,  1051,  1052,  1053,  1057,
    1061,  1065,  1066,  1070
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "AND", "ANDET", "ASSERT",
  "BITAND", "BITOR", "BOOLEAN", "BREAK", "CASE", "CATCH", "CLASS", "COLON",
  "COMMA", "CONTINUE", "DECREMENT", "DEFAULT", "DIVET", "DIVIDE", "DO",
  "DOT", "ELSE", "EQ", "EQUALTO", "EXPORTS", "EXTENDS", "FINAL", "FINALLY",
  "FLOATINGPOINTTYPE", "FOR", "GEQ", "GT", "IDENTIFIER", "IF", "INCREMENT",
  "INSTANCEOF", "INTEGRALTYPE", "LCB", "LEFTSHIFT", "LEQ", "LITERAL",
  "LRB", "LSB", "LT", "MINUS", "MINUSET", "MODULE", "MODULO", "MULT",
  "MULTET", "NATIVE", "NEQ", "NEW", "NOT", "OPENS", "OR", "PACKAGE",
  "PLUS", "PLUSET", "POW", "PRIVATE", "PROTECTED", "PROVIDES", "PUBLIC",
  "QUEST", "RCB", "REQUIRES", "RETURN", "RIGHTSHIFT", "RRB", "RSB",
  "SEMICOLON", "STATIC", "SUPER", "SWITCH", "SYNCHRONIZED", "THIS",
  "THREEGREAT", "THROW", "THROWS", "TILDE", "TO", "TRANSIENT",
  "TRANSITIVE", "TRY", "USES", "VAR", "VOID", "VOLATILE", "WHILE", "WITH",
  "$accept", "DIdentifier", "Identifier", "Literal", "IntegralType",
  "FloatingPointType", "Name", "Names", "CompilationUnit",
  "OrdinaryCompilationUnit", "TopLevelClassOrInterfaceDeclarations",
  "ModularCompilationUnit", "PackageDeclaration",
  "TopLevelClassOrInterfaceDeclaration", "ModuleDeclaration",
  "ModuleDirectives", "ModuleDirective", "RequiresModifiers",
  "RequiresModifier", "Type", "PrimitiveType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "ArrayType", "ClassDeclaration",
  "$@1", "$@2", "$@3", "$@4", "Modifiers", "Modifier", "ClassExtends",
  "ClassBody", "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "$@5", "MethodHeader", "MethodDeclarator", "$@6",
  "$@7", "FormalParameterList", "FormalParameter", "Throws",
  "ClassTypeList", "MethodBody", "InstanceInitializer", "$@8",
  "StaticInitializer", "$@9", "ConstructorDeclaration", "$@10", "$@11",
  "$@12", "$@13", "ConstructorDeclarator", "$@14", "$@15",
  "ConstructorBody", "ExplicitConstructorInvocation", "ArrayInitializer",
  "VariableInitializerList", "Block", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "$@16", "AssertStatement",
  "EmptyStatement", "LabeledStatement", "LabeledStatementNoShortIf",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "SwitchStatement",
  "SwitchBlock", "SwitchBlockStatementGroups", "SwitchLabels",
  "SwitchBlockStatementGroup", "SwitchLabel", "CaseConstants",
  "WhileStatement", "WhileStatementNoShortIf", "DoStatement",
  "ForStatement", "ForStatementNoShortIf", "BasicForStatement",
  "BasicForStatementNoShortIf", "ForInit", "ForUpdate",
  "StatementExpressionList", "EnhancedForStatement",
  "EnhancedForStatementNoShortIf", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "ThrowStatement", "SynchronizedStatement",
  "TryStatement", "Catches", "CatchClause", "CatchType", "CatchTypes",
  "Finally", "Primary", "PrimaryNoNewArray",
  "ClassInstanceCreationExpression",
  "UnqualifiedClassInstanceCreationExpression", "FieldAccess",
  "ArrayAccess", "MethodInvocation", "ArgumentList",
  "ArrayCreationExpression", "DimExprs", "DimExpr", "Dims", "Expression",
  "AssignmentExpression", "Assignment", "LeftHandSide",
  "AssignmentOperator", "ConditionalExpression", "TernaryAction",
  "ConditionalOrExpression", "ConditionalAndExpression",
  "InclusiveOrExpression", "ExclusiveOrExpression", "AndExpression",
  "EqualityExpression", "RelationalExpression", "InstanceofExpression",
  "ShiftExpression", "AdditiveExpression", "MultiplicativeExpression",
  "UnaryExpression", "PreIncrementExpression", "PreDecrementExpression",
  "UnaryExpressionNotPlusMinus", "PostfixExpression",
  "PostIncrementExpression", "PostDecrementExpression", "CastExpression",
  "SwitchExpression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

#define YYPACT_NINF (-546)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-369)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1042,  -546,   156,  -546,   159,  -546,   159,  -546,  -546,  -546,
    -546,  -546,  -546,  -546,  -546,   263,  -546,  1394,  -546,  1394,
    -546,  -546,  -546,  1427,  -546,  -546,   181,  -546,  -546,   275,
     138,  -546,  -546,  1394,   156,  -546,   159,   248,  -546,   159,
     150,  -546,   181,   302,  -546,  -546,   693,  -546,   248,  -546,
     159,   159,   159,  -546,   192,   159,   243,  -546,   248,  -546,
    -546,  -546,   284,  -546,  -546,  -546,   290,   156,   288,  -546,
    -546,   172,   156,   291,  -546,  -546,  -546,  1210,   809,  -546,
    -546,  -546,  -546,  -546,  -546,   321,  -546,  -546,   352,  -546,
       0,    16,    -4,  -546,  -546,   157,   192,  -546,   169,  -546,
    -546,  -546,   248,   321,   350,   148,   324,   331,   363,   350,
      41,  -546,   257,   148,   363,   156,   156,   370,  -546,  -546,
     131,  2469,  -546,   334,   373,  -546,   159,  -546,   159,   159,
    -546,   174,  -546,  -546,  -546,  -546,   347,   355,   159,  -546,
    -546,  1300,  -546,   356,   156,  -546,  1247,   365,  -546,   148,
      42,   148,   334,   373,  -546,  -546,  -546,  3571,    -7,    -5,
    3571,  3062,   376,   379,  3571,  -546,  3571,   424,  -546,  1532,
    -546,   402,   387,   395,  -546,  3571,   321,   156,   408,   431,
    -546,   300,   156,   907,  2555,  -546,  -546,   382,  -546,  -546,
     321,  -546,  -546,  -546,  -546,   400,  -546,  -546,  -546,  -546,
    -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,
     430,   416,    39,  -546,   389,   406,    40,  -546,  -546,   552,
    -546,  -546,   277,   309,   311,   373,  2641,  -546,   302,    43,
      57,    63,  -546,  -546,  1300,  -546,  -546,   462,   156,  1300,
     464,  -546,  -546,  -546,  -546,  3186,   424,  3571,  3571,  3571,
     437,  3571,   500,  -546,  -546,  -546,  -546,  -546,  -546,  -546,
    -546,   333,   478,   477,   427,   491,   208,   439,  -546,   194,
     142,   149,  -546,  -546,  -546,  -546,   277,  -546,  -546,  -546,
    -546,  -546,  -546,  -546,  -546,   373,  -546,    17,  -546,   434,
    -546,   435,   228,  -546,  -546,  -546,   395,   419,  1663,  3571,
    -546,   441,   469,    -8,  -546,   453,   159,  3571,  3571,   454,
     313,   513,  3571,  3062,   179,  1747,  2090,   513,   156,   156,
    -546,  -546,  -546,  -546,  -546,   224,  3571,  -546,  -546,  -546,
    -546,  -546,  -546,  3571,  -546,  -546,  -546,  -546,   237,   499,
     708,  2727,  2813,   523,   159,  -546,  -546,  -546,   464,   159,
     508,   156,  1300,   484,   494,  -546,  -546,    50,   -10,   486,
    -546,  -546,  -546,  3571,  -546,  3571,  3571,  3571,  3571,  3571,
    3571,  3571,  3571,  3571,  3571,  3571,   424,  3571,  3571,  3571,
    3571,  3571,  3571,  3571,  3571,  3571,  3571,  -546,  3571,  -546,
    -546,  -546,   524,  3200,   558,  -546,   503,   563,   510,  -546,
    2090,   469,  -546,   212,  3243,   469,   212,  -546,   539,   514,
     517,  -546,   546,   321,   313,  -546,  -546,   519,  -546,   159,
     569,  -546,  -546,  -546,    61,  -546,   521,   513,   513,   549,
    -546,   525,  -546,  3257,  3300,   231,  -546,  2899,  -546,   201,
     302,   529,  -546,   508,  -546,  -546,  -546,  1479,  -546,  3571,
     520,   532,   478,   594,  -546,   477,   427,   491,   208,   439,
     439,   194,   194,   291,  -546,   194,   194,   142,   142,   142,
     149,   149,  -546,  -546,  -546,   538,  3571,   262,   540,  3571,
    3314,    27,  3135,   542,  -546,   363,  -546,   248,    91,   363,
    -546,  3357,   576,   321,   358,  -546,  -546,  -546,  3062,   573,
     159,  3571,  -546,  -546,  3371,  -546,   544,    92,   547,   112,
     238,  -546,   578,  -546,  -546,  -546,  -546,  -546,   576,  3571,
    -546,   553,  3062,   556,   563,   461,   557,   475,   550,  -546,
     588,   595,   597,   623,  -546,   618,   621,  -546,  -546,  -546,
    -546,  -546,  -546,  -546,  -546,   248,  -546,   113,   154,  -546,
    -546,   342,   358,   156,  -546,   604,  -546,  -546,   126,  -546,
     575,  -546,   579,  3414,  3428,  -546,  -546,   581,  -546,  3062,
    3062,   591,  3062,  3062,   592,   639,  2182,  3571,  3571,  3135,
    3062,  -546,  -546,  3571,   645,  -546,   171,  2297,  -546,  -546,
     159,   657,   156,   124,  3471,  -546,  -546,  -546,   596,   129,
     599,   132,  -546,  -546,  -546,  3062,  -546,  -546,  3062,  3062,
     603,  3485,   654,   605,   608,   609,  -546,  -546,   269,  -546,
    -546,  -546,  2383,  -546,  -546,  2985,  -546,  -546,   159,   141,
     321,  -546,   134,  -546,   610,  -546,   611,  -546,  -546,  -546,
    3062,   771,   612,  3571,  3528,  3135,  3135,  -546,  3571,  -546,
    -546,   321,  -546,  -546,  -546,  -546,  -546,  3135,   615,   931,
     616,  1104,   617,   665,  -546,  -546,  -546,  -546,  3135,  3135,
     620,  3135,  3135,   628,  1150,  3135,  -546,  -546,  3135,  -546,
    -546,  3135,  3135,   634,  -546,  -546,  -546,  -546,  3135,  -546
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    63,     0,    64,     0,    65,     0,    61,    60,    59,
      21,    62,    66,    67,    68,     0,    11,    14,    12,    15,
      16,    18,    20,     0,    57,     2,    55,     3,     7,     0,
       0,     1,    17,    13,     0,    58,     0,     0,    51,     0,
       0,    19,    53,    45,    46,    69,   115,    56,     0,     8,
       0,     0,     0,    23,     0,     0,     0,    24,     0,    49,
      42,     6,     3,     5,    70,    80,    62,     0,     0,    40,
      41,    45,     0,    38,    39,    43,    44,     0,   115,    72,
      74,    78,    79,    91,    77,     0,    75,    76,   121,    52,
       0,     0,     0,    37,    36,     0,     0,    34,     0,    22,
      25,    54,     0,     0,     0,   100,   127,     0,    48,    87,
       0,    83,    85,    96,    47,     0,     0,   119,    71,    73,
       0,   171,   116,     0,     0,    29,     0,    30,     0,     0,
      27,     0,    35,    32,    50,   118,   101,     0,     0,    98,
     130,     0,   304,     0,     0,    82,     0,     0,    94,    99,
       0,    95,     0,     0,   114,    92,   113,     0,     0,     0,
       0,   171,     0,     0,     0,     4,     0,     0,   150,     0,
     186,     0,     0,    66,   267,     0,     0,     0,     0,     7,
     266,   310,     0,     0,   171,   152,   153,     0,   154,   160,
       0,   175,   173,   161,   174,     0,   162,   163,   176,   164,
     177,   165,   217,   218,   178,   179,   180,   182,   181,   183,
     365,   264,   270,   274,   271,   272,   273,   265,   190,     0,
     191,   192,     0,   193,   194,     0,   171,   126,     9,     0,
       0,     0,    26,   104,     0,   105,   111,   110,     0,     0,
     128,   106,   305,    87,    84,     0,     0,     0,     0,     0,
       0,     0,   366,    86,    90,   270,   273,    89,   306,   308,
     307,   319,   322,   324,   326,   328,   330,   332,   340,   335,
     342,   346,   349,   353,   354,   357,   360,   367,   368,   363,
     364,    88,    97,    81,    93,     0,   124,     0,   245,     0,
     247,     0,   366,   271,   272,   359,     0,     0,     0,     0,
     358,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   157,     0,   171,     0,     0,     0,   156,     0,     0,
     149,   151,   155,   172,   189,     0,     0,   318,   317,   313,
     315,   316,   314,     0,   370,   369,   122,   134,     0,   267,
     310,   171,   171,   365,     0,    28,    31,    33,   102,     0,
     108,     0,     0,     0,     0,   143,   147,     0,     0,     0,
     356,   362,   355,     0,   361,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,   184,
     244,   246,     0,     0,   238,   241,     0,   237,     0,   269,
       0,   295,   302,     0,     0,   297,     0,   249,   282,     0,
       0,   250,     0,     0,   252,   256,   253,     0,   187,     0,
       0,   268,   275,   285,     0,   293,     0,   159,   158,   281,
     276,     0,   309,     0,     0,     0,   133,   171,   132,     0,
      10,     0,   112,   109,   107,   129,   145,     0,   144,     0,
       0,     0,   323,     0,   320,   325,   327,   329,   331,   333,
     334,   339,   337,     0,   341,   338,   336,   343,   344,   345,
     348,   347,   351,   352,   350,     0,     0,     0,     0,     0,
       0,     0,   171,     0,   301,   296,   299,   280,     0,   298,
     300,     0,     0,     0,     0,   263,   255,   254,   171,     0,
       0,     0,   286,   283,     0,   284,     0,     0,     0,     0,
       0,   131,     0,   103,   146,   148,   371,   372,     0,     0,
     185,     0,   171,     0,   239,     0,     0,     0,     0,   240,
       0,     0,     0,     7,   197,     0,   160,   167,   168,   169,
     170,   219,   220,   303,   278,   277,   289,     0,     0,   200,
     251,   259,     0,     0,   214,     0,   294,   287,     0,   138,
       0,   136,     0,     0,     0,   373,   321,     0,   228,   171,
     171,     0,   171,   171,     0,     0,     0,     0,     0,   171,
     171,   279,   290,     0,     0,   204,     0,   171,   205,   207,
       0,   260,     0,     0,     0,   288,   137,   135,     0,     0,
       0,     0,   216,   224,   226,   171,   242,   227,   171,   171,
       0,     0,   238,     0,     0,     0,   188,   198,     0,   212,
     211,   203,   171,   206,   202,   209,   208,   261,     0,     0,
       0,   291,     0,   139,     0,   141,     0,   222,   223,   225,
     171,     0,     0,     0,     0,   171,   171,   210,     0,   201,
     262,     0,   257,   292,   140,   142,   221,   171,     0,     0,
       0,     0,     0,     0,   215,   213,   258,   236,   171,   171,
       0,   171,   171,     0,     0,   171,   232,   234,   171,   243,
     235,   171,   171,     0,   199,   230,   231,   233,   171,   229
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -546,    62,   -39,  -546,  -546,  -546,    -3,   229,  -546,  -546,
     670,  -546,  -546,   315,  -546,  -546,   636,  -546,   613,   -32,
    -151,  -233,   -34,  -134,  -546,  -546,  -546,  -546,  -546,  -546,
       7,   -17,   664,   -43,  -546,   633,  -546,  -546,   -91,   568,
    -230,  -228,  -546,  -546,  -546,    59,  -546,  -546,   479,   366,
     316,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,  -546,
    -546,  -546,   642,  -546,  -546,  -133,  -546,  -303,  -546,   -92,
    -102,  -175,  -546,  -288,  1506,   -11,  -182,  -546,  -546,  -546,
    -546,  -546,  -546,  -257,  -546,  -546,  -546,  -546,   202,  -546,
     136,   140,  -545,  -546,  -546,  -546,  -546,  -546,  -546,  -546,
    -546,   152,  -488,  -286,  -546,  -546,  -546,  -546,  -546,  -546,
    -546,  -546,  -546,   310,   177,  -546,   318,   509,  -546,   128,
    -293,  1522,  1908,   353,  -354,  -546,   438,  -304,   -50,   755,
    -546,  1619,  -546,  -546,  -489,  -546,  -546,   368,   372,   369,
     377,   375,   -20,  -546,   146,     8,    23,   -93,   555,   770,
     293,   972,  1187,  1389,  -546,  -546
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   243,    28,   180,    69,    70,   252,   229,    15,    16,
      17,    18,    19,    20,    21,    56,    57,    96,    97,   182,
      73,    74,    75,    45,    76,    22,   102,    48,    58,    37,
     183,    24,    38,    47,    78,    79,    80,    81,   110,   111,
     112,   253,    82,   120,    83,   105,   234,   441,   240,   241,
     139,   237,   155,    84,    85,    86,   103,    87,   152,   123,
     153,   124,    88,   141,   353,   227,   341,   254,   357,   122,
     625,   185,   186,   187,   188,   535,   189,   190,   191,   192,
     193,   537,   194,   195,   196,   197,   538,   198,   549,   586,
     587,   588,   589,   618,   199,   539,   200,   201,   540,   202,
     541,   396,   523,   524,   203,   542,   204,   205,   206,   207,
     208,   209,   414,   415,   553,   591,   416,   210,   211,   255,
     213,   214,   215,   256,   424,   217,   401,   402,   108,   425,
     258,   218,   219,   333,   260,   454,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    29,    44,    30,   236,    89,    35,    23,   350,   321,
     394,   135,   397,   359,    72,   101,   302,   356,    39,   184,
     286,   422,    39,   114,    23,   150,    23,    27,   156,    27,
     566,   388,   430,    43,   107,   404,   400,   571,    39,   574,
      23,   395,   626,    71,   160,   116,    72,    90,    91,    92,
     488,    95,    98,    77,  -196,  -195,   144,   144,   344,   134,
      35,    27,   449,   164,    26,   447,   288,   295,   290,   165,
     166,   300,   344,   125,    71,    71,   501,   626,   344,   507,
     509,   167,   179,   126,   310,    77,   311,   610,   129,   127,
     389,   317,   336,   131,   619,   358,    42,   484,   323,   128,
     486,   484,   171,   490,    44,   174,   501,   501,    68,   238,
    -196,  -195,  -196,  -195,   145,   283,   345,   448,   181,   289,
     291,   443,   179,   228,   342,   228,   228,   501,   501,   104,
     346,   113,   502,   303,   109,    43,   347,   547,    71,    68,
      68,   501,   422,   464,   501,   179,   430,   501,   239,   501,
     558,   319,   387,   658,   360,   361,   362,   292,   364,   665,
      39,   292,   545,   560,    43,   583,    35,   321,   147,   384,
     121,   670,   584,   673,   149,   151,    50,   104,   109,    39,
      71,   181,   583,   562,   582,   147,   683,   179,   382,   584,
      25,    39,   137,    27,    39,   630,    39,   595,   385,   386,
     634,   383,   238,   636,   154,   653,    51,   351,    36,   599,
     601,    41,   651,    27,    52,   442,   107,    53,    54,   515,
     395,   585,    35,   340,   529,   463,    27,   427,   428,   138,
     130,    71,   372,   419,   379,    27,    71,    55,   621,   437,
     632,   239,   133,    71,   292,   292,   292,   232,   292,   212,
     314,   245,   403,   406,   420,   419,   143,   421,    27,   306,
     500,   373,   321,    31,   380,    27,    93,   408,   395,    50,
     395,   315,   365,   381,   179,    49,   512,    94,   419,   160,
     433,   563,   146,   647,   648,   419,   429,    46,   612,   212,
     397,   472,   473,   474,   334,   181,    27,    39,   164,    51,
     536,   147,   179,   179,   165,   166,   510,    52,   114,   421,
      99,    54,   212,   335,    40,    44,   167,  -366,   395,   395,
     238,   495,   314,   593,    39,   412,  -367,    -2,  -368,  -117,
      55,   106,    32,   522,   -45,   107,  -366,   171,   181,   181,
     174,   440,   413,   315,   316,  -367,    43,  -368,    32,    71,
     590,   485,   459,   460,   212,   489,   516,   230,   231,   239,
     121,     1,   629,   292,    39,   292,   292,   292,   292,   292,
     292,   292,   292,    71,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   395,   499,     3,   467,   468,   469,
     366,  -125,    27,   136,  -311,   140,    49,   536,   179,   367,
     429,   550,   395,   142,   395,   470,   471,   143,  -311,  -123,
       5,  -312,   226,   114,  -311,   138,    43,   395,   233,   298,
       7,     8,   299,     9,   306,  -312,   212,   235,   242,   148,
     307,  -312,    11,    60,   181,    12,  -311,   281,   308,   225,
    -311,   212,    13,   533,   544,   313,   292,   292,    14,  -311,
     321,   312,   325,  -312,    61,   322,   627,  -312,    27,   179,
     326,   555,    63,   536,   536,   282,  -312,   284,   285,   212,
     212,   374,   375,   324,   216,   536,   376,   349,   160,   352,
     377,   363,   368,   179,   378,   369,   536,   536,   370,   536,
     536,   551,   160,   536,   650,    27,   536,   164,   371,   536,
     536,   552,   581,   165,   166,  -310,   536,   390,   391,    27,
     392,   164,   399,   400,   216,   167,   292,   165,   166,  -310,
     461,   462,   314,   465,   466,  -310,   407,   411,   144,   167,
     179,   179,   570,   179,   179,    35,   171,   216,   652,   174,
     533,   179,   434,   315,   365,   439,   573,  -310,   179,   551,
     171,  -310,   147,   174,    27,   445,    44,   327,   450,   666,
    -310,   446,   165,   166,   246,   212,   179,   476,   616,   179,
     179,   328,   479,   181,   167,   248,   480,   329,   481,   216,
     292,   482,   491,   179,   181,   492,   179,    43,   493,   494,
     498,   500,   504,   503,    44,   171,   250,   505,   174,   330,
     513,   179,   251,   331,   518,   212,   533,   533,   519,   212,
     212,   520,   332,   525,   543,   548,   404,   559,   533,   181,
     561,   564,   181,   575,   567,    43,   212,   569,   572,   533,
     533,   576,   533,   533,   663,   664,   533,   579,   577,   533,
     578,   580,   533,   533,  -166,   292,   667,   594,   596,   533,
     212,   216,   597,   212,   602,   212,   160,   676,   677,   620,
     679,   680,   605,   608,   684,   628,   216,   685,   643,   633,
     686,   687,   635,    27,   640,   164,   220,   689,   644,   645,
     646,   165,   166,   654,   655,   659,   668,   671,   675,    33,
     674,   678,   100,   167,   216,   216,     1,   212,   212,   681,
     212,   212,    60,   212,   212,   688,    59,   212,   212,   132,
     609,   119,   244,   348,   171,   212,   220,   174,   444,   117,
     565,     3,   622,    61,   496,  -366,   623,    62,   613,   592,
     435,    63,   497,   212,   452,   343,   212,   212,   456,   220,
     455,   405,   -45,   517,  -366,     5,   458,   457,     0,     0,
     212,   315,   316,   212,     0,     7,     8,     0,     9,     0,
      64,     0,     0,     0,     0,     0,    65,    66,   212,   212,
      12,     0,     0,   212,   212,     0,     0,    13,     0,     0,
       0,   220,    67,    14,     0,   212,     0,   212,   160,   212,
     216,     0,     0,     0,     0,     0,   212,   212,     0,   212,
     212,     0,   212,   212,     0,    27,   212,   164,     0,   212,
     212,     0,     1,   165,   166,     0,   212,     0,    60,     0,
       0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
     216,     0,     0,     0,   216,   216,     0,     3,     0,    61,
       0,     0,   657,    62,     0,     0,   171,    63,     0,   174,
       0,   216,     0,   220,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     7,     8,     0,     9,   216,   118,     0,   216,     0,
     216,     0,    65,    66,     0,     0,    12,     0,     0,     0,
       0,   221,     0,    13,     0,     0,   220,   220,    67,    14,
       0,   257,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,   287,     0,     0,     0,    60,     0,     0,     0,
       0,   301,   216,   216,   305,   216,   216,     0,   216,   216,
     309,   221,   216,   216,     0,     3,     0,    61,     0,     0,
     216,    27,     0,     0,     0,    63,     0,     0,   160,     0,
       0,     0,     0,     0,   221,     0,     0,     0,   216,     5,
       0,   216,   216,     0,     0,    27,     0,   164,     0,     7,
       8,     0,     9,   165,   166,   216,     0,     0,   216,     0,
       0,    11,     0,     0,    12,   167,     0,     0,     0,     0,
       0,    13,   220,   216,   216,   318,   221,    14,   216,   216,
     257,     0,   669,     0,     0,     0,   171,     0,     0,   174,
     216,     0,   216,     0,   216,     0,     0,     0,     0,     0,
       0,   216,   216,     0,   216,   216,     0,   216,   216,     0,
       0,   216,   220,     0,   216,   216,   220,   220,     0,     0,
       0,   216,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,   220,   398,     2,     0,     0,     0,     0,
       0,     0,   409,   410,     0,     0,     0,   417,   221,     0,
       3,   426,     0,     0,     0,     0,     0,   220,     0,     0,
     220,   431,   220,   221,     0,     0,     0,     0,   432,     0,
       4,     0,     0,   222,     5,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     7,     8,     0,     9,     0,     0,
       0,   221,   221,     0,     0,    10,    11,     0,   451,    12,
     426,   160,   453,     0,   220,   220,    13,   220,   220,     0,
     220,   220,    14,   222,   220,   220,     0,     0,    27,     0,
     164,     0,   220,   475,     0,     0,   165,   166,   478,     0,
       0,     0,     0,     0,     0,   483,   222,     0,   167,     0,
     220,     0,     0,   220,   220,     0,     0,   160,     0,     0,
       0,     0,     0,     0,     0,   672,     0,   220,     0,   171,
     220,     0,   174,     0,    27,     0,   164,     0,     0,     0,
       0,     0,   165,   166,     0,   220,   220,     0,   222,     0,
     220,   220,   257,     0,   167,     0,     0,   221,     0,     0,
       0,     0,   220,     1,   220,     0,   220,     0,     0,    60,
       0,   682,     0,   220,   220,   171,   220,   220,   174,   220,
     220,   521,     0,   220,   526,   528,   220,   220,     3,     0,
      61,     0,     0,   220,    62,     0,     0,   221,    63,     0,
       0,   221,   221,     0,     0,     0,   556,     0,     0,     0,
       0,     0,     5,     0,   160,     0,     0,     0,   221,     0,
     222,     0,     7,     8,     0,     9,     0,     0,     0,     0,
       0,    27,     0,   164,    11,   222,   245,    12,     0,   165,
     166,   246,   221,   247,    13,   221,     0,   221,     0,   115,
      14,   167,   248,     1,     0,     0,   249,     0,   223,    60,
       0,     0,     0,   222,   222,     0,     0,     0,     0,     0,
       0,     0,   171,   250,     0,   174,     0,     0,     3,   251,
      61,     0,   614,   615,    27,     0,     0,     0,    63,   221,
     221,     0,   221,   221,     0,   221,   221,     0,   223,   221,
     221,     0,     5,     0,     0,     0,     0,   221,     0,     0,
       0,     0,     7,     8,     0,     9,   642,     0,     0,     0,
       0,   223,     0,     0,    11,   221,     0,    12,   221,   221,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
      14,     0,   221,     0,     0,   221,     0,     1,   660,   662,
       0,     0,     0,     0,     0,     0,     0,     2,     0,   222,
     221,   221,     0,   223,     0,   221,   221,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,   221,     0,   221,
       1,   221,     0,     0,     0,     0,     0,     0,   221,   221,
      34,   221,   221,     0,   221,   221,     5,     0,   221,   222,
       0,   221,   221,   222,   222,     3,     7,     8,   221,     9,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
     222,    12,     0,     0,     0,     0,     0,     0,    13,     5,
       0,     0,     0,     0,    14,   223,     0,     0,     0,     7,
       8,     0,     9,     0,   222,     0,   160,   222,     0,   222,
     223,    11,     0,     0,    12,     0,     0,     0,     0,     0,
     224,    13,     0,    27,     0,   164,     0,    14,   245,     0,
       0,   165,   166,   246,     0,   247,     0,     0,   223,   223,
       0,     0,     0,   167,   248,     0,     0,     0,   249,     0,
       0,   222,   222,     0,   222,   222,   514,   222,   222,   160,
     224,   222,   222,     0,   171,   250,     0,   174,     0,   222,
       0,   251,     0,     0,     0,     0,    27,     0,   164,     0,
       0,     0,     0,   224,   165,   166,   246,   222,   247,     0,
     222,   222,     0,     0,     0,     0,   167,   248,     0,     0,
       0,   249,     0,     0,   222,     0,     0,   222,     0,     0,
       0,     0,     0,     0,     0,   304,     0,   171,   250,     0,
     174,     0,   222,   222,   251,   224,     0,   222,   222,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   222,
       0,   222,     0,   222,     0,     0,     0,     0,     0,     0,
     222,   222,     0,   222,   222,     0,   222,   222,     0,     0,
     222,     0,     0,   222,   222,     0,     0,     0,     0,     0,
     222,     0,     0,     0,   223,     0,     1,   297,   223,   223,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
     160,     0,   293,     0,     0,   223,   293,   224,     0,     0,
       0,     3,     0,    61,     0,     0,     0,    27,     0,   164,
       0,    63,   224,     0,     0,   165,   166,     0,     0,   223,
       0,     0,   223,     0,   223,     5,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
     224,   224,     0,     0,     0,     0,   393,    11,   171,     0,
      12,   174,     0,     0,     0,     0,     0,    13,     0,     0,
       0,   177,     0,    14,     0,     0,   223,   223,     0,   223,
     223,     0,   223,   223,   160,   259,   223,   223,     0,   293,
     293,   293,     0,   293,   223,     0,   259,     0,     0,     0,
       0,    27,     0,   164,     0,   259,     0,     0,   259,   165,
     166,   246,   223,   247,   259,   223,   223,     0,     0,     0,
       0,   167,   248,     0,     0,     0,   249,     0,     0,   223,
       0,     0,   223,     0,     0,     0,     0,     0,   423,   418,
       0,     0,   171,   250,     0,   174,   224,   223,   223,   251,
       0,     0,   223,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,   223,     0,   223,     0,
       0,     0,     0,     0,     0,   223,   223,     0,   223,   223,
       0,   223,   223,     0,   259,   223,   224,     0,   223,   223,
     224,   224,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   293,     0,
     293,   293,   293,   293,   293,   293,   293,   293,     0,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,     0,
       0,   224,     0,     0,   224,     0,   224,     0,   259,     0,
       0,     0,     0,     0,     0,     0,   259,   259,     0,     0,
       0,   259,     0,     0,   259,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   259,     0,     0,     0,     0,
       0,     0,   259,     0,     0,     0,     0,     0,   224,   224,
       0,   224,   224,     0,   224,   224,     0,     0,   224,   224,
       0,   293,   293,     0,     0,     0,   224,     0,     0,     0,
       0,     0,   259,     0,   259,     0,   259,     0,   534,     0,
       0,     0,     0,     0,   224,     0,     0,   224,   224,     0,
       0,     0,     0,     0,   554,     0,     0,   259,     0,     0,
       0,   224,   259,     0,   224,     0,     0,     0,     0,   259,
       0,     0,     0,   259,     0,     0,     0,     0,   568,   224,
     224,     0,     0,     0,   224,   224,     0,     0,     0,     0,
       0,   293,     0,     0,     0,     0,   224,     0,   224,     0,
     224,     0,   259,   259,     0,     0,     0,   224,   224,     0,
     224,   224,     0,   224,   224,     0,   259,   224,   294,     0,
     224,   224,   294,     0,     0,   603,   604,   224,   606,   607,
       0,     0,     0,     0,     0,   418,   617,     0,     0,     0,
       0,     0,     0,     0,     0,   259,     0,     0,   259,   259,
       0,     0,     0,     0,     0,   293,     0,   160,     0,     0,
     259,   637,     0,     0,   638,   639,     0,     0,     0,     0,
     259,     0,     0,   259,    27,     0,   164,     0,     0,     0,
       0,     0,   165,   166,   246,     0,   247,     0,     0,     0,
       0,     0,     0,     0,   167,   248,   656,     0,     0,   249,
       0,   534,   554,     0,     0,   294,   294,   294,     0,   294,
       0,     0,   142,   568,     0,   171,   250,     0,   174,     0,
     293,     0,   251,     0,   603,   604,     0,   606,   607,     0,
       0,   617,   259,   259,   637,     1,     0,   638,   639,     0,
       0,    60,     0,     0,   656,     0,   259,   259,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,    61,   259,     0,     0,    27,     0,   164,     0,
      63,     0,     0,     0,   165,   166,     0,     0,     0,     0,
     259,     0,     0,     0,     5,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,   611,    11,   171,     0,    12,
     174,     0,   259,   259,     0,     0,    13,     0,     0,     0,
     177,     0,    14,     0,   294,     0,   294,   294,   294,   294,
     294,   294,   294,   294,     0,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,     0,     0,     0,     0,     0,
       1,     0,     0,   157,     0,     0,    60,   158,   583,     0,
       0,     0,     0,   159,   160,   584,     0,     0,   161,     0,
       0,     0,     0,     0,     0,     3,     0,    61,   162,     0,
       0,    27,   163,   164,     0,    63,     0,     0,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   167,     0,     0,     0,     0,     0,   294,   294,     7,
       8,     0,     9,     0,   624,     0,   169,     0,     0,     0,
     170,    11,   171,   172,   173,   174,     0,   175,     0,     0,
       0,    13,     0,   176,     0,   177,     1,    14,   178,   157,
       0,     0,    60,   158,   583,     0,     0,     0,     0,   159,
     160,   584,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     3,     0,    61,   162,     0,     0,    27,   163,   164,
       0,    63,     0,     0,     0,   165,   166,   294,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
     649,     0,   169,     0,     0,     0,   170,    11,   171,   172,
     173,   174,     0,   175,     0,     0,     0,    13,     0,   176,
       0,   177,     1,    14,   178,   157,     0,     0,    60,   158,
       0,     0,     0,     0,     0,   159,   160,     0,     0,     0,
     161,   294,     0,     0,     0,     0,     0,     3,     0,    61,
     162,     0,     0,    27,   163,   164,     0,    63,     0,     0,
       0,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,   168,     0,   169,     0,
       0,     0,   170,    11,   171,   172,   173,   174,     0,   175,
       0,     0,     0,    13,     0,   176,   294,   177,     1,    14,
     178,   157,     0,     0,    60,   158,     0,     0,     0,     0,
       0,   159,   160,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     3,     0,    61,   162,     0,     0,    27,
     163,   164,     0,    63,     0,     0,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,   320,     0,   169,     0,     0,     0,   170,    11,
     171,   172,   173,   174,     0,   175,     0,     0,     0,    13,
       0,   176,     0,   177,     1,    14,   178,   157,     0,     0,
      60,   158,     0,     0,     0,     0,     0,   159,   160,     0,
       0,     0,   161,     0,     0,     0,     0,     0,     0,     3,
       0,    61,   162,     0,     0,    27,   163,   164,     0,    63,
       0,     0,     0,   165,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     9,     0,   337,     0,
     169,     0,     0,     0,   170,    11,   338,   172,   173,   339,
       0,   175,     0,     0,     0,    13,     0,   176,     0,   177,
       1,    14,   178,   157,     0,     0,    60,   158,     0,     0,
       0,     0,     0,   159,   160,     0,     0,     0,   161,     0,
       0,     0,     0,     0,     0,     3,     0,    61,   162,     0,
       0,    27,   163,   164,     0,    63,     0,     0,     0,   165,
     166,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     9,     0,   436,     0,   169,     0,     0,     0,
     170,    11,   171,   172,   173,   174,     0,   175,     0,     0,
       0,    13,     0,   176,     0,   177,     1,    14,   178,   157,
       0,     0,    60,   158,     0,     0,     0,     0,     0,   159,
     160,     0,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     3,     0,    61,   162,     0,     0,    27,   163,   164,
       0,    63,     0,     0,     0,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
     438,     0,   169,     0,     0,     0,   170,    11,   171,   172,
     173,   174,     0,   175,     0,     0,     0,    13,     0,   176,
       0,   177,     1,    14,   178,   157,     0,     0,    60,   158,
       0,     0,     0,     0,     0,   159,   160,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     3,     0,    61,
     162,     0,     0,    27,   163,   164,     0,    63,     0,     0,
       0,   165,   166,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   167,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,   511,     0,   169,     0,
       0,     0,   170,    11,   171,   172,   173,   174,     0,   175,
       0,     0,     0,    13,     0,   176,     0,   177,     1,    14,
     178,   157,     0,     0,    60,   158,     0,     0,     0,     0,
       0,   159,   160,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     3,     0,    61,   162,     0,     0,    27,
     163,   164,     0,    63,  -171,     0,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,     0,     0,   169,     0,     0,     0,   170,    11,
     171,   172,   173,   174,     0,   175,     0,     0,   157,    13,
       0,   176,   158,   177,     0,    14,   178,     0,   159,   160,
       0,     0,     0,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   162,     0,     0,    27,   163,   164,     0,
       0,     0,     0,     0,   165,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,     0,     0,     0,   170,     0,   171,   172,   296,
     174,   157,   175,     0,     0,   158,     0,     0,   176,     0,
       0,   159,   160,   178,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   530,     0,     0,    27,
     531,   164,     0,     0,     0,     0,     0,   165,   166,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   354,     0,   160,   169,     0,     0,     0,   170,     0,
     171,   172,   296,   174,     0,   175,     0,   160,     0,     0,
      27,   176,   164,     0,     0,   245,   532,     0,   165,   166,
     246,     0,   247,     0,    27,     0,   164,     0,     0,     0,
     167,   248,   165,   166,   246,   249,   247,     0,     0,     0,
       0,     0,     0,   355,   167,   248,     0,     0,     0,   249,
     160,   171,   250,     0,   174,     0,     0,     0,   251,     0,
       0,     0,     0,   477,   160,   171,   250,    27,   174,   164,
       0,     0,   251,     0,     0,   165,   166,   246,     0,   247,
       0,    27,     0,   164,     0,     0,     0,   167,   248,   165,
     166,   246,   249,   247,     0,     0,     0,     0,     0,     0,
       0,   167,   248,     0,   487,     0,   249,   160,   171,   250,
       0,   174,     0,     0,     0,   251,     0,     0,   506,     0,
       0,   160,   171,   250,    27,   174,   164,     0,     0,   251,
       0,     0,   165,   166,   246,     0,   247,     0,    27,     0,
     164,     0,     0,     0,   167,   248,   165,   166,   246,   249,
     247,     0,     0,     0,     0,     0,     0,     0,   167,   248,
       0,   508,     0,   249,   160,   171,   250,     0,   174,     0,
       0,     0,   251,     0,     0,     0,     0,   527,   160,   171,
     250,    27,   174,   164,     0,     0,   251,     0,     0,   165,
     166,   246,     0,   247,     0,    27,     0,   164,     0,     0,
       0,   167,   248,   165,   166,   246,   249,   247,     0,     0,
       0,     0,     0,     0,     0,   167,   248,     0,   546,     0,
     249,   160,   171,   250,     0,   174,     0,     0,     0,   251,
       0,     0,   557,     0,     0,   160,   171,   250,    27,   174,
     164,     0,     0,   251,     0,     0,   165,   166,   246,     0,
     247,     0,    27,     0,   164,     0,     0,     0,   167,   248,
     165,   166,   246,   249,   247,     0,     0,     0,     0,     0,
       0,     0,   167,   248,     0,   598,     0,   249,   160,   171,
     250,     0,   174,     0,     0,     0,   251,     0,     0,   600,
       0,     0,   160,   171,   250,    27,   174,   164,     0,     0,
     251,     0,     0,   165,   166,   246,     0,   247,     0,    27,
       0,   164,     0,     0,     0,   167,   248,   165,   166,   246,
     249,   247,     0,     0,     0,     0,     0,     0,     0,   167,
     248,     0,   631,     0,   249,   160,   171,   250,     0,   174,
       0,     0,     0,   251,     0,     0,     0,     0,   641,     0,
     171,   250,    27,   174,   164,     0,     0,   251,     0,     0,
     165,   166,   246,     0,   247,     0,     0,     0,     0,     0,
       0,     0,   167,   248,     0,     0,     0,   249,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   661,     0,   171,   250,    27,   174,   164,     0,     0,
     251,     0,     0,   165,   166,   246,     0,   247,     0,     0,
       0,     0,     0,     0,     0,   167,   248,     0,     0,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,   250,     0,   174,
       0,     0,     0,   251
};

static const yytype_int16 yycheck[] =
{
      39,     4,    36,     6,   138,    48,    23,     0,   238,   184,
     298,   103,   298,   246,    46,    58,   167,   245,    22,   121,
     153,   314,    22,    73,    17,   116,    19,    34,   120,    34,
     519,    14,   325,    36,    44,    43,    44,   525,    22,   527,
      33,   298,   587,    46,    17,    77,    78,    50,    51,    52,
     404,    54,    55,    46,    15,    15,    15,    15,    15,   102,
      77,    34,    72,    36,     2,    15,    73,   160,    73,    42,
      43,   164,    15,    73,    77,    78,    15,   622,    15,   433,
     434,    54,   121,    83,   176,    78,   177,   575,    92,    73,
      73,   182,   225,    96,   583,   246,    34,   401,   190,    83,
     403,   405,    75,   406,   138,    78,    15,    15,    46,   141,
      71,    71,    73,    73,    73,    73,    73,    67,   121,   158,
     159,   351,   161,   126,   226,   128,   129,    15,    15,    67,
      73,    72,    71,   167,    72,   138,    73,   491,   141,    77,
      78,    15,   435,   376,    15,   184,   439,    15,   141,    15,
     504,   183,   285,   641,   247,   248,   249,   160,   251,   648,
      22,   164,    71,    71,   167,    11,   183,   342,    44,    20,
      39,   659,    18,   661,   115,   116,    26,   115,   116,    22,
     183,   184,    11,    71,    71,    44,   674,   226,    46,    18,
      34,    22,    44,    34,    22,    71,    22,    71,    49,    50,
      71,    59,   234,    71,    73,    71,    56,   239,    27,   563,
     564,    73,    71,    34,    64,   349,    44,    67,    68,   447,
     477,    67,   239,   226,   481,   376,    34,   318,   319,    81,
      73,   234,    24,    54,    40,    34,   239,    87,    67,   341,
     594,   234,    73,   246,   247,   248,   249,    73,   251,   121,
      22,    39,   302,   303,    75,    54,    44,    78,    34,    22,
      22,    53,   437,     0,    70,    34,    74,   306,   525,    26,
     527,    43,    44,    79,   313,   314,    75,    85,    54,    17,
      43,    43,    25,    14,    15,    54,   325,    39,   576,   161,
     576,   384,   385,   386,    17,   298,    34,    22,    36,    56,
     482,    44,   341,   342,    42,    43,    75,    64,   358,    78,
      67,    68,   184,    36,    39,   349,    54,    17,   575,   576,
     352,   413,    22,   553,    22,    12,    17,    43,    17,    39,
      87,    43,    17,    71,    34,    44,    36,    75,   341,   342,
      78,   344,    29,    43,    44,    36,   349,    36,    33,   352,
       8,   401,   372,   373,   226,   405,   449,   128,   129,   352,
      39,     3,   592,   366,    22,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   641,   419,    28,   379,   380,   381,
      57,    39,    34,    43,     5,    71,   435,   579,   437,    66,
     439,   493,   659,    72,   661,   382,   383,    44,    19,    39,
      52,     5,    39,   463,    25,    81,   419,   674,    71,    43,
      62,    63,    43,    65,    22,    19,   298,    72,    72,   113,
      43,    25,    74,     9,   437,    77,    47,    72,    43,   123,
      51,   313,    84,   482,   487,    14,   449,   450,    90,    60,
     625,    43,    22,    47,    30,    73,   590,    51,    34,   498,
      44,   500,    38,   645,   646,   149,    60,   151,   152,   341,
     342,    32,    33,    73,   121,   657,    37,    15,    17,    15,
      41,    44,     4,   522,    45,     8,   668,   669,    61,   671,
     672,   494,    17,   675,   628,    34,   678,    36,     7,   681,
     682,   494,   545,    42,    43,     5,   688,    73,    73,    34,
      91,    36,    71,    44,   161,    54,   519,    42,    43,    19,
     374,   375,    22,   377,   378,    25,    73,    73,    15,    54,
     569,   570,    71,   572,   573,   552,    75,   184,   630,    78,
     579,   580,    43,    43,    44,    22,    71,    47,   587,   552,
      75,    51,    44,    78,    34,    71,   590,     5,    72,   651,
      60,    67,    42,    43,    44,   437,   605,    43,   579,   608,
     609,    19,    14,   576,    54,    55,    73,    25,    15,   226,
     583,    71,    43,   622,   587,    71,   625,   590,    71,    43,
      71,    22,    43,    72,   628,    75,    76,    72,    78,    47,
      71,   640,    82,    51,    72,   477,   645,   646,    14,   481,
     482,    73,    60,    73,    72,    39,    43,    73,   657,   622,
      73,    43,   625,    73,    71,   628,   498,    71,    71,   668,
     669,    43,   671,   672,   645,   646,   675,    14,    43,   678,
      43,    23,   681,   682,    23,   648,   657,    43,    73,   688,
     522,   298,    73,   525,    73,   527,    17,   668,   669,    14,
     671,   672,    71,    71,   675,     8,   313,   678,    14,    73,
     681,   682,    73,    34,    71,    36,   121,   688,    73,    71,
      71,    42,    43,    73,    73,    73,    71,    71,    23,    19,
      73,    71,    56,    54,   341,   342,     3,   569,   570,    71,
     572,   573,     9,   575,   576,    71,    42,   579,   580,    96,
      71,    78,   144,   234,    75,   587,   161,    78,   352,    77,
     518,    28,   586,    30,   414,    17,   586,    34,   576,   552,
      22,    38,   414,   605,   366,   226,   608,   609,   369,   184,
     368,   303,    34,   450,    36,    52,   371,   370,    -1,    -1,
     622,    43,    44,   625,    -1,    62,    63,    -1,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    73,    74,   640,   641,
      77,    -1,    -1,   645,   646,    -1,    -1,    84,    -1,    -1,
      -1,   226,    89,    90,    -1,   657,    -1,   659,    17,   661,
     437,    -1,    -1,    -1,    -1,    -1,   668,   669,    -1,   671,
     672,    -1,   674,   675,    -1,    34,   678,    36,    -1,   681,
     682,    -1,     3,    42,    43,    -1,   688,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,   481,   482,    -1,    28,    -1,    30,
      -1,    -1,    71,    34,    -1,    -1,    75,    38,    -1,    78,
      -1,   498,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      -1,    62,    63,    -1,    65,   522,    67,    -1,   525,    -1,
     527,    -1,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,   121,    -1,    84,    -1,    -1,   341,   342,    89,    90,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,   157,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,   166,   569,   570,   169,   572,   573,    -1,   575,   576,
     175,   161,   579,   580,    -1,    28,    -1,    30,    -1,    -1,
     587,    34,    -1,    -1,    -1,    38,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,   605,    52,
      -1,   608,   609,    -1,    -1,    34,    -1,    36,    -1,    62,
      63,    -1,    65,    42,    43,   622,    -1,    -1,   625,    -1,
      -1,    74,    -1,    -1,    77,    54,    -1,    -1,    -1,    -1,
      -1,    84,   437,   640,   641,    88,   226,    90,   645,   646,
     245,    -1,    71,    -1,    -1,    -1,    75,    -1,    -1,    78,
     657,    -1,   659,    -1,   661,    -1,    -1,    -1,    -1,    -1,
      -1,   668,   669,    -1,   671,   672,    -1,   674,   675,    -1,
      -1,   678,   477,    -1,   681,   682,   481,   482,    -1,    -1,
      -1,   688,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   498,   299,    13,    -1,    -1,    -1,    -1,
      -1,    -1,   307,   308,    -1,    -1,    -1,   312,   298,    -1,
      28,   316,    -1,    -1,    -1,    -1,    -1,   522,    -1,    -1,
     525,   326,   527,   313,    -1,    -1,    -1,    -1,   333,    -1,
      48,    -1,    -1,   121,    52,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,    -1,
      -1,   341,   342,    -1,    -1,    73,    74,    -1,   363,    77,
     365,    17,   367,    -1,   569,   570,    84,   572,   573,    -1,
     575,   576,    90,   161,   579,   580,    -1,    -1,    34,    -1,
      36,    -1,   587,   388,    -1,    -1,    42,    43,   393,    -1,
      -1,    -1,    -1,    -1,    -1,   400,   184,    -1,    54,    -1,
     605,    -1,    -1,   608,   609,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,   622,    -1,    75,
     625,    -1,    78,    -1,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,   640,   641,    -1,   226,    -1,
     645,   646,   447,    -1,    54,    -1,    -1,   437,    -1,    -1,
      -1,    -1,   657,     3,   659,    -1,   661,    -1,    -1,     9,
      -1,    71,    -1,   668,   669,    75,   671,   672,    78,   674,
     675,   476,    -1,   678,   479,   480,   681,   682,    28,    -1,
      30,    -1,    -1,   688,    34,    -1,    -1,   477,    38,    -1,
      -1,   481,   482,    -1,    -1,    -1,   501,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    17,    -1,    -1,    -1,   498,    -1,
     298,    -1,    62,    63,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    36,    74,   313,    39,    77,    -1,    42,
      43,    44,   522,    46,    84,   525,    -1,   527,    -1,    89,
      90,    54,    55,     3,    -1,    -1,    59,    -1,   121,     9,
      -1,    -1,    -1,   341,   342,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    78,    -1,    -1,    28,    82,
      30,    -1,   577,   578,    34,    -1,    -1,    -1,    38,   569,
     570,    -1,   572,   573,    -1,   575,   576,    -1,   161,   579,
     580,    -1,    52,    -1,    -1,    -1,    -1,   587,    -1,    -1,
      -1,    -1,    62,    63,    -1,    65,   611,    -1,    -1,    -1,
      -1,   184,    -1,    -1,    74,   605,    -1,    77,   608,   609,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,   622,    -1,    -1,   625,    -1,     3,   643,   644,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,   437,
     640,   641,    -1,   226,    -1,   645,   646,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,   657,    -1,   659,
       3,   661,    -1,    -1,    -1,    -1,    -1,    -1,   668,   669,
      13,   671,   672,    -1,   674,   675,    52,    -1,   678,   477,
      -1,   681,   682,   481,   482,    28,    62,    63,   688,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
     498,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    52,
      -1,    -1,    -1,    -1,    90,   298,    -1,    -1,    -1,    62,
      63,    -1,    65,    -1,   522,    -1,    17,   525,    -1,   527,
     313,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
     121,    84,    -1,    34,    -1,    36,    -1,    90,    39,    -1,
      -1,    42,    43,    44,    -1,    46,    -1,    -1,   341,   342,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,
      -1,   569,   570,    -1,   572,   573,    67,   575,   576,    17,
     161,   579,   580,    -1,    75,    76,    -1,    78,    -1,   587,
      -1,    82,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,   184,    42,    43,    44,   605,    46,    -1,
     608,   609,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,   622,    -1,    -1,   625,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    76,    -1,
      78,    -1,   640,   641,    82,   226,    -1,   645,   646,    -1,
      -1,    -1,    -1,    -1,   437,    -1,    -1,    -1,    -1,   657,
      -1,   659,    -1,   661,    -1,    -1,    -1,    -1,    -1,    -1,
     668,   669,    -1,   671,   672,    -1,   674,   675,    -1,    -1,
     678,    -1,    -1,   681,   682,    -1,    -1,    -1,    -1,    -1,
     688,    -1,    -1,    -1,   477,    -1,     3,   161,   481,   482,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,   160,    -1,    -1,   498,   164,   298,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    36,
      -1,    38,   313,    -1,    -1,    42,    43,    -1,    -1,   522,
      -1,    -1,   525,    -1,   527,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,
     341,   342,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    -1,    90,    -1,    -1,   569,   570,    -1,   572,
     573,    -1,   575,   576,    17,   146,   579,   580,    -1,   247,
     248,   249,    -1,   251,   587,    -1,   157,    -1,    -1,    -1,
      -1,    34,    -1,    36,    -1,   166,    -1,    -1,   169,    42,
      43,    44,   605,    46,   175,   608,   609,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    -1,    -1,   622,
      -1,    -1,   625,    -1,    -1,    -1,    -1,    -1,    71,   313,
      -1,    -1,    75,    76,    -1,    78,   437,   640,   641,    82,
      -1,    -1,   645,   646,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   657,    -1,   659,    -1,   661,    -1,
      -1,    -1,    -1,    -1,    -1,   668,   669,    -1,   671,   672,
      -1,   674,   675,    -1,   245,   678,   477,    -1,   681,   682,
     481,   482,    -1,    -1,    -1,   688,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   498,   366,    -1,
     368,   369,   370,   371,   372,   373,   374,   375,    -1,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,    -1,
      -1,   522,    -1,    -1,   525,    -1,   527,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,   308,    -1,    -1,
      -1,   312,    -1,    -1,   315,   316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,    -1,
      -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,   569,   570,
      -1,   572,   573,    -1,   575,   576,    -1,    -1,   579,   580,
      -1,   449,   450,    -1,    -1,    -1,   587,    -1,    -1,    -1,
      -1,    -1,   363,    -1,   365,    -1,   367,    -1,   482,    -1,
      -1,    -1,    -1,    -1,   605,    -1,    -1,   608,   609,    -1,
      -1,    -1,    -1,    -1,   498,    -1,    -1,   388,    -1,    -1,
      -1,   622,   393,    -1,   625,    -1,    -1,    -1,    -1,   400,
      -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,   522,   640,
     641,    -1,    -1,    -1,   645,   646,    -1,    -1,    -1,    -1,
      -1,   519,    -1,    -1,    -1,    -1,   657,    -1,   659,    -1,
     661,    -1,   433,   434,    -1,    -1,    -1,   668,   669,    -1,
     671,   672,    -1,   674,   675,    -1,   447,   678,   160,    -1,
     681,   682,   164,    -1,    -1,   569,   570,   688,   572,   573,
      -1,    -1,    -1,    -1,    -1,   579,   580,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   476,    -1,    -1,   479,   480,
      -1,    -1,    -1,    -1,    -1,   583,    -1,    17,    -1,    -1,
     491,   605,    -1,    -1,   608,   609,    -1,    -1,    -1,    -1,
     501,    -1,    -1,   504,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,   640,    -1,    -1,    59,
      -1,   645,   646,    -1,    -1,   247,   248,   249,    -1,   251,
      -1,    -1,    72,   657,    -1,    75,    76,    -1,    78,    -1,
     648,    -1,    82,    -1,   668,   669,    -1,   671,   672,    -1,
      -1,   675,   563,   564,   678,     3,    -1,   681,   682,    -1,
      -1,     9,    -1,    -1,   688,    -1,   577,   578,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,   594,    -1,    -1,    34,    -1,    36,    -1,
      38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
     611,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    77,
      78,    -1,   643,   644,    -1,    -1,    84,    -1,    -1,    -1,
      88,    -1,    90,    -1,   366,    -1,   368,   369,   370,   371,
     372,   373,   374,   375,    -1,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,   449,   450,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,     3,    90,    91,     6,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    -1,    34,    35,    36,
      -1,    38,    -1,    -1,    -1,    42,    43,   519,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,
      67,    -1,    69,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    84,    -1,    86,
      -1,    88,     3,    90,    91,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,   583,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    84,    -1,    86,   648,    88,     3,    90,
      91,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      65,    -1,    67,    -1,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    84,
      -1,    86,    -1,    88,     3,    90,    91,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,    38,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,
       3,    90,    91,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,     3,    90,    91,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    -1,    34,    35,    36,
      -1,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,
      67,    -1,    69,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    84,    -1,    86,
      -1,    88,     3,    90,    91,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    -1,    65,    -1,    67,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    -1,    80,
      -1,    -1,    -1,    84,    -1,    86,    -1,    88,     3,    90,
      91,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,    34,
      35,    36,    -1,    38,    39,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    80,    -1,    -1,     6,    84,
      -1,    86,    10,    88,    -1,    90,    91,    -1,    16,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    73,    -1,    75,    76,    77,
      78,     6,    80,    -1,    -1,    10,    -1,    -1,    86,    -1,
      -1,    16,    17,    91,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    17,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    77,    78,    -1,    80,    -1,    17,    -1,    -1,
      34,    86,    36,    -1,    -1,    39,    91,    -1,    42,    43,
      44,    -1,    46,    -1,    34,    -1,    36,    -1,    -1,    -1,
      54,    55,    42,    43,    44,    59,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    54,    55,    -1,    -1,    -1,    59,
      17,    75,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    73,    17,    75,    76,    34,    78,    36,
      -1,    -1,    82,    -1,    -1,    42,    43,    44,    -1,    46,
      -1,    34,    -1,    36,    -1,    -1,    -1,    54,    55,    42,
      43,    44,    59,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    71,    -1,    59,    17,    75,    76,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    71,    -1,
      -1,    17,    75,    76,    34,    78,    36,    -1,    -1,    82,
      -1,    -1,    42,    43,    44,    -1,    46,    -1,    34,    -1,
      36,    -1,    -1,    -1,    54,    55,    42,    43,    44,    59,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    71,    -1,    59,    17,    75,    76,    -1,    78,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    73,    17,    75,
      76,    34,    78,    36,    -1,    -1,    82,    -1,    -1,    42,
      43,    44,    -1,    46,    -1,    34,    -1,    36,    -1,    -1,
      -1,    54,    55,    42,    43,    44,    59,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    71,    -1,
      59,    17,    75,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    -1,    71,    -1,    -1,    17,    75,    76,    34,    78,
      36,    -1,    -1,    82,    -1,    -1,    42,    43,    44,    -1,
      46,    -1,    34,    -1,    36,    -1,    -1,    -1,    54,    55,
      42,    43,    44,    59,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    71,    -1,    59,    17,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    71,
      -1,    -1,    17,    75,    76,    34,    78,    36,    -1,    -1,
      82,    -1,    -1,    42,    43,    44,    -1,    46,    -1,    34,
      -1,    36,    -1,    -1,    -1,    54,    55,    42,    43,    44,
      59,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    71,    -1,    59,    17,    75,    76,    -1,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    73,    -1,
      75,    76,    34,    78,    36,    -1,    -1,    82,    -1,    -1,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    59,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    76,    34,    78,    36,    -1,    -1,
      82,    -1,    -1,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    78,
      -1,    -1,    -1,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    13,    28,    48,    52,    58,    62,    63,    65,
      73,    74,    77,    84,    90,   101,   102,   103,   104,   105,
     106,   107,   118,   123,   124,    34,    94,    34,    95,    99,
      99,     0,   106,   103,    13,   124,    27,   122,   125,    22,
      39,    73,    94,    99,   115,   116,    39,   126,   120,    95,
      26,    56,    64,    67,    68,    87,   108,   109,   121,   125,
       9,    30,    34,    38,    67,    73,    74,    89,    94,    97,
      98,    99,   112,   113,   114,   115,   117,   123,   127,   128,
     129,   130,   135,   137,   146,   147,   148,   150,   155,   126,
      99,    99,    99,    74,    85,    99,   110,   111,    99,    67,
     109,   126,   119,   149,    94,   138,    43,    44,   221,    94,
     131,   132,   133,   138,   221,    89,   112,   155,    67,   128,
     136,    39,   162,   152,   154,    73,    83,    73,    83,    92,
      73,    99,   111,    73,   126,   162,    43,    44,    81,   143,
      71,   156,    72,    44,    15,    73,    25,    44,   143,   138,
     131,   138,   151,   153,    73,   145,   162,     6,    10,    16,
      17,    21,    31,    35,    36,    42,    43,    54,    67,    69,
      73,    75,    76,    77,    78,    80,    86,    88,    91,    95,
      96,    99,   112,   123,   163,   164,   165,   166,   167,   169,
     170,   171,   172,   173,   175,   176,   177,   178,   180,   187,
     189,   190,   192,   197,   199,   200,   201,   202,   203,   204,
     210,   211,   212,   213,   214,   215,   216,   218,   224,   225,
     241,   242,   244,   245,   246,   143,    39,   158,    99,   100,
     100,   100,    73,    71,   139,    72,   116,   144,   112,   123,
     141,   142,    72,    94,   132,    39,    44,    46,    55,    59,
      76,    82,    99,   134,   160,   212,   216,   222,   223,   224,
     227,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,    72,   143,    73,   143,   143,   158,   222,    73,    95,
      73,    95,    99,   214,   215,   240,    77,   167,    43,    43,
     240,   222,   113,   115,    73,   222,    22,    43,    43,   222,
     162,   131,    43,    14,    22,    43,    44,   131,    88,   112,
      67,   164,    73,   162,    73,    22,    44,     5,    19,    25,
      47,    51,    60,   226,    17,    36,   158,    67,    75,    78,
      99,   159,   163,   210,    15,    73,    73,    73,   141,    15,
     133,   112,    15,   157,    15,    67,   134,   161,   113,   114,
     240,   240,   240,    44,   240,    44,    57,    66,     4,     8,
      61,     7,    24,    53,    32,    33,    37,    41,    45,    40,
      70,    79,    46,    59,    20,    49,    50,   158,    14,    73,
      73,    73,    91,    73,   166,   176,   194,   196,   222,    71,
      44,   219,   220,   221,    43,   219,   221,    73,    95,   222,
     222,    73,    12,    29,   205,   206,   209,   222,   167,    54,
      75,    78,   213,    71,   217,   222,   222,   131,   131,    95,
     213,   222,   222,    43,    43,    22,    67,   163,    67,    22,
      99,   140,   116,   133,   142,    71,    67,    15,    67,    72,
      72,   222,   230,   222,   228,   231,   232,   233,   234,   235,
     235,   237,   237,   113,   114,   237,   237,   238,   238,   238,
     239,   239,   240,   240,   240,   222,    43,    73,   222,    14,
      73,    15,    71,   222,   220,   221,   160,    71,   217,   221,
     160,    43,    71,    71,    43,   162,   206,   209,    71,   115,
      22,    15,    71,    72,    43,    72,    71,   217,    71,   217,
      75,    67,    75,    71,    67,   134,   240,   243,    72,    14,
      73,   222,    71,   195,   196,    73,   222,    73,   222,   176,
      31,    35,    91,    95,   167,   168,   169,   174,   179,   188,
     191,   193,   198,    72,   126,    71,    71,   217,    39,   181,
     162,    99,   123,   207,   167,    95,   222,    71,   217,    73,
      71,    73,    71,    43,    43,   181,   227,    71,   167,    71,
      71,   195,    71,    71,   195,    73,    43,    43,    43,    14,
      23,   126,    71,    11,    18,    67,   182,   183,   184,   185,
       8,   208,   207,   133,    43,    71,    73,    73,    71,   217,
      71,   217,    73,   167,   167,    71,   167,   167,    71,    71,
     195,    73,   166,   194,   222,   222,   168,   167,   186,   227,
      14,    67,   183,   184,    67,   163,   185,   116,     8,   133,
      71,    71,   217,    73,    71,    73,    71,   167,   167,   167,
      71,    73,   222,    14,    73,    71,    71,    14,    15,    67,
     116,    71,   162,    71,    73,    73,   167,    71,   195,    73,
     222,    73,   222,   168,   168,   227,   162,   168,    71,    71,
     195,    71,    71,   195,    73,    23,   168,   168,    71,   168,
     168,    71,    71,   195,   168,   168,   168,   168,    71,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   103,   103,   104,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   114,   114,   115,   116,   117,   117,   119,
     118,   120,   118,   121,   118,   122,   118,   123,   123,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     126,   126,   127,   127,   128,   128,   128,   128,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   136,   135,   137,   137,   137,   137,   137,   137,   137,
     137,   139,   140,   138,   138,   138,   141,   141,   142,   142,
     143,   144,   144,   145,   145,   147,   146,   149,   148,   151,
     150,   152,   150,   153,   150,   154,   150,   156,   157,   155,
     155,   158,   158,   158,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   160,   161,   161,   162,
     162,   163,   163,   164,   164,   165,   166,   166,   166,   166,
     167,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   170,   169,   169,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   171,   171,   172,   173,   174,   175,
     176,   176,   176,   176,   176,   176,   176,   177,   178,   179,
     180,   181,   181,   181,   181,   182,   182,   183,   183,   184,
     185,   185,   186,   186,   187,   188,   189,   190,   190,   191,
     191,   192,   192,   192,   192,   192,   192,   192,   192,   193,
     193,   193,   193,   193,   193,   193,   193,   194,   194,   195,
     196,   196,   197,   198,   199,   199,   200,   200,   201,   201,
     202,   203,   204,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   209,   210,   210,   211,   211,   211,   211,
     211,   211,   211,   211,   212,   212,   212,   213,   213,   213,
     213,   214,   214,   215,   215,   216,   216,   216,   216,   216,
     216,   216,   216,   217,   217,   218,   218,   218,   218,   218,
     218,   219,   219,   220,   221,   221,   222,   223,   223,   224,
     225,   225,   225,   226,   226,   226,   226,   226,   226,   227,
     227,   228,   229,   229,   230,   230,   231,   231,   232,   232,
     233,   233,   234,   234,   234,   235,   235,   235,   235,   235,
     235,   236,   237,   237,   237,   237,   238,   238,   238,   239,
     239,   239,   239,   240,   240,   240,   240,   240,   241,   242,
     243,   243,   243,   243,   243,   244,   244,   244,   244,   245,
     246,   247,   247,   248
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     1,     2,     1,     3,
       1,     1,     5,     4,     1,     2,     4,     3,     5,     3,
       3,     5,     3,     5,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       6,     0,     5,     0,     5,     0,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     0,     3,     4,     3,     3,     2,     4,     3,     3,
       2,     0,     0,     6,     3,     3,     1,     3,     2,     3,
       2,     1,     3,     1,     1,     0,     2,     0,     3,     0,
       5,     0,     4,     0,     4,     0,     3,     0,     0,     6,
       3,     4,     3,     3,     2,     5,     4,     5,     4,     6,
       7,     6,     7,     2,     3,     3,     4,     1,     3,     3,
       2,     2,     1,     1,     1,     2,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     5,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       5,     4,     3,     3,     2,     1,     2,     1,     2,     2,
       3,     2,     1,     3,     5,     5,     7,     1,     1,     1,
       1,     9,     8,     8,     7,     8,     7,     7,     6,     9,
       8,     8,     7,     8,     7,     7,     6,     1,     1,     1,
       3,     1,     7,     7,     3,     2,     3,     2,     2,     3,
       3,     5,     3,     3,     4,     2,     1,     6,     7,     1,
       2,     2,     3,     2,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     3,     3,     5,     5,     6,
       4,     3,     3,     4,     4,     3,     4,     5,     6,     5,
       6,     7,     8,     1,     3,     3,     4,     3,     4,     4,
       4,     2,     1,     3,     2,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     4,     5
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 293 "parser.y"
                                                    {
        tab_item* t = new tab_item;
        t->lines.push_back(yylineno);
        t->scope.insert(current_scope);
        sym_table[(*(yyvsp[0].lex))] = *t;
        vec = {createnode("IDENTIFIER__" + *(yyvsp[0].lex) , emp)}; 
        (yyval.str_val) = createnode("Identifier", vec);
    }
#line 2590 "parser.tab.c"
    break;

  case 3:
#line 304 "parser.y"
                                                                                                {vec = {createnode("IDENTIFIER__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Identifier", vec);}
#line 2596 "parser.tab.c"
    break;

  case 4:
#line 308 "parser.y"
                                                                                                {vec = {createnode("LITERAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Literal", vec);}
#line 2602 "parser.tab.c"
    break;

  case 5:
#line 312 "parser.y"
                                                                                                {vec = {createnode("INTEGRALTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("IntegralType", vec);}
#line 2608 "parser.tab.c"
    break;

  case 6:
#line 316 "parser.y"
                                                                                                        {vec = {createnode("FLOATINGPOINTTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FloatingPointType", vec);}
#line 2614 "parser.tab.c"
    break;

  case 7:
#line 320 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2620 "parser.tab.c"
    break;

  case 8:
#line 321 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2626 "parser.tab.c"
    break;

  case 9:
#line 325 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2632 "parser.tab.c"
    break;

  case 10:
#line 326 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2638 "parser.tab.c"
    break;

  case 11:
#line 330 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2644 "parser.tab.c"
    break;

  case 12:
#line 331 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2650 "parser.tab.c"
    break;

  case 13:
#line 335 "parser.y"
                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2656 "parser.tab.c"
    break;

  case 14:
#line 336 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2662 "parser.tab.c"
    break;

  case 15:
#line 337 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2668 "parser.tab.c"
    break;

  case 16:
#line 341 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2674 "parser.tab.c"
    break;

  case 17:
#line 342 "parser.y"
                                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2680 "parser.tab.c"
    break;

  case 18:
#line 346 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModularCompilationUnit", vec);}
#line 2686 "parser.tab.c"
    break;

  case 19:
#line 350 "parser.y"
                                                                                                        {vec = {createnode("PACKAGE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PackageDeclaration", vec);}
#line 2692 "parser.tab.c"
    break;

  case 20:
#line 354 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2698 "parser.tab.c"
    break;

  case 21:
#line 355 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2704 "parser.tab.c"
    break;

  case 22:
#line 359 "parser.y"
                                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2710 "parser.tab.c"
    break;

  case 23:
#line 360 "parser.y"
                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2716 "parser.tab.c"
    break;

  case 24:
#line 364 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2722 "parser.tab.c"
    break;

  case 25:
#line 365 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2728 "parser.tab.c"
    break;

  case 26:
#line 369 "parser.y"
                                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2734 "parser.tab.c"
    break;

  case 27:
#line 370 "parser.y"
                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2740 "parser.tab.c"
    break;

  case 28:
#line 371 "parser.y"
                                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2746 "parser.tab.c"
    break;

  case 29:
#line 372 "parser.y"
                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2752 "parser.tab.c"
    break;

  case 30:
#line 373 "parser.y"
                                                                                                        {vec = {createnode("OPENS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2758 "parser.tab.c"
    break;

  case 31:
#line 374 "parser.y"
                                                                                                                {vec = {createnode("OPENS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2764 "parser.tab.c"
    break;

  case 32:
#line 375 "parser.y"
                                                                                                        {vec = {createnode("USES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2770 "parser.tab.c"
    break;

  case 33:
#line 376 "parser.y"
                                                                                                                        {vec = {createnode("PROVIDES__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("WITH__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2776 "parser.tab.c"
    break;

  case 34:
#line 380 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2782 "parser.tab.c"
    break;

  case 35:
#line 381 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2788 "parser.tab.c"
    break;

  case 36:
#line 385 "parser.y"
                                                                                                {vec = {createnode("TRANSITIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2794 "parser.tab.c"
    break;

  case 37:
#line 386 "parser.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2800 "parser.tab.c"
    break;

  case 38:
#line 390 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 2806 "parser.tab.c"
    break;

  case 39:
#line 391 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 2812 "parser.tab.c"
    break;

  case 40:
#line 395 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2818 "parser.tab.c"
    break;

  case 41:
#line 396 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2824 "parser.tab.c"
    break;

  case 42:
#line 397 "parser.y"
                                                                                                {vec = {createnode("BOOLEAN__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2830 "parser.tab.c"
    break;

  case 43:
#line 401 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 2836 "parser.tab.c"
    break;

  case 44:
#line 402 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 2842 "parser.tab.c"
    break;

  case 45:
#line 406 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassOrInterfaceType", vec);}
#line 2848 "parser.tab.c"
    break;

  case 46:
#line 410 "parser.y"
                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassType", vec);}
#line 2854 "parser.tab.c"
    break;

  case 47:
#line 414 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 2860 "parser.tab.c"
    break;

  case 48:
#line 415 "parser.y"
                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 2866 "parser.tab.c"
    break;

  case 49:
#line 420 "parser.y"
                                                 {incr_scope();}
#line 2872 "parser.tab.c"
    break;

  case 50:
#line 420 "parser.y"
                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-5].str_val),createnode("CLASS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2878 "parser.tab.c"
    break;

  case 51:
#line 421 "parser.y"
                                       {incr_scope();}
#line 2884 "parser.tab.c"
    break;

  case 52:
#line 421 "parser.y"
                                                                                                                                                {hide_scope(); vec = {createnode("CLASS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2890 "parser.tab.c"
    break;

  case 53:
#line 422 "parser.y"
                                    {incr_scope();}
#line 2896 "parser.tab.c"
    break;

  case 54:
#line 422 "parser.y"
                                                                                                                                        {hide_scope(); vec = {(yyvsp[-4].str_val),createnode("CLASS__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2902 "parser.tab.c"
    break;

  case 55:
#line 423 "parser.y"
                          {incr_scope();}
#line 2908 "parser.tab.c"
    break;

  case 56:
#line 423 "parser.y"
                                                                                                                                {hide_scope(); vec = {createnode("CLASS__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2914 "parser.tab.c"
    break;

  case 57:
#line 427 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 2920 "parser.tab.c"
    break;

  case 58:
#line 428 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 2926 "parser.tab.c"
    break;

  case 59:
#line 432 "parser.y"
                                                                                        {vec = {createnode("PUBLIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2932 "parser.tab.c"
    break;

  case 60:
#line 433 "parser.y"
                                                                                                {vec = {createnode("PROTECTED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2938 "parser.tab.c"
    break;

  case 61:
#line 434 "parser.y"
                                                                                                {vec = {createnode("PRIVATE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2944 "parser.tab.c"
    break;

  case 62:
#line 435 "parser.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2950 "parser.tab.c"
    break;

  case 63:
#line 436 "parser.y"
                                                                                                {vec = {createnode("ABSTRACT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2956 "parser.tab.c"
    break;

  case 64:
#line 437 "parser.y"
                                                                                        {vec = {createnode("FINAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2962 "parser.tab.c"
    break;

  case 65:
#line 438 "parser.y"
                                                                                        {vec = {createnode("NATIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2968 "parser.tab.c"
    break;

  case 66:
#line 439 "parser.y"
                                                                                                {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2974 "parser.tab.c"
    break;

  case 67:
#line 440 "parser.y"
                                                                                                {vec = {createnode("TRANSIENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2980 "parser.tab.c"
    break;

  case 68:
#line 441 "parser.y"
                                                                                                {vec = {createnode("VOLATILE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2986 "parser.tab.c"
    break;

  case 69:
#line 445 "parser.y"
                                                                                                        {vec = {createnode("EXTENDS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassExtends", vec);}
#line 2992 "parser.tab.c"
    break;

  case 70:
#line 449 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 2998 "parser.tab.c"
    break;

  case 71:
#line 450 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 3004 "parser.tab.c"
    break;

  case 72:
#line 454 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 3010 "parser.tab.c"
    break;

  case 73:
#line 455 "parser.y"
                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 3016 "parser.tab.c"
    break;

  case 74:
#line 459 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3022 "parser.tab.c"
    break;

  case 75:
#line 460 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3028 "parser.tab.c"
    break;

  case 76:
#line 461 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3034 "parser.tab.c"
    break;

  case 77:
#line 462 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec); }
#line 3040 "parser.tab.c"
    break;

  case 78:
#line 466 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3046 "parser.tab.c"
    break;

  case 79:
#line 467 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3052 "parser.tab.c"
    break;

  case 80:
#line 468 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3058 "parser.tab.c"
    break;

  case 81:
#line 472 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3064 "parser.tab.c"
    break;

  case 82:
#line 473 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3070 "parser.tab.c"
    break;

  case 83:
#line 477 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3076 "parser.tab.c"
    break;

  case 84:
#line 478 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3082 "parser.tab.c"
    break;

  case 85:
#line 482 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3088 "parser.tab.c"
    break;

  case 86:
#line 483 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("EQUALTO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3094 "parser.tab.c"
    break;

  case 87:
#line 487 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3100 "parser.tab.c"
    break;

  case 88:
#line 488 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3106 "parser.tab.c"
    break;

  case 89:
#line 492 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3112 "parser.tab.c"
    break;

  case 90:
#line 493 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3118 "parser.tab.c"
    break;

  case 91:
#line 497 "parser.y"
                     {incr_scope();}
#line 3124 "parser.tab.c"
    break;

  case 92:
#line 497 "parser.y"
                                                                                                                                {hide_scope(); vec = {(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodDeclaration", vec);}
#line 3130 "parser.tab.c"
    break;

  case 93:
#line 501 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3136 "parser.tab.c"
    break;

  case 94:
#line 502 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3142 "parser.tab.c"
    break;

  case 95:
#line 503 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3148 "parser.tab.c"
    break;

  case 96:
#line 504 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3154 "parser.tab.c"
    break;

  case 97:
#line 505 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("VOID__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3160 "parser.tab.c"
    break;

  case 98:
#line 506 "parser.y"
                                                                                                                {vec = {createnode("VOID__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3166 "parser.tab.c"
    break;

  case 99:
#line 507 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("VOID__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3172 "parser.tab.c"
    break;

  case 100:
#line 508 "parser.y"
                                                                                                        {vec = {createnode("VOID__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3178 "parser.tab.c"
    break;

  case 101:
#line 512 "parser.y"
                        {incr_scope();}
#line 3184 "parser.tab.c"
    break;

  case 102:
#line 512 "parser.y"
                                                            {current_scope.pop_back(); counts[current_scope]--;}
#line 3190 "parser.tab.c"
    break;

  case 103:
#line 512 "parser.y"
                                                                                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("LRB__" + *(yyvsp[-4].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3196 "parser.tab.c"
    break;

  case 104:
#line 513 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3202 "parser.tab.c"
    break;

  case 105:
#line 514 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3208 "parser.tab.c"
    break;

  case 106:
#line 518 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3214 "parser.tab.c"
    break;

  case 107:
#line 519 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3220 "parser.tab.c"
    break;

  case 108:
#line 523 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3226 "parser.tab.c"
    break;

  case 109:
#line 524 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3232 "parser.tab.c"
    break;

  case 110:
#line 528 "parser.y"
                                                                                                        {vec = {createnode("THROWS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Throws", vec);}
#line 3238 "parser.tab.c"
    break;

  case 111:
#line 532 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3244 "parser.tab.c"
    break;

  case 112:
#line 533 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3250 "parser.tab.c"
    break;

  case 113:
#line 537 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3256 "parser.tab.c"
    break;

  case 114:
#line 538 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3262 "parser.tab.c"
    break;

  case 115:
#line 542 "parser.y"
        {incr_scope();}
#line 3268 "parser.tab.c"
    break;

  case 116:
#line 542 "parser.y"
                                                                                                        {hide_scope(); vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceInitializer", vec);}
#line 3274 "parser.tab.c"
    break;

  case 117:
#line 546 "parser.y"
               {incr_scope();}
#line 3280 "parser.tab.c"
    break;

  case 118:
#line 546 "parser.y"
                                                                                                                {hide_scope(); vec = {createnode("STATIC__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StaticInitializer", vec);}
#line 3286 "parser.tab.c"
    break;

  case 119:
#line 550 "parser.y"
                                        {incr_scope();}
#line 3292 "parser.tab.c"
    break;

  case 120:
#line 550 "parser.y"
                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-4].str_val),(yyvsp[-3].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3298 "parser.tab.c"
    break;

  case 121:
#line 551 "parser.y"
                              {incr_scope();}
#line 3304 "parser.tab.c"
    break;

  case 122:
#line 551 "parser.y"
                                                                                                                                                {hide_scope(); vec = {(yyvsp[-3].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3310 "parser.tab.c"
    break;

  case 123:
#line 552 "parser.y"
                                        {incr_scope();}
#line 3316 "parser.tab.c"
    break;

  case 124:
#line 552 "parser.y"
                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3322 "parser.tab.c"
    break;

  case 125:
#line 553 "parser.y"
                              {incr_scope();}
#line 3328 "parser.tab.c"
    break;

  case 126:
#line 553 "parser.y"
                                                                                                                                        {hide_scope(); vec = {(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3334 "parser.tab.c"
    break;

  case 127:
#line 557 "parser.y"
                        {incr_scope();}
#line 3340 "parser.tab.c"
    break;

  case 128:
#line 557 "parser.y"
                                                            {current_scope.pop_back(); counts[current_scope]--;}
#line 3346 "parser.tab.c"
    break;

  case 129:
#line 557 "parser.y"
                                                                                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("LRB__" + *(yyvsp[-4].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3352 "parser.tab.c"
    break;

  case 130:
#line 558 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3358 "parser.tab.c"
    break;

  case 131:
#line 562 "parser.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3364 "parser.tab.c"
    break;

  case 132:
#line 563 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3370 "parser.tab.c"
    break;

  case 133:
#line 564 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3376 "parser.tab.c"
    break;

  case 134:
#line 565 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3382 "parser.tab.c"
    break;

  case 135:
#line 569 "parser.y"
                                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3388 "parser.tab.c"
    break;

  case 136:
#line 570 "parser.y"
                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3394 "parser.tab.c"
    break;

  case 137:
#line 571 "parser.y"
                                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3400 "parser.tab.c"
    break;

  case 138:
#line 572 "parser.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3406 "parser.tab.c"
    break;

  case 139:
#line 573 "parser.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3412 "parser.tab.c"
    break;

  case 140:
#line 574 "parser.y"
                                                                                                                                {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3418 "parser.tab.c"
    break;

  case 141:
#line 575 "parser.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3424 "parser.tab.c"
    break;

  case 142:
#line 576 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3430 "parser.tab.c"
    break;

  case 143:
#line 580 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3436 "parser.tab.c"
    break;

  case 144:
#line 581 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3442 "parser.tab.c"
    break;

  case 145:
#line 582 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3448 "parser.tab.c"
    break;

  case 146:
#line 583 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3454 "parser.tab.c"
    break;

  case 147:
#line 587 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3460 "parser.tab.c"
    break;

  case 148:
#line 588 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3466 "parser.tab.c"
    break;

  case 149:
#line 592 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3472 "parser.tab.c"
    break;

  case 150:
#line 593 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3478 "parser.tab.c"
    break;

  case 151:
#line 597 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3484 "parser.tab.c"
    break;

  case 152:
#line 598 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3490 "parser.tab.c"
    break;

  case 153:
#line 602 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3496 "parser.tab.c"
    break;

  case 154:
#line 603 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3502 "parser.tab.c"
    break;

  case 155:
#line 607 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("LocalVariableDeclarationStatement", vec);}
#line 3508 "parser.tab.c"
    break;

  case 156:
#line 611 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3514 "parser.tab.c"
    break;

  case 157:
#line 612 "parser.y"
                                                                                                                {vec = {createnode("VAR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3520 "parser.tab.c"
    break;

  case 158:
#line 613 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3526 "parser.tab.c"
    break;

  case 159:
#line 614 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("VAR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3532 "parser.tab.c"
    break;

  case 160:
#line 618 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3538 "parser.tab.c"
    break;

  case 161:
#line 619 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3544 "parser.tab.c"
    break;

  case 162:
#line 620 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3550 "parser.tab.c"
    break;

  case 163:
#line 621 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3556 "parser.tab.c"
    break;

  case 164:
#line 622 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3562 "parser.tab.c"
    break;

  case 165:
#line 623 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3568 "parser.tab.c"
    break;

  case 166:
#line 627 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3574 "parser.tab.c"
    break;

  case 167:
#line 628 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3580 "parser.tab.c"
    break;

  case 168:
#line 629 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3586 "parser.tab.c"
    break;

  case 169:
#line 630 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3592 "parser.tab.c"
    break;

  case 170:
#line 631 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3598 "parser.tab.c"
    break;

  case 171:
#line 635 "parser.y"
        {incr_scope();}
#line 3604 "parser.tab.c"
    break;

  case 172:
#line 635 "parser.y"
                                                                                                        {hide_scope(); vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3610 "parser.tab.c"
    break;

  case 173:
#line 636 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3616 "parser.tab.c"
    break;

  case 174:
#line 637 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3622 "parser.tab.c"
    break;

  case 175:
#line 638 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3628 "parser.tab.c"
    break;

  case 176:
#line 639 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3634 "parser.tab.c"
    break;

  case 177:
#line 640 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3640 "parser.tab.c"
    break;

  case 178:
#line 641 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3646 "parser.tab.c"
    break;

  case 179:
#line 642 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3652 "parser.tab.c"
    break;

  case 180:
#line 643 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3658 "parser.tab.c"
    break;

  case 181:
#line 644 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3664 "parser.tab.c"
    break;

  case 182:
#line 645 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3670 "parser.tab.c"
    break;

  case 183:
#line 646 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3676 "parser.tab.c"
    break;

  case 184:
#line 650 "parser.y"
                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 3682 "parser.tab.c"
    break;

  case 185:
#line 651 "parser.y"
                                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("COLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 3688 "parser.tab.c"
    break;

  case 186:
#line 655 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("EmptyStatement", vec);}
#line 3694 "parser.tab.c"
    break;

  case 187:
#line 659 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatement", vec);}
#line 3700 "parser.tab.c"
    break;

  case 188:
#line 663 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatementNoShortIf", vec);}
#line 3706 "parser.tab.c"
    break;

  case 189:
#line 667 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExpressionStatement", vec);}
#line 3712 "parser.tab.c"
    break;

  case 190:
#line 671 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3718 "parser.tab.c"
    break;

  case 191:
#line 672 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3724 "parser.tab.c"
    break;

  case 192:
#line 673 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3730 "parser.tab.c"
    break;

  case 193:
#line 674 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3736 "parser.tab.c"
    break;

  case 194:
#line 675 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3742 "parser.tab.c"
    break;

  case 195:
#line 676 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3748 "parser.tab.c"
    break;

  case 196:
#line 677 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3754 "parser.tab.c"
    break;

  case 197:
#line 681 "parser.y"
                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenStatement", vec);}
#line 3760 "parser.tab.c"
    break;

  case 198:
#line 685 "parser.y"
                                                                                                                                                {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatement", vec);}
#line 3766 "parser.tab.c"
    break;

  case 199:
#line 689 "parser.y"
                                                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatementNoShortIf", vec);}
#line 3772 "parser.tab.c"
    break;

  case 200:
#line 693 "parser.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchStatement", vec);}
#line 3778 "parser.tab.c"
    break;

  case 201:
#line 697 "parser.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3784 "parser.tab.c"
    break;

  case 202:
#line 698 "parser.y"
                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3790 "parser.tab.c"
    break;

  case 203:
#line 699 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3796 "parser.tab.c"
    break;

  case 204:
#line 700 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3802 "parser.tab.c"
    break;

  case 205:
#line 704 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 3808 "parser.tab.c"
    break;

  case 206:
#line 705 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 3814 "parser.tab.c"
    break;

  case 207:
#line 709 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 3820 "parser.tab.c"
    break;

  case 208:
#line 710 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 3826 "parser.tab.c"
    break;

  case 209:
#line 714 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroup", vec);}
#line 3832 "parser.tab.c"
    break;

  case 210:
#line 718 "parser.y"
                                                                                                                {vec = {createnode("CASE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 3838 "parser.tab.c"
    break;

  case 211:
#line 719 "parser.y"
                                                                                                {vec = {createnode("DEFAULT__" + *(yyvsp[-1].lex) , emp),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 3844 "parser.tab.c"
    break;

  case 212:
#line 723 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 3850 "parser.tab.c"
    break;

  case 213:
#line 724 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 3856 "parser.tab.c"
    break;

  case 214:
#line 728 "parser.y"
                                                                                                                        {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatement", vec);}
#line 3862 "parser.tab.c"
    break;

  case 215:
#line 732 "parser.y"
                                                                                                                                {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatementNoShortIf", vec);}
#line 3868 "parser.tab.c"
    break;

  case 216:
#line 736 "parser.y"
                                                                                                                                        {vec = {createnode("DO__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DoStatement", vec);}
#line 3874 "parser.tab.c"
    break;

  case 217:
#line 740 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 3880 "parser.tab.c"
    break;

  case 218:
#line 741 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 3886 "parser.tab.c"
    break;

  case 219:
#line 745 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 3892 "parser.tab.c"
    break;

  case 220:
#line 746 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 3898 "parser.tab.c"
    break;

  case 221:
#line 750 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3904 "parser.tab.c"
    break;

  case 222:
#line 751 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3910 "parser.tab.c"
    break;

  case 223:
#line 752 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3916 "parser.tab.c"
    break;

  case 224:
#line 753 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3922 "parser.tab.c"
    break;

  case 225:
#line 754 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3928 "parser.tab.c"
    break;

  case 226:
#line 755 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3934 "parser.tab.c"
    break;

  case 227:
#line 756 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3940 "parser.tab.c"
    break;

  case 228:
#line 757 "parser.y"
                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3946 "parser.tab.c"
    break;

  case 229:
#line 761 "parser.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3952 "parser.tab.c"
    break;

  case 230:
#line 762 "parser.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3958 "parser.tab.c"
    break;

  case 231:
#line 763 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3964 "parser.tab.c"
    break;

  case 232:
#line 764 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3970 "parser.tab.c"
    break;

  case 233:
#line 765 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3976 "parser.tab.c"
    break;

  case 234:
#line 766 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3982 "parser.tab.c"
    break;

  case 235:
#line 767 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3988 "parser.tab.c"
    break;

  case 236:
#line 768 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3994 "parser.tab.c"
    break;

  case 237:
#line 772 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 4000 "parser.tab.c"
    break;

  case 238:
#line 773 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 4006 "parser.tab.c"
    break;

  case 239:
#line 777 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForUpdate", vec);}
#line 4012 "parser.tab.c"
    break;

  case 240:
#line 781 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 4018 "parser.tab.c"
    break;

  case 241:
#line 782 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 4024 "parser.tab.c"
    break;

  case 242:
#line 786 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatement", vec);}
#line 4030 "parser.tab.c"
    break;

  case 243:
#line 790 "parser.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatementNoShortIf", vec);}
#line 4036 "parser.tab.c"
    break;

  case 244:
#line 794 "parser.y"
                                                                                                                {vec = {createnode("BREAK__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 4042 "parser.tab.c"
    break;

  case 245:
#line 795 "parser.y"
                                                                                                        {vec = {createnode("BREAK__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 4048 "parser.tab.c"
    break;

  case 246:
#line 799 "parser.y"
                                                                                                                {vec = {createnode("CONTINUE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 4054 "parser.tab.c"
    break;

  case 247:
#line 800 "parser.y"
                                                                                                        {vec = {createnode("CONTINUE__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 4060 "parser.tab.c"
    break;

  case 248:
#line 804 "parser.y"
                                                                                                        {vec = {createnode("RETURN__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 4066 "parser.tab.c"
    break;

  case 249:
#line 805 "parser.y"
                                                                                                                {vec = {createnode("RETURN__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 4072 "parser.tab.c"
    break;

  case 250:
#line 809 "parser.y"
                                                                                                                {vec = {createnode("THROW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ThrowStatement", vec);}
#line 4078 "parser.tab.c"
    break;

  case 251:
#line 813 "parser.y"
                                                                                                                        {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SynchronizedStatement", vec);}
#line 4084 "parser.tab.c"
    break;

  case 252:
#line 817 "parser.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4090 "parser.tab.c"
    break;

  case 253:
#line 818 "parser.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4096 "parser.tab.c"
    break;

  case 254:
#line 819 "parser.y"
                                                                                                                {vec = {createnode("TRY__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4102 "parser.tab.c"
    break;

  case 255:
#line 823 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 4108 "parser.tab.c"
    break;

  case 256:
#line 824 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 4114 "parser.tab.c"
    break;

  case 257:
#line 828 "parser.y"
                                                                                                                                        {vec = {createnode("CATCH__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4120 "parser.tab.c"
    break;

  case 258:
#line 829 "parser.y"
                                                                                                                                                {vec = {createnode("CATCH__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4126 "parser.tab.c"
    break;

  case 259:
#line 833 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4132 "parser.tab.c"
    break;

  case 260:
#line 834 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4138 "parser.tab.c"
    break;

  case 261:
#line 838 "parser.y"
                                                                                                        {vec = {createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4144 "parser.tab.c"
    break;

  case 262:
#line 839 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4150 "parser.tab.c"
    break;

  case 263:
#line 843 "parser.y"
                                                                                                {vec = {createnode("FINALLY__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Finally", vec);}
#line 4156 "parser.tab.c"
    break;

  case 264:
#line 847 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4162 "parser.tab.c"
    break;

  case 265:
#line 848 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4168 "parser.tab.c"
    break;

  case 266:
#line 852 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4174 "parser.tab.c"
    break;

  case 267:
#line 853 "parser.y"
                                                                                        {vec = {createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4180 "parser.tab.c"
    break;

  case 268:
#line 854 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4186 "parser.tab.c"
    break;

  case 269:
#line 855 "parser.y"
                                                                                                        {vec = {createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4192 "parser.tab.c"
    break;

  case 270:
#line 856 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4198 "parser.tab.c"
    break;

  case 271:
#line 857 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4204 "parser.tab.c"
    break;

  case 272:
#line 858 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4210 "parser.tab.c"
    break;

  case 273:
#line 859 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4216 "parser.tab.c"
    break;

  case 274:
#line 863 "parser.y"
                                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4222 "parser.tab.c"
    break;

  case 275:
#line 864 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4228 "parser.tab.c"
    break;

  case 276:
#line 865 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4234 "parser.tab.c"
    break;

  case 277:
#line 869 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4240 "parser.tab.c"
    break;

  case 278:
#line 870 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4246 "parser.tab.c"
    break;

  case 279:
#line 871 "parser.y"
                                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4252 "parser.tab.c"
    break;

  case 280:
#line 872 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4258 "parser.tab.c"
    break;

  case 281:
#line 876 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4264 "parser.tab.c"
    break;

  case 282:
#line 877 "parser.y"
                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-2].lex) , emp),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4270 "parser.tab.c"
    break;

  case 283:
#line 881 "parser.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4276 "parser.tab.c"
    break;

  case 284:
#line 882 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4282 "parser.tab.c"
    break;

  case 285:
#line 886 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4288 "parser.tab.c"
    break;

  case 286:
#line 887 "parser.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4294 "parser.tab.c"
    break;

  case 287:
#line 888 "parser.y"
                                                                                                                {vec = {(yyvsp[-4].str_val),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4300 "parser.tab.c"
    break;

  case 288:
#line 889 "parser.y"
                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4306 "parser.tab.c"
    break;

  case 289:
#line 890 "parser.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4312 "parser.tab.c"
    break;

  case 290:
#line 891 "parser.y"
                                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4318 "parser.tab.c"
    break;

  case 291:
#line 892 "parser.y"
                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4324 "parser.tab.c"
    break;

  case 292:
#line 893 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-7].str_val),createnode("DOT__" + *(yyvsp[-6].lex) , emp),createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4330 "parser.tab.c"
    break;

  case 293:
#line 897 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4336 "parser.tab.c"
    break;

  case 294:
#line 898 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4342 "parser.tab.c"
    break;

  case 295:
#line 902 "parser.y"
                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4348 "parser.tab.c"
    break;

  case 296:
#line 903 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4354 "parser.tab.c"
    break;

  case 297:
#line 904 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4360 "parser.tab.c"
    break;

  case 298:
#line 905 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4366 "parser.tab.c"
    break;

  case 299:
#line 906 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4372 "parser.tab.c"
    break;

  case 300:
#line 907 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4378 "parser.tab.c"
    break;

  case 301:
#line 911 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4384 "parser.tab.c"
    break;

  case 302:
#line 912 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4390 "parser.tab.c"
    break;

  case 303:
#line 916 "parser.y"
                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DimExpr", vec);}
#line 4396 "parser.tab.c"
    break;

  case 304:
#line 920 "parser.y"
                                                                                                {vec = {createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4402 "parser.tab.c"
    break;

  case 305:
#line 921 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4408 "parser.tab.c"
    break;

  case 306:
#line 925 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Expression", vec);}
#line 4414 "parser.tab.c"
    break;

  case 307:
#line 929 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4420 "parser.tab.c"
    break;

  case 308:
#line 930 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4426 "parser.tab.c"
    break;

  case 309:
#line 934 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Assignment", vec);}
#line 4432 "parser.tab.c"
    break;

  case 310:
#line 938 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4438 "parser.tab.c"
    break;

  case 311:
#line 939 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4444 "parser.tab.c"
    break;

  case 312:
#line 940 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4450 "parser.tab.c"
    break;

  case 313:
#line 944 "parser.y"
                                                                                                {vec = {createnode("EQUALTO__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4456 "parser.tab.c"
    break;

  case 314:
#line 945 "parser.y"
                                                                                        {vec = {createnode("PLUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4462 "parser.tab.c"
    break;

  case 315:
#line 946 "parser.y"
                                                                                                {vec = {createnode("MINUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4468 "parser.tab.c"
    break;

  case 316:
#line 947 "parser.y"
                                                                                        {vec = {createnode("MULTET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4474 "parser.tab.c"
    break;

  case 317:
#line 948 "parser.y"
                                                                                        {vec = {createnode("DIVET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4480 "parser.tab.c"
    break;

  case 318:
#line 949 "parser.y"
                                                                                        {vec = {createnode("ANDET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4486 "parser.tab.c"
    break;

  case 319:
#line 953 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 4492 "parser.tab.c"
    break;

  case 320:
#line 954 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("QUEST__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 4498 "parser.tab.c"
    break;

  case 321:
#line 958 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TernaryAction", vec);}
#line 4504 "parser.tab.c"
    break;

  case 322:
#line 962 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 4510 "parser.tab.c"
    break;

  case 323:
#line 963 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("OR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 4516 "parser.tab.c"
    break;

  case 324:
#line 967 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 4522 "parser.tab.c"
    break;

  case 325:
#line 968 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("AND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 4528 "parser.tab.c"
    break;

  case 326:
#line 972 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 4534 "parser.tab.c"
    break;

  case 327:
#line 973 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 4540 "parser.tab.c"
    break;

  case 328:
#line 977 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 4546 "parser.tab.c"
    break;

  case 329:
#line 978 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("POW__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 4552 "parser.tab.c"
    break;

  case 330:
#line 982 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 4558 "parser.tab.c"
    break;

  case 331:
#line 983 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITAND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 4564 "parser.tab.c"
    break;

  case 332:
#line 987 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4570 "parser.tab.c"
    break;

  case 333:
#line 988 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("EQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4576 "parser.tab.c"
    break;

  case 334:
#line 989 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("NEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4582 "parser.tab.c"
    break;

  case 335:
#line 993 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4588 "parser.tab.c"
    break;

  case 336:
#line 994 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4594 "parser.tab.c"
    break;

  case 337:
#line 995 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4600 "parser.tab.c"
    break;

  case 338:
#line 996 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4606 "parser.tab.c"
    break;

  case 339:
#line 997 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4612 "parser.tab.c"
    break;

  case 340:
#line 998 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4618 "parser.tab.c"
    break;

  case 341:
#line 1002 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("INSTANCEOF__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceofExpression", vec);}
#line 4624 "parser.tab.c"
    break;

  case 342:
#line 1006 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4630 "parser.tab.c"
    break;

  case 343:
#line 1007 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEFTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4636 "parser.tab.c"
    break;

  case 344:
#line 1008 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("RIGHTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4642 "parser.tab.c"
    break;

  case 345:
#line 1009 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("THREEGREAT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4648 "parser.tab.c"
    break;

  case 346:
#line 1013 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4654 "parser.tab.c"
    break;

  case 347:
#line 1014 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4660 "parser.tab.c"
    break;

  case 348:
#line 1015 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4666 "parser.tab.c"
    break;

  case 349:
#line 1019 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4672 "parser.tab.c"
    break;

  case 350:
#line 1020 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("MULT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4678 "parser.tab.c"
    break;

  case 351:
#line 1021 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DIVIDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4684 "parser.tab.c"
    break;

  case 352:
#line 1022 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MODULO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4690 "parser.tab.c"
    break;

  case 353:
#line 1026 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4696 "parser.tab.c"
    break;

  case 354:
#line 1027 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4702 "parser.tab.c"
    break;

  case 355:
#line 1028 "parser.y"
                                                                                                        {vec = {createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4708 "parser.tab.c"
    break;

  case 356:
#line 1029 "parser.y"
                                                                                                        {vec = {createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4714 "parser.tab.c"
    break;

  case 357:
#line 1030 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4720 "parser.tab.c"
    break;

  case 358:
#line 1034 "parser.y"
                                                                                                                {vec = {createnode("INCREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreIncrementExpression", vec);}
#line 4726 "parser.tab.c"
    break;

  case 359:
#line 1038 "parser.y"
                                                                                                                {vec = {createnode("DECREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreDecrementExpression", vec);}
#line 4732 "parser.tab.c"
    break;

  case 360:
#line 1042 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4738 "parser.tab.c"
    break;

  case 361:
#line 1043 "parser.y"
                                                                                                        {vec = {createnode("TILDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4744 "parser.tab.c"
    break;

  case 362:
#line 1044 "parser.y"
                                                                                                        {vec = {createnode("NOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4750 "parser.tab.c"
    break;

  case 363:
#line 1045 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4756 "parser.tab.c"
    break;

  case 364:
#line 1046 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4762 "parser.tab.c"
    break;

  case 365:
#line 1050 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4768 "parser.tab.c"
    break;

  case 366:
#line 1051 "parser.y"
                                                    {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4774 "parser.tab.c"
    break;

  case 367:
#line 1052 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4780 "parser.tab.c"
    break;

  case 368:
#line 1053 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4786 "parser.tab.c"
    break;

  case 369:
#line 1057 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("INCREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostIncrementExpression", vec);}
#line 4792 "parser.tab.c"
    break;

  case 370:
#line 1061 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("DECREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostDecrementExpression", vec);}
#line 4798 "parser.tab.c"
    break;

  case 371:
#line 1065 "parser.y"
                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 4804 "parser.tab.c"
    break;

  case 372:
#line 1066 "parser.y"
                                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 4810 "parser.tab.c"
    break;

  case 373:
#line 1070 "parser.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchExpression", vec);}
#line 4816 "parser.tab.c"
    break;


#line 4820 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1073 "parser.y"


typedef long long ll;
set<char> escapes = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\'', '\"', '\?', '\\'};


void dfs(Node* root){
	if(!root){
		yyerror("Error");
		return;
	}
    cout<<"\t"<<(ll)root<<"[label=\"";
    for(char c:root->val){
        if(escapes.find(c)!=escapes.end()){
            cout<<"\\";
        }
        cout<<c;
    }cout<<"\"];\n";
    for(auto child:root->children){
        cout<<"\t"<<(ll)root<<" -> "<<(ll)child<<";\n";
    }
    for(auto child:root->children){
        dfs(child);
    }
}


void make_ast(Node* root, Node* par, int idx){
	if((!root) || (!par)){
		yyerror("Error");
		return;
	}
    if(root!=par && root->children.size()==1){
        par->children[idx] = root->children[0];
        free(root);
        make_ast(par->children[idx], par, idx);
    }else{
        for(int i=0;i<root->children.size();i++){
            make_ast(root->children[i], root, i);
        }
    }
}

set<string> to_do = {"INSTANCEOF","EQUALTO","PLUSET","MINUSET","MULTET","DIVET","ANDET","LT","GT","LEQ","GEQ","OR","AND","BITOR","BITAND","POW","EQ","NEQ","LEFTSHIFT","RIGHTSHIFT","THREEGREAT","PLUS","MINUS","MULT","DIVIDE","MODULO","TILDE","NOT","QUEST","COLON"};

string extractor(string s){
    string t="";
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='_' && s[i+1]=='_'){
            break;
        }
        t+=s[i];
    }
    return t;
}

bool revise_ast(Node* root, Node* par, int idx){
	if((!root) || (!par)){
		yyerror("Error");
		return false;
	}
    if(root->children.size()==0){
        if(to_do.find(extractor(root->val))!=to_do.end()){
            par->val = root->val;
            (par->children).erase((par->children).begin()+idx);
            free(root);
            return true;
        }
    }else{
        for(int i=0;i<root->children.size();i++){
            if(revise_ast(root->children[i], root, i)){
                i--;
            }
        }
    }
    return false;
}

int main(int argc, char* argv[]){
    try{
		string inp = argv[1];
		string outp = argv[2];
        freopen(inp.c_str(), "r", stdin);
        freopen(outp.c_str(), "w", stdout);
        yyparse();
        cout<<"strict digraph {\n";
        make_ast(root, root, 0);
        revise_ast(root, root, 0);
        dfs(root);
        cout<<"}\n";
        for(auto i: sym_table){
            for(auto j: i.second.scope){
                cout << i.first << " ";
                for(auto k: j){
                    cout << k << " ";
                }
                cout << endl;
            }
        }
    }catch (...){
        cerr << "Compilation Error\n";
    }
    return 0;
}
