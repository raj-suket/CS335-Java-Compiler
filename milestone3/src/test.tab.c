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
#line 1 "test.y"

#include<bits/stdc++.h>
#include"symbol_table.cpp"
using namespace std;
extern int yylineno;

map<string, int> typeMap;
map<int, string> revMap;
map<int, string> revOffMap;
map<string, int> mmap; 
int curr_mem = 0; 
int insert_to_map(string & s){
	if(s=="byte" || s=="int" || s=="long" || s=="short" || s=="char"){
		if(typeMap.find(s)==typeMap.end()){
			typeMap[s]=typeMap.size()+1;
			revOffMap[typeMap[s]] = s;
			revMap[typeMap[s]]="int";
		}
	}
	else if(s=="float" || s=="double")
	{
		if(typeMap.find(s)==typeMap.end()){
			typeMap[s]=typeMap.size()+1;
			revOffMap[typeMap[s]] = s;
			revMap[typeMap[s]]="float";
		}
	}
	else
	{
		if(typeMap.find(s)==typeMap.end()){
			typeMap[s]=typeMap.size()+1;
			revOffMap[typeMap[s]] = s;
			revMap[typeMap[s]]=s;
		}
	}
	return typeMap[s];
}
// int insert_to_map(string & s){
// 	if(typeMap.find(s)==typeMap.end()){
// 		typeMap[s]=typeMap.size()+1;
// 		revOffMap[typeMap[s]] = s;
// 		revMap[typeMap[s]]=s;
// 	}
// 	return typeMap[s];
// }

int yyerror(const char* s)
{
	cerr<<"YYERROR\n"<<yylineno<<endl;
    exit(0);
}
int yylex(void);

int regcount=1;

struct Node{
    string val;
	int nodetype=-1;
	int lineno;
    vector<Node*> children;
	int reg=-1;
	vector<string> inst;
	Node* parent;
	vector<int> scope;
};

Node* createnode (string  val, vector<Node*>  children){
    Node * temp = new Node;
    temp->val = val;
    for(int i=0;i<children.size();i++){
        temp->children.push_back(children[i]);
    }
	temp->lineno = yylineno;
    return temp;
}
map<vector<int> , int> counts;
vector<int> current_scope = {0};

void hide_scope(){
    current_scope.pop_back();
}

void incr_scope(){
    current_scope.push_back(counts[current_scope]++);
}
void print(vector<string> temp){
	for(auto i:temp) cerr << i << " ";
	cerr << endl;
}
Node* root;
int num_classes_minus_one = 0;
vector<Node *> emp;
vector<Node *> vec;
vector<string> empty_string_vec;

#line 166 "test.tab.c"

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
#line 98 "test.y"

    struct Node* str_val;
    std::string* lex;

#line 322 "test.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TEST_TAB_H_INCLUDED  */



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
#define YYLAST   4277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  363
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  679

#define YYUNDEFTOK  2
#define YYMAXUTOK   353


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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   347,   347,   350,   354,   355,   356,   357,   358,   359,
     360,   364,   368,   372,   373,   377,   378,   382,   383,   387,
     388,   389,   393,   394,   398,   402,   406,   407,   411,   412,
     416,   417,   421,   422,   423,   424,   425,   426,   427,   428,
     432,   433,   437,   438,   442,   443,   447,   448,   449,   453,
     454,   458,   462,   466,   467,   472,   473,   474,   475,   479,
     480,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   497,   501,   502,   506,   507,   511,   512,   513,   514,
     518,   519,   520,   524,   525,   529,   530,   534,   535,   539,
     540,   544,   545,   549,   553,   554,   555,   556,   557,   558,
     559,   560,   564,   565,   566,   570,   571,   575,   576,   580,
     584,   585,   589,   590,   594,   598,   602,   603,   604,   605,
     609,   610,   614,   615,   616,   617,   621,   622,   623,   624,
     625,   626,   627,   628,   632,   633,   634,   635,   639,   640,
     644,   645,   649,   650,   654,   655,   659,   663,   664,   665,
     666,   670,   671,   672,   673,   674,   675,   679,   680,   681,
     682,   683,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   702,   703,   707,   711,   715,   719,
     723,   724,   725,   726,   727,   728,   729,   733,   737,   741,
     745,   749,   750,   751,   752,   756,   757,   761,   762,   766,
     770,   771,   775,   776,   780,   784,   788,   792,   793,   797,
     798,   802,   803,   804,   805,   806,   807,   808,   809,   813,
     814,   815,   816,   817,   818,   819,   820,   824,   825,   829,
     833,   834,   838,   842,   846,   847,   851,   852,   856,   857,
     861,   865,   869,   870,   871,   875,   876,   880,   881,   885,
     886,   890,   891,   895,   899,   900,   904,   905,   906,   907,
     908,   909,   910,   911,   915,   916,   917,   921,   922,   923,
     924,   928,   929,   933,   934,   938,   939,   940,   941,   942,
     943,   944,   945,   949,   950,   954,   955,   956,   957,   958,
     959,   963,   964,   968,   972,   973,   977,   981,   982,   986,
     990,   991,   992,   996,   997,   998,   999,  1000,  1001,  1005,
    1006,  1010,  1014,  1015,  1019,  1020,  1024,  1025,  1029,  1030,
    1034,  1035,  1039,  1040,  1041,  1045,  1046,  1047,  1048,  1049,
    1050,  1054,  1058,  1059,  1060,  1061,  1065,  1066,  1067,  1071,
    1072,  1073,  1074,  1078,  1079,  1080,  1081,  1082,  1086,  1090,
    1094,  1095,  1096,  1097,  1098,  1102,  1103,  1104,  1105,  1109,
    1113,  1117,  1118,  1122
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
  "INSTANCEOF", "INTEGRALTYPE", "LCB", "LEFTSHIFT", "LEQ", "BOOL_LITERAL",
  "NULL_LITERAL", "INT_LITERAL", "FLOAT_LITERAL", "STRING_LITERAL",
  "TEXTBLOCK_LITERAL", "CHAR_LITERAL", "LRB", "LSB", "LT", "MINUS",
  "MINUSET", "MODULE", "MODULO", "MULT", "MULTET", "NATIVE", "NEQ", "NEW",
  "NOT", "OPENS", "OR", "PACKAGE", "PLUS", "PLUSET", "POW", "PRIVATE",
  "PROTECTED", "PROVIDES", "PUBLIC", "QUEST", "RCB", "REQUIRES", "RETURN",
  "RIGHTSHIFT", "RRB", "RSB", "SEMICOLON", "STATIC", "SUPER", "SWITCH",
  "SYNCHRONIZED", "THIS", "THREEGREAT", "THROW", "THROWS", "TILDE", "TO",
  "TRANSIENT", "TRANSITIVE", "TRY", "USES", "VAR", "VOID", "VOLATILE",
  "WHILE", "WITH", "$accept", "RRB1", "Identifier", "Literal",
  "IntegralType", "FloatingPointType", "Name", "Names", "CompilationUnit",
  "OrdinaryCompilationUnit", "TopLevelClassOrInterfaceDeclarations",
  "ModularCompilationUnit", "PackageDeclaration",
  "TopLevelClassOrInterfaceDeclaration", "ModuleDeclaration",
  "ModuleDirectives", "ModuleDirective", "RequiresModifiers",
  "RequiresModifier", "Type", "PrimitiveType", "ReferenceType",
  "ClassOrInterfaceType", "ClassType", "ArrayType", "ClassDeclaration",
  "Modifiers", "Modifier", "ClassExtends", "ClassBody",
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
     345,   346,   347,   348,   349,   350,   351,   352,   353
};
# endif

#define YYPACT_NINF (-470)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-359)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     712,  -470,    41,  -470,    41,  -470,    41,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,    85,  -470,   290,  -470,   290,
    -470,  -470,  -470,   969,  -470,  -470,   380,  -470,    60,    84,
    -470,  -470,   290,    41,  -470,    41,   633,    74,  -470,    41,
     139,  -470,   380,   156,  -470,  -470,  -470,  -470,  -470,  2251,
    -470,  -470,   180,    41,   204,  -470,  -470,   192,    41,   224,
    -470,  -470,  -470,   879,   717,  -470,  -470,  -470,  -470,   178,
    -470,  -470,  -470,    -7,  -470,  -470,  -470,    41,    41,    41,
    -470,    18,    41,   217,  -470,    74,  -470,  4189,     9,   115,
    4189,  3167,   243,   245,  4189,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  4189,   409,  -470,  3403,  -470,   283,   266,   268,
    -470,  4189,   180,    41,   274,   319,  -470,   388,    41,  2994,
    -470,  2343,  -470,  -470,   272,  -470,  -470,  -470,  -470,  -470,
    -470,   297,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,   390,   370,    31,  -470,
     335,   338,    54,  -470,  -470,   389,  -470,  -470,   278,   291,
     345,  -470,   368,   104,  3038,   351,   383,   368,    33,  -470,
     257,   104,   383,    41,    41,    -7,  -470,  -470,  -470,  -470,
    -470,  2435,    41,   396,  -470,    35,    36,     5,  -470,  -470,
      95,    18,  -470,    98,  -470,  -470,  -470,   409,  4189,  4189,
    4189,   391,  4189,   496,  -470,  -470,    14,  -470,  -470,  -470,
     334,   440,   446,   381,   450,   140,   546,  -470,   249,   170,
     265,  -470,  -470,  -470,  -470,   278,  -470,  -470,  -470,  -470,
    -470,   385,  -470,   393,   282,  -470,  -470,  -470,   268,   373,
    2885,  4189,  -470,   398,   445,   349,  -470,   419,    41,  4189,
    4189,   426,   367,  -470,   491,  4189,  3167,   218,  3452,  3501,
     491,    41,    41,  -470,  -470,  -470,  -470,   155,  4189,  -470,
    -470,  -470,  -470,  -470,  -470,  4189,  -470,  -470,  3055,   429,
    -470,  -470,    41,  3099,    25,  -470,  -470,   430,    41,  -470,
    3552,   431,  -470,   104,    39,   104,   396,  -470,  -470,   198,
     461,   539,  2527,  2619,   490,  -470,   499,  -470,  -470,    41,
    -470,    41,    41,  -470,   151,  -470,  -470,   126,   438,  -470,
    -470,  -470,  4189,  -470,  4189,  4189,  -470,  4189,  4189,  4189,
    4189,  4189,  4189,  4189,  4189,  4189,  4189,   409,  4189,  4189,
    4189,  4189,  4189,  4189,  4189,  4189,  4189,  4189,  -470,  -470,
     468,  3601,   505,  -470,   448,   513,   453,  -470,  3501,   445,
    -470,   201,  3650,   445,   201,  -470,   482,   456,   460,  -470,
     492,   180,   367,  -470,  -470,   462,  -470,    41,   518,  -470,
    -470,  -470,    49,  -470,   466,   491,   491,   498,  -470,   470,
    -470,  -470,    64,  -470,   501,    41,  3099,  -470,  -470,  -470,
    3303,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,  3699,
    3748,   238,  -470,  2711,  -470,   228,    41,   156,    48,    56,
      58,  -470,  4189,  1602,   474,   480,   440,   557,  -470,   446,
     381,   450,   140,   546,   546,   249,   249,   224,  -470,   249,
     249,   170,   170,   170,   265,   265,  -470,  -470,  -470,  4189,
     799,   495,  4189,  3797,  1280,  3246,   502,  -470,   383,  -470,
      74,    68,   383,  -470,  3846,   537,   180,   912,  -470,  -470,
    -470,  3167,   532,    41,  4189,  -470,  -470,  3895,  -470,  -470,
     501,  -470,   509,  -470,  -470,    50,   507,    75,   512,   123,
     275,  -470,   535,  -470,    41,  -470,  -470,  -470,  -470,  -470,
     537,  -470,  4189,   516,  -470,  3167,   517,   513,   799,   521,
     799,   520,  -470,   551,   552,   553,   589,  -470,   581,   582,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,  -470,    74,  -470,
     125,    63,  -470,  -470,   159,   912,    41,  -470,   558,  -470,
    -470,   128,  -470,  3354,  -470,  -470,   529,  -470,   531,  3944,
    3993,   156,  -470,  -470,   534,  -470,  3167,  3167,   517,  3167,
    3167,   517,   799,  2946,  4189,  4189,  3246,  3167,  -470,  -470,
    4189,   597,  -470,    66,  2057,  -470,  -470,    41,   607,    41,
     289,  4042,  -470,  -470,  -470,  -470,  -470,   538,   141,   540,
     144,  -470,  -470,  -470,  3167,  -470,  -470,  3167,  3167,   517,
    4091,   602,   541,   544,   545,  -470,  -470,   401,  -470,  -470,
    -470,  2159,  -470,  -470,  2803,  -470,  -470,    41,   306,   180,
    -470,   154,  -470,   547,  -470,   550,  -470,  -470,  -470,  3167,
     799,   555,  4189,  4140,  3246,  3246,  -470,  4189,  -470,  -470,
     180,  -470,  -470,  -470,  -470,  -470,  3246,   517,   799,   548,
     799,   556,   595,  -470,  -470,  -470,  -470,  3246,  3246,   517,
    3246,  3246,   517,   799,  3246,  -470,  -470,  3246,  -470,  -470,
    3246,  3246,   517,  -470,  -470,  -470,  -470,  3246,  -470
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    65,     0,    66,     0,    67,     0,    63,    62,    61,
      27,    64,    68,    69,    70,     0,    17,    20,    18,    21,
      22,    24,    26,     0,    59,     3,     0,    13,     0,     0,
       1,    23,    19,     0,    60,     0,     0,     0,    58,     0,
       0,    25,     0,    51,    52,    71,    48,    12,    11,     0,
      72,    82,    64,     0,    13,    46,    47,    51,     0,    44,
      45,    49,    50,     0,     0,    74,    76,    80,    81,     0,
      79,    77,    78,     0,   114,    56,    14,     0,     0,     0,
      29,     0,     0,     0,    30,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,     0,     0,   141,     0,   176,     0,     0,    68,
     257,     0,     0,     0,     0,    13,   256,   300,     0,     0,
     162,     0,   143,   144,     0,   145,   151,   165,   163,   152,
     164,     0,   153,   154,   166,   155,   167,   156,   207,   208,
     168,   169,   170,   172,   171,   173,   355,   254,   260,   264,
     261,   262,   263,   255,   180,     0,   181,   182,     0,   183,
     184,   115,     0,   101,     0,     0,    54,    89,     0,    85,
      87,    97,    53,     0,     0,     0,    73,    75,   113,    93,
     112,     0,     0,     0,   119,     0,     0,     0,    43,    42,
       0,     0,    40,     0,    28,    31,    55,     0,     0,     0,
       0,     0,     0,   356,   260,   263,     0,   296,   298,   297,
     309,   312,   314,   316,   318,   320,   322,   330,   325,   332,
     336,   339,   343,   344,   347,   350,   357,   358,   353,   354,
     235,     0,   237,     0,   356,   261,   262,   349,     0,     0,
       0,     0,   348,     0,     0,     0,   238,     0,     0,     0,
       0,     0,     0,    89,   148,     0,     0,     0,     0,     0,
     147,     0,     0,   140,   142,   146,   179,     0,     0,   308,
     307,   303,   305,   306,   304,     0,   360,   359,     0,     0,
      99,   121,     0,     0,     0,   105,   294,     0,     0,    84,
       0,     0,    95,   100,     0,    96,     0,   118,   125,     0,
     257,   300,     0,     0,   355,   110,   109,   117,    35,     0,
      36,     0,     0,    33,     0,    41,    38,     0,     0,   346,
     352,   345,     0,   351,     0,     0,   174,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,   236,
       0,     0,   228,   231,     0,   227,     0,   259,     0,   285,
     292,     0,     0,   287,     0,   239,   272,     0,     0,   240,
       0,     0,   242,   246,   243,     0,   177,     0,     0,   258,
     265,   275,     0,   283,     0,   150,   149,   271,   266,     0,
     299,   103,     0,   104,   107,     0,     0,   120,   295,    86,
       0,    88,    92,    91,    90,    98,    83,    94,   116,     0,
       0,     0,   124,     0,   123,     0,     0,    15,     0,     0,
       0,    32,     0,     0,     0,     0,   313,     0,   310,   315,
     317,   319,   321,   323,   324,   329,   327,     0,   331,   328,
     326,   333,   334,   335,   338,   337,   341,   342,   340,     0,
       0,     0,     0,     0,     0,     0,     0,   291,   286,   289,
     270,     0,   288,   290,     0,     0,     0,     0,   253,   245,
     244,     0,     0,     0,     0,   276,   273,     0,   274,   102,
     108,   106,     0,   134,   138,     0,     0,     0,     0,     0,
       0,   122,     0,   111,     0,    34,    37,    39,   361,   362,
       0,   175,     0,     0,     2,     0,     0,   229,     0,     0,
       0,     0,   230,     0,     0,     0,    13,   187,     0,   151,
     158,   159,   160,   161,   209,   210,   293,   268,   267,   279,
       0,     0,   190,   241,   249,     0,     0,   204,     0,   284,
     277,     0,   136,     0,   135,   129,     0,   127,     0,     0,
       0,    16,   363,   311,     0,   218,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   269,   280,
       0,     0,   194,     0,     0,   195,   197,     0,   250,     0,
       0,     0,   278,   137,   139,   128,   126,     0,     0,     0,
       0,   206,   214,   216,     0,   232,   217,     0,     0,     0,
       0,   228,     0,     0,     0,   178,   188,     0,   202,   201,
     193,     0,   196,   192,   199,   198,   251,     0,     0,     0,
     281,     0,   130,     0,   132,     0,   212,   213,   215,     0,
       0,     0,     0,     0,     0,     0,   200,     0,   191,   252,
       0,   247,   282,   131,   133,   211,     0,     0,     0,     0,
       0,     0,     0,   205,   203,   248,   226,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   224,     0,   233,   225,
       0,     0,     0,   189,   220,   221,   223,     0,   219
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -470,  -414,    -2,  -470,  -470,  -470,   147,   149,  -470,  -470,
     604,  -470,  -470,   239,  -470,  -470,   554,  -470,   433,   -14,
     -93,  -180,   -27,  -177,  -470,  -470,     6,   -22,   588,   -26,
    -470,   567,  -470,  -470,   -74,   350,  -273,  -385,  -470,  -470,
     -13,   361,   244,  -103,  -470,  -470,  -470,  -470,  -470,   580,
    -154,  -470,    11,  -470,   -34,   -35,  -117,  -470,  -237,   877,
    -135,  -293,  -470,  -470,  -470,  -470,  -470,  -227,  -470,  -470,
    -470,  -470,   145,  -470,    73,    77,  -408,  -470,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,    88,  -455,  -233,  -470,  -470,
    -470,  -470,  -470,  -470,  -470,  -470,  -470,   276,   112,  -470,
     280,   472,  -470,   264,  -231,  1365,  1541,   447,  -343,  -470,
     412,  -268,   -47,   913,  -470,  1671,  -470,  -470,  -469,  -470,
    -470,   327,   331,   340,   333,   341,   118,  -470,   127,    86,
     124,   -70,   617,   745,   251,   942,  1170,  1340,  -470,  -470
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   505,    27,   116,    55,    56,   203,   418,    15,    16,
      17,    18,    19,    20,    21,    83,    84,   191,   192,   118,
      59,    60,    61,    45,    62,    22,   119,    24,    37,    38,
      64,    65,    66,    67,   168,   169,   170,   401,    68,    69,
     163,   284,   285,   183,   306,   179,    70,    71,    72,    73,
     184,   302,   402,   485,   120,   614,   122,   123,   124,   125,
     518,   126,   127,   128,   129,   520,   130,   131,   132,   133,
     521,   134,   532,   573,   574,   575,   576,   607,   135,   522,
     136,   137,   523,   138,   524,   354,   506,   507,   139,   525,
     140,   141,   142,   143,   144,   145,   372,   373,   536,   578,
     374,   146,   147,   204,   149,   150,   151,   205,   382,   153,
     359,   360,   166,   383,   207,   154,   155,   275,   209,   428,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    34,    74,   352,   264,   305,    23,   355,    44,   394,
     244,    75,   172,   353,   121,   484,    86,   318,   161,   461,
     237,   297,    58,    23,   242,    23,   380,    39,   325,   307,
      74,    42,   181,   553,    54,   180,   388,    76,    23,   254,
     396,    34,    63,    25,   260,   171,  -186,   115,   288,   174,
      58,   162,    25,   558,   288,   561,   167,    39,    39,   196,
     280,    54,    54,   494,   474,   543,   487,   489,   292,  -185,
      63,   494,   296,   494,   570,    25,   245,   570,   252,   396,
     182,   571,    39,   474,   571,    30,   231,   233,   230,   115,
     474,   457,   556,   326,   557,   457,   560,    34,   188,    40,
     294,   608,   397,   312,   317,   262,    39,   599,  -186,   189,
    -186,   253,   289,    36,   308,   310,   253,    39,   406,   115,
      39,   530,   480,   544,   309,   311,   475,   495,   319,   320,
     321,  -185,   323,  -185,   541,   496,   572,   497,   474,   610,
     474,   479,   408,   474,   594,   528,   303,   597,   598,    25,
     282,    28,   546,    29,   279,    44,   474,   438,   584,   474,
     293,   295,   519,    41,   333,    77,   615,   577,   654,   474,
     283,   162,   167,    39,   313,   647,   165,   316,    39,   115,
     380,    39,    43,    57,   388,   629,   264,   385,   386,    25,
     405,   182,   407,   659,   232,   662,   117,   361,   364,   334,
     548,    78,   569,   615,   422,   582,   588,   590,   672,    79,
      57,    57,    80,    81,    39,   377,   646,    49,   623,    49,
     248,   625,   343,   353,   185,   186,   187,   512,   190,   193,
     421,   642,    82,   657,   658,   344,   661,   234,   621,   493,
     400,   234,   165,    77,   437,   667,   366,   409,   670,   671,
      43,   287,    25,   164,   115,    76,    31,   178,   677,   253,
     253,    34,    25,   580,   282,   387,    57,   413,   117,   395,
     172,    31,    25,   519,   165,   446,   447,   448,   377,    78,
     253,   353,   290,   353,   283,   345,   253,    79,   377,   340,
     194,    81,   240,     1,   241,   276,   264,   473,   377,   378,
     115,   115,   379,     2,   257,   248,   618,   291,  -357,   492,
      82,    57,   458,   148,   277,   249,   462,   250,     3,   490,
     346,   347,   379,   255,   549,   341,   601,  -357,   301,    43,
     355,   258,   324,   256,   342,   353,   353,   468,   314,   291,
    -301,   519,   519,  -302,    57,   234,   234,   234,     5,   234,
     472,   265,   498,   519,  -301,   148,   291,  -302,     7,     8,
    -301,     9,  -358,  -302,   519,   519,   619,   519,   519,    10,
      11,   519,   459,    12,   519,   463,   266,   519,   519,   370,
      13,  -358,   282,   640,   519,   148,    14,   117,  -301,    44,
     172,  -302,  -301,   253,   269,  -302,   371,   327,   362,   358,
     616,  -301,   283,   353,  -302,  -356,   328,    35,   270,    76,
     257,   115,   267,   387,   271,   636,   637,   278,    46,    36,
     268,   353,   -51,   353,  -356,    57,   441,   442,   443,   286,
      57,   605,   533,   287,   527,   181,   353,   258,   259,    47,
     639,   322,   272,    25,   329,   148,   273,    48,   331,   117,
     117,   433,   434,   516,   330,   274,   417,   332,   417,   417,
     419,   420,   435,   436,   348,   439,   440,   444,   445,   115,
     350,   538,   349,   535,   234,   357,   234,   234,   234,   234,
     234,   234,   234,   234,    57,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   358,   152,   264,   365,   652,
     653,  -300,   568,   115,   148,   369,   288,   393,   398,   404,
     410,   656,   415,    34,   416,  -300,   423,   449,   257,   452,
     148,  -300,   665,   666,    43,   668,   669,   453,   454,   673,
     455,   464,   674,   465,   253,   675,   676,   466,   152,   471,
     473,   467,   678,    57,   476,   258,   324,   477,   478,  -300,
      44,   291,   500,  -300,   115,   115,  -356,   115,   115,   501,
     117,   411,  -300,    43,   516,   115,   148,   148,   152,   234,
     234,   502,   115,   -51,   508,  -356,   531,   253,   335,   336,
     526,   362,   542,   337,   550,   641,   545,   338,   258,   259,
      44,   547,   115,   554,   504,   115,   115,   339,   559,   562,
     563,   564,   565,   566,   567,  -157,   655,   581,   585,   115,
     586,   609,   115,   591,   534,   617,   632,   622,   664,   624,
     633,   634,   635,    32,   315,   660,   643,   115,   152,   644,
      85,   177,   516,   516,   648,   663,     1,   195,   399,   392,
     481,   551,    46,   175,   516,   552,   611,   579,   469,   234,
     612,   602,   470,   304,   426,   516,   516,   363,   516,   516,
     429,     3,   516,    47,   431,   516,   156,    25,   516,   516,
     430,    48,    49,   432,   499,   516,     0,   148,     0,     0,
       0,     0,   534,     0,     0,     0,     0,   152,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     8,   152,     9,     0,    50,     0,   156,     0,
     117,     0,    51,    52,   148,     1,    12,   234,   148,   148,
       1,   117,     0,    13,    43,     2,    46,     0,    53,    14,
       0,     0,     0,     0,     0,   148,     0,     0,   156,     0,
       3,     0,     0,     0,     0,     3,     0,    47,     0,   152,
     152,    25,     0,     0,     0,    48,    49,     0,   117,     0,
       0,   117,     0,     0,    43,     0,     4,     0,     0,   148,
       5,     0,   148,     0,   148,     5,     6,     0,     0,     0,
       7,     8,     0,     9,   234,     7,     8,     0,     9,     0,
     176,    10,    11,     0,   157,    12,    51,    52,   156,     0,
      12,     0,    13,     0,     0,     0,     0,    13,    14,     0,
       0,     0,    53,    14,     0,     0,    90,     0,     0,     0,
     148,   148,     0,   148,   148,     0,   148,   148,     0,     0,
     148,   148,     0,    25,     0,    94,   157,     0,   148,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,   156,   148,   103,
     152,   148,   148,     0,     0,     0,   157,     0,     0,     0,
       0,     0,     0,   156,     0,   148,   504,     0,   148,     0,
     107,     0,     1,   110,     0,     0,     0,     0,    46,     0,
       0,     0,     0,   148,   148,     0,     0,   152,   148,   148,
       0,   152,   152,     0,     0,     0,     0,     3,     0,    47,
     148,     0,   148,    25,   148,     1,     0,    48,   152,   156,
     156,   148,   148,     0,   148,   148,   157,   148,   148,     0,
       0,   148,     0,     0,   148,   148,     0,     5,     0,     0,
       3,   148,     0,     0,     0,     0,    25,     7,     8,     0,
       9,     0,   152,     0,     0,   152,     0,   152,     0,    11,
       0,     0,    12,     0,     0,     0,     0,     0,   239,    13,
       5,     0,     1,     0,   173,    14,     0,     0,     0,     0,
       7,     8,    33,     9,     0,   157,     0,     0,     0,     0,
       0,   158,    11,     0,     0,    12,     0,     3,     0,     0,
     206,   157,    13,   152,   152,     0,   152,   152,    14,   152,
     152,     0,     0,   152,   152,   243,     0,     0,   247,     0,
       0,   152,     0,     0,   251,     0,     0,     5,     0,     0,
     156,     0,     0,   158,     0,     0,     0,     7,     8,     0,
       9,   152,     0,     0,   152,   152,     0,   157,   157,    11,
       0,     0,    12,     0,     0,     0,     0,     0,   152,    13,
       0,   152,     0,   158,     0,    14,     0,   156,     0,     0,
       0,   156,   156,     0,     0,     0,   152,   152,     0,     0,
       0,   152,   152,     0,     0,     0,     0,     0,   156,     0,
       0,     0,     0,   152,     0,   152,     0,   152,     0,     0,
       0,     0,     0,     0,   152,   152,     0,   152,   152,     0,
     152,   152,     0,     0,   152,     0,     0,   152,   152,     0,
       0,     0,   156,   158,   152,   156,     0,   156,     0,     0,
       0,     0,     0,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   356,     0,     0,     0,   157,     0,
       0,     0,   367,   368,     0,     0,     0,     0,   375,     0,
       0,     0,   384,   156,   156,     0,   156,   156,     0,   156,
     156,   389,   158,   156,   156,     0,     0,     0,   390,     0,
       0,   156,     0,     0,     0,   157,     0,     0,   158,   157,
     157,     0,     0,   403,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,   156,   156,   157,     0,     0,   159,
       0,     0,     0,     0,     0,     0,     0,     0,   156,     0,
       0,   156,     0,     0,     0,   424,     0,   384,   425,     0,
       0,   427,     0,     0,   158,   158,   156,   156,     0,     0,
     157,   156,   156,   157,     0,   157,     0,     0,     0,     0,
       0,   159,     0,   156,   451,   156,     0,   156,     0,     0,
       0,   456,     0,     0,   156,   156,     0,   156,   156,     0,
     156,   156,     0,     0,   156,     0,     0,   156,   156,     0,
       0,   159,     0,     0,   156,     0,     0,    90,     0,     0,
       0,   157,   157,     0,   157,   157,     0,   157,   157,     0,
       0,   157,   157,   403,    25,     0,    94,     0,     0,   157,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
       0,     0,   517,     0,     0,     0,     0,     0,     0,   157,
     103,     0,   157,   157,     0,     0,     0,     0,   537,     0,
       0,   159,     0,     0,     0,   158,   157,     0,     0,   157,
       0,   107,   503,     0,   110,   509,   511,     0,     0,     0,
       0,     0,     0,     0,   157,   157,     0,     0,     0,   157,
     157,     0,   555,     0,     0,     0,     0,   539,     0,   160,
       0,   157,   158,   157,     0,   157,   158,   158,     0,     0,
       0,     0,   157,   157,     0,   157,   157,     0,   157,   157,
     159,     0,   157,   158,     0,   157,   157,     0,     0,     0,
       0,     0,   157,     0,     0,     0,   159,     0,     0,     0,
       0,   160,     0,   592,   593,     0,   595,   596,     0,     0,
       0,     0,     0,   376,   606,     0,     0,   158,     0,     0,
     158,     0,   158,     0,     0,   235,   403,     0,     0,   235,
       0,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   626,   159,   159,   627,   628,     0,   603,   604,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   158,   158,
       0,   158,   158,     0,   158,   158,   645,     0,   158,   158,
       0,   517,   537,   631,     0,     0,   158,     0,     0,     0,
       0,   160,     0,   555,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   592,   593,   158,   595,   596,   158,
     158,   606,     0,     0,   626,   649,   651,   627,   628,     0,
       0,     0,     0,   158,   645,     0,   158,     0,     0,     0,
       0,     0,     0,   235,   235,   235,     0,   235,     0,     0,
       0,   158,   158,     0,     0,     0,   158,   158,     0,     0,
     160,     0,     0,   159,     0,     0,     0,     0,   158,     0,
     158,     0,   158,     0,     0,     0,   160,     0,     0,   158,
     158,     0,   158,   158,     0,   158,   158,     0,     0,   158,
       0,     0,   158,   158,     0,     0,     0,     0,     0,   158,
     159,     0,     0,     0,   159,   159,     0,     0,     0,     0,
       0,   236,     0,     0,     0,   236,    25,     0,     0,     0,
       0,   159,   160,   160,    95,    96,    97,    98,    99,   100,
     101,   102,   197,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,   199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,   159,     0,
     159,     0,     0,   107,   201,     0,   110,     0,     0,     0,
     202,     0,   235,     0,   235,   235,   235,   235,   235,   235,
     235,   235,     0,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   159,   159,     0,   159,
     159,     0,   159,   159,     0,     0,   159,   159,     0,   236,
     236,   236,     0,   236,   159,     0,     0,     0,     0,     0,
       0,     0,     0,   160,     0,     0,     0,     0,   208,     0,
       0,     0,     0,     0,   159,     0,     0,   159,   159,     0,
       0,     0,     0,   208,     0,     0,   208,     0,     0,     0,
       0,   159,   208,     0,   159,     0,     0,   235,   235,     0,
     160,     0,     0,     0,   160,   160,     0,     0,     0,   159,
     159,     0,     0,     0,   159,   159,     0,     0,     0,     0,
       0,   160,     0,     0,     0,     0,   159,     0,   159,     0,
     159,     0,     0,     0,     0,     0,     0,   159,   159,     0,
     159,   159,     0,   159,   159,     0,     0,   159,     0,     0,
     159,   159,     0,     0,     0,   160,     0,   159,   160,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   235,   236,     0,
     236,   236,   236,   236,   236,   236,   236,   236,     0,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,     0,
       0,     0,     0,     0,     0,     0,   160,   160,     0,   160,
     160,     0,   160,   160,     0,     0,   160,   160,     0,     0,
       0,     0,   208,     0,   160,     0,     0,     0,     0,     0,
     208,   208,     0,     0,     0,     0,   208,     0,     0,   208,
     208,     0,     0,     0,   160,   235,     0,   160,   160,   208,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,   160,     0,     0,   160,     0,     0,     0,     0,     0,
       0,   208,     0,   236,   236,     0,     0,     0,     0,   160,
     160,     0,     0,     0,   160,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,     0,   160,     0,
     160,     0,     0,   208,     0,   208,   208,   160,   160,   208,
     160,   160,   235,   160,   160,     0,     0,   160,     0,     0,
     160,   160,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,   208,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,    87,     0,     0,    46,    88,   570,     0,
       0,   208,     0,    89,    90,   571,     0,     0,    91,     0,
     208,   208,     0,     0,     0,     3,     0,    47,    92,     0,
       0,    25,    93,    94,     0,    48,    49,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,   236,     0,     0,     0,     5,     0,   103,     0,     0,
     208,     0,     0,   208,   208,     7,     8,     0,     9,     0,
     613,     0,   105,     0,     0,   208,   106,    11,   107,   108,
     109,   110,     0,   111,     0,   208,     0,    13,   208,   112,
       0,   113,     0,    14,   114,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,    87,     0,     0,    46,    88,
     570,     0,     0,     0,     0,    89,    90,   571,   236,     0,
      91,     0,     0,     0,     0,     0,     0,     3,     0,    47,
      92,     0,     0,    25,    93,    94,     0,    48,    49,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,   208,     0,     0,     5,     0,   103,
     208,   208,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,   638,     0,   105,   208,   208,     0,   106,    11,
     107,   108,   109,   110,     0,   111,     0,     0,     0,    13,
       0,   112,   208,   113,     1,    14,   114,    87,     0,     0,
      46,    88,     0,     0,     0,     0,     0,    89,    90,     0,
       0,   208,    91,     0,     0,     0,     0,     0,     0,     3,
       0,    47,    92,     0,     0,    25,    93,    94,     0,    48,
      49,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,   208,   208,     0,     0,     0,     0,     5,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     9,     0,   104,     0,   105,     0,     0,     0,
     106,    11,   107,   108,   109,   110,     0,   111,     0,     0,
       0,    13,     0,   112,     0,   113,     1,    14,   114,    87,
       0,     0,    46,    88,     0,     0,     0,     0,     0,    89,
      90,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     3,     0,    47,    92,     0,     0,    25,    93,    94,
       0,    48,    49,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,   263,     0,   105,     0,
       0,     0,   106,    11,   107,   108,   109,   110,     0,   111,
       0,     0,     0,    13,     0,   112,     0,   113,     1,    14,
     114,    87,     0,     0,    46,    88,     0,     0,     0,     0,
       0,    89,    90,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     3,     0,    47,    92,     0,     0,    25,
      93,    94,     0,    48,    49,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     7,     8,     0,     9,     0,   298,     0,
     105,     0,     0,     0,   106,    11,   299,   108,   109,   300,
       0,   111,     0,     0,     0,    13,     0,   112,     0,   113,
       1,    14,   114,    87,     0,     0,    46,    88,     0,     0,
       0,     0,     0,    89,    90,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     3,     0,    47,    92,     0,
       0,    25,    93,    94,     0,    48,    49,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     7,     8,     0,     9,     0,
     412,     0,   105,     0,     0,     0,   106,    11,   107,   108,
     109,   110,     0,   111,     0,     0,     0,    13,     0,   112,
       0,   113,     1,    14,   114,    87,     0,     0,    46,    88,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     3,     0,    47,
      92,     0,     0,    25,    93,    94,     0,    48,    49,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,   414,     0,   105,     0,     0,     0,   106,    11,
     107,   108,   109,   110,     0,   111,     0,     0,     0,    13,
       0,   112,     0,   113,     1,    14,   114,    87,     0,     0,
      46,    88,     0,     0,     0,     0,     0,    89,    90,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     3,
       0,    47,    92,     0,     0,    25,    93,    94,     0,    48,
      49,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,   103,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     9,     0,   491,     0,   105,     0,     0,     0,
     106,    11,   107,   108,   109,   110,     0,   111,     0,     0,
       0,    13,     0,   112,     0,   113,     1,    14,   114,    87,
       0,     0,    46,    88,     0,     0,     0,     0,     0,    89,
      90,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     3,     0,    47,    92,     0,     0,    25,    93,    94,
       0,    48,    49,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     7,     8,     0,     9,     0,     0,     0,   105,     0,
       0,     0,   106,    11,   107,   108,   109,   110,     1,   111,
       0,     0,     0,    13,    46,   112,     0,   113,     0,    14,
     114,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    47,     0,     0,     0,    25,
       0,    94,     0,    48,     0,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,   103,     0,     0,     0,     1,
       0,     0,     0,     7,     8,    46,     9,     0,     0,     0,
       0,     0,     0,    90,   351,    11,   107,     0,    12,   110,
       0,     0,     0,     0,     3,    13,    47,     0,     0,   113,
      25,    14,    94,     0,    48,     0,     0,     0,    95,    96,
      97,    98,    99,   100,   101,   102,     0,     1,     0,     0,
       0,     0,     0,    46,     5,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     7,     8,     0,     9,     0,     0,
       0,     0,     3,     0,    47,   600,    11,   107,    25,    12,
     110,     0,    48,     0,     0,     0,    13,     0,     0,     0,
     113,     1,    14,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     5,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     7,     8,    46,     9,     3,     0,    47,     0,
       0,     0,    25,     0,    11,     0,    48,    12,     0,     0,
       0,     0,     0,     3,    13,    47,     0,     0,   261,    25,
      14,     0,     0,    48,     0,     0,     5,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     7,     8,    46,     9,
       0,     0,     0,     5,     0,   281,     0,     0,    11,     0,
       0,    12,     0,     7,     8,     0,     9,     3,    13,    47,
       0,     0,   391,    25,    14,    11,     0,    48,    12,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,     0,
       0,    14,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     8,     0,
       9,     0,     0,    87,     0,     0,     0,    88,     0,    11,
       0,     0,    12,    89,    90,     0,     0,     0,    91,    13,
       0,     0,     0,     0,     0,    14,     0,     0,    92,     0,
       0,    25,    93,    94,     0,     0,    49,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,     0,   106,     0,   107,   108,
     238,   110,    87,   111,     0,     0,    88,     0,     0,   112,
       0,     0,    89,    90,   114,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   513,     0,     0,
      25,   514,    94,     0,     0,    49,     0,     0,    95,    96,
      97,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   482,     0,
      90,   105,     0,     0,     0,   106,     0,   107,   108,   238,
     110,     0,   111,     0,     0,     0,     0,    25,   112,    94,
       0,     0,   400,   515,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   197,     0,   198,     0,     0,     0,     0,
       0,     0,     0,   103,   199,     0,     0,     0,   200,     0,
       0,    90,     0,     0,     0,     0,   483,     0,     0,     0,
       0,     0,     0,     0,   107,   201,     0,   110,    25,     0,
      94,   202,     0,   400,     0,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   197,     0,   198,     0,     0,     0,
       0,     0,     0,     0,   103,   199,     0,     0,     0,   200,
      90,     0,     0,     0,     0,     0,     0,   583,     0,     0,
       0,     0,     0,     0,     0,   107,   201,    25,   110,    94,
       0,     0,   202,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   197,     0,   198,     0,     0,     0,     0,
       0,     0,     0,   103,   199,     0,     0,     0,   200,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,   107,   201,    25,   110,    94,     0,
       0,   202,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   197,     0,   198,     0,     0,     0,     0,     0,
       0,     0,   103,   199,     0,     0,     0,   200,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   381,
       0,     0,     0,   107,   201,    25,   110,    94,     0,     0,
     202,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   197,     0,   198,     0,     0,     0,     0,     0,     0,
       0,   103,   199,     0,     0,     0,   200,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   286,
       0,     0,   107,   201,     0,   110,    25,     0,    94,   202,
       0,   400,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   197,     0,   198,     0,     0,     0,     0,     0,
       0,     0,   103,   199,     0,     0,     0,   200,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   201,    25,   110,    94,     0,     0,
     202,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   197,     0,   198,     0,     0,     0,     0,     0,     0,
       0,   103,   199,     0,     0,     0,   200,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     450,     0,   107,   201,    25,   110,    94,     0,     0,   202,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     197,     0,   198,     0,     0,     0,     0,     0,     0,     0,
     103,   199,     0,     0,     0,   200,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   460,     0,     0,
       0,   107,   201,    25,   110,    94,     0,     0,   202,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   197,
       0,   198,     0,     0,     0,     0,     0,     0,     0,   103,
     199,     0,     0,     0,   200,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   486,     0,     0,     0,
     107,   201,    25,   110,    94,     0,     0,   202,     0,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   197,     0,
     198,     0,     0,     0,     0,     0,     0,     0,   103,   199,
       0,     0,     0,   200,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   488,     0,     0,     0,   107,
     201,    25,   110,    94,     0,     0,   202,     0,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   197,     0,   198,
       0,     0,     0,     0,     0,     0,     0,   103,   199,     0,
       0,     0,   200,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   510,     0,   107,   201,
      25,   110,    94,     0,     0,   202,     0,     0,    95,    96,
      97,    98,    99,   100,   101,   102,   197,     0,   198,     0,
       0,     0,     0,     0,     0,     0,   103,   199,     0,     0,
       0,   200,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   529,     0,     0,     0,   107,   201,    25,
     110,    94,     0,     0,   202,     0,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   197,     0,   198,     0,     0,
       0,     0,     0,     0,     0,   103,   199,     0,     0,     0,
     200,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   540,     0,     0,     0,   107,   201,    25,   110,
      94,     0,     0,   202,     0,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   197,     0,   198,     0,     0,     0,
       0,     0,     0,     0,   103,   199,     0,     0,     0,   200,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   587,     0,     0,     0,   107,   201,    25,   110,    94,
       0,     0,   202,     0,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   197,     0,   198,     0,     0,     0,     0,
       0,     0,     0,   103,   199,     0,     0,     0,   200,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     589,     0,     0,     0,   107,   201,    25,   110,    94,     0,
       0,   202,     0,     0,    95,    96,    97,    98,    99,   100,
     101,   102,   197,     0,   198,     0,     0,     0,     0,     0,
       0,     0,   103,   199,     0,     0,     0,   200,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   620,
       0,     0,     0,   107,   201,    25,   110,    94,     0,     0,
     202,     0,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   197,     0,   198,     0,     0,     0,     0,     0,     0,
       0,   103,   199,     0,     0,     0,   200,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     630,     0,   107,   201,    25,   110,    94,     0,     0,   202,
       0,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     197,     0,   198,     0,     0,     0,     0,     0,     0,     0,
     103,   199,     0,     0,     0,   200,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   650,
       0,   107,   201,    25,   110,    94,     0,     0,   202,     0,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   197,
       0,   198,     0,     0,     0,     0,     0,     0,     0,   103,
     199,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,   201,     0,   110,     0,     0,     0,   202
};

static const yytype_int16 yycheck[] =
{
       2,    23,    36,   240,   121,   182,     0,   240,    35,   282,
     103,    37,    59,   240,    49,   400,    42,   197,    52,   362,
      90,   175,    36,    17,    94,    19,   257,    22,    14,   183,
      64,    33,    39,   502,    36,    69,   267,    39,    32,   113,
      15,    63,    36,    34,   118,    58,    15,    49,    15,    63,
      64,    53,    34,   508,    15,   510,    58,    22,    22,    85,
     163,    63,    64,    15,    15,    15,   409,   410,   171,    15,
      64,    15,   175,    15,    11,    34,   103,    11,   112,    15,
      87,    18,    22,    15,    18,     0,    88,    89,    79,    91,
      15,   359,   506,    79,   508,   363,   510,   119,    80,    39,
     174,   570,    77,    98,   197,   119,    22,   562,    77,    91,
      79,   113,    79,    39,    79,    79,   118,    22,    79,   121,
      22,   464,   395,    73,    89,    89,    77,    79,   198,   199,
     200,    77,   202,    79,   477,    79,    73,    79,    15,    73,
      15,    77,   296,    15,   558,    77,   181,   561,   562,    34,
     164,     4,    77,     6,    50,   182,    15,   337,   543,    15,
     173,   174,   455,    79,    24,    26,   574,     8,   637,    15,
     164,   173,   174,    22,    79,   630,    50,    79,    22,   181,
     411,    22,    35,    36,   415,   599,   303,   261,   262,    34,
     293,    87,   295,   648,    79,   650,    49,   244,   245,    59,
      77,    62,    77,   611,    78,    77,   549,   550,   663,    70,
      63,    64,    73,    74,    22,    60,   630,    39,    77,    39,
      22,    77,    52,   450,    77,    78,    79,   454,    81,    82,
      79,    77,    93,   647,   648,    65,   650,    90,   581,   416,
      39,    94,    50,    26,   337,   659,   248,    49,   662,   663,
     103,    50,    34,    49,   256,   257,    17,    79,   672,   261,
     262,   283,    34,   536,   278,   267,   119,   302,   121,   283,
     317,    32,    34,   566,    50,   345,   346,   347,    60,    62,
     282,   508,    25,   510,   278,    20,   288,    70,    60,    40,
      73,    74,    49,     3,    49,    17,   413,    22,    60,    81,
     302,   303,    84,    13,    22,    22,   579,    50,    17,    81,
      93,   164,   359,    49,    36,    49,   363,    49,    28,    81,
      55,    56,    84,    49,    49,    76,   563,    36,   181,   182,
     563,    49,    50,    14,    85,   562,   563,   371,   191,    50,
       5,   634,   635,     5,   197,   198,   199,   200,    58,   202,
     377,    79,   422,   646,    19,    91,    50,    19,    68,    69,
      25,    71,    17,    25,   657,   658,    77,   660,   661,    79,
      80,   664,   361,    83,   667,   364,    79,   670,   671,    12,
      90,    36,   396,    77,   677,   121,    96,   240,    53,   416,
     437,    53,    57,   395,     5,    57,    29,    63,    49,    50,
     577,    66,   396,   630,    66,    17,    72,    27,    19,   411,
      22,   413,    22,   415,    25,    14,    15,    49,     9,    39,
      50,   648,    34,   650,    36,   278,   340,   341,   342,    78,
     283,   566,   466,    50,   460,    39,   663,    49,    50,    30,
     617,    50,    53,    34,     4,   181,    57,    38,    67,   302,
     303,   333,   334,   455,     8,    66,   309,     7,   311,   312,
     311,   312,   335,   336,    79,   338,   339,   343,   344,   471,
      97,   473,    79,   467,   327,    77,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,    50,    49,   614,    79,   634,
     635,     5,   528,   505,   240,    79,    15,    78,    78,    78,
      49,   646,    22,   535,    15,    19,    78,    49,    22,    14,
     256,    25,   657,   658,   377,   660,   661,    79,    15,   664,
      77,    49,   667,    77,   536,   670,   671,    77,    91,    77,
      22,    49,   677,   396,    78,    49,    50,    49,    78,    53,
     577,    50,    78,    57,   556,   557,    17,   559,   560,    79,
     413,    22,    66,   416,   566,   567,   302,   303,   121,   422,
     423,    14,   574,    34,    79,    36,    39,   579,    32,    33,
      78,    49,    73,    37,    49,   619,    79,    41,    49,    50,
     617,    79,   594,    77,    77,   597,   598,    51,    77,    79,
      49,    49,    49,    14,    23,    23,   640,    49,    79,   611,
      79,    14,   614,    79,   467,     8,    14,    79,    23,    79,
      79,    77,    77,    19,   191,    77,    79,   629,   181,    79,
      42,    64,   634,   635,    79,    79,     3,    83,   288,   278,
     396,   494,     9,    63,   646,   500,   573,   535,   372,   502,
     573,   563,   372,   181,   327,   657,   658,   245,   660,   661,
     329,    28,   664,    30,   331,   667,    49,    34,   670,   671,
     330,    38,    39,   332,   423,   677,    -1,   413,    -1,    -1,
      -1,    -1,   535,    -1,    -1,    -1,    -1,   240,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,   256,    71,    -1,    73,    -1,    91,    -1,
     563,    -1,    79,    80,   450,     3,    83,   570,   454,   455,
       3,   574,    -1,    90,   577,    13,     9,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,   121,    -1,
      28,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,   302,
     303,    34,    -1,    -1,    -1,    38,    39,    -1,   611,    -1,
      -1,   614,    -1,    -1,   617,    -1,    54,    -1,    -1,   505,
      58,    -1,   508,    -1,   510,    58,    64,    -1,    -1,    -1,
      68,    69,    -1,    71,   637,    68,    69,    -1,    71,    -1,
      73,    79,    80,    -1,    49,    83,    79,    80,   181,    -1,
      83,    -1,    90,    -1,    -1,    -1,    -1,    90,    96,    -1,
      -1,    -1,    95,    96,    -1,    -1,    17,    -1,    -1,    -1,
     556,   557,    -1,   559,   560,    -1,   562,   563,    -1,    -1,
     566,   567,    -1,    34,    -1,    36,    91,    -1,   574,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   594,    60,
     413,   597,   598,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,   611,    77,    -1,   614,    -1,
      81,    -1,     3,    84,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,   629,   630,    -1,    -1,   450,   634,   635,
      -1,   454,   455,    -1,    -1,    -1,    -1,    28,    -1,    30,
     646,    -1,   648,    34,   650,     3,    -1,    38,   471,   302,
     303,   657,   658,    -1,   660,   661,   181,   663,   664,    -1,
      -1,   667,    -1,    -1,   670,   671,    -1,    58,    -1,    -1,
      28,   677,    -1,    -1,    -1,    -1,    34,    68,    69,    -1,
      71,    -1,   505,    -1,    -1,   508,    -1,   510,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    91,    90,
      58,    -1,     3,    -1,    95,    96,    -1,    -1,    -1,    -1,
      68,    69,    13,    71,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    49,    80,    -1,    -1,    83,    -1,    28,    -1,    -1,
      87,   256,    90,   556,   557,    -1,   559,   560,    96,   562,
     563,    -1,    -1,   566,   567,   102,    -1,    -1,   105,    -1,
      -1,   574,    -1,    -1,   111,    -1,    -1,    58,    -1,    -1,
     413,    -1,    -1,    91,    -1,    -1,    -1,    68,    69,    -1,
      71,   594,    -1,    -1,   597,   598,    -1,   302,   303,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,   611,    90,
      -1,   614,    -1,   121,    -1,    96,    -1,   450,    -1,    -1,
      -1,   454,   455,    -1,    -1,    -1,   629,   630,    -1,    -1,
      -1,   634,   635,    -1,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,   646,    -1,   648,    -1,   650,    -1,    -1,
      -1,    -1,    -1,    -1,   657,   658,    -1,   660,   661,    -1,
     663,   664,    -1,    -1,   667,    -1,    -1,   670,   671,    -1,
      -1,    -1,   505,   181,   677,   508,    -1,   510,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,   413,    -1,
      -1,    -1,   249,   250,    -1,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,   556,   557,    -1,   559,   560,    -1,   562,
     563,   268,   240,   566,   567,    -1,    -1,    -1,   275,    -1,
      -1,   574,    -1,    -1,    -1,   450,    -1,    -1,   256,   454,
     455,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   594,    -1,    -1,   597,   598,   471,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   611,    -1,
      -1,   614,    -1,    -1,    -1,   322,    -1,   324,   325,    -1,
      -1,   328,    -1,    -1,   302,   303,   629,   630,    -1,    -1,
     505,   634,   635,   508,    -1,   510,    -1,    -1,    -1,    -1,
      -1,    91,    -1,   646,   351,   648,    -1,   650,    -1,    -1,
      -1,   358,    -1,    -1,   657,   658,    -1,   660,   661,    -1,
     663,   664,    -1,    -1,   667,    -1,    -1,   670,   671,    -1,
      -1,   121,    -1,    -1,   677,    -1,    -1,    17,    -1,    -1,
      -1,   556,   557,    -1,   559,   560,    -1,   562,   563,    -1,
      -1,   566,   567,   400,    34,    -1,    36,    -1,    -1,   574,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,   594,
      60,    -1,   597,   598,    -1,    -1,    -1,    -1,   471,    -1,
      -1,   181,    -1,    -1,    -1,   413,   611,    -1,    -1,   614,
      -1,    81,   449,    -1,    84,   452,   453,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   629,   630,    -1,    -1,    -1,   634,
     635,    -1,   505,    -1,    -1,    -1,    -1,   474,    -1,    49,
      -1,   646,   450,   648,    -1,   650,   454,   455,    -1,    -1,
      -1,    -1,   657,   658,    -1,   660,   661,    -1,   663,   664,
     240,    -1,   667,   471,    -1,   670,   671,    -1,    -1,    -1,
      -1,    -1,   677,    -1,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    91,    -1,   556,   557,    -1,   559,   560,    -1,    -1,
      -1,    -1,    -1,   566,   567,    -1,    -1,   505,    -1,    -1,
     508,    -1,   510,    -1,    -1,    90,   543,    -1,    -1,    94,
      -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   594,   302,   303,   597,   598,    -1,   564,   565,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   556,   557,
      -1,   559,   560,    -1,   562,   563,   629,    -1,   566,   567,
      -1,   634,   635,   600,    -1,    -1,   574,    -1,    -1,    -1,
      -1,   181,    -1,   646,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   657,   658,   594,   660,   661,   597,
     598,   664,    -1,    -1,   667,   632,   633,   670,   671,    -1,
      -1,    -1,    -1,   611,   677,    -1,   614,    -1,    -1,    -1,
      -1,    -1,    -1,   198,   199,   200,    -1,   202,    -1,    -1,
      -1,   629,   630,    -1,    -1,    -1,   634,   635,    -1,    -1,
     240,    -1,    -1,   413,    -1,    -1,    -1,    -1,   646,    -1,
     648,    -1,   650,    -1,    -1,    -1,   256,    -1,    -1,   657,
     658,    -1,   660,   661,    -1,   663,   664,    -1,    -1,   667,
      -1,    -1,   670,   671,    -1,    -1,    -1,    -1,    -1,   677,
     450,    -1,    -1,    -1,   454,   455,    -1,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    94,    34,    -1,    -1,    -1,
      -1,   471,   302,   303,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   505,    -1,    -1,   508,    -1,
     510,    -1,    -1,    81,    82,    -1,    84,    -1,    -1,    -1,
      88,    -1,   327,    -1,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   556,   557,    -1,   559,
     560,    -1,   562,   563,    -1,    -1,   566,   567,    -1,   198,
     199,   200,    -1,   202,   574,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   413,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    -1,    -1,   594,    -1,    -1,   597,   598,    -1,
      -1,    -1,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,   611,   111,    -1,   614,    -1,    -1,   422,   423,    -1,
     450,    -1,    -1,    -1,   454,   455,    -1,    -1,    -1,   629,
     630,    -1,    -1,    -1,   634,   635,    -1,    -1,    -1,    -1,
      -1,   471,    -1,    -1,    -1,    -1,   646,    -1,   648,    -1,
     650,    -1,    -1,    -1,    -1,    -1,    -1,   657,   658,    -1,
     660,   661,    -1,   663,   664,    -1,    -1,   667,    -1,    -1,
     670,   671,    -1,    -1,    -1,   505,    -1,   677,   508,    -1,
     510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,   327,    -1,
     329,   330,   331,   332,   333,   334,   335,   336,    -1,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   556,   557,    -1,   559,
     560,    -1,   562,   563,    -1,    -1,   566,   567,    -1,    -1,
      -1,    -1,   241,    -1,   574,    -1,    -1,    -1,    -1,    -1,
     249,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,   258,
     259,    -1,    -1,    -1,   594,   570,    -1,   597,   598,   268,
      -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,
      -1,   611,    -1,    -1,   614,    -1,    -1,    -1,    -1,    -1,
      -1,   290,    -1,   422,   423,    -1,    -1,    -1,    -1,   629,
     630,    -1,    -1,    -1,   634,   635,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   646,    -1,   648,    -1,
     650,    -1,    -1,   322,    -1,   324,   325,   657,   658,   328,
     660,   661,   637,   663,   664,    -1,    -1,   667,    -1,    -1,
     670,   671,    -1,    -1,    -1,    -1,    -1,   677,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,   358,
      -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,    -1,    -1,     9,    10,    11,    -1,
      -1,   400,    -1,    16,    17,    18,    -1,    -1,    21,    -1,
     409,   410,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,   570,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,
     449,    -1,    -1,   452,   453,    68,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,   464,    79,    80,    81,    82,
      83,    84,    -1,    86,    -1,   474,    -1,    90,   477,    92,
      -1,    94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    16,    17,    18,   637,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,   543,    -1,    -1,    58,    -1,    60,
     549,   550,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      71,    -1,    73,    -1,    75,   564,   565,    -1,    79,    80,
      81,    82,    83,    84,    -1,    86,    -1,    -1,    -1,    90,
      -1,    92,   581,    94,     3,    96,    97,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,   600,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,   632,   633,    -1,    -1,    -1,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    -1,    86,    -1,    -1,
      -1,    90,    -1,    92,    -1,    94,     3,    96,    97,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    -1,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    -1,    86,
      -1,    -1,    -1,    90,    -1,    92,    -1,    94,     3,    96,
      97,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    -1,    -1,    34,
      35,    36,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      -1,    86,    -1,    -1,    -1,    90,    -1,    92,    -1,    94,
       3,    96,    97,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    34,    35,    36,    -1,    38,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    -1,    86,    -1,    -1,    -1,    90,    -1,    92,
      -1,    94,     3,    96,    97,     6,    -1,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    -1,    86,    -1,    -1,    -1,    90,
      -1,    92,    -1,    94,     3,    96,    97,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    -1,    -1,    34,    35,    36,    -1,    38,
      39,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    -1,    86,    -1,    -1,
      -1,    90,    -1,    92,    -1,    94,     3,    96,    97,     6,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    -1,    -1,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    71,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,     3,    86,
      -1,    -1,    -1,    90,     9,    92,    -1,    94,    -1,    96,
      97,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,    36,    -1,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    68,    69,     9,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    79,    80,    81,    -1,    83,    84,
      -1,    -1,    -1,    -1,    28,    90,    30,    -1,    -1,    94,
      34,    96,    36,    -1,    38,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,     3,    -1,    -1,
      -1,    -1,    -1,     9,    58,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    71,    -1,    -1,
      -1,    -1,    28,    -1,    30,    79,    80,    81,    34,    83,
      84,    -1,    38,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      94,     3,    96,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    68,    69,     9,    71,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    80,    -1,    38,    83,    -1,    -1,
      -1,    -1,    -1,    28,    90,    30,    -1,    -1,    94,    34,
      96,    -1,    -1,    38,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    68,    69,     9,    71,
      -1,    -1,    -1,    58,    -1,    77,    -1,    -1,    80,    -1,
      -1,    83,    -1,    68,    69,    -1,    71,    28,    90,    30,
      -1,    -1,    77,    34,    96,    80,    -1,    38,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      71,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,    80,
      -1,    -1,    83,    16,    17,    -1,    -1,    -1,    21,    90,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    79,    -1,    81,    82,
      83,    84,     6,    86,    -1,    -1,    10,    -1,    -1,    92,
      -1,    -1,    16,    17,    97,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    75,    -1,    -1,    -1,    79,    -1,    81,    82,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    34,    92,    36,
      -1,    -1,    39,    97,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    84,    34,    -1,
      36,    88,    -1,    39,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    34,    84,    36,
      -1,    -1,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    34,    84,    36,    -1,
      -1,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    65,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    82,    34,    84,    36,    -1,    -1,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    81,    82,    -1,    84,    34,    -1,    36,    88,
      -1,    39,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    65,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    34,    84,    36,    -1,    -1,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    34,    84,    36,    -1,    -1,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    65,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    82,    34,    84,    36,    -1,    -1,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    65,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,
      81,    82,    34,    84,    36,    -1,    -1,    88,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    65,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,
      82,    34,    84,    36,    -1,    -1,    88,    -1,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    65,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    82,
      34,    84,    36,    -1,    -1,    88,    -1,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,
      -1,    65,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    82,    34,
      84,    36,    -1,    -1,    88,    -1,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      65,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    81,    82,    34,    84,
      36,    -1,    -1,    88,    -1,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    81,    82,    34,    84,    36,
      -1,    -1,    88,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    65,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    82,    34,    84,    36,    -1,
      -1,    88,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    65,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    81,    82,    34,    84,    36,    -1,    -1,
      88,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    65,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    34,    84,    36,    -1,    -1,    88,
      -1,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    65,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    82,    34,    84,    36,    -1,    -1,    88,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    -1,    84,    -1,    -1,    -1,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    13,    28,    54,    58,    64,    68,    69,    71,
      79,    80,    83,    90,    96,   107,   108,   109,   110,   111,
     112,   113,   124,   125,   126,    34,   101,   101,   105,   105,
       0,   112,   109,    13,   126,    27,    39,   127,   128,    22,
      39,    79,   101,   105,   121,   122,     9,    30,    38,    39,
      73,    79,    80,    95,   101,   103,   104,   105,   118,   119,
     120,   121,   123,   125,   129,   130,   131,   132,   137,   138,
     145,   146,   147,   148,   153,   128,   101,    26,    62,    70,
      73,    74,    93,   114,   115,   127,   128,     6,    10,    16,
      17,    21,    31,    35,    36,    42,    43,    44,    45,    46,
      47,    48,    49,    60,    73,    75,    79,    81,    82,    83,
      84,    86,    92,    94,    97,   101,   102,   105,   118,   125,
     153,   154,   155,   156,   157,   158,   160,   161,   162,   163,
     165,   166,   167,   168,   170,   177,   179,   180,   182,   187,
     189,   190,   191,   192,   193,   194,   200,   201,   202,   203,
     204,   205,   206,   208,   214,   215,   231,   232,   234,   235,
     236,   153,   101,   139,    49,    50,   211,   101,   133,   134,
     135,   139,   211,    95,   118,   148,    73,   130,    79,   144,
     153,    39,    87,   142,   149,   105,   105,   105,    80,    91,
     105,   116,   117,   105,    73,   115,   128,    50,    52,    61,
      65,    82,    88,   105,   202,   206,   212,   213,   214,   217,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
      79,   101,    79,   101,   105,   204,   205,   230,    83,   158,
      49,    49,   230,   212,   119,   121,    79,   212,    22,    49,
      49,   212,   153,   101,   133,    49,    14,    22,    49,    50,
     133,    94,   118,    73,   155,    79,    79,    22,    50,     5,
      19,    25,    53,    57,    66,   216,    17,    36,    49,    50,
     142,    77,   118,   125,   140,   141,    78,    50,    15,    79,
      25,    50,   142,   139,   133,   139,   142,   149,    73,    81,
      84,   105,   150,   154,   200,   122,   143,   149,    79,    89,
      79,    89,    98,    79,   105,   117,    79,   119,   120,   230,
     230,   230,    50,   230,    50,    14,    79,    63,    72,     4,
       8,    67,     7,    24,    59,    32,    33,    37,    41,    51,
      40,    76,    85,    52,    65,    20,    55,    56,    79,    79,
      97,    79,   157,   166,   184,   186,   212,    77,    50,   209,
     210,   211,    49,   209,   211,    79,   101,   212,   212,    79,
      12,    29,   195,   196,   199,   212,   158,    60,    81,    84,
     203,    77,   207,   212,   212,   133,   133,   101,   203,   212,
     212,    77,   140,    78,   135,   118,    15,    77,    78,   134,
      39,   136,   151,   212,    78,   142,    79,   142,   149,    49,
      49,    22,    73,   154,    73,    22,    15,   105,   106,   106,
     106,    79,    78,    78,   212,   212,   220,   212,   218,   221,
     222,   223,   224,   225,   225,   227,   227,   119,   120,   227,
     227,   228,   228,   228,   229,   229,   230,   230,   230,    49,
      79,   212,    14,    79,    15,    77,   212,   210,   211,   151,
      77,   207,   211,   151,    49,    77,    77,    49,   153,   196,
     199,    77,   121,    22,    15,    77,    78,    49,    78,    77,
     135,   141,    15,    73,   136,   152,    77,   207,    77,   207,
      81,    73,    81,   122,    15,    79,    79,    79,   230,   233,
      78,    79,    14,   212,    77,   100,   185,   186,    79,   212,
      79,   212,   166,    31,    35,    97,   101,   158,   159,   160,
     164,   169,   178,   181,   183,   188,    78,   128,    77,    77,
     207,    39,   171,   153,   105,   125,   197,   158,   101,   212,
      77,   207,    73,    15,    73,    79,    77,    79,    77,    49,
      49,   105,   171,   217,    77,   158,   100,   100,   185,    77,
     100,   185,    79,    49,    49,    49,    14,    23,   128,    77,
      11,    18,    73,   172,   173,   174,   175,     8,   198,   197,
     135,    49,    77,    73,   136,    79,    79,    77,   207,    77,
     207,    79,   158,   158,   100,   158,   158,   100,   100,   185,
      79,   157,   184,   212,   212,   159,   158,   176,   217,    14,
      73,   173,   174,    73,   154,   175,   122,     8,   135,    77,
      77,   207,    79,    77,    79,    77,   158,   158,   158,   100,
      79,   212,    14,    79,    77,    77,    14,    15,    73,   122,
      77,   153,    77,    79,    79,   158,   100,   185,    79,   212,
      79,   212,   159,   159,   217,   153,   159,   100,   100,   185,
      77,   100,   185,    79,    23,   159,   159,   100,   159,   159,
     100,   100,   185,   159,   159,   159,   159,   100,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   101,   102,   102,   102,   102,   102,   102,
     102,   103,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   110,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   120,
     120,   121,   122,   123,   123,   124,   124,   124,   124,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   140,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   146,   147,   147,   147,   147,
     148,   148,   149,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   157,   157,   157,
     157,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   161,   161,   162,   163,   164,   165,
     166,   166,   166,   166,   166,   166,   166,   167,   168,   169,
     170,   171,   171,   171,   171,   172,   172,   173,   173,   174,
     175,   175,   176,   176,   177,   178,   179,   180,   180,   181,
     181,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   183,   183,   183,   184,   184,   185,
     186,   186,   187,   188,   189,   189,   190,   190,   191,   191,
     192,   193,   194,   194,   194,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   200,   200,   201,   201,   201,   201,
     201,   201,   201,   201,   202,   202,   202,   203,   203,   203,
     203,   204,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   208,   208,   208,   208,   208,
     208,   209,   209,   210,   211,   211,   212,   213,   213,   214,
     215,   215,   215,   216,   216,   216,   216,   216,   216,   217,
     217,   218,   219,   219,   220,   220,   221,   221,   222,   222,
     223,   223,   224,   224,   224,   225,   225,   225,   225,   225,
     225,   226,   227,   227,   227,   227,   228,   228,   228,   229,
     229,   229,   229,   230,   230,   230,   230,   230,   231,   232,
     233,   233,   233,   233,   233,   234,   234,   234,   234,   235,
     236,   237,   237,   238
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     2,
       1,     1,     1,     2,     1,     3,     1,     1,     5,     4,
       1,     2,     4,     3,     5,     3,     3,     5,     3,     5,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     5,     4,     4,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     2,     4,     3,     3,     2,     4,     3,
       3,     2,     4,     3,     3,     1,     3,     2,     3,     2,
       1,     3,     1,     1,     1,     2,     4,     3,     3,     2,
       4,     3,     4,     3,     3,     2,     5,     4,     5,     4,
       6,     7,     6,     7,     2,     3,     3,     4,     1,     3,
       3,     2,     2,     1,     1,     1,     2,     2,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 347 "test.y"
                                                                                                        {vec = {createnode("RRB__)", emp)}; (yyval.str_val) = createnode("RRB1", vec);}
#line 2752 "test.tab.c"
    break;

  case 3:
#line 350 "test.y"
                                                                                                {vec = {createnode("IDENTIFIER__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Identifier", vec);}
#line 2758 "test.tab.c"
    break;

  case 4:
#line 354 "test.y"
                                                                                        {vec = {createnode("BOOL_LITERAL__" + *(yyvsp[0].lex) , emp)}; vec[0]->nodetype = typeMap["boolean"]; (yyval.str_val) = createnode("Literal", vec);}
#line 2764 "test.tab.c"
    break;

  case 5:
#line 355 "test.y"
                                                                                        {vec = {createnode("NULL_LITERAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Literal", vec);}
#line 2770 "test.tab.c"
    break;

  case 6:
#line 356 "test.y"
                                                                                                {vec = {createnode("INT_LITERAL__" + *(yyvsp[0].lex) , emp)}; vec[0]->nodetype = typeMap["int"]; (yyval.str_val) = createnode("Literal", vec);}
#line 2776 "test.tab.c"
    break;

  case 7:
#line 357 "test.y"
                                                                                        {vec = {createnode("FLOAT_LITERAL__" + *(yyvsp[0].lex) , emp)}; vec[0]->nodetype = typeMap["float"]; (yyval.str_val) = createnode("Literal", vec);}
#line 2782 "test.tab.c"
    break;

  case 8:
#line 358 "test.y"
                                                                                        {vec = {createnode("STRING_LITERAL__" + *(yyvsp[0].lex) , emp)}; vec[0]->nodetype = typeMap["string"]; (yyval.str_val) = createnode("Literal", vec);}
#line 2788 "test.tab.c"
    break;

  case 9:
#line 359 "test.y"
                                                                                        {vec = {createnode("TEXTBLOCK_LITERAL__" + *(yyvsp[0].lex) , emp)}; vec[0]->nodetype = typeMap["VAR"]; (yyval.str_val) = createnode("Literal", vec);}
#line 2794 "test.tab.c"
    break;

  case 10:
#line 360 "test.y"
                                                                                        {vec = {createnode("CHAR_LITERAL__" + *(yyvsp[0].lex) , emp)}; vec[0]->nodetype = typeMap["int"]; (yyval.str_val) = createnode("Literal", vec);}
#line 2800 "test.tab.c"
    break;

  case 11:
#line 364 "test.y"
                                                                                                {vec = {createnode("INTEGRALTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("IntegralType", vec);}
#line 2806 "test.tab.c"
    break;

  case 12:
#line 368 "test.y"
                                                                                                        {vec = {createnode("FLOATINGPOINTTYPE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FloatingPointType", vec);}
#line 2812 "test.tab.c"
    break;

  case 13:
#line 372 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2818 "test.tab.c"
    break;

  case 14:
#line 373 "test.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Name", vec);}
#line 2824 "test.tab.c"
    break;

  case 15:
#line 377 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2830 "test.tab.c"
    break;

  case 16:
#line 378 "test.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Names", vec);}
#line 2836 "test.tab.c"
    break;

  case 17:
#line 382 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2842 "test.tab.c"
    break;

  case 18:
#line 383 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; root = createnode("CompilationUnit", vec);}
#line 2848 "test.tab.c"
    break;

  case 19:
#line 387 "test.y"
                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2854 "test.tab.c"
    break;

  case 20:
#line 388 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2860 "test.tab.c"
    break;

  case 21:
#line 389 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("OrdinaryCompilationUnit", vec);}
#line 2866 "test.tab.c"
    break;

  case 22:
#line 393 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2872 "test.tab.c"
    break;

  case 23:
#line 394 "test.y"
                                                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclarations", vec);}
#line 2878 "test.tab.c"
    break;

  case 24:
#line 398 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModularCompilationUnit", vec);}
#line 2884 "test.tab.c"
    break;

  case 25:
#line 402 "test.y"
                                                                                                        {vec = {createnode("PACKAGE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PackageDeclaration", vec);}
#line 2890 "test.tab.c"
    break;

  case 26:
#line 406 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2896 "test.tab.c"
    break;

  case 27:
#line 407 "test.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("TopLevelClassOrInterfaceDeclaration", vec);}
#line 2902 "test.tab.c"
    break;

  case 28:
#line 411 "test.y"
                                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2908 "test.tab.c"
    break;

  case 29:
#line 412 "test.y"
                                                                                                        {vec = {createnode("MODULE__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDeclaration", vec);}
#line 2914 "test.tab.c"
    break;

  case 30:
#line 416 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2920 "test.tab.c"
    break;

  case 31:
#line 417 "test.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ModuleDirectives", vec);}
#line 2926 "test.tab.c"
    break;

  case 32:
#line 421 "test.y"
                                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2932 "test.tab.c"
    break;

  case 33:
#line 422 "test.y"
                                                                                                                {vec = {createnode("REQUIRES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2938 "test.tab.c"
    break;

  case 34:
#line 423 "test.y"
                                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2944 "test.tab.c"
    break;

  case 35:
#line 424 "test.y"
                                                                                                        {vec = {createnode("EXPORTS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2950 "test.tab.c"
    break;

  case 36:
#line 425 "test.y"
                                                                                                        {vec = {createnode("OPENS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2956 "test.tab.c"
    break;

  case 37:
#line 426 "test.y"
                                                                                                                {vec = {createnode("OPENS__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("TO__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2962 "test.tab.c"
    break;

  case 38:
#line 427 "test.y"
                                                                                                        {vec = {createnode("USES__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2968 "test.tab.c"
    break;

  case 39:
#line 428 "test.y"
                                                                                                                        {vec = {createnode("PROVIDES__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("WITH__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ModuleDirective", vec);}
#line 2974 "test.tab.c"
    break;

  case 40:
#line 432 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2980 "test.tab.c"
    break;

  case 41:
#line 433 "test.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RequiresModifiers", vec);}
#line 2986 "test.tab.c"
    break;

  case 42:
#line 437 "test.y"
                                                                                                {vec = {createnode("TRANSITIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2992 "test.tab.c"
    break;

  case 43:
#line 438 "test.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("RequiresModifier", vec);}
#line 2998 "test.tab.c"
    break;

  case 44:
#line 442 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 3004 "test.tab.c"
    break;

  case 45:
#line 443 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Type", vec);}
#line 3010 "test.tab.c"
    break;

  case 46:
#line 447 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 3016 "test.tab.c"
    break;

  case 47:
#line 448 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 3022 "test.tab.c"
    break;

  case 48:
#line 449 "test.y"
                                                                                                {vec = {createnode("BOOLEAN__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimitiveType", vec);}
#line 3028 "test.tab.c"
    break;

  case 49:
#line 453 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 3034 "test.tab.c"
    break;

  case 50:
#line 454 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ReferenceType", vec);}
#line 3040 "test.tab.c"
    break;

  case 51:
#line 458 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassOrInterfaceType", vec);}
#line 3046 "test.tab.c"
    break;

  case 52:
#line 462 "test.y"
                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassType", vec);}
#line 3052 "test.tab.c"
    break;

  case 53:
#line 466 "test.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 3058 "test.tab.c"
    break;

  case 54:
#line 467 "test.y"
                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayType", vec);}
#line 3064 "test.tab.c"
    break;

  case 55:
#line 472 "test.y"
                                                                                                                                        {vec = {(yyvsp[-4].str_val),createnode("CLASS__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3070 "test.tab.c"
    break;

  case 56:
#line 473 "test.y"
                                                                                                                                {vec = {createnode("CLASS__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3076 "test.tab.c"
    break;

  case 57:
#line 474 "test.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("CLASS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3082 "test.tab.c"
    break;

  case 58:
#line 475 "test.y"
                                                                                                                {vec = {createnode("CLASS__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassDeclaration", vec);}
#line 3088 "test.tab.c"
    break;

  case 59:
#line 479 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 3094 "test.tab.c"
    break;

  case 60:
#line 480 "test.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Modifiers", vec);}
#line 3100 "test.tab.c"
    break;

  case 61:
#line 484 "test.y"
                                                                                        {vec = {createnode("PUBLIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3106 "test.tab.c"
    break;

  case 62:
#line 485 "test.y"
                                                                                                {vec = {createnode("PROTECTED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3112 "test.tab.c"
    break;

  case 63:
#line 486 "test.y"
                                                                                                {vec = {createnode("PRIVATE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3118 "test.tab.c"
    break;

  case 64:
#line 487 "test.y"
                                                                                        {vec = {createnode("STATIC__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3124 "test.tab.c"
    break;

  case 65:
#line 488 "test.y"
                                                                                                {vec = {createnode("ABSTRACT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3130 "test.tab.c"
    break;

  case 66:
#line 489 "test.y"
                                                                                        {vec = {createnode("FINAL__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3136 "test.tab.c"
    break;

  case 67:
#line 490 "test.y"
                                                                                        {vec = {createnode("NATIVE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3142 "test.tab.c"
    break;

  case 68:
#line 491 "test.y"
                                                                                                {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3148 "test.tab.c"
    break;

  case 69:
#line 492 "test.y"
                                                                                                {vec = {createnode("TRANSIENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3154 "test.tab.c"
    break;

  case 70:
#line 493 "test.y"
                                                                                                {vec = {createnode("VOLATILE__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Modifier", vec);}
#line 3160 "test.tab.c"
    break;

  case 71:
#line 497 "test.y"
                                                                                                        {vec = {createnode("EXTENDS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassExtends", vec);}
#line 3166 "test.tab.c"
    break;

  case 72:
#line 501 "test.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 3172 "test.tab.c"
    break;

  case 73:
#line 502 "test.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassBody", vec);}
#line 3178 "test.tab.c"
    break;

  case 74:
#line 506 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 3184 "test.tab.c"
    break;

  case 75:
#line 507 "test.y"
                                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclarations", vec);}
#line 3190 "test.tab.c"
    break;

  case 76:
#line 511 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3196 "test.tab.c"
    break;

  case 77:
#line 512 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3202 "test.tab.c"
    break;

  case 78:
#line 513 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec);}
#line 3208 "test.tab.c"
    break;

  case 79:
#line 514 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassBodyDeclaration", vec); }
#line 3214 "test.tab.c"
    break;

  case 80:
#line 518 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3220 "test.tab.c"
    break;

  case 81:
#line 519 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3226 "test.tab.c"
    break;

  case 82:
#line 520 "test.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ClassMemberDeclaration", vec);}
#line 3232 "test.tab.c"
    break;

  case 83:
#line 524 "test.y"
                                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3238 "test.tab.c"
    break;

  case 84:
#line 525 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("FieldDeclaration", vec);}
#line 3244 "test.tab.c"
    break;

  case 85:
#line 529 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3250 "test.tab.c"
    break;

  case 86:
#line 530 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorList", vec);}
#line 3256 "test.tab.c"
    break;

  case 87:
#line 534 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3262 "test.tab.c"
    break;

  case 88:
#line 535 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("EQUALTO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclarator", vec);}
#line 3268 "test.tab.c"
    break;

  case 89:
#line 539 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3274 "test.tab.c"
    break;

  case 90:
#line 540 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("VariableDeclaratorId", vec);}
#line 3280 "test.tab.c"
    break;

  case 91:
#line 544 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3286 "test.tab.c"
    break;

  case 92:
#line 545 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializer", vec);}
#line 3292 "test.tab.c"
    break;

  case 93:
#line 549 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodDeclaration", vec);}
#line 3298 "test.tab.c"
    break;

  case 94:
#line 553 "test.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3304 "test.tab.c"
    break;

  case 95:
#line 554 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3310 "test.tab.c"
    break;

  case 96:
#line 555 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3316 "test.tab.c"
    break;

  case 97:
#line 556 "test.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3322 "test.tab.c"
    break;

  case 98:
#line 557 "test.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("VOID__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3328 "test.tab.c"
    break;

  case 99:
#line 558 "test.y"
                                                                                                                {vec = {createnode("VOID__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3334 "test.tab.c"
    break;

  case 100:
#line 559 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("VOID__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3340 "test.tab.c"
    break;

  case 101:
#line 560 "test.y"
                                                                                                        {vec = {createnode("VOID__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodHeader", vec);}
#line 3346 "test.tab.c"
    break;

  case 102:
#line 564 "test.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3352 "test.tab.c"
    break;

  case 103:
#line 565 "test.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3358 "test.tab.c"
    break;

  case 104:
#line 566 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodDeclarator", vec);}
#line 3364 "test.tab.c"
    break;

  case 105:
#line 570 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3370 "test.tab.c"
    break;

  case 106:
#line 571 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameterList", vec);}
#line 3376 "test.tab.c"
    break;

  case 107:
#line 575 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3382 "test.tab.c"
    break;

  case 108:
#line 576 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FormalParameter", vec);}
#line 3388 "test.tab.c"
    break;

  case 109:
#line 580 "test.y"
                                                                                                        {vec = {createnode("THROWS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Throws", vec);}
#line 3394 "test.tab.c"
    break;

  case 110:
#line 584 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3400 "test.tab.c"
    break;

  case 111:
#line 585 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassTypeList", vec);}
#line 3406 "test.tab.c"
    break;

  case 112:
#line 589 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3412 "test.tab.c"
    break;

  case 113:
#line 590 "test.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodBody", vec);}
#line 3418 "test.tab.c"
    break;

  case 114:
#line 594 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceInitializer", vec);}
#line 3424 "test.tab.c"
    break;

  case 115:
#line 598 "test.y"
                                                                                                {vec = {createnode("STATIC__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StaticInitializer", vec);}
#line 3430 "test.tab.c"
    break;

  case 116:
#line 602 "test.y"
                                                                                                                                        {vec = {(yyvsp[-3].str_val),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3436 "test.tab.c"
    break;

  case 117:
#line 603 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3442 "test.tab.c"
    break;

  case 118:
#line 604 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3448 "test.tab.c"
    break;

  case 119:
#line 605 "test.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConstructorDeclaration", vec);}
#line 3454 "test.tab.c"
    break;

  case 120:
#line 609 "test.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3460 "test.tab.c"
    break;

  case 121:
#line 610 "test.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorDeclarator", vec);}
#line 3466 "test.tab.c"
    break;

  case 122:
#line 614 "test.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3472 "test.tab.c"
    break;

  case 123:
#line 615 "test.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3478 "test.tab.c"
    break;

  case 124:
#line 616 "test.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3484 "test.tab.c"
    break;

  case 125:
#line 617 "test.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ConstructorBody", vec);}
#line 3490 "test.tab.c"
    break;

  case 126:
#line 621 "test.y"
                                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3496 "test.tab.c"
    break;

  case 127:
#line 622 "test.y"
                                                                                                        {vec = {createnode("THIS__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3502 "test.tab.c"
    break;

  case 128:
#line 623 "test.y"
                                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3508 "test.tab.c"
    break;

  case 129:
#line 624 "test.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3514 "test.tab.c"
    break;

  case 130:
#line 625 "test.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3520 "test.tab.c"
    break;

  case 131:
#line 626 "test.y"
                                                                                                                                {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3526 "test.tab.c"
    break;

  case 132:
#line 627 "test.y"
                                                                                                                        {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),createnode("SUPER__" + *(yyvsp[-3].lex) , emp),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3532 "test.tab.c"
    break;

  case 133:
#line 628 "test.y"
                                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExplicitConstructorInvocation", vec);}
#line 3538 "test.tab.c"
    break;

  case 134:
#line 632 "test.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3544 "test.tab.c"
    break;

  case 135:
#line 633 "test.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3550 "test.tab.c"
    break;

  case 136:
#line 634 "test.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3556 "test.tab.c"
    break;

  case 137:
#line 635 "test.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayInitializer", vec);}
#line 3562 "test.tab.c"
    break;

  case 138:
#line 639 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3568 "test.tab.c"
    break;

  case 139:
#line 640 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("VariableInitializerList", vec);}
#line 3574 "test.tab.c"
    break;

  case 140:
#line 644 "test.y"
                                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3580 "test.tab.c"
    break;

  case 141:
#line 645 "test.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Block", vec);}
#line 3586 "test.tab.c"
    break;

  case 142:
#line 649 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3592 "test.tab.c"
    break;

  case 143:
#line 650 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatements", vec);}
#line 3598 "test.tab.c"
    break;

  case 144:
#line 654 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3604 "test.tab.c"
    break;

  case 145:
#line 655 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BlockStatement", vec);}
#line 3610 "test.tab.c"
    break;

  case 146:
#line 659 "test.y"
                                                                                                                        {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("LocalVariableDeclarationStatement", vec);}
#line 3616 "test.tab.c"
    break;

  case 147:
#line 663 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3622 "test.tab.c"
    break;

  case 148:
#line 664 "test.y"
                                                                                                                {vec = {createnode("VAR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3628 "test.tab.c"
    break;

  case 149:
#line 665 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3634 "test.tab.c"
    break;

  case 150:
#line 666 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("VAR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LocalVariableDeclaration", vec);}
#line 3640 "test.tab.c"
    break;

  case 151:
#line 670 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3646 "test.tab.c"
    break;

  case 152:
#line 671 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3652 "test.tab.c"
    break;

  case 153:
#line 672 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3658 "test.tab.c"
    break;

  case 154:
#line 673 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3664 "test.tab.c"
    break;

  case 155:
#line 674 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3670 "test.tab.c"
    break;

  case 156:
#line 675 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Statement", vec);}
#line 3676 "test.tab.c"
    break;

  case 157:
#line 679 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3682 "test.tab.c"
    break;

  case 158:
#line 680 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3688 "test.tab.c"
    break;

  case 159:
#line 681 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3694 "test.tab.c"
    break;

  case 160:
#line 682 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3700 "test.tab.c"
    break;

  case 161:
#line 683 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementNoShortIf", vec);}
#line 3706 "test.tab.c"
    break;

  case 162:
#line 687 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3712 "test.tab.c"
    break;

  case 163:
#line 688 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3718 "test.tab.c"
    break;

  case 164:
#line 689 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3724 "test.tab.c"
    break;

  case 165:
#line 690 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3730 "test.tab.c"
    break;

  case 166:
#line 691 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3736 "test.tab.c"
    break;

  case 167:
#line 692 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3742 "test.tab.c"
    break;

  case 168:
#line 693 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3748 "test.tab.c"
    break;

  case 169:
#line 694 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3754 "test.tab.c"
    break;

  case 170:
#line 695 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3760 "test.tab.c"
    break;

  case 171:
#line 696 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3766 "test.tab.c"
    break;

  case 172:
#line 697 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3772 "test.tab.c"
    break;

  case 173:
#line 698 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementWithoutTrailingSubstatement", vec);}
#line 3778 "test.tab.c"
    break;

  case 174:
#line 702 "test.y"
                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 3784 "test.tab.c"
    break;

  case 175:
#line 703 "test.y"
                                                                                                                                {vec = {createnode("ASSERT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("COLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssertStatement", vec);}
#line 3790 "test.tab.c"
    break;

  case 176:
#line 707 "test.y"
                                                                                                {vec = {createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("EmptyStatement", vec);}
#line 3796 "test.tab.c"
    break;

  case 177:
#line 711 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatement", vec);}
#line 3802 "test.tab.c"
    break;

  case 178:
#line 715 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LabeledStatementNoShortIf", vec);}
#line 3808 "test.tab.c"
    break;

  case 179:
#line 719 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ExpressionStatement", vec);}
#line 3814 "test.tab.c"
    break;

  case 180:
#line 723 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3820 "test.tab.c"
    break;

  case 181:
#line 724 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3826 "test.tab.c"
    break;

  case 182:
#line 725 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3832 "test.tab.c"
    break;

  case 183:
#line 726 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3838 "test.tab.c"
    break;

  case 184:
#line 727 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3844 "test.tab.c"
    break;

  case 185:
#line 728 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3850 "test.tab.c"
    break;

  case 186:
#line 729 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpression", vec);}
#line 3856 "test.tab.c"
    break;

  case 187:
#line 733 "test.y"
                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenStatement", vec);}
#line 3862 "test.tab.c"
    break;

  case 188:
#line 737 "test.y"
                                                                                                                                                {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatement", vec);}
#line 3868 "test.tab.c"
    break;

  case 189:
#line 741 "test.y"
                                                                                                                                                        {vec = {createnode("IF__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("RRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("ELSE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("IfThenElseStatementNoShortIf", vec);}
#line 3874 "test.tab.c"
    break;

  case 190:
#line 745 "test.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchStatement", vec);}
#line 3880 "test.tab.c"
    break;

  case 191:
#line 749 "test.y"
                                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3886 "test.tab.c"
    break;

  case 192:
#line 750 "test.y"
                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3892 "test.tab.c"
    break;

  case 193:
#line 751 "test.y"
                                                                                                                        {vec = {createnode("LCB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3898 "test.tab.c"
    break;

  case 194:
#line 752 "test.y"
                                                                                                {vec = {createnode("LCB__" + *(yyvsp[-1].lex) , emp),createnode("RCB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchBlock", vec);}
#line 3904 "test.tab.c"
    break;

  case 195:
#line 756 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 3910 "test.tab.c"
    break;

  case 196:
#line 757 "test.y"
                                                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroups", vec);}
#line 3916 "test.tab.c"
    break;

  case 197:
#line 761 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 3922 "test.tab.c"
    break;

  case 198:
#line 762 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchLabels", vec);}
#line 3928 "test.tab.c"
    break;

  case 199:
#line 766 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchBlockStatementGroup", vec);}
#line 3934 "test.tab.c"
    break;

  case 200:
#line 770 "test.y"
                                                                                                                {vec = {createnode("CASE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 3940 "test.tab.c"
    break;

  case 201:
#line 771 "test.y"
                                                                                                {vec = {createnode("DEFAULT__" + *(yyvsp[-1].lex) , emp),createnode("COLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("SwitchLabel", vec);}
#line 3946 "test.tab.c"
    break;

  case 202:
#line 775 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 3952 "test.tab.c"
    break;

  case 203:
#line 776 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CaseConstants", vec);}
#line 3958 "test.tab.c"
    break;

  case 204:
#line 780 "test.y"
                                                                                                                        {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatement", vec);}
#line 3964 "test.tab.c"
    break;

  case 205:
#line 784 "test.y"
                                                                                                                                {vec = {createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("WhileStatementNoShortIf", vec);}
#line 3970 "test.tab.c"
    break;

  case 206:
#line 788 "test.y"
                                                                                                                                        {vec = {createnode("DO__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("WHILE__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DoStatement", vec);}
#line 3976 "test.tab.c"
    break;

  case 207:
#line 792 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 3982 "test.tab.c"
    break;

  case 208:
#line 793 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatement", vec);}
#line 3988 "test.tab.c"
    break;

  case 209:
#line 797 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 3994 "test.tab.c"
    break;

  case 210:
#line 798 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForStatementNoShortIf", vec);}
#line 4000 "test.tab.c"
    break;

  case 211:
#line 802 "test.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4006 "test.tab.c"
    break;

  case 212:
#line 803 "test.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4012 "test.tab.c"
    break;

  case 213:
#line 804 "test.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4018 "test.tab.c"
    break;

  case 214:
#line 805 "test.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4024 "test.tab.c"
    break;

  case 215:
#line 806 "test.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4030 "test.tab.c"
    break;

  case 216:
#line 807 "test.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4036 "test.tab.c"
    break;

  case 217:
#line 808 "test.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4042 "test.tab.c"
    break;

  case 218:
#line 809 "test.y"
                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatement", vec);}
#line 4048 "test.tab.c"
    break;

  case 219:
#line 813 "test.y"
                                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-8].lex) , emp),createnode("LRB__" + *(yyvsp[-7].lex) , emp),(yyvsp[-6].str_val),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4054 "test.tab.c"
    break;

  case 220:
#line 814 "test.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4060 "test.tab.c"
    break;

  case 221:
#line 815 "test.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4066 "test.tab.c"
    break;

  case 222:
#line 816 "test.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4072 "test.tab.c"
    break;

  case 223:
#line 817 "test.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-7].lex) , emp),createnode("LRB__" + *(yyvsp[-6].lex) , emp),(yyvsp[-5].str_val),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4078 "test.tab.c"
    break;

  case 224:
#line 818 "test.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4084 "test.tab.c"
    break;

  case 225:
#line 819 "test.y"
                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4090 "test.tab.c"
    break;

  case 226:
#line 820 "test.y"
                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-3].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("BasicForStatementNoShortIf", vec);}
#line 4096 "test.tab.c"
    break;

  case 227:
#line 824 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 4102 "test.tab.c"
    break;

  case 228:
#line 825 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForInit", vec);}
#line 4108 "test.tab.c"
    break;

  case 229:
#line 829 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ForUpdate", vec);}
#line 4114 "test.tab.c"
    break;

  case 230:
#line 833 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 4120 "test.tab.c"
    break;

  case 231:
#line 834 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("StatementExpressionList", vec);}
#line 4126 "test.tab.c"
    break;

  case 232:
#line 838 "test.y"
                                                                                                                                                        {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatement", vec);}
#line 4132 "test.tab.c"
    break;

  case 233:
#line 842 "test.y"
                                                                                                                                                                {vec = {createnode("FOR__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("COLON__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EnhancedForStatementNoShortIf", vec);}
#line 4138 "test.tab.c"
    break;

  case 234:
#line 846 "test.y"
                                                                                                                {vec = {createnode("BREAK__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 4144 "test.tab.c"
    break;

  case 235:
#line 847 "test.y"
                                                                                                        {vec = {createnode("BREAK__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("BreakStatement", vec);}
#line 4150 "test.tab.c"
    break;

  case 236:
#line 851 "test.y"
                                                                                                                {vec = {createnode("CONTINUE__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 4156 "test.tab.c"
    break;

  case 237:
#line 852 "test.y"
                                                                                                        {vec = {createnode("CONTINUE__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ContinueStatement", vec);}
#line 4162 "test.tab.c"
    break;

  case 238:
#line 856 "test.y"
                                                                                                        {vec = {createnode("RETURN__" + *(yyvsp[-1].lex) , emp),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 4168 "test.tab.c"
    break;

  case 239:
#line 857 "test.y"
                                                                                                                {vec = {createnode("RETURN__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ReturnStatement", vec);}
#line 4174 "test.tab.c"
    break;

  case 240:
#line 861 "test.y"
                                                                                                                {vec = {createnode("THROW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("SEMICOLON__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ThrowStatement", vec);}
#line 4180 "test.tab.c"
    break;

  case 241:
#line 865 "test.y"
                                                                                                                        {vec = {createnode("SYNCHRONIZED__" + *(yyvsp[-4].lex) , emp),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SynchronizedStatement", vec);}
#line 4186 "test.tab.c"
    break;

  case 242:
#line 869 "test.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4192 "test.tab.c"
    break;

  case 243:
#line 870 "test.y"
                                                                                                        {vec = {createnode("TRY__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4198 "test.tab.c"
    break;

  case 244:
#line 871 "test.y"
                                                                                                                {vec = {createnode("TRY__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TryStatement", vec);}
#line 4204 "test.tab.c"
    break;

  case 245:
#line 875 "test.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 4210 "test.tab.c"
    break;

  case 246:
#line 876 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Catches", vec);}
#line 4216 "test.tab.c"
    break;

  case 247:
#line 880 "test.y"
                                                                                                                                        {vec = {createnode("CATCH__" + *(yyvsp[-5].lex) , emp),createnode("LRB__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4222 "test.tab.c"
    break;

  case 248:
#line 881 "test.y"
                                                                                                                                                {vec = {createnode("CATCH__" + *(yyvsp[-6].lex) , emp),createnode("LRB__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),(yyvsp[-3].str_val),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchClause", vec);}
#line 4228 "test.tab.c"
    break;

  case 249:
#line 885 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4234 "test.tab.c"
    break;

  case 250:
#line 886 "test.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchType", vec);}
#line 4240 "test.tab.c"
    break;

  case 251:
#line 890 "test.y"
                                                                                                        {vec = {createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4246 "test.tab.c"
    break;

  case 252:
#line 891 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CatchTypes", vec);}
#line 4252 "test.tab.c"
    break;

  case 253:
#line 895 "test.y"
                                                                                                {vec = {createnode("FINALLY__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Finally", vec);}
#line 4258 "test.tab.c"
    break;

  case 254:
#line 899 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4264 "test.tab.c"
    break;

  case 255:
#line 900 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Primary", vec);}
#line 4270 "test.tab.c"
    break;

  case 256:
#line 904 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4276 "test.tab.c"
    break;

  case 257:
#line 905 "test.y"
                                                                                        {vec = {createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4282 "test.tab.c"
    break;

  case 258:
#line 906 "test.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),createnode("THIS__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4288 "test.tab.c"
    break;

  case 259:
#line 907 "test.y"
                                                                                                        {vec = {createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4294 "test.tab.c"
    break;

  case 260:
#line 908 "test.y"
                                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4300 "test.tab.c"
    break;

  case 261:
#line 909 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4306 "test.tab.c"
    break;

  case 262:
#line 910 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4312 "test.tab.c"
    break;

  case 263:
#line 911 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PrimaryNoNewArray", vec);}
#line 4318 "test.tab.c"
    break;

  case 264:
#line 915 "test.y"
                                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4324 "test.tab.c"
    break;

  case 265:
#line 916 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4330 "test.tab.c"
    break;

  case 266:
#line 917 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ClassInstanceCreationExpression", vec);}
#line 4336 "test.tab.c"
    break;

  case 267:
#line 921 "test.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4342 "test.tab.c"
    break;

  case 268:
#line 922 "test.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4348 "test.tab.c"
    break;

  case 269:
#line 923 "test.y"
                                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-5].lex) , emp),(yyvsp[-4].str_val),createnode("LRB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RRB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4354 "test.tab.c"
    break;

  case 270:
#line 924 "test.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("UnqualifiedClassInstanceCreationExpression", vec);}
#line 4360 "test.tab.c"
    break;

  case 271:
#line 928 "test.y"
                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4366 "test.tab.c"
    break;

  case 272:
#line 929 "test.y"
                                                                                                        {vec = {createnode("SUPER__" + *(yyvsp[-2].lex) , emp),createnode("DOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("FieldAccess", vec);}
#line 4372 "test.tab.c"
    break;

  case 273:
#line 933 "test.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4378 "test.tab.c"
    break;

  case 274:
#line 934 "test.y"
                                                                                                                        {vec = {(yyvsp[-3].str_val),createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("ArrayAccess", vec);}
#line 4384 "test.tab.c"
    break;

  case 275:
#line 938 "test.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4390 "test.tab.c"
    break;

  case 276:
#line 939 "test.y"
                                                                                                                {vec = {(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4396 "test.tab.c"
    break;

  case 277:
#line 940 "test.y"
                                                                                                                {vec = {(yyvsp[-4].str_val),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4402 "test.tab.c"
    break;

  case 278:
#line 941 "test.y"
                                                                                                                                {vec = {(yyvsp[-5].str_val),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4408 "test.tab.c"
    break;

  case 279:
#line 942 "test.y"
                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4414 "test.tab.c"
    break;

  case 280:
#line 943 "test.y"
                                                                                                                                {vec = {createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4420 "test.tab.c"
    break;

  case 281:
#line 944 "test.y"
                                                                                                                        {vec = {(yyvsp[-6].str_val),createnode("DOT__" + *(yyvsp[-5].lex) , emp),createnode("SUPER__" + *(yyvsp[-4].lex) , emp),createnode("DOT__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("LRB__" + *(yyvsp[-1].lex) , emp),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4426 "test.tab.c"
    break;

  case 282:
#line 945 "test.y"
                                                                                                                                        {vec = {(yyvsp[-7].str_val),createnode("DOT__" + *(yyvsp[-6].lex) , emp),createnode("SUPER__" + *(yyvsp[-5].lex) , emp),createnode("DOT__" + *(yyvsp[-4].lex) , emp),(yyvsp[-3].str_val),createnode("LRB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RRB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("MethodInvocation", vec);}
#line 4432 "test.tab.c"
    break;

  case 283:
#line 949 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4438 "test.tab.c"
    break;

  case 284:
#line 950 "test.y"
                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("COMMA__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArgumentList", vec);}
#line 4444 "test.tab.c"
    break;

  case 285:
#line 954 "test.y"
                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4450 "test.tab.c"
    break;

  case 286:
#line 955 "test.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4456 "test.tab.c"
    break;

  case 287:
#line 956 "test.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4462 "test.tab.c"
    break;

  case 288:
#line 957 "test.y"
                                                                                                                        {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4468 "test.tab.c"
    break;

  case 289:
#line 958 "test.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4474 "test.tab.c"
    break;

  case 290:
#line 959 "test.y"
                                                                                                                                {vec = {createnode("NEW__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ArrayCreationExpression", vec);}
#line 4480 "test.tab.c"
    break;

  case 291:
#line 963 "test.y"
                                                                                                        {vec = {(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4486 "test.tab.c"
    break;

  case 292:
#line 964 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("DimExprs", vec);}
#line 4492 "test.tab.c"
    break;

  case 293:
#line 968 "test.y"
                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-2].lex) , emp),(yyvsp[-1].str_val),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("DimExpr", vec);}
#line 4498 "test.tab.c"
    break;

  case 294:
#line 972 "test.y"
                                                                                                {vec = {createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4504 "test.tab.c"
    break;

  case 295:
#line 973 "test.y"
                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LSB__" + *(yyvsp[-1].lex) , emp),createnode("RSB__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("Dims", vec);}
#line 4510 "test.tab.c"
    break;

  case 296:
#line 977 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Expression", vec);}
#line 4516 "test.tab.c"
    break;

  case 297:
#line 981 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4522 "test.tab.c"
    break;

  case 298:
#line 982 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AssignmentExpression", vec);}
#line 4528 "test.tab.c"
    break;

  case 299:
#line 986 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),(yyvsp[-1].str_val),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("Assignment", vec);}
#line 4534 "test.tab.c"
    break;

  case 300:
#line 990 "test.y"
                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4540 "test.tab.c"
    break;

  case 301:
#line 991 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4546 "test.tab.c"
    break;

  case 302:
#line 992 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("LeftHandSide", vec);}
#line 4552 "test.tab.c"
    break;

  case 303:
#line 996 "test.y"
                                                                                                {vec = {createnode("EQUALTO__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4558 "test.tab.c"
    break;

  case 304:
#line 997 "test.y"
                                                                                        {vec = {createnode("PLUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4564 "test.tab.c"
    break;

  case 305:
#line 998 "test.y"
                                                                                                {vec = {createnode("MINUSET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4570 "test.tab.c"
    break;

  case 306:
#line 999 "test.y"
                                                                                        {vec = {createnode("MULTET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4576 "test.tab.c"
    break;

  case 307:
#line 1000 "test.y"
                                                                                        {vec = {createnode("DIVET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4582 "test.tab.c"
    break;

  case 308:
#line 1001 "test.y"
                                                                                        {vec = {createnode("ANDET__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("AssignmentOperator", vec);}
#line 4588 "test.tab.c"
    break;

  case 309:
#line 1005 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 4594 "test.tab.c"
    break;

  case 310:
#line 1006 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("QUEST__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalExpression", vec);}
#line 4600 "test.tab.c"
    break;

  case 311:
#line 1010 "test.y"
                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("COLON__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("TernaryAction", vec);}
#line 4606 "test.tab.c"
    break;

  case 312:
#line 1014 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 4612 "test.tab.c"
    break;

  case 313:
#line 1015 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("OR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalOrExpression", vec);}
#line 4618 "test.tab.c"
    break;

  case 314:
#line 1019 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 4624 "test.tab.c"
    break;

  case 315:
#line 1020 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("AND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ConditionalAndExpression", vec);}
#line 4630 "test.tab.c"
    break;

  case 316:
#line 1024 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 4636 "test.tab.c"
    break;

  case 317:
#line 1025 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("BITOR__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InclusiveOrExpression", vec);}
#line 4642 "test.tab.c"
    break;

  case 318:
#line 1029 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 4648 "test.tab.c"
    break;

  case 319:
#line 1030 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("POW__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ExclusiveOrExpression", vec);}
#line 4654 "test.tab.c"
    break;

  case 320:
#line 1034 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 4660 "test.tab.c"
    break;

  case 321:
#line 1035 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("BITAND__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AndExpression", vec);}
#line 4666 "test.tab.c"
    break;

  case 322:
#line 1039 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4672 "test.tab.c"
    break;

  case 323:
#line 1040 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("EQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4678 "test.tab.c"
    break;

  case 324:
#line 1041 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("NEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("EqualityExpression", vec);}
#line 4684 "test.tab.c"
    break;

  case 325:
#line 1045 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4690 "test.tab.c"
    break;

  case 326:
#line 1046 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4696 "test.tab.c"
    break;

  case 327:
#line 1047 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4702 "test.tab.c"
    break;

  case 328:
#line 1048 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4708 "test.tab.c"
    break;

  case 329:
#line 1049 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("GEQ__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4714 "test.tab.c"
    break;

  case 330:
#line 1050 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("RelationalExpression", vec);}
#line 4720 "test.tab.c"
    break;

  case 331:
#line 1054 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("INSTANCEOF__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("InstanceofExpression", vec);}
#line 4726 "test.tab.c"
    break;

  case 332:
#line 1058 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4732 "test.tab.c"
    break;

  case 333:
#line 1059 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("LEFTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4738 "test.tab.c"
    break;

  case 334:
#line 1060 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("RIGHTSHIFT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4744 "test.tab.c"
    break;

  case 335:
#line 1061 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("THREEGREAT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("ShiftExpression", vec);}
#line 4750 "test.tab.c"
    break;

  case 336:
#line 1065 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4756 "test.tab.c"
    break;

  case 337:
#line 1066 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4762 "test.tab.c"
    break;

  case 338:
#line 1067 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("AdditiveExpression", vec);}
#line 4768 "test.tab.c"
    break;

  case 339:
#line 1071 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4774 "test.tab.c"
    break;

  case 340:
#line 1072 "test.y"
                                                                                                                                {vec = {(yyvsp[-2].str_val),createnode("MULT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4780 "test.tab.c"
    break;

  case 341:
#line 1073 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("DIVIDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4786 "test.tab.c"
    break;

  case 342:
#line 1074 "test.y"
                                                                                                                                        {vec = {(yyvsp[-2].str_val),createnode("MODULO__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("MultiplicativeExpression", vec);}
#line 4792 "test.tab.c"
    break;

  case 343:
#line 1078 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4798 "test.tab.c"
    break;

  case 344:
#line 1079 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4804 "test.tab.c"
    break;

  case 345:
#line 1080 "test.y"
                                                                                                        {vec = {createnode("PLUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4810 "test.tab.c"
    break;

  case 346:
#line 1081 "test.y"
                                                                                                        {vec = {createnode("MINUS__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4816 "test.tab.c"
    break;

  case 347:
#line 1082 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpression", vec);}
#line 4822 "test.tab.c"
    break;

  case 348:
#line 1086 "test.y"
                                                                                                                {vec = {createnode("INCREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreIncrementExpression", vec);}
#line 4828 "test.tab.c"
    break;

  case 349:
#line 1090 "test.y"
                                                                                                                {vec = {createnode("DECREMENT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PreDecrementExpression", vec);}
#line 4834 "test.tab.c"
    break;

  case 350:
#line 1094 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4840 "test.tab.c"
    break;

  case 351:
#line 1095 "test.y"
                                                                                                        {vec = {createnode("TILDE__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4846 "test.tab.c"
    break;

  case 352:
#line 1096 "test.y"
                                                                                                        {vec = {createnode("NOT__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4852 "test.tab.c"
    break;

  case 353:
#line 1097 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4858 "test.tab.c"
    break;

  case 354:
#line 1098 "test.y"
                                                                                                        {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("UnaryExpressionNotPlusMinus", vec);}
#line 4864 "test.tab.c"
    break;

  case 355:
#line 1102 "test.y"
                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4870 "test.tab.c"
    break;

  case 356:
#line 1103 "test.y"
                                                    {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4876 "test.tab.c"
    break;

  case 357:
#line 1104 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4882 "test.tab.c"
    break;

  case 358:
#line 1105 "test.y"
                                                                                                                {vec = {(yyvsp[0].str_val)}; (yyval.str_val) = createnode("PostfixExpression", vec);}
#line 4888 "test.tab.c"
    break;

  case 359:
#line 1109 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("INCREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostIncrementExpression", vec);}
#line 4894 "test.tab.c"
    break;

  case 360:
#line 1113 "test.y"
                                                                                                                {vec = {(yyvsp[-1].str_val),createnode("DECREMENT__" + *(yyvsp[0].lex) , emp)}; (yyval.str_val) = createnode("PostDecrementExpression", vec);}
#line 4900 "test.tab.c"
    break;

  case 361:
#line 1117 "test.y"
                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 4906 "test.tab.c"
    break;

  case 362:
#line 1118 "test.y"
                                                                                                                                        {vec = {createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("CastExpression", vec);}
#line 4912 "test.tab.c"
    break;

  case 363:
#line 1122 "test.y"
                                                                                                                        {vec = {createnode("SWITCH__" + *(yyvsp[-4].lex) , emp),createnode("LSB__" + *(yyvsp[-3].lex) , emp),(yyvsp[-2].str_val),createnode("RSB__" + *(yyvsp[-1].lex) , emp),(yyvsp[0].str_val)}; (yyval.str_val) = createnode("SwitchExpression", vec);}
#line 4918 "test.tab.c"
    break;


#line 4922 "test.tab.c"

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
#line 1125 "test.y"


typedef long long ll;
set<char> escapes = {'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\'', '\"', '\?', '\\'};

string trim(string & );


map<string, vector<pair<string, tab_item> > > main_table;
map<string, int> type_sizes;

void filltypes()
{
	type_sizes["byte"] = 1;
	type_sizes["short"] = 2;
	type_sizes["int"] = 4;
	type_sizes["long"] = 8;
	type_sizes["float"] = 4;
	type_sizes["double"] = 8;
	type_sizes["boolean"] = 1;
	type_sizes["char"] = 2;
	type_sizes["class"] = 16;
}

void dfs(Node* root){
    cout<<"\t"<<(ll)root<<"[label=\"";
    for(char c:root->val){
        if(escapes.find(c)!=escapes.end()){
            cout<<"\\";
        }
        cout<<c;
    }
	cout << "NodeType=" << root->nodetype;
	cout<<"\"];\n";
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
set<string> bin_ops = {"EQUALTO","PLUSET","MINUSET","MULTET","DIVET","ANDET","LT","GT","LEQ","GEQ","OR","AND","BITOR","BITAND","POW","EQ","NEQ","LEFTSHIFT","RIGHTSHIFT","THREEGREAT","PLUS","MINUS","MULT","DIVIDE","MODULO"};

void traverse(Node*);
int typeCheck(Node*);
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
void vardeclaratorid(Node* root, string type_)
{
	if(root->children[0]->val == "Identifier"){
		string temp = root->children[0]->children[0]->val;
		temp = temp.substr(12,temp.length()-1);
		root->children[0]->children[0]->nodetype = insert_to_map(type_);
		root->children[0]->nodetype = insert_to_map(type_);
		insert(temp,current_scope,root->children[0]->lineno,insert_to_map(type_), empty_string_vec);
	}else{
		type_ = "array_" + type_;
		vardeclaratorid(root->children[0], type_);
	}
}
void vardeclarator(Node* root, string type_)
{	
	vardeclaratorid(root->children[0], type_);
}
void vardeclist(Node* root, string type_)
{
	if(root->children[0]->val == "VariableDeclarator")
	{	
		vardeclarator(root->children[0], type_);
	}
	else
	{
		vardeclist(root->children[0], type_);
		vardeclarator(root->children[2], type_);
	}
}

string primitiveTypefun(Node* root){
	if(root->children[0]->val=="IntegralType"){
		string temp = root->children[0]->children[0]->val;
		return temp.substr(14,temp.length()-1);
		// return "int";
	}else if(root->children[0]->val=="FloatingPointType"){
		string temp = root->children[0]->children[0]->val;
		return temp.substr(19,temp.length()-1);
		// return "float";
	}else{
		return "boolean";
	}
}

string typefun(Node* root){
	if(root->children[0]->val == "PrimitiveType"){
		return primitiveTypefun(root->children[0]);
	}else{
		if(root->children[0]->children[0]->val == "ArrayType"){
			return "array_"+ primitiveTypefun(root->children[0]->children[0]->children[0]);
		}
		else  //ClassType
		{
			string temp = root->children[0]->children[0]->children[0]->children[0]->children[0]->val;
			temp = temp.substr(12, temp.length()-1);
			return "class_" + temp;
		}

	}
	return "";
}

void formal_param(Node* root, vector<string> &types_formal_params){
	if(root->children[0]->val=="Modifiers")
	{	
		string type_param = typefun(root->children[1]);
		types_formal_params.push_back(type_param);
		vardeclaratorid(root->children[2], type_param); 
	}else
	{
		// cerr << "HI6\n";
		string type_param = typefun(root->children[0]);
		types_formal_params.push_back(type_param);
		vardeclaratorid(root->children[1], type_param);
	}
}

void formal_param_list(Node* root, vector<string> &types_formal_params){
	if(root->children[0]->val == "FormalParameter"){
		// cerr << "HI5\n";
		formal_param(root->children[0], types_formal_params);
	}else{
		formal_param_list(root->children[0], types_formal_params);
		formal_param(root->children[2], types_formal_params);
	}
}

vector<string> original_formal_param_list(Node* root){
	vector<string> types_formal_params;
	// cerr << "HI4\n";
	formal_param_list(root, types_formal_params);
	// reverse(types_formal_params.begin(), types_formal_params.end());
	return types_formal_params;
}
void typeCheckDfs(Node* );
void arg_expr(Node* root, vector<string> & type_args){
	if(trim(root->val) == "IDENTIFIER"){
		string temp = root->val;
		temp=temp.substr(12,temp.length()-1);
		int index = scope_check(temp,current_scope);
		root->nodetype = sym_table[index].second.type;
	}
	typeCheckDfs(root);
	// cerr << "Reached here?\n" << root->val << " " << root->nodetype << "\n";
	if(root->nodetype != -1) 
		type_args.push_back(revMap[root->nodetype]);
}

void arg_list(Node* root, vector<string> & type_args){
	for(int i = 0; i < root->children.size(); i++){
		if(root->children[i]->val == "ArgumentList"){
			arg_list(root->children[i], type_args);
		}
		else{
			arg_expr(root->children[i], type_args);
		}
	}
}

void method_declarator(Node* root, string type_)
{	
	string temp;
	vector<int> temp_curr_scope = current_scope;

	vector<string> type_formal_params;
	for(int i=0;i<root->children.size();i++)
	{
		if((root->children[i])->val=="FormalParameterList")
		{
			incr_scope();
			type_formal_params = original_formal_param_list(root->children[i]);
			current_scope.pop_back();
			counts[current_scope]--;
		}
	}
	for(int i=0;i<root->children.size();i++)
	{	
		if((root->children[i])->val=="MethodDeclarator"){
			method_declarator(root->children[i],type_+"arraytype");
			return;
		}
		if((root->children[i])->val=="Identifier")
		{
			temp = ((root->children[i])->children[0])->val;
			temp = temp.substr(12,temp.length()-1);
			root->children[i]->children[0]->nodetype = insert_to_map(type_);
			insert(temp, current_scope,root->lineno,insert_to_map(type_), type_formal_params);
		}
	}
}

string array_access_name(Node* root){
	if(root->children[0]->val == "Name"){
		string temp;
		if(root->children[0]->children[0]->val=="Identifier")
		{
			temp = root->children[0]->children[0]->children[0]->val;
			temp = temp.substr(12,temp.length()-1);
		}
		else
		{
			temp = root->children[0]->children[2]->children[0]->val;
			temp = temp.substr(12,temp.length()-1);
		}
		return temp;
	}else{
		return array_access_name(root->children[0]->children[0]);
	}
}

void array_access_type_check(Node* root, vector<string> & type_args){

	if(root->children[0]->val == "ArrayAccess"){
		array_access_type_check(root->children[0], type_args);
	}

	typeCheck(root->children[2]);
	if(revMap[root->children[2]->nodetype] != "int"){
		cerr << "Array index should be an int\n" << "Error found at line number: " << root->children[2]->lineno << endl ;
		exit(0);
	}
	type_args.push_back("int");
}

void constructor_declarator(Node* root){
	vector<string> type_formal_params;
	for(int i=0;i<root->children.size();i++)
	{
		if((root->children[i])->val=="FormalParameterList")
		{
			incr_scope();
			// cerr << "HI3\n";
			type_formal_params = original_formal_param_list(root->children[i]);
			current_scope.pop_back();
			counts[current_scope]--;
		}
	}
	string temp;
	for(int i=0;i<root->children.size();i++)
	{	
		if((root->children[i])->val=="Identifier")
		{
			temp = ((root->children[i])->children[0])->val;
			temp = temp.substr(12,temp.length()-1);
			string s1 = "class";
			root->children[i]->children[0]->nodetype = insert_to_map(s1);
			// insert(temp, current_scope,root->lineno,insert_to_map(type_), type_formal_params);
			int flag = 0;
			for(int i = 0; i < sym_table.size(); i++){
				if(sym_table[i].first==temp && revMap[sym_table[i].second.type] == "class"){
					flag = 1;
					sym_table[i].second.type_args = type_formal_params;
					break;
				}
			}
			if(!flag){
				cerr << "Trying to declare a constructor that does not match the class name at line number: " << root->lineno << endl;
				exit(0);
			}
		}
	}
}

void traverse(Node* root)
{
	root->scope = current_scope;
	if(root->val == "Identifier"){
		string temp = root->children[0]->val;
		temp=temp.substr(12,temp.length()-1);
		// if(temp == "j"){
		// 	table_dump();
		// 	for(auto i:current_scope) cerr << i << " ";
		// 	cerr << endl;
		// }
		int temp_index = lookup(temp);
		if(sym_table[temp_index].second.scope.size()!=1)
		{
			int index = scope_check(temp,current_scope);
			if(index == -1){
				cerr << "Error found in Scope Checking at line number" << root->lineno << "\n";
				exit(0);
			}
			root->children[0]->nodetype = sym_table[index].second.type;
			root->nodetype = sym_table[index].second.type;
		}else{
			root->children[0]->nodetype = typeMap["class"];
			root->nodetype = typeMap["class"];
		}
	}

	if(root->val=="FOR__for")
	{
		incr_scope();
	}
	if(root->val == "MethodBody" && root->children[0]->val == "SEMICOLON__;"){
		counts[current_scope]++;
	}
	if(root->val=="InstanceInitializer"||root->val=="StaticInitializer"||root->val=="Block")
	{
		incr_scope();
	}
	if(root->val=="MethodHeader")
	{
		if(root->children[0]->val=="Modifiers")
		{
			if(root->children[1]->val=="Type")
			{
				string type_ = "function_" + primitiveTypefun(root->children[1]->children[0]);
				method_declarator(root->children[2],type_);
			}else
			{
				method_declarator(root->children[2],"function_void");
			}
		}
		else
		{
			if(root->children[0]->val=="Type")
			{
				string type_ = "function_" + primitiveTypefun(root->children[0]->children[0]);
				method_declarator(root->children[1],type_);
			}else
			{
				method_declarator(root->children[1],"function_void");
			}
		}
		return;
	}
	if(root->val=="ClassDeclaration")
	{
		for(int i=0;i<root->children.size();i++)
		{
			if((root->children[i])->val=="Identifier")
			{
				string temp = ((root->children[i])->children[0])->val;
				temp = temp.substr(12,temp.length()-1);
				string s = "class";
				insert(temp,current_scope,root->children[i]->lineno,insert_to_map(s), empty_string_vec);
				root->children[i]->children[0]->nodetype = insert_to_map(s);
				incr_scope();
			}
			if(root->children[i]->val == "ClassBody"){
				traverse(root->children[i]);
			}
		}
		current_scope.pop_back();
		current_scope[0]++;
		return;
	}
	if(root->val=="ConstructorBody"){
		incr_scope();
	}
	if(root->val=="ConstructorDeclaration"){
		// cerr << "HI1\n";
		for(int i = 0; i < root->children.size(); i++){
			if(root->children[i]->val == "ConstructorDeclarator"){
				// cerr << "HI2\n";
				constructor_declarator(root->children[i]);
			}
		}
		return;
	}
	if(root->val=="LocalVariableDeclaration")
	{
		string type_;
		if(root->children[0]->val=="Type")
		{
			type_ = typefun(root->children[0]);
			string temp = type_.substr(0,5);
			if(temp=="class")
			{
				string s = type_.substr(6,type_.length()-1);
				int flag=0;
				for(auto it : sym_table)
				{
					if(it.first==s && revMap[it.second.type]=="class")
					{
						flag=1;
						break;
					}
				}
				if(!flag)
				{
					cerr << "Trying to create object of non-existent class at line number: " << root->lineno <<endl;
					exit(0);
				}
			}
			vardeclist(root->children[1], type_);
		}
		else if(root->children[0]->val=="VAR__var")
		{
			type_ = "VAR";
			vardeclist(root->children[1], type_);
		}
		else
		{
			if(root->children[1]->val=="Type")
			{
				type_ = typefun(root->children[0]);
				vardeclist(root->children[2], type_);
			}
			else if(root->children[1]->val=="VAR__var")
			{
				type_ = "VAR";
				vardeclist(root->children[2], type_);
			}
		}
	}
	if(root->val=="FieldDeclaration")
	{
		if(root->children[0]->val=="Modifiers")
		{
			vardeclist(root->children[2], typefun(root->children[1])); 
		}else
		{
			vardeclist(root->children[1], typefun(root->children[0]));
		}
	}

	if(root->val=="MethodInvocation")
	{
		string obj;
		string temp;

		tab_item class_obj_t, t;
		if(root->children[0]->children[0]->val=="Identifier")
		{
			temp = root->children[0]->children[0]->children[0]->val;
			temp = temp.substr(12,temp.length()-1);
			int index = lookup_scope(temp,current_scope);  //assuming lookup
			if(index==-1)
			{
				// table_dump();
				cerr << "Calling undeclared function at line number: "<< root->lineno <<endl;
				exit(0);
			}
			t = sym_table[index].second;
			string type__ = revMap[t.type];
			if(!(type__[0]=='f' && type__[1]=='u'))
			{
				cerr<<"Calling invalid function at line number: " << root->lineno <<endl;
				exit(0); 
				// return;
			}
			type__ = type__.substr(9,type__.length()-1);
			root->nodetype = insert_to_map(type__);
		}
		else
		{	
			obj = root->children[0]->children[0]->children[0]->children[0]->val;
			temp = root->children[0]->children[2]->children[0]->val;
			obj = obj.substr(12,obj.length()-1);
			temp = temp.substr(12,temp.length()-1);
			int ind = lookup_scope(obj, current_scope);
			if(ind==-1)
			{
				cerr << "No such object exisits"<< endl;
				cerr << "Line number: " <<root->lineno<<endl;
				exit(0);
			}
			class_obj_t = sym_table[ind].second;
			string s = revMap[class_obj_t.type].substr(0,5);

			if(s!="class")
			{
				cerr << "The called object is not of a class" << endl;
				cerr << "Line number: " <<root->lineno<<endl;
				exit(0);
			}
			
			string class_name = revMap[class_obj_t.type].substr(6,revMap[class_obj_t.type].length()-1);
			int indexx = lookup(class_name);
			tab_item class_t = sym_table[indexx].second; 

			int flag2 = -1;
			for(int i = 0; i < sym_table.size(); i++){
				if(sym_table[i].first == temp && is_prefix(class_t.scope, sym_table[i].second.scope)){
					flag2 = i;
					break;
				}
			}
			if(flag2==-1){
				cerr << "The called method is not a member of the class" << endl;
				cerr << "Line number: " << root->lineno << endl;
				exit(0);
			}

			t = sym_table[flag2].second;
			string type__ = revMap[t.type];
			if(!(type__[0]=='f' && type__[1]=='u'))
			{
				cerr<<"Calling invalid function at line number: " << root->lineno <<endl;
				exit(0); 
				// return;
			}
			type__ = type__.substr(9,type__.length()-1);
			root->nodetype = insert_to_map(type__);
		}
		
		int flag1 = 0;
		for(int i = 0; i < root->children.size(); i++){
			if(root->children[i]->val == "ArgumentList"){
				flag1 = 1;
				// fun for arglist
				make_ast(root->children[i], root->children[i], 0);
				revise_ast(root->children[i], root->children[i], 0);
				vector<string> type_args;
				arg_list(root->children[i], type_args);
				// cerr << root->children[i]->val << endl;
				if(type_args.size() != t.type_args.size()){
					cerr << "Number of function arguments dont match\n" << "Error found at line number: " << root->children[i]->lineno << "\n";
					exit(0);
				}
				for(int i = 0; i < type_args.size(); i++){
					if(revMap[typeMap[type_args[i]]] != revMap[typeMap[t.type_args[i]]]){
						cerr << "Type of function arguments dont match\n" << "Error found at line number: " << root->children[i]->lineno << "\n";
						exit(0);
					}
				}
			}
		}
		if(!flag1){
			if(t.type_args.size() != 0){
				cerr << "Function arguments dont match\n" << "Error found at line number: " << root->lineno << "\n";
				exit(0);
			}
		}
		return;
	}
	if(root->val=="ArrayAccess")
	{
		string temp = array_access_name(root);
		make_ast(root, root, 0);
		revise_ast(root, root, 0);
		
		vector<string> type_args;

		array_access_type_check(root, type_args);

		int index = lookup_scope(temp,current_scope);
		tab_item t = sym_table[index].second;
		string type__ =  revMap[t.type];
		// cerr << "Type name : " << type__ << endl;
		for(auto i:type_args){
			if(type__[0]!='a')
			{
				cerr<<"Accessing more dimensions at line number: " << root->lineno <<endl;
				exit(0);
			}
			type__ = type__.substr(6,type__.length()-1);
		}
		root->nodetype = insert_to_map(type__);
		return;
	}
	if(root->val == "UnqualifiedClassInstanceCreationExpression"){
		string type__;
		type__ = root->children[1]->children[0]->children[0]->children[0]->val;
		type__ = type__.substr(12, type__.length()-1);

		int flag = -1;
		for(int i = 0; i < sym_table.size(); i++){
			pair<string, tab_item> it = sym_table[i];
			if(it.first == type__ && revMap[it.second.type] == "class"){
				flag = i;
				break;
			}
		}
		if(flag == -1){
			cerr << "Creating an instance of a non-existent class at line number: " << root->lineno << endl;
			exit(0);
		}
		type__ = "class_" + type__;
		root->nodetype = insert_to_map(type__);

		tab_item t = sym_table[flag].second;
		int flag1 = 0;
		for(int i = 0; i < root->children.size(); i++){
			if(root->children[i]->val == "ArgumentList"){
				flag1 = 1;
				// fun for arglist
				make_ast(root->children[i], root->children[i], 0);
				revise_ast(root->children[i], root->children[i], 0);
				vector<string> type_args;
				arg_list(root->children[i], type_args);
				// cerr << root->children[i]->val << endl;
				if(type_args != t.type_args){
					// print(type_args);
					// print(t.type_args);
					cerr << "Class constructor arguments dont match\n" << "Error found at line number: " << root->children[i]->lineno << "\n";
					exit(0);
				}
			}
		}
		if(!flag1){
			if(t.type_args.size() != 0){
				cerr << "Class constructor arguments dont match\n" << "Error found at line number: " << root->lineno << "\n";
				exit(0);
			}
		}	
	}
	//field access remains

	for(auto child:root->children)
	{
		traverse(child);
	}
	if(root->val=="InstanceInitializer"||root->val=="StaticInitializer"||root->val=="Block")
	{
		hide_scope();
	}
	if(root->val=="RRB1")
	{
		current_scope.pop_back();
		counts[current_scope]--;
	}
	if(root->val=="ConstructorBody"){
		hide_scope();
	}
}

int semantic_checking(int type1, int type2, string op){
	if( op == "EQUALTO" )
		{	
			if(type1 == type2){
				return type1;
			}
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int" ){
					return typeMap["int"];
				}
				cerr << "Type error\n";
				return -1;
			}
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				cerr << "Type error\n";
				return -1;
			}
			if(revMap[type1] == "boolean"){
				if(revMap[type2] == "boolean"){
					return typeMap["boolean"];
				}
				cerr << "Type error\n";
				return -1;
			}
			if(revMap[type1] == "VAR"){
				return type2;
			}
		}
	if( op == "PLUS")
		{
			if(revMap[type1]=="boolean"||revMap[type2]=="boolean")
			{
				cerr << "TypeError\n";
				return -1;
			}
			if(revMap[type1]=="VAR"||revMap[type1]=="VAR")
			{
				return typeMap["VAR"];
			}
			if(revMap[type1]=="string"||revMap[type2]=="string")
			{
				return typeMap["string"];
			}
			if(revMap[type1]=="float"||revMap[type2]=="float")
			{
				return typeMap["float"];
			}
			return typeMap["int"];
		}
	if( op == "MINUS")
		{
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "boolean" || revMap[type1] == "string" || revMap[type1] == "VAR"){
				return -1;
			}
		}
	if( op == "MULT")
		{
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "boolean" || revMap[type1] == "string" || revMap[type1] == "VAR"){
				return -1;
			}
		}
	if( op == "DIVIDE")
		{
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "boolean" || revMap[type1] == "string" || revMap[type1] == "VAR"){
				return -1;
			}
		}
	if( op == "MODULO")
		{
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "boolean" || revMap[type1] == "string" || revMap[type1] == "VAR"){
				return -1;
			}
		}
	if( op == "LEFTSHIFT")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "RIGHTSHIFT")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "THREEGREAT")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "EQ")
		{
			if(type1 == type2 || revMap[type1] == "VAR" || revMap[type2] == "VAR"){
				return typeMap["boolean"];
			}
			if((revMap[type1] == "float" && revMap[type2] == "int") || (revMap[type2] == "float" && revMap[type1] == "int")){
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "NEQ")
		{
			if(type1 == type2 || revMap[type1] == "VAR" || revMap[type2] == "VAR"){
				return typeMap["boolean"];
			}
			if((revMap[type1] == "float" && revMap[type2] == "int") || (revMap[type2] == "float" && revMap[type1] == "int")){
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "BITAND")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "BITOR")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "POW")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "AND")
		{
			if(revMap[type1]=="boolean"&&revMap[type2]=="boolean")
			{
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "OR")
		{
			if(revMap[type1]=="boolean"&&revMap[type2]=="boolean")
			{
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "GT")
		{
			if(type1 == type2 ||revMap[type1] == "VAR" || revMap[type2] == "VAR"||(revMap[type2]=="float" && revMap[type1]=="int")||(revMap[type1]=="float" && revMap[type2]=="int") )
			{
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "LT")
		{
			if(type1 == type2 ||revMap[type1] == "VAR" || revMap[type2] == "VAR"||(revMap[type2]=="float" && revMap[type1]=="int")||(revMap[type1]=="float" && revMap[type2]=="int") )
			{
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "GEQ")
		{
			if(type1 == type2 ||revMap[type1] == "VAR" || revMap[type2] == "VAR"||(revMap[type2]=="float" && revMap[type1]=="int")||(revMap[type1]=="float" && revMap[type2]=="int") )
			{
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "LEQ")
		{
			if(type1 == type2 ||revMap[type1] == "VAR" || revMap[type2] == "VAR"||(revMap[type2]=="float" && revMap[type1]=="int")||(revMap[type1]=="float" && revMap[type2]=="int") )
			{
				return typeMap["boolean"];
			}
			return -1;
		}
	if( op == "PLUSET")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "VAR"){
				return typeMap["VAR"];
			}
			return -1;
		}
	if( op == "MINUSET")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "MULTET")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "DIVET")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				if(revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			if(revMap[type1] == "float"){
				if(revMap[type2] == "int" || revMap[type2] == "float"){
					return typeMap["float"];
				}
				return -1;
			}
			return -1;
		}
	if( op == "ANDET")
		{
			if(revMap[type1] == "int"){
				if(revMap[type2] == "int"){
					return typeMap["int"];
				}
				return -1;
			}
			return -1;
		}
	return -1;
}	

int typeCheck(Node* root){
	if(root->nodetype!=-1){
		return root->nodetype;
	}

	int type1;
	if(root->children[0]->val == "Name"){
		type1 = typeCheck(root->children[0]->children[2]);
	}
	else{
		type1 = typeCheck(root->children[0]);
	}
	int type2 = typeCheck(root->children[1]);
	int res = semantic_checking(type1, type2, trim(root->val));


	if(res == -1){
		cerr<<"TypeError at line number: " << root->lineno << "\n";
		exit(0);
		// yyerror("Error");
	}
	

	return root->nodetype=res;

	root->nodetype=res;
	return res;

}

void typeCheckDfs(Node* root){
	if(bin_ops.find(trim(root->val))!=bin_ops.end()){
		typeCheck(root);
		return;
	}
	for(auto child:root->children){
		typeCheckDfs(child);
	}
}

void fill_parent(Node* root){
	for(auto child:root->children){
		fill_parent(child);
		child->parent=root;
	}
}
set<string> ops = {"INSTANCEOF","EQUALTO","PLUSET","MINUSET","MULTET","DIVET","ANDET","LT","GT","LEQ","GEQ","OR","AND","BITOR","BITAND","POW","EQ","NEQ","LEFTSHIFT","RIGHTSHIFT","THREEGREAT","PLUS","MINUS","MULT","DIVIDE","MODULO","TILDE","NOT","QUEST","COLON"};

ofstream out3ac;
ofstream outx86;
int numins=0;
int tot_regs=1;
int blocksgen=1;
int blockscalled=1;
map<string, stack<int> > regstack;

void puTabs(){
	for(int i=0;i<numins;i++){
		out3ac<<"\t";
		// outx86<<"\t";
	}
}

string ident(string & s){
	return s.substr(12, s.length()-1);
}

bool check_iden(string & s){
	if(s.length()>=10 && s.substr(0, 10)=="IDENTIFIER"){
		return true;
	}
	return false;
}

string trim(string & s){
	string t="";
	for(int i=0;i<s.length()-1;i++){
		if(s[i]=='_' && s[i+1]=='_'){
			break;
		}
		t+=s[i];
	}
	return t;
}

string getLiteral(string & s){
	vector<string> gg = {"BOOL_LITERAL", "NULL_LITERAL", "INT_LITERAL", "FLOAT_LITERAL", "STRING_LITERAL", "TEXTBLOCK_LITERAL", "CHAR_LITERAL"};
	for(string t:gg){
		if(s.size()>=t.size() && s.substr(0, t.size())==t){
			string g="";
			for(int i=t.size()+2; i<s.size();i++){
				g+=s[i];
			}
			return g;
		}
	}
	return "";
}

map<Node*, bool> visited;
map<Node*, int> blocknum;
map<Node*, int> ifnum;
map<Node*, int> blockif;
map<string, int> sizemap;
void fill_sizemap(){
	sizemap["array_integer"]=4;
	sizemap["array_float"]=8;
	sizemap["array_boolean"]=1;
}
int fun=1;

int getRecentLoop(Node* root){
	while(blocknum.find(root)==blocknum.end()){
		root=root->parent;
	}
	return blocknum[root];
}

int getRecentLoopif(Node* root){
	while(ifnum.find(root)==ifnum.end()){
		root=root->parent;
	}
	return ifnum[root];
}

int getMyif(Node* root){
	while(blockif.find(root)==blockif.end()){
		root=root->parent;
	}
	return blockif[root];
}


void getParams(Node* root, vector<int> & v, vector<int> & typev){
	if(trim(root->val)!="COMMA" && root->val!="ArgumentList"){
		v.push_back(root->reg);
		typev.push_back(root->nodetype);
		return;
	}
	for(auto child:root->children){
		if(child->val=="ArgumentList"){
			getParams(child, v, typev);
		}
	}
	for(auto child:root->children){
		if(trim(child->val)!="COMMA" && child->val!="ArgumentList"){
			v.push_back(child->reg);

			typev.push_back(child->nodetype);
		}
	}
}

void gen_3ac(Node* root){
	if(visited[root]==true){
		return;
	}
	visited[root]=true;
	if(root->val=="ClassDeclaration"){
		for(auto child:root->children){
			string s=(child->val);
			if(s.length()>=10 && s.substr(0, 10)=="IDENTIFIER"){
				puTabs();
				out3ac<<(child->val).substr(12, (child->val).length()-1)<<":\n";
				numins++;
				break;
			}
		}
	}
	if(root->val=="MethodDeclaration"){
		Node* mHeader = root->children[0];
		Node* mDec;
		for(auto child:mHeader->children){
			if(child->val == "MethodDeclarator"){
				mDec = child;
				break;
			}
		}
		while(mDec->val=="MethodDeclarator"){
			mDec=mDec->children[0];
		}
		string s = (mDec->val).substr(12, (mDec->val).length()-1);
		if(s=="main"){
			puTabs();
			out3ac<<"Goto main\n";
		}
		puTabs();
		out3ac<<s<<":\n";
		numins++;
	}
	if(root->val=="IfThenElseStatement"){
		if(root->parent->val!="IfThenElseStatement"){
			ifnum[root]=blockscalled;
		}
		Node* curnode = root;
		while(curnode->val=="IfThenElseStatement" && visited[curnode->children[2]]==false){
			gen_3ac(curnode->children[2]);
			puTabs();
			blockif[curnode]=blockscalled;
			
			string reg_name = "t" + to_string(curnode->children[2]->reg);
			outx86<<"cmp \t DWORD PTR [rbp" << mmap[reg_name] << "], 1\n";
			outx86<<"je \t\t Block" << blockscalled << endl;

			out3ac<<"Case t"<<curnode->children[2]->reg<<" : "<<"Goto Block"<<blockscalled++<<'\n';
			curnode = curnode->children[6];
			if(curnode->val=="IfThenStatement"){
				blockif[curnode]=blockscalled;
				gen_3ac(curnode->children[2]);
				puTabs();
				string reg_name = "t" + to_string(curnode->children[2]->reg);
				outx86<<"cmp \t DWORD PTR [rbp" << mmap[reg_name] << "], 1\n";
				outx86<<"je \t\t Block" << blockscalled << endl;
				out3ac<<"Case t"<<curnode->children[2]->reg<<" : "<<"Goto Block"<<blockscalled++<<'\n';
			}else if(curnode->val=="Block"){
				blockif[curnode]=blockscalled;
				puTabs();
				outx86<<"jmp \t Block" << blockscalled << endl;
				out3ac<<"Goto Block"<<blockscalled++<<'\n';
			}
		}

		for(auto child:root->children){
			if(child->val=="Block"){
				puTabs();
				outx86<<"Block"<<getMyif(child)<<": \n";
				out3ac<<"Block"<<getMyif(child)<<": \n";
				numins++;
				gen_3ac(child);
				puTabs();
				outx86<<"jmp \t EndIfBlock"<<getRecentLoopif(root)<<"\n";
				out3ac<<"Goto EndIfBlock"<<getRecentLoopif(root)<<"\n";
				numins--;
			}
		}
	}
	if(root->val=="IfThenStatement"){
		if(!visited[root->children[2]]){
			if(root->parent->val!="IfThenElseStatement"){
				ifnum[root]=blockscalled;
				blockif[root]=blockscalled;
			}
			gen_3ac(root->children[2]);
			puTabs();
			
			string reg_name = "t" + to_string(root->children[2]->reg);
			outx86<<"cmp \t DWORD PTR [rbp" << mmap[reg_name] << "], 1\n";
			outx86<<"je \t\t Block" << blockscalled << endl;

			out3ac<<"Case t"<<root->children[2]->reg<<" : "<<"Goto Block"<<blockscalled<<'\n';
			puTabs();

			outx86<<"jmp \t EndIfBlock"<<getRecentLoopif(root)<<"\n";
			out3ac<<"Goto EndIfBlock"<<getRecentLoopif(root)<<"\n";
			blockscalled++;
		}
		for(auto child:root->children){
			if(child->val=="Block"){
				puTabs();
				outx86<<"Block"<<getMyif(child)<<": \n";
				out3ac<<"Block"<<getMyif(child)<<": \n";
				numins++;
				gen_3ac(child);
				puTabs();
				outx86<<"jmp \t EndIfBlock"<<getRecentLoopif(root)<<"\n";
				out3ac<<"Goto EndIfBlock"<<getRecentLoopif(root)<<"\n";
				numins--;
			}
		}
	}
	if(root->val=="WhileStatement"){
		puTabs();
		outx86<<"LoopStart"<<blocksgen<<": \n";
		out3ac<<"LoopStart"<<blocksgen<<": \n";
		puTabs();

		outx86<<"jmp \t UpdateLoop"<<blocksgen<<endl;
		out3ac<<"Goto UpdateLoop"<<blocksgen<<endl;
		
		outx86<<"Block"<<blocksgen<<": \n";
		out3ac<<"Block"<<blocksgen<<": \n";

		blocknum[root]=blocksgen++;
		blockscalled++;
		numins++;
		gen_3ac(root->children[4]);
		numins--;
		puTabs();
		outx86<<"UpdateLoop"<<blocknum[root]<<": \n";
		out3ac<<"UpdateLoop"<<blocknum[root]<<": \n";
		gen_3ac(root->children[2]);
		puTabs();

		string reg_name = "t" + to_string(root->children[2]->reg);
		outx86<<"cmp \t DWORD PTR [rbp" << mmap[reg_name] << "], 1\n";
		outx86<<"je \t\t Block" << blocknum[root] << endl;

		out3ac<<"Case t"<<root->children[2]->reg<<" : "<<"Goto Block"<<blocknum[root]<<'\n';
	}
	if(root->val=="BasicForStatement"){
		puTabs();
		out3ac<<"LoopStart"<<blocksgen<<"\n";
		if(trim(root->children[2]->val)!="SEMICOLON"){
			gen_3ac(root->children[2]);
		}
		blocknum[root]=blocksgen++;
		blockscalled++;
		puTabs();
		out3ac<<"Block"<<blocknum[root]<<": \n";
		numins++;
		gen_3ac((root->children).back());
		puTabs();
		out3ac<<"Goto UpdateLoop"<<blocknum[root]<<"\n";
		numins--;
		puTabs();
		out3ac<<"UpdateLoop"<<blocknum[root]<<": \n";
		numins++;
		int flag=0;
		for(auto child:root->children){
			if(flag==2){
				if(trim(child->val)!="RRB"){
					gen_3ac(child);
				}
				break;
			}
			if(trim(child->val)=="SEMICOLON"){
				flag++;
			}
		}
		numins--;
		Node* cond=NULL;
		flag=0;
		for(auto child:root->children){
			if(flag==1){
				if(trim(child->val)!="SEMICOLON"){
					gen_3ac(child);
					cond=child;
				}
				break;
			}
			if(trim(child->val)=="SEMICOLON"){
				flag++;
			}
		}
		puTabs();
		if(cond){
			out3ac<<"Case t"<<cond->reg<<" : "<<"Goto Block"<<blocknum[root]<<'\n';
		}else{
			out3ac<<"Goto Block"<<blocknum[root]<<'\n';
		}
	}

	for(int i=0;i<root->children.size();i++){
		Node* child = root->children[i];
		if(!((root->val=="MethodInvocation" && i==0)
		|| (root->val=="MethodDeclarator" && trim(child->val)=="IDENTIFIER")
		|| (root->val=="ClassDeclaration" && trim(child->val)=="IDENTIFIER"))){
			gen_3ac(child);
		}
	}
	if(root->val=="IfThenElseStatement" || root->val=="IfThenStatement"){
		if(root->parent->val!="IfThenElseStatement"){
			puTabs();
			outx86<<"EndIfBlock"<<getRecentLoopif(root)<<": \n";
			out3ac<<"EndIfBlock"<<getRecentLoopif(root)<<": \n";
		}
	}
	if(root->val=="WhileStatement" || root->val=="BasicForStatement"){
		puTabs();
		outx86<<"LoopEnd"<<blocknum[root]<<": \n";
		out3ac<<"LoopEnd"<<blocknum[root]<<": \n";
	}
	if(root->val=="MethodInvocation"){
		root->reg = tot_regs++;

		int to_pop=0, tot_off=8, newvar=0;
		if(root->children.size()==4){
			vector<int> v, typev;
			getParams(root->children[2], v, typev);
			reverse(v.begin(), v.end());
			for(auto i:typev){
				tot_off+=type_sizes[revOffMap[i]];
			}
			puTabs();
			out3ac<<"$sp = $sp - "<<tot_off<<'\n';
			for(int i=0;i<v.size();i++){
				puTabs();
			 	out3ac<<"PushParams "<<"t"<<v[i]<<" +"<<newvar<<"($sp)"<<'\n';
				newvar+=type_sizes[revOffMap[typev[i]]];
			}
			puTabs();
			out3ac<<"PushParams "<<"$ra"<<" +"<<newvar<<"($sp)"<<'\n';
			to_pop=v.size()+1;
		}
		puTabs();
		if(root->children[0]->val != "Name"){
			out3ac<<"t"<<root->reg<<" = "<<"LCall "<<ident(root->children[0]->val)<<'\n';
		}else{
			out3ac<<"PushParams "<<ident(root->children[0]->children[0]->val)<<'\n';
			to_pop++;
			puTabs();
			out3ac<<"t"<<root->reg<<" = "<<"LCall "<<ident(root->children[0]->children[2]->val)<<'\n';
		}
		if(root->children.size()==4){
			for(int i=0;i<to_pop;i++){
				puTabs();
				out3ac<<"PopParam\n";
			}
		}
		puTabs();
		out3ac<<"$sp = $sp + "<<tot_off<<'\n';
	}else if(root->val=="UnqualifiedClassInstanceCreationExpression"){
		root->reg = tot_regs++;
		int to_pop=0, tot_off=8, newvar=0;
		puTabs();
		out3ac<<"t"<<root->reg<<" = "<<"allocmem 16\n";
		if(root->children.size()==5){
			vector<int> v, typev;
			getParams(root->children[3], v, typev);
			reverse(v.begin(), v.end());
			for(auto i:typev){
				tot_off+=type_sizes[revOffMap[i]];
			}
			puTabs();
			out3ac<<"$sp = $sp - "<<tot_off<<'\n';
			for(int i=0;i<v.size();i++){
				puTabs();
			 	out3ac<<"PushParams "<<"t"<<v[i]<<" +"<<newvar<<"($sp)"<<'\n';
				newvar+=type_sizes[revOffMap[typev[i]]];
			}
			puTabs();
			out3ac<<"PushParams "<<"$ra"<<" +"<<newvar<<"($sp)"<<'\n';
			to_pop=v.size()+1;
		}
		puTabs();
		out3ac<<"t"<<root->reg<<" = "<<"LCall "<<ident(root->children[1]->val)<<'\n';
		if(root->children.size()==5){
			for(int i=0;i<to_pop;i++){
				puTabs();
				out3ac<<"PopParams\n";
			}
		}
		puTabs();
		out3ac<<"$sp = $sp + "<<tot_off<<'\n';
	}
	else if(root->val=="ReturnStatement"){
		puTabs();
		if(trim(root->children[1]->val)=="SEMICOLON"){
			out3ac<<"ret\n";
		}else{
			out3ac<<"ret t"<<root->children[1]->reg<<'\n';
		}
	}
	else if(trim(root->val)=="CONTINUE"){
		puTabs();
		out3ac<<"Goto UpdateLoop"<<getRecentLoop(root)<<'\n';
	}
	else if(trim(root->val)=="BREAK"){
		puTabs();
		out3ac<<"Goto LoopEnd"<<getRecentLoop(root)<<'\n';
	}
	else if(getLiteral(root->val)!=""){
		root->reg = tot_regs++;
		// checkMemory
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		puTabs();
		out3ac<<"t"<<root->reg<<" = "<<getLiteral(root->val)<<'\n';
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], " << getLiteral(root->val) << endl;
	}
	else if(check_iden(root->val)){
		root->reg = tot_regs++;
		puTabs();
		out3ac<<"t"<<root->reg<<" = "<<ident(root->val)<<'\n';
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		if(mmap.find(ident(root->val)) != mmap.end()){
			string reg_cur = "t"+ to_string(get_temp(root->scope, ident(root->val)));
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_cur] << "]" << endl;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax" << endl;
		}else{
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], " << 0 << endl;
		}
	}else if(trim(root->val)=="EQUALTO"){
		root->reg = root->children[0]->reg;
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		puTabs();
		out3ac<<"t"<<root->children[0]->reg<<" = "<<"t"<<root->children[1]->reg<<'\n';
		outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name_1] << "], eax"<< endl;
		puTabs();
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->children[0]->reg<<'\n';
		insert_temp(root->scope, ident(root->children[0]->val), root->children[0]->reg);
		mmap[ident(root->children[0]->val)] = curr_mem - 4;
		// curr_mem -= 4;
		// outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
		// outx86<<"mov \t DWORD PTR [rbp" << mmap[ident(root->children[0]->val)] << "], eax" << endl;
	}
	else if(trim(root->val)=="PLUSET"){
		root->reg = tot_regs++;
		puTabs();
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
		outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
		outx86<<"add \t eax, edx\n";
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" PLUS "<<"t"<<root->children[1]->reg<<'\n';
		puTabs();
		mmap[ident(root->children[0]->val)] = curr_mem - 4;
		insert_temp(root->scope, ident(root->children[0]->val), root->children[0]->reg);
		// curr_mem -= 4;
		// outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name] << "]" << endl;
		// outx86<<"mov \t DWORD PTR [rbp" << mmap[ident(root->children[0]->val)] << "], eax" << endl;
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(trim(root->val)=="MINUSET"){
		root->reg = tot_regs++;
		puTabs();
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
		outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
		outx86<<"sub \t eax, edx\n";
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" MINUS "<<"t"<<root->children[1]->reg<<'\n';
		puTabs();
		mmap[ident(root->children[0]->val)] = curr_mem - 4;
		insert_temp(root->scope, ident(root->children[0]->val), root->children[0]->reg);
		// curr_mem -= 4;
		// outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name] << "]" << endl;
		// outx86<<"mov \t DWORD PTR [rbp" << mmap[ident(root->children[0]->val)] << "], eax" << endl;
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(trim(root->val)=="MULTET"){
		root->reg = tot_regs++;
		puTabs();
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
		outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
		outx86<<"imul \t eax, edx\n";
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" MULT "<<"t"<<root->children[1]->reg<<'\n';
		puTabs();
		mmap[ident(root->children[0]->val)] = curr_mem - 4;
		insert_temp(root->scope, ident(root->children[0]->val), root->children[0]->reg);
		// curr_mem -= 4;
		// outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name] << "]" << endl;
		// outx86<<"mov \t DWORD PTR [rbp" << mmap[ident(root->children[0]->val)] << "], eax" << endl;
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(trim(root->val)=="DIVET"){
		root->reg = tot_regs++;
		puTabs();
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
		outx86<<"mov \t edx, 0\n";
		outx86<<"idiv \t DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" DIVIDE "<<"t"<<root->children[1]->reg<<'\n';
		puTabs();
		mmap[ident(root->children[0]->val)] = curr_mem - 4;
		insert_temp(root->scope, ident(root->children[0]->val), root->children[0]->reg);
		// curr_mem -= 4;
		// outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name] << "]" << endl;
		// outx86<<"mov \t DWORD PTR [rbp" << mmap[ident(root->children[0]->val)] << "], eax" << endl;
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(trim(root->val)=="ANDET"){
		root->reg = tot_regs++;
		puTabs();
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
		outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
		outx86<<"and \t eax, edx\n";
		string reg_name = "t" + to_string(root->reg);
		mmap[reg_name] = curr_mem - 4;
		curr_mem -= 4;
		outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" AND "<<"t"<<root->children[1]->reg<<'\n';
		puTabs();
		mmap[ident(root->children[0]->val)] = curr_mem - 4;
		insert_temp(root->scope, ident(root->children[0]->val), root->children[0]->reg);
		// curr_mem -= 4;
		// outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name] << "]" << endl;
		// outx86<<"mov \t DWORD PTR [rbp" << mmap[ident(root->children[0]->val)] << "], eax" << endl;
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(root->val=="PostIncrementExpression"){
		root->reg = tot_regs++;
		puTabs();
		out3ac<<"t"<<tot_regs++<<" = "<<1<<'\n';
		puTabs(); 
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" PLUS "<<tot_regs-1<<'\n';
		puTabs();
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(root->val=="PreIncrementExpression"){
		root->reg = tot_regs++;
		puTabs();
		out3ac<<"t"<<tot_regs++<<" = "<<1<<'\n';
		puTabs(); 
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[1]->reg<<" PLUS "<<tot_regs-1<<'\n';
		puTabs();
		out3ac<<ident(root->children[1]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(root->val=="PostDecrementExpression"){
		root->reg = tot_regs++;
		puTabs();
		out3ac<<"t"<<tot_regs++<<" = "<<1<<'\n';
		puTabs(); 
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" MINUS "<<tot_regs-1<<'\n';
		puTabs();
		out3ac<<ident(root->children[0]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(root->val=="PreDecrementExpression"){
		root->reg = tot_regs++;
		puTabs();
		out3ac<<"t"<<tot_regs++<<" = "<<1<<'\n';
		puTabs(); 
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[1]->reg<<" MINUS "<<tot_regs-1<<'\n';
		puTabs();
		out3ac<<ident(root->children[1]->val)<<" = "<<"t"<<root->reg<<'\n';
	}
	else if(root->val=="ArrayAccess"){
		int treg = tot_regs++;
		puTabs();
		out3ac<<"t"<<treg<<" = "<<sizemap[revMap[root->children[0]->nodetype]]<<'\n';
		int treg1 = tot_regs++;
		puTabs();
		out3ac<<"t"<<treg1<<" = t"<<treg<<" MULT t"<<(root->children[2]->reg)<<'\n';
		root->reg=tot_regs++;
		puTabs(); 
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<"[t"<<treg1<<"]\n";
	}
	else if(ops.find(trim(root->val))!=ops.end()){
		root->reg = tot_regs++;
		puTabs();
		string reg_name_1 = "t" + to_string(root->children[0]->reg);
		string reg_name_2 = "t" + to_string(root->children[1]->reg);
		out3ac<<"t"<<root->reg<<" = "<<"t"<<root->children[0]->reg<<" "<<trim(root->val)<<" "<<"t"<<root->children[1]->reg<<'\n';
		if(trim(root->val) == "PLUS"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"add \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "MULT"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"imul \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "MINUS"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"sub \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "BITAND"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"and \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "BITOR"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"or \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "POW"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"xor \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "RIGHTSHIFT"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"shr \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "LEFTSHIFT"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"shl \t eax, edx\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "DIVIDE"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, 0\n";
			outx86<<"idiv \t DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "MODULO"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"mov \t edx, 0\n";
			outx86<<"idiv \t DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], edx\n";
		}
		if(trim(root->val) == "EQ"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"cmp \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"sete \t al\n";
			outx86<<"movzx \t eax, al\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "LT"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"cmp \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"setl \t al\n";
			outx86<<"movzx \t eax, al\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "GT"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"cmp \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"setg \t al\n";
			outx86<<"movzx \t eax, al\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "LEQ"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"cmp \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"setle \t al\n";
			outx86<<"movzx \t eax, al\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "GEQ"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"cmp \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"setge \t al\n";
			outx86<<"movzx \t eax, al\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
		if(trim(root->val) == "NEQ"){
			outx86<<"mov \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_1] << "]" << endl;
			outx86<<"cmp \t eax, " << "DWORD PTR [rbp" << mmap[reg_name_2] << "]" << endl;
			outx86<<"setne \t al\n";
			outx86<<"movzx \t eax, al\n";
			string reg_name = "t" + to_string(root->reg);
			mmap[reg_name] = curr_mem - 4;
			curr_mem -= 4;
			outx86<<"mov \t DWORD PTR [rbp" << mmap[reg_name] << "], eax\n";
		}
	}
	if(root->val=="ClassDeclaration"){
		numins--;
	}
	if(root->val=="MethodDeclaration"){
		numins--;
	}
}

void change_scope()
{
	int count =0;
	for(auto &x : sym_table)
	{
		if((revMap[x.second.type])[0]=='f' && (revMap[x.second.type])[1]=='u' )
		{
			x.second.scope.push_back(count);
			count++;
		}
	}
}

void function_fields(string function_name, vector<int> &func_scope)
{
	vector<pair<string, tab_item> > init;
	main_table.insert(make_pair(function_name, init));
	for(auto x: sym_table)
	{
		vector<int> temp = x.second.scope;
		if(is_prefix(func_scope,temp) && x.first!=function_name)
		{
			main_table[function_name].push_back(x);
		}
	}
}

void class_fields(string class_name, vector<int> &class_scope)
{
	vector<pair<string, tab_item> > init;
	main_table.insert(make_pair(class_name, init));
	for(auto x: sym_table)
	{
		vector<int> temp = x.second.scope;
		if(is_prefix(class_scope,temp) && x.first!=class_name && temp.size()==2)
		{
			main_table[class_name].push_back(x);
		}
	}
}


void main_create()
{
	for(auto x: sym_table)
	{
		tab_item t = x.second;
		if((revMap[t.type])[0]=='f' && (revMap[t.type])[1]=='u') 
		{
			function_fields(x.first, t.scope);
		}

		if(revMap[t.type]=="class")
		{
			class_fields(x.first, t.scope);
		}

	}
}

void insert_offests()
{
	for(auto &x : main_table)
	{
		// int off=0;
		for(auto &y : x.second)
		{
			string s = revOffMap[y.second.type];

			string temp = s.substr(0,4);
			if(temp=="class")
			{
				y.second.offset = 16;
			}
			else
			{
				y.second.offset = type_sizes[s];
			}

			// off = off + type_sizes[s];
		}
	}
}

void main_dump()
{
	ofstream of;
	for(auto it:main_table){
		string s="../dumps/"+it.first;
		string fl =  s+".csv";
		of.open(fl.c_str());

		of<<"Lexeme,Token,Line,Type,Size\n";

		for(auto j:it.second)
		{
			of << j.first << ",Identifier," << j.second.lines << "," << revOffMap[j.second.type] << "," << j.second.offset << endl;
		}
		of.close();
	}
}

void init_map(){
	typeMap["VAR"] = 1;
	revOffMap[1] = "VAR";
	revMap[1] = "VAR";

	typeMap["int"] = 2;
	revOffMap[2] = "int";
	revMap[2] = "int";

	typeMap["float"] = 3;
	revOffMap[3] = "float";
	revMap[3] = "float";

	typeMap["boolean"] = 4;
	revOffMap[4] = "boolean";
	revMap[4] = "boolean";

	typeMap["string"] = 5;
	revOffMap[5] = "string";
	revMap[5] = "string";
}

int main(int argc, char* argv[]){
    try{
		init_map();
		fill_sizemap();
		out3ac.open("3ac.txt");
		outx86.open("x86.txt");
		string inp = argv[1];
		string outp = argv[2];
        freopen(inp.c_str(), "r", stdin);
        freopen(outp.c_str(), "w", stdout);
        yyparse();
		traverse(root);
		table_dump();
        cout<<"strict digraph {\n";
        make_ast(root, root, 0);
        revise_ast(root, root, 0);

		fill_parent(root);
		typeCheckDfs(root);

        dfs(root);
        cout<<"}\n";
		change_scope();
		main_create();
		filltypes();
		insert_offests();

		gen_3ac(root);

		main_dump();
    }catch (...){
        cerr << "Compilation Error\n";
    }
    return 0;
}
