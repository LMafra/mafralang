/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "mafralang.y"

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "includes/ast.h"
  #include "includes/symbolTable.h"

  struct ast_node* parserTree = NULL;


  int yylex();
  extern int yylex_destroy(void);
  extern FILE *yyin;
  extern int line_number;
  extern int lex_error;
  
  int syntax_error = 0;  
  void yyerror(const char* msg) {
    fprintf(stderr, "\n%s -- linha: %d\n", msg, line_number);
    syntax_error++;
  }


#line 95 "mafralang.tab.c"

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

#include "mafralang.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_EMPTY = 4,                      /* EMPTY  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_INTEGER = 7,                    /* INTEGER  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_FORALL = 11,                    /* FORALL  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_WRITELN = 15,                   /* WRITELN  */
  YYSYMBOL_IS_SET = 16,                    /* IS_SET  */
  YYSYMBOL_REMOVE = 17,                    /* REMOVE  */
  YYSYMBOL_ADD = 18,                       /* ADD  */
  YYSYMBOL_IN = 19,                        /* IN  */
  YYSYMBOL_STR = 20,                       /* STR  */
  YYSYMBOL_EXISTS = 21,                    /* EXISTS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 22,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 23,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 24,          /* LEFT_PARENTHESES  */
  YYSYMBOL_RIGHT_PARENTHESES = 25,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_QUOTES = 26,                    /* QUOTES  */
  YYSYMBOL_SEMICOLON = 27,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_NEGATE = 29,                    /* NEGATE  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_OR = 31,                        /* OR  */
  YYSYMBOL_ADD_OP = 32,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 33,                    /* SUB_OP  */
  YYSYMBOL_DIVIDE = 34,                    /* DIVIDE  */
  YYSYMBOL_MULT = 35,                      /* MULT  */
  YYSYMBOL_ASSIGN = 36,                    /* ASSIGN  */
  YYSYMBOL_CLT = 37,                       /* CLT  */
  YYSYMBOL_CLE = 38,                       /* CLE  */
  YYSYMBOL_CEQ = 39,                       /* CEQ  */
  YYSYMBOL_CGE = 40,                       /* CGE  */
  YYSYMBOL_CGT = 41,                       /* CGT  */
  YYSYMBOL_CNE = 42,                       /* CNE  */
  YYSYMBOL_THEN = 43,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_declarations = 46,              /* declarations  */
  YYSYMBOL_declaration = 47,               /* declaration  */
  YYSYMBOL_var_declaration = 48,           /* var_declaration  */
  YYSYMBOL_func_declaration = 49,          /* func_declaration  */
  YYSYMBOL_paramaters = 50,                /* paramaters  */
  YYSYMBOL_paramater = 51,                 /* paramater  */
  YYSYMBOL_block_struct = 52,              /* block_struct  */
  YYSYMBOL_compound_statement = 53,        /* compound_statement  */
  YYSYMBOL_statement_list = 54,            /* statement_list  */
  YYSYMBOL_block_statement = 55,           /* block_statement  */
  YYSYMBOL_function_call = 56,             /* function_call  */
  YYSYMBOL_input_statement = 57,           /* input_statement  */
  YYSYMBOL_output_statement = 58,          /* output_statement  */
  YYSYMBOL_return_statement = 59,          /* return_statement  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_expression_statement = 61,      /* expression_statement  */
  YYSYMBOL_conditional_statement = 62,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 63,       /* iteration_statement  */
  YYSYMBOL_set_statement = 64,             /* set_statement  */
  YYSYMBOL_is_set_statement = 65,          /* is_set_statement  */
  YYSYMBOL_remove_statement = 66,          /* remove_statement  */
  YYSYMBOL_add_statement = 67,             /* add_statement  */
  YYSYMBOL_exists_statement = 68,          /* exists_statement  */
  YYSYMBOL_set_expression = 69,            /* set_expression  */
  YYSYMBOL_expression = 70,                /* expression  */
  YYSYMBOL_function_expression = 71,       /* function_expression  */
  YYSYMBOL_local_parameters = 72,          /* local_parameters  */
  YYSYMBOL_local_parameter = 73,           /* local_parameter  */
  YYSYMBOL_operation = 74,                 /* operation  */
  YYSYMBOL_arithmetic_operation = 75,      /* arithmetic_operation  */
  YYSYMBOL_logical_operation = 76,         /* logical_operation  */
  YYSYMBOL_relational_operation = 77,      /* relational_operation  */
  YYSYMBOL_variable = 78,                  /* variable  */
  YYSYMBOL_string = 79,                    /* string  */
  YYSYMBOL_constant = 80                   /* constant  */
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  392

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    68,    71,    75,    76,    80,    87,    95,
      98,   101,   105,   112,   113,   117,   123,   126,   130,   131,
     132,   133,   134,   135,   136,   140,   146,   152,   155,   161,
     164,   170,   171,   172,   176,   182,   185,   192,   197,   203,
     204,   205,   206,   210,   216,   222,   228,   234,   240,   243,
     246,   250,   251,   255,   258,   261,   265,   272,   273,   279,
     280,   283,   286,   289,   295,   296,   299,   302,   308,   309,
     312,   315,   318,   321,   324,   330,   331,   334,   340,   346,
     349,   352
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "EMPTY", "TYPE",
  "FLOAT", "INTEGER", "RETURN", "IF", "FOR", "FORALL", "ELSE", "READ",
  "WRITE", "WRITELN", "IS_SET", "REMOVE", "ADD", "IN", "STR", "EXISTS",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "LEFT_PARENTHESES",
  "RIGHT_PARENTHESES", "QUOTES", "SEMICOLON", "COMMA", "NEGATE", "AND",
  "OR", "ADD_OP", "SUB_OP", "DIVIDE", "MULT", "ASSIGN", "CLT", "CLE",
  "CEQ", "CGE", "CGT", "CNE", "THEN", "$accept", "program", "declarations",
  "declaration", "var_declaration", "func_declaration", "paramaters",
  "paramater", "block_struct", "compound_statement", "statement_list",
  "block_statement", "function_call", "input_statement",
  "output_statement", "return_statement", "statement",
  "expression_statement", "conditional_statement", "iteration_statement",
  "set_statement", "is_set_statement", "remove_statement", "add_statement",
  "exists_statement", "set_expression", "expression",
  "function_expression", "local_parameters", "local_parameter",
  "operation", "arithmetic_operation", "logical_operation",
  "relational_operation", "variable", "string", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
#endif

#define YYPACT_NINF (-236)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    10,    19,    12,    15,    90,   113,    44,  -236,   244,
       5,   254,    53,   121,   176,   192,    45,    70,  2465,   280,
     206,  2733,  3020,    81,  3036,  3052,   537,    67,    96,   110,
     135,   142,   167,   169,   178,   197,   218,   240,    21,  1736,
    1763,  1790,    13,   235,   252,  1817,  1844,  1871,  1898,  1925,
     202,   260,   296,   318,   368,   391,   420,   448,   660,   711,
     895,  3068,  3084,    61,   269,    28,   477,   586,   591,    28,
      56,   182,    93,    93,    93,   303,   182,   182,   182,   285,
     289,  3132,  1155,  3148,   290,  1952,  1979,  2006,  2033,  2060,
    2087,   229,    21,    21,    21,    21,    21,    21,   229,   405,
     405,   405,   405,   405,   405,   236,   273,   326,   330,  2114,
     332,   633,   293,    50,   305,   307,   331,   336,   338,   343,
     349,  3100,   689,  3419,  3428,  3437,  3446,  3455,  3464,   691,
    3365,  3374,  3383,  3392,  3401,  3410,   704,   384,   364,  1143,
      56,  2141,    28,   373,   377,   393,   706,   732,   734,   741,
     342,  2168,   594,  1032,  1244,   780,  2195,   347,  2141,    28,
    2222,   360,  2141,  2249,  3164,  3180,  3196,   240,  3212,  2276,
    2752,  2770,  2788,  2806,   403,   408,   409,   436,   240,   399,
     401,   429,   449,   468,   473,   503,   507,   508,   162,   382,
    1145,  2824,  2842,  1096,  1199,  2468,  2492,   465,   488,   499,
     500,   240,   452,    60,    73,    84,    86,    87,    88,   128,
     143,   149,   550,    98,  2516,  2540,   428,   472,   509,   513,
     240,   520,  3116,   496,   523,   548,   760,   526,   535,   541,
    2465,  1271,   782,   549,   553,  1304,  1331,  1358,  1385,  1412,
     784,   787,  2465,  2303,  2330,   570,    61,   571,   182,   182,
     182,   596,  2896,  2914,  2932,  2950,   240,  1270,  2968,  2986,
     399,   399,   399,   399,   399,   399,   496,   564,   564,   564,
     564,   564,   564,    61,   584,   182,   182,   182,   598,  2612,
    2629,  2646,  2663,   240,   763,  2680,  2697,   452,   452,   452,
     452,   452,   452,   523,   639,   639,   639,   639,   639,   639,
     604,  2860,   514,  2564,   144,   608,    28,   796,    28,    56,
     182,  2357,  1439,  1466,  1493,  1520,  1547,  2384,  3228,   532,
     615,   622,   629,   631,  2878,   641,  3301,  3312,  3323,  3334,
    3345,  3356,   547,  1174,  3246,  3257,  3268,  3279,  3290,   561,
     674,   696,   712,   726,  2588,   670,   880,   983,   991,  1038,
    1065,  1084,   146,   638,   695,   722,   806,   823,   844,   740,
    1574,   563,  1601,   567,   799,   758,  1628,  2411,   601,   603,
     611,   616,   630,  3004,   148,   191,   195,   196,   199,  2714,
     766,  1143,    56,  1143,  1655,  2438,   801,  1682,    28,   672,
    1143,  1709
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -236,  -236,  -236,   800,     0,  -236,  -236,   768,    -1,     2,
    -187,   -14,   -17,  -118,   -97,   -69,   -56,   -52,   -46,   -31,
      -4,   723,   815,   833,   918,   -70,    11,   936,  -235,   650,
     271,    33,   556,   671,   174,  -162,   414
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    39,     6,    13,    14,   152,   153,
      40,   154,   203,    43,    44,    45,    46,    47,    48,    49,
     204,    51,    52,    53,    54,   112,   113,    56,   106,   107,
      57,    58,    59,    60,    61,    80,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    42,     1,     5,    41,   245,   118,   119,   120,    66,
      12,   319,    -2,     7,    50,    -4,   251,     1,    19,     8,
      -4,   233,    67,    42,    81,   164,    85,   165,   166,    55,
     -11,   170,   171,   -11,   172,   173,    50,    68,   339,   278,
      86,   -52,   234,   311,   174,   175,   176,   167,   180,   177,
      38,    55,   180,    66,   178,   317,    15,   179,   300,    21,
      22,   181,    24,    25,   105,   181,    67,    18,    10,   142,
     235,    11,    33,    34,    35,    12,   108,    36,   224,   -52,
     110,   111,    37,   236,    64,    38,   -55,   237,   -52,   -55,
      -5,    69,   -51,   238,   325,    -5,   216,   217,   188,   218,
     219,   -51,   188,   -39,   211,   -40,   -41,   -42,   239,   211,
     211,   211,   -39,    -6,   -40,   -41,   -42,   -64,    -6,   220,
      70,   345,   232,    66,    42,   180,   -64,   244,   291,   292,
     -64,   -64,   -64,   -64,    71,   240,    67,    50,   181,   231,
     156,    42,   180,   243,   244,    42,    16,   -50,   244,    17,
     241,   155,    55,   157,    50,   181,   -50,   160,    50,    72,
     243,   163,   -48,   -49,   243,   -58,    73,   -25,   -57,    55,
     161,   -48,   -49,    55,   -58,   188,   -25,   -57,   321,   322,
     323,   287,   288,   289,   290,   193,   194,   -57,   195,   196,
     -57,    74,   188,    75,   260,   261,   262,   263,   197,   198,
     199,   -10,    76,   200,   -10,   341,   342,   343,   201,    66,
     -43,   202,    83,    42,   -44,   -45,    41,   -12,   -46,   -43,
     -12,    77,    67,   -44,   -45,    42,    50,   -46,    41,    89,
     -51,    -9,   222,    22,    -9,    24,    25,   307,    50,   191,
     365,    55,    78,   191,    -3,   214,   114,   115,   116,    -3,
     214,   214,   214,    55,    -7,    37,   188,   211,    38,    -7,
      79,   -56,    87,   233,   -56,   233,    83,    83,    83,    83,
      83,    83,   233,    83,    83,    83,    83,    83,    83,    88,
      -8,   211,   211,   211,   234,    -8,   234,   -39,   -39,   180,
     -15,   180,    66,   234,    42,   -15,   169,    85,   136,   188,
      42,   137,   181,    85,   181,    67,   117,    50,   211,   211,
     211,   -78,   235,    50,   235,   121,   191,   361,   141,   363,
     364,   235,    55,   -40,   -40,   236,   211,   236,    55,   237,
     143,   237,   144,   191,   236,   238,   187,   238,   237,   188,
     187,   188,   210,   211,   238,   -41,   -41,   210,   210,   210,
     239,   -54,   239,   258,   -54,   138,   145,   139,   223,   239,
     223,   146,   122,   147,   232,    66,   232,   -53,   148,   129,
     -53,   180,   -47,   232,   149,   223,   285,   240,    67,   240,
     385,   231,   387,   231,   181,   162,   240,   105,   223,   391,
     231,   151,   241,   386,   241,   -42,   -42,   191,   214,   389,
     -26,   241,   252,   253,   -27,   254,   255,   -59,    81,   164,
     -59,   165,   166,   187,   -59,   -59,   -59,   -59,    90,    91,
     -28,   188,   214,   214,   214,   256,   -52,   247,   179,   -52,
     187,   167,   248,   249,   258,   258,   258,   258,   258,   258,
     191,   258,   258,   258,   258,   258,   258,   -50,   -50,   214,
     214,   214,   168,   -77,   -51,   279,   280,   -51,   281,   282,
     250,   285,   285,   285,   285,   285,   285,   214,   285,   285,
     285,   285,   285,   285,   -39,   -48,   -48,   -39,   283,   192,
     191,   202,   191,   192,   214,   215,   221,   221,   221,   274,
     215,   215,   215,   -40,   302,   304,   -40,   -81,   -41,   301,
     171,   -41,   172,   173,   -52,   -52,   168,   168,   168,   168,
     168,   168,   275,   168,   168,   168,   168,   168,   168,   210,
     210,   210,   178,   276,   277,   179,   303,   194,   -42,   195,
     196,   -42,   -50,   -48,   -80,   -50,   -48,   332,   -79,   -49,
      21,    22,   -49,    24,    25,   -75,   210,   210,   210,   201,
     308,   305,   202,    33,    34,    35,   192,   368,    36,   309,
     137,    65,   191,    37,   352,   310,    38,   252,   253,   -59,
     254,   255,   -58,   192,   320,   -58,   313,   187,   -59,   187,
     314,   210,   -59,   -59,   -59,   -59,   374,   340,   380,   137,
     256,   223,   381,   259,    82,   223,   318,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   158,   -35,   -35,   -35,
     -35,   -35,   -35,   -51,   -51,   -35,   286,   -35,   109,    91,
     -35,   189,   324,   -35,   344,   189,   -25,   212,   -43,   -25,
     359,   -43,   212,   212,   212,   360,   -44,   192,   215,   -44,
     369,   -45,   279,   280,   -45,   281,   282,   370,   123,   124,
     125,   126,   127,   128,   371,   -46,   372,   -69,   -46,   187,
     140,    91,   215,   215,   215,   283,   -69,   373,   -69,   -69,
     -69,   -69,   -69,   -69,   259,   259,   259,   259,   259,   259,
     192,   259,   259,   259,   259,   259,   259,   -57,   -57,   215,
     215,   215,    92,    93,    94,    95,   379,   390,   189,   375,
     223,   286,   286,   286,   286,   286,   286,   215,   286,   286,
     286,   286,   286,   286,   -70,   189,   -49,   -49,   -58,   -58,
     192,   376,   192,   -70,   215,   -70,   -70,   -70,   -70,   -70,
     -70,   -25,   -25,   -43,   -43,   257,   190,   377,   -59,   -59,
     190,   -71,   213,   -59,   -59,   -59,   -59,   213,   213,   213,
     -71,   378,   -71,   -71,   -71,   -71,   -71,   -71,   284,   -44,
     -44,   -45,   -45,    21,    22,   -76,    24,    25,   -46,   -46,
     130,   131,   132,   133,   134,   135,    33,    34,    35,   189,
     212,    36,   -65,   383,   306,    20,    37,   150,   182,    38,
       0,   -65,   182,   384,   205,   -65,   -65,   -65,   -65,   205,
     205,   205,   192,     9,   212,   212,   212,   159,    91,   312,
     -52,   315,   -51,   190,   316,    91,   326,   327,   328,   329,
     330,   331,   189,   362,    91,   -72,   382,    91,   388,    91,
     190,   212,   212,   212,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -73,   346,   347,   348,   349,   350,   351,   212,
     190,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,   189,   -74,   189,   182,   212,     0,     0,     0,
       0,     0,   -74,   213,   -74,   -74,   -74,   -74,   -74,   -74,
     183,     0,   182,     0,   183,     0,   206,     0,     0,     0,
       0,   206,   206,   206,   190,   213,     0,     0,   184,   -60,
       0,     0,   184,     0,   207,     0,     0,     0,   -60,   207,
     207,   207,   -60,   -60,   -60,   -60,     0,     0,     0,   213,
     213,   213,   -64,   -64,     0,    96,    97,   -64,   -64,   -64,
     -64,   190,   190,   190,   190,   190,   190,   190,   333,   334,
     335,   336,   337,   338,   189,     0,   213,   213,   213,     0,
       0,     0,     0,     0,     0,     0,     0,   183,   213,   213,
     213,   213,   213,   213,   213,   353,   354,   355,   356,   357,
     358,   205,   205,   205,   183,   184,     0,   190,     0,   190,
       0,   213,     0,   185,     0,     0,     0,   185,     0,   208,
       0,     0,   184,     0,   208,   208,   208,     0,   205,   205,
     205,   186,   -61,     0,     0,   186,     0,   209,     0,     0,
     -62,   -61,   209,   209,   209,   -61,   -61,   -61,   -61,   -62,
       0,     0,     0,   -62,   -62,   -62,   -62,     0,     0,   182,
       0,   182,     0,   205,     0,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,     0,     0,   -13,     0,   -13,     0,   -63,   -13,   190,
     185,   -13,     0,   206,   206,   206,   -63,     0,     0,     0,
     -63,   -63,   -63,   -63,     0,     0,     0,   185,   186,     0,
       0,   207,   207,   207,   -66,     0,     0,     0,     0,     0,
     206,   206,   206,   -66,     0,   186,     0,   -66,   -66,   -66,
     -66,     0,     0,   -67,     0,     0,     0,     0,   207,   207,
     207,   182,   -67,     0,     0,   -77,   -67,   -67,   -67,   -67,
     273,   183,     0,   183,   -77,   206,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   184,
       0,   184,     0,   207,     0,     0,    21,    22,   225,    24,
      25,   226,   227,   228,   229,     0,    30,    31,    32,    33,
      34,    35,     0,     0,    36,   230,   208,   208,   208,    37,
     -64,     0,    38,   -64,     0,   264,   265,   -64,   -64,   -64,
     -64,     0,   -65,   -65,   209,   209,   209,   -65,   -65,   -65,
     -65,     0,     0,   208,   208,   208,     0,     0,     0,   -69,
       0,     0,   -69,   183,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   209,   209,   209,     0,     0,     0,     0,   -81,     0,
       0,   184,     0,     0,   185,     0,   185,   -81,   208,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   186,     0,   186,     0,   209,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,     0,     0,   -14,     0,   -14,     0,     0,
     -14,     0,     0,   -14,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
       0,     0,   -18,     0,   -18,   -65,     0,   -18,   -65,     0,
     -18,     0,   -65,   -65,   -65,   -65,   185,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   186,   -21,     0,   -21,     0,     0,
     -21,     0,     0,   -21,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
       0,     0,   -20,     0,   -20,     0,     0,   -20,     0,     0,
     -20,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
       0,   -31,     0,     0,   -31,     0,     0,   -31,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,     0,
       0,   -32,     0,     0,   -32,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,     0,   -33,     0,     0,   -33,     0,
       0,   -33,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,   -24,     0,     0,   -24,     0,     0,   -24,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,
       0,     0,   -22,     0,     0,   -22,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,     0,     0,   -23,
       0,     0,   -23,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,     0,   -19,     0,     0,   -19,     0,     0,   -19,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
     -34,     0,     0,   -34,     0,     0,   -34,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,    -7,     0,     0,
      -7,     0,     0,    -7,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,   -30,     0,     0,   -30,     0,     0,
     -30,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,   -15,
       0,   -15,     0,     0,   -15,     0,     0,   -15,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,     0,
       0,   -29,     0,     0,   -29,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,   -38,     0,   -38,     0,     0,   -38,     0,
       0,   -38,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,     0,     0,   -37,     0,     0,   -37,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   -18,   -18,     0,     0,   -18,     0,   -18,
       0,     0,   -18,     0,     0,   -18,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,    31,    32,    33,
      34,    35,     0,     0,    36,     0,    84,     0,     0,    37,
       0,     0,    38,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,     0,
       0,   -17,     0,   -17,     0,     0,   -17,     0,     0,   -17,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,
     -21,     0,     0,   -21,     0,     0,   -21,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,   -20,   -20,     0,     0,   -20,     0,   -20,     0,     0,
     -20,     0,     0,   -20,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,     0,   -31,     0,   -31,     0,     0,   -31,     0,     0,
     -31,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
       0,   -32,     0,     0,   -32,     0,     0,   -32,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,
       0,   -33,     0,     0,   -33,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,     0,     0,   -16,     0,   -16,     0,     0,   -16,     0,
       0,   -16,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,   -24,     0,     0,   -24,     0,     0,   -24,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,
       0,     0,   -22,     0,     0,   -22,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,     0,     0,   -23,
       0,     0,   -23,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,     0,   -19,     0,     0,   -19,     0,     0,   -19,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
     -34,     0,     0,   -34,     0,     0,   -34,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,     0,   -30,     0,     0,
     -30,     0,     0,   -30,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,    30,    31,    32,    33,    34,    35,
       0,     0,    36,   242,     0,     0,     0,    37,     0,     0,
      38,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
       0,   -29,     0,     0,   -29,     0,     0,   -29,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,     0,
       0,   -38,     0,     0,   -38,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   -36,     0,   -36,     0,     0,   -36,     0,
       0,   -36,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,     0,     0,   -37,     0,     0,   -37,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,    -7,
       0,     0,    -7,     0,     0,    -7,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,   -13,     0,   -13,     0,     0,   -13,
       0,     0,   -13,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,     0,
       0,   -14,     0,   -14,     0,     0,   -14,     0,     0,   -14,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,    31,    32,    33,    34,    35,     0,     0,    36,     0,
     366,     0,     0,    37,     0,     0,    38,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    36,     0,   367,     0,     0,
      37,     0,     0,    38,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,     0,   -15,     0,   -15,     0,     0,   -15,     0,     0,
     -15,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,   -35,     0,     0,   -35,     0,     0,   -35,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,     0,     0,    36,   -80,     0,     0,
       0,    37,     0,     0,    38,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -68,     0,     0,     0,     0,
       0,     0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   293,   294,   295,   296,   297,   298,   299,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -77,     0,     0,     0,     0,     0,     0,
       0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,     0,     0,
       0,     0,     0,     0,     0,     0,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,     0,     0,     0,     0,     0,     0,     0,     0,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -81,   -77,
     -77,   -77,   -77,   -77,   -77,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -80,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -79,   -80,   -80,   -80,   -80,   -80,   -80,     0,
       0,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -68,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -75,   294,   295,   296,
     297,   298,   299,     0,     0,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -76,   -75,   -75,   -75,   -75,   -75,   -75,
       0,     0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,    63,     0,     0,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   246,   -77,     0,     0,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -81,     0,     0,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -80,     0,     0,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -79,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -68,
       0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     266,   267,   268,   269,   270,   271,   272,   -75,     0,     0,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -77,     0,     0,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -76,     0,     0,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -77,     0,     0,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -81,
       0,     0,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -80,     0,     0,
     -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -79,     0,     0,   -79,     0,
     -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -68,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   267,   268,   269,   270,   271,
     272,   -75,     0,     0,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -76,
       0,     0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -81,   -81,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,    98,    99,   100,   101,   102,   103,
     104,   -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,     0,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -77,   -77,   -77,   -77,   -77,   -68,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,     0,    99,   100,   101,   102,   103,
     104,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -75,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -76,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,   -76,
     -76,   -70,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -72,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -73,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,   -74,     0,     0,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -60,     0,     0,   -60,
       0,     0,     0,   -60,   -60,   -60,   -60,   -61,     0,     0,
     -61,     0,     0,     0,   -61,   -61,   -61,   -61,   -62,     0,
       0,   -62,     0,     0,     0,   -62,   -62,   -62,   -62,   -63,
       0,     0,   -63,     0,     0,     0,   -63,   -63,   -63,   -63,
     -66,     0,     0,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -67,     0,     0,   -67,     0,     0,     0,   -67,   -67,
     -67,   -67,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -72,
     -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -74,     0,
     -74,   -74,   -74,   -74,   -74,   -74,   -60,   -60,     0,     0,
       0,   -60,   -60,   -60,   -60,   -61,   -61,     0,     0,     0,
     -61,   -61,   -61,   -61,   -62,   -62,     0,     0,     0,   -62,
     -62,   -62,   -62,   -63,   -63,     0,     0,     0,   -63,   -63,
     -63,   -63,   -66,   -66,     0,     0,     0,   -66,   -66,   -66,
     -66,   -67,   -67,     0,     0,     0,   -67,   -67,   -67,   -67
};

static const yytype_int16 yycheck[] =
{
       0,    18,     5,     3,    18,   167,    76,    77,    78,    26,
       5,   246,     0,     3,    18,     0,   178,     5,    16,     0,
       5,   139,    26,    40,     3,     4,    40,     6,     7,    18,
      25,     3,     4,    28,     6,     7,    40,    26,   273,   201,
      27,    28,   139,   230,    16,    17,    18,    26,    65,    21,
      29,    40,    69,    70,    26,   242,     3,    29,   220,     3,
       4,    65,     6,     7,     3,    69,    70,    22,    24,    19,
     139,    27,    16,    17,    18,     5,    65,    21,    28,    19,
      69,    70,    26,   139,     3,    29,    25,   139,    28,    28,
       0,    24,    19,   139,   256,     5,     3,     4,    65,     6,
       7,    28,    69,    19,    71,    19,    19,    19,   139,    76,
      77,    78,    28,     0,    28,    28,    28,    19,     5,    26,
      24,   283,   139,   140,   141,   142,    28,   141,    30,    31,
      32,    33,    34,    35,    24,   139,   140,   141,   142,   139,
     141,   158,   159,   141,   158,   162,    25,    19,   162,    28,
     139,   140,   141,   142,   158,   159,    28,   158,   162,    24,
     158,   162,    19,    19,   162,    19,    24,    19,    19,   158,
     159,    28,    28,   162,    28,   142,    28,    28,   248,   249,
     250,    32,    33,    34,    35,     3,     4,    25,     6,     7,
      28,    24,   159,    24,    32,    33,    34,    35,    16,    17,
      18,    25,    24,    21,    28,   275,   276,   277,    26,   226,
      19,    29,    38,   230,    19,    19,   230,    25,    19,    28,
      28,    24,   226,    28,    28,   242,   230,    28,   242,    27,
      28,    25,     3,     4,    28,     6,     7,   226,   242,    65,
     310,   230,    24,    69,     0,    71,    72,    73,    74,     5,
      76,    77,    78,   242,     0,    26,   223,   224,    29,     5,
      20,    25,    27,   381,    28,   383,    92,    93,    94,    95,
      96,    97,   390,    99,   100,   101,   102,   103,   104,    27,
       0,   248,   249,   250,   381,     5,   383,    27,    28,   306,
       0,   308,   309,   390,   311,     5,    27,   311,    25,   266,
     317,    28,   306,   317,   308,   309,     3,   311,   275,   276,
     277,    26,   381,   317,   383,    26,   142,   306,    25,   308,
     309,   390,   311,    27,    28,   381,   293,   383,   317,   381,
      25,   383,    25,   159,   390,   381,    65,   383,   390,   306,
      69,   308,    71,   310,   390,    27,    28,    76,    77,    78,
     381,    25,   383,   179,    28,    25,    25,    25,    28,   390,
      28,    25,    91,    25,   381,   382,   383,    25,    25,    98,
      28,   388,    25,   390,    25,    28,   202,   381,   382,   383,
     381,   381,   383,   383,   388,    25,   390,     3,    28,   390,
     390,    27,   381,   382,   383,    27,    28,   223,   224,   388,
      27,   390,     3,     4,    27,     6,     7,    25,     3,     4,
      28,     6,     7,   142,    32,    33,    34,    35,    27,    28,
      27,   388,   248,   249,   250,    26,    25,    24,    29,    28,
     159,    26,    24,    24,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    27,    28,   275,
     276,   277,    38,    25,    25,     3,     4,    28,     6,     7,
      24,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,    25,    27,    28,    28,    26,    65,
     306,    29,   308,    69,   310,    71,    72,    73,    74,    24,
      76,    77,    78,    25,   223,   224,    28,    25,    25,     3,
       4,    28,     6,     7,    27,    28,    92,    93,    94,    95,
      96,    97,    24,    99,   100,   101,   102,   103,   104,   248,
     249,   250,    26,    24,    24,    29,     3,     4,    25,     6,
       7,    28,    25,    25,    25,    28,    28,   266,    25,    25,
       3,     4,    28,     6,     7,    25,   275,   276,   277,    26,
      24,     3,    29,    16,    17,    18,   142,    25,    21,    24,
      28,    24,   388,    26,   293,    24,    29,     3,     4,    19,
       6,     7,    25,   159,     3,    28,    27,   306,    28,   308,
      27,   310,    32,    33,    34,    35,    25,     3,    25,    28,
      26,    28,    25,   179,    38,    28,    26,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    27,    28,    21,   202,    23,    27,    28,
      26,    65,    26,    29,    26,    69,    25,    71,    25,    28,
      26,    28,    76,    77,    78,    27,    25,   223,   224,    28,
      25,    25,     3,     4,    28,     6,     7,    25,    92,    93,
      94,    95,    96,    97,    25,    25,    25,    19,    28,   388,
      27,    28,   248,   249,   250,    26,    28,    26,    30,    31,
      32,    33,    34,    35,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    27,    28,   275,
     276,   277,    32,    33,    34,    35,    26,    25,   142,    25,
      28,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,    19,   159,    27,    28,    27,    28,
     306,    25,   308,    28,   310,    30,    31,    32,    33,    34,
      35,    27,    28,    27,    28,   179,    65,    25,    27,    28,
      69,    19,    71,    32,    33,    34,    35,    76,    77,    78,
      28,    25,    30,    31,    32,    33,    34,    35,   202,    27,
      28,    27,    28,     3,     4,    25,     6,     7,    27,    28,
      99,   100,   101,   102,   103,   104,    16,    17,    18,   223,
     224,    21,    19,    25,    24,    17,    26,   137,    65,    29,
      -1,    28,    69,    27,    71,    32,    33,    34,    35,    76,
      77,    78,   388,     3,   248,   249,   250,    27,    28,    27,
      28,    27,    28,   142,    27,    28,   260,   261,   262,   263,
     264,   265,   266,    27,    28,    19,    27,    28,    27,    28,
     159,   275,   276,   277,    28,    -1,    30,    31,    32,    33,
      34,    35,    19,   287,   288,   289,   290,   291,   292,   293,
     179,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,   306,    19,   308,   142,   310,    -1,    -1,    -1,
      -1,    -1,    28,   202,    30,    31,    32,    33,    34,    35,
      65,    -1,   159,    -1,    69,    -1,    71,    -1,    -1,    -1,
      -1,    76,    77,    78,   223,   224,    -1,    -1,    65,    19,
      -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    28,    76,
      77,    78,    32,    33,    34,    35,    -1,    -1,    -1,   248,
     249,   250,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   388,    -1,   275,   276,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   248,   249,   250,   159,   142,    -1,   306,    -1,   308,
      -1,   310,    -1,    65,    -1,    -1,    -1,    69,    -1,    71,
      -1,    -1,   159,    -1,    76,    77,    78,    -1,   275,   276,
     277,    65,    19,    -1,    -1,    69,    -1,    71,    -1,    -1,
      19,    28,    76,    77,    78,    32,    33,    34,    35,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    -1,   306,
      -1,   308,    -1,   310,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    19,    26,   388,
     142,    29,    -1,   248,   249,   250,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    -1,    -1,    -1,   159,   142,    -1,
      -1,   248,   249,   250,    19,    -1,    -1,    -1,    -1,    -1,
     275,   276,   277,    28,    -1,   159,    -1,    32,    33,    34,
      35,    -1,    -1,    19,    -1,    -1,    -1,    -1,   275,   276,
     277,   388,    28,    -1,    -1,    19,    32,    33,    34,    35,
      24,   306,    -1,   308,    28,   310,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,   306,
      -1,   308,    -1,   310,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    22,   248,   249,   250,    26,
      25,    -1,    29,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    27,    28,   248,   249,   250,    32,    33,    34,
      35,    -1,    -1,   275,   276,   277,    -1,    -1,    -1,    25,
      -1,    -1,    28,   388,    30,    31,    32,    33,    34,    35,
      -1,   275,   276,   277,    -1,    -1,    -1,    -1,    19,    -1,
      -1,   388,    -1,    -1,   306,    -1,   308,    28,   310,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   306,    -1,   308,    -1,   310,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    25,    -1,    26,    28,    -1,
      29,    -1,    32,    33,    34,    35,   388,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,   388,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,
      -1,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,
      -1,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,
      -1,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,
      -1,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,    26,
      -1,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    -1,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    19,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    19,    37,
      38,    39,    40,    41,    42,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    19,    37,    38,    39,    40,
      41,    42,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    19,    37,    38,    39,    40,    41,    42,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    19,
      37,    38,    39,    40,    41,    42,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    19,    37,    38,    39,
      40,    41,    42,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    19,    37,    38,    39,    40,    41,    42,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    24,    -1,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    24,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    25,    -1,    -1,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    25,    -1,    -1,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    25,    -1,
      -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,    25,
      -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    45,    46,    47,    48,    49,     3,     0,    47,
      24,    27,     5,    50,    51,     3,    25,    28,    22,    53,
      51,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      13,    14,    15,    16,    17,    18,    21,    26,    29,    48,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    70,    71,    74,    75,    76,
      77,    78,    80,    24,     3,    24,    56,    64,    70,    24,
      24,    24,    24,    24,    24,    24,    24,    24,    24,    20,
      79,     3,    76,    78,    23,    55,    27,    27,    27,    27,
      27,    28,    32,    33,    34,    35,    30,    31,    36,    37,
      38,    39,    40,    41,    42,     3,    72,    73,    70,    27,
      70,    70,    69,    70,    78,    78,    78,     3,    69,    69,
      69,    26,    74,    76,    76,    76,    76,    76,    76,    74,
      77,    77,    77,    77,    77,    77,    25,    28,    25,    25,
      27,    25,    19,    25,    25,    25,    25,    25,    25,    25,
      73,    27,    52,    53,    55,    70,    52,    70,    12,    27,
      52,    70,    25,    52,     4,     6,     7,    26,    80,    27,
       3,     4,     6,     7,    16,    17,    18,    21,    26,    29,
      56,    64,    65,    66,    67,    68,    71,    74,    75,    76,
      77,    78,    80,     3,     4,     6,     7,    16,    17,    18,
      21,    26,    29,    56,    64,    65,    66,    67,    68,    71,
      74,    75,    76,    77,    78,    80,     3,     4,     6,     7,
      26,    80,     3,    28,    28,     5,     8,     9,    10,    11,
      22,    48,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    70,    22,    53,    55,    79,    24,    24,    24,    24,
      24,    79,     3,     4,     6,     7,    26,    76,    78,    80,
      32,    33,    34,    35,    30,    31,    36,    37,    38,    39,
      40,    41,    42,    24,    24,    24,    24,    24,    79,     3,
       4,     6,     7,    26,    76,    78,    80,    32,    33,    34,
      35,    30,    31,    36,    37,    38,    39,    40,    41,    42,
      79,     3,    74,     3,    74,     3,    24,    70,    24,    24,
      24,    54,    27,    27,    27,    27,    27,    54,    26,    72,
       3,    69,    69,    69,    26,    79,    76,    76,    76,    76,
      76,    76,    74,    77,    77,    77,    77,    77,    77,    72,
       3,    69,    69,    69,    26,    79,    76,    76,    76,    76,
      76,    76,    74,    77,    77,    77,    77,    77,    77,    26,
      27,    70,    27,    70,    70,    69,    23,    23,    25,    25,
      25,    25,    25,    26,    25,    25,    25,    25,    25,    26,
      25,    25,    27,    25,    27,    52,    70,    52,    27,    70,
      25,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    52,    52,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    56,    57,    58,    58,    59,
      59,    60,    60,    60,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    65,    66,    67,    68,    69,    70,    70,
      70,    71,    71,    72,    72,    72,    73,    74,    74,    75,
      75,    75,    75,    75,    76,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    80,
      80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     3,
       1,     0,     2,     1,     1,     3,     2,     1,     1,     2,
       1,     1,     2,     2,     2,     4,     4,     4,     4,     5,
       3,     1,     1,     1,     2,     5,     7,     9,     5,     1,
       1,     1,     1,     4,     4,     4,     4,     3,     1,     3,
       1,     1,     1,     3,     1,     0,     1,     1,     3,     1,
       3,     3,     3,     3,     1,     2,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* program: declarations  */
#line 64 "mafralang.y"
               { parserTree = (yyvsp[0].stmt); }
#line 2281 "mafralang.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 68 "mafralang.y"
                           {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 2289 "mafralang.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 71 "mafralang.y"
              { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2295 "mafralang.tab.c"
    break;

  case 5: /* declaration: var_declaration  */
#line 75 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2301 "mafralang.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 76 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2307 "mafralang.tab.c"
    break;

  case 7: /* var_declaration: TYPE ID SEMICOLON  */
#line 80 "mafralang.y"
                    {
    (yyval.stmt) = addNode(VARIABLE_DECLARATION, NULL, NULL, (yyvsp[-2].strType), (yyvsp[-1].strType));
    addSymbol((yyvsp[-1].strType), (yyvsp[-2].strType), 'V');
  }
#line 2316 "mafralang.tab.c"
    break;

  case 8: /* func_declaration: TYPE ID LEFT_PARENTHESES paramaters RIGHT_PARENTHESES compound_statement  */
#line 87 "mafralang.y"
                                                                           {
    (yyval.stmt) = addNode(FUNCTION_DECLARATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-5].strType), (yyvsp[-4].strType));
    addSymbol((yyvsp[-4].strType), (yyvsp[-5].strType), 'F');
    popStack();
  }
#line 2326 "mafralang.tab.c"
    break;

  case 9: /* paramaters: paramaters COMMA paramater  */
#line 95 "mafralang.y"
                             {
    (yyval.stmt) = addNode(PARAMATERS, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 2334 "mafralang.tab.c"
    break;

  case 10: /* paramaters: paramater  */
#line 98 "mafralang.y"
            {
    (yyval.stmt) = addNode(PARAMATERS, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 2342 "mafralang.tab.c"
    break;

  case 11: /* paramaters: %empty  */
#line 101 "mafralang.y"
  { (yyval.stmt) = NULL; }
#line 2348 "mafralang.tab.c"
    break;

  case 12: /* paramater: TYPE ID  */
#line 105 "mafralang.y"
          {
    (yyval.stmt) = addNode(PARAMATER, NULL, NULL, (yyvsp[-1].strType), (yyvsp[0].strType));
    addSymbol((yyvsp[0].strType), (yyvsp[-1].strType), 'P');
  }
#line 2357 "mafralang.tab.c"
    break;

  case 13: /* block_struct: compound_statement  */
#line 112 "mafralang.y"
                     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2363 "mafralang.tab.c"
    break;

  case 14: /* block_struct: block_statement  */
#line 113 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2369 "mafralang.tab.c"
    break;

  case 15: /* compound_statement: LEFT_CURLY_BRACKET statement_list RIGHT_CURLY_BRACKET  */
#line 117 "mafralang.y"
                                                        {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 2377 "mafralang.tab.c"
    break;

  case 16: /* statement_list: statement_list block_statement  */
#line 123 "mafralang.y"
                                 {
    (yyval.stmt) = addNode(STATEMENT_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 2385 "mafralang.tab.c"
    break;

  case 17: /* statement_list: block_statement  */
#line 126 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2391 "mafralang.tab.c"
    break;

  case 18: /* block_statement: var_declaration  */
#line 130 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2397 "mafralang.tab.c"
    break;

  case 19: /* block_statement: set_statement SEMICOLON  */
#line 131 "mafralang.y"
                          { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2403 "mafralang.tab.c"
    break;

  case 20: /* block_statement: statement  */
#line 132 "mafralang.y"
            { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2409 "mafralang.tab.c"
    break;

  case 21: /* block_statement: return_statement  */
#line 133 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2415 "mafralang.tab.c"
    break;

  case 22: /* block_statement: input_statement SEMICOLON  */
#line 134 "mafralang.y"
                            { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2421 "mafralang.tab.c"
    break;

  case 23: /* block_statement: output_statement SEMICOLON  */
#line 135 "mafralang.y"
                             { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2427 "mafralang.tab.c"
    break;

  case 24: /* block_statement: function_call SEMICOLON  */
#line 136 "mafralang.y"
                          { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 2433 "mafralang.tab.c"
    break;

  case 25: /* function_call: ID LEFT_PARENTHESES local_parameters RIGHT_PARENTHESES  */
#line 140 "mafralang.y"
                                                         {
    (yyval.stmt) = addNode(FUNCTION_CALL, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 2441 "mafralang.tab.c"
    break;

  case 26: /* input_statement: READ LEFT_PARENTHESES variable RIGHT_PARENTHESES  */
#line 146 "mafralang.y"
                                                   {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 2449 "mafralang.tab.c"
    break;

  case 27: /* output_statement: WRITE LEFT_PARENTHESES variable RIGHT_PARENTHESES  */
#line 152 "mafralang.y"
                                                      {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 2457 "mafralang.tab.c"
    break;

  case 28: /* output_statement: WRITELN LEFT_PARENTHESES variable RIGHT_PARENTHESES  */
#line 155 "mafralang.y"
                                                      {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 2465 "mafralang.tab.c"
    break;

  case 29: /* return_statement: RETURN LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 161 "mafralang.y"
                                                                 {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-2].stmt), NULL, NULL, (yyvsp[-4].strType));
  }
#line 2473 "mafralang.tab.c"
    break;

  case 30: /* return_statement: RETURN expression SEMICOLON  */
#line 164 "mafralang.y"
                               {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-2].strType));
  }
#line 2481 "mafralang.tab.c"
    break;

  case 31: /* statement: expression_statement  */
#line 170 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2487 "mafralang.tab.c"
    break;

  case 32: /* statement: conditional_statement  */
#line 171 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2493 "mafralang.tab.c"
    break;

  case 33: /* statement: iteration_statement  */
#line 172 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2499 "mafralang.tab.c"
    break;

  case 34: /* expression_statement: expression SEMICOLON  */
#line 176 "mafralang.y"
                       {
    (yyval.stmt) = addNode(EXPRESSION_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 2507 "mafralang.tab.c"
    break;

  case 35: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES block_struct  */
#line 182 "mafralang.y"
                                                                           { 
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, (yyvsp[-4].strType));
  }
#line 2515 "mafralang.tab.c"
    break;

  case 36: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES block_struct ELSE block_struct  */
#line 185 "mafralang.y"
                                                                                  {
    ast_node* ast_node = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, (yyvsp[-1].strType));
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), ast_node, NULL, (yyvsp[-6].strType));
  }
#line 2524 "mafralang.tab.c"
    break;

  case 37: /* iteration_statement: FOR LEFT_PARENTHESES expression SEMICOLON expression SEMICOLON expression RIGHT_PARENTHESES block_struct  */
#line 192 "mafralang.y"
                                                                                                           {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-6].stmt), (yyvsp[-4].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), NULL, (yyvsp[-8].strType));
  }
#line 2534 "mafralang.tab.c"
    break;

  case 38: /* iteration_statement: FORALL LEFT_PARENTHESES set_expression RIGHT_PARENTHESES block_struct  */
#line 197 "mafralang.y"
                                                                        {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), NULL, NULL, (yyvsp[-4].strType));
  }
#line 2542 "mafralang.tab.c"
    break;

  case 39: /* set_statement: is_set_statement  */
#line 203 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2548 "mafralang.tab.c"
    break;

  case 40: /* set_statement: remove_statement  */
#line 204 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2554 "mafralang.tab.c"
    break;

  case 41: /* set_statement: add_statement  */
#line 205 "mafralang.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2560 "mafralang.tab.c"
    break;

  case 42: /* set_statement: exists_statement  */
#line 206 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2566 "mafralang.tab.c"
    break;

  case 43: /* is_set_statement: IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES  */
#line 210 "mafralang.y"
                                               {
    (yyval.stmt) = addNode(IS_SET_STATEMENT, NULL, NULL, (yyvsp[-1].strType), NULL);
  }
#line 2574 "mafralang.tab.c"
    break;

  case 44: /* remove_statement: REMOVE LEFT_PARENTHESES set_expression RIGHT_PARENTHESES  */
#line 216 "mafralang.y"
                                                           {
    (yyval.stmt) = addNode(REMOVE_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 2582 "mafralang.tab.c"
    break;

  case 45: /* add_statement: ADD LEFT_PARENTHESES set_expression RIGHT_PARENTHESES  */
#line 222 "mafralang.y"
                                                        {
    (yyval.stmt) = addNode(ADD_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 2590 "mafralang.tab.c"
    break;

  case 46: /* exists_statement: EXISTS LEFT_PARENTHESES set_expression RIGHT_PARENTHESES  */
#line 228 "mafralang.y"
                                                            {
    (yyval.stmt) = addNode(EXISTS_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 2598 "mafralang.tab.c"
    break;

  case 47: /* set_expression: expression IN expression  */
#line 234 "mafralang.y"
                           {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 2606 "mafralang.tab.c"
    break;

  case 48: /* expression: operation  */
#line 240 "mafralang.y"
            {
    (yyval.stmt) = addNode(EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 2614 "mafralang.tab.c"
    break;

  case 49: /* expression: expression COMMA operation  */
#line 243 "mafralang.y"
                             {
    (yyval.stmt) = addNode(EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 2622 "mafralang.tab.c"
    break;

  case 50: /* expression: function_expression  */
#line 246 "mafralang.y"
                      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2628 "mafralang.tab.c"
    break;

  case 51: /* function_expression: set_statement  */
#line 250 "mafralang.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2634 "mafralang.tab.c"
    break;

  case 52: /* function_expression: function_call  */
#line 251 "mafralang.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2640 "mafralang.tab.c"
    break;

  case 53: /* local_parameters: local_parameters COMMA local_parameter  */
#line 255 "mafralang.y"
                                         {
    (yyval.stmt) = addNode(LOCAL_PARAMETERS, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 2648 "mafralang.tab.c"
    break;

  case 54: /* local_parameters: local_parameter  */
#line 258 "mafralang.y"
                  {
    (yyval.stmt) = addNode(LOCAL_PARAMETERS, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 2656 "mafralang.tab.c"
    break;

  case 55: /* local_parameters: %empty  */
#line 261 "mafralang.y"
  { (yyval.stmt) = NULL; }
#line 2662 "mafralang.tab.c"
    break;

  case 56: /* local_parameter: ID  */
#line 265 "mafralang.y"
     {
    (yyval.stmt) = addNode(LOCAL_PARAMETER, NULL, NULL, (yyvsp[0].strType), NULL);
    addSymbol((yyvsp[0].strType), NULL, 'P');
  }
#line 2671 "mafralang.tab.c"
    break;

  case 57: /* operation: arithmetic_operation  */
#line 272 "mafralang.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2677 "mafralang.tab.c"
    break;

  case 58: /* operation: variable ASSIGN operation  */
#line 273 "mafralang.y"
                            {
    (yyval.stmt) = addNode(ASSIGN_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2685 "mafralang.tab.c"
    break;

  case 59: /* arithmetic_operation: logical_operation  */
#line 279 "mafralang.y"
                    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2691 "mafralang.tab.c"
    break;

  case 60: /* arithmetic_operation: arithmetic_operation ADD_OP logical_operation  */
#line 280 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2699 "mafralang.tab.c"
    break;

  case 61: /* arithmetic_operation: arithmetic_operation SUB_OP logical_operation  */
#line 283 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2707 "mafralang.tab.c"
    break;

  case 62: /* arithmetic_operation: arithmetic_operation DIVIDE logical_operation  */
#line 286 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL); 
  }
#line 2715 "mafralang.tab.c"
    break;

  case 63: /* arithmetic_operation: arithmetic_operation MULT logical_operation  */
#line 289 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2723 "mafralang.tab.c"
    break;

  case 64: /* logical_operation: relational_operation  */
#line 295 "mafralang.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2729 "mafralang.tab.c"
    break;

  case 65: /* logical_operation: NEGATE logical_operation  */
#line 296 "mafralang.y"
                           {
    (yyval.stmt) = addNode(LOGICAL_OPERATION, NULL, (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2737 "mafralang.tab.c"
    break;

  case 66: /* logical_operation: relational_operation AND logical_operation  */
#line 299 "mafralang.y"
                                             {
    (yyval.stmt) = addNode(LOGICAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2745 "mafralang.tab.c"
    break;

  case 67: /* logical_operation: relational_operation OR logical_operation  */
#line 302 "mafralang.y"
                                             {
    (yyval.stmt) = addNode(LOGICAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2753 "mafralang.tab.c"
    break;

  case 68: /* relational_operation: variable  */
#line 308 "mafralang.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2759 "mafralang.tab.c"
    break;

  case 69: /* relational_operation: variable CLT relational_operation  */
#line 309 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2767 "mafralang.tab.c"
    break;

  case 70: /* relational_operation: variable CLE relational_operation  */
#line 312 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2775 "mafralang.tab.c"
    break;

  case 71: /* relational_operation: variable CEQ relational_operation  */
#line 315 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2783 "mafralang.tab.c"
    break;

  case 72: /* relational_operation: variable CGE relational_operation  */
#line 318 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2791 "mafralang.tab.c"
    break;

  case 73: /* relational_operation: variable CGT relational_operation  */
#line 321 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2799 "mafralang.tab.c"
    break;

  case 74: /* relational_operation: variable CNE relational_operation  */
#line 324 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 2807 "mafralang.tab.c"
    break;

  case 75: /* variable: constant  */
#line 330 "mafralang.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2813 "mafralang.tab.c"
    break;

  case 76: /* variable: QUOTES string QUOTES  */
#line 331 "mafralang.y"
                       {
    (yyval.stmt) = addNode(QUOT, NULL, (yyvsp[-1].stmt), (yyvsp[-2].symbol), (yyvsp[0].symbol));
  }
#line 2821 "mafralang.tab.c"
    break;

  case 77: /* variable: ID  */
#line 334 "mafralang.y"
     {
    (yyval.stmt) = addNode(IDENTIFIER, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 2829 "mafralang.tab.c"
    break;

  case 78: /* string: STR  */
#line 340 "mafralang.y"
      {
    (yyval.stmt) = addNode(STRING, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 2837 "mafralang.tab.c"
    break;

  case 79: /* constant: INTEGER  */
#line 346 "mafralang.y"
            {
    (yyval.stmt) = addNode(INTEG, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 2845 "mafralang.tab.c"
    break;

  case 80: /* constant: FLOAT  */
#line 349 "mafralang.y"
             {
    (yyval.stmt) = addNode(DECIMAL, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 2853 "mafralang.tab.c"
    break;

  case 81: /* constant: EMPTY  */
#line 352 "mafralang.y"
            {
    (yyval.stmt) = addNode(EMP, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 2861 "mafralang.tab.c"
    break;


#line 2865 "mafralang.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 357 "mafralang.y"


int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
      yyin = fopen( argv[0], "r" );
  else
      yyin = stdin;
  initializeGlobalScope();
  yyparse();
  yylex_destroy();
  if(syntax_error == 0 && lex_error == 0){
      printf("\n\n\t\t\t\t\t\t\t\t----------  ABSTRACT SYNTAX TREE ----------\t\t\t\t\t\t\t\t\n\n");
      printTree(parserTree, 0);
      printSymbolTable();
  }
  freeTree(parserTree);
  freeSymbolTable();
  return 0;
}
