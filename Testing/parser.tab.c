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
using namespace std;
int yyerror(const char* s)
{
    printf("ERROR\n");
    return 0;
}
extern int yylineno;
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

#line 101 "parser.tab.c"

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
#line 33 "parser.y"

    struct Node* str_val;
    std::string* lex;

#line 251 "parser.tab.c"

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3760

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  139
/* YYNRULES -- Number of rules.  */
#define YYNRULES  356
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  671

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
       0,   275,   275,   279,   283,   287,   291,   292,   296,   297,
     301,   302,   306,   307,   308,   312,   313,   317,   321,   325,
     326,   330,   331,   335,   336,   340,   341,   342,   343,   344,
     345,   346,   347,   351,   352,   356,   357,   361,   362,   366,
     367,   368,   372,   373,   377,   378,   382,   386,   390,   391,
     392,   393,   397,   398,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   415,   419,   420,   424,   425,   429,
     430,   431,   432,   436,   437,   438,   442,   443,   447,   448,
     452,   453,   457,   458,   462,   463,   467,   471,   472,   473,
     474,   475,   476,   477,   478,   482,   483,   484,   488,   489,
     493,   494,   498,   502,   503,   507,   508,   512,   516,   520,
     521,   522,   523,   527,   528,   532,   533,   534,   535,   539,
     540,   541,   542,   543,   544,   545,   546,   550,   551,   552,
     553,   557,   558,   562,   563,   567,   568,   572,   573,   577,
     581,   582,   583,   584,   588,   589,   590,   591,   592,   593,
     597,   598,   599,   600,   601,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   620,   621,   625,
     629,   633,   637,   641,   642,   643,   644,   645,   646,   647,
     651,   655,   659,   663,   667,   668,   669,   670,   674,   675,
     679,   680,   684,   688,   689,   693,   694,   698,   702,   706,
     710,   711,   715,   716,   720,   721,   722,   723,   724,   725,
     726,   727,   731,   732,   733,   734,   735,   736,   737,   738,
     742,   743,   747,   751,   752,   756,   760,   764,   765,   769,
     770,   774,   775,   779,   783,   787,   788,   789,   793,   794,
     798,   799,   803,   804,   808,   809,   813,   817,   818,   822,
     823,   824,   825,   826,   827,   828,   829,   833,   834,   835,
     839,   840,   841,   842,   846,   847,   848,   852,   853,   857,
     858,   859,   860,   861,   862,   863,   864,   868,   869,   873,
     874,   875,   876,   877,   878,   882,   883,   887,   891,   892,
     896,   900,   901,   905,   909,   910,   911,   915,   916,   917,
     918,   919,   920,   924,   925,   929,   933,   934,   938,   939,
     943,   944,   948,   949,   953,   954,   958,   959,   960,   964,
     965,   966,   967,   968,   969,   973,   977,   978,   979,   980,
     984,   985,   986,   990,   991,   992,   993,   997,   998,   999,
    1000,  1001,  1005,  1009,  1013,  1014,  1015,  1016,  1017,  1021,
    1022,  1023,  1027,  1031,  1035,  1036,  1040
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
  "$accept", "Identifier", "Literal", "IntegralType", "FloatingPointType",
  "Name", "Names", "CompilationUnit", "OrdinaryCompilationUnit",
  "TopLevelClassOrInterfaceDeclarations", "ModularCompilationUnit",
  "PackageDeclaration", "TopLevelClassOrInterfaceDeclaration",
  "ModuleDeclaration", "ModuleDirectives", "ModuleDirective",
  "RequiresModifiers", "RequiresModifier", "Type", "PrimitiveType",
  "ReferenceType", "ArrayType", "ClassOrInterfaceType", "ClassType",
  "ClassDeclaration", "Modifiers", "Modifier", "ClassExtends", "ClassBody",
  "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "VariableDeclaratorList",
  "VariableDeclarator", "VariableDeclaratorId", "VariableInitializer",
  "MethodDeclaration", "MethodHeader", "MethodDeclarator",
  "FormalParameterList", "FormalParameter", "Throws", "ClassTypeList",
  "MethodBody", "InstanceInitializer", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorDeclarator", "ConstructorBody",
  "ExplicitConstructorInvocation", "ArrayInitializer",
  "VariableInitializerList", "Block", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration",
  "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "AssertStatement",
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

#define YYPACT_NINF (-499)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-352)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2994,  -499,    96,  -499,    96,  -499,    96,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,   210,  -499,   509,  -499,   509,
    -499,  -499,  -499,   458,  -499,  -499,   319,  -499,   318,   157,
    -499,  -499,   509,    96,  -499,    96,   826,   182,  -499,    96,
       0,  -499,   319,   233,  -499,  -499,  -499,  -499,  2279,  -499,
    -499,   193,    96,   232,  -499,  -499,    96,   234,  -499,  -499,
     234,  -499,  1718,  1498,  -499,  -499,  -499,  -499,   153,  -499,
    -499,  -499,     9,  -499,  -499,  -499,    96,    96,    96,  -499,
     139,    96,   141,  -499,   182,  -499,  3678,    23,    64,  3678,
    3075,   274,   317,  3678,  -499,  3678,   321,  -499,  1902,  -499,
     327,   351,   358,  -499,  3678,   193,    96,   370,   401,  -499,
     392,    96,  2888,  -499,  2365,  -499,  -499,   345,  -499,  -499,
    -499,  -499,  -499,  -499,   347,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   408,
     378,    30,  -499,   400,   657,    74,  -499,  -499,   734,  -499,
    -499,     5,    80,   251,  -499,   402,    21,  2949,   402,    56,
    -499,   306,    21,   381,   411,   411,    96,    96,     9,  -499,
    -499,  -499,  -499,  -499,  2451,    96,   424,  -499,    58,    71,
       3,  -499,  -499,   169,   139,  -499,   177,  -499,  -499,  -499,
     321,  3678,  3678,  3678,   422,  3678,   158,  -499,  -499,    26,
    -499,  -499,  -499,   256,   463,   461,   417,   465,   191,   366,
    -499,   200,     7,   260,  -499,  -499,  -499,  -499,     5,  -499,
    -499,  -499,  -499,  -499,   409,  -499,   418,   158,  -499,  -499,
    -499,   358,   396,  2068,  3678,  -499,   419,   449,   384,  -499,
     421,    96,  3678,  3678,   425,   332,  -499,   482,  3678,  3075,
     248,  3176,  3678,   482,    96,    96,  -499,  -499,  -499,  -499,
     266,  3678,  -499,  -499,  -499,  -499,  -499,  -499,  3678,  -499,
    -499,  2954,   428,  -499,  -499,    96,  3042,    12,  -499,    96,
    -499,  3221,   429,  -499,  -499,   430,    21,    62,    21,   424,
    -499,  -499,   261,   462,   395,  2537,  2623,   484,  -499,   489,
    -499,  -499,    96,  -499,    96,    96,  -499,   181,  -499,  -499,
     179,   436,  -499,  -499,  -499,  3678,  -499,  3678,  -499,  3678,
    3678,  3678,  3678,  3678,  3678,  3678,  3678,  3678,  3678,   321,
    3678,  3678,  3678,  3678,  3678,  3678,  3678,  3678,  3678,  3678,
    -499,  -499,   466,  3264,   499,  -499,   441,   510,   453,  -499,
    3307,   449,  -499,   353,  3321,   449,   353,  -499,   485,   456,
     468,  -499,   490,   193,   332,  -499,  -499,   470,  -499,    96,
     512,  -499,   999,  -499,  -499,    47,  -499,   464,   482,   482,
     502,  -499,   479,  -499,  -499,    95,  -499,   508,    96,  3042,
    -499,  -499,  1167,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  3364,  3378,   309,  -499,  2709,  -499,   237,    96,
     233,    79,   131,   147,  -499,  3678,  1214,   481,   487,   463,
     540,  -499,   461,   417,   465,   191,   366,   366,   200,   200,
     234,  -499,   200,   200,     7,     7,     7,   260,   260,  -499,
    -499,  -499,  3678,   414,   493,  3678,  3421,   658,  3148,   483,
    -499,   411,  -499,   182,   111,   411,  -499,  3464,   519,   193,
     700,  -499,  -499,  -499,  3075,   520,    96,  3678,  -499,  -499,
    3478,  -499,  -499,   508,  -499,   495,  -499,  -499,   123,   494,
     127,   500,   135,   284,  -499,   525,  -499,    96,  -499,  -499,
    -499,  -499,  -499,   519,  -499,  3678,   504,  3075,   506,   510,
     599,   507,   766,   516,  -499,   536,   537,   538,   571,  -499,
     567,   568,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
     182,  -499,   154,   140,  -499,  -499,   334,   700,    96,  -499,
     549,  -499,  -499,   160,  -499,  1344,  -499,  -499,   521,  -499,
     522,  3521,  3535,   233,  -499,  -499,   523,  -499,  3075,  3075,
     529,  3075,  3075,   531,   875,  2871,  3678,  3678,  3148,  3075,
    -499,  -499,  3678,   589,  -499,   152,  1976,  -499,  -499,    96,
     598,    96,   178,  3578,  -499,  -499,  -499,  -499,  -499,   541,
     166,   544,   170,  -499,  -499,  -499,  3075,  -499,  -499,  3075,
    3075,   539,  3592,   597,   547,   542,   550,  -499,  -499,   338,
    -499,  -499,  -499,  2190,  -499,  -499,  2795,  -499,  -499,    96,
     213,   193,  -499,   174,  -499,   553,  -499,   555,  -499,  -499,
    -499,  3075,   925,   559,  3678,  3635,  3148,  3148,  -499,  3678,
    -499,  -499,   193,  -499,  -499,  -499,  -499,  -499,  3148,   551,
    1056,   552,  1083,   564,   615,  -499,  -499,  -499,  -499,  3148,
    3148,   569,  3148,  3148,   572,  1210,  3148,  -499,  -499,  3148,
    -499,  -499,  3148,  3148,   573,  -499,  -499,  -499,  -499,  3148,
    -499
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    58,     0,    59,     0,    60,     0,    56,    55,    54,
      20,    57,    61,    62,    63,     0,    10,    13,    11,    14,
      15,    17,    19,     0,    52,     2,     0,     6,     0,     0,
       1,    16,    12,     0,    53,     0,     0,     0,    51,     0,
       0,    18,     0,    47,    64,    41,     5,     4,     0,    65,
      75,    57,     0,     6,    39,    40,     0,    37,    38,    43,
      42,    46,     0,     0,    67,    69,    73,    74,     0,    72,
      70,    71,     0,   107,    49,     7,     0,     0,     0,    22,
       0,     0,     0,    23,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,   134,     0,   169,
       0,     0,    61,   250,     0,     0,     0,     0,     6,   249,
     294,     0,     0,   155,     0,   136,   137,     0,   138,   144,
     158,   156,   145,   157,     0,   146,   147,   159,   148,   160,
     149,   200,   201,   161,   162,   163,   165,   164,   166,   349,
     247,   253,   257,   254,   255,   256,   248,   173,     0,   174,
     175,     0,   176,   177,   108,     0,    94,     0,    82,     0,
      78,    80,    90,     0,    44,    45,     0,     0,     0,    66,
      68,   106,    86,   105,     0,     0,     0,   112,     0,     0,
       0,    36,    35,     0,     0,    33,     0,    21,    24,    48,
       0,     0,     0,     0,     0,     0,   294,   253,   256,     0,
     290,   292,   291,   303,   306,   308,   310,   312,   314,   316,
     324,   319,   326,   330,   333,   337,   338,   341,   344,   350,
     351,   347,   348,   228,     0,   230,     0,     0,   254,   255,
     343,     0,     0,     0,     0,   342,     0,     0,     0,   231,
       0,     0,     0,     0,     0,     0,    82,   141,     0,     0,
       0,     0,     0,   140,     0,     0,   133,   135,   139,   172,
       0,     0,   302,   301,   297,   299,   300,   298,     0,   353,
     352,     0,     0,    92,   114,     0,     0,     0,    98,     0,
      77,     0,     0,    88,   288,     0,    93,     0,    89,     0,
     111,   118,     0,   250,   294,     0,     0,   349,   103,   102,
     110,    28,     0,    29,     0,     0,    26,     0,    34,    31,
       0,     0,   340,   346,   339,     0,   345,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,   229,     0,     0,   221,   224,     0,   220,     0,   252,
       0,   279,   286,     0,     0,   281,     0,   232,   265,     0,
       0,   233,     0,     0,   235,   239,   236,     0,   170,     0,
       0,   251,   266,   258,   269,     0,   277,     0,   143,   142,
     264,   259,     0,   293,    96,     0,    97,   100,     0,     0,
     113,    79,     0,    81,    85,    84,    83,   289,    91,    76,
      87,   109,     0,     0,     0,   117,     0,   116,     0,     0,
       8,     0,     0,     0,    25,     0,     0,     0,     0,   307,
       0,   304,   309,   311,   313,   315,   317,   318,   323,   321,
       0,   325,   322,   320,   327,   328,   329,   332,   331,   335,
     336,   334,     0,     0,     0,     0,     0,     0,     0,     0,
     285,   280,   283,   263,     0,   282,   284,     0,     0,     0,
       0,   246,   238,   237,     0,     0,     0,     0,   270,   267,
       0,   268,    95,   101,    99,     0,   127,   131,     0,     0,
       0,     0,     0,     0,   115,     0,   104,     0,    27,    30,
      32,   354,   355,     0,   168,     0,     0,     0,     0,   222,
       0,     0,     0,     0,   223,     0,     0,     0,     6,   180,
       0,   144,   151,   152,   153,   154,   202,   203,   287,   261,
     260,   273,     0,     0,   183,   234,   242,     0,     0,   197,
       0,   278,   271,     0,   129,     0,   128,   122,     0,   120,
       0,     0,     0,     9,   356,   305,     0,   211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     262,   274,     0,     0,   187,     0,     0,   188,   190,     0,
     243,     0,     0,     0,   272,   130,   132,   121,   119,     0,
       0,     0,     0,   199,   207,   209,     0,   225,   210,     0,
       0,     0,     0,   221,     0,     0,     0,   171,   181,     0,
     195,   194,   186,     0,   189,   185,   192,   191,   244,     0,
       0,     0,   275,     0,   123,     0,   125,     0,   205,   206,
     208,     0,     0,     0,     0,     0,     0,     0,   193,     0,
     184,   245,     0,   240,   276,   124,   126,   204,     0,     0,
       0,     0,     0,     0,     0,   198,   196,   241,   219,     0,
       0,     0,     0,     0,     0,     0,     0,   215,   217,     0,
     226,   218,     0,     0,     0,   182,   213,   214,   216,     0,
     212
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -499,    -2,  -499,  -499,  -499,    43,   105,  -499,  -499,   620,
    -499,  -499,   301,  -499,  -499,   563,  -499,   471,    -4,   -83,
    -169,  -499,   -88,   -26,  -499,    19,   -20,   614,   -32,  -499,
     595,  -499,  -499,   -67,   380,  -263,  -374,  -499,  -499,   -33,
     407,   277,   -93,  -499,  -499,  -499,  -499,  -499,   601,  -133,
    -499,    81,  -499,   -35,   -31,  -110,  -499,  -231,   965,    57,
    -364,  -499,  -499,  -499,  -499,  -499,  -111,  -499,  -499,  -499,
    -499,   180,  -499,   106,   114,  -300,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,   132,  -426,  -226,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,   322,  -498,  -499,   324,
     515,  -499,   221,  -230,  1552,  1573,   385,  -330,  -499,   452,
      45,   -54,    73,  -499,  1681,  -499,  -499,  -481,  -499,  -499,
     374,   375,   377,   379,   387,   155,  -499,   146,   108,   148,
     -78,   517,   681,   289,   818,  1046,  1183,  -499,  -499
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,   109,    54,    55,   196,   411,    15,    16,    17,
      18,    19,    20,    21,    82,    83,   184,   185,   111,    57,
      58,    59,    60,    61,    22,   112,    24,    37,    38,    63,
      64,    65,    66,   159,   160,   161,   393,    67,    68,   156,
     277,   278,   176,   299,   172,    69,    70,    71,    72,   177,
     295,   394,   478,   113,   606,   115,   116,   117,   118,   510,
     119,   120,   121,   122,   512,   123,   124,   125,   126,   513,
     127,   524,   565,   566,   567,   568,   599,   128,   514,   129,
     130,   515,   131,   516,   346,   498,   499,   132,   517,   133,
     134,   135,   136,   137,   138,   364,   365,   528,   570,   366,
     139,   140,   197,   142,   143,   144,   198,   375,   146,   351,
     352,   164,   376,   200,   147,   148,   268,   202,   421,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    73,   344,    34,   257,    74,   165,   347,   238,    44,
      85,   230,   387,   237,   545,   235,   154,   114,   477,    23,
     373,   311,   269,   162,   454,    39,    76,   389,    73,   571,
     381,    42,    56,   173,    53,   290,    23,    75,    23,   247,
     317,   270,    34,   300,   253,  -179,   108,    28,   174,    29,
     155,    23,   189,   335,   158,    62,    77,    25,   167,    56,
      53,    53,   467,   273,    78,   272,   336,    79,    80,   283,
     245,   279,   480,   482,   550,   289,   553,   279,    43,    43,
      39,   600,    62,   390,   511,   224,   226,    81,   108,  -178,
     175,   110,    34,    39,   487,   305,   223,  -350,    25,   318,
     287,  -179,   175,  -179,   246,    43,    43,   310,   255,   246,
     389,   631,   108,   312,   313,   314,  -350,   316,   468,   178,
     179,   180,   345,   183,   186,   473,   467,   522,   591,   280,
      25,   301,   227,   286,   288,   399,   227,   225,   535,    43,
     533,   302,   467,   296,   303,  -178,   487,  -178,   646,   298,
     467,   562,   488,   275,   304,    43,   401,   110,   563,   199,
     431,   576,   487,   562,   155,   158,   472,    76,   236,   467,
     563,   240,   108,    25,   373,   467,   276,   244,   381,    39,
     250,   467,   520,   353,   356,   467,   257,   378,   379,   467,
     536,    39,    48,   398,   511,   400,   639,    77,   538,    39,
      43,   251,   252,    39,   489,    78,   540,   564,   187,    80,
      30,   580,   582,   181,   651,   325,   654,   294,    43,   602,
     490,    36,   282,   163,   182,   561,   171,   307,    81,   664,
      41,   574,    48,    43,   227,   227,   227,   615,   227,   358,
     332,   617,   306,   613,   326,   634,   430,   108,   372,   611,
     309,   415,   246,   246,   414,    39,    34,   282,   380,   439,
     440,   441,   511,   511,   406,   572,   607,   275,  -351,   141,
     333,    25,   388,   246,   511,   157,   110,   246,   163,   334,
     337,   465,    25,   241,   632,   511,   511,  -351,   511,   511,
     276,   369,   511,   108,   108,   511,   257,   451,   511,   511,
      25,   455,   369,   607,   402,   511,   466,   348,   610,   338,
     339,   141,   485,   319,    43,   359,   360,   233,    31,    43,
     369,   367,   320,   370,   593,   377,   371,   541,   461,   347,
      45,   281,   345,    31,   382,   141,   504,   491,   110,   110,
      39,   383,   569,    25,   362,   410,    35,   410,   410,   241,
     282,    46,   628,   629,   395,    25,    39,    40,    36,    47,
     234,   363,   227,   369,   227,   227,   227,   227,   227,   227,
     227,   227,    43,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   486,   483,   275,   246,   371,   417,   345,
     418,   345,   392,   420,   242,   141,   450,   285,   327,   328,
     450,   243,   372,   329,   108,  -295,   380,   330,   276,   412,
     413,   331,    43,   248,   250,   249,   444,   404,   258,  -295,
     259,   519,   261,   449,   525,  -295,   -47,   354,   350,   -47,
     260,    89,    43,   145,   452,   251,   252,   456,   251,   252,
     434,   435,   436,   345,   345,   271,   508,  -295,    25,   110,
      93,  -295,    43,   284,   141,   285,    94,    95,   227,   227,
    -295,     1,   108,   174,   530,   395,   315,   321,    96,   322,
     141,    33,   324,   428,   429,   145,   432,   433,   323,   527,
     426,   427,   340,   437,   438,   497,     3,   342,   560,   100,
     349,   341,   103,   350,   357,   108,   257,   279,   361,   145,
     386,   396,   397,   526,   409,   403,   408,    34,   416,   442,
       5,   345,     1,   445,   446,   496,   141,   141,   501,   503,
       7,     8,     2,     9,   448,   447,   246,   458,   457,   345,
     543,   345,    11,   460,   466,    12,   469,     3,   227,   459,
     531,   464,    13,   608,   345,   470,   108,   108,    14,   108,
     108,   471,   282,   493,   495,   518,   508,   108,   523,   145,
     494,     5,   534,   354,   108,   149,   500,   537,   542,   246,
     526,     7,     8,   539,     9,   546,   633,   548,   551,   555,
     556,   557,    10,    11,   108,   558,    12,   108,   108,   554,
     559,  -150,   573,    13,   577,   578,   583,   647,   110,    14,
     586,   108,   589,   601,   108,   227,   609,   149,   395,   110,
     621,   624,    43,   626,   614,   597,    89,   616,   145,   108,
     625,   627,   649,   652,   508,   508,   635,   141,   636,   595,
     596,   149,   640,    25,   145,    93,   508,   655,   656,    32,
     659,    94,    95,   662,   669,   188,   110,   508,   508,   110,
     508,   508,   526,    96,   508,   308,    84,   508,   170,   391,
     508,   508,  -296,   168,   141,   623,   474,   508,   141,   141,
     549,   603,   227,   544,   100,    89,  -296,   103,   385,   604,
     145,   145,  -296,   644,   645,   141,   462,   594,   463,   297,
     355,   149,    25,   419,    93,   648,   422,   641,   643,   423,
      94,    95,   424,     1,  -296,   492,   657,   658,  -296,   660,
     661,   425,    96,   665,     0,     0,   666,  -296,   141,   667,
     668,   141,     0,   141,     0,     0,   670,     0,     3,   150,
       0,     0,     0,   100,    25,     0,   103,     0,     0,   262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     149,     0,     5,   263,     0,     0,     0,     0,     0,   264,
       0,     0,     7,     8,     0,     9,   149,     0,     0,   141,
     141,   150,   141,   141,    11,   141,   141,    12,     0,   141,
     141,   265,     0,    89,    13,   266,     0,   141,     0,     0,
      14,   145,     0,     0,   267,   150,     0,     0,     0,     0,
      25,     0,    93,     0,     0,     0,     0,   141,    94,    95,
     141,   141,   149,   149,     0,     0,     0,     0,     0,     0,
      96,     0,     0,     0,   141,     0,     0,   141,   145,     1,
       0,     0,   145,   145,     0,    45,     0,   552,     0,     0,
       0,   100,   141,   141,   103,     0,     0,   141,   141,   145,
       0,     0,     0,     0,     3,   150,    46,     0,     0,   141,
      25,   141,     0,   141,    47,    48,   151,     0,     0,     0,
     141,   141,     0,   141,   141,     0,   141,   141,     5,     0,
     141,     0,   145,   141,   141,   145,     0,   145,     7,     8,
     141,     9,    89,    49,     0,     0,     0,     0,     0,    50,
      51,     0,     0,    12,     0,     0,     0,     0,   151,    25,
      13,    93,     0,     0,   150,    52,    14,    94,    95,     0,
       0,     0,     0,   149,     0,     0,     0,     0,     0,    96,
     150,     0,   151,   145,   145,     0,   145,   145,     0,   145,
     145,     0,    89,   145,   145,     0,   590,     0,     0,     0,
     100,   145,     0,   103,     0,     0,     0,     0,     0,    25,
     149,    93,     0,     0,   149,   149,     0,    94,    95,     0,
       0,   145,     0,     0,   145,   145,   150,   150,     0,    96,
       0,   149,     0,     0,     0,     0,     0,     0,   145,     0,
       0,   145,   151,     0,     0,     0,   638,     0,     0,     0,
     100,     0,     0,   103,    -7,     0,   145,   145,     0,     0,
       0,   145,   145,     0,   149,     0,     0,   149,    -7,   149,
       0,    -7,     0,   145,    -7,   145,     0,   145,     0,     0,
       0,     0,     0,    -7,   145,   145,     0,   145,   145,     0,
     145,   145,    -7,    -7,   145,     0,    -7,   145,   145,     0,
      -7,   151,     0,     0,   145,   232,     0,     0,     0,    -7,
       0,     0,     0,     0,     0,   149,   149,   151,   149,   149,
       0,   149,   149,    89,     0,   149,   149,     0,     0,     0,
       0,     0,     0,   149,     0,     0,     0,   150,     0,     0,
      25,     0,    93,     0,   152,     0,     0,     0,    94,    95,
      89,     0,     0,   149,     0,     0,   149,   149,     0,     0,
      96,     0,     0,   151,   151,     0,     0,    25,     0,    93,
     149,     0,     0,   149,   150,    94,    95,   650,   150,   150,
       0,   100,     0,     0,   103,     0,   152,    96,   149,   149,
       0,     0,     0,   149,   149,   150,     0,     0,     0,     0,
       0,     0,     0,     0,   653,   149,     0,   149,   100,   149,
     152,   103,     0,     0,     0,     0,   149,   149,     0,   149,
     149,     0,   149,   149,     0,     0,   149,     0,   150,   149,
     149,   150,   475,   150,    89,     0,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    93,     0,     0,   392,     0,     0,    94,
      95,   190,     0,   191,   368,     0,     0,     0,     0,     0,
     152,    96,   192,     0,   151,     0,   193,    89,     0,   150,
     150,   153,   150,   150,   476,   150,   150,     0,     0,   150,
     150,     0,   100,   194,    25,   103,    93,   150,    25,   195,
       0,     0,    94,    95,     0,     0,    94,    95,   190,     0,
       0,   151,     0,     0,    96,   151,   151,   150,    96,   192,
     150,   150,     0,   153,     0,     0,     0,     0,     0,   152,
       0,   663,   151,     0,   150,   100,     0,   150,   103,   100,
     194,     0,   103,     0,     0,   152,   195,   153,     0,     0,
       0,     0,   150,   150,     0,     0,     0,   150,   150,     0,
       0,     0,     0,     0,     0,   151,     0,     0,   151,   150,
     151,   150,     0,   150,     0,     0,     0,     0,     0,     0,
     150,   150,     0,   150,   150,     0,   150,   150,     0,     0,
     150,   152,   152,   150,   150,     0,     0,     0,     0,     0,
     150,     0,     0,     0,     0,     0,     0,   153,     0,     0,
       0,    89,     0,     0,     0,     0,   151,   151,     0,   151,
     151,     0,   151,   151,     0,     0,   151,   151,    25,     0,
      93,     0,     0,   392,   151,     0,    94,    95,   190,     0,
     191,     0,     0,     0,     0,     0,     0,     0,    96,   192,
       0,     0,     0,   193,   151,     0,     0,   151,   151,     0,
       0,   575,     0,   509,     0,     0,   153,     0,     0,   100,
     194,   151,   103,     0,   151,     0,   195,     0,     0,   529,
       0,     0,   153,     0,     0,     0,     0,     0,     0,   151,
     151,     0,     0,     0,   151,   151,     0,     0,     0,     0,
       0,     0,   152,     0,     0,     0,   151,     0,   151,     0,
     151,     0,   547,     0,     0,     0,     0,   151,   151,     0,
     151,   151,     0,   151,   151,     0,     0,   151,   153,   153,
     151,   151,     0,     0,     0,     0,     0,   151,     0,   152,
       0,     0,     0,   152,   152,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,    45,     0,     0,
     152,     0,     0,   584,   585,     0,   587,   588,     0,     0,
       0,     0,     0,   368,   598,     0,     3,     0,    46,     0,
       0,     0,    25,     0,     0,     0,    47,    48,     0,     0,
       0,     0,     0,   152,     0,     0,   152,     0,   152,     0,
       5,   618,     0,     0,   619,   620,     0,     0,     0,     0,
       7,     8,     0,     9,     0,   169,     0,     0,     0,     0,
       0,    50,    51,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,   637,    52,    14,   153,
       0,   509,   529,     0,   152,   152,     0,   152,   152,     0,
     152,   152,     0,   547,   152,   152,     0,     0,     0,     0,
       0,     0,   152,     0,   584,   585,     0,   587,   588,     0,
       0,   598,     0,     0,   618,     0,   153,   619,   620,     0,
     153,   153,   152,     0,   637,   152,   152,     0,     0,     0,
       0,   228,     0,     0,     0,   228,     0,   153,     0,   152,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   229,     0,     0,     0,   229,   152,   152,     0,
       0,     0,   152,   152,     0,     0,     0,     0,     0,     0,
     153,     0,     0,   153,   152,   153,   152,     0,   152,     0,
       0,     0,     0,     0,     0,   152,   152,     0,   152,   152,
       0,   152,   152,     0,     0,   152,     0,     0,   152,   152,
       0,     0,     0,     0,     0,   152,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,    45,     0,     0,
       0,   153,   153,     0,   153,   153,     0,   153,   153,     0,
       0,   153,   153,   228,   228,   228,     3,   228,    46,   153,
       0,     0,    25,     0,     0,     0,    47,     0,     0,     0,
       0,     0,     0,     0,   229,   229,   229,   201,   229,   153,
       5,     0,   153,   153,     0,     0,   201,     0,     0,   201,
       7,     8,     0,     9,     0,   201,   153,     0,     0,   153,
       0,     0,    11,     0,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,   153,   153,     0,   166,    14,   153,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   153,     0,   153,     0,     0,     0,     0,
       0,     0,   153,   153,     0,   153,   153,     0,   153,   153,
       0,     0,   153,     0,     0,   153,   153,     0,     0,     0,
       0,     0,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,   228,   228,   228,   228,   228,   228,   228,
     228,     0,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   229,     0,   229,   229,   229,   229,   229,   229,
     229,   229,     0,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,     0,     0,   201,     0,     0,     0,    89,
       0,     0,     0,   201,   201,     0,     0,     0,     0,   201,
       0,     0,   201,   201,     0,     0,    25,     0,    93,     0,
       0,     0,   201,     0,    94,    95,   190,     0,   191,   201,
       0,     0,     0,     0,     0,     0,    96,   192,     0,     0,
       0,   193,   201,     0,     0,     0,     0,   228,   228,     0,
       0,     0,     0,     0,     0,   239,     0,   100,   194,     1,
     103,     0,    86,     0,   195,    45,    87,   562,   229,   229,
       0,     0,    88,    89,   563,     0,   201,    90,   201,     0,
       0,   201,     0,     0,     3,     0,    46,    91,     0,     0,
      25,    92,    93,     0,    47,    48,     0,     0,    94,    95,
       0,     0,     0,     0,   201,     0,     0,     0,     5,     0,
      96,   201,     0,     0,     0,   201,     0,     0,     7,     8,
       0,     9,     0,   605,     0,    98,     0,   228,     0,    99,
      11,   100,   101,   102,   103,     0,   104,     0,     0,     0,
      13,     0,   105,     0,   106,     0,    14,   107,   229,     0,
       0,     1,     0,   201,     0,     0,     0,    45,     0,     0,
       0,     0,     0,   201,   201,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,    46,     0,
       0,     0,    25,     0,    93,     0,    47,     0,     0,     0,
      94,    95,     0,     0,   228,     0,     0,     0,     0,     0,
       5,     0,    96,   201,     0,     0,   201,   201,     0,     0,
       7,     8,     0,     9,     0,   229,     0,     0,   201,     0,
       0,   343,    11,   100,     0,    12,   103,     0,   201,     0,
       0,   201,    13,     0,     0,     0,   106,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,    86,     0,     0,    45,
      87,   562,   229,     0,     0,     0,    88,    89,   563,     0,
       0,    90,     0,     0,     0,     0,   201,     0,     3,     0,
      46,    91,   201,   201,    25,    92,    93,     0,    47,    48,
       0,     0,    94,    95,     0,     0,     0,   201,   201,     0,
       0,     0,     5,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     7,     8,   201,     9,     0,   630,     0,    98,
       0,     0,     0,    99,    11,   100,   101,   102,   103,     0,
     104,     0,     0,   201,    13,     0,   105,     0,   106,     0,
      14,   107,     1,     0,     0,    86,     0,     0,    45,    87,
       0,     0,     0,     0,     0,    88,    89,     0,     0,     0,
      90,     0,     0,     0,     0,   201,   201,     3,     0,    46,
      91,     0,     0,    25,    92,    93,     0,    47,    48,     0,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,    97,     0,    98,     0,
       0,     0,    99,    11,   100,   101,   102,   103,     0,   104,
       0,     0,     0,    13,     0,   105,     0,   106,     1,    14,
     107,    86,     0,     0,    45,    87,     0,     0,     0,     0,
       0,    88,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     3,     0,    46,    91,     0,     0,    25,
      92,    93,     0,    47,    48,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,   256,     0,    98,     0,     0,     0,    99,    11,
     100,   101,   102,   103,     0,   104,     0,     0,     0,    13,
       0,   105,     0,   106,     1,    14,   107,    86,     0,     0,
      45,    87,     0,     0,     0,     0,     0,    88,    89,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     3,
       0,    46,    91,     0,     0,    25,    92,    93,     0,    47,
      48,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     9,     0,   291,     0,
      98,     0,     0,     0,    99,    11,   292,   101,   102,   293,
       0,   104,     0,     0,     0,    13,     0,   105,     0,   106,
       1,    14,   107,    86,     0,     0,    45,    87,     0,     0,
       0,     0,     0,    88,    89,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     3,     0,    46,    91,     0,
       0,    25,    92,    93,     0,    47,    48,     0,     0,    94,
      95,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,    96,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     9,     0,   405,     0,    98,     0,     0,     0,
      99,    11,   100,   101,   102,   103,     0,   104,     0,     0,
       0,    13,     0,   105,     0,   106,     1,    14,   107,    86,
       0,     0,    45,    87,     0,     0,     0,     0,     0,    88,
      89,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     3,     0,    46,    91,     0,     0,    25,    92,    93,
       0,    47,    48,     0,     0,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
     407,     0,    98,     0,     0,     0,    99,    11,   100,   101,
     102,   103,     0,   104,     0,     0,     0,    13,     0,   105,
       0,   106,     1,    14,   107,    86,     0,     0,    45,    87,
       0,     0,     0,     0,     0,    88,    89,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     3,     0,    46,
      91,     0,     0,    25,    92,    93,     0,    47,    48,     0,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,   484,     0,    98,     0,
       0,     0,    99,    11,   100,   101,   102,   103,     0,   104,
       0,     0,     0,    13,     0,   105,     0,   106,     1,    14,
     107,    86,     0,     0,    45,    87,     0,     0,     0,     0,
       0,    88,    89,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     3,     0,    46,    91,     0,     0,    25,
      92,    93,     0,    47,    48,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,     0,     0,    98,     0,     0,     0,    99,    11,
     100,   101,   102,   103,     1,   104,     0,     0,     0,    13,
      45,   105,     0,   106,     0,    14,   107,     0,    89,     0,
       0,     1,     0,     0,     0,     0,     0,    45,     0,     3,
       0,    46,     0,     0,     0,    25,     0,    93,     0,    47,
       0,     0,     0,    94,    95,     0,     3,     0,    46,     0,
       0,     0,    25,     5,     0,    96,    47,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     9,     0,     0,     0,
       5,     0,     0,     0,   592,    11,   100,     0,    12,   103,
       7,     8,     1,     9,     0,    13,     0,     1,    45,   106,
       0,    14,    11,    45,     0,    12,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,   254,     3,    14,    46,
       0,     0,     3,    25,    46,     0,     0,    47,    25,     0,
       0,     0,    47,     0,     0,     0,     0,     1,     0,     0,
       0,     5,     0,     0,     0,     0,     5,     2,     0,     0,
       0,     7,     8,     0,     9,     0,     7,     8,     0,     9,
     274,     0,     3,    11,     0,   384,    12,     0,    11,     0,
       0,    12,     0,    13,     0,     0,     0,     0,    13,    14,
       0,     0,     4,     0,    14,     1,     5,     0,     0,     0,
       0,    45,     6,     0,     0,     0,     7,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       3,    12,    46,     0,     0,     0,    25,     0,    13,     0,
      47,    86,     0,     0,    14,    87,     0,     0,     0,     0,
       0,    88,    89,     0,     5,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     7,     8,    91,     9,     0,    25,
      92,    93,     0,     0,    48,     0,    11,    94,    95,    12,
       0,     0,     0,     0,     0,     0,    13,     0,     0,    96,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,    99,     0,
     100,   101,   231,   103,    86,   104,     0,     0,    87,     0,
       0,   105,     0,     0,    88,    89,   107,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   505,
       0,     0,    25,   506,    93,     0,     0,    48,     0,     0,
      94,    95,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    93,     0,     0,     0,     0,    98,    94,    95,
     190,    99,   191,   100,   101,   231,   103,     0,   104,     0,
      96,   192,     0,     0,   105,   193,     0,     0,    89,   507,
       0,     0,     0,     0,     0,     0,     0,     0,   374,     0,
       0,   100,   194,     0,   103,    25,     0,    93,   195,     0,
     392,     0,     0,    94,    95,   190,     0,   191,     0,     0,
       0,     0,     0,     0,     0,    96,   192,     0,     0,     0,
     193,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   194,    25,   103,
      93,     0,     0,   195,     0,     0,    94,    95,   190,     0,
     191,     0,     0,     0,     0,     0,     0,     0,    96,   192,
       0,     0,     0,   193,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   443,    89,   100,
     194,    25,   103,    93,     0,     0,   195,     0,     0,    94,
      95,   190,     0,   191,     0,    25,     0,    93,     0,     0,
       0,    96,   192,    94,    95,   190,   193,   191,     0,     0,
       0,     0,     0,     0,     0,    96,   192,     0,     0,   284,
     193,    89,   100,   194,     0,   103,     0,     0,     0,   195,
       0,     0,   453,     0,     0,    89,   100,   194,    25,   103,
      93,     0,     0,   195,     0,     0,    94,    95,   190,     0,
     191,     0,    25,     0,    93,     0,     0,     0,    96,   192,
      94,    95,   190,   193,   191,     0,     0,     0,     0,     0,
       0,     0,    96,   192,     0,   479,     0,   193,    89,   100,
     194,     0,   103,     0,     0,     0,   195,     0,     0,   481,
       0,     0,     0,   100,   194,    25,   103,    93,     0,     0,
     195,     0,     0,    94,    95,   190,     0,   191,     0,     0,
       0,     0,     0,     0,     0,    96,   192,     0,     0,     0,
     193,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   502,    89,   100,   194,    25,   103,
      93,     0,     0,   195,     0,     0,    94,    95,   190,     0,
     191,     0,    25,     0,    93,     0,     0,     0,    96,   192,
      94,    95,   190,   193,   191,     0,     0,     0,     0,     0,
       0,     0,    96,   192,     0,   521,     0,   193,    89,   100,
     194,     0,   103,     0,     0,     0,   195,     0,     0,   532,
       0,     0,    89,   100,   194,    25,   103,    93,     0,     0,
     195,     0,     0,    94,    95,   190,     0,   191,     0,    25,
       0,    93,     0,     0,     0,    96,   192,    94,    95,   190,
     193,   191,     0,     0,     0,     0,     0,     0,     0,    96,
     192,     0,   579,     0,   193,    89,   100,   194,     0,   103,
       0,     0,     0,   195,     0,     0,   581,     0,     0,    89,
     100,   194,    25,   103,    93,     0,     0,   195,     0,     0,
      94,    95,   190,     0,   191,     0,    25,     0,    93,     0,
       0,     0,    96,   192,    94,    95,   190,   193,   191,     0,
       0,     0,     0,     0,     0,     0,    96,   192,     0,   612,
       0,   193,    89,   100,   194,     0,   103,     0,     0,     0,
     195,     0,     0,     0,     0,   622,     0,   100,   194,    25,
     103,    93,     0,     0,   195,     0,     0,    94,    95,   190,
       0,   191,     0,     0,     0,     0,     0,     0,     0,    96,
     192,     0,     0,     0,   193,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   642,     0,
     100,   194,    25,   103,    93,     0,     0,   195,     0,     0,
      94,    95,   190,     0,   191,     0,     0,     0,     0,     0,
       0,     0,    96,   192,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   194,     0,   103,     0,     0,     0,
     195
};

static const yytype_int16 yycheck[] =
{
       2,    36,   233,    23,   114,    37,    60,   233,    96,    35,
      42,    89,   275,    96,   495,    93,    51,    48,   392,     0,
     250,   190,    17,    56,   354,    22,    26,    15,    63,   527,
     260,    33,    36,    68,    36,   168,    17,    39,    19,   106,
      14,    36,    62,   176,   111,    15,    48,     4,    39,     6,
      52,    32,    84,    46,    56,    36,    56,    34,    62,    63,
      62,    63,    15,   156,    64,    44,    59,    67,    68,   162,
     105,    15,   402,   403,   500,   168,   502,    15,    35,    36,
      22,   562,    63,    71,   448,    87,    88,    87,    90,    15,
      81,    48,   112,    22,    15,    92,    73,    17,    34,    73,
     167,    71,    81,    73,   106,    62,    63,   190,   112,   111,
      15,   609,   114,   191,   192,   193,    36,   195,    71,    76,
      77,    78,   233,    80,    81,   388,    15,   457,   554,    73,
      34,    73,    89,   166,   167,    73,    93,    73,    15,    96,
     470,    83,    15,   174,    73,    71,    15,    73,   629,   175,
      15,    11,    73,   157,    83,   112,   289,   114,    18,    86,
     329,   535,    15,    11,   166,   167,    71,    26,    95,    15,
      18,    98,   174,    34,   404,    15,   157,   104,   408,    22,
      22,    15,    71,   237,   238,    15,   296,   254,   255,    15,
      67,    22,    39,   286,   558,   288,   622,    56,    71,    22,
     157,    43,    44,    22,    73,    64,    71,    67,    67,    68,
       0,   541,   542,    74,   640,    24,   642,   174,   175,    67,
      73,    39,    44,    44,    85,    71,    73,   184,    87,   655,
      73,    71,    39,   190,   191,   192,   193,    71,   195,   241,
      40,    71,    73,   573,    53,    71,   329,   249,   250,    71,
      73,    72,   254,   255,    73,    22,   276,    44,   260,   337,
     338,   339,   626,   627,   295,   528,   566,   271,    17,    48,
      70,    34,   276,   275,   638,    43,   233,   279,    44,    79,
      20,   369,    34,    22,    71,   649,   650,    36,   652,   653,
     271,    54,   656,   295,   296,   659,   406,   351,   662,   663,
      34,   355,    54,   603,    43,   669,    22,   234,   571,    49,
      50,    90,    75,    57,   271,   242,   243,    43,    17,   276,
      54,   248,    66,    75,   555,   252,    78,    43,   363,   555,
       9,    25,   443,    32,   261,   114,   447,   415,   295,   296,
      22,   268,     8,    34,    12,   302,    27,   304,   305,    22,
      44,    30,    14,    15,   281,    34,    22,    39,    39,    38,
      43,    29,   319,    54,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   409,    75,   389,   388,    78,   315,   500,
     317,   502,    39,   320,    43,   174,   351,    44,    32,    33,
     355,    43,   404,    37,   406,     5,   408,    41,   389,   304,
     305,    45,   369,    43,    22,    14,   343,    22,    73,    19,
      73,   453,    44,   350,   459,    25,    34,    43,    44,    34,
      22,    17,   389,    48,   353,    43,    44,   356,    43,    44,
     332,   333,   334,   554,   555,    43,   448,    47,    34,   406,
      36,    51,   409,    72,   233,    44,    42,    43,   415,   416,
      60,     3,   464,    39,   466,   392,    44,     4,    54,     8,
     249,    13,     7,   327,   328,    90,   330,   331,    61,   460,
     325,   326,    73,   335,   336,    71,    28,    91,   520,    75,
      71,    73,    78,    44,    73,   497,   606,    15,    73,   114,
      72,    72,    72,   460,    15,    43,    22,   527,    72,    43,
      52,   622,     3,    14,    73,   442,   295,   296,   445,   446,
      62,    63,    13,    65,    71,    15,   528,    71,    43,   640,
     487,   642,    74,    43,    22,    77,    72,    28,   495,    71,
     467,    71,    84,   569,   655,    43,   548,   549,    90,   551,
     552,    72,    44,    72,    14,    72,   558,   559,    39,   174,
      73,    52,    67,    43,   566,    48,    73,    73,    43,   571,
     527,    62,    63,    73,    65,    71,   611,    71,    71,    43,
      43,    43,    73,    74,   586,    14,    77,   589,   590,    73,
      23,    23,    43,    84,    73,    73,    73,   632,   555,    90,
      71,   603,    71,    14,   606,   562,     8,    90,   535,   566,
      71,    14,   569,    71,    73,   558,    17,    73,   233,   621,
      73,    71,    71,    71,   626,   627,    73,   406,    73,   556,
     557,   114,    73,    34,   249,    36,   638,    73,    23,    19,
      71,    42,    43,    71,    71,    82,   603,   649,   650,   606,
     652,   653,   609,    54,   656,   184,    42,   659,    63,   279,
     662,   663,     5,    62,   443,   592,   389,   669,   447,   448,
      71,   565,   629,   493,    75,    17,    19,    78,   271,   565,
     295,   296,    25,   626,   627,   464,   364,   555,   364,   174,
     238,   174,    34,   319,    36,   638,   321,   624,   625,   322,
      42,    43,   323,     3,    47,   416,   649,   650,    51,   652,
     653,   324,    54,   656,    -1,    -1,   659,    60,   497,   662,
     663,   500,    -1,   502,    -1,    -1,   669,    -1,    28,    48,
      -1,    -1,    -1,    75,    34,    -1,    78,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    52,    19,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    62,    63,    -1,    65,   249,    -1,    -1,   548,
     549,    90,   551,   552,    74,   554,   555,    77,    -1,   558,
     559,    47,    -1,    17,    84,    51,    -1,   566,    -1,    -1,
      90,   406,    -1,    -1,    60,   114,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    -1,   586,    42,    43,
     589,   590,   295,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,   603,    -1,    -1,   606,   443,     3,
      -1,    -1,   447,   448,    -1,     9,    -1,    71,    -1,    -1,
      -1,    75,   621,   622,    78,    -1,    -1,   626,   627,   464,
      -1,    -1,    -1,    -1,    28,   174,    30,    -1,    -1,   638,
      34,   640,    -1,   642,    38,    39,    48,    -1,    -1,    -1,
     649,   650,    -1,   652,   653,    -1,   655,   656,    52,    -1,
     659,    -1,   497,   662,   663,   500,    -1,   502,    62,    63,
     669,    65,    17,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    90,    34,
      84,    36,    -1,    -1,   233,    89,    90,    42,    43,    -1,
      -1,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,    54,
     249,    -1,   114,   548,   549,    -1,   551,   552,    -1,   554,
     555,    -1,    17,   558,   559,    -1,    71,    -1,    -1,    -1,
      75,   566,    -1,    78,    -1,    -1,    -1,    -1,    -1,    34,
     443,    36,    -1,    -1,   447,   448,    -1,    42,    43,    -1,
      -1,   586,    -1,    -1,   589,   590,   295,   296,    -1,    54,
      -1,   464,    -1,    -1,    -1,    -1,    -1,    -1,   603,    -1,
      -1,   606,   174,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      75,    -1,    -1,    78,     5,    -1,   621,   622,    -1,    -1,
      -1,   626,   627,    -1,   497,    -1,    -1,   500,    19,   502,
      -1,    22,    -1,   638,    25,   640,    -1,   642,    -1,    -1,
      -1,    -1,    -1,    34,   649,   650,    -1,   652,   653,    -1,
     655,   656,    43,    44,   659,    -1,    47,   662,   663,    -1,
      51,   233,    -1,    -1,   669,    90,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,   548,   549,   249,   551,   552,
      -1,   554,   555,    17,    -1,   558,   559,    -1,    -1,    -1,
      -1,    -1,    -1,   566,    -1,    -1,    -1,   406,    -1,    -1,
      34,    -1,    36,    -1,    48,    -1,    -1,    -1,    42,    43,
      17,    -1,    -1,   586,    -1,    -1,   589,   590,    -1,    -1,
      54,    -1,    -1,   295,   296,    -1,    -1,    34,    -1,    36,
     603,    -1,    -1,   606,   443,    42,    43,    71,   447,   448,
      -1,    75,    -1,    -1,    78,    -1,    90,    54,   621,   622,
      -1,    -1,    -1,   626,   627,   464,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,   638,    -1,   640,    75,   642,
     114,    78,    -1,    -1,    -1,    -1,   649,   650,    -1,   652,
     653,    -1,   655,   656,    -1,    -1,   659,    -1,   497,   662,
     663,   500,    15,   502,    17,    -1,   669,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    -1,    46,   249,    -1,    -1,    -1,    -1,    -1,
     174,    54,    55,    -1,   406,    -1,    59,    17,    -1,   548,
     549,    48,   551,   552,    67,   554,   555,    -1,    -1,   558,
     559,    -1,    75,    76,    34,    78,    36,   566,    34,    82,
      -1,    -1,    42,    43,    -1,    -1,    42,    43,    44,    -1,
      -1,   443,    -1,    -1,    54,   447,   448,   586,    54,    55,
     589,   590,    -1,    90,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    71,   464,    -1,   603,    75,    -1,   606,    78,    75,
      76,    -1,    78,    -1,    -1,   249,    82,   114,    -1,    -1,
      -1,    -1,   621,   622,    -1,    -1,    -1,   626,   627,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,   500,   638,
     502,   640,    -1,   642,    -1,    -1,    -1,    -1,    -1,    -1,
     649,   650,    -1,   652,   653,    -1,   655,   656,    -1,    -1,
     659,   295,   296,   662,   663,    -1,    -1,    -1,    -1,    -1,
     669,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,   548,   549,    -1,   551,
     552,    -1,   554,   555,    -1,    -1,   558,   559,    34,    -1,
      36,    -1,    -1,    39,   566,    -1,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    59,   586,    -1,    -1,   589,   590,    -1,
      -1,    67,    -1,   448,    -1,    -1,   233,    -1,    -1,    75,
      76,   603,    78,    -1,   606,    -1,    82,    -1,    -1,   464,
      -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,   621,
     622,    -1,    -1,    -1,   626,   627,    -1,    -1,    -1,    -1,
      -1,    -1,   406,    -1,    -1,    -1,   638,    -1,   640,    -1,
     642,    -1,   497,    -1,    -1,    -1,    -1,   649,   650,    -1,
     652,   653,    -1,   655,   656,    -1,    -1,   659,   295,   296,
     662,   663,    -1,    -1,    -1,    -1,    -1,   669,    -1,   443,
      -1,    -1,    -1,   447,   448,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
     464,    -1,    -1,   548,   549,    -1,   551,   552,    -1,    -1,
      -1,    -1,    -1,   558,   559,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,   500,    -1,   502,    -1,
      52,   586,    -1,    -1,   589,   590,    -1,    -1,    -1,    -1,
      62,    63,    -1,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,   621,    89,    90,   406,
      -1,   626,   627,    -1,   548,   549,    -1,   551,   552,    -1,
     554,   555,    -1,   638,   558,   559,    -1,    -1,    -1,    -1,
      -1,    -1,   566,    -1,   649,   650,    -1,   652,   653,    -1,
      -1,   656,    -1,    -1,   659,    -1,   443,   662,   663,    -1,
     447,   448,   586,    -1,   669,   589,   590,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,   464,    -1,   603,
      -1,    -1,   606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    93,   621,   622,    -1,
      -1,    -1,   626,   627,    -1,    -1,    -1,    -1,    -1,    -1,
     497,    -1,    -1,   500,   638,   502,   640,    -1,   642,    -1,
      -1,    -1,    -1,    -1,    -1,   649,   650,    -1,   652,   653,
      -1,   655,   656,    -1,    -1,   659,    -1,    -1,   662,   663,
      -1,    -1,    -1,    -1,    -1,   669,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,   548,   549,    -1,   551,   552,    -1,   554,   555,    -1,
      -1,   558,   559,   191,   192,   193,    28,   195,    30,   566,
      -1,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,   192,   193,    86,   195,   586,
      52,    -1,   589,   590,    -1,    -1,    95,    -1,    -1,    98,
      62,    63,    -1,    65,    -1,   104,   603,    -1,    -1,   606,
      -1,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,   621,   622,    -1,    89,    90,   626,
     627,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   638,    -1,   640,    -1,   642,    -1,    -1,    -1,    -1,
      -1,    -1,   649,   650,    -1,   652,   653,    -1,   655,   656,
      -1,    -1,   659,    -1,    -1,   662,   663,    -1,    -1,    -1,
      -1,    -1,   669,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,   321,   322,   323,   324,   325,   326,   327,
     328,    -1,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   319,    -1,   321,   322,   323,   324,   325,   326,
     327,   328,    -1,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,    -1,    -1,   234,    -1,    -1,    -1,    17,
      -1,    -1,    -1,   242,   243,    -1,    -1,    -1,    -1,   248,
      -1,    -1,   251,   252,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,   261,    -1,    42,    43,    44,    -1,    46,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,   281,    -1,    -1,    -1,    -1,   415,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    76,     3,
      78,    -1,     6,    -1,    82,     9,    10,    11,   415,   416,
      -1,    -1,    16,    17,    18,    -1,   315,    21,   317,    -1,
      -1,   320,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    52,    -1,
      54,   350,    -1,    -1,    -1,   354,    -1,    -1,    62,    63,
      -1,    65,    -1,    67,    -1,    69,    -1,   495,    -1,    73,
      74,    75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,
      84,    -1,    86,    -1,    88,    -1,    90,    91,   495,    -1,
      -1,     3,    -1,   392,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,   402,   403,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    36,    -1,    38,    -1,    -1,    -1,
      42,    43,    -1,    -1,   562,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    54,   442,    -1,    -1,   445,   446,    -1,    -1,
      62,    63,    -1,    65,    -1,   562,    -1,    -1,   457,    -1,
      -1,    73,    74,    75,    -1,    77,    78,    -1,   467,    -1,
      -1,   470,    84,    -1,    -1,    -1,    88,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,     6,    -1,    -1,     9,
      10,    11,   629,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,   535,    -1,    28,    -1,
      30,    31,   541,   542,    34,    35,    36,    -1,    38,    39,
      -1,    -1,    42,    43,    -1,    -1,    -1,   556,   557,    -1,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,   573,    65,    -1,    67,    -1,    69,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    -1,
      80,    -1,    -1,   592,    84,    -1,    86,    -1,    88,    -1,
      90,    91,     3,    -1,    -1,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,   624,   625,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,
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
      65,    -1,    67,    -1,    69,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    80,    -1,    -1,    -1,    84,
      -1,    86,    -1,    88,     3,    90,    91,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,    38,
      39,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    80,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,
       3,    90,    91,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    39,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,     3,    90,    91,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    -1,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,
      67,    -1,    69,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    80,    -1,    -1,    -1,    84,    -1,    86,
      -1,    88,     3,    90,    91,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,
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
      75,    76,    77,    78,     3,    80,    -1,    -1,    -1,    84,
       9,    86,    -1,    88,    -1,    90,    91,    -1,    17,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,     9,    -1,    28,
      -1,    30,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,
      -1,    -1,    -1,    42,    43,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    52,    -1,    54,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,    65,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    73,    74,    75,    -1,    77,    78,
      62,    63,     3,    65,    -1,    84,    -1,     3,     9,    88,
      -1,    90,    74,     9,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    28,    90,    30,
      -1,    -1,    28,    34,    30,    -1,    -1,    38,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    52,    13,    -1,    -1,
      -1,    62,    63,    -1,    65,    -1,    62,    63,    -1,    65,
      71,    -1,    28,    74,    -1,    71,    77,    -1,    74,    -1,
      -1,    77,    -1,    84,    -1,    -1,    -1,    -1,    84,    90,
      -1,    -1,    48,    -1,    90,     3,    52,    -1,    -1,    -1,
      -1,     9,    58,    -1,    -1,    -1,    62,    63,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,
      28,    77,    30,    -1,    -1,    -1,    34,    -1,    84,    -1,
      38,     6,    -1,    -1,    90,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    52,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    31,    65,    -1,    34,
      35,    36,    -1,    -1,    39,    -1,    74,    42,    43,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    54,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    73,    -1,
      75,    76,    77,    78,     6,    80,    -1,    -1,    10,    -1,
      -1,    86,    -1,    -1,    16,    17,    91,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      42,    43,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    -1,    69,    42,    43,
      44,    73,    46,    75,    76,    77,    78,    -1,    80,    -1,
      54,    55,    -1,    -1,    86,    59,    -1,    -1,    17,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    76,    -1,    78,    34,    -1,    36,    82,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    34,    78,
      36,    -1,    -1,    82,    -1,    -1,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    59,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    17,    75,
      76,    34,    78,    36,    -1,    -1,    82,    -1,    -1,    42,
      43,    44,    -1,    46,    -1,    34,    -1,    36,    -1,    -1,
      -1,    54,    55,    42,    43,    44,    59,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    72,
      59,    17,    75,    76,    -1,    78,    -1,    -1,    -1,    82,
      -1,    -1,    71,    -1,    -1,    17,    75,    76,    34,    78,
      36,    -1,    -1,    82,    -1,    -1,    42,    43,    44,    -1,
      46,    -1,    34,    -1,    36,    -1,    -1,    -1,    54,    55,
      42,    43,    44,    59,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    71,    -1,    59,    17,    75,
      76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    71,
      -1,    -1,    -1,    75,    76,    34,    78,    36,    -1,    -1,
      82,    -1,    -1,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      59,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    17,    75,    76,    34,    78,
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
      -1,    -1,    -1,    82,    -1,    -1,    71,    -1,    -1,    17,
      75,    76,    34,    78,    36,    -1,    -1,    82,    -1,    -1,
      42,    43,    44,    -1,    46,    -1,    34,    -1,    36,    -1,
      -1,    -1,    54,    55,    42,    43,    44,    59,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    71,
      -1,    59,    17,    75,    76,    -1,    78,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    73,    -1,    75,    76,    34,
      78,    36,    -1,    -1,    82,    -1,    -1,    42,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    59,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    76,    34,    78,    36,    -1,    -1,    82,    -1,    -1,
      42,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    78,    -1,    -1,    -1,
      82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    13,    28,    48,    52,    58,    62,    63,    65,
      73,    74,    77,    84,    90,   100,   101,   102,   103,   104,
     105,   106,   117,   118,   119,    34,    94,    94,    98,    98,
       0,   105,   102,    13,   119,    27,    39,   120,   121,    22,
      39,    73,    94,    98,   116,     9,    30,    38,    39,    67,
      73,    74,    89,    94,    96,    97,   111,   112,   113,   114,
     115,   116,   118,   122,   123,   124,   125,   130,   131,   138,
     139,   140,   141,   146,   121,    94,    26,    56,    64,    67,
      68,    87,   107,   108,   120,   121,     6,    10,    16,    17,
      21,    31,    35,    36,    42,    43,    54,    67,    69,    73,
      75,    76,    77,    78,    80,    86,    88,    91,    94,    95,
      98,   111,   118,   146,   147,   148,   149,   150,   151,   153,
     154,   155,   156,   158,   159,   160,   161,   163,   170,   172,
     173,   175,   180,   182,   183,   184,   185,   186,   187,   193,
     194,   195,   196,   197,   198,   199,   201,   207,   208,   224,
     225,   227,   228,   229,   146,    94,   132,    43,    94,   126,
     127,   128,   132,    44,   204,   204,    89,   111,   141,    67,
     123,    73,   137,   146,    39,    81,   135,   142,    98,    98,
      98,    74,    85,    98,   109,   110,    98,    67,   108,   121,
      44,    46,    55,    59,    76,    82,    98,   195,   199,   205,
     206,   207,   210,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,    73,    94,    73,    94,    98,   197,   198,
     223,    77,   151,    43,    43,   223,   205,   112,   115,    73,
     205,    22,    43,    43,   205,   146,    94,   126,    43,    14,
      22,    43,    44,   126,    88,   111,    67,   148,    73,    73,
      22,    44,     5,    19,    25,    47,    51,    60,   209,    17,
      36,    43,    44,   135,    71,   111,   118,   133,   134,    15,
      73,    25,    44,   135,    72,    44,   132,   126,   132,   135,
     142,    67,    75,    78,    98,   143,   147,   193,   116,   136,
     142,    73,    83,    73,    83,    92,    73,    98,   110,    73,
     112,   113,   223,   223,   223,    44,   223,    14,    73,    57,
      66,     4,     8,    61,     7,    24,    53,    32,    33,    37,
      41,    45,    40,    70,    79,    46,    59,    20,    49,    50,
      73,    73,    91,    73,   150,   159,   177,   179,   205,    71,
      44,   202,   203,   204,    43,   202,   204,    73,    94,   205,
     205,    73,    12,    29,   188,   189,   192,   205,   151,    54,
      75,    78,    94,   196,    72,   200,   205,   205,   126,   126,
      94,   196,   205,   205,    71,   133,    72,   128,   111,    15,
      71,   127,    39,   129,   144,   205,    72,    72,   135,    73,
     135,   142,    43,    43,    22,    67,   147,    67,    22,    15,
      98,    99,    99,    99,    73,    72,    72,   205,   205,   213,
     205,   211,   214,   215,   216,   217,   218,   218,   220,   220,
     112,   113,   220,   220,   221,   221,   221,   222,   222,   223,
     223,   223,    43,    73,   205,    14,    73,    15,    71,   205,
     203,   204,   144,    71,   200,   204,   144,    43,    71,    71,
      43,   146,   189,   192,    71,   115,    22,    15,    71,    72,
      43,    72,    71,   128,   134,    15,    67,   129,   145,    71,
     200,    71,   200,    75,    67,    75,   116,    15,    73,    73,
      73,   223,   226,    72,    73,    14,   205,    71,   178,   179,
      73,   205,    73,   205,   159,    31,    35,    91,    94,   151,
     152,   153,   157,   162,   171,   174,   176,   181,    72,   121,
      71,    71,   200,    39,   164,   146,    98,   118,   190,   151,
      94,   205,    71,   200,    67,    15,    67,    73,    71,    73,
      71,    43,    43,    98,   164,   210,    71,   151,    71,    71,
     178,    71,    71,   178,    73,    43,    43,    43,    14,    23,
     121,    71,    11,    18,    67,   165,   166,   167,   168,     8,
     191,   190,   128,    43,    71,    67,   129,    73,    73,    71,
     200,    71,   200,    73,   151,   151,    71,   151,   151,    71,
      71,   178,    73,   150,   177,   205,   205,   152,   151,   169,
     210,    14,    67,   166,   167,    67,   147,   168,   116,     8,
     128,    71,    71,   200,    73,    71,    73,    71,   151,   151,
     151,    71,    73,   205,    14,    73,    71,    71,    14,    15,
      67,   190,    71,   146,    71,    73,    73,   151,    71,   178,
      73,   205,    73,   205,   152,   152,   210,   146,   152,    71,
      71,   178,    71,    71,   178,    73,    23,   152,   152,    71,
     152,   152,    71,    71,   178,   152,   152,   152,   152,    71,
     152
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   102,   102,   103,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   116,   117,   117,
     117,   117,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   124,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   133,   133,
     134,   134,   135,   136,   136,   137,   137,   138,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   142,   142,   143,
     143,   143,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   151,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   154,   154,   155,
     156,   157,   158,   159,   159,   159,   159,   159,   159,   159,
     160,   161,   162,   163,   164,   164,   164,   164,   165,   165,
     166,   166,   167,   168,   168,   169,   169,   170,   171,   172,
     173,   173,   174,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   177,   178,   179,   179,   180,   181,   182,   182,   183,
     183,   184,   184,   185,   186,   187,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   193,   193,   194,
     194,   194,   194,   194,   194,   194,   194,   195,   195,   195,
     196,   196,   196,   196,   197,   197,   197,   198,   198,   199,
     199,   199,   199,   199,   199,   199,   199,   200,   200,   201,
     201,   201,   201,   201,   201,   202,   202,   203,   204,   204,
     205,   206,   206,   207,   208,   208,   208,   209,   209,   209,
     209,   209,   209,   210,   210,   211,   212,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   217,   218,
     218,   218,   218,   218,   218,   219,   220,   220,   220,   220,
     221,   221,   221,   222,   222,   222,   222,   223,   223,   223,
     223,   223,   224,   225,   226,   226,   226,   226,   226,   227,
     227,   227,   228,   229,   230,   230,   231
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     1,     2,     1,     3,     1,
       1,     5,     4,     1,     2,     4,     3,     5,     3,     3,
       5,     3,     5,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     5,     4,
       4,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     2,     4,     3,     3,
       2,     4,     3,     3,     2,     4,     3,     3,     1,     3,
       2,     3,     2,     1,     3,     1,     1,     1,     2,     4,
       3,     3,     2,     4,     3,     4,     3,     3,     2,     5,
       4,     5,     4,     6,     7,     6,     7,     2,     3,     3,
       4,     1,     3,     3,     2,     2,     1,     1,     1,     2,
       2,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     1,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     7,     7,     5,     4,     3,     3,     2,     1,     2,
       1,     2,     2,     3,     2,     1,     3,     5,     5,     7,
       1,     1,     1,     1,     9,     8,     8,     7,     8,     7,
       7,     6,     9,     8,     8,     7,     8,     7,     7,     6,
       1,     1,     1,     3,     1,     7,     7,     3,     2,     3,
       2,     2,     3,     3,     5,     3,     3,     4,     2,     1,
       6,     7,     1,     2,     2,     3,     2,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     3,     3,
       5,     5,     6,     4,     3,     3,     3,     4,     4,     3,
       4,     5,     6,     5,     6,     7,     8,     1,     3,     3,
       4,     3,     4,     4,     4,     2,     1,     3,     2,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     4,     5
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
#line 275 "parser.y"
                                                                                                {vec = {createnode("IDENTIFIER__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Identifier", vec);}
#line 2573 "parser.tab.c"
    break;

  case 3:
#line 279 "parser.y"
                                                                                                {vec = {createnode("LITERAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Literal", vec);}
#line 2579 "parser.tab.c"
    break;

  case 4:
#line 283 "parser.y"
                                                                                                {vec = {createnode("INTEGRALTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("IntegralType", vec);}
#line 2585 "parser.tab.c"
    break;

  case 5:
#line 287 "parser.y"
                                                                                                        {vec = {createnode("FLOATINGPOINTTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FloatingPointType", vec);}
#line 2591 "parser.tab.c"
    break;

  case 6:
#line 291 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2597 "parser.tab.c"
    break;

  case 7:
#line 292 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2603 "parser.tab.c"
    break;

  case 8:
#line 296 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2609 "parser.tab.c"
    break;

  case 9:
#line 297 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2615 "parser.tab.c"
    break;

  case 10:
#line 301 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2621 "parser.tab.c"
    break;

  case 11:
#line 302 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2627 "parser.tab.c"
    break;

  case 12:
#line 306 "parser.y"
                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2633 "parser.tab.c"
    break;

  case 13:
#line 307 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2639 "parser.tab.c"
    break;

  case 14:
#line 308 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2645 "parser.tab.c"
    break;

  case 15:
#line 312 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2651 "parser.tab.c"
    break;

  case 16:
#line 313 "parser.y"
                                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2657 "parser.tab.c"
    break;

  case 17:
#line 317 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModularCompilationUnit", vec);}
#line 2663 "parser.tab.c"
    break;

  case 18:
#line 321 "parser.y"
                                                                                                        {vec = {createnode("PACKAGE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PackageDeclaration", vec);}
#line 2669 "parser.tab.c"
    break;

  case 19:
#line 325 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2675 "parser.tab.c"
    break;

  case 20:
#line 326 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2681 "parser.tab.c"
    break;

  case 21:
#line 330 "parser.y"
                                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2687 "parser.tab.c"
    break;

  case 22:
#line 331 "parser.y"
                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2693 "parser.tab.c"
    break;

  case 23:
#line 335 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2699 "parser.tab.c"
    break;

  case 24:
#line 336 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2705 "parser.tab.c"
    break;

  case 25:
#line 340 "parser.y"
                                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2711 "parser.tab.c"
    break;

  case 26:
#line 341 "parser.y"
                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2717 "parser.tab.c"
    break;

  case 27:
#line 342 "parser.y"
                                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2723 "parser.tab.c"
    break;

  case 28:
#line 343 "parser.y"
                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2729 "parser.tab.c"
    break;

  case 29:
#line 344 "parser.y"
                                                                                                        {vec = {createnode("OPENS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2735 "parser.tab.c"
    break;

  case 30:
#line 345 "parser.y"
                                                                                                                {vec = {createnode("OPENS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2741 "parser.tab.c"
    break;

  case 31:
#line 346 "parser.y"
                                                                                                        {vec = {createnode("USES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2747 "parser.tab.c"
    break;

  case 32:
#line 347 "parser.y"
                                                                                                                        {vec = {createnode("PROVIDES__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("WITH__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2753 "parser.tab.c"
    break;

  case 33:
#line 351 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2759 "parser.tab.c"
    break;

  case 34:
#line 352 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2765 "parser.tab.c"
    break;

  case 35:
#line 356 "parser.y"
                                                                                                {vec = {createnode("TRANSITIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2771 "parser.tab.c"
    break;

  case 36:
#line 357 "parser.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2777 "parser.tab.c"
    break;

  case 37:
#line 361 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 2783 "parser.tab.c"
    break;

  case 38:
#line 362 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 2789 "parser.tab.c"
    break;

  case 39:
#line 366 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2795 "parser.tab.c"
    break;

  case 40:
#line 367 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2801 "parser.tab.c"
    break;

  case 41:
#line 368 "parser.y"
                                                                                                {vec = {createnode("BOOLEAN__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2807 "parser.tab.c"
    break;

  case 42:
#line 372 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 2813 "parser.tab.c"
    break;

  case 43:
#line 373 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 2819 "parser.tab.c"
    break;

  case 44:
#line 377 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 2825 "parser.tab.c"
    break;

  case 45:
#line 378 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 2831 "parser.tab.c"
    break;

  case 46:
#line 382 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassOrInterfaceType", vec);}
#line 2837 "parser.tab.c"
    break;

  case 47:
#line 386 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassType", vec);}
#line 2843 "parser.tab.c"
    break;

  case 48:
#line 390 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-4].str_val),createnode("CLASS__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2849 "parser.tab.c"
    break;

  case 49:
#line 391 "parser.y"
                                                                                                                                {vec = {createnode("CLASS__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2855 "parser.tab.c"
    break;

  case 50:
#line 392 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("CLASS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2861 "parser.tab.c"
    break;

  case 51:
#line 393 "parser.y"
                                                                                                                {vec = {createnode("CLASS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 2867 "parser.tab.c"
    break;

  case 52:
#line 397 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 2873 "parser.tab.c"
    break;

  case 53:
#line 398 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 2879 "parser.tab.c"
    break;

  case 54:
#line 402 "parser.y"
                                                                                        {vec = {createnode("PUBLIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2885 "parser.tab.c"
    break;

  case 55:
#line 403 "parser.y"
                                                                                                {vec = {createnode("PROTECTED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2891 "parser.tab.c"
    break;

  case 56:
#line 404 "parser.y"
                                                                                                {vec = {createnode("PRIVATE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2897 "parser.tab.c"
    break;

  case 57:
#line 405 "parser.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2903 "parser.tab.c"
    break;

  case 58:
#line 406 "parser.y"
                                                                                                {vec = {createnode("ABSTRACT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2909 "parser.tab.c"
    break;

  case 59:
#line 407 "parser.y"
                                                                                        {vec = {createnode("FINAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2915 "parser.tab.c"
    break;

  case 60:
#line 408 "parser.y"
                                                                                        {vec = {createnode("NATIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2921 "parser.tab.c"
    break;

  case 61:
#line 409 "parser.y"
                                                                                                {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2927 "parser.tab.c"
    break;

  case 62:
#line 410 "parser.y"
                                                                                                {vec = {createnode("TRANSIENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2933 "parser.tab.c"
    break;

  case 63:
#line 411 "parser.y"
                                                                                                {vec = {createnode("VOLATILE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 2939 "parser.tab.c"
    break;

  case 64:
#line 415 "parser.y"
                                                                                                        {vec = {createnode("EXTENDS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassExtends", vec);}
#line 2945 "parser.tab.c"
    break;

  case 65:
#line 419 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 2951 "parser.tab.c"
    break;

  case 66:
#line 420 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 2957 "parser.tab.c"
    break;

  case 67:
#line 424 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 2963 "parser.tab.c"
    break;

  case 68:
#line 425 "parser.y"
                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 2969 "parser.tab.c"
    break;

  case 69:
#line 429 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 2975 "parser.tab.c"
    break;

  case 70:
#line 430 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 2981 "parser.tab.c"
    break;

  case 71:
#line 431 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 2987 "parser.tab.c"
    break;

  case 72:
#line 432 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 2993 "parser.tab.c"
    break;

  case 73:
#line 436 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 2999 "parser.tab.c"
    break;

  case 74:
#line 437 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3005 "parser.tab.c"
    break;

  case 75:
#line 438 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3011 "parser.tab.c"
    break;

  case 76:
#line 442 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3017 "parser.tab.c"
    break;

  case 77:
#line 443 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3023 "parser.tab.c"
    break;

  case 78:
#line 447 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3029 "parser.tab.c"
    break;

  case 79:
#line 448 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3035 "parser.tab.c"
    break;

  case 80:
#line 452 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3041 "parser.tab.c"
    break;

  case 81:
#line 453 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("EQUALTO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3047 "parser.tab.c"
    break;

  case 82:
#line 457 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3053 "parser.tab.c"
    break;

  case 83:
#line 458 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3059 "parser.tab.c"
    break;

  case 84:
#line 462 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3065 "parser.tab.c"
    break;

  case 85:
#line 463 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3071 "parser.tab.c"
    break;

  case 86:
#line 467 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodDeclaration", vec);}
#line 3077 "parser.tab.c"
    break;

  case 87:
#line 471 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3083 "parser.tab.c"
    break;

  case 88:
#line 472 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3089 "parser.tab.c"
    break;

  case 89:
#line 473 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3095 "parser.tab.c"
    break;

  case 90:
#line 474 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3101 "parser.tab.c"
    break;

  case 91:
#line 475 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("VOID__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3107 "parser.tab.c"
    break;

  case 92:
#line 476 "parser.y"
                                                                                                                {vec = {createnode("VOID__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3113 "parser.tab.c"
    break;

  case 93:
#line 477 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("VOID__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3119 "parser.tab.c"
    break;

  case 94:
#line 478 "parser.y"
                                                                                                        {vec = {createnode("VOID__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3125 "parser.tab.c"
    break;

  case 95:
#line 482 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3131 "parser.tab.c"
    break;

  case 96:
#line 483 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3137 "parser.tab.c"
    break;

  case 97:
#line 484 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3143 "parser.tab.c"
    break;

  case 98:
#line 488 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3149 "parser.tab.c"
    break;

  case 99:
#line 489 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3155 "parser.tab.c"
    break;

  case 100:
#line 493 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3161 "parser.tab.c"
    break;

  case 101:
#line 494 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3167 "parser.tab.c"
    break;

  case 102:
#line 498 "parser.y"
                                                                                                        {vec = {createnode("THROWS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Throws", vec);}
#line 3173 "parser.tab.c"
    break;

  case 103:
#line 502 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3179 "parser.tab.c"
    break;

  case 104:
#line 503 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3185 "parser.tab.c"
    break;

  case 105:
#line 507 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3191 "parser.tab.c"
    break;

  case 106:
#line 508 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3197 "parser.tab.c"
    break;

  case 107:
#line 512 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceInitializer", vec);}
#line 3203 "parser.tab.c"
    break;

  case 108:
#line 516 "parser.y"
                                                                                                {vec = {createnode("STATIC__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StaticInitializer", vec);}
#line 3209 "parser.tab.c"
    break;

  case 109:
#line 520 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3215 "parser.tab.c"
    break;

  case 110:
#line 521 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3221 "parser.tab.c"
    break;

  case 111:
#line 522 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3227 "parser.tab.c"
    break;

  case 112:
#line 523 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3233 "parser.tab.c"
    break;

  case 113:
#line 527 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3239 "parser.tab.c"
    break;

  case 114:
#line 528 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3245 "parser.tab.c"
    break;

  case 115:
#line 532 "parser.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3251 "parser.tab.c"
    break;

  case 116:
#line 533 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3257 "parser.tab.c"
    break;

  case 117:
#line 534 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3263 "parser.tab.c"
    break;

  case 118:
#line 535 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3269 "parser.tab.c"
    break;

  case 119:
#line 539 "parser.y"
                                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3275 "parser.tab.c"
    break;

  case 120:
#line 540 "parser.y"
                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3281 "parser.tab.c"
    break;

  case 121:
#line 541 "parser.y"
                                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3287 "parser.tab.c"
    break;

  case 122:
#line 542 "parser.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3293 "parser.tab.c"
    break;

  case 123:
#line 543 "parser.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3299 "parser.tab.c"
    break;

  case 124:
#line 544 "parser.y"
                                                                                                                                {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3305 "parser.tab.c"
    break;

  case 125:
#line 545 "parser.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3311 "parser.tab.c"
    break;

  case 126:
#line 546 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3317 "parser.tab.c"
    break;

  case 127:
#line 550 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3323 "parser.tab.c"
    break;

  case 128:
#line 551 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3329 "parser.tab.c"
    break;

  case 129:
#line 552 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3335 "parser.tab.c"
    break;

  case 130:
#line 553 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3341 "parser.tab.c"
    break;

  case 131:
#line 557 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3347 "parser.tab.c"
    break;

  case 132:
#line 558 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3353 "parser.tab.c"
    break;

  case 133:
#line 562 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3359 "parser.tab.c"
    break;

  case 134:
#line 563 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3365 "parser.tab.c"
    break;

  case 135:
#line 567 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3371 "parser.tab.c"
    break;

  case 136:
#line 568 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3377 "parser.tab.c"
    break;

  case 137:
#line 572 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3383 "parser.tab.c"
    break;

  case 138:
#line 573 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3389 "parser.tab.c"
    break;

  case 139:
#line 577 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("LocalVariableDeclarationStatement", vec);}
#line 3395 "parser.tab.c"
    break;

  case 140:
#line 581 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3401 "parser.tab.c"
    break;

  case 141:
#line 582 "parser.y"
                                                                                                                {vec = {createnode("VAR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3407 "parser.tab.c"
    break;

  case 142:
#line 583 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3413 "parser.tab.c"
    break;

  case 143:
#line 584 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("VAR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3419 "parser.tab.c"
    break;

  case 144:
#line 588 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3425 "parser.tab.c"
    break;

  case 145:
#line 589 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3431 "parser.tab.c"
    break;

  case 146:
#line 590 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3437 "parser.tab.c"
    break;

  case 147:
#line 591 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3443 "parser.tab.c"
    break;

  case 148:
#line 592 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3449 "parser.tab.c"
    break;

  case 149:
#line 593 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3455 "parser.tab.c"
    break;

  case 150:
#line 597 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3461 "parser.tab.c"
    break;

  case 151:
#line 598 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3467 "parser.tab.c"
    break;

  case 152:
#line 599 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3473 "parser.tab.c"
    break;

  case 153:
#line 600 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3479 "parser.tab.c"
    break;

  case 154:
#line 601 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3485 "parser.tab.c"
    break;

  case 155:
#line 605 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3491 "parser.tab.c"
    break;

  case 156:
#line 606 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3497 "parser.tab.c"
    break;

  case 157:
#line 607 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3503 "parser.tab.c"
    break;

  case 158:
#line 608 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3509 "parser.tab.c"
    break;

  case 159:
#line 609 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3515 "parser.tab.c"
    break;

  case 160:
#line 610 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3521 "parser.tab.c"
    break;

  case 161:
#line 611 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3527 "parser.tab.c"
    break;

  case 162:
#line 612 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3533 "parser.tab.c"
    break;

  case 163:
#line 613 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3539 "parser.tab.c"
    break;

  case 164:
#line 614 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3545 "parser.tab.c"
    break;

  case 165:
#line 615 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3551 "parser.tab.c"
    break;

  case 166:
#line 616 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3557 "parser.tab.c"
    break;

  case 167:
#line 620 "parser.y"
                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 3563 "parser.tab.c"
    break;

  case 168:
#line 621 "parser.y"
                                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("COLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 3569 "parser.tab.c"
    break;

  case 169:
#line 625 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("EmptyStatement", vec);}
#line 3575 "parser.tab.c"
    break;

  case 170:
#line 629 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatement", vec);}
#line 3581 "parser.tab.c"
    break;

  case 171:
#line 633 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatementNoShortIf", vec);}
#line 3587 "parser.tab.c"
    break;

  case 172:
#line 637 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExpressionStatement", vec);}
#line 3593 "parser.tab.c"
    break;

  case 173:
#line 641 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3599 "parser.tab.c"
    break;

  case 174:
#line 642 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3605 "parser.tab.c"
    break;

  case 175:
#line 643 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3611 "parser.tab.c"
    break;

  case 176:
#line 644 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3617 "parser.tab.c"
    break;

  case 177:
#line 645 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3623 "parser.tab.c"
    break;

  case 178:
#line 646 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3629 "parser.tab.c"
    break;

  case 179:
#line 647 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3635 "parser.tab.c"
    break;

  case 180:
#line 651 "parser.y"
                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenStatement", vec);}
#line 3641 "parser.tab.c"
    break;

  case 181:
#line 655 "parser.y"
                                                                                                                                                {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatement", vec);}
#line 3647 "parser.tab.c"
    break;

  case 182:
#line 659 "parser.y"
                                                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatementNoShortIf", vec);}
#line 3653 "parser.tab.c"
    break;

  case 183:
#line 663 "parser.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchStatement", vec);}
#line 3659 "parser.tab.c"
    break;

  case 184:
#line 667 "parser.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3665 "parser.tab.c"
    break;

  case 185:
#line 668 "parser.y"
                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3671 "parser.tab.c"
    break;

  case 186:
#line 669 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3677 "parser.tab.c"
    break;

  case 187:
#line 670 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3683 "parser.tab.c"
    break;

  case 188:
#line 674 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 3689 "parser.tab.c"
    break;

  case 189:
#line 675 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 3695 "parser.tab.c"
    break;

  case 190:
#line 679 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 3701 "parser.tab.c"
    break;

  case 191:
#line 680 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 3707 "parser.tab.c"
    break;

  case 192:
#line 684 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroup", vec);}
#line 3713 "parser.tab.c"
    break;

  case 193:
#line 688 "parser.y"
                                                                                                                {vec = {createnode("CASE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 3719 "parser.tab.c"
    break;

  case 194:
#line 689 "parser.y"
                                                                                                {vec = {createnode("DEFAULT__" + *(yyvsp[-1].lex) , emp),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 3725 "parser.tab.c"
    break;

  case 195:
#line 693 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 3731 "parser.tab.c"
    break;

  case 196:
#line 694 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 3737 "parser.tab.c"
    break;

  case 197:
#line 698 "parser.y"
                                                                                                                        {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatement", vec);}
#line 3743 "parser.tab.c"
    break;

  case 198:
#line 702 "parser.y"
                                                                                                                                {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatementNoShortIf", vec);}
#line 3749 "parser.tab.c"
    break;

  case 199:
#line 706 "parser.y"
                                                                                                                                        {vec = {createnode("DO__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DoStatement", vec);}
#line 3755 "parser.tab.c"
    break;

  case 200:
#line 710 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 3761 "parser.tab.c"
    break;

  case 201:
#line 711 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 3767 "parser.tab.c"
    break;

  case 202:
#line 715 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 3773 "parser.tab.c"
    break;

  case 203:
#line 716 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 3779 "parser.tab.c"
    break;

  case 204:
#line 720 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3785 "parser.tab.c"
    break;

  case 205:
#line 721 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3791 "parser.tab.c"
    break;

  case 206:
#line 722 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3797 "parser.tab.c"
    break;

  case 207:
#line 723 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3803 "parser.tab.c"
    break;

  case 208:
#line 724 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3809 "parser.tab.c"
    break;

  case 209:
#line 725 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3815 "parser.tab.c"
    break;

  case 210:
#line 726 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3821 "parser.tab.c"
    break;

  case 211:
#line 727 "parser.y"
                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 3827 "parser.tab.c"
    break;

  case 212:
#line 731 "parser.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3833 "parser.tab.c"
    break;

  case 213:
#line 732 "parser.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3839 "parser.tab.c"
    break;

  case 214:
#line 733 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3845 "parser.tab.c"
    break;

  case 215:
#line 734 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3851 "parser.tab.c"
    break;

  case 216:
#line 735 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3857 "parser.tab.c"
    break;

  case 217:
#line 736 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3863 "parser.tab.c"
    break;

  case 218:
#line 737 "parser.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3869 "parser.tab.c"
    break;

  case 219:
#line 738 "parser.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 3875 "parser.tab.c"
    break;

  case 220:
#line 742 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 3881 "parser.tab.c"
    break;

  case 221:
#line 743 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 3887 "parser.tab.c"
    break;

  case 222:
#line 747 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForUpdate", vec);}
#line 3893 "parser.tab.c"
    break;

  case 223:
#line 751 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 3899 "parser.tab.c"
    break;

  case 224:
#line 752 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 3905 "parser.tab.c"
    break;

  case 225:
#line 756 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatement", vec);}
#line 3911 "parser.tab.c"
    break;

  case 226:
#line 760 "parser.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatementNoShortIf", vec);}
#line 3917 "parser.tab.c"
    break;

  case 227:
#line 764 "parser.y"
                                                                                                                {vec = {createnode("BREAK__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 3923 "parser.tab.c"
    break;

  case 228:
#line 765 "parser.y"
                                                                                                        {vec = {createnode("BREAK__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 3929 "parser.tab.c"
    break;

  case 229:
#line 769 "parser.y"
                                                                                                                {vec = {createnode("CONTINUE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 3935 "parser.tab.c"
    break;

  case 230:
#line 770 "parser.y"
                                                                                                        {vec = {createnode("CONTINUE__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 3941 "parser.tab.c"
    break;

  case 231:
#line 774 "parser.y"
                                                                                                        {vec = {createnode("RETURN__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 3947 "parser.tab.c"
    break;

  case 232:
#line 775 "parser.y"
                                                                                                                {vec = {createnode("RETURN__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 3953 "parser.tab.c"
    break;

  case 233:
#line 779 "parser.y"
                                                                                                                {vec = {createnode("THROW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ThrowStatement", vec);}
#line 3959 "parser.tab.c"
    break;

  case 234:
#line 783 "parser.y"
                                                                                                                        {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SynchronizedStatement", vec);}
#line 3965 "parser.tab.c"
    break;

  case 235:
#line 787 "parser.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 3971 "parser.tab.c"
    break;

  case 236:
#line 788 "parser.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 3977 "parser.tab.c"
    break;

  case 237:
#line 789 "parser.y"
                                                                                                                {vec = {createnode("TRY__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 3983 "parser.tab.c"
    break;

  case 238:
#line 793 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 3989 "parser.tab.c"
    break;

  case 239:
#line 794 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 3995 "parser.tab.c"
    break;

  case 240:
#line 798 "parser.y"
                                                                                                                                        {vec = {createnode("CATCH__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4001 "parser.tab.c"
    break;

  case 241:
#line 799 "parser.y"
                                                                                                                                                {vec = {createnode("CATCH__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4007 "parser.tab.c"
    break;

  case 242:
#line 803 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4013 "parser.tab.c"
    break;

  case 243:
#line 804 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4019 "parser.tab.c"
    break;

  case 244:
#line 808 "parser.y"
                                                                                                        {vec = {createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4025 "parser.tab.c"
    break;

  case 245:
#line 809 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4031 "parser.tab.c"
    break;

  case 246:
#line 813 "parser.y"
                                                                                                {vec = {createnode("FINALLY__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Finally", vec);}
#line 4037 "parser.tab.c"
    break;

  case 247:
#line 817 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4043 "parser.tab.c"
    break;

  case 248:
#line 818 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4049 "parser.tab.c"
    break;

  case 249:
#line 822 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4055 "parser.tab.c"
    break;

  case 250:
#line 823 "parser.y"
                                                                                        {vec = {createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4061 "parser.tab.c"
    break;

  case 251:
#line 824 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4067 "parser.tab.c"
    break;

  case 252:
#line 825 "parser.y"
                                                                                                        {vec = {createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4073 "parser.tab.c"
    break;

  case 253:
#line 826 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4079 "parser.tab.c"
    break;

  case 254:
#line 827 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4085 "parser.tab.c"
    break;

  case 255:
#line 828 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4091 "parser.tab.c"
    break;

  case 256:
#line 829 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4097 "parser.tab.c"
    break;

  case 257:
#line 833 "parser.y"
                                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4103 "parser.tab.c"
    break;

  case 258:
#line 834 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4109 "parser.tab.c"
    break;

  case 259:
#line 835 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4115 "parser.tab.c"
    break;

  case 260:
#line 839 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4121 "parser.tab.c"
    break;

  case 261:
#line 840 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4127 "parser.tab.c"
    break;

  case 262:
#line 841 "parser.y"
                                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4133 "parser.tab.c"
    break;

  case 263:
#line 842 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4139 "parser.tab.c"
    break;

  case 264:
#line 846 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4145 "parser.tab.c"
    break;

  case 265:
#line 847 "parser.y"
                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-2].lex) , emp),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4151 "parser.tab.c"
    break;

  case 266:
#line 848 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4157 "parser.tab.c"
    break;

  case 267:
#line 852 "parser.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4163 "parser.tab.c"
    break;

  case 268:
#line 853 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4169 "parser.tab.c"
    break;

  case 269:
#line 857 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4175 "parser.tab.c"
    break;

  case 270:
#line 858 "parser.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4181 "parser.tab.c"
    break;

  case 271:
#line 859 "parser.y"
                                                                                                                {vec = {(yyvsp[-4].str_val),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4187 "parser.tab.c"
    break;

  case 272:
#line 860 "parser.y"
                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4193 "parser.tab.c"
    break;

  case 273:
#line 861 "parser.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4199 "parser.tab.c"
    break;

  case 274:
#line 862 "parser.y"
                                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4205 "parser.tab.c"
    break;

  case 275:
#line 863 "parser.y"
                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4211 "parser.tab.c"
    break;

  case 276:
#line 864 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-7].str_val),createnode("DOT__" + *(yyvsp[-6].lex) , emp),createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4217 "parser.tab.c"
    break;

  case 277:
#line 868 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4223 "parser.tab.c"
    break;

  case 278:
#line 869 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4229 "parser.tab.c"
    break;

  case 279:
#line 873 "parser.y"
                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4235 "parser.tab.c"
    break;

  case 280:
#line 874 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4241 "parser.tab.c"
    break;

  case 281:
#line 875 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4247 "parser.tab.c"
    break;

  case 282:
#line 876 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4253 "parser.tab.c"
    break;

  case 283:
#line 877 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4259 "parser.tab.c"
    break;

  case 284:
#line 878 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4265 "parser.tab.c"
    break;

  case 285:
#line 882 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4271 "parser.tab.c"
    break;

  case 286:
#line 883 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4277 "parser.tab.c"
    break;

  case 287:
#line 887 "parser.y"
                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DimExpr", vec);}
#line 4283 "parser.tab.c"
    break;

  case 288:
#line 891 "parser.y"
                                                                                                {vec = {createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4289 "parser.tab.c"
    break;

  case 289:
#line 892 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4295 "parser.tab.c"
    break;

  case 290:
#line 896 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Expression", vec);}
#line 4301 "parser.tab.c"
    break;

  case 291:
#line 900 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4307 "parser.tab.c"
    break;

  case 292:
#line 901 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4313 "parser.tab.c"
    break;

  case 293:
#line 905 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Assignment", vec);}
#line 4319 "parser.tab.c"
    break;

  case 294:
#line 909 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4325 "parser.tab.c"
    break;

  case 295:
#line 910 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4331 "parser.tab.c"
    break;

  case 296:
#line 911 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4337 "parser.tab.c"
    break;

  case 297:
#line 915 "parser.y"
                                                                                                {vec = {createnode("EQUALTO__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4343 "parser.tab.c"
    break;

  case 298:
#line 916 "parser.y"
                                                                                        {vec = {createnode("PLUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4349 "parser.tab.c"
    break;

  case 299:
#line 917 "parser.y"
                                                                                                {vec = {createnode("MINUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4355 "parser.tab.c"
    break;

  case 300:
#line 918 "parser.y"
                                                                                        {vec = {createnode("MULTET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4361 "parser.tab.c"
    break;

  case 301:
#line 919 "parser.y"
                                                                                        {vec = {createnode("DIVET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4367 "parser.tab.c"
    break;

  case 302:
#line 920 "parser.y"
                                                                                        {vec = {createnode("ANDET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4373 "parser.tab.c"
    break;

  case 303:
#line 924 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 4379 "parser.tab.c"
    break;

  case 304:
#line 925 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("QUEST__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 4385 "parser.tab.c"
    break;

  case 305:
#line 929 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TernaryAction", vec);}
#line 4391 "parser.tab.c"
    break;

  case 306:
#line 933 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 4397 "parser.tab.c"
    break;

  case 307:
#line 934 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("OR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 4403 "parser.tab.c"
    break;

  case 308:
#line 938 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 4409 "parser.tab.c"
    break;

  case 309:
#line 939 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("AND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 4415 "parser.tab.c"
    break;

  case 310:
#line 943 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 4421 "parser.tab.c"
    break;

  case 311:
#line 944 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 4427 "parser.tab.c"
    break;

  case 312:
#line 948 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 4433 "parser.tab.c"
    break;

  case 313:
#line 949 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("POW__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 4439 "parser.tab.c"
    break;

  case 314:
#line 953 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 4445 "parser.tab.c"
    break;

  case 315:
#line 954 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITAND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 4451 "parser.tab.c"
    break;

  case 316:
#line 958 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4457 "parser.tab.c"
    break;

  case 317:
#line 959 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("EQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4463 "parser.tab.c"
    break;

  case 318:
#line 960 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("NEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4469 "parser.tab.c"
    break;

  case 319:
#line 964 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4475 "parser.tab.c"
    break;

  case 320:
#line 965 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4481 "parser.tab.c"
    break;

  case 321:
#line 966 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4487 "parser.tab.c"
    break;

  case 322:
#line 967 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4493 "parser.tab.c"
    break;

  case 323:
#line 968 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4499 "parser.tab.c"
    break;

  case 324:
#line 969 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4505 "parser.tab.c"
    break;

  case 325:
#line 973 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("INSTANCEOF__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceofExpression", vec);}
#line 4511 "parser.tab.c"
    break;

  case 326:
#line 977 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4517 "parser.tab.c"
    break;

  case 327:
#line 978 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEFTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4523 "parser.tab.c"
    break;

  case 328:
#line 979 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("RIGHTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4529 "parser.tab.c"
    break;

  case 329:
#line 980 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("THREEGREAT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4535 "parser.tab.c"
    break;

  case 330:
#line 984 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4541 "parser.tab.c"
    break;

  case 331:
#line 985 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4547 "parser.tab.c"
    break;

  case 332:
#line 986 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4553 "parser.tab.c"
    break;

  case 333:
#line 990 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4559 "parser.tab.c"
    break;

  case 334:
#line 991 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("MULT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4565 "parser.tab.c"
    break;

  case 335:
#line 992 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DIVIDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4571 "parser.tab.c"
    break;

  case 336:
#line 993 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MODULO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4577 "parser.tab.c"
    break;

  case 337:
#line 997 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4583 "parser.tab.c"
    break;

  case 338:
#line 998 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4589 "parser.tab.c"
    break;

  case 339:
#line 999 "parser.y"
                                                                                                        {vec = {createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4595 "parser.tab.c"
    break;

  case 340:
#line 1000 "parser.y"
                                                                                                        {vec = {createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4601 "parser.tab.c"
    break;

  case 341:
#line 1001 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4607 "parser.tab.c"
    break;

  case 342:
#line 1005 "parser.y"
                                                                                                                {vec = {createnode("INCREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreIncrementExpression", vec);}
#line 4613 "parser.tab.c"
    break;

  case 343:
#line 1009 "parser.y"
                                                                                                                {vec = {createnode("DECREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreDecrementExpression", vec);}
#line 4619 "parser.tab.c"
    break;

  case 344:
#line 1013 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4625 "parser.tab.c"
    break;

  case 345:
#line 1014 "parser.y"
                                                                                                        {vec = {createnode("TILDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4631 "parser.tab.c"
    break;

  case 346:
#line 1015 "parser.y"
                                                                                                        {vec = {createnode("NOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4637 "parser.tab.c"
    break;

  case 347:
#line 1016 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4643 "parser.tab.c"
    break;

  case 348:
#line 1017 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4649 "parser.tab.c"
    break;

  case 349:
#line 1021 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4655 "parser.tab.c"
    break;

  case 350:
#line 1022 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4661 "parser.tab.c"
    break;

  case 351:
#line 1023 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4667 "parser.tab.c"
    break;

  case 352:
#line 1027 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("INCREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostIncrementExpression", vec);}
#line 4673 "parser.tab.c"
    break;

  case 353:
#line 1031 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("DECREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostDecrementExpression", vec);}
#line 4679 "parser.tab.c"
    break;

  case 354:
#line 1035 "parser.y"
                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 4685 "parser.tab.c"
    break;

  case 355:
#line 1036 "parser.y"
                                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 4691 "parser.tab.c"
    break;

  case 356:
#line 1040 "parser.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchExpression", vec);}
#line 4697 "parser.tab.c"
    break;


#line 4701 "parser.tab.c"

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
#line 1043 "parser.y"


typedef long long ll;
set<char> escapes = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\'', '\"', '\?', '\\'};


void dfs(Node* root){
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
	string inp = argv[1];
	string outp = argv[2];
    try{
        freopen(inp.c_str(), "r", stdin);
        freopen(outp.c_str(), "w", stdout);
        yyparse();
        cout<<"strict digraph {\n";
        make_ast(root, root, 0);
        revise_ast(root, root, 0);
        dfs(root);
        cout<<"}\n";
    }catch (...){
        cerr << "Compilation Error\n";
    }
    return 0;
}
