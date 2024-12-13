/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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

#line 93 "ssc.tab.c"

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

#include "ssc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tok_printd = 3,                 /* tok_printd  */
  YYSYMBOL_tok_double = 4,                 /* tok_double  */
  YYSYMBOL_tok_prints = 5,                 /* tok_prints  */
  YYSYMBOL_tok_iterator = 6,               /* tok_iterator  */
  YYSYMBOL_tok_hasNext = 7,                /* tok_hasNext  */
  YYSYMBOL_tok_next = 8,                   /* tok_next  */
  YYSYMBOL_tok_slice = 9,                  /* tok_slice  */
  YYSYMBOL_tok_while = 10,                 /* tok_while  */
  YYSYMBOL_tok_new = 11,                   /* tok_new  */
  YYSYMBOL_tok_add = 12,                   /* tok_add  */
  YYSYMBOL_tok_resize = 13,                /* tok_resize  */
  YYSYMBOL_tok_dynamic_array = 14,         /* tok_dynamic_array  */
  YYSYMBOL_tok_sum = 15,                   /* tok_sum  */
  YYSYMBOL_tok_min = 16,                   /* tok_min  */
  YYSYMBOL_tok_max = 17,                   /* tok_max  */
  YYSYMBOL_tok_avg = 18,                   /* tok_avg  */
  YYSYMBOL_tok_serialize = 19,             /* tok_serialize  */
  YYSYMBOL_tok_deserialize = 20,           /* tok_deserialize  */
  YYSYMBOL_tok_view = 21,                  /* tok_view  */
  YYSYMBOL_tok_identifier = 22,            /* tok_identifier  */
  YYSYMBOL_tok_double_literal = 23,        /* tok_double_literal  */
  YYSYMBOL_tok_string_literal = 24,        /* tok_string_literal  */
  YYSYMBOL_tok_integer_literal = 25,       /* tok_integer_literal  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '-'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* '='  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* '.'  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* '>'  */
  YYSYMBOL_40_ = 40,                       /* '{'  */
  YYSYMBOL_41_ = 41,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_root = 43,                      /* root  */
  YYSYMBOL_array = 44,                     /* array  */
  YYSYMBOL_array_assign = 45,              /* array_assign  */
  YYSYMBOL_array_declaration = 46,         /* array_declaration  */
  YYSYMBOL_array_view = 47,                /* array_view  */
  YYSYMBOL_array_view_assign = 48,         /* array_view_assign  */
  YYSYMBOL_array_destructuring = 49,       /* array_destructuring  */
  YYSYMBOL_destructuring_list = 50,        /* destructuring_list  */
  YYSYMBOL_array_operation = 51,           /* array_operation  */
  YYSYMBOL_add_operation = 52,             /* add_operation  */
  YYSYMBOL_resize_operation = 53,          /* resize_operation  */
  YYSYMBOL_assign_operation = 54,          /* assign_operation  */
  YYSYMBOL_serialize_operation = 55,       /* serialize_operation  */
  YYSYMBOL_deserialize_operation = 56,     /* deserialize_operation  */
  YYSYMBOL_statistical_operation = 57,     /* statistical_operation  */
  YYSYMBOL_prints = 58,                    /* prints  */
  YYSYMBOL_printd = 59,                    /* printd  */
  YYSYMBOL_term = 60,                      /* term  */
  YYSYMBOL_iterator = 61,                  /* iterator  */
  YYSYMBOL_assignment = 62,                /* assignment  */
  YYSYMBOL_expression = 63                 /* expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   262

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  249

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    28,    26,    36,    27,    37,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
      38,    34,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,    41,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    82,    83,    84,    85,    89,
      90,    99,   100,   101,   102,   103,   107,   109,   113,   117,
     121,   125,   127,   132,   133,   134,   135,   136,   140,   144,
     148,   152,   155,   159,   160,   161,   162,   166,   167,   170,
     173,   174,   175,   176,   177,   187,   188,   191,   192,   195,
     196,   197,   198,   199,   200
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tok_printd",
  "tok_double", "tok_prints", "tok_iterator", "tok_hasNext", "tok_next",
  "tok_slice", "tok_while", "tok_new", "tok_add", "tok_resize",
  "tok_dynamic_array", "tok_sum", "tok_min", "tok_max", "tok_avg",
  "tok_serialize", "tok_deserialize", "tok_view", "tok_identifier",
  "tok_double_literal", "tok_string_literal", "tok_integer_literal", "'+'",
  "'-'", "'*'", "'/'", "'('", "')'", "'['", "']'", "'='", "';'", "','",
  "'.'", "'<'", "'>'", "'{'", "'}'", "$accept", "root", "array",
  "array_assign", "array_declaration", "array_view", "array_view_assign",
  "array_destructuring", "destructuring_list", "array_operation",
  "add_operation", "resize_operation", "assign_operation",
  "serialize_operation", "deserialize_operation", "statistical_operation",
  "prints", "printd", "term", "iterator", "assignment", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-70)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    11,    38,    61,    84,    60,    85,    24,    94,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   -70,   -70,   -70,
     -70,   -70,    -1,    -1,    -1,    -1,    -1,    65,   -13,    35,
      95,   114,    97,    96,    32,    -5,   -70,     7,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,    72,   -70,    89,   100,    90,    93,    98,    88,    87,
      91,     9,   101,   102,   103,   104,   105,   107,    75,    -6,
     -70,    45,   108,   109,   110,   118,   111,   120,   112,   115,
     119,   113,   116,   123,   121,   124,   122,   117,   128,   130,
     131,   132,   133,   135,    -3,    68,    -6,    -6,    -6,    -6,
     -70,    14,   134,   136,   -70,    56,   137,   -70,     3,   126,
     -70,   -70,   138,   127,   139,    30,   129,   140,   141,   142,
     143,   144,   145,   147,   156,   -70,    82,    82,   -70,   -70,
     148,    74,   149,   146,   -70,   157,   152,   159,   -15,     4,
     153,   154,   150,   151,    55,   155,   158,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   -70,   172,   -70,
     174,   170,   178,   179,   183,   -27,   176,   177,   -70,   -70,
     -70,   171,   -70,   -70,   -70,   -70,   -70,   -70,   173,   -70,
     -70,   -70,   -70,   -70,   185,   180,   181,   182,   186,   189,
     199,   184,   175,   187,   192,   188,   -70,   -70,   194,   195,
     190,   193,   204,   210,   -70,   191,   196,   197,   198,   -70,
     203,   201,   125,   200,   205,   -70,   207,   211,   202,    63,
     -70,   212,   208,   206,   213,   215,    76,     8,   216,   214,
     217,   209,    -2,   219,   218,   220,   -70,   -70,   222,   221,
     -70,   223,   224,   -70,   -70,   229,   226,   227,   -70
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     2,     2,     2,     2,     2,     2,    33,    34,    35,
      36,    37,     2,     2,     2,     2,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     1,     7,
       8,     9,    12,    13,    14,    10,    11,     3,     4,     5,
       6,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,    32,     0,     0,    49,     0,     0,
      48,    47,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    60,    61,    63,    62,
      51,     0,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    19,
      40,     0,    55,    43,    44,    45,    46,    41,     0,    58,
      24,    38,    25,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    16,     0,     0,
      26,     0,     0,    27,    28,     0,     0,     0,    18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,    53,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   228,   -70,
     -57,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     9,    10,    11,    12,    13,    14,    15,    37,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    70,    25,
      26,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      95,   189,     1,     2,     3,   106,   106,    72,    73,     4,
     190,   161,   162,     5,   137,   164,    51,    52,   123,     6,
      54,     7,   163,    55,    69,   138,   165,   126,   127,   128,
     129,     8,   131,   233,   124,   124,    51,   130,    62,   234,
      74,    27,    86,    75,    69,    87,   144,    63,    64,    65,
      66,    67,    51,   143,    68,    52,    33,    56,    34,    57,
      69,    35,    69,    39,    40,    41,    42,    43,    44,    45,
      28,    96,    97,    98,    99,    46,    47,    48,    49,    50,
     100,    96,    97,    98,    99,   226,    52,    51,    52,   134,
     170,    29,   135,    69,    96,    97,    98,    99,    31,   125,
      96,    97,    98,    99,    76,   155,    38,    76,    76,    77,
      98,    99,    94,   232,    30,    32,    36,    58,    59,    60,
      78,    61,    79,    80,    81,    83,    84,    85,   106,    82,
     112,    88,    89,    90,    91,    92,   105,    93,   101,   102,
     104,   109,   116,   113,   103,   212,   114,   107,   110,   108,
     117,   111,   118,   119,   120,   121,   115,   122,   133,   132,
     139,   141,   145,   160,     0,   167,   220,   136,   140,     0,
     142,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     156,   157,   158,   159,   166,   168,   169,   188,   187,   171,
     178,   192,   185,   172,   193,   173,   174,   175,   176,   177,
     186,   179,   180,   181,   182,   183,   184,   191,   201,   194,
     195,   200,   198,   203,   213,   196,   197,   205,   199,   207,
     208,   206,   204,   210,   202,   209,   211,   214,   218,     0,
     222,   215,   223,   216,   217,   219,   224,   229,   225,   221,
     231,   235,   227,     0,   228,   238,   230,   242,     0,   236,
     239,   241,   237,   240,   246,    53,   243,   247,   244,     0,
     245,     0,   248
};

static const yytype_int16 yycheck[] =
{
      69,    28,     3,     4,     5,     8,     8,    12,    13,    10,
      37,    26,    27,    14,    11,    11,    22,    23,    21,    20,
      33,    22,    37,    36,    30,    22,    22,    96,    97,    98,
      99,    32,   101,    25,    37,    37,    22,    23,     6,    31,
      33,    30,    33,    36,    30,    36,   115,    15,    16,    17,
      18,    19,    22,    23,    22,    23,    32,    22,    34,    24,
      30,    37,    30,    10,    11,    12,    13,    14,    15,    16,
      32,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      35,    26,    27,    28,    29,    22,    23,    22,    23,    33,
      35,    30,    36,    30,    26,    27,    28,    29,    38,    31,
      26,    27,    28,    29,    32,    31,     0,    32,    32,    37,
      28,    29,    37,    37,    30,    30,    22,    22,     4,    22,
      31,    25,    22,    33,    31,    37,    39,    36,     8,    31,
       7,    30,    30,    30,    30,    30,    25,    30,    30,    30,
      22,    22,    25,    22,    34,   202,    22,    35,    35,    34,
      22,    35,    22,    22,    22,    22,    34,    22,    22,    25,
      34,    34,    33,     4,    -1,    11,    41,    30,    30,    -1,
      31,    31,    31,    31,    31,    31,    31,    30,    22,    31,
      31,    35,    25,    31,    31,    35,    35,     4,     9,    34,
      25,    14,    22,    35,    23,    35,    35,    35,    35,    35,
      22,    35,    35,    35,    35,    33,    32,    31,     9,    36,
      25,    22,    30,    38,     4,    35,    35,    25,    32,    25,
      25,    33,    35,    30,    40,    35,    22,    36,    25,    -1,
      25,    35,    25,    36,    36,    34,    25,    31,    36,    39,
      25,    25,    30,    -1,    36,    36,    33,    25,    -1,    35,
      31,    31,    35,    35,    25,    27,    35,    31,    35,    -1,
      36,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    10,    14,    20,    22,    32,    43,
      44,    45,    46,    47,    48,    49,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    61,    62,    30,    32,    30,
      30,    38,    30,    32,    34,    37,    22,    50,     0,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    22,    23,    60,    33,    36,    22,    24,    22,     4,
      22,    25,     6,    15,    16,    17,    18,    19,    22,    30,
      60,    63,    12,    13,    33,    36,    32,    37,    31,    22,
      33,    31,    31,    37,    39,    36,    33,    36,    30,    30,
      30,    30,    30,    30,    37,    63,    26,    27,    28,    29,
      35,    30,    30,    34,    22,    25,     8,    35,    34,    22,
      35,    35,     7,    22,    22,    34,    25,    22,    22,    22,
      22,    22,    22,    21,    37,    31,    63,    63,    63,    63,
      23,    63,    25,    22,    33,    36,    30,    11,    22,    34,
      30,    34,    31,    23,    63,    33,    31,    31,    31,    31,
      31,    31,    30,    22,    31,    31,    31,    35,    25,    31,
       4,    26,    27,    37,    11,    22,    31,    11,    35,    35,
      35,    34,    35,    35,    35,    35,    35,    35,    25,    35,
      35,    35,    35,    33,    32,    22,    22,     9,     4,    28,
      37,    31,    14,    23,    36,    25,    35,    35,    30,    32,
      22,     9,    40,    38,    35,    25,    33,    25,    25,    35,
      30,    22,    62,     4,    36,    35,    36,    36,    25,    34,
      41,    39,    25,    25,    25,    36,    22,    30,    36,    31,
      33,    25,    37,    25,    31,    25,    35,    35,    36,    31,
      35,    31,    25,    35,    35,    36,    25,    31,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    44,    44,    44,    44,    45,
      45,    45,    45,    45,    45,    45,    46,    46,    47,    48,
      49,    50,    50,    51,    51,    51,    51,    51,    52,    53,
      54,    55,    56,    57,    57,    57,    57,    58,    58,    59,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    11,    14,    14,    19,     7,
       9,     9,     9,    10,     7,     7,    14,    15,    15,     9,
       6,     1,     3,     1,     1,     1,     1,     1,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     5,     5,     5,
       1,     1,     4,     5,     6,     7,    11,     4,     7,     1,
       3,     3,     3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* root: %empty  */
#line 67 "ssc.y"
                                {debugBison(1);}
#line 1289 "ssc.tab.c"
    break;

  case 3: /* root: prints root  */
#line 68 "ssc.y"
                                {debugBison(2);}
#line 1295 "ssc.tab.c"
    break;

  case 4: /* root: printd root  */
#line 69 "ssc.y"
                                {debugBison(3);}
#line 1301 "ssc.tab.c"
    break;

  case 5: /* root: iterator root  */
#line 70 "ssc.y"
                                {debugBison(1000);}
#line 1307 "ssc.tab.c"
    break;

  case 6: /* root: assignment root  */
#line 71 "ssc.y"
                                {debugBison(4);}
#line 1313 "ssc.tab.c"
    break;

  case 7: /* root: array root  */
#line 72 "ssc.y"
                                {debugBison(16);}
#line 1319 "ssc.tab.c"
    break;

  case 8: /* root: array_assign root  */
#line 73 "ssc.y"
                                {debugBison(16);}
#line 1325 "ssc.tab.c"
    break;

  case 9: /* root: array_declaration root  */
#line 74 "ssc.y"
                                {debugBison(17);}
#line 1331 "ssc.tab.c"
    break;

  case 10: /* root: array_operation root  */
#line 75 "ssc.y"
                                {debugBison(18);}
#line 1337 "ssc.tab.c"
    break;

  case 11: /* root: statistical_operation root  */
#line 76 "ssc.y"
                                 {debugBison(19);}
#line 1343 "ssc.tab.c"
    break;

  case 12: /* root: array_view root  */
#line 77 "ssc.y"
                                 {debugBison(39);}
#line 1349 "ssc.tab.c"
    break;

  case 13: /* root: array_view_assign root  */
#line 78 "ssc.y"
                                 {debugBison(49);}
#line 1355 "ssc.tab.c"
    break;

  case 14: /* root: array_destructuring root  */
#line 79 "ssc.y"
                               {debugBison(41);}
#line 1361 "ssc.tab.c"
    break;

  case 15: /* array: tok_double '[' ']' tok_identifier '=' tok_new tok_double '[' tok_integer_literal ']' ';'  */
#line 82 "ssc.y"
                                                                                                       {debugBison(17); createArray((yyvsp[-7].identifier), (yyvsp[-2].integer_literal));}
#line 1367 "ssc.tab.c"
    break;

  case 16: /* array: tok_double '[' ',' ']' tok_identifier '=' tok_new tok_double '[' tok_integer_literal ',' tok_integer_literal ']' ';'  */
#line 83 "ssc.y"
                                                                                                                                  {debugBison(17); create2DArray((yyvsp[-9].identifier), (yyvsp[-4].integer_literal), (yyvsp[-2].integer_literal));}
#line 1373 "ssc.tab.c"
    break;

  case 17: /* array: tok_double '[' ']' tok_identifier '=' tok_identifier '.' tok_slice '(' tok_integer_literal ',' tok_integer_literal ')' ';'  */
#line 84 "ssc.y"
                                                                                                                                     {debugBison(300); slice1D((yyvsp[-8].identifier), (yyvsp[-10].identifier), (yyvsp[-4].integer_literal), (yyvsp[-2].integer_literal));}
#line 1379 "ssc.tab.c"
    break;

  case 18: /* array: tok_double '[' ',' ']' tok_identifier '=' tok_identifier '.' tok_slice '(' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ')' ';'  */
#line 86 "ssc.y"
            {debugBison(300); slice2D((yyvsp[-12].identifier), (yyvsp[-14].identifier), (yyvsp[-8].integer_literal), (yyvsp[-6].integer_literal), (yyvsp[-4].integer_literal), (yyvsp[-2].integer_literal));}
#line 1385 "ssc.tab.c"
    break;

  case 19: /* array_assign: tok_identifier '[' tok_integer_literal ']' '=' tok_double_literal ';'  */
#line 89 "ssc.y"
                                                                                        {debugBison(18); setArrayElement((yyvsp[-6].identifier), (yyvsp[-4].integer_literal), (yyvsp[-1].double_literal));}
#line 1391 "ssc.tab.c"
    break;

  case 20: /* array_assign: tok_identifier '[' tok_integer_literal ',' tok_integer_literal ']' '=' tok_double_literal ';'  */
#line 91 "ssc.y"
                {
                    debugBison(22); 
                    if (arrayViewTable.find((yyvsp[-8].identifier)) != arrayViewTable.end()) {
                        setArrayViewElement((yyvsp[-8].identifier), (yyvsp[-6].integer_literal), (yyvsp[-4].integer_literal), (yyvsp[-1].double_literal));
                    } else {
                        set2DArrayElement((yyvsp[-8].identifier), (yyvsp[-6].integer_literal), (yyvsp[-4].integer_literal), (yyvsp[-1].double_literal));
                    }
                }
#line 1404 "ssc.tab.c"
    break;

  case 21: /* array_assign: tok_double '[' ']' tok_identifier '=' tok_identifier '+' tok_identifier ';'  */
#line 99 "ssc.y"
                                                                                              {debugBison(90); addArrays((yyvsp[-5].identifier), (yyvsp[-3].identifier), (yyvsp[-1].identifier));}
#line 1410 "ssc.tab.c"
    break;

  case 22: /* array_assign: tok_double '[' ']' tok_identifier '=' tok_identifier '-' tok_identifier ';'  */
#line 100 "ssc.y"
                                                                                              {debugBison(90); subtractArrays((yyvsp[-5].identifier), (yyvsp[-3].identifier), (yyvsp[-1].identifier));}
#line 1416 "ssc.tab.c"
    break;

  case 23: /* array_assign: tok_double '[' ',' ']' tok_identifier '=' tok_identifier '*' tok_identifier ';'  */
#line 101 "ssc.y"
                                                                                                  {debugBison(90); multiplyArraysToMatrix((yyvsp[-5].identifier), (yyvsp[-3].identifier), (yyvsp[-1].identifier));}
#line 1422 "ssc.tab.c"
    break;

  case 24: /* array_assign: tok_identifier '.' tok_add '(' tok_double_literal ')' ';'  */
#line 102 "ssc.y"
                                                                            {debugBison(23); addToArray((yyvsp[-6].identifier), (yyvsp[-2].double_literal));}
#line 1428 "ssc.tab.c"
    break;

  case 25: /* array_assign: tok_identifier '.' tok_resize '(' tok_integer_literal ')' ';'  */
#line 103 "ssc.y"
                                                                                {debugBison(24); resizeArray((yyvsp[-6].identifier), (yyvsp[-2].integer_literal));}
#line 1434 "ssc.tab.c"
    break;

  case 26: /* array_declaration: tok_dynamic_array '<' tok_double '>' tok_identifier '=' tok_new tok_dynamic_array '<' tok_double '>' '(' ')' ';'  */
#line 108 "ssc.y"
        {debugBison(8); createArray((yyvsp[-9].identifier), 0);}
#line 1440 "ssc.tab.c"
    break;

  case 27: /* array_declaration: tok_dynamic_array '<' tok_double '>' tok_identifier '=' tok_new tok_dynamic_array '<' tok_double '>' '(' tok_integer_literal ')' ';'  */
#line 110 "ssc.y"
        {debugBison(9); createArray((yyvsp[-10].identifier), (yyvsp[-2].integer_literal));}
#line 1446 "ssc.tab.c"
    break;

  case 28: /* array_view: tok_identifier '=' tok_identifier '.' tok_view '(' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ',' tok_integer_literal ')' ';'  */
#line 114 "ssc.y"
    {debugBison(30); createArrayView((yyvsp[-14].identifier), (yyvsp[-12].identifier), (yyvsp[-8].integer_literal), (yyvsp[-6].integer_literal), (yyvsp[-4].integer_literal), (yyvsp[-2].integer_literal));}
#line 1452 "ssc.tab.c"
    break;

  case 29: /* array_view_assign: tok_identifier '[' tok_integer_literal ',' tok_integer_literal ']' '=' tok_double_literal ';'  */
#line 118 "ssc.y"
    {debugBison(31); setArrayViewElement((yyvsp[-8].identifier), (yyvsp[-6].integer_literal), (yyvsp[-4].integer_literal), (yyvsp[-1].double_literal));}
#line 1458 "ssc.tab.c"
    break;

  case 30: /* array_destructuring: '[' destructuring_list ']' '=' tok_identifier ';'  */
#line 122 "ssc.y"
                     {debugBison(40); destructureArray((yyvsp[-1].identifier), (yyvsp[-4].destructuring_list));}
#line 1464 "ssc.tab.c"
    break;

  case 31: /* destructuring_list: tok_identifier  */
#line 126 "ssc.y"
                    {(yyval.destructuring_list) = createDestructuringList((yyvsp[0].identifier));}
#line 1470 "ssc.tab.c"
    break;

  case 32: /* destructuring_list: destructuring_list ',' tok_identifier  */
#line 128 "ssc.y"
                    {(yyval.destructuring_list) = addToDestructuringList((yyvsp[-2].destructuring_list), (yyvsp[0].identifier));}
#line 1476 "ssc.tab.c"
    break;

  case 38: /* add_operation: tok_identifier '.' tok_add '(' expression ')' ';'  */
#line 140 "ssc.y"
                                                      {debugBison(10); addToArray((yyvsp[-6].identifier), (yyvsp[-2].double_literal));}
#line 1482 "ssc.tab.c"
    break;

  case 39: /* resize_operation: tok_identifier '.' tok_resize '(' tok_integer_literal ')' ';'  */
#line 144 "ssc.y"
                                                                  {debugBison(11); resizeArray((yyvsp[-6].identifier), (yyvsp[-2].integer_literal));}
#line 1488 "ssc.tab.c"
    break;

  case 40: /* assign_operation: tok_identifier '[' tok_integer_literal ']' '=' expression ';'  */
#line 148 "ssc.y"
                                                                  {debugBison(12); setArrayElement((yyvsp[-6].identifier), (yyvsp[-4].integer_literal), (yyvsp[-1].double_literal));}
#line 1494 "ssc.tab.c"
    break;

  case 41: /* serialize_operation: tok_identifier '=' tok_serialize '(' tok_identifier ')' ';'  */
#line 152 "ssc.y"
                                                                {debugBison(25); setValueInSymbolTable((yyvsp[-6].identifier), serializeArray((yyvsp[-2].identifier)));}
#line 1500 "ssc.tab.c"
    break;

  case 42: /* deserialize_operation: tok_deserialize '(' tok_identifier ',' tok_identifier ')' ';'  */
#line 155 "ssc.y"
                                                                  {debugBison(26); deserializeArray((yyvsp[-4].identifier), getStringFromSymbolTable((yyvsp[-2].identifier)));}
#line 1506 "ssc.tab.c"
    break;

  case 43: /* statistical_operation: tok_identifier '=' tok_sum '(' tok_identifier ')' ';'  */
#line 159 "ssc.y"
                                                          {debugBison(20); setValueInSymbolTable((yyvsp[-6].identifier), sumArray((yyvsp[-2].identifier)));}
#line 1512 "ssc.tab.c"
    break;

  case 44: /* statistical_operation: tok_identifier '=' tok_min '(' tok_identifier ')' ';'  */
#line 160 "ssc.y"
                                                            {debugBison(21); setValueInSymbolTable((yyvsp[-6].identifier), minArray((yyvsp[-2].identifier)));}
#line 1518 "ssc.tab.c"
    break;

  case 45: /* statistical_operation: tok_identifier '=' tok_max '(' tok_identifier ')' ';'  */
#line 161 "ssc.y"
                                                            {debugBison(22); setValueInSymbolTable((yyvsp[-6].identifier), maxArray((yyvsp[-2].identifier)));}
#line 1524 "ssc.tab.c"
    break;

  case 46: /* statistical_operation: tok_identifier '=' tok_avg '(' tok_identifier ')' ';'  */
#line 162 "ssc.y"
                                                            {debugBison(23); setValueInSymbolTable((yyvsp[-6].identifier), avgArray((yyvsp[-2].identifier)));}
#line 1530 "ssc.tab.c"
    break;

  case 47: /* prints: tok_prints '(' tok_string_literal ')' ';'  */
#line 166 "ssc.y"
                                                    {debugBison(5); print("%s\n", (yyvsp[-2].string_literal)); }
#line 1536 "ssc.tab.c"
    break;

  case 48: /* prints: tok_prints '(' tok_identifier ')' ';'  */
#line 167 "ssc.y"
                                              {debugBison(5); print("%s\n", getStringFromSymbolTable((yyvsp[-2].identifier))); }
#line 1542 "ssc.tab.c"
    break;

  case 49: /* printd: tok_printd '(' term ')' ';'  */
#line 170 "ssc.y"
                                        {debugBison(6); print("%lf\n", (yyvsp[-2].double_literal)); }
#line 1548 "ssc.tab.c"
    break;

  case 50: /* term: tok_identifier  */
#line 173 "ssc.y"
                                {debugBison(7); (yyval.double_literal) = getDoubleFromSymbolTable((yyvsp[0].identifier)); }
#line 1554 "ssc.tab.c"
    break;

  case 51: /* term: tok_double_literal  */
#line 174 "ssc.y"
                                {debugBison(8); (yyval.double_literal) = (yyvsp[0].double_literal); }
#line 1560 "ssc.tab.c"
    break;

  case 52: /* term: tok_identifier '[' tok_integer_literal ']'  */
#line 175 "ssc.y"
                                                 {debugBison(102); (yyval.double_literal) = getArrayElement((yyvsp[-3].identifier), (yyvsp[-1].integer_literal));}
#line 1566 "ssc.tab.c"
    break;

  case 53: /* term: tok_identifier '.' tok_next '(' ')'  */
#line 176 "ssc.y"
                                          {debugBison(1002); (yyval.double_literal) = next((yyvsp[-4].identifier));}
#line 1572 "ssc.tab.c"
    break;

  case 54: /* term: tok_identifier '[' tok_integer_literal ',' tok_integer_literal ']'  */
#line 178 "ssc.y"
        {
            debugBisonStr("Got 2D value or Array View"); 
            if (arrayViewTable.find((yyvsp[-5].identifier)) != arrayViewTable.end()) {
                (yyval.double_literal) = getArrayViewElement((yyvsp[-5].identifier), (yyvsp[-3].integer_literal), (yyvsp[-1].integer_literal));
            } else {
                (yyval.double_literal) = get2DArrayElement((yyvsp[-5].identifier), (yyvsp[-3].integer_literal), (yyvsp[-1].integer_literal));
            }
        }
#line 1585 "ssc.tab.c"
    break;

  case 55: /* iterator: tok_identifier '=' tok_iterator '(' tok_identifier ')' ';'  */
#line 187 "ssc.y"
                                                                      {debugBison(1001); createIterator((yyvsp[-6].identifier), (yyvsp[-2].identifier));}
#line 1591 "ssc.tab.c"
    break;

  case 56: /* iterator: tok_while '(' tok_identifier '.' tok_hasNext '(' ')' ')' '{' assignment '}'  */
#line 188 "ssc.y"
                                                                                      {debugBison(1003); hasNext((yyvsp[-8].identifier));}
#line 1597 "ssc.tab.c"
    break;

  case 57: /* assignment: tok_identifier '=' expression ';'  */
#line 191 "ssc.y"
                                                {debugBison(9); setValueInSymbolTable((yyvsp[-3].identifier), (yyvsp[-1].double_literal)); }
#line 1603 "ssc.tab.c"
    break;

  case 58: /* assignment: tok_identifier '=' tok_identifier '.' '.' tok_identifier ';'  */
#line 192 "ssc.y"
                                                                           {debugBison(9); dotProductArrays((yyvsp[-1].identifier), (yyvsp[-4].identifier), (yyvsp[-6].identifier)); }
#line 1609 "ssc.tab.c"
    break;

  case 59: /* expression: term  */
#line 195 "ssc.y"
                                {debugBison(10); (yyval.double_literal)= (yyvsp[0].double_literal);}
#line 1615 "ssc.tab.c"
    break;

  case 60: /* expression: expression '+' expression  */
#line 196 "ssc.y"
                                        {debugBison(11); (yyval.double_literal) = performBinaryOperation ((yyvsp[-2].double_literal), (yyvsp[0].double_literal), '+');}
#line 1621 "ssc.tab.c"
    break;

  case 61: /* expression: expression '-' expression  */
#line 197 "ssc.y"
                                        {debugBison(12); (yyval.double_literal) = performBinaryOperation ((yyvsp[-2].double_literal), (yyvsp[0].double_literal), '-');}
#line 1627 "ssc.tab.c"
    break;

  case 62: /* expression: expression '/' expression  */
#line 198 "ssc.y"
                                        {debugBison(13); (yyval.double_literal) = performBinaryOperation ((yyvsp[-2].double_literal), (yyvsp[0].double_literal), '/');}
#line 1633 "ssc.tab.c"
    break;

  case 63: /* expression: expression '*' expression  */
#line 199 "ssc.y"
                                        {debugBison(14); (yyval.double_literal) = performBinaryOperation ((yyvsp[-2].double_literal), (yyvsp[0].double_literal), '*');}
#line 1639 "ssc.tab.c"
    break;

  case 64: /* expression: '(' expression ')'  */
#line 200 "ssc.y"
                                    {debugBison(15); (yyval.double_literal)= (yyvsp[-1].double_literal);}
#line 1645 "ssc.tab.c"
    break;


#line 1649 "ssc.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 204 "ssc.y"


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
