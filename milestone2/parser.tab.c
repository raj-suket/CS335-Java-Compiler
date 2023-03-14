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
	int yyerror(const char* s)
	{
		printf("ERROR_31413\n");
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
			if(children[i] == NULL){
				cout << "SOMETHING ERORRROR\n"; 
			}
			temp->children.push_back(children[i]);
		}
		return temp;
	}

	Node* root;

	vector<Node *> emp;
	vector<Node *> vec;

	// boolean to decide whether variable encountered is declared or referenced
	int to_declare = 0;
	int type_id = 0;

	int current_scope = 0;
	void hide_scope(){
		current_scope--;
	}

	void incr_scope(){
		current_scope++;
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
#define YYLAST   3911

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  223
/* YYNRULES -- Number of rules.  */
#define YYNRULES  441
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  830

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
       0,   289,   289,   314,   318,   322,   326,   327,   331,   332,
     336,   337,   341,   342,   343,   347,   348,   352,   356,   360,
     361,   365,   366,   370,   371,   375,   376,   377,   378,   379,
     380,   381,   382,   386,   387,   391,   392,   396,   397,   401,
     402,   403,   407,   408,   412,   413,   417,   421,   425,   425,
     425,   425,   426,   426,   426,   426,   427,   427,   427,   428,
     428,   428,   432,   433,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   450,   454,   455,   459,   460,   464,
     465,   466,   467,   471,   472,   473,   477,   477,   477,   478,
     478,   478,   482,   483,   487,   488,   488,   492,   493,   497,
     498,   502,   506,   506,   506,   507,   507,   507,   508,   508,
     508,   509,   509,   509,   510,   510,   510,   511,   511,   511,
     512,   512,   512,   513,   513,   513,   517,   517,   518,   518,
     519,   523,   524,   528,   528,   529,   529,   533,   537,   538,
     542,   543,   547,   547,   551,   551,   555,   555,   555,   556,
     556,   556,   557,   557,   557,   558,   558,   558,   562,   562,
     563,   563,   567,   568,   569,   570,   574,   575,   576,   577,
     578,   579,   580,   581,   585,   586,   587,   588,   592,   593,
     597,   598,   602,   603,   607,   608,   612,   616,   616,   617,
     617,   618,   618,   619,   619,   623,   624,   625,   626,   627,
     628,   632,   633,   634,   635,   636,   640,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   655,
     656,   660,   664,   668,   672,   676,   677,   678,   679,   680,
     681,   682,   686,   690,   694,   698,   702,   703,   704,   705,
     709,   710,   714,   715,   719,   723,   724,   728,   729,   733,
     737,   741,   745,   746,   750,   751,   755,   755,   755,   756,
     756,   756,   757,   757,   757,   758,   758,   758,   759,   759,
     759,   760,   760,   760,   761,   761,   761,   762,   762,   762,
     766,   766,   766,   767,   767,   767,   768,   768,   768,   769,
     769,   769,   770,   770,   770,   771,   771,   771,   772,   772,
     772,   773,   773,   773,   777,   778,   782,   786,   787,   791,
     795,   799,   800,   804,   805,   809,   810,   814,   818,   822,
     823,   824,   828,   829,   833,   834,   838,   839,   843,   844,
     848,   852,   853,   857,   858,   859,   860,   861,   862,   863,
     864,   868,   869,   870,   874,   875,   876,   877,   881,   882,
     883,   887,   888,   892,   893,   894,   895,   896,   897,   898,
     899,   903,   904,   908,   909,   910,   911,   912,   913,   917,
     918,   922,   926,   927,   931,   935,   936,   940,   944,   945,
     946,   950,   951,   952,   953,   954,   955,   959,   960,   964,
     968,   969,   973,   974,   978,   979,   983,   984,   988,   989,
     993,   994,   995,   999,  1000,  1001,  1002,  1003,  1004,  1008,
    1012,  1013,  1014,  1015,  1019,  1020,  1021,  1025,  1026,  1027,
    1028,  1032,  1033,  1034,  1035,  1036,  1040,  1044,  1048,  1049,
    1050,  1051,  1052,  1056,  1057,  1058,  1059,  1063,  1067,  1071,
    1072,  1076
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
  "ClassDeclaration", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7",
  "$@8", "$@9", "$@10", "Modifiers", "Modifier", "ClassExtends",
  "ClassBody", "ClassBodyDeclarations", "ClassBodyDeclaration",
  "ClassMemberDeclaration", "FieldDeclaration", "$@11", "$@12", "$@13",
  "$@14", "VariableDeclaratorList", "VariableDeclarator", "$@15",
  "VariableDeclaratorId", "VariableInitializer", "MethodDeclaration",
  "MethodHeader", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31",
  "MethodDeclarator", "$@32", "$@33", "FormalParameterList",
  "FormalParameter", "$@34", "$@35", "Throws", "ClassTypeList",
  "MethodBody", "InstanceInitializer", "$@36", "StaticInitializer", "$@37",
  "ConstructorDeclaration", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43",
  "$@44", "$@45", "ConstructorDeclarator", "$@46", "$@47",
  "ConstructorBody", "ExplicitConstructorInvocation", "ArrayInitializer",
  "VariableInitializerList", "Block", "BlockStatements", "BlockStatement",
  "LocalVariableDeclarationStatement", "LocalVariableDeclaration", "$@48",
  "$@49", "$@50", "$@51", "Statement", "StatementNoShortIf",
  "StatementWithoutTrailingSubstatement", "$@52", "AssertStatement",
  "EmptyStatement", "LabeledStatement", "LabeledStatementNoShortIf",
  "ExpressionStatement", "StatementExpression", "IfThenStatement",
  "IfThenElseStatement", "IfThenElseStatementNoShortIf", "SwitchStatement",
  "SwitchBlock", "SwitchBlockStatementGroups", "SwitchLabels",
  "SwitchBlockStatementGroup", "SwitchLabel", "CaseConstants",
  "WhileStatement", "WhileStatementNoShortIf", "DoStatement",
  "ForStatement", "ForStatementNoShortIf", "BasicForStatement", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62",
  "$@63", "$@64", "$@65", "$@66", "$@67", "$@68",
  "BasicForStatementNoShortIf", "$@69", "$@70", "$@71", "$@72", "$@73",
  "$@74", "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "$@82",
  "$@83", "$@84", "ForInit", "ForUpdate", "StatementExpressionList",
  "EnhancedForStatement", "EnhancedForStatementNoShortIf",
  "BreakStatement", "ContinueStatement", "ReturnStatement",
  "ThrowStatement", "SynchronizedStatement", "TryStatement", "Catches",
  "CatchClause", "CatchType", "CatchTypes", "Finally", "Primary",
  "PrimaryNoNewArray", "ClassInstanceCreationExpression",
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

#define YYPACT_NINF (-608)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-437)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1789,  -608,  -608,  -608,    24,  -608,    24,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,   131,  -608,  1738,  -608,  1738,
    -608,  -608,  -608,   454,  -608,    24,    24,  -608,  -608,   329,
     135,  -608,  -608,  1738,  -608,  -608,  -608,  -608,    24,   269,
    -608,    24,    24,    78,   115,  -608,    24,    24,    24,  -608,
     107,    24,   516,  -608,  -608,  -608,    24,  -608,   638,  -608,
      19,    43,    17,  -608,  -608,   151,   107,  -608,   153,  -608,
    -608,    78,   115,   157,  -608,   115,  -608,  -608,  -608,  -608,
    -608,   164,  -608,  -608,  -608,  -608,   168,  -608,  -608,   168,
    -608,   770,  1399,  -608,  -608,  -608,  -608,   121,  -608,   182,
    -608,  -608,    24,    24,  -608,    24,  -608,    24,    24,  -608,
     177,  -608,  -608,  -608,  -608,  -608,   182,    24,    24,    24,
      24,    24,   237,   221,   221,  -608,  -608,    24,    24,  -608,
    -608,  2907,  -608,  -608,  -608,  -608,  -608,  -608,  -608,   157,
      25,    45,    46,  -608,   115,  -608,  -608,   270,   270,  -608,
     301,  -608,   248,   270,   270,  -608,   246,    24,    24,    24,
      24,    24,  -608,  -608,  2185,   128,   144,  2185,  2561,   279,
     281,  2185,  -608,  2185,   193,  -608,  2136,  -608,   333,   335,
     358,  -608,  2185,   182,  -608,   373,   362,  -608,   326,  -608,
    1546,  2993,  -608,  -608,   346,  -608,  -608,   182,  -608,  -608,
    -608,  -608,   349,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,   403,   387,    35,
    -608,   505,   550,    52,  -608,  -608,   566,  -608,  -608,   287,
     302,   322,   390,   392,   364,   400,    24,  -608,  -608,  -608,
    -608,   408,   409,   376,   364,  -608,    24,   381,   384,   434,
     364,  -608,  -608,   270,   270,   301,   270,   270,   364,   400,
     193,  2185,  2185,  2185,   427,  2185,   833,  -608,  -608,    20,
    -608,  -608,  -608,   149,   474,   473,   422,   477,   172,   405,
    -608,   214,   256,   219,  -608,  -608,  -608,  -608,   287,  -608,
    -608,  -608,  -608,  -608,   412,  -608,   417,   245,  -608,  -608,
    -608,   358,   401,  1619,   450,   452,   453,   456,   457,   458,
     460,   462,  2185,  -608,   438,   469,   328,  -608,   441,    24,
    2185,  2185,   445,    47,    24,  2185,  2561,   212,  2311,  2185,
      24,  -608,  -608,  -608,  -608,  -608,  -608,  -608,    37,  2185,
    -608,  -608,  -608,  -608,  -608,  -608,  2185,  -608,  -608,  1351,
     449,    24,   400,  3079,  -608,   157,  1351,   451,  -608,  -608,
    -608,  -608,  -608,  2623,  -608,   364,  -608,   459,   364,  -608,
     400,  -608,   146,   461,  -608,  -608,  -608,  2185,  -608,  2185,
    -608,  2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,
    2185,   193,  2185,  2185,  2185,  2185,  2185,  2185,  2185,  2185,
    2185,  2185,  -608,  -608,   480,   512,  1192,   463,  1192,   464,
    1192,   466,  1192,   467,   475,  -608,  3601,   469,  -608,    30,
    3644,   469,    30,  -608,   486,   476,   478,  -608,   502,   182,
      47,  -608,  -608,   301,   482,  -608,    24,   529,  -608,  -608,
    -608,  -608,    41,  -608,   485,   301,    24,    24,   511,  -608,
     494,  -608,  -608,  1351,    58,  -608,  -608,  -608,   543,  -608,
    -608,   185,   524,   594,  3165,  3251,   546,    64,  -608,  1912,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  2185,   885,   498,
     503,   474,   563,  -608,   473,   422,   477,   172,   405,   405,
     214,   214,   168,  -608,   214,   214,   256,   256,   256,   219,
     219,  -608,  -608,  -608,  2185,  2185,  -608,  -608,   513,   574,
    2185,   519,   520,   522,  2185,   523,   526,  3500,   506,  -608,
     221,  -608,   115,    79,   221,  -608,  3658,   561,   182,   959,
    -608,  -608,  -608,  2561,   562,    24,  2185,  -608,  -608,   301,
     301,  3701,  -608,    24,  -608,  1351,  -608,    24,  3715,  3758,
     266,  -608,  3337,  -608,    32,  -608,   537,  -608,  -608,    14,
    -608,  -608,   561,  -608,  2185,   535,   538,  2185,   155,   541,
     545,   155,  2185,   547,   549,   544,   576,   580,   581,   613,
    -608,   608,   609,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,   115,  -608,    80,    57,  -608,  -608,   264,   959,    24,
    -608,   590,  -608,  -608,    85,   591,    24,  -608,  -608,   567,
     105,   569,   106,   238,  -608,   593,  -608,  2051,  -608,  -608,
    -608,   570,  2561,   572,  -608,   155,   155,   575,   574,   582,
     578,   583,  -608,  1619,   610,   614,   615,   616,   618,   619,
     620,   621,  2185,  2185,  3500,  2561,  -608,  -608,  2185,   642,
    -608,    66,  2721,  -608,  -608,    24,   657,    24,   178,  3772,
    -608,   591,  -608,   597,  -608,   601,  3815,  3829,  -608,  -608,
    -608,  -608,   155,   604,   617,  -608,   623,  -608,  -608,  2561,
     671,  1192,   622,  1192,   624,  1192,   625,  1192,   629,   633,
     635,  -608,  -608,   359,  -608,  -608,  -608,  2817,  -608,  -608,
    3423,  -608,  -608,    24,   220,   182,  -608,   124,  -608,  -608,
     634,   133,   636,   134,   637,  -608,  -608,  2561,  -608,  2561,
    2561,  -608,  2185,   640,  2185,   641,   644,   647,  2185,   648,
     651,  3500,  3500,  -608,  2185,  -608,  -608,   182,  -608,  -608,
    -608,   652,  -608,   653,  -608,  2561,  2561,  -608,  2561,  -608,
    -608,   658,  2185,   659,   661,   155,  2185,   662,   665,   660,
     663,  -608,  -608,  -608,  -608,  -608,  2561,  -608,  -608,  -608,
    3500,   667,   155,   155,   670,   669,   672,   673,  -608,  3500,
    -608,  -608,   155,   674,   675,  -608,   676,  -608,  -608,  3573,
    -608,   677,  -608,  -608,  3573,  -608,  3573,  3573,   646,   649,
     706,   736,  -608,  -608,  -608,  3573,  3573,  -608,  3573,  -608,
    -608,  1619,  2185,  2185,  3573,  3573,  -608,  -608,  -608,   737,
     681,   682,  -608,  2185,  3573,  3573,   683,   664,  3573,  3573
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    68,    52,    69,     0,    70,     0,    66,    65,    64,
      20,    67,    71,    72,    73,     0,    10,    13,    11,    14,
      15,    17,    19,     0,    62,     0,     0,     2,     6,     0,
       0,     1,    16,    12,    48,    63,    53,    60,     0,     0,
      18,     0,     0,     0,     0,     7,     0,     0,     0,    22,
       0,     0,     0,    23,    49,    57,     0,    54,   142,    61,
       0,     0,     0,    36,    35,     0,     0,    33,     0,    21,
      24,     0,     0,    47,    74,     0,    41,     5,     4,    75,
      85,    67,   117,    39,    40,    89,    37,    38,    43,    42,
      46,     0,   142,    77,    79,    83,    84,     0,    82,     0,
      80,    81,     0,     0,    28,     0,    29,     0,     0,    26,
       0,    34,    31,    50,    58,    55,     0,     0,     0,     0,
       0,     0,     0,    44,    45,   114,    86,     0,     0,    76,
      78,   206,   141,   101,   140,   143,   158,   150,   156,     8,
       0,     0,     0,    25,     0,   145,   126,   118,   124,    97,
      90,    92,    94,   106,   112,   372,     0,     0,     0,     0,
       0,     0,   147,   153,     0,     0,     0,     0,   206,     0,
       0,     0,     3,     0,     0,   181,     0,   221,     0,     0,
      71,   334,     0,     0,   189,     0,     6,   333,   378,   187,
       0,   206,   183,   184,     0,   185,   195,     0,   210,   208,
     196,   209,     0,   197,   198,   211,   199,   212,   200,   252,
     253,   213,   214,   215,   217,   216,   218,   433,   331,   337,
     341,   338,   339,   340,   332,   225,     0,   226,   227,     0,
     228,   229,     0,     0,     0,     0,     0,    27,    30,    32,
      51,     0,     0,     0,     0,   125,     0,     0,     0,     0,
       0,   113,   373,   115,   121,    87,   103,   109,     0,     0,
       0,     0,     0,     0,     0,     0,   434,   337,   340,     0,
     374,   376,   375,   387,   390,   392,   394,   396,   398,   400,
     408,   403,   410,   414,   417,   421,   422,   425,   428,   435,
     436,   431,   432,   312,     0,   314,     0,   434,   338,   339,
     427,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   426,     0,     0,     0,   315,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,   193,   191,   180,   182,   186,   207,   224,     0,     0,
     386,   385,   381,   383,   384,   382,     0,   438,   437,     0,
       0,     0,     0,   206,   157,     9,     0,     0,   130,   119,
      93,    91,    98,     0,   107,     0,   122,     0,     0,   110,
       0,   154,     0,     0,   424,   430,   423,     0,   429,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   311,   313,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   336,     0,   363,   370,     0,
       0,   365,     0,   316,   349,     0,     0,   317,     0,     0,
     319,   323,   320,   190,     0,   222,     0,     0,   335,     7,
     342,   353,     0,   361,     0,   188,     0,     0,   348,   343,
       0,   377,   133,     0,     0,   131,   161,   138,   137,   151,
     165,     0,   334,   378,   206,   206,   433,     0,   129,     0,
      96,   100,    99,   116,    88,   104,   148,     0,     0,     0,
       0,   391,     0,   388,   393,   395,   397,   399,   401,   402,
     407,   405,     0,   409,   406,   404,   411,   412,   413,   416,
     415,   419,   420,   418,     0,     0,   305,   308,     0,   304,
       0,     0,     0,     0,     0,     0,     0,   206,     0,   369,
     364,   367,   347,     0,   366,   368,     0,     0,     0,     0,
     330,   322,   321,   206,     0,     0,     0,   354,   351,   194,
     192,     0,   352,     0,   135,     0,   159,     0,     0,     0,
       0,   164,   206,   163,     0,   127,     0,   174,   178,     0,
     439,   440,     0,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
     232,     0,   195,   202,   203,   204,   205,   254,   255,   371,
     345,   344,   357,     0,     0,   235,   318,   326,     0,     0,
     249,     0,   362,   355,     0,   134,     0,   132,   139,     0,
       0,     0,     0,     0,   162,     0,   176,     0,   175,   441,
     389,     0,   206,     0,   307,     0,     0,     0,   306,     0,
       0,     0,   278,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   206,   346,   358,     0,     0,
     239,     0,   206,   240,   242,     0,   327,     0,     0,     0,
     356,   136,   169,     0,   167,     0,     0,     0,   177,   179,
     251,   309,     0,     0,     0,   266,     0,   272,   275,   206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   223,   233,     0,   247,   246,   238,   206,   241,   237,
     244,   243,   328,     0,     0,     0,   359,     0,   168,   166,
       0,     0,     0,     0,     0,   260,   263,   206,   269,   206,
     206,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   206,   245,     0,   236,   329,     0,   324,   360,
     170,     0,   172,     0,   257,   206,   206,   267,   206,   273,
     276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   248,   325,   171,   173,   206,   261,   264,   270,
     206,     0,     0,     0,     0,     0,     0,     0,   302,   206,
     258,   310,     0,     0,     0,   290,     0,   296,   299,   206,
     234,     0,   284,   287,   206,   293,   206,   206,     0,     0,
       0,     6,   303,   201,   281,   206,   206,   291,   206,   297,
     300,     0,     0,     0,   206,   206,   285,   288,   294,     0,
       0,     0,   282,     0,   206,   206,     0,     0,   206,   206
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -608,   117,  -608,  -608,  -608,    -4,   291,  -608,  -608,   740,
    -608,  -608,   136,  -608,  -608,   639,  -608,   689,   -43,  -149,
    -239,  -608,  -157,   -53,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,     5,   -19,   685,   -64,  -608,
     666,  -608,  -608,  -608,  -608,  -608,  -608,  -150,   514,  -608,
    -517,  -456,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
     308,  -608,  -608,   407,   222,  -608,  -608,  -180,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,   207,  -608,  -608,  -224,  -608,   -69,  -608,
     -98,  -124,  -185,  -608,  -276,  -608,  -608,  -608,  -608,  -158,
     -13,  -317,  -608,  -608,  -608,  -608,  -608,  -608,  -355,  -608,
    -608,  -608,  -608,   202,  -608,   114,   119,  -607,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -380,  -589,
    -461,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
     338,  -565,  -608,   341,   419,  -608,   272,  -307,   734,  2154,
     542,  -404,  -608,   470,  -207,   -75,  2150,  -608,  1959,  -608,
    -608,  -552,  -608,  -608,   394,   395,   393,   397,   399,    88,
    -608,    31,   -30,    15,  -148,   739,   980,   309,  1204,  1428,
    1652,  -608,  -608
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,   187,    83,    84,   266,   140,    15,    16,    17,
      18,    19,    20,    21,    52,    53,    66,    67,   189,    86,
      87,    88,    89,    90,    22,    41,    71,   144,    25,    43,
      75,    42,    72,    26,    44,   190,    24,    57,    59,    92,
      93,    94,    95,   159,   367,   119,   247,   150,   151,   249,
     152,   470,    96,    97,   160,   368,   120,   250,   161,   369,
     121,   251,   157,   365,   117,   244,   158,   366,   118,   245,
     147,   241,   242,   454,   455,   543,   606,   352,   458,   133,
      98,    99,   100,   116,   101,   127,   258,   102,   234,   128,
     259,   103,   235,   137,   232,   233,   354,   464,   471,   559,
     134,   700,   192,   193,   194,   330,   324,   447,   446,   195,
     691,   196,   197,   198,   199,   200,   583,   201,   202,   203,
     204,   584,   205,   595,   651,   652,   653,   654,   693,   206,
     585,   207,   208,   586,   209,   304,   766,   305,   745,   306,
     746,   307,   717,   308,   748,   309,   719,   310,   720,   311,
     679,   587,   634,   815,   635,   805,   636,   806,   637,   794,
     638,   808,   639,   796,   640,   797,   641,   789,   508,   627,
     509,   210,   588,   211,   212,   213,   214,   215,   216,   430,
     431,   599,   656,   432,   217,   218,   267,   220,   221,   222,
     268,   442,   224,   417,   418,   123,   443,   270,   225,   226,
     346,   272,   483,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,   135,    30,    74,    35,    23,   334,   191,   114,   255,
     302,   115,   620,   558,   124,    85,   523,   316,   145,   300,
     440,   373,    23,   313,    23,   315,   605,   405,   511,   617,
     513,   449,   515,   657,   379,   371,   673,   674,    23,    38,
     236,    38,    60,    61,    62,   701,    65,    68,   126,    85,
    -231,   507,    73,   507,    73,   507,   536,   507,    27,   428,
     236,   236,   110,    91,   359,    38,    27,  -230,   648,   469,
     364,    27,    35,   545,   156,   649,   429,   648,   370,   545,
     240,   618,   658,   714,   649,   323,   436,    73,    73,   661,
     701,   436,   104,   380,   536,   536,   694,    91,   237,   336,
     536,   139,   105,   139,   139,    56,  -231,   615,  -231,   108,
     628,   372,   537,   374,   375,   376,   106,   378,   238,   239,
     536,   536,   593,  -230,   650,  -230,   107,   188,   459,   546,
     506,    31,   506,   696,   506,   555,   506,   604,   736,   536,
     704,    27,    36,    37,   610,   612,   476,   332,   536,   536,
     591,   647,   493,    32,    58,    45,   660,    38,    54,    55,
     131,   669,    27,   297,   628,   628,   774,   297,   435,    32,
      73,    35,   167,    38,   433,    38,   663,   665,    27,    38,
     445,    63,   762,   783,   784,   473,    73,   188,   475,    27,
     122,   171,    64,   791,   132,   739,   387,   172,   173,    38,
     582,   293,    76,  -144,   741,   743,   381,   319,    40,   174,
     519,   628,   122,   624,   519,   382,   507,   295,   477,   136,
     136,   131,   248,    77,   109,   388,   112,    27,   548,   465,
     178,    78,   355,   181,   146,   146,   149,   146,   146,   399,
     419,   422,   492,   440,   136,   136,    27,   449,   186,   705,
     143,   501,   502,   503,   394,   707,    73,   297,   297,   297,
     535,   297,   711,   713,   248,   156,   436,   327,   400,   401,
     507,   507,   655,   -95,   146,   146,   149,   146,   146,   534,
     334,   666,   294,   296,   395,   186,    38,   437,   328,   329,
     438,   737,   248,   396,   628,    46,   539,   540,   457,    73,
      27,   723,   397,   725,   347,   727,   452,   729,   186,   155,
     138,   628,   628,   452,   243,   398,   246,   507,   252,  -435,
     436,   628,   303,   348,   312,    47,   507,   582,   507,   560,
     507,   530,   507,    48,   162,   163,    49,    50,  -435,  -436,
     552,   613,   520,  -434,   438,    73,   524,    73,   327,   463,
     521,    38,    73,   525,   453,   319,    51,   680,  -436,   580,
     -47,   453,  -434,   149,   496,   497,   498,   334,    39,   328,
     329,   420,   416,   733,   734,   600,   326,   297,   320,   297,
     297,   297,   297,   297,   297,   297,   297,    73,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   141,   142,
     507,   321,   188,   219,   188,   506,   188,   506,   188,   506,
     544,   506,   499,   500,   582,   582,   325,   507,   507,   335,
     490,   491,   337,   494,   495,   338,   148,   507,   153,   154,
     596,   339,    73,   349,    35,   350,   424,   389,   390,   353,
     219,   149,   391,   186,   439,   351,   392,   149,   358,    73,
     393,   356,   357,   582,   361,   448,   362,     1,   590,   363,
     188,   188,   582,   219,   671,   253,   254,    34,   256,   257,
     186,   377,   803,   297,   297,   488,   489,   803,   383,   803,
     803,   384,     3,   385,   386,   402,   435,   692,   803,   803,
     403,   803,   404,   406,   608,   407,   408,   803,   803,   409,
     410,   411,   452,   412,   581,   413,     5,   803,   803,   415,
    -379,   803,   803,   416,   423,   334,     7,     8,   427,     9,
     456,   721,   468,   504,  -379,   597,   505,   646,    11,   526,
    -379,    12,   474,   478,   598,   819,   510,   512,    13,   514,
     516,    73,    46,    73,    14,   529,   517,   527,   188,   528,
     453,   535,  -379,   533,   541,  -380,  -379,   538,   547,   747,
     297,   749,   750,   149,   149,  -379,   542,   549,   554,  -380,
     562,   340,    47,   580,   600,  -380,   563,   564,   589,    35,
      48,   186,   186,    69,    50,   341,   567,   767,   768,   568,
     769,   342,   570,   571,   597,   572,   574,  -380,   219,   575,
     594,  -380,   702,    51,   616,   420,   621,   738,   780,   622,
    -380,  -434,   671,   343,   625,   632,   550,   344,   626,   633,
     630,   692,   631,   642,   643,   219,   345,   644,   -47,    73,
    -434,   645,  -201,   659,   579,   248,   667,   328,   329,   763,
     662,     1,   664,   670,   297,   672,   675,    76,   188,   677,
     186,    73,   601,   681,   678,   676,   695,   682,   683,   684,
     149,   685,   686,   687,   688,   703,     3,   439,    77,   186,
     708,   448,    27,   223,   709,   715,    78,   188,   219,   188,
     219,   188,   219,   188,   219,   722,   779,   829,   716,   811,
       5,    70,   812,   188,   718,   724,   188,   726,   728,   597,
       7,     8,   730,     9,   731,    79,   732,   740,   744,   742,
     223,    80,    81,   752,   754,    12,   149,   755,   760,   761,
     756,   758,    13,   149,   759,   764,   765,    82,    14,   770,
     297,   778,   772,   223,   773,   776,   219,   219,   777,   186,
     782,   785,   786,   787,   788,   792,   793,   795,   804,   813,
     814,   823,   824,   825,   828,   111,   113,   781,   130,    33,
     360,   579,   186,   467,   619,   697,   790,   607,   531,   186,
     698,   532,   466,     1,   149,   481,   802,   485,   484,    76,
       0,   807,   486,   809,   810,   487,   421,   561,     0,   219,
       0,     0,   816,   817,     0,   818,   186,     0,     3,     0,
      77,     0,   822,     0,    27,   219,     0,    73,    78,     0,
       0,   827,   761,     0,   186,   781,   790,   186,     0,     0,
       0,     0,     5,     0,   219,     0,     0,     0,     0,     0,
       0,     0,     7,     8,   186,     9,   186,   186,  -378,     0,
     219,     0,     0,   219,    11,     0,     0,    12,   579,   579,
       0,     0,  -378,     0,    13,   327,     0,     0,  -378,   125,
      14,     0,   186,   186,     0,   186,     0,     0,   223,     0,
     227,     0,     0,     0,     0,     0,   328,   329,     0,     0,
    -378,     0,     0,   186,  -378,     0,     0,   579,     0,     0,
       0,     0,     0,  -378,   219,   223,   579,   219,   219,     0,
       0,   298,     0,     0,     0,   298,   801,   227,     0,     0,
       0,   801,     0,   801,   801,     0,   219,   219,     0,    27,
       0,     0,   801,   801,   219,   801,     0,   172,   173,   260,
     227,   801,   801,     0,     0,     0,     0,     0,     0,   174,
     262,   801,   801,     0,   219,   801,   801,     0,   223,     0,
     223,   219,   223,   219,   223,   219,     0,   219,     0,   219,
     178,   264,     1,   181,     0,     0,     0,   265,     0,   219,
       0,     0,   219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,   219,
       0,   219,   219,    27,     0,   298,   298,   298,     0,   298,
       0,     0,     0,   219,   219,     0,   223,   223,     0,     0,
       0,     5,     0,     0,     0,     0,     0,   219,   219,     0,
     219,     7,     8,     0,     9,     0,     0,   219,     0,     0,
       0,     0,     0,    11,     0,     0,    12,     0,   219,     0,
       0,     0,   219,    13,   219,   219,     0,     0,     0,    14,
       0,   219,     0,     0,   219,     0,     0,     0,     0,   223,
       0,   219,     0,     0,     0,   227,   219,     0,   219,   219,
       0,     0,     0,     0,     0,   223,     0,   219,   219,     0,
     219,     0,     0,     0,     0,     0,   219,   219,     0,     0,
       0,     0,   227,     0,   223,     0,   219,   219,     0,     0,
     219,   219,     0,     0,     0,     0,     0,     0,     0,     0,
     223,   228,     0,   223,     0,   298,     0,   298,   298,   298,
     298,   298,   298,   298,   298,     0,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   227,     0,   227,   228,   227,
       0,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,     0,   223,   223,     0,
       0,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,   223,     0,     0,
       0,     0,     0,     0,   223,     1,     0,     0,     0,     0,
       0,    76,     0,   227,   227,     0,     0,     0,     0,   167,
       0,   298,   298,     0,   223,     0,     0,     0,     0,     0,
       3,   223,    77,   223,     0,   223,    27,   223,   171,   223,
      78,     0,     0,     0,   172,   173,     0,     0,     0,   223,
       0,     0,   223,     0,     5,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     7,     8,   227,     9,     0,   223,
       0,   223,   223,     0,     0,     0,    11,   178,     0,    12,
     181,     0,   227,   223,   223,     0,    13,     0,     0,     0,
     184,     0,    14,     0,     0,     0,     0,   223,   223,     0,
     223,   227,     0,     0,     0,     0,     0,   223,   298,     0,
       0,     0,     0,     0,     0,     0,   228,   227,   223,     0,
     227,     0,   223,     0,   223,   223,     0,     0,     0,     0,
       0,   223,     0,     0,   223,     0,     0,     0,     0,     0,
       0,   223,     0,   228,     0,   229,   223,     0,   223,   223,
       0,     0,     0,     0,     0,     0,     0,   223,   223,     0,
     223,     0,     0,     0,     1,     0,   223,   223,     0,     0,
      76,   227,     0,     0,   227,   227,   223,   223,     0,     0,
     223,   223,   229,     0,     0,     0,     0,     0,     0,     3,
       0,    77,   298,   227,   227,    27,   228,     0,   228,    78,
     228,   227,   228,     0,     0,   229,     0,     0,     0,     0,
       0,     0,     1,     5,     0,     0,     0,     0,    76,     0,
       0,   227,     0,     7,     8,     0,     9,     0,   227,     0,
     227,     0,   227,     0,   227,    11,   227,     3,    12,    77,
       0,     0,     0,    27,     0,    13,   227,    78,     0,   227,
       0,    14,     0,     0,   228,   228,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     0,   227,     0,   227,   227,
       0,     7,     8,     0,     9,     0,   129,     0,   298,     0,
     227,   227,    80,    81,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    13,   227,   227,     0,   227,    82,    14,
       0,     0,     0,     0,   227,     0,     0,   228,     0,     0,
       0,     0,     0,     0,     0,   227,     0,     0,     0,   227,
       0,   227,   227,   228,     0,     0,     0,     0,   227,     0,
       0,   227,     0,     0,     0,     0,     0,     0,   227,     0,
     229,     0,   228,   227,     0,   227,   227,     0,     0,     0,
       0,     0,     0,     0,   227,   227,     0,   227,   228,     1,
       0,   228,     0,   227,   227,    76,     0,   229,     0,   230,
       0,     0,     0,   227,   227,     0,     0,   227,   227,     0,
       0,     0,     0,     0,     3,     0,    77,     0,     0,     0,
      27,     0,     0,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   230,     0,     5,     0,
       0,     0,   228,     0,     0,   228,   228,     0,     7,     8,
     229,     9,   229,     0,   229,     0,   229,     0,     0,   230,
      11,     0,     1,    12,   228,   228,     0,     0,    76,     0,
      13,     0,   228,     0,   331,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,     0,    77,
       0,     0,   228,    27,     0,     0,     0,    78,     0,   228,
       0,   228,     0,   228,     0,   228,     0,   228,   229,   229,
       0,     5,     0,     0,     0,     0,     0,   228,     0,     0,
     228,     7,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,    12,   228,     0,   228,
     228,     0,     0,    13,     0,     0,     0,   184,     0,    14,
       0,   228,   228,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,     0,     0,   228,   228,     0,   228,     0,
       0,     0,     0,     0,     0,   228,     0,   229,     0,     0,
       0,     1,     0,     0,     0,     0,   228,     0,     0,     0,
     228,     2,   228,   228,   230,     0,   229,     0,     0,   228,
       0,     0,   228,     0,     0,     0,     3,     0,     0,   228,
       0,     0,   229,     0,   228,   229,   228,   228,     0,     0,
       0,   230,     0,   231,     0,   228,   228,     0,   228,     0,
       5,     0,     1,     0,   228,   228,     0,     0,     0,     0,
       7,     8,     2,     9,   228,   228,     0,     0,   228,   228,
       0,    10,    11,     0,     0,    12,     0,     3,     0,     0,
     231,     0,    13,     0,     0,     0,   229,     0,    14,   229,
     229,     0,     0,     0,   230,     0,   230,     4,   230,     0,
     230,     5,     0,   231,     0,     0,     0,     6,   229,   229,
       0,     7,     8,     0,     9,     0,   229,     0,     0,     0,
       0,     0,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    13,     0,     0,   229,     0,     0,    14,
       0,     0,     0,   229,     0,   229,     0,   229,     0,   229,
       0,   229,   230,   230,     0,     0,     0,     0,     0,     0,
       0,   229,     0,     0,   229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229,     0,   229,   229,     0,     0,   556,     0,   167,
       0,     0,     0,     0,     0,   229,   229,     0,     0,     0,
       0,     0,     0,     0,     0,   230,    27,     0,   171,   229,
     229,   469,   229,     0,   172,   173,   260,     0,   261,   229,
       0,   230,     0,     0,     0,     0,   174,   262,     0,     0,
     229,   263,     0,     0,   229,     0,   229,   229,   231,   557,
     230,     0,     0,   229,     0,     0,   229,   178,   264,     0,
     181,     0,     0,   229,   265,     0,   230,     0,   229,   230,
     229,   229,     0,     0,     0,   231,     0,     0,     0,   229,
     229,     0,   229,     0,     0,     0,     0,     0,   229,   229,
       0,     0,     0,     0,     0,     0,     0,     0,   229,   229,
       0,     0,   229,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230,     0,     0,   230,   230,     0,     0,     0,   231,     0,
     231,     0,   231,     0,   231,     0,     0,     0,   167,     0,
       0,     0,   230,   230,     0,     0,     0,     0,     0,     0,
     230,     0,     0,     0,     0,    27,     0,   171,     0,     0,
     469,     0,     0,   172,   173,   260,     0,   261,     0,     0,
     230,     0,     0,     0,     0,   174,   262,   230,     0,   230,
     263,   230,     0,   230,     0,   230,   231,   231,   668,     0,
       0,     0,     0,   271,     0,   230,   178,   264,   230,   181,
       0,     0,   271,   265,     0,   271,     0,     0,     0,     0,
       0,   271,     0,     0,     0,   230,     0,   230,   230,     0,
       0,     0,     0,   167,     0,     0,     0,     0,     0,   230,
     230,     0,     0,     0,     0,     0,     0,     0,     0,   231,
      27,     0,   171,   230,   230,     0,   230,     0,   172,   173,
     260,     0,   261,   230,     0,   231,     0,     0,     0,     0,
     174,   262,     0,     0,   230,   263,     0,     0,   230,     0,
     230,   230,   167,     0,   231,     0,     0,   230,     0,   317,
     230,   178,   264,     0,   181,     0,     0,   230,   265,    27,
     231,   171,   230,   231,   230,   230,     0,   172,   173,   260,
       0,   261,     0,   230,   230,     0,   230,     0,     0,   174,
     262,     0,   230,   230,   263,     0,     0,     0,     0,     0,
       0,     0,   230,   230,     0,     0,   230,   230,     0,     0,
     178,   264,     0,   181,     0,     0,     0,   265,     0,     0,
       0,   271,     0,     0,   231,     0,     0,   231,   231,   271,
     271,     0,     0,     0,   271,     0,     0,   271,   271,     0,
       0,     0,     0,     0,     0,     0,   231,   231,   271,     0,
       0,     0,     0,     0,   231,   271,     0,     0,     0,     0,
       0,     0,     0,     0,   269,     0,     0,     0,     0,     0,
       0,   299,   271,   314,   231,   299,   318,     0,   167,     0,
       0,   231,   322,   231,     0,   231,   271,   231,   271,   231,
       0,   271,     0,     0,     0,    27,     0,   171,     0,   231,
       0,     0,   231,   172,   173,   260,     0,   261,     0,     0,
       0,     0,     0,     0,     0,   174,   262,     0,     0,   231,
     263,   231,   231,     0,     0,   271,     0,     0,     0,   271,
       0,     0,   441,   231,   231,     0,   178,   264,     0,   181,
       0,     0,     0,   265,     0,     0,     0,   231,   231,     0,
     231,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,     0,     0,     0,     0,   299,   299,   299,   231,   299,
       0,     0,   231,     0,   231,   231,     0,     0,   271,     0,
       0,   231,     0,     0,   231,     0,     0,     0,     0,     0,
       0,   231,     0,     0,     0,     0,   231,     0,   231,   231,
       0,     0,     0,     0,     0,     0,     0,   231,   231,     0,
     231,     0,   414,   271,   271,     0,   231,   231,     0,   271,
     425,   426,     0,   271,     0,   434,   231,   231,     0,   444,
     231,   231,     0,     0,     0,   271,     0,     0,     0,   450,
       0,     0,     0,     0,     0,   271,   451,     0,     0,     0,
     271,     0,     0,     0,     0,     0,     0,   271,   271,     0,
       0,     0,     0,   472,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   271,   479,     0,   480,
       0,   271,   482,     0,     0,   299,     0,   299,   299,   299,
     299,   299,   299,   299,   299,     0,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   518,   164,     0,     0,
       0,   165,     0,     0,     0,     0,   271,   166,   167,     0,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,     0,     0,    27,   170,   171,     0,     0,
       0,   271,   271,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,     0,     0,   271,   472,
       0,     0,     0,     0,     0,   271,   271,     0,     0,     0,
     176,   299,   299,     0,   177,     0,   178,   179,   301,   181,
     167,   182,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,   185,     0,   565,   566,     0,    27,     0,   171,
     569,     0,   469,     0,   573,   172,   173,   260,     0,   261,
       0,     0,     0,     0,     0,     0,     0,   174,   262,     0,
       0,   271,   263,   271,     0,     0,   602,   271,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   264,
       0,   181,     0,     0,     0,   265,     0,     0,     0,     0,
       0,   271,     0,     0,     0,   271,     0,   623,   299,     0,
       0,     0,   629,     0,     1,     0,     0,   164,     0,     0,
      76,   165,   648,     0,     0,     0,     0,   166,   167,   649,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     3,
       0,    77,   169,     0,     0,    27,   170,   171,     0,    78,
       0,     0,     0,   172,   173,     0,     0,   472,     0,     0,
       0,   271,   271,     5,     0,   174,     0,     0,     0,     0,
       0,     0,   271,     7,     8,     0,     9,     0,   699,     0,
     176,     0,   689,   690,   177,    11,   178,   179,   180,   181,
       0,   182,   299,     0,     0,    13,     0,   183,     0,   184,
       0,    14,   185,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,   164,     0,     0,    76,   165,   648,     0,
       0,     0,     0,   166,   167,   649,     0,     0,   168,     0,
       0,     0,     0,     0,     0,     3,     0,    77,   169,     0,
       0,    27,   170,   171,     0,    78,     0,     0,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   174,   751,     0,   753,     0,     0,     0,   757,     7,
       8,     0,     9,     0,   735,     0,   176,     0,   299,     0,
     177,    11,   178,   179,   180,   181,     0,   182,     0,     0,
       0,    13,   771,   183,     0,   184,   775,    14,   185,     0,
       1,     0,     0,   164,     0,     0,    76,   165,     0,     0,
       0,     0,     0,   166,   167,     0,     0,     0,   168,     0,
       0,     0,     0,     0,     0,     3,     0,    77,   169,     0,
       0,    27,   170,   171,     0,    78,     0,     0,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   174,   820,   821,     0,     0,     0,     0,     0,     7,
       8,     0,     9,   826,   175,     0,   176,     0,     0,     0,
     177,    11,   178,   179,   180,   181,     0,   182,     0,     0,
       0,    13,     0,   183,     0,   184,     1,    14,   185,   164,
       0,     0,    76,   165,     0,     0,     0,     0,     0,   166,
     167,     0,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     3,     0,    77,   169,     0,     0,    27,   170,   171,
       0,    78,     0,     0,     0,   172,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   174,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
     333,     0,   176,     0,     0,     0,   177,    11,   178,   179,
     180,   181,     0,   182,     0,     0,     0,    13,     0,   183,
       0,   184,     1,    14,   185,   164,     0,     0,    76,   165,
       0,     0,     0,     0,     0,   166,   167,     0,     0,     0,
     168,     0,     0,     0,     0,     0,     0,     3,     0,    77,
     169,     0,     0,    27,   170,   171,     0,    78,     0,     0,
       0,   172,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   174,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,   460,     0,   176,     0,
       0,     0,   177,    11,   461,   179,   180,   462,     0,   182,
       0,     0,     0,    13,     0,   183,     0,   184,     1,    14,
     185,   164,     0,     0,    76,   165,     0,     0,     0,     0,
       0,   166,   167,     0,     0,     0,   168,     0,     0,     0,
       0,     0,     0,     3,     0,    77,   169,     0,     0,    27,
     170,   171,     0,    78,     0,     0,     0,   172,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,   551,     0,   176,     0,     0,     0,   177,    11,
     178,   179,   180,   181,     0,   182,     0,     0,     0,    13,
       0,   183,     0,   184,     1,    14,   185,   164,     0,     0,
      76,   165,     0,     0,     0,     0,     0,   166,   167,     0,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     3,
       0,    77,   169,     0,     0,    27,   170,   171,     0,    78,
       0,     0,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,   174,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     9,     0,   553,     0,
     176,     0,     0,     0,   177,    11,   178,   179,   180,   181,
       0,   182,     0,     0,     0,    13,     0,   183,     0,   184,
       1,    14,   185,   164,     0,     0,    76,   165,     0,     0,
       0,     0,     0,   166,   167,     0,     0,     0,   168,     0,
       0,     0,     0,     0,     0,     3,     0,    77,   169,     0,
       0,    27,   170,   171,     0,    78,     0,     0,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   174,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     9,     0,   614,     0,   176,     0,     0,     0,
     177,    11,   178,   179,   180,   181,     0,   182,     0,     0,
       0,    13,     0,   183,     0,   184,     1,    14,   185,   164,
       0,     0,    76,   165,     0,     0,     0,     0,     0,   166,
     167,     0,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     3,     0,    77,   169,     0,     0,    27,   170,   171,
       0,    78,  -206,     0,     0,   172,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   174,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
       0,     0,   176,     0,     0,     0,   177,    11,   178,   179,
     180,   181,     0,   182,     0,     0,   164,    13,     0,   183,
     165,   184,     0,    14,   185,     0,   166,   167,     0,     0,
       0,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   576,     0,     0,    27,   577,   171,     0,     0,     0,
       0,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,   177,     0,   178,   179,   301,   181,   164,
     182,     0,     0,   165,     0,     0,   183,     0,     0,   166,
     167,   578,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   798,     0,     0,    27,   799,   171,
       0,     0,     0,     0,     0,   172,   173,     0,   167,     0,
       0,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,     0,     0,     0,     0,    27,     0,   171,     0,     0,
       0,     0,   176,   172,   173,   260,   177,   261,   178,   179,
     301,   181,     0,   182,     0,   174,   262,     0,     0,   183,
     263,   167,     0,     0,   800,     0,     0,     0,     0,     0,
       0,     0,     0,   155,     0,   167,   178,   264,    27,   181,
     171,     0,     0,   265,     0,     0,   172,   173,   260,     0,
     261,     0,    27,     0,   171,     0,     0,     0,   174,   262,
     172,   173,   260,   263,   261,     0,     0,     0,     0,     0,
       0,     0,   174,   262,     0,   522,     0,   263,   167,   178,
     264,     0,   181,     0,     0,     0,   265,     0,     0,   592,
       0,     0,   167,   178,   264,    27,   181,   171,     0,     0,
     265,     0,     0,   172,   173,   260,     0,   261,     0,    27,
       0,   171,     0,     0,     0,   174,   262,   172,   173,   260,
     263,   261,     0,     0,     0,     0,     0,     0,     0,   174,
     262,     0,   603,     0,   263,   167,   178,   264,     0,   181,
       0,     0,     0,   265,     0,     0,   609,     0,     0,   167,
     178,   264,    27,   181,   171,     0,     0,   265,     0,     0,
     172,   173,   260,     0,   261,     0,    27,     0,   171,     0,
       0,     0,   174,   262,   172,   173,   260,   263,   261,     0,
       0,     0,     0,     0,     0,     0,   174,   262,     0,   611,
       0,   263,   167,   178,   264,     0,   181,     0,     0,     0,
     265,     0,     0,   706,     0,     0,   167,   178,   264,    27,
     181,   171,     0,     0,   265,     0,     0,   172,   173,   260,
       0,   261,     0,    27,     0,   171,     0,     0,     0,   174,
     262,   172,   173,   260,   263,   261,     0,     0,     0,     0,
       0,     0,     0,   174,   262,     0,   710,     0,   263,     0,
     178,   264,     0,   181,     0,     0,     0,   265,     0,     0,
     712,     0,     0,     0,   178,   264,     0,   181,     0,     0,
       0,   265
};

static const yytype_int16 yycheck[] =
{
       4,    99,     6,    56,    23,     0,   191,   131,    72,   159,
     168,    75,   564,   469,    89,    58,   420,   174,   116,   167,
     327,   260,    17,   171,    19,   174,   543,   303,   408,    15,
     410,   338,   412,   598,    14,   259,   625,   626,    33,    22,
      15,    22,    46,    47,    48,   652,    50,    51,    91,    92,
      15,   406,    56,   408,    58,   410,    15,   412,    34,    12,
      15,    15,    66,    58,   244,    22,    34,    15,    11,    39,
     250,    34,    91,    15,    44,    18,    29,    11,   258,    15,
     144,    67,   599,   672,    18,   183,    54,    91,    92,   606,
     697,    54,    73,    73,    15,    15,   648,    92,    73,   197,
      15,   105,    83,   107,   108,    27,    71,    75,    73,    92,
     571,   260,    71,   261,   262,   263,    73,   265,    73,    73,
      15,    15,   526,    71,    67,    73,    83,   131,   352,    71,
     406,     0,   408,    67,   410,    71,   412,   541,   703,    15,
     657,    34,    25,    26,   548,   549,   370,   190,    15,    15,
      71,    71,   391,    17,    39,    38,    71,    22,    41,    42,
      39,   617,    34,   167,   625,   626,   755,   171,   326,    33,
     174,   190,    17,    22,   324,    22,    71,    71,    34,    22,
     330,    74,   734,   772,   773,   365,   190,   191,   368,    34,
      44,    36,    85,   782,    73,    71,    24,    42,    43,    22,
     517,    73,     9,    39,    71,    71,    57,    22,    73,    54,
     417,   672,    44,   568,   421,    66,   571,    73,    72,   102,
     103,    39,    44,    30,    73,    53,    73,    34,    43,   353,
      75,    38,   236,    78,   117,   118,   119,   120,   121,    20,
     315,   316,   391,   550,   127,   128,    34,   554,   131,    71,
      73,   399,   400,   401,    40,   659,   260,   261,   262,   263,
      22,   265,   666,   667,    44,    44,    54,    22,    49,    50,
     625,   626,     8,    25,   157,   158,   159,   160,   161,   436,
     465,    43,   165,   166,    70,   168,    22,    75,    43,    44,
      78,    71,    44,    79,   755,    26,   446,   447,   351,   303,
      34,   681,    46,   683,    17,   685,   349,   687,   191,    72,
     103,   772,   773,   356,    44,    59,    15,   672,    72,    17,
      54,   782,    43,    36,    43,    56,   681,   644,   683,   477,
     685,   429,   687,    64,   127,   128,    67,    68,    36,    17,
     464,    75,   417,    17,    78,   349,   421,   351,    22,   353,
     419,    22,   356,   422,   349,    22,    87,   633,    36,   517,
      34,   356,    36,   246,   394,   395,   396,   552,    39,    43,
      44,    43,    44,    14,    15,   533,    14,   381,    43,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   107,   108,
     755,    43,   406,   131,   408,   681,   410,   683,   412,   685,
     453,   687,   397,   398,   731,   732,    43,   772,   773,    73,
     389,   390,    73,   392,   393,    22,   118,   782,   120,   121,
     528,    44,   436,    43,   453,    43,   319,    32,    33,    39,
     168,   324,    37,   326,   327,    81,    41,   330,    72,   453,
      45,    43,    43,   770,    73,   338,    72,     3,   522,    25,
     464,   465,   779,   191,   622,   157,   158,    13,   160,   161,
     353,    44,   789,   477,   478,   387,   388,   794,     4,   796,
     797,     8,    28,    61,     7,    73,   644,   645,   805,   806,
      73,   808,    91,    43,   547,    43,    43,   814,   815,    43,
      43,    43,   545,    43,   517,    43,    52,   824,   825,    71,
       5,   828,   829,    44,    73,   700,    62,    63,    73,    65,
      71,   679,    71,    43,    19,   529,    14,   591,    74,    43,
      25,    77,    73,    72,   529,   811,    73,    73,    84,    73,
      73,   545,    26,   547,    90,    43,    71,    71,   552,    71,
     545,    22,    47,    71,    43,     5,    51,    72,    15,   717,
     564,   719,   720,   446,   447,    60,    72,    43,    22,    19,
      72,     5,    56,   731,   732,    25,    73,    14,    72,   598,
      64,   464,   465,    67,    68,    19,    73,   745,   746,    15,
     748,    25,    73,    73,   598,    73,    73,    47,   326,    73,
      39,    51,   655,    87,    67,    43,    71,   705,   766,    71,
      60,    17,   770,    47,    73,    71,    22,    51,    73,    43,
      73,   779,    73,    43,    43,   353,    60,    14,    34,   633,
      36,    23,    23,    43,   517,    44,    43,    43,    44,   737,
      73,     3,    73,    73,   648,    73,    71,     9,   652,    71,
     533,   655,   535,    43,    71,    73,    14,    43,    43,    43,
     543,    43,    43,    43,    43,     8,    28,   550,    30,   552,
      73,   554,    34,   131,    73,    71,    38,   681,   406,   683,
     408,   685,   410,   687,   412,    14,    23,    23,    71,    43,
      52,    52,    43,   697,    71,    73,   700,    73,    73,   703,
      62,    63,    73,    65,    71,    67,    71,    73,    71,    73,
     168,    73,    74,    73,    73,    77,   599,    73,   731,   732,
      73,    73,    84,   606,    73,    73,    73,    89,    90,    71,
     734,    71,    73,   191,    73,    73,   464,   465,    73,   622,
      73,    71,    73,    71,    71,    71,    71,    71,    71,    43,
      14,    14,    71,    71,    71,    66,    71,   770,    92,    19,
     246,   644,   645,   356,   562,   651,   779,   545,   430,   652,
     651,   430,   353,     3,   657,   381,   789,   384,   383,     9,
      -1,   794,   385,   796,   797,   386,   316,   478,    -1,   517,
      -1,    -1,   805,   806,    -1,   808,   679,    -1,    28,    -1,
      30,    -1,   815,    -1,    34,   533,    -1,   811,    38,    -1,
      -1,   824,   825,    -1,   697,   828,   829,   700,    -1,    -1,
      -1,    -1,    52,    -1,   552,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,   717,    65,   719,   720,     5,    -1,
     568,    -1,    -1,   571,    74,    -1,    -1,    77,   731,   732,
      -1,    -1,    19,    -1,    84,    22,    -1,    -1,    25,    89,
      90,    -1,   745,   746,    -1,   748,    -1,    -1,   326,    -1,
     131,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      47,    -1,    -1,   766,    51,    -1,    -1,   770,    -1,    -1,
      -1,    -1,    -1,    60,   622,   353,   779,   625,   626,    -1,
      -1,   167,    -1,    -1,    -1,   171,   789,   168,    -1,    -1,
      -1,   794,    -1,   796,   797,    -1,   644,   645,    -1,    34,
      -1,    -1,   805,   806,   652,   808,    -1,    42,    43,    44,
     191,   814,   815,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,   824,   825,    -1,   672,   828,   829,    -1,   406,    -1,
     408,   679,   410,   681,   412,   683,    -1,   685,    -1,   687,
      75,    76,     3,    78,    -1,    -1,    -1,    82,    -1,   697,
      -1,    -1,   700,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,   717,
      -1,   719,   720,    34,    -1,   261,   262,   263,    -1,   265,
      -1,    -1,    -1,   731,   732,    -1,   464,   465,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,   745,   746,    -1,
     748,    62,    63,    -1,    65,    -1,    -1,   755,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    -1,   766,    -1,
      -1,    -1,   770,    84,   772,   773,    -1,    -1,    -1,    90,
      -1,   779,    -1,    -1,   782,    -1,    -1,    -1,    -1,   517,
      -1,   789,    -1,    -1,    -1,   326,   794,    -1,   796,   797,
      -1,    -1,    -1,    -1,    -1,   533,    -1,   805,   806,    -1,
     808,    -1,    -1,    -1,    -1,    -1,   814,   815,    -1,    -1,
      -1,    -1,   353,    -1,   552,    -1,   824,   825,    -1,    -1,
     828,   829,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     568,   131,    -1,   571,    -1,   381,    -1,   383,   384,   385,
     386,   387,   388,   389,   390,    -1,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   406,    -1,   408,   168,   410,
      -1,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   622,    -1,    -1,   625,   626,    -1,
      -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   644,   645,    -1,    -1,
      -1,    -1,    -1,    -1,   652,     3,    -1,    -1,    -1,    -1,
      -1,     9,    -1,   464,   465,    -1,    -1,    -1,    -1,    17,
      -1,   477,   478,    -1,   672,    -1,    -1,    -1,    -1,    -1,
      28,   679,    30,   681,    -1,   683,    34,   685,    36,   687,
      38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,   697,
      -1,    -1,   700,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,   517,    65,    -1,   717,
      -1,   719,   720,    -1,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,   533,   731,   732,    -1,    84,    -1,    -1,    -1,
      88,    -1,    90,    -1,    -1,    -1,    -1,   745,   746,    -1,
     748,   552,    -1,    -1,    -1,    -1,    -1,   755,   564,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   326,   568,   766,    -1,
     571,    -1,   770,    -1,   772,   773,    -1,    -1,    -1,    -1,
      -1,   779,    -1,    -1,   782,    -1,    -1,    -1,    -1,    -1,
      -1,   789,    -1,   353,    -1,   131,   794,    -1,   796,   797,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   805,   806,    -1,
     808,    -1,    -1,    -1,     3,    -1,   814,   815,    -1,    -1,
       9,   622,    -1,    -1,   625,   626,   824,   825,    -1,    -1,
     828,   829,   168,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,   648,   644,   645,    34,   406,    -1,   408,    38,
     410,   652,   412,    -1,    -1,   191,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    52,    -1,    -1,    -1,    -1,     9,    -1,
      -1,   672,    -1,    62,    63,    -1,    65,    -1,   679,    -1,
     681,    -1,   683,    -1,   685,    74,   687,    28,    77,    30,
      -1,    -1,    -1,    34,    -1,    84,   697,    38,    -1,   700,
      -1,    90,    -1,    -1,   464,   465,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,   717,    -1,   719,   720,
      -1,    62,    63,    -1,    65,    -1,    67,    -1,   734,    -1,
     731,   732,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,   745,   746,    -1,   748,    89,    90,
      -1,    -1,    -1,    -1,   755,    -1,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   766,    -1,    -1,    -1,   770,
      -1,   772,   773,   533,    -1,    -1,    -1,    -1,   779,    -1,
      -1,   782,    -1,    -1,    -1,    -1,    -1,    -1,   789,    -1,
     326,    -1,   552,   794,    -1,   796,   797,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   805,   806,    -1,   808,   568,     3,
      -1,   571,    -1,   814,   815,     9,    -1,   353,    -1,   131,
      -1,    -1,    -1,   824,   825,    -1,    -1,   828,   829,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    52,    -1,
      -1,    -1,   622,    -1,    -1,   625,   626,    -1,    62,    63,
     406,    65,   408,    -1,   410,    -1,   412,    -1,    -1,   191,
      74,    -1,     3,    77,   644,   645,    -1,    -1,     9,    -1,
      84,    -1,   652,    -1,    88,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,   672,    34,    -1,    -1,    -1,    38,    -1,   679,
      -1,   681,    -1,   683,    -1,   685,    -1,   687,   464,   465,
      -1,    52,    -1,    -1,    -1,    -1,    -1,   697,    -1,    -1,
     700,    62,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,   717,    -1,   719,
     720,    -1,    -1,    84,    -1,    -1,    -1,    88,    -1,    90,
      -1,   731,   732,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   517,    -1,    -1,    -1,   745,   746,    -1,   748,    -1,
      -1,    -1,    -1,    -1,    -1,   755,    -1,   533,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,   766,    -1,    -1,    -1,
     770,    13,   772,   773,   326,    -1,   552,    -1,    -1,   779,
      -1,    -1,   782,    -1,    -1,    -1,    28,    -1,    -1,   789,
      -1,    -1,   568,    -1,   794,   571,   796,   797,    -1,    -1,
      -1,   353,    -1,   131,    -1,   805,   806,    -1,   808,    -1,
      52,    -1,     3,    -1,   814,   815,    -1,    -1,    -1,    -1,
      62,    63,    13,    65,   824,   825,    -1,    -1,   828,   829,
      -1,    73,    74,    -1,    -1,    77,    -1,    28,    -1,    -1,
     168,    -1,    84,    -1,    -1,    -1,   622,    -1,    90,   625,
     626,    -1,    -1,    -1,   406,    -1,   408,    48,   410,    -1,
     412,    52,    -1,   191,    -1,    -1,    -1,    58,   644,   645,
      -1,    62,    63,    -1,    65,    -1,   652,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,   672,    -1,    -1,    90,
      -1,    -1,    -1,   679,    -1,   681,    -1,   683,    -1,   685,
      -1,   687,   464,   465,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   697,    -1,    -1,   700,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   717,    -1,   719,   720,    -1,    -1,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,   731,   732,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   517,    34,    -1,    36,   745,
     746,    39,   748,    -1,    42,    43,    44,    -1,    46,   755,
      -1,   533,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
     766,    59,    -1,    -1,   770,    -1,   772,   773,   326,    67,
     552,    -1,    -1,   779,    -1,    -1,   782,    75,    76,    -1,
      78,    -1,    -1,   789,    82,    -1,   568,    -1,   794,   571,
     796,   797,    -1,    -1,    -1,   353,    -1,    -1,    -1,   805,
     806,    -1,   808,    -1,    -1,    -1,    -1,    -1,   814,   815,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   824,   825,
      -1,    -1,   828,   829,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     622,    -1,    -1,   625,   626,    -1,    -1,    -1,   406,    -1,
     408,    -1,   410,    -1,   412,    -1,    -1,    -1,    17,    -1,
      -1,    -1,   644,   645,    -1,    -1,    -1,    -1,    -1,    -1,
     652,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    -1,    -1,
     672,    -1,    -1,    -1,    -1,    54,    55,   679,    -1,   681,
      59,   683,    -1,   685,    -1,   687,   464,   465,    67,    -1,
      -1,    -1,    -1,   164,    -1,   697,    75,    76,   700,    78,
      -1,    -1,   173,    82,    -1,   176,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,   717,    -1,   719,   720,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    -1,   731,
     732,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   517,
      34,    -1,    36,   745,   746,    -1,   748,    -1,    42,    43,
      44,    -1,    46,   755,    -1,   533,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,   766,    59,    -1,    -1,   770,    -1,
     772,   773,    17,    -1,   552,    -1,    -1,   779,    -1,    73,
     782,    75,    76,    -1,    78,    -1,    -1,   789,    82,    34,
     568,    36,   794,   571,   796,   797,    -1,    42,    43,    44,
      -1,    46,    -1,   805,   806,    -1,   808,    -1,    -1,    54,
      55,    -1,   814,   815,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   824,   825,    -1,    -1,   828,   829,    -1,    -1,
      75,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,   312,    -1,    -1,   622,    -1,    -1,   625,   626,   320,
     321,    -1,    -1,    -1,   325,    -1,    -1,   328,   329,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   644,   645,   339,    -1,
      -1,    -1,    -1,    -1,   652,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,   167,   363,   173,   672,   171,   176,    -1,    17,    -1,
      -1,   679,   182,   681,    -1,   683,   377,   685,   379,   687,
      -1,   382,    -1,    -1,    -1,    34,    -1,    36,    -1,   697,
      -1,    -1,   700,    42,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,   717,
      59,   719,   720,    -1,    -1,   416,    -1,    -1,    -1,   420,
      -1,    -1,    71,   731,   732,    -1,    75,    76,    -1,    78,
      -1,    -1,    -1,    82,    -1,    -1,    -1,   745,   746,    -1,
     748,    -1,    -1,    -1,    -1,    -1,    -1,   755,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   261,   262,   263,   766,   265,
      -1,    -1,   770,    -1,   772,   773,    -1,    -1,   469,    -1,
      -1,   779,    -1,    -1,   782,    -1,    -1,    -1,    -1,    -1,
      -1,   789,    -1,    -1,    -1,    -1,   794,    -1,   796,   797,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   805,   806,    -1,
     808,    -1,   312,   504,   505,    -1,   814,   815,    -1,   510,
     320,   321,    -1,   514,    -1,   325,   824,   825,    -1,   329,
     828,   829,    -1,    -1,    -1,   526,    -1,    -1,    -1,   339,
      -1,    -1,    -1,    -1,    -1,   536,   346,    -1,    -1,    -1,
     541,    -1,    -1,    -1,    -1,    -1,    -1,   548,   549,    -1,
      -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   567,   377,    -1,   379,
      -1,   572,   382,    -1,    -1,   381,    -1,   383,   384,   385,
     386,   387,   388,   389,   390,    -1,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   416,     6,    -1,    -1,
      -1,    10,    -1,    -1,    -1,    -1,   617,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      -1,   642,   643,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,   659,   469,
      -1,    -1,    -1,    -1,    -1,   666,   667,    -1,    -1,    -1,
      69,   477,   478,    -1,    73,    -1,    75,    76,    77,    78,
      17,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    -1,   504,   505,    -1,    34,    -1,    36,
     510,    -1,    39,    -1,   514,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,   722,    59,   724,    -1,    -1,   536,   728,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,   752,    -1,    -1,    -1,   756,    -1,   567,   564,    -1,
      -1,    -1,   572,    -1,     3,    -1,    -1,     6,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    18,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,    38,
      -1,    -1,    -1,    42,    43,    -1,    -1,   617,    -1,    -1,
      -1,   812,   813,    52,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,   823,    62,    63,    -1,    65,    -1,    67,    -1,
      69,    -1,   642,   643,    73,    74,    75,    76,    77,    78,
      -1,    80,   648,    -1,    -1,    84,    -1,    86,    -1,    88,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    18,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,   722,    -1,   724,    -1,    -1,    -1,   728,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,   734,    -1,
      73,    74,    75,    76,    77,    78,    -1,    80,    -1,    -1,
      -1,    84,   752,    86,    -1,    88,   756,    90,    91,    -1,
       3,    -1,    -1,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    54,   812,   813,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    65,   823,    67,    -1,    69,    -1,    -1,    -1,
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
      -1,    38,    39,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    65,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    80,    -1,    -1,     6,    84,    -1,    86,
      10,    88,    -1,    90,    91,    -1,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    73,    -1,    75,    76,    77,    78,     6,
      80,    -1,    -1,    10,    -1,    -1,    86,    -1,    -1,    16,
      17,    91,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    -1,    69,    42,    43,    44,    73,    46,    75,    76,
      77,    78,    -1,    80,    -1,    54,    55,    -1,    -1,    86,
      59,    17,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    17,    75,    76,    34,    78,
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
      82,    -1,    -1,    71,    -1,    -1,    17,    75,    76,    34,
      78,    36,    -1,    -1,    82,    -1,    -1,    42,    43,    44,
      -1,    46,    -1,    34,    -1,    36,    -1,    -1,    -1,    54,
      55,    42,    43,    44,    59,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    -1,    71,    -1,    59,    -1,
      75,    76,    -1,    78,    -1,    -1,    -1,    82,    -1,    -1,
      71,    -1,    -1,    -1,    75,    76,    -1,    78,    -1,    -1,
      -1,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     3,    13,    28,    48,    52,    58,    62,    63,    65,
      73,    74,    77,    84,    90,   100,   101,   102,   103,   104,
     105,   106,   117,   128,   129,   121,   126,    34,    94,    98,
      98,     0,   105,   102,    13,   129,    94,    94,    22,    39,
      73,   118,   124,   122,   127,    94,    26,    56,    64,    67,
      68,    87,   107,   108,    94,    94,    27,   130,    39,   131,
      98,    98,    98,    74,    85,    98,   109,   110,    98,    67,
     108,   119,   125,    98,   116,   123,     9,    30,    38,    67,
      73,    74,    89,    96,    97,   111,   112,   113,   114,   115,
     116,   128,   132,   133,   134,   135,   145,   146,   173,   174,
     175,   177,   180,   184,    73,    83,    73,    83,    92,    73,
      98,   110,    73,   130,   131,   131,   176,   157,   161,   138,
     149,   153,    44,   288,   288,    89,   111,   178,   182,    67,
     133,    39,    73,   172,   193,   193,    94,   186,   186,    98,
      99,    99,    99,    73,   120,   193,    94,   163,   163,    94,
     140,   141,   143,   163,   163,    72,    44,   155,   159,   136,
     147,   151,   186,   186,     6,    10,    16,    17,    21,    31,
      35,    36,    42,    43,    54,    67,    69,    73,    75,    76,
      77,    78,    80,    86,    88,    91,    94,    95,    98,   111,
     128,   194,   195,   196,   197,   202,   204,   205,   206,   207,
     208,   210,   211,   212,   213,   215,   222,   224,   225,   227,
     264,   266,   267,   268,   269,   270,   271,   277,   278,   279,
     280,   281,   282,   283,   285,   291,   292,   308,   309,   311,
     312,   313,   187,   188,   181,   185,    15,    73,    73,    73,
     131,   164,   165,    44,   158,   162,    15,   139,    44,   142,
     150,   154,    72,   163,   163,   140,   163,   163,   179,   183,
      44,    46,    55,    59,    76,    82,    98,   279,   283,   289,
     290,   291,   294,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,    73,    94,    73,    94,    98,   281,   282,
     307,    77,   202,    43,   228,   230,   232,   234,   236,   238,
     240,   242,    43,   307,   289,   112,   115,    73,   289,    22,
      43,    43,   289,   193,   199,    43,    14,    22,    43,    44,
     198,    88,   111,    67,   195,    73,   193,    73,    22,    44,
       5,    19,    25,    47,    51,    60,   293,    17,    36,    43,
      43,    81,   170,    39,   189,    98,    43,    43,    72,   170,
     141,    73,    72,    25,   170,   156,   160,   137,   148,   152,
     170,   189,   112,   113,   307,   307,   307,    44,   307,    14,
      73,    57,    66,     4,     8,    61,     7,    24,    53,    32,
      33,    37,    41,    45,    40,    70,    79,    46,    59,    20,
      49,    50,    73,    73,    91,   197,    43,    43,    43,    43,
      43,    43,    43,    43,   289,    71,    44,   286,   287,   288,
      43,   286,   288,    73,    94,   289,   289,    73,    12,    29,
     272,   273,   276,   140,   289,   202,    54,    75,    78,    94,
     280,    71,   284,   289,   289,   140,   201,   200,    94,   280,
     289,   289,   111,   128,   166,   167,    71,   116,   171,   189,
      67,    75,    78,    98,   190,   194,   277,   166,    71,    39,
     144,   191,   289,   170,    73,   170,   189,    72,    72,   289,
     289,   297,   289,   295,   298,   299,   300,   301,   302,   302,
     304,   304,   112,   113,   304,   304,   305,   305,   305,   306,
     306,   307,   307,   307,    43,    14,   197,   211,   261,   263,
      73,   261,    73,   261,    73,   261,    73,    71,   289,   287,
     288,   191,    71,   284,   288,   191,    43,    71,    71,    43,
     193,   273,   276,    71,   115,    22,    15,    71,    72,   140,
     140,    43,    72,   168,   111,    15,    71,    15,    43,    43,
      22,    67,   194,    67,    22,    71,    15,    67,   144,   192,
     307,   310,    72,    73,    14,   289,   289,    73,    15,   289,
      73,    73,    73,   289,    73,    73,    31,    35,    91,    94,
     202,   203,   204,   209,   214,   223,   226,   244,   265,    72,
     131,    71,    71,   284,    39,   216,   193,    98,   128,   274,
     202,    94,   289,    71,   284,   143,   169,   167,   116,    71,
     284,    71,   284,    75,    67,    75,    67,    15,    67,   216,
     294,    71,    71,   289,   211,    73,    73,   262,   263,   289,
      73,    73,    71,    43,   245,   247,   249,   251,   253,   255,
     257,   259,    43,    43,    14,    23,   131,    71,    11,    18,
      67,   217,   218,   219,   220,     8,   275,   274,   143,    43,
      71,   143,    73,    71,    73,    71,    43,    43,    67,   144,
      73,   202,    73,   262,   262,    71,    73,    71,    71,   243,
     197,    43,    43,    43,    43,    43,    43,    43,    43,   289,
     289,   203,   202,   221,   294,    14,    67,   218,   219,    67,
     194,   220,   116,     8,   143,    71,    71,   284,    73,    73,
      71,   284,    71,   284,   262,    71,    71,   235,    71,   239,
     241,   202,    14,   261,    73,   261,    73,   261,    73,   261,
      73,    71,    71,    14,    15,    67,   274,    71,   193,    71,
      73,    71,    73,    71,    71,   231,   233,   202,   237,   202,
     202,   289,    73,   289,    73,    73,    73,   289,    73,    73,
     203,   203,   294,   193,    73,    73,   229,   202,   202,   202,
      71,   289,    73,    73,   262,   289,    73,    73,    71,    23,
     202,   203,    73,   262,   262,    71,    73,    71,    71,   260,
     203,   262,    71,    71,   252,    71,   256,   258,    31,    35,
      91,    94,   203,   204,    71,   248,   250,   203,   254,   203,
     203,    43,    43,    43,    14,   246,   203,   203,   203,   197,
     289,   289,   203,    14,    71,    71,   289,   203,    71,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   101,   102,   102,   103,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   115,   116,   118,   119,
     120,   117,   121,   122,   123,   117,   124,   125,   117,   126,
     127,   117,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   131,   131,   132,   132,   133,
     133,   133,   133,   134,   134,   134,   136,   137,   135,   138,
     139,   135,   140,   140,   141,   142,   141,   143,   143,   144,
     144,   145,   147,   148,   146,   149,   150,   146,   151,   152,
     146,   153,   154,   146,   155,   156,   146,   157,   158,   146,
     159,   160,   146,   161,   162,   146,   164,   163,   165,   163,
     163,   166,   166,   168,   167,   169,   167,   170,   171,   171,
     172,   172,   174,   173,   176,   175,   178,   179,   177,   180,
     181,   177,   182,   183,   177,   184,   185,   177,   187,   186,
     188,   186,   189,   189,   189,   189,   190,   190,   190,   190,
     190,   190,   190,   190,   191,   191,   191,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   198,   197,   199,
     197,   200,   197,   201,   197,   202,   202,   202,   202,   202,
     202,   203,   203,   203,   203,   203,   205,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   206,
     206,   207,   208,   209,   210,   211,   211,   211,   211,   211,
     211,   211,   212,   213,   214,   215,   216,   216,   216,   216,
     217,   217,   218,   218,   219,   220,   220,   221,   221,   222,
     223,   224,   225,   225,   226,   226,   228,   229,   227,   230,
     231,   227,   232,   233,   227,   234,   235,   227,   236,   237,
     227,   238,   239,   227,   240,   241,   227,   242,   243,   227,
     245,   246,   244,   247,   248,   244,   249,   250,   244,   251,
     252,   244,   253,   254,   244,   255,   256,   244,   257,   258,
     244,   259,   260,   244,   261,   261,   262,   263,   263,   264,
     265,   266,   266,   267,   267,   268,   268,   269,   270,   271,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     276,   277,   277,   278,   278,   278,   278,   278,   278,   278,
     278,   279,   279,   279,   280,   280,   280,   280,   281,   281,
     281,   282,   282,   283,   283,   283,   283,   283,   283,   283,
     283,   284,   284,   285,   285,   285,   285,   285,   285,   286,
     286,   287,   288,   288,   289,   290,   290,   291,   292,   292,
     292,   293,   293,   293,   293,   293,   293,   294,   294,   295,
     296,   296,   297,   297,   298,   298,   299,   299,   300,   300,
     301,   301,   301,   302,   302,   302,   302,   302,   302,   303,
     304,   304,   304,   304,   305,   305,   305,   306,   306,   306,
     306,   307,   307,   307,   307,   307,   308,   309,   310,   310,
     310,   310,   310,   311,   311,   311,   311,   312,   313,   314,
     314,   315
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     1,     2,     1,     3,     1,
       1,     5,     4,     1,     2,     4,     3,     5,     3,     3,
       5,     3,     5,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     0,     0,
       0,     8,     0,     0,     0,     7,     0,     0,     6,     0,
       0,     5,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     6,     0,
       0,     5,     1,     3,     1,     0,     4,     1,     3,     1,
       1,     2,     0,     0,     6,     0,     0,     5,     0,     0,
       5,     0,     0,     4,     0,     0,     6,     0,     0,     5,
       0,     0,     5,     0,     0,     4,     0,     5,     0,     4,
       3,     1,     3,     0,     3,     0,     4,     2,     1,     3,
       1,     1,     0,     2,     0,     3,     0,     0,     6,     0,
       0,     5,     0,     0,     5,     0,     0,     4,     0,     5,
       0,     4,     4,     3,     3,     2,     5,     4,     5,     4,
       6,     7,     6,     7,     2,     3,     3,     4,     1,     3,
       3,     2,     2,     1,     1,     1,     2,     0,     3,     0,
       3,     0,     4,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     5,     7,     7,     5,     4,     3,     3,     2,
       1,     2,     1,     2,     2,     3,     2,     1,     3,     5,
       5,     7,     1,     1,     1,     1,     0,     0,    11,     0,
       0,    10,     0,     0,    10,     0,     0,     9,     0,     0,
      10,     0,     0,     9,     0,     0,     9,     0,     0,     8,
       0,     0,    11,     0,     0,    10,     0,     0,    10,     0,
       0,     9,     0,     0,    10,     0,     0,     9,     0,     0,
       9,     0,     0,     8,     1,     1,     1,     3,     1,     7,
       7,     3,     2,     3,     2,     2,     3,     3,     5,     3,
       3,     4,     2,     1,     6,     7,     1,     2,     2,     3,
       2,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     6,     4,     3,     3,
       3,     4,     4,     3,     4,     5,     6,     5,     6,     7,
       8,     1,     3,     3,     4,     3,     4,     4,     4,     2,
       1,     3,     2,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       4,     5
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
#line 289 "parser.y"
                                                                                                {
		// cout << "HI\n";
		// tab_item* t = lookup((*$1));
		// if(to_declare){
			
		// 	insert((*$1), 0, 0);

		// 	t->scope.insert(current_scope);
			
		// }else{
		// 	if(t == NULL){
		// 		cout << "Variable not declared\n";
		// 		exit(1);
		// 	}else{
		// 		if(current_scope < *(t->scope.begin())){
		// 			cout << "Variable cannot be referenced in this scope\n;";
		// 		}
		// 	}
		// }
		vec = {createnode("IDENTIFIER__" + *(yyvsp[0].lex) , emp)}; 
		(yyval.str_val) = createnode("Identifier", vec);
	}
#line 2739 "parser.tab.c"
    break;

  case 3:
#line 314 "parser.y"
                                                                                                {vec = {createnode("LITERAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Literal", vec);}
#line 2745 "parser.tab.c"
    break;

  case 4:
#line 318 "parser.y"
                                                                                                {cout << "CHECKo\n" ; vec = {createnode("INTEGRALTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("IntegralType", vec);}
#line 2751 "parser.tab.c"
    break;

  case 5:
#line 322 "parser.y"
                                                                                                        {vec = {createnode("FLOATINGPOINTTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FloatingPointType", vec);}
#line 2757 "parser.tab.c"
    break;

  case 6:
#line 326 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2763 "parser.tab.c"
    break;

  case 7:
#line 327 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2769 "parser.tab.c"
    break;

  case 8:
#line 331 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2775 "parser.tab.c"
    break;

  case 9:
#line 332 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2781 "parser.tab.c"
    break;

  case 10:
#line 336 "parser.y"
                                                                                                                {cout << "checkt\n"; vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2787 "parser.tab.c"
    break;

  case 11:
#line 337 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2793 "parser.tab.c"
    break;

  case 12:
#line 341 "parser.y"
                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2799 "parser.tab.c"
    break;

  case 13:
#line 342 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2805 "parser.tab.c"
    break;

  case 14:
#line 343 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2811 "parser.tab.c"
    break;

  case 15:
#line 347 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2817 "parser.tab.c"
    break;

  case 16:
#line 348 "parser.y"
                                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2823 "parser.tab.c"
    break;

  case 17:
#line 352 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModularCompilationUnit", vec);}
#line 2829 "parser.tab.c"
    break;

  case 18:
#line 356 "parser.y"
                                                                                                        {vec = {createnode("PACKAGE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PackageDeclaration", vec);}
#line 2835 "parser.tab.c"
    break;

  case 19:
#line 360 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2841 "parser.tab.c"
    break;

  case 20:
#line 361 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2847 "parser.tab.c"
    break;

  case 21:
#line 365 "parser.y"
                                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2853 "parser.tab.c"
    break;

  case 22:
#line 366 "parser.y"
                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2859 "parser.tab.c"
    break;

  case 23:
#line 370 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2865 "parser.tab.c"
    break;

  case 24:
#line 371 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2871 "parser.tab.c"
    break;

  case 25:
#line 375 "parser.y"
                                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2877 "parser.tab.c"
    break;

  case 26:
#line 376 "parser.y"
                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2883 "parser.tab.c"
    break;

  case 27:
#line 377 "parser.y"
                                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2889 "parser.tab.c"
    break;

  case 28:
#line 378 "parser.y"
                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2895 "parser.tab.c"
    break;

  case 29:
#line 379 "parser.y"
                                                                                                        {vec = {createnode("OPENS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2901 "parser.tab.c"
    break;

  case 30:
#line 380 "parser.y"
                                                                                                                {vec = {createnode("OPENS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2907 "parser.tab.c"
    break;

  case 31:
#line 381 "parser.y"
                                                                                                        {vec = {createnode("USES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2913 "parser.tab.c"
    break;

  case 32:
#line 382 "parser.y"
                                                                                                                        {vec = {createnode("PROVIDES__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("WITH__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2919 "parser.tab.c"
    break;

  case 33:
#line 386 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2925 "parser.tab.c"
    break;

  case 34:
#line 387 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2931 "parser.tab.c"
    break;

  case 35:
#line 391 "parser.y"
                                                                                                {vec = {createnode("TRANSITIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2937 "parser.tab.c"
    break;

  case 36:
#line 392 "parser.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2943 "parser.tab.c"
    break;

  case 37:
#line 396 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 2949 "parser.tab.c"
    break;

  case 38:
#line 397 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 2955 "parser.tab.c"
    break;

  case 39:
#line 401 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2961 "parser.tab.c"
    break;

  case 40:
#line 402 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2967 "parser.tab.c"
    break;

  case 41:
#line 403 "parser.y"
                                                                                                {vec = {createnode("BOOLEAN__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 2973 "parser.tab.c"
    break;

  case 42:
#line 407 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 2979 "parser.tab.c"
    break;

  case 43:
#line 408 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 2985 "parser.tab.c"
    break;

  case 44:
#line 412 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 2991 "parser.tab.c"
    break;

  case 45:
#line 413 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 2997 "parser.tab.c"
    break;

  case 46:
#line 417 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassOrInterfaceType", vec);}
#line 3003 "parser.tab.c"
    break;

  case 47:
#line 421 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassType", vec);}
#line 3009 "parser.tab.c"
    break;

  case 48:
#line 425 "parser.y"
                        {to_declare = 1;}
#line 3015 "parser.tab.c"
    break;

  case 49:
#line 425 "parser.y"
                                                     {to_declare = 0;}
#line 3021 "parser.tab.c"
    break;

  case 50:
#line 425 "parser.y"
                                                                                    {incr_scope();}
#line 3027 "parser.tab.c"
    break;

  case 51:
#line 425 "parser.y"
                                                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-7].str_val),createnode("CLASS__" + *(yyvsp[-6].lex) , emp),(yyvsp[-4].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3033 "parser.tab.c"
    break;

  case 52:
#line 426 "parser.y"
              {to_declare = 1;}
#line 3039 "parser.tab.c"
    break;

  case 53:
#line 426 "parser.y"
                                           {to_declare = 0;}
#line 3045 "parser.tab.c"
    break;

  case 54:
#line 426 "parser.y"
                                                                          {incr_scope();}
#line 3051 "parser.tab.c"
    break;

  case 55:
#line 426 "parser.y"
                                                                                                                                                                                {hide_scope(); vec = {createnode("CLASS__" + *(yyvsp[-6].lex) , emp),(yyvsp[-4].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3057 "parser.tab.c"
    break;

  case 56:
#line 427 "parser.y"
                        {to_declare = 1;}
#line 3063 "parser.tab.c"
    break;

  case 57:
#line 427 "parser.y"
                                                     {to_declare = 0;incr_scope();}
#line 3069 "parser.tab.c"
    break;

  case 58:
#line 427 "parser.y"
                                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-5].str_val),createnode("CLASS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3075 "parser.tab.c"
    break;

  case 59:
#line 428 "parser.y"
              {to_declare = 1;}
#line 3081 "parser.tab.c"
    break;

  case 60:
#line 428 "parser.y"
                                           {to_declare = 0;incr_scope();}
#line 3087 "parser.tab.c"
    break;

  case 61:
#line 428 "parser.y"
                                                                                                                                                                {hide_scope(); vec = {createnode("CLASS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3093 "parser.tab.c"
    break;

  case 62:
#line 432 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 3099 "parser.tab.c"
    break;

  case 63:
#line 433 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 3105 "parser.tab.c"
    break;

  case 64:
#line 437 "parser.y"
                                                                                        {cout << "HII\n"; vec = {createnode("PUBLIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3111 "parser.tab.c"
    break;

  case 65:
#line 438 "parser.y"
                                                                                                {vec = {createnode("PROTECTED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3117 "parser.tab.c"
    break;

  case 66:
#line 439 "parser.y"
                                                                                                {vec = {createnode("PRIVATE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3123 "parser.tab.c"
    break;

  case 67:
#line 440 "parser.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3129 "parser.tab.c"
    break;

  case 68:
#line 441 "parser.y"
                                                                                                {vec = {createnode("ABSTRACT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3135 "parser.tab.c"
    break;

  case 69:
#line 442 "parser.y"
                                                                                        {vec = {createnode("FINAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3141 "parser.tab.c"
    break;

  case 70:
#line 443 "parser.y"
                                                                                        {vec = {createnode("NATIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3147 "parser.tab.c"
    break;

  case 71:
#line 444 "parser.y"
                                                                                                {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3153 "parser.tab.c"
    break;

  case 72:
#line 445 "parser.y"
                                                                                                {vec = {createnode("TRANSIENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3159 "parser.tab.c"
    break;

  case 73:
#line 446 "parser.y"
                                                                                                {vec = {createnode("VOLATILE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3165 "parser.tab.c"
    break;

  case 74:
#line 450 "parser.y"
                                                                                                        {vec = {createnode("EXTENDS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassExtends", vec);}
#line 3171 "parser.tab.c"
    break;

  case 75:
#line 454 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 3177 "parser.tab.c"
    break;

  case 76:
#line 455 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 3183 "parser.tab.c"
    break;

  case 77:
#line 459 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 3189 "parser.tab.c"
    break;

  case 78:
#line 460 "parser.y"
                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 3195 "parser.tab.c"
    break;

  case 79:
#line 464 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3201 "parser.tab.c"
    break;

  case 80:
#line 465 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3207 "parser.tab.c"
    break;

  case 81:
#line 466 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3213 "parser.tab.c"
    break;

  case 82:
#line 467 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3219 "parser.tab.c"
    break;

  case 83:
#line 471 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3225 "parser.tab.c"
    break;

  case 84:
#line 472 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3231 "parser.tab.c"
    break;

  case 85:
#line 473 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3237 "parser.tab.c"
    break;

  case 86:
#line 477 "parser.y"
                       {to_declare=1;}
#line 3243 "parser.tab.c"
    break;

  case 87:
#line 477 "parser.y"
                                                              {to_declare=0;}
#line 3249 "parser.tab.c"
    break;

  case 88:
#line 477 "parser.y"
                                                                                                                                                                        {vec = {(yyvsp[-5].str_val),(yyvsp[-4].str_val),(yyvsp[-2].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex), emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3255 "parser.tab.c"
    break;

  case 89:
#line 478 "parser.y"
             {to_declare=1;}
#line 3261 "parser.tab.c"
    break;

  case 90:
#line 478 "parser.y"
                                                    {to_declare=0;}
#line 3267 "parser.tab.c"
    break;

  case 91:
#line 478 "parser.y"
                                                                                                                                                        {vec = {(yyvsp[-4].str_val),(yyvsp[-2].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3273 "parser.tab.c"
    break;

  case 92:
#line 482 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3279 "parser.tab.c"
    break;

  case 93:
#line 483 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3285 "parser.tab.c"
    break;

  case 94:
#line 487 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3291 "parser.tab.c"
    break;

  case 95:
#line 488 "parser.y"
                             {to_declare = 0;}
#line 3297 "parser.tab.c"
    break;

  case 96:
#line 488 "parser.y"
                                                                                                                                                        { to_declare = 1; vec = {(yyvsp[-3].str_val),createnode("EQUALTO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3303 "parser.tab.c"
    break;

  case 97:
#line 492 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3309 "parser.tab.c"
    break;

  case 98:
#line 493 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3315 "parser.tab.c"
    break;

  case 99:
#line 497 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3321 "parser.tab.c"
    break;

  case 100:
#line 498 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3327 "parser.tab.c"
    break;

  case 101:
#line 502 "parser.y"
                                                                                                                {hide_scope(); vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodDeclaration", vec);}
#line 3333 "parser.tab.c"
    break;

  case 102:
#line 506 "parser.y"
                       {to_declare = 1;}
#line 3339 "parser.tab.c"
    break;

  case 103:
#line 506 "parser.y"
                                                          {to_declare = 0;}
#line 3345 "parser.tab.c"
    break;

  case 104:
#line 506 "parser.y"
                                                                                                                                                                {vec = {(yyvsp[-5].str_val),(yyvsp[-4].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3351 "parser.tab.c"
    break;

  case 105:
#line 507 "parser.y"
             {to_declare = 1;}
#line 3357 "parser.tab.c"
    break;

  case 106:
#line 507 "parser.y"
                                                {to_declare = 0;}
#line 3363 "parser.tab.c"
    break;

  case 107:
#line 507 "parser.y"
                                                                                                                                                        {vec = {(yyvsp[-4].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3369 "parser.tab.c"
    break;

  case 108:
#line 508 "parser.y"
                       {to_declare = 1;}
#line 3375 "parser.tab.c"
    break;

  case 109:
#line 508 "parser.y"
                                                          {to_declare = 0;}
#line 3381 "parser.tab.c"
    break;

  case 110:
#line 508 "parser.y"
                                                                                                                                                        {vec = {(yyvsp[-4].str_val),(yyvsp[-3].str_val),(yyvsp[-1].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3387 "parser.tab.c"
    break;

  case 111:
#line 509 "parser.y"
             {to_declare = 1;}
#line 3393 "parser.tab.c"
    break;

  case 112:
#line 509 "parser.y"
                                                {to_declare = 0;}
#line 3399 "parser.tab.c"
    break;

  case 113:
#line 509 "parser.y"
                                                                                                                                                {vec = {(yyvsp[-3].str_val),(yyvsp[-1].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3405 "parser.tab.c"
    break;

  case 114:
#line 510 "parser.y"
                       {to_declare = 1;}
#line 3411 "parser.tab.c"
    break;

  case 115:
#line 510 "parser.y"
                                                          {to_declare = 0;}
#line 3417 "parser.tab.c"
    break;

  case 116:
#line 510 "parser.y"
                                                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("VOID__" + *(yyvsp[-4].lex) , emp),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3423 "parser.tab.c"
    break;

  case 117:
#line 511 "parser.y"
             {to_declare = 1;}
#line 3429 "parser.tab.c"
    break;

  case 118:
#line 511 "parser.y"
                                                {to_declare = 0;}
#line 3435 "parser.tab.c"
    break;

  case 119:
#line 511 "parser.y"
                                                                                                                                                        {vec = {createnode("VOID__" + *(yyvsp[-4].lex) , emp),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3441 "parser.tab.c"
    break;

  case 120:
#line 512 "parser.y"
                       {to_declare = 1;}
#line 3447 "parser.tab.c"
    break;

  case 121:
#line 512 "parser.y"
                                                          {to_declare = 0;}
#line 3453 "parser.tab.c"
    break;

  case 122:
#line 512 "parser.y"
                                                                                                                                                        {vec = {(yyvsp[-4].str_val),createnode("VOID__" + *(yyvsp[-3].lex) , emp),(yyvsp[-1].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3459 "parser.tab.c"
    break;

  case 123:
#line 513 "parser.y"
             {to_declare = 1;}
#line 3465 "parser.tab.c"
    break;

  case 124:
#line 513 "parser.y"
                                                {to_declare = 0;}
#line 3471 "parser.tab.c"
    break;

  case 125:
#line 513 "parser.y"
                                                                                                                                                {vec = {createnode("VOID__" + *(yyvsp[-3].lex) , emp),(yyvsp[-1].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3477 "parser.tab.c"
    break;

  case 126:
#line 517 "parser.y"
                   {incr_scope();}
#line 3483 "parser.tab.c"
    break;

  case 127:
#line 517 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-4].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3489 "parser.tab.c"
    break;

  case 128:
#line 518 "parser.y"
                   {incr_scope();}
#line 3495 "parser.tab.c"
    break;

  case 129:
#line 518 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3501 "parser.tab.c"
    break;

  case 130:
#line 519 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3507 "parser.tab.c"
    break;

  case 131:
#line 523 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3513 "parser.tab.c"
    break;

  case 132:
#line 524 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3519 "parser.tab.c"
    break;

  case 133:
#line 528 "parser.y"
             {to_declare=1;}
#line 3525 "parser.tab.c"
    break;

  case 134:
#line 528 "parser.y"
                                                                                                                                {to_declare=0; vec = {(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3531 "parser.tab.c"
    break;

  case 135:
#line 529 "parser.y"
                       {to_declare=1;}
#line 3537 "parser.tab.c"
    break;

  case 136:
#line 529 "parser.y"
                                                                                                                                        {to_declare=0; vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3543 "parser.tab.c"
    break;

  case 137:
#line 533 "parser.y"
                                                                                                        {vec = {createnode("THROWS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Throws", vec);}
#line 3549 "parser.tab.c"
    break;

  case 138:
#line 537 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3555 "parser.tab.c"
    break;

  case 139:
#line 538 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3561 "parser.tab.c"
    break;

  case 140:
#line 542 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3567 "parser.tab.c"
    break;

  case 141:
#line 543 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3573 "parser.tab.c"
    break;

  case 142:
#line 547 "parser.y"
        {incr_scope();}
#line 3579 "parser.tab.c"
    break;

  case 143:
#line 547 "parser.y"
                                                                                                        {hide_scope(); vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceInitializer", vec);}
#line 3585 "parser.tab.c"
    break;

  case 144:
#line 551 "parser.y"
               {incr_scope();}
#line 3591 "parser.tab.c"
    break;

  case 145:
#line 551 "parser.y"
                                                                                                                {hide_scope(); vec = {createnode("STATIC__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StaticInitializer", vec);}
#line 3597 "parser.tab.c"
    break;

  case 146:
#line 555 "parser.y"
                  {to_declare=1;}
#line 3603 "parser.tab.c"
    break;

  case 147:
#line 555 "parser.y"
                                                        {to_declare=0;}
#line 3609 "parser.tab.c"
    break;

  case 148:
#line 555 "parser.y"
                                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-5].str_val),(yyvsp[-3].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3615 "parser.tab.c"
    break;

  case 149:
#line 556 "parser.y"
        {to_declare=1;}
#line 3621 "parser.tab.c"
    break;

  case 150:
#line 556 "parser.y"
                                              {to_declare=0;}
#line 3627 "parser.tab.c"
    break;

  case 151:
#line 556 "parser.y"
                                                                                                                                                                {hide_scope(); vec = {(yyvsp[-3].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3633 "parser.tab.c"
    break;

  case 152:
#line 557 "parser.y"
                  {to_declare=1;}
#line 3639 "parser.tab.c"
    break;

  case 153:
#line 557 "parser.y"
                                                        {to_declare=0;}
#line 3645 "parser.tab.c"
    break;

  case 154:
#line 557 "parser.y"
                                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-4].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3651 "parser.tab.c"
    break;

  case 155:
#line 558 "parser.y"
        {to_declare=1;}
#line 3657 "parser.tab.c"
    break;

  case 156:
#line 558 "parser.y"
                                              {to_declare=0;}
#line 3663 "parser.tab.c"
    break;

  case 157:
#line 558 "parser.y"
                                                                                                                                                        {hide_scope(); vec = {(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3669 "parser.tab.c"
    break;

  case 158:
#line 562 "parser.y"
                   {incr_scope();}
#line 3675 "parser.tab.c"
    break;

  case 159:
#line 562 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-4].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3681 "parser.tab.c"
    break;

  case 160:
#line 563 "parser.y"
                   {incr_scope();}
#line 3687 "parser.tab.c"
    break;

  case 161:
#line 563 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3693 "parser.tab.c"
    break;

  case 162:
#line 567 "parser.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3699 "parser.tab.c"
    break;

  case 163:
#line 568 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3705 "parser.tab.c"
    break;

  case 164:
#line 569 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3711 "parser.tab.c"
    break;

  case 165:
#line 570 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3717 "parser.tab.c"
    break;

  case 166:
#line 574 "parser.y"
                                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3723 "parser.tab.c"
    break;

  case 167:
#line 575 "parser.y"
                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3729 "parser.tab.c"
    break;

  case 168:
#line 576 "parser.y"
                                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3735 "parser.tab.c"
    break;

  case 169:
#line 577 "parser.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3741 "parser.tab.c"
    break;

  case 170:
#line 578 "parser.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3747 "parser.tab.c"
    break;

  case 171:
#line 579 "parser.y"
                                                                                                                                {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3753 "parser.tab.c"
    break;

  case 172:
#line 580 "parser.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3759 "parser.tab.c"
    break;

  case 173:
#line 581 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3765 "parser.tab.c"
    break;

  case 174:
#line 585 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3771 "parser.tab.c"
    break;

  case 175:
#line 586 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3777 "parser.tab.c"
    break;

  case 176:
#line 587 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3783 "parser.tab.c"
    break;

  case 177:
#line 588 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3789 "parser.tab.c"
    break;

  case 178:
#line 592 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3795 "parser.tab.c"
    break;

  case 179:
#line 593 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3801 "parser.tab.c"
    break;

  case 180:
#line 597 "parser.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3807 "parser.tab.c"
    break;

  case 181:
#line 598 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3813 "parser.tab.c"
    break;

  case 182:
#line 602 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3819 "parser.tab.c"
    break;

  case 183:
#line 603 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3825 "parser.tab.c"
    break;

  case 184:
#line 607 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3831 "parser.tab.c"
    break;

  case 185:
#line 608 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3837 "parser.tab.c"
    break;

  case 186:
#line 612 "parser.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("LocalVariableDeclarationStatement", vec);}
#line 3843 "parser.tab.c"
    break;

  case 187:
#line 616 "parser.y"
             {to_declare=1;}
#line 3849 "parser.tab.c"
    break;

  case 188:
#line 616 "parser.y"
                                                                                                                                {to_declare=0; vec = {(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3855 "parser.tab.c"
    break;

  case 189:
#line 617 "parser.y"
            {to_declare=1;}
#line 3861 "parser.tab.c"
    break;

  case 190:
#line 617 "parser.y"
                                                                                                                                {to_declare=0; vec = {createnode("VAR__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3867 "parser.tab.c"
    break;

  case 191:
#line 618 "parser.y"
                       {to_declare=1;}
#line 3873 "parser.tab.c"
    break;

  case 192:
#line 618 "parser.y"
                                                                                                                                        {to_declare=0; vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3879 "parser.tab.c"
    break;

  case 193:
#line 619 "parser.y"
                      {to_declare=1;}
#line 3885 "parser.tab.c"
    break;

  case 194:
#line 619 "parser.y"
                                                                                                                                        {to_declare=0; vec = {(yyvsp[-3].str_val),createnode("VAR__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3891 "parser.tab.c"
    break;

  case 195:
#line 623 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3897 "parser.tab.c"
    break;

  case 196:
#line 624 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3903 "parser.tab.c"
    break;

  case 197:
#line 625 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3909 "parser.tab.c"
    break;

  case 198:
#line 626 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3915 "parser.tab.c"
    break;

  case 199:
#line 627 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3921 "parser.tab.c"
    break;

  case 200:
#line 628 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3927 "parser.tab.c"
    break;

  case 201:
#line 632 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3933 "parser.tab.c"
    break;

  case 202:
#line 633 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3939 "parser.tab.c"
    break;

  case 203:
#line 634 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3945 "parser.tab.c"
    break;

  case 204:
#line 635 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3951 "parser.tab.c"
    break;

  case 205:
#line 636 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3957 "parser.tab.c"
    break;

  case 206:
#line 640 "parser.y"
        {incr_scope();}
#line 3963 "parser.tab.c"
    break;

  case 207:
#line 640 "parser.y"
                                                                                                        {hide_scope(); vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3969 "parser.tab.c"
    break;

  case 208:
#line 641 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3975 "parser.tab.c"
    break;

  case 209:
#line 642 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3981 "parser.tab.c"
    break;

  case 210:
#line 643 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3987 "parser.tab.c"
    break;

  case 211:
#line 644 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3993 "parser.tab.c"
    break;

  case 212:
#line 645 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3999 "parser.tab.c"
    break;

  case 213:
#line 646 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 4005 "parser.tab.c"
    break;

  case 214:
#line 647 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 4011 "parser.tab.c"
    break;

  case 215:
#line 648 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 4017 "parser.tab.c"
    break;

  case 216:
#line 649 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 4023 "parser.tab.c"
    break;

  case 217:
#line 650 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 4029 "parser.tab.c"
    break;

  case 218:
#line 651 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 4035 "parser.tab.c"
    break;

  case 219:
#line 655 "parser.y"
                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 4041 "parser.tab.c"
    break;

  case 220:
#line 656 "parser.y"
                                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("COLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 4047 "parser.tab.c"
    break;

  case 221:
#line 660 "parser.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("EmptyStatement", vec);}
#line 4053 "parser.tab.c"
    break;

  case 222:
#line 664 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatement", vec);}
#line 4059 "parser.tab.c"
    break;

  case 223:
#line 668 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatementNoShortIf", vec);}
#line 4065 "parser.tab.c"
    break;

  case 224:
#line 672 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExpressionStatement", vec);}
#line 4071 "parser.tab.c"
    break;

  case 225:
#line 676 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4077 "parser.tab.c"
    break;

  case 226:
#line 677 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4083 "parser.tab.c"
    break;

  case 227:
#line 678 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4089 "parser.tab.c"
    break;

  case 228:
#line 679 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4095 "parser.tab.c"
    break;

  case 229:
#line 680 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4101 "parser.tab.c"
    break;

  case 230:
#line 681 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4107 "parser.tab.c"
    break;

  case 231:
#line 682 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 4113 "parser.tab.c"
    break;

  case 232:
#line 686 "parser.y"
                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenStatement", vec);}
#line 4119 "parser.tab.c"
    break;

  case 233:
#line 690 "parser.y"
                                                                                                                                                {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatement", vec);}
#line 4125 "parser.tab.c"
    break;

  case 234:
#line 694 "parser.y"
                                                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatementNoShortIf", vec);}
#line 4131 "parser.tab.c"
    break;

  case 235:
#line 698 "parser.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchStatement", vec);}
#line 4137 "parser.tab.c"
    break;

  case 236:
#line 702 "parser.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 4143 "parser.tab.c"
    break;

  case 237:
#line 703 "parser.y"
                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 4149 "parser.tab.c"
    break;

  case 238:
#line 704 "parser.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 4155 "parser.tab.c"
    break;

  case 239:
#line 705 "parser.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 4161 "parser.tab.c"
    break;

  case 240:
#line 709 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 4167 "parser.tab.c"
    break;

  case 241:
#line 710 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 4173 "parser.tab.c"
    break;

  case 242:
#line 714 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 4179 "parser.tab.c"
    break;

  case 243:
#line 715 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 4185 "parser.tab.c"
    break;

  case 244:
#line 719 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroup", vec);}
#line 4191 "parser.tab.c"
    break;

  case 245:
#line 723 "parser.y"
                                                                                                                {vec = {createnode("CASE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 4197 "parser.tab.c"
    break;

  case 246:
#line 724 "parser.y"
                                                                                                {vec = {createnode("DEFAULT__" + *(yyvsp[-1].lex) , emp),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 4203 "parser.tab.c"
    break;

  case 247:
#line 728 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 4209 "parser.tab.c"
    break;

  case 248:
#line 729 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 4215 "parser.tab.c"
    break;

  case 249:
#line 733 "parser.y"
                                                                                                                        {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatement", vec);}
#line 4221 "parser.tab.c"
    break;

  case 250:
#line 737 "parser.y"
                                                                                                                                {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatementNoShortIf", vec);}
#line 4227 "parser.tab.c"
    break;

  case 251:
#line 741 "parser.y"
                                                                                                                                        {vec = {createnode("DO__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DoStatement", vec);}
#line 4233 "parser.tab.c"
    break;

  case 252:
#line 745 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 4239 "parser.tab.c"
    break;

  case 253:
#line 746 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 4245 "parser.tab.c"
    break;

  case 254:
#line 750 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 4251 "parser.tab.c"
    break;

  case 255:
#line 751 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 4257 "parser.tab.c"
    break;

  case 256:
#line 755 "parser.y"
            {incr_scope();}
#line 4263 "parser.tab.c"
    break;

  case 257:
#line 755 "parser.y"
                                                                                     {hide_scope();}
#line 4269 "parser.tab.c"
    break;

  case 258:
#line 755 "parser.y"
                                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-10].lex) , emp),createnode("LRB__" + *(yyvsp[-8].lex) , emp),(yyvsp[-7].str_val),createnode("SEMICOLON__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4275 "parser.tab.c"
    break;

  case 259:
#line 756 "parser.y"
            {incr_scope();}
#line 4281 "parser.tab.c"
    break;

  case 260:
#line 756 "parser.y"
                                                                             {hide_scope();}
#line 4287 "parser.tab.c"
    break;

  case 261:
#line 756 "parser.y"
                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-9].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4293 "parser.tab.c"
    break;

  case 262:
#line 757 "parser.y"
            {incr_scope();}
#line 4299 "parser.tab.c"
    break;

  case 263:
#line 757 "parser.y"
                                                                          {hide_scope();}
#line 4305 "parser.tab.c"
    break;

  case 264:
#line 757 "parser.y"
                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-9].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4311 "parser.tab.c"
    break;

  case 265:
#line 758 "parser.y"
            {incr_scope();}
#line 4317 "parser.tab.c"
    break;

  case 266:
#line 758 "parser.y"
                                                                  {hide_scope();}
#line 4323 "parser.tab.c"
    break;

  case 267:
#line 758 "parser.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4329 "parser.tab.c"
    break;

  case 268:
#line 759 "parser.y"
            {incr_scope();}
#line 4335 "parser.tab.c"
    break;

  case 269:
#line 759 "parser.y"
                                                                           {hide_scope();}
#line 4341 "parser.tab.c"
    break;

  case 270:
#line 759 "parser.y"
                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-9].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4347 "parser.tab.c"
    break;

  case 271:
#line 760 "parser.y"
            {incr_scope();}
#line 4353 "parser.tab.c"
    break;

  case 272:
#line 760 "parser.y"
                                                                   {hide_scope();}
#line 4359 "parser.tab.c"
    break;

  case 273:
#line 760 "parser.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4365 "parser.tab.c"
    break;

  case 274:
#line 761 "parser.y"
            {incr_scope();}
#line 4371 "parser.tab.c"
    break;

  case 275:
#line 761 "parser.y"
                                                                {hide_scope();}
#line 4377 "parser.tab.c"
    break;

  case 276:
#line 761 "parser.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4383 "parser.tab.c"
    break;

  case 277:
#line 762 "parser.y"
            {incr_scope();}
#line 4389 "parser.tab.c"
    break;

  case 278:
#line 762 "parser.y"
                                                        {hide_scope();}
#line 4395 "parser.tab.c"
    break;

  case 279:
#line 762 "parser.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4401 "parser.tab.c"
    break;

  case 280:
#line 766 "parser.y"
            {incr_scope();}
#line 4407 "parser.tab.c"
    break;

  case 281:
#line 766 "parser.y"
                                                                                     {hide_scope();}
#line 4413 "parser.tab.c"
    break;

  case 282:
#line 766 "parser.y"
                                                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-10].lex) , emp),createnode("LRB__" + *(yyvsp[-8].lex) , emp),(yyvsp[-7].str_val),createnode("SEMICOLON__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4419 "parser.tab.c"
    break;

  case 283:
#line 767 "parser.y"
            {incr_scope();}
#line 4425 "parser.tab.c"
    break;

  case 284:
#line 767 "parser.y"
                                                                             {hide_scope();}
#line 4431 "parser.tab.c"
    break;

  case 285:
#line 767 "parser.y"
                                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-9].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4437 "parser.tab.c"
    break;

  case 286:
#line 768 "parser.y"
            {incr_scope();}
#line 4443 "parser.tab.c"
    break;

  case 287:
#line 768 "parser.y"
                                                                          {hide_scope();}
#line 4449 "parser.tab.c"
    break;

  case 288:
#line 768 "parser.y"
                                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-9].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4455 "parser.tab.c"
    break;

  case 289:
#line 769 "parser.y"
            {incr_scope();}
#line 4461 "parser.tab.c"
    break;

  case 290:
#line 769 "parser.y"
                                                                  {hide_scope();}
#line 4467 "parser.tab.c"
    break;

  case 291:
#line 769 "parser.y"
                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4473 "parser.tab.c"
    break;

  case 292:
#line 770 "parser.y"
            {incr_scope();}
#line 4479 "parser.tab.c"
    break;

  case 293:
#line 770 "parser.y"
                                                                           {hide_scope();}
#line 4485 "parser.tab.c"
    break;

  case 294:
#line 770 "parser.y"
                                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-9].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4491 "parser.tab.c"
    break;

  case 295:
#line 771 "parser.y"
            {incr_scope();}
#line 4497 "parser.tab.c"
    break;

  case 296:
#line 771 "parser.y"
                                                                   {hide_scope();}
#line 4503 "parser.tab.c"
    break;

  case 297:
#line 771 "parser.y"
                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4509 "parser.tab.c"
    break;

  case 298:
#line 772 "parser.y"
            {incr_scope();}
#line 4515 "parser.tab.c"
    break;

  case 299:
#line 772 "parser.y"
                                                                {hide_scope();}
#line 4521 "parser.tab.c"
    break;

  case 300:
#line 772 "parser.y"
                                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4527 "parser.tab.c"
    break;

  case 301:
#line 773 "parser.y"
            {incr_scope();}
#line 4533 "parser.tab.c"
    break;

  case 302:
#line 773 "parser.y"
                                                        {hide_scope();}
#line 4539 "parser.tab.c"
    break;

  case 303:
#line 773 "parser.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("RRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4545 "parser.tab.c"
    break;

  case 304:
#line 777 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 4551 "parser.tab.c"
    break;

  case 305:
#line 778 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 4557 "parser.tab.c"
    break;

  case 306:
#line 782 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForUpdate", vec);}
#line 4563 "parser.tab.c"
    break;

  case 307:
#line 786 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 4569 "parser.tab.c"
    break;

  case 308:
#line 787 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 4575 "parser.tab.c"
    break;

  case 309:
#line 791 "parser.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatement", vec);}
#line 4581 "parser.tab.c"
    break;

  case 310:
#line 795 "parser.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatementNoShortIf", vec);}
#line 4587 "parser.tab.c"
    break;

  case 311:
#line 799 "parser.y"
                                                                                                                {vec = {createnode("BREAK__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 4593 "parser.tab.c"
    break;

  case 312:
#line 800 "parser.y"
                                                                                                        {vec = {createnode("BREAK__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 4599 "parser.tab.c"
    break;

  case 313:
#line 804 "parser.y"
                                                                                                                {vec = {createnode("CONTINUE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 4605 "parser.tab.c"
    break;

  case 314:
#line 805 "parser.y"
                                                                                                        {vec = {createnode("CONTINUE__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 4611 "parser.tab.c"
    break;

  case 315:
#line 809 "parser.y"
                                                                                                        {vec = {createnode("RETURN__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 4617 "parser.tab.c"
    break;

  case 316:
#line 810 "parser.y"
                                                                                                                {vec = {createnode("RETURN__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 4623 "parser.tab.c"
    break;

  case 317:
#line 814 "parser.y"
                                                                                                                {vec = {createnode("THROW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ThrowStatement", vec);}
#line 4629 "parser.tab.c"
    break;

  case 318:
#line 818 "parser.y"
                                                                                                                        {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SynchronizedStatement", vec);}
#line 4635 "parser.tab.c"
    break;

  case 319:
#line 822 "parser.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4641 "parser.tab.c"
    break;

  case 320:
#line 823 "parser.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4647 "parser.tab.c"
    break;

  case 321:
#line 824 "parser.y"
                                                                                                                {vec = {createnode("TRY__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4653 "parser.tab.c"
    break;

  case 322:
#line 828 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 4659 "parser.tab.c"
    break;

  case 323:
#line 829 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 4665 "parser.tab.c"
    break;

  case 324:
#line 833 "parser.y"
                                                                                                                                        {vec = {createnode("CATCH__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4671 "parser.tab.c"
    break;

  case 325:
#line 834 "parser.y"
                                                                                                                                                {vec = {createnode("CATCH__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4677 "parser.tab.c"
    break;

  case 326:
#line 838 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4683 "parser.tab.c"
    break;

  case 327:
#line 839 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4689 "parser.tab.c"
    break;

  case 328:
#line 843 "parser.y"
                                                                                                        {vec = {createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4695 "parser.tab.c"
    break;

  case 329:
#line 844 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4701 "parser.tab.c"
    break;

  case 330:
#line 848 "parser.y"
                                                                                                {vec = {createnode("FINALLY__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Finally", vec);}
#line 4707 "parser.tab.c"
    break;

  case 331:
#line 852 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4713 "parser.tab.c"
    break;

  case 332:
#line 853 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4719 "parser.tab.c"
    break;

  case 333:
#line 857 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4725 "parser.tab.c"
    break;

  case 334:
#line 858 "parser.y"
                                                                                        {vec = {createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4731 "parser.tab.c"
    break;

  case 335:
#line 859 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4737 "parser.tab.c"
    break;

  case 336:
#line 860 "parser.y"
                                                                                                        {vec = {createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4743 "parser.tab.c"
    break;

  case 337:
#line 861 "parser.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4749 "parser.tab.c"
    break;

  case 338:
#line 862 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4755 "parser.tab.c"
    break;

  case 339:
#line 863 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4761 "parser.tab.c"
    break;

  case 340:
#line 864 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4767 "parser.tab.c"
    break;

  case 341:
#line 868 "parser.y"
                                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4773 "parser.tab.c"
    break;

  case 342:
#line 869 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4779 "parser.tab.c"
    break;

  case 343:
#line 870 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4785 "parser.tab.c"
    break;

  case 344:
#line 874 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4791 "parser.tab.c"
    break;

  case 345:
#line 875 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4797 "parser.tab.c"
    break;

  case 346:
#line 876 "parser.y"
                                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4803 "parser.tab.c"
    break;

  case 347:
#line 877 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4809 "parser.tab.c"
    break;

  case 348:
#line 881 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4815 "parser.tab.c"
    break;

  case 349:
#line 882 "parser.y"
                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-2].lex) , emp),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4821 "parser.tab.c"
    break;

  case 350:
#line 883 "parser.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4827 "parser.tab.c"
    break;

  case 351:
#line 887 "parser.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4833 "parser.tab.c"
    break;

  case 352:
#line 888 "parser.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4839 "parser.tab.c"
    break;

  case 353:
#line 892 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4845 "parser.tab.c"
    break;

  case 354:
#line 893 "parser.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4851 "parser.tab.c"
    break;

  case 355:
#line 894 "parser.y"
                                                                                                                {vec = {(yyvsp[-4].str_val),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4857 "parser.tab.c"
    break;

  case 356:
#line 895 "parser.y"
                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4863 "parser.tab.c"
    break;

  case 357:
#line 896 "parser.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4869 "parser.tab.c"
    break;

  case 358:
#line 897 "parser.y"
                                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4875 "parser.tab.c"
    break;

  case 359:
#line 898 "parser.y"
                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4881 "parser.tab.c"
    break;

  case 360:
#line 899 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-7].str_val),createnode("DOT__" + *(yyvsp[-6].lex) , emp),createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4887 "parser.tab.c"
    break;

  case 361:
#line 903 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4893 "parser.tab.c"
    break;

  case 362:
#line 904 "parser.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4899 "parser.tab.c"
    break;

  case 363:
#line 908 "parser.y"
                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4905 "parser.tab.c"
    break;

  case 364:
#line 909 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4911 "parser.tab.c"
    break;

  case 365:
#line 910 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4917 "parser.tab.c"
    break;

  case 366:
#line 911 "parser.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4923 "parser.tab.c"
    break;

  case 367:
#line 912 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4929 "parser.tab.c"
    break;

  case 368:
#line 913 "parser.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4935 "parser.tab.c"
    break;

  case 369:
#line 917 "parser.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4941 "parser.tab.c"
    break;

  case 370:
#line 918 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4947 "parser.tab.c"
    break;

  case 371:
#line 922 "parser.y"
                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DimExpr", vec);}
#line 4953 "parser.tab.c"
    break;

  case 372:
#line 926 "parser.y"
                                                                                                {vec = {createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4959 "parser.tab.c"
    break;

  case 373:
#line 927 "parser.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4965 "parser.tab.c"
    break;

  case 374:
#line 931 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Expression", vec);}
#line 4971 "parser.tab.c"
    break;

  case 375:
#line 935 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4977 "parser.tab.c"
    break;

  case 376:
#line 936 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4983 "parser.tab.c"
    break;

  case 377:
#line 940 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Assignment", vec);}
#line 4989 "parser.tab.c"
    break;

  case 378:
#line 944 "parser.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4995 "parser.tab.c"
    break;

  case 379:
#line 945 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 5001 "parser.tab.c"
    break;

  case 380:
#line 946 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 5007 "parser.tab.c"
    break;

  case 381:
#line 950 "parser.y"
                                                                                                {vec = {createnode("EQUALTO__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 5013 "parser.tab.c"
    break;

  case 382:
#line 951 "parser.y"
                                                                                        {vec = {createnode("PLUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 5019 "parser.tab.c"
    break;

  case 383:
#line 952 "parser.y"
                                                                                                {vec = {createnode("MINUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 5025 "parser.tab.c"
    break;

  case 384:
#line 953 "parser.y"
                                                                                        {vec = {createnode("MULTET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 5031 "parser.tab.c"
    break;

  case 385:
#line 954 "parser.y"
                                                                                        {vec = {createnode("DIVET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 5037 "parser.tab.c"
    break;

  case 386:
#line 955 "parser.y"
                                                                                        {vec = {createnode("ANDET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 5043 "parser.tab.c"
    break;

  case 387:
#line 959 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 5049 "parser.tab.c"
    break;

  case 388:
#line 960 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("QUEST__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 5055 "parser.tab.c"
    break;

  case 389:
#line 964 "parser.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TernaryAction", vec);}
#line 5061 "parser.tab.c"
    break;

  case 390:
#line 968 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 5067 "parser.tab.c"
    break;

  case 391:
#line 969 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("OR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 5073 "parser.tab.c"
    break;

  case 392:
#line 973 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 5079 "parser.tab.c"
    break;

  case 393:
#line 974 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("AND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 5085 "parser.tab.c"
    break;

  case 394:
#line 978 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 5091 "parser.tab.c"
    break;

  case 395:
#line 979 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 5097 "parser.tab.c"
    break;

  case 396:
#line 983 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 5103 "parser.tab.c"
    break;

  case 397:
#line 984 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("POW__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 5109 "parser.tab.c"
    break;

  case 398:
#line 988 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 5115 "parser.tab.c"
    break;

  case 399:
#line 989 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITAND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 5121 "parser.tab.c"
    break;

  case 400:
#line 993 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 5127 "parser.tab.c"
    break;

  case 401:
#line 994 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("EQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 5133 "parser.tab.c"
    break;

  case 402:
#line 995 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("NEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 5139 "parser.tab.c"
    break;

  case 403:
#line 999 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 5145 "parser.tab.c"
    break;

  case 404:
#line 1000 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 5151 "parser.tab.c"
    break;

  case 405:
#line 1001 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 5157 "parser.tab.c"
    break;

  case 406:
#line 1002 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 5163 "parser.tab.c"
    break;

  case 407:
#line 1003 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 5169 "parser.tab.c"
    break;

  case 408:
#line 1004 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 5175 "parser.tab.c"
    break;

  case 409:
#line 1008 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("INSTANCEOF__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceofExpression", vec);}
#line 5181 "parser.tab.c"
    break;

  case 410:
#line 1012 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 5187 "parser.tab.c"
    break;

  case 411:
#line 1013 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEFTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 5193 "parser.tab.c"
    break;

  case 412:
#line 1014 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("RIGHTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 5199 "parser.tab.c"
    break;

  case 413:
#line 1015 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("THREEGREAT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 5205 "parser.tab.c"
    break;

  case 414:
#line 1019 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 5211 "parser.tab.c"
    break;

  case 415:
#line 1020 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 5217 "parser.tab.c"
    break;

  case 416:
#line 1021 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 5223 "parser.tab.c"
    break;

  case 417:
#line 1025 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 5229 "parser.tab.c"
    break;

  case 418:
#line 1026 "parser.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("MULT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 5235 "parser.tab.c"
    break;

  case 419:
#line 1027 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DIVIDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 5241 "parser.tab.c"
    break;

  case 420:
#line 1028 "parser.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MODULO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 5247 "parser.tab.c"
    break;

  case 421:
#line 1032 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 5253 "parser.tab.c"
    break;

  case 422:
#line 1033 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 5259 "parser.tab.c"
    break;

  case 423:
#line 1034 "parser.y"
                                                                                                        {vec = {createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 5265 "parser.tab.c"
    break;

  case 424:
#line 1035 "parser.y"
                                                                                                        {vec = {createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 5271 "parser.tab.c"
    break;

  case 425:
#line 1036 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 5277 "parser.tab.c"
    break;

  case 426:
#line 1040 "parser.y"
                                                                                                                {vec = {createnode("INCREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreIncrementExpression", vec);}
#line 5283 "parser.tab.c"
    break;

  case 427:
#line 1044 "parser.y"
                                                                                                                {vec = {createnode("DECREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreDecrementExpression", vec);}
#line 5289 "parser.tab.c"
    break;

  case 428:
#line 1048 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 5295 "parser.tab.c"
    break;

  case 429:
#line 1049 "parser.y"
                                                                                                        {vec = {createnode("TILDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 5301 "parser.tab.c"
    break;

  case 430:
#line 1050 "parser.y"
                                                                                                        {vec = {createnode("NOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 5307 "parser.tab.c"
    break;

  case 431:
#line 1051 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 5313 "parser.tab.c"
    break;

  case 432:
#line 1052 "parser.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 5319 "parser.tab.c"
    break;

  case 433:
#line 1056 "parser.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 5325 "parser.tab.c"
    break;

  case 434:
#line 1057 "parser.y"
                                                    {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 5331 "parser.tab.c"
    break;

  case 435:
#line 1058 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 5337 "parser.tab.c"
    break;

  case 436:
#line 1059 "parser.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 5343 "parser.tab.c"
    break;

  case 437:
#line 1063 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("INCREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostIncrementExpression", vec);}
#line 5349 "parser.tab.c"
    break;

  case 438:
#line 1067 "parser.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("DECREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostDecrementExpression", vec);}
#line 5355 "parser.tab.c"
    break;

  case 439:
#line 1071 "parser.y"
                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 5361 "parser.tab.c"
    break;

  case 440:
#line 1072 "parser.y"
                                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 5367 "parser.tab.c"
    break;

  case 441:
#line 1076 "parser.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchExpression", vec);}
#line 5373 "parser.tab.c"
    break;


#line 5377 "parser.tab.c"

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
#line 1079 "parser.y"


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
	cout << "JHISDDAWD\n";
   
		string inp = argv[1];
		string outp = argv[2];
		cout << "JHISDDAWD\n";
		// print symboltable
		// for(auto i:sym_table){
		// 	tab_item t = i.second;
		// 	for(auto j: t.scope){
		// 		cout << i.first << " " << j << endl;
		// 	}
		// }
        freopen(inp.c_str(), "r", stdin);
        freopen(outp.c_str(), "w", stdout);
		cout << "HII231\n";
        yyparse();
        cout<<"strict digraph {\n";
        make_ast(root, root, 0);
        revise_ast(root, root, 0);
        dfs(root);
        cout<<"}\n";

    
    return 0;
}
