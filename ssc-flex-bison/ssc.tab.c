
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "ssc.y"

    #include <stdio.h>
    #include <stdlib.h>
    //contains our functions to be reused later by llvm.
    #include "IR.h"
    
    extern int yyparse();
    extern int yylex();
    extern FILE *yyin;
    void yyerror(const char *err);

    
    #define DEBUGBISON
    //This code is for producing debug output.
    #ifdef DEBUGBISON
        #define debugBison(a) (printf("\n%d \n",a))
        #define debugBisonStr(a) (printf("\n%s \n",a))
    #else
        #define debugBison(a)
    #endif


/* Line 189 of yacc.c  */
#line 96 "ssc.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tok_printd = 258,
     tok_double = 259,
     tok_prints = 260,
     tok_slice = 261,
     tok_new = 262,
     tok_add = 263,
     tok_resize = 264,
     tok_dynamic_array = 265,
     tok_sum = 266,
     tok_min = 267,
     tok_max = 268,
     tok_avg = 269,
     tok_serialize = 270,
     tok_deserialize = 271,
     tok_view = 272,
     tok_identifier = 273,
     tok_double_literal = 274,
     tok_string_literal = 275,
     tok_integer_literal = 276
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "ssc.y"

    char *identifier;
    double double_literal;
    int integer_literal;
    char *string_literal;
    struct DestructuringList *destructuring_list;



/* Line 214 of yacc.c  */
#line 163 "ssc.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 175 "ssc.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,    24,    22,    32,    23,    33,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      34,    30,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    28,     2,    29,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    13,    16,    19,    22,
      25,    28,    31,    34,    37,    49,    64,    79,    99,   107,
     117,   127,   137,   148,   156,   164,   179,   195,   211,   221,
     228,   230,   234,   236,   238,   240,   242,   244,   252,   260,
     268,   276,   284,   292,   300,   308,   316,   322,   328,   334,
     336,   338,   343,   350,   355,   363,   365,   369,   373,   377,
     381
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    -1,    52,    37,    -1,    53,    37,    -1,
      55,    37,    -1,    38,    37,    -1,    39,    37,    -1,    40,
      37,    -1,    45,    37,    -1,    51,    37,    -1,    41,    37,
      -1,    42,    37,    -1,    43,    37,    -1,     4,    28,    29,
      18,    30,     7,     4,    28,    21,    29,    31,    -1,     4,
      28,    32,    29,    18,    30,     7,     4,    28,    21,    32,
      21,    29,    31,    -1,     4,    28,    29,    18,    30,    18,
      33,     6,    26,    21,    32,    21,    27,    31,    -1,     4,
      28,    32,    29,    18,    30,    18,    33,     6,    26,    21,
      32,    21,    32,    21,    32,    21,    27,    31,    -1,    18,
      28,    21,    29,    30,    19,    31,    -1,    18,    28,    21,
      32,    21,    29,    30,    19,    31,    -1,     4,    28,    29,
      18,    30,    18,    22,    18,    31,    -1,     4,    28,    29,
      18,    30,    18,    23,    18,    31,    -1,     4,    28,    32,
      29,    18,    30,    18,    24,    18,    31,    -1,    18,    33,
       8,    26,    19,    27,    31,    -1,    18,    33,     9,    26,
      21,    27,    31,    -1,    10,    34,     4,    35,    18,    30,
       7,    10,    34,     4,    35,    26,    27,    31,    -1,    10,
      34,     4,    35,    18,    30,     7,    10,    34,     4,    35,
      26,    21,    27,    31,    -1,    18,    30,    18,    33,    17,
      26,    21,    32,    21,    32,    21,    32,    21,    27,    31,
      -1,    18,    28,    21,    32,    21,    29,    30,    19,    31,
      -1,    28,    44,    29,    30,    18,    31,    -1,    18,    -1,
      44,    32,    18,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    18,    33,     8,    26,    56,    27,
      31,    -1,    18,    33,     9,    26,    21,    27,    31,    -1,
      18,    28,    21,    29,    30,    56,    31,    -1,    18,    30,
      15,    26,    18,    27,    31,    -1,    16,    26,    18,    32,
      18,    27,    31,    -1,    18,    30,    11,    26,    18,    27,
      31,    -1,    18,    30,    12,    26,    18,    27,    31,    -1,
      18,    30,    13,    26,    18,    27,    31,    -1,    18,    30,
      14,    26,    18,    27,    31,    -1,     5,    26,    20,    27,
      31,    -1,     5,    26,    18,    27,    31,    -1,     3,    26,
      54,    27,    31,    -1,    18,    -1,    19,    -1,    18,    28,
      21,    29,    -1,    18,    28,    21,    32,    21,    29,    -1,
      18,    30,    56,    31,    -1,    18,    30,    18,    33,    33,
      18,    31,    -1,    54,    -1,    56,    22,    56,    -1,    56,
      23,    56,    -1,    56,    25,    56,    -1,    56,    24,    56,
      -1,    26,    56,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    78,    79,    80,    81,    85,    86,
      95,    96,    97,    98,    99,   103,   105,   109,   113,   117,
     121,   123,   128,   129,   130,   131,   132,   136,   140,   144,
     148,   151,   155,   156,   157,   158,   162,   163,   166,   169,
     170,   171,   172,   183,   184,   188,   189,   190,   191,   192,
     193
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tok_printd", "tok_double", "tok_prints",
  "tok_slice", "tok_new", "tok_add", "tok_resize", "tok_dynamic_array",
  "tok_sum", "tok_min", "tok_max", "tok_avg", "tok_serialize",
  "tok_deserialize", "tok_view", "tok_identifier", "tok_double_literal",
  "tok_string_literal", "tok_integer_literal", "'+'", "'-'", "'*'", "'/'",
  "'('", "')'", "'['", "']'", "'='", "';'", "','", "'.'", "'<'", "'>'",
  "$accept", "root", "array", "array_assign", "array_declaration",
  "array_view", "array_view_assign", "array_destructuring",
  "destructuring_list", "array_operation", "add_operation",
  "resize_operation", "assign_operation", "serialize_operation",
  "deserialize_operation", "statistical_operation", "prints", "printd",
  "term", "assignment", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    43,    45,    42,    47,    40,    41,    91,    93,
      61,    59,    44,    46,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    38,    38,    38,    38,    39,    39,
      39,    39,    39,    39,    39,    40,    40,    41,    42,    43,
      44,    44,    45,    45,    45,    45,    45,    46,    47,    48,
      49,    50,    51,    51,    51,    51,    52,    52,    53,    54,
      54,    54,    54,    55,    55,    56,    56,    56,    56,    56,
      56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    11,    14,    14,    19,     7,     9,
       9,     9,    10,     7,     7,    14,    15,    15,     9,     6,
       1,     3,     1,     1,     1,     1,     1,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     5,     5,     5,     1,
       1,     4,     6,     4,     7,     1,     3,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       2,     2,     2,     2,     2,     2,    32,    33,    34,    35,
      36,     2,     2,     2,     2,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     1,     6,     7,     8,    11,
      12,    13,     9,    10,     3,     4,     5,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,    31,     0,    48,     0,     0,
      47,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,    56,    57,    59,    58,    50,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    18,    39,     0,    42,    43,    44,    45,    40,
       0,    54,    23,    37,    24,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,    22,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    15,     0,     0,    25,     0,     0,    26,    27,     0,
       0,     0,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    13,    14,    34,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    64,    24,
      65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int16 yypact[] =
{
       0,    47,    41,    56,    54,    71,    66,    82,   102,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,     0,    20,     8,     3,    99,    86,
      84,    35,    51,   -64,    48,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,    78,   -64,    80,
      90,    81,    85,    87,    74,    79,    49,    89,    91,    92,
      93,    94,   -21,    44,   -64,    33,    95,    96,    83,    98,
     103,    97,   100,   105,   101,   104,   107,   108,   106,   110,
     109,   111,   115,   116,   119,   -16,    62,    44,    44,    44,
      44,   -64,    53,   117,   121,   -64,    69,   -64,    -5,   112,
     -64,   -64,   113,   114,    57,   118,   122,   123,   124,   125,
     126,   120,   127,   -64,    27,    27,   -64,   -64,   128,    68,
     129,   130,   -64,   133,   136,   -14,     4,   137,   131,   132,
      43,   134,   135,   138,   139,   140,   141,   144,   142,   143,
     145,   146,   -64,   149,   147,   150,   161,   151,   154,   -18,
     157,   -64,   -64,   -64,   162,   -64,   -64,   -64,   -64,   -64,
     148,   -64,   -64,   -64,   -64,   -64,   163,   152,   155,   156,
     159,   167,   153,   158,   160,   168,   164,   -64,   -64,   169,
     173,   165,   171,   184,   -64,   166,   170,   172,   174,   -64,
     178,   175,   179,   -64,   181,   182,   176,   183,   180,   186,
     185,   190,    -7,   194,   187,   188,   189,   193,   191,   196,
     -64,   -64,   195,   197,   -64,   198,   192,   -64,   -64,   204,
     199,   200,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,    21,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   202,   -64,
     -63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      86,   111,   124,     1,     2,     3,   171,    70,   145,   146,
       4,   148,    85,   125,   207,   172,     5,   112,     6,   147,
     208,    52,   149,    53,   114,   115,   116,   117,     7,   119,
      36,    37,    38,    39,    40,    41,    42,    50,    47,    48,
      51,   130,    43,    44,    45,    46,    57,    58,    59,    60,
      61,    89,    90,    62,    48,    87,    88,    89,    90,    66,
      67,    63,    47,    48,    91,    87,    88,    89,    90,    26,
      63,    47,   118,    25,   153,    47,   129,    68,    78,    63,
      69,    79,    27,    63,    87,    88,    89,    90,    28,   113,
      87,    88,    89,    90,    30,   140,    31,    29,   122,    32,
      33,   123,    35,    54,    55,    56,    70,    71,    72,    76,
      73,    77,    74,    94,    75,    80,    95,    81,    82,    83,
      84,    92,    93,    99,    96,   102,   103,   106,    97,   107,
      98,   105,   100,   108,   109,   101,   104,   110,   120,   121,
     144,   128,   126,   127,   150,   138,   137,   131,     0,   132,
     133,   134,   135,   136,   143,   139,   141,   169,   170,   182,
       0,   142,   151,   152,   154,   160,   155,   173,   167,   156,
     157,   158,   159,   161,   162,   166,   163,   164,   165,   168,
     175,   174,   179,   177,   176,   181,   178,   180,   191,   185,
     187,   184,   183,   186,   188,     0,   189,   190,   192,   196,
     198,   193,   199,   200,   194,     0,   195,     0,   201,   202,
     197,   206,   203,   204,   205,   209,   216,     0,   210,   211,
     213,   212,   214,   215,   219,   220,   221,    49,   217,   218,
       0,   222
};

static const yytype_int8 yycheck[] =
{
      63,    17,     7,     3,     4,     5,    24,    28,    22,    23,
      10,     7,    33,    18,    21,    33,    16,    33,    18,    33,
      27,    18,    18,    20,    87,    88,    89,    90,    28,    92,
       9,    10,    11,    12,    13,    14,    15,    29,    18,    19,
      32,   104,    21,    22,    23,    24,    11,    12,    13,    14,
      15,    24,    25,    18,    19,    22,    23,    24,    25,     8,
       9,    26,    18,    19,    31,    22,    23,    24,    25,    28,
      26,    18,    19,    26,    31,    18,    19,    29,    29,    26,
      32,    32,    26,    26,    22,    23,    24,    25,    34,    27,
      22,    23,    24,    25,    28,    27,    30,    26,    29,    33,
      18,    32,     0,     4,    18,    21,    28,    27,    18,    35,
      29,    32,    27,    30,    27,    26,    18,    26,    26,    26,
      26,    26,    26,    18,    21,    18,    18,    18,    31,    18,
      30,    21,    31,    18,    18,    31,    30,    18,    21,    18,
       4,    27,    30,    30,     7,    18,    26,    29,    -1,    27,
      27,    27,    27,    27,    21,    27,    27,     6,     4,     6,
      -1,    31,    31,    31,    30,    21,    31,    10,    18,    31,
      31,    31,    31,    31,    31,    28,    31,    31,    29,    18,
      32,    19,    26,    31,    21,    18,    31,    28,     4,    21,
      21,    31,    34,    29,    21,    -1,    31,    26,    32,    21,
      21,    31,    21,    21,    32,    -1,    32,    -1,    32,    26,
      35,    21,    32,    27,    29,    21,    21,    -1,    31,    31,
      27,    32,    31,    27,    32,    21,    27,    25,    31,    31,
      -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    10,    16,    18,    28,    37,    38,
      39,    40,    41,    42,    43,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    55,    26,    28,    26,    34,    26,
      28,    30,    33,    18,    44,     0,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    18,    19,    54,
      29,    32,    18,    20,     4,    18,    21,    11,    12,    13,
      14,    15,    18,    26,    54,    56,     8,     9,    29,    32,
      28,    27,    18,    29,    27,    27,    35,    32,    29,    32,
      26,    26,    26,    26,    26,    33,    56,    22,    23,    24,
      25,    31,    26,    26,    30,    18,    21,    31,    30,    18,
      31,    31,    18,    18,    30,    21,    18,    18,    18,    18,
      18,    17,    33,    27,    56,    56,    56,    56,    19,    56,
      21,    18,    29,    32,     7,    18,    30,    30,    27,    19,
      56,    29,    27,    27,    27,    27,    27,    26,    18,    27,
      27,    27,    31,    21,     4,    22,    23,    33,     7,    18,
       7,    31,    31,    31,    30,    31,    31,    31,    31,    31,
      21,    31,    31,    31,    31,    29,    28,    18,    18,     6,
       4,    24,    33,    10,    19,    32,    21,    31,    31,    26,
      28,    18,     6,    34,    31,    21,    29,    21,    21,    31,
      26,     4,    32,    31,    32,    32,    21,    35,    21,    21,
      21,    32,    26,    32,    27,    29,    21,    21,    27,    21,
      31,    31,    32,    27,    31,    27,    21,    31,    31,    32,
      21,    27,    31
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 63 "ssc.y"
    {debugBison(1);;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 64 "ssc.y"
    {debugBison(2);;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 65 "ssc.y"
    {debugBison(3);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 66 "ssc.y"
    {debugBison(4);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 67 "ssc.y"
    {debugBison(16);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 68 "ssc.y"
    {debugBison(16);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 69 "ssc.y"
    {debugBison(17);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 70 "ssc.y"
    {debugBison(18);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 71 "ssc.y"
    {debugBison(19);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 72 "ssc.y"
    {debugBison(39);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 73 "ssc.y"
    {debugBison(49);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 74 "ssc.y"
    {debugBison(41);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 78 "ssc.y"
    {debugBison(17); createArray((yyvsp[(4) - (11)].identifier), (yyvsp[(9) - (11)].integer_literal));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 79 "ssc.y"
    {debugBison(17); create2DArray((yyvsp[(5) - (14)].identifier), (yyvsp[(10) - (14)].integer_literal), (yyvsp[(12) - (14)].integer_literal));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 80 "ssc.y"
    {debugBison(300); slice1D((yyvsp[(6) - (14)].identifier), (yyvsp[(4) - (14)].identifier), (yyvsp[(10) - (14)].integer_literal), (yyvsp[(12) - (14)].integer_literal));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 82 "ssc.y"
    {debugBison(300); slice2D((yyvsp[(7) - (19)].identifier), (yyvsp[(5) - (19)].identifier), (yyvsp[(11) - (19)].integer_literal), (yyvsp[(13) - (19)].integer_literal), (yyvsp[(15) - (19)].integer_literal), (yyvsp[(17) - (19)].integer_literal));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 85 "ssc.y"
    {debugBison(18); setArrayElement((yyvsp[(1) - (7)].identifier), (yyvsp[(3) - (7)].integer_literal), (yyvsp[(6) - (7)].double_literal));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 87 "ssc.y"
    {
                    debugBison(22); 
                    if (arrayViewTable.find((yyvsp[(1) - (9)].identifier)) != arrayViewTable.end()) {
                        setArrayViewElement((yyvsp[(1) - (9)].identifier), (yyvsp[(3) - (9)].integer_literal), (yyvsp[(5) - (9)].integer_literal), (yyvsp[(8) - (9)].double_literal));
                    } else {
                        set2DArrayElement((yyvsp[(1) - (9)].identifier), (yyvsp[(3) - (9)].integer_literal), (yyvsp[(5) - (9)].integer_literal), (yyvsp[(8) - (9)].double_literal));
                    }
                ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 95 "ssc.y"
    {debugBison(90); addArrays((yyvsp[(4) - (9)].identifier), (yyvsp[(6) - (9)].identifier), (yyvsp[(8) - (9)].identifier));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 96 "ssc.y"
    {debugBison(90); subtractArrays((yyvsp[(4) - (9)].identifier), (yyvsp[(6) - (9)].identifier), (yyvsp[(8) - (9)].identifier));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 97 "ssc.y"
    {debugBison(90); multiplyArraysToMatrix((yyvsp[(5) - (10)].identifier), (yyvsp[(7) - (10)].identifier), (yyvsp[(9) - (10)].identifier));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 98 "ssc.y"
    {debugBison(23); addToArray((yyvsp[(1) - (7)].identifier), (yyvsp[(5) - (7)].double_literal));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 99 "ssc.y"
    {debugBison(24); resizeArray((yyvsp[(1) - (7)].identifier), (yyvsp[(5) - (7)].integer_literal));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 104 "ssc.y"
    {debugBison(8); createArray((yyvsp[(5) - (14)].identifier), 0);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "ssc.y"
    {debugBison(9); createArray((yyvsp[(5) - (15)].identifier), (yyvsp[(13) - (15)].integer_literal));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 110 "ssc.y"
    {debugBison(30); createArrayView((yyvsp[(1) - (15)].identifier), (yyvsp[(3) - (15)].identifier), (yyvsp[(7) - (15)].integer_literal), (yyvsp[(9) - (15)].integer_literal), (yyvsp[(11) - (15)].integer_literal), (yyvsp[(13) - (15)].integer_literal));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 114 "ssc.y"
    {debugBison(31); setArrayViewElement((yyvsp[(1) - (9)].identifier), (yyvsp[(3) - (9)].integer_literal), (yyvsp[(5) - (9)].integer_literal), (yyvsp[(8) - (9)].double_literal));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 118 "ssc.y"
    {debugBison(40); destructureArray((yyvsp[(5) - (6)].identifier), (yyvsp[(2) - (6)].destructuring_list));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 122 "ssc.y"
    {(yyval.destructuring_list) = createDestructuringList((yyvsp[(1) - (1)].identifier));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 124 "ssc.y"
    {(yyval.destructuring_list) = addToDestructuringList((yyvsp[(1) - (3)].destructuring_list), (yyvsp[(3) - (3)].identifier));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 136 "ssc.y"
    {debugBison(10); addToArray((yyvsp[(1) - (7)].identifier), (yyvsp[(5) - (7)].double_literal));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 140 "ssc.y"
    {debugBison(11); resizeArray((yyvsp[(1) - (7)].identifier), (yyvsp[(5) - (7)].integer_literal));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 144 "ssc.y"
    {debugBison(12); setArrayElement((yyvsp[(1) - (7)].identifier), (yyvsp[(3) - (7)].integer_literal), (yyvsp[(6) - (7)].double_literal));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 148 "ssc.y"
    {debugBison(25); setValueInSymbolTable((yyvsp[(1) - (7)].identifier), serializeArray((yyvsp[(5) - (7)].identifier)));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 151 "ssc.y"
    {debugBison(26); deserializeArray((yyvsp[(3) - (7)].identifier), getStringFromSymbolTable((yyvsp[(5) - (7)].identifier)));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 155 "ssc.y"
    {debugBison(20); setValueInSymbolTable((yyvsp[(1) - (7)].identifier), sumArray((yyvsp[(5) - (7)].identifier)));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 156 "ssc.y"
    {debugBison(21); setValueInSymbolTable((yyvsp[(1) - (7)].identifier), minArray((yyvsp[(5) - (7)].identifier)));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 157 "ssc.y"
    {debugBison(22); setValueInSymbolTable((yyvsp[(1) - (7)].identifier), maxArray((yyvsp[(5) - (7)].identifier)));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 158 "ssc.y"
    {debugBison(23); setValueInSymbolTable((yyvsp[(1) - (7)].identifier), avgArray((yyvsp[(5) - (7)].identifier)));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 162 "ssc.y"
    {debugBison(5); print("%s\n", (yyvsp[(3) - (5)].string_literal)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 163 "ssc.y"
    {debugBison(5); print("%s\n", getStringFromSymbolTable((yyvsp[(3) - (5)].identifier))); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 166 "ssc.y"
    {debugBison(6); print("%lf\n", (yyvsp[(3) - (5)].double_literal)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 169 "ssc.y"
    {debugBison(7); (yyval.double_literal) = getDoubleFromSymbolTable((yyvsp[(1) - (1)].identifier)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 170 "ssc.y"
    {debugBison(8); (yyval.double_literal) = (yyvsp[(1) - (1)].double_literal); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 171 "ssc.y"
    {debugBison(102); (yyval.double_literal) = getArrayElement((yyvsp[(1) - (4)].identifier), (yyvsp[(3) - (4)].integer_literal));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 173 "ssc.y"
    {
            debugBisonStr("Got 2D value or Array View"); 
            if (arrayViewTable.find((yyvsp[(1) - (6)].identifier)) != arrayViewTable.end()) {
                (yyval.double_literal) = getArrayViewElement((yyvsp[(1) - (6)].identifier), (yyvsp[(3) - (6)].integer_literal), (yyvsp[(5) - (6)].integer_literal));
            } else {
                (yyval.double_literal) = get2DArrayElement((yyvsp[(1) - (6)].identifier), (yyvsp[(3) - (6)].integer_literal), (yyvsp[(5) - (6)].integer_literal));
            }
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 183 "ssc.y"
    {debugBison(9); setValueInSymbolTable((yyvsp[(1) - (4)].identifier), (yyvsp[(3) - (4)].double_literal)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 184 "ssc.y"
    {debugBison(9); dotProductArrays((yyvsp[(6) - (7)].identifier), (yyvsp[(3) - (7)].identifier), (yyvsp[(1) - (7)].identifier)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 188 "ssc.y"
    {debugBison(10); (yyval.double_literal)= (yyvsp[(1) - (1)].double_literal);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 189 "ssc.y"
    {debugBison(11); (yyval.double_literal) = performBinaryOperation ((yyvsp[(1) - (3)].double_literal), (yyvsp[(3) - (3)].double_literal), '+');;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 190 "ssc.y"
    {debugBison(12); (yyval.double_literal) = performBinaryOperation ((yyvsp[(1) - (3)].double_literal), (yyvsp[(3) - (3)].double_literal), '-');;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 191 "ssc.y"
    {debugBison(13); (yyval.double_literal) = performBinaryOperation ((yyvsp[(1) - (3)].double_literal), (yyvsp[(3) - (3)].double_literal), '/');;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 192 "ssc.y"
    {debugBison(14); (yyval.double_literal) = performBinaryOperation ((yyvsp[(1) - (3)].double_literal), (yyvsp[(3) - (3)].double_literal), '*');;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 193 "ssc.y"
    {debugBison(15); (yyval.double_literal)= (yyvsp[(2) - (3)].double_literal);;}
    break;



/* Line 1455 of yacc.c  */
#line 1937 "ssc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 197 "ssc.y"


void yyerror(const char *err) {
    fprintf(stderr, "\n%s\n", err);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        FILE *fp = fopen(argv[1], "r");
        yyin = fp; //read from file when its name is provided.
    } 
    if (yyin == NULL) { 
        yyin = stdin; //otherwise read from terminal
    }
    
    //yyparse will call internally yylex
    //It will get a token and insert it into AST
    int parserResult = yyparse();
    
    return EXIT_SUCCESS;
}

