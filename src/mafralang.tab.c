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
  YYSYMBOL_statement = 56,                 /* statement  */
  YYSYMBOL_local_var_declaration = 57,     /* local_var_declaration  */
  YYSYMBOL_input_statement = 58,           /* input_statement  */
  YYSYMBOL_output_statement = 59,          /* output_statement  */
  YYSYMBOL_return_statement = 60,          /* return_statement  */
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
  YYSYMBOL_operation = 72,                 /* operation  */
  YYSYMBOL_arithmetic_operation = 73,      /* arithmetic_operation  */
  YYSYMBOL_logical_operation = 74,         /* logical_operation  */
  YYSYMBOL_relational_operation = 75,      /* relational_operation  */
  YYSYMBOL_variable = 76,                  /* variable  */
  YYSYMBOL_string = 77,                    /* string  */
  YYSYMBOL_function_call = 78,             /* function_call  */
  YYSYMBOL_local_parameters = 79,          /* local_parameters  */
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
#define YYLAST   10771

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  704

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
     132,   136,   137,   138,   139,   140,   141,   147,   154,   160,
     163,   169,   175,   181,   184,   191,   196,   202,   203,   204,
     205,   209,   215,   221,   227,   233,   239,   242,   248,   249,
     250,   254,   255,   261,   262,   265,   268,   271,   277,   278,
     281,   284,   290,   291,   294,   297,   300,   303,   306,   312,
     313,   314,   317,   323,   326,   332,   338,   341,   344,   348,
     351,   354
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
  "block_statement", "statement", "local_var_declaration",
  "input_statement", "output_statement", "return_statement",
  "expression_statement", "conditional_statement", "iteration_statement",
  "set_statement", "is_set_statement", "remove_statement", "add_statement",
  "exists_statement", "set_expression", "expression",
  "function_expression", "operation", "arithmetic_operation",
  "logical_operation", "relational_operation", "variable", "string",
  "function_call", "local_parameters", "constant", YY_NULLPTR
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

#define YYPACT_NINF (-225)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    38,    34,    30,    57,    87,    90,   123,  -225,    97,
       8,   127,    42,   132,   188,   235,    27,    58,  2048,   287,
     261,  5443,  5483,    62,  5523,  5563,    82,    70,    85,    91,
      93,    95,   109,   116,   129,   129,   129,   204,    17,    22,
    8825,  8852,  8312,  8339,  8366,  8393,  8420,  8447,  8879,  8906,
    5603,  5643,  5683,  5723,  5763,  7961,  5803,  6955,  6989,  6683,
    5843,  5883,  5923,  5963,   138,  8474,  7988,   204,   228,   815,
     944,   204,   277,   277,   118,  6003,  6043,  6083,   288,    99,
     168,   210,  6123,   310,  8933,  8501,    82,   408,    22,    22,
      82,    82,    82,    82,    22,    22,    22,    22,    22,    22,
     289,   307,   312,   143,   199,  8960,  8987,  9014,   403,   177,
     189,   241,  6163,  6203,  7023,  7057,  6243,  6283,  7091,  7125,
    7159,  7193,  6323,  6363,  6403,  6443,  6483,  6523,  6563,   204,
    1312,   228,   204,  8528,  8555,  8582,  6603,   565,  8609,   311,
     627,   944,   204,  1680,  9041,   647,   944,  9068,   815,  2000,
    2736,  3104,  4410,   240,   294,   294,   294,   204,    17,   580,
    9797,  9815,  9833,  9851,  9869,  9887,   110,   163,  1374,  9905,
    9923,  9941,  9959,  2368,   528, 10281, 10297,   309,   336,   336,
     336,   204,    17,   660, 10313, 10329, 10345, 10361, 10377, 10393,
      31,   380,  1064, 10409, 10425, 10441, 10457,  3337,  3374,  3781,
    3904,   340,   393,   393,   393,   204,    17,  1219,  4167,  9179,
    9203,  9227,  9251,  9275,    -4,    25,   707,  9299,  9323,  9347,
    9371,  2048,   362,   410,   426,   444,   409,   450,   450,   450,
     204,    17,   457,   468,   469,   470,   481,   483,   487,   488,
     204,  7227,  7261,  7295,  7329,   506,   507,   507,   507,   204,
      17,  7363,  7397,  7431,  7465,  7499,  7533,  7567,  7601,   228,
     815,   511,   876,   282,  1244,  1612,   917,   512,   530,    91,
     555,   583,   595,   601,   605,   605,   605,  2048,   204,    17,
    1284,  8636,  8663,  8015,  8042,  8069,  8096,  8123,  8150,  8690,
    8717,  1980,  2348,  2716,  3084,  4208,  7907,  4270,   169,   449,
    3452,  4533,  4573,  4613,  4653,   263,   138,   620,   815,  9977,
    9995, 10013,   675,   563, 10031,  1512,   580,   580,   204,   204,
     204,   204,   580,   580,   580,   580,   580,   580,   138,   628,
     815, 10473, 10489, 10505,   676,   644, 10521,  1587,   660,   660,
     228,   228,   228,   228,   660,   660,   660,   660,   660,   660,
     138,   650,   815,  9395,  9419,  9443,   680,   659,  9467,  1652,
    1219,  1219,   815,   815,   815,   815,  1219,  1219,  1219,  1219,
    1219,  1219,  9095,   138,   704,   815,   681,   708,   720,   702,
     734,   176,   138,   726,   815,  7635,  7669,  7703,   703,   755,
     590,    28,   138,  8177,  7934,   204,   228,  1312,   204,   277,
     277,   779,   815,  4761,  4803,  4843,  9122,   770,   768,  4883,
    8204,   917,  1880,  1284,  1284,   917,   917,   917,   917,  1284,
    1284,  1284,  1284,  1284,  1284,   204,   771,   758,   283, 10049,
   10067,   215,   201,   225,   349,   776,   799,   799,   799,   204,
      17,   443,   461,   567,   643,   723,   825,   826,   827,   842,
   10085, 10103,   894,   901,   946,   947, 10121, 10139, 10157, 10175,
   10193, 10211,   870,   800,   342, 10537, 10553,   335,   646,   696,
     807,   806,   814,   814,   814,   204,    17,   829,   900,   904,
    1083,  1116,  1121,  1133,  1193,  1203, 10569, 10585,  1267,  1270,
    1304,  1315, 10601, 10617, 10633, 10649, 10665, 10681,   965,   817,
     364,  9491,  9515,    -5,    65,    86,    88,   816,   834,   834,
     834,   204,    17,   101,   115,   133,   181,   187,   219,   237,
     239,   260,  9539,  9563,   337,   339,   464,   566,  9587,  9611,
    9635,  9659,  9683,  9707,  9149,   966,   846,   402,   847,   851,
    1022,   852,   471,  7737,  7771,  1078,  1122,   382,  8744,  1140,
     871,   919,   938,   841,  8771,  4923,  4963,   633,   996,  1183,
    1364,  1551,   918,   940,   940,   940,   204,    17,  1732,  1919,
    2100,  2287,  2468,  2655,  2836,  3023,  3204,  5003,  5043,  3713,
    4311,  4401,  4474,  5083,  5123,  5163,  5203,  5243,  5283,  1142,
   10229, 10247,   204,   138,   821,   815,   951,   960,   993,  1213,
     943, 10697, 10713,   204,   138,   983,   815,  1326,  1328,  1384,
    1238,   971,  9731,  9755,   204,   138,   989,   815,   572,   586,
     592,  1264,   990,  1009,  1043,   204,  7805,  7839,   204,  5323,
    1312,   228,  8231,  8258,  8285,  5363,   204,   138,  1012,   815,
    4697,  6717,  6751,  1271,  1048,  6643,  1286,  1319,  1044,  1021,
    1002,  1003,  1333,  1358,  1050,  1094,  1386,  1432,  1370,  1390,
    1051,  1186,   596,   756,  1411,  1412,  9176,   460,  1416,  1449,
    1076,  1196,  6785,  6819, 10265,  1016,  1017,   204, 10729,  1435,
    1437,   204,  9779,   757,   761,   204,  1080,  7873,   204,  5403,
    6853,  6887,   204,  1451,  1453,  1459,  1486,  1492,  1018,  1439,
     801,  1312,  6921,  8798
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,  1113,  -225,  -225,  -225,  1104,  -129,   -10,
    -194,    78,  -128,  -127,  -126,  -125,  -123,  -121,  -120,  -119,
     350,   718,  1086,  1454,  1822,   599,  3363,  2190,  4124,  3738,
    3764,  3294,   -18,  -140,  2558,  -224,  2926
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,    13,    14,   105,   281,
      40,   282,    42,    43,    44,    45,    46,    47,    48,    49,
     160,   161,   162,   163,   164,    70,   100,   165,   166,   167,
     168,   169,   170,    81,   171,   101,   172
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   138,   283,   284,   285,   286,    19,   287,    61,   288,
     289,   290,   144,    12,   -72,   -46,     1,   147,   313,   615,
      79,    61,    61,   -72,   -46,    21,    22,   372,    24,    25,
      -2,   -72,   359,   -11,     8,     1,   -11,    80,    33,    34,
      35,     7,   335,    36,   -51,    15,    37,   -47,    38,    18,
     194,   218,    61,   -51,   109,   110,   -47,    -4,   -46,   -46,
     106,   -51,    -4,    12,   359,    65,   357,   337,    61,   115,
      61,    61,    61,    61,    61,    61,   122,   123,   124,   125,
     126,   127,   426,   406,   -81,    21,    22,    -5,    24,    25,
      -6,   380,    -5,   -81,    67,    -6,    41,    -3,    33,    34,
      35,   -81,    -3,    36,   462,   -80,    37,   -79,    38,    68,
     389,    39,   302,   194,   -80,    69,   -79,    71,    84,    72,
     -48,   111,   -80,    61,   -79,   -74,   498,    -7,    61,   -48,
     218,   106,    -7,    73,   -37,   -46,   106,   -48,   -46,   408,
      74,   149,   150,   -37,   151,   152,   315,    10,   107,   535,
      11,   -37,   -38,   148,   153,   154,   155,    16,   540,   156,
      17,   -38,   157,   -78,   158,   194,   -78,   159,   545,   -38,
     131,   259,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -51,   218,
     -46,   -51,   -46,   -46,   -73,   -46,   -46,   -46,   -46,   -51,
     -39,   -47,   134,    61,   -47,   412,   -40,   149,   150,   -39,
     151,   152,   315,   -10,   135,   -40,   -10,   -39,   132,   107,
     153,   154,   155,   -40,   107,   156,   -81,   260,   157,   -81,
     158,   173,   174,   159,   175,   176,   113,   -81,   -70,   593,
     -72,   194,   218,   -72,   177,   178,   179,   -70,   302,   180,
     -80,   -72,   181,   -80,   182,   -70,   -52,   183,   -49,    61,
     -12,   -80,   302,   -12,   307,   -52,   136,   -49,   548,   283,
     284,   285,   286,   -52,   287,   -49,   288,   289,   290,   -69,
     222,   223,   425,   224,   225,   393,    -9,    -8,   -69,    -9,
     218,   260,    -8,   226,   227,   228,   -69,   447,   229,    41,
     600,   230,   592,   231,   456,   457,   458,   459,   460,   461,
     -15,   260,   218,   112,   -77,   -15,   240,   240,   308,   483,
     194,   194,   194,   194,   194,   194,   492,   493,   494,   495,
     496,   497,   128,   329,   218,   129,   611,   130,   142,   259,
     240,   519,   218,   218,   218,   218,   218,   218,   528,   529,
     530,   531,   532,   533,    61,    41,   -54,   218,   -55,   604,
     330,   603,   -72,   -72,   351,   -54,   218,   -55,    50,   647,
     260,   -72,   622,   -54,   -79,   -55,    50,   -79,   194,   302,
     653,   550,   551,   614,   218,   -79,   373,   -72,    61,    50,
      50,   659,   260,   302,   574,   302,   302,   302,   302,   302,
     302,   583,   584,   585,   586,   587,   588,   -51,   -51,   631,
     259,   241,   242,   669,   243,   244,   -51,   352,   184,   208,
      50,   625,   232,   232,   245,   246,   247,   644,   133,   248,
     260,   240,   249,   374,   250,   -81,    50,   251,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      84,   -80,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -48,   -79,
     -51,   -48,   -51,   -51,   375,   -51,   -51,   -51,   -51,   -48,
     291,   184,   -48,   -56,    84,   -51,   -37,   688,   259,   -37,
     628,    50,   -56,   -37,   -38,   -39,    50,   -37,   208,   260,
     -56,   666,   283,   284,   285,   286,   -40,   287,   -70,   288,
     289,   290,   -49,   -69,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     383,   384,   -72,   184,   -72,   392,   395,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   396,   -81,   -81,   208,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,    50,   703,   283,   284,   285,   286,   218,   287,   398,
     288,   289,   290,   149,   150,   -57,   151,   152,   218,   430,
     -76,   -42,   -38,   240,   -57,   -38,   153,   154,   155,   218,
     -42,   156,   -57,   -38,   157,   -43,   158,   399,   -42,   184,
     208,   -44,   302,   194,   -43,   -50,   291,   -47,   -47,   400,
     -44,   218,   -43,   427,   -50,   401,   337,    50,   -44,   402,
     291,   463,   -50,    75,    76,    77,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   143,   499,   -47,   240,   -47,   -47,   208,   -47,
     -47,   -47,   -47,   173,   174,   441,   175,   176,   -39,   412,
     466,   -39,   146,   -81,   -81,   240,   177,   178,   179,   -39,
     208,   180,   -81,   302,   181,   502,   182,   477,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     429,   465,   208,   240,   240,   501,   -42,   536,   240,   513,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,    50,   -80,   -80,   208,   -53,   538,   543,   541,
     240,   240,   -80,   -43,   208,   -53,    51,   360,   361,   362,
     363,   364,   365,   -53,    51,   -44,   184,   291,   -40,   232,
     232,   -40,   208,   309,   310,   311,    50,    51,    51,   -40,
     539,   291,   568,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   -71,   -75,   331,   332,   333,
     -41,   544,   552,   591,   -71,   -75,   185,   209,    51,   -41,
     233,   233,   -71,   -75,   556,   555,   590,   -41,   240,   129,
     594,   353,   354,   355,    51,   252,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,   197,   198,
     -45,   199,   200,   595,   648,   602,   376,   377,   378,   -45,
     605,   201,   202,   203,   -79,   -79,   204,   -45,   606,   205,
     616,   206,   613,   -79,   207,   385,   386,   387,   292,   185,
     -70,   -52,   -49,   -70,   -52,   -49,   -48,   -48,   617,    51,
     636,   -70,   -52,   -49,    51,   -48,   209,   -69,   397,   260,
     -69,   624,   -50,   403,   404,   405,   -71,   627,   -69,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   601,   633,   -81,   129,   -81,
     -81,   185,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -54,
     261,   262,   -54,   264,   265,   209,   -55,   -37,   -37,   -55,
     -54,   -38,   -38,   273,   274,   275,   -37,   -55,   276,    51,
     -38,   278,   638,   279,   634,   208,   280,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   208,    30,    31,    32,
      33,    34,    35,   635,   639,    36,   221,   208,    37,   651,
      38,   -56,   -57,    39,   -56,   -57,   -42,   185,   209,   -42,
     291,   184,   -56,   -57,   292,   -43,   654,   -42,   -43,   208,
     612,   623,   660,   129,   129,    51,   -43,   657,   292,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   670,   663,   -72,   -44,   -72,
     637,   -44,   -72,   -72,   -72,   -72,   209,   -50,   -71,   -44,
     -50,   -71,   -72,   442,   -75,   596,   597,   598,   -50,   -71,
     677,   -75,   -41,   -45,   -75,   -41,   -45,   626,   209,   260,
     129,   291,   -75,   -41,   -45,   478,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   -41,   676,
     209,   607,   608,   609,   673,   680,   684,   514,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
      51,   -53,   -53,   209,   338,   339,   340,   341,   342,   343,
     -53,   691,   209,   629,    52,   -45,   129,   618,   619,   620,
     -39,   -39,    52,   681,   185,   292,     9,   233,   233,   -39,
     209,    20,   260,     0,    51,    52,    52,     0,     0,   292,
     569,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   -40,   -40,     0,     0,   630,   -70,   -70,
     240,     0,   -40,     0,   186,   210,    52,   -70,   234,   234,
     -52,   -52,   640,   641,   642,   632,     0,   645,   240,   -52,
     240,     0,    52,   253,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,   -81,   685,   -81,   -81,     0,   -81,
     -81,   -81,   -81,     0,   260,   692,   293,   186,     0,   -81,
     -49,   -49,   197,   198,   260,   199,   200,    52,     0,   -49,
     -69,   -69,    52,     0,   210,   201,   202,   203,   650,   -69,
     204,   240,     0,   205,     0,   206,     0,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   656,     0,   -80,   240,   -80,   -80,   186,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   261,   262,   662,
     264,   265,   240,   210,   -54,   -54,   672,   -55,   -55,   240,
     273,   274,   275,   -54,     0,   276,   -55,    52,   278,     0,
     279,   674,     0,   209,   240,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   209,   270,   271,   272,   273,   274,
     275,   -56,   -56,   276,   277,   209,   278,     0,   279,     0,
     -56,   280,   -57,   -57,   675,   186,   210,   129,   292,   185,
       0,   -57,   293,   -42,   -42,   -43,   -43,   209,   678,     0,
       0,   240,   -42,    52,   -43,     0,   293,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   679,     0,   -80,   129,   -80,   -80,     0,
     -80,   -80,   -80,   -80,   210,   682,     0,     0,   240,   -53,
     -80,   443,   -53,     0,   316,   317,   318,   319,   320,   321,
     -53,   -44,   -44,   -50,   -50,   683,   210,     0,   129,   292,
     -44,     0,   -50,   479,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   686,   687,   210,   240,
     240,   689,     0,     0,   240,   515,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,    52,   -71,
     -71,   210,   -75,   -75,   -41,   -41,   -45,   -45,   -71,     0,
     210,   -75,    53,   -41,   690,   -45,   698,   129,   699,   240,
      53,   240,   186,   293,   700,   234,   234,   240,   210,     0,
       0,     0,    52,    53,    53,     0,     0,   293,   570,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
     293,   701,     0,     0,   240,   431,   432,   702,   433,   434,
     240,     0,   187,   211,    53,     0,   235,   235,   435,   436,
     437,     0,     0,   438,     0,     0,   439,     0,   440,     0,
      53,   254,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
       0,     0,   -79,     0,   -79,   -79,     0,   -79,   -79,   -79,
     -79,     0,     0,     0,   294,   187,     0,   -79,     0,     0,
     467,   468,     0,   469,   470,    53,     0,     0,     0,     0,
      53,     0,   211,   471,   472,   473,     0,     0,   474,     0,
       0,   475,     0,   476,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,     0,   -79,     0,   -79,   -79,   187,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   503,   504,     0,   505,   506,
       0,   211,     0,     0,     0,     0,     0,     0,   507,   508,
     509,     0,     0,   510,     0,    53,   511,     0,   512,     0,
       0,   210,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   210,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,   -45,   210,   -45,     0,   -45,     0,     0,   -45,
       0,     0,     0,   187,   211,     0,   293,   186,     0,     0,
     294,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,    53,     0,     0,   294,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,     0,   -48,     0,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   211,     0,     0,     0,     0,     0,   -48,   444,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,     0,     0,   293,     0,     0,
       0,   480,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,     0,     0,   211,     0,     0,     0,
       0,     0,     0,   516,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,    53,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,   211,     0,
      54,     0,     0,     0,     0,     0,     0,     0,    54,     0,
     187,   294,     0,   235,   235,     0,   211,     0,     0,     0,
      53,    54,    54,     0,     0,   294,   571,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,     0,
       0,     0,     0,   558,   559,     0,   560,   561,     0,     0,
     188,   212,    54,     0,   236,   236,   562,   563,   564,     0,
       0,   565,     0,     0,   566,     0,   567,     0,    54,   255,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,   -37,     0,   -37,   -37,   -37,   -37,     0,
       0,     0,   295,   188,     0,   -37,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,    54,     0,
     212,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -48,     0,   -48,   -48,   188,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   306,   -72,     0,     0,   -72,   212,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,    54,     0,     0,     0,     0,     0,   211,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     211,    30,    31,    32,    33,    34,    35,     0,     0,    36,
       0,   211,    37,     0,    38,     0,     0,    39,     0,     0,
       0,   188,   212,     0,   294,   187,     0,     0,   295,     0,
       0,     0,     0,   211,     0,     0,     0,     0,     0,    54,
       0,     0,   295,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,     0,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     212,     0,     0,     0,     0,     0,   -38,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,     0,     0,   294,     0,     0,     0,   481,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,     0,     0,   212,     0,     0,     0,     0,     0,
       0,   517,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,    54,     0,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,   212,     0,    56,     0,
       0,     0,     0,     0,     0,     0,    56,     0,   188,   295,
       0,   236,   236,     0,   212,     0,     0,     0,    54,    56,
      56,     0,     0,   295,   572,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   213,
      56,     0,   237,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,   256,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,
     -39,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,     0,
     297,   189,     0,   -39,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,     0,    56,     0,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
       0,   -37,   -37,   189,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   328,     0,     0,   -72,   -72,   213,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,    56,     0,     0,     0,     0,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
     213,     0,   295,   188,     0,     0,   297,     0,     0,     0,
       0,   212,     0,     0,     0,     0,     0,    56,     0,     0,
     297,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,
       0,   -40,   -40,     0,   -40,   -40,   -40,   -40,   213,     0,
       0,     0,     0,     0,   -40,   446,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,   295,     0,     0,     0,   482,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
       0,     0,   213,     0,     0,     0,     0,     0,     0,   518,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,    56,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,    62,     0,     0,     0,
       0,     0,     0,     0,    62,     0,   189,   297,     0,   237,
     237,     0,   213,     0,     0,     0,    56,    62,    62,     0,
       0,   297,   573,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195,   219,    62,     0,
     238,   238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,   257,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,     0,     0,   -70,     0,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,   303,   195,
       0,   -70,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,     0,    62,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,
     -38,   195,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -81,     0,     0,   -81,   219,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,    62,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   195,   219,     0,
     297,   189,     0,     0,   303,     0,     0,     0,     0,   213,
       0,     0,     0,     0,     0,    62,     0,     0,   303,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,     0,     0,   -52,     0,   -52,
     -52,     0,   -52,   -52,   -52,   -52,   219,     0,     0,     0,
       0,     0,   -52,   448,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
       0,   297,     0,     0,     0,   484,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,     0,     0,
     219,     0,     0,     0,     0,     0,     0,   520,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
      62,     0,     0,   219,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,    63,     0,     0,     0,     0,     0,
       0,     0,    63,     0,   195,   303,     0,   238,   238,     0,
     219,     0,     0,     0,    62,    63,    63,     0,     0,   303,
     575,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,   220,    63,     0,   239,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,   258,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,   -49,     0,   -49,   -49,     0,   -49,
     -49,   -49,   -49,     0,     0,     0,   304,   196,     0,   -49,
       0,     0,     0,     0,     0,     0,     0,    63,     0,     0,
       0,     0,    63,     0,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,     0,   -39,   -39,   196,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -80,
       0,     0,   -80,   220,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,    63,     0,     0,
       0,     0,     0,   219,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   220,     0,   303,   195,
       0,     0,   304,     0,     0,     0,     0,   219,     0,     0,
       0,     0,     0,    63,     0,     0,   304,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,   -69,     0,   -69,   -69,     0,
     -69,   -69,   -69,   -69,   220,     0,     0,     0,     0,     0,
     -69,   449,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   220,     0,     0,   303,
       0,     0,     0,   485,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,     0,     0,   220,     0,
       0,     0,     0,     0,     0,   521,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,    63,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
     220,     0,    60,     0,     0,     0,     0,     0,     0,     0,
      60,     0,   196,   304,     0,   239,   239,     0,   220,     0,
       0,     0,    63,    82,    60,     0,     0,   304,   576,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,     0,     0,     0,     0,     0,   -72,     0,     0,     0,
       0,   350,   193,   217,    60,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
      60,    55,   116,   117,    60,    60,    60,    60,     0,    66,
       0,     0,     0,   -81,     0,     0,     0,     0,     0,     0,
      78,     0,   -81,    55,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,     0,     0,
       0,     0,     0,     0,   301,   193,     0,     0,     0,     0,
     102,   103,   104,    55,   108,    60,     0,     0,     0,     0,
      60,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,     0,     0,   -53,     0,   -53,   -53,   336,   -53,   -53,
     -53,   -53,   413,   414,   415,   416,   417,   418,   -53,     0,
       0,     0,   137,   296,   139,   140,     0,     0,     0,     0,
       0,   358,     0,     0,    55,   145,     0,     0,     0,    55,
       0,   305,     0,     0,     0,    60,     0,     0,     0,     0,
     312,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,   334,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   217,     0,   304,   196,     0,     0,
     301,     0,     0,     0,     0,   220,     0,     0,   356,     0,
       0,    60,     0,     0,   409,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,   379,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
     450,   451,   388,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   304,     0,   394,
       0,     0,   486,   487,   193,   193,   193,   193,     0,     0,
      55,   407,     0,     0,     0,     0,   217,     0,     0,     0,
       0,     0,     0,     0,   522,   523,   217,   217,   217,   217,
       0,     0,     0,     0,     0,     0,    60,     0,     0,   217,
       0,   428,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     193,   301,     0,   464,     0,     0,   217,     0,     0,     0,
      60,     0,     0,     0,     0,   301,     0,   577,   578,   301,
     301,   301,   301,     0,     0,   500,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,     0,   -54,    55,   -54,   -54,   537,   -54,
     -54,   -54,   -54,     0,     0,     0,     0,   542,     0,   -54,
       0,     0,     0,     0,     0,     0,    58,     0,   546,   547,
     296,   549,     0,     0,    58,   553,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
       0,     0,    59,     0,     0,     0,     0,     0,   589,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,     0,   599,     0,    59,     0,   191,   215,    58,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,    58,     0,     0,     0,   118,   119,
     120,   121,   192,   216,    59,     0,     0,     0,   610,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,    59,    59,    59,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   299,   191,
       0,     0,     0,     0,   621,     0,     0,     0,     0,    58,
       0,     0,     0,     0,    58,     0,   215,     0,     0,   217,
       0,     0,     0,     0,   300,   192,     0,     0,     0,     0,
     217,     0,     0,     0,     0,    59,     0,     0,     0,     0,
      59,   217,   216,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   301,   193,     0,     0,     0,   643,
       0,     0,   -79,   217,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,   646,     0,     0,   649,    58,
       0,     0,     0,     0,     0,     0,   652,     0,     0,   655,
       0,     0,     0,     0,     0,     0,     0,   658,     0,     0,
     661,     0,     0,     0,     0,    59,     0,     0,   664,     0,
       0,   665,     0,   296,   667,   301,     0,   191,   215,   668,
       0,     0,   671,     0,   299,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,     0,     0,     0,
       0,     0,     0,   192,   216,     0,     0,     0,     0,     0,
     300,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     693,    59,     0,     0,   694,     0,   215,     0,   695,     0,
       0,   696,     0,     0,     0,   697,   452,   453,   454,   455,
       0,     0,     0,     0,   296,     0,     0,     0,   215,     0,
       0,     0,   216,     0,     0,     0,     0,     0,   488,   489,
     490,   491,     0,     0,     0,     0,     0,     0,     0,     0,
     215,     0,     0,     0,   216,     0,     0,     0,     0,     0,
     524,   525,   526,   527,   192,   192,   192,   192,     0,     0,
      58,     0,     0,   215,     0,     0,   216,     0,     0,     0,
       0,     0,   215,     0,     0,     0,   216,   216,   216,   216,
       0,     0,     0,     0,   191,   299,    59,     0,     0,   216,
     215,     0,    57,     0,    58,     0,     0,     0,   216,   299,
      57,     0,     0,   579,   580,   581,   582,     0,     0,     0,
     192,   300,     0,     0,    57,     0,   216,     0,     0,     0,
      59,     0,     0,     0,     0,   300,     0,     0,     0,   300,
     300,   300,   300,     0,     0,     0,   -48,     0,     0,     0,
       0,     0,   190,   214,    57,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     114,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,
       0,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,     0,   298,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,     0,
      57,     0,   214,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
       0,   -70,     0,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,     0,   -55,   215,   -55,   -55,     0,   -55,   -55,   -55,
     -55,     0,     0,     0,   215,    57,     0,   -55,     0,     0,
       0,     0,     0,     0,     0,   215,     0,     0,     0,   216,
       0,     0,     0,     0,   381,     0,     0,     0,   299,   191,
     216,     0,     0,     0,     0,     0,     0,   215,     0,     0,
       0,   216,     0,   390,   391,     0,     0,     0,     0,     0,
     298,     0,     0,     0,   300,   192,     0,     0,     0,     0,
       0,    57,     0,   216,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
       0,     0,   -56,     0,   -56,   -56,     0,   -56,   -56,   -56,
     -56,     0,   214,     0,     0,   -79,     0,   -56,   -79,   299,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,     0,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   300,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   214,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     0,     0,   -57,    57,   -57,   -57,   214,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,   214,     0,
     -57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,   298,     0,     0,     0,     0,   214,     0,     0,     0,
      57,     0,     0,     0,     0,   557,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,   -58,     0,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     419,   420,   421,   422,   423,   424,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,   -62,     0,   -62,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,   -49,     0,   -49,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,     0,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,     0,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   214,
     -42,   -42,     0,   -42,   -42,   -42,   -42,     0,     0,     0,
     214,     0,     0,   -42,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   298,   190,     0,     0,     0,     0,
       0,     0,     0,   214,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,   298,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,     0,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,   -59,     0,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     419,   420,   421,   422,   423,   424,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,     0,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -71,     0,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -60,     0,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     419,   420,   421,   422,   423,   424,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,   -61,     0,   -61,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     419,   420,   421,   422,   423,   424,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -63,     0,   -63,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,     0,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,     0,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -66,     0,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,     0,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,     0,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,     0,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -72,     0,   -72,    64,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,     0,     0,   -81,     0,   -81,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,     0,     0,   -80,     0,   -80,   -80,     0,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,     0,     0,   -79,     0,   -79,   -79,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,   -48,     0,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,   -38,     0,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,   -39,     0,   -39,   -39,     0,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,     0,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,   -70,     0,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,
     -58,   -58,     0,     0,   -58,     0,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
      94,    95,    96,    97,    98,    99,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,
     -62,   -62,     0,     0,   -62,     0,   -62,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,   -49,     0,   -49,   -49,     0,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,     0,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -42,     0,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,     0,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,     0,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,
     -59,   -59,     0,     0,   -59,     0,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
      94,    95,    96,    97,    98,    99,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,     0,     0,   -50,     0,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,     0,     0,   -71,     0,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -60,     0,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
      94,    95,    96,    97,    98,    99,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,
     -61,   -61,     0,     0,   -61,     0,   -61,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
      94,    95,    96,    97,    98,    99,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,     0,   -63,     0,   -63,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,     0,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,     0,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,   -66,     0,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,     0,   -67,     0,   -67,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -68,     0,     0,   -68,     0,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,     0,   -41,   -41,     0,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,   -53,     0,   -53,   -53,     0,   -53,
     -53,   -53,   -53,    88,    89,    90,    91,    92,    93,   -53,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   -43,     0,
     -43,   -43,     0,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,     0,   -43,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -44,     0,   -44,   -44,     0,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,     0,     0,   -44,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,     0,     0,   -50,     0,   -50,   -50,
       0,   -50,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,   -50,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,     0,
     -71,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,     0,
       0,     0,     0,     0,     0,   -71,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,     0,     0,   -75,     0,   -75,   -75,     0,   -75,
     -75,   -75,   -75,     0,     0,     0,     0,     0,     0,   -75,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,
     -41,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,     0,
       0,     0,     0,   -41,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,     0,     0,   -45,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -46,   -46,     0,     0,     0,     0,     0,
       0,    87,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,
     -51,     0,   -51,   -51,     0,   -51,   -51,   -51,   -51,     0,
       0,     0,     0,     0,     0,   -51,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,     0,   -47,     0,   -47,   -47,     0,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,     0,     0,    87,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     -52,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,     0,
     -52,   -52,     0,   -52,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,   -52,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,
       0,     0,   -54,     0,   -54,   -54,     0,   -54,   -54,   -54,
     -54,     0,     0,     0,     0,     0,     0,   -54,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,
     -55,   -55,   -55,   -55,     0,     0,   -55,     0,   -55,   -55,
       0,   -55,   -55,   -55,   -55,     0,     0,     0,     0,     0,
       0,   -55,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,     0,     0,
     -56,     0,   -56,   -56,     0,   -56,   -56,   -56,   -56,     0,
       0,     0,     0,     0,     0,   -56,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,
     -57,   -57,     0,     0,   -57,     0,   -57,   -57,     0,   -57,
     -57,   -57,   -57,     0,     0,     0,     0,     0,     0,   -57,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,     0,     0,   -72,     0,
     -72,   382,     0,   -72,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -72,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
       0,     0,   -81,     0,   -81,   -81,     0,   -81,   -81,   -81,
     -81,     0,     0,     0,     0,     0,     0,   -81,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -80,   -80,
     -80,   -80,   -80,   -80,     0,     0,   -80,     0,   -80,   -80,
       0,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,   -80,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,     0,
     -79,     0,   -79,   -79,     0,   -79,   -79,   -79,   -79,     0,
       0,     0,     0,     0,     0,   -79,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,   -48,     0,     0,   -48,     0,   -48,   -48,     0,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,     0,     0,   -48,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,     0,     0,     0,
       0,     0,     0,   -37,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,   -38,     0,   -38,   -38,     0,   -38,   -38,   -38,
     -38,     0,     0,     0,     0,     0,     0,   -38,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,   -39,
       0,   -39,   -39,   -39,   -39,     0,     0,     0,     0,     0,
       0,   -39,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
     -40,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,     0,
       0,     0,     0,     0,     0,   -40,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
     -70,   -70,     0,     0,   -70,     0,   -70,   -70,     0,   -70,
     -70,   -70,   -70,     0,     0,     0,     0,     0,     0,   -70,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,   -49,     0,     0,   -49,     0,
     -49,   -49,     0,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,     0,     0,   -49,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
       0,     0,   -69,     0,   -69,   -69,     0,   -69,   -69,   -69,
     -69,     0,     0,     0,     0,     0,     0,   -69,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,   -42,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
       0,   -42,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
     -43,     0,   -43,   -43,     0,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,     0,   -43,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,     0,   -44,   -44,     0,   -44,
     -44,   -44,   -44,     0,     0,     0,     0,     0,     0,   -44,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,     0,     0,   -50,     0,
     -50,   -50,     0,   -50,   -50,   -50,   -50,     0,     0,     0,
       0,     0,     0,   -50,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
       0,     0,   -71,     0,   -71,   -71,     0,   -71,   -71,   -71,
     -71,     0,     0,     0,     0,     0,     0,   -71,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,   -75,   -75,     0,     0,   -75,     0,   -75,   -75,
       0,   -75,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,   -75,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,     0,   -41,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,     0,     0,   -41,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,     0,   -45,   -45,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,     0,     0,   -45,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
     -32,   -32,     0,   -32,   -32,   411,   -32,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,     0,   -31,   -31,     0,
     -31,   -31,   411,   -31,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,   -32,   -32,     0,   -32,   -32,    86,
     -32,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
       0,   -31,   -31,     0,   -31,   -31,    86,   -31,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,     0,   -18,     0,   -18,   -18,
       0,   -18,   410,     0,   -18,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,     0,     0,   -21,     0,   -21,   -21,     0,   -21,   -21,
       0,   -21,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,   -25,
     -25,     0,   -25,   -25,     0,   -25,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,     0,   -23,   -23,     0,   -23,
     -23,     0,   -23,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,     0,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,
     -27,   -27,     0,   -27,   -27,     0,   -27,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,   -26,   -26,     0,
     -26,   -26,     0,   -26,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,   -28,   -28,     0,   -28,   -28,     0,
     -28,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
       0,   -29,   -29,     0,   -29,   -29,     0,   -29,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,   -30,
       0,   -30,   -30,     0,   -30,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,   -18,
     -18,     0,     0,   -18,     0,   -18,   -18,     0,   -18,    85,
       0,   -18,   -21,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,   -21,   -21,     0,   -21,   -21,     0,   -21,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,   -24,
     -24,     0,   -24,   -24,     0,   -24,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,     0,   -25,   -25,     0,   -25,
     -25,     0,   -25,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,     0,   -23,   -23,     0,   -23,   -23,     0,   -23,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,
     -22,   -22,     0,   -22,   -22,     0,   -22,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,   -27,     0,   -27,   -27,     0,
     -27,   -27,     0,   -27,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
       0,   -28,   -28,     0,   -28,   -28,     0,   -28,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,     0,   -30,   -30,     0,   -30,   -30,
       0,   -30,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   141,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,     0,   -33,   -33,     0,   -33,     0,     0,   -33,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,     0,     0,   -13,     0,   -13,
     -13,     0,   -13,     0,     0,   -13,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,     0,     0,   -14,     0,   -14,   -14,     0,   -14,
       0,     0,   -14,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,     0,
       0,   -19,     0,   -19,   -19,     0,   -19,     0,     0,   -19,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,
     -20,   -20,     0,   -20,     0,     0,   -20,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,   -36,   -36,     0,
     -36,     0,     0,   -36,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
       0,     0,   -15,     0,   -15,   -15,     0,   -15,     0,     0,
     -15,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,   -35,   -35,     0,   -35,     0,     0,   -35,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,     0,     0,    36,     0,    83,    37,
       0,    38,     0,     0,    39,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,     0,   -17,   -17,   -17,   -17,   -17,
     -17,     0,     0,   -17,     0,   -17,   -17,     0,   -17,     0,
       0,   -17,   -19,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,
     -19,     0,   -19,   -19,     0,   -19,     0,     0,   -19,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,   -20,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -16,   -16,
     -16,   -16,     0,     0,   -16,     0,   -16,   -16,     0,   -16,
       0,     0,   -16,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,     0,   -36,   -36,     0,   -36,     0,     0,   -36,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,   -13,   -13,   -13,   -13,     0,     0,   -13,     0,
     -13,   -13,     0,   -13,     0,     0,   -13,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,   -14,   -14,     0,     0,   -14,     0,   -14,   -14,     0,
     -14,     0,     0,   -14,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,   -34,   -34,     0,   -34,     0,     0,
     -34,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,   -35,   -35,     0,   -35,     0,     0,   -35,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    30,    31,
      32,    33,    34,    35,     0,     0,    36,     0,   534,    37,
       0,    38,     0,     0,    39,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,    30,    31,    32,    33,    34,
      35,     0,     0,    36,     0,   554,    37,     0,    38,     0,
       0,    39,   -15,   -15,   -15,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,     0,     0,
     -15,     0,   -15,   -15,     0,   -15,     0,     0,   -15,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,   -37,   -33,
     -33,     0,   -33,     0,     0,   -33,     0,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -38,     0,     0,     0,     0,     0,     0,     0,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -39,     0,     0,     0,
       0,     0,     0,     0,     0,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -40,     0,     0,     0,     0,     0,     0,     0,     0,   -40,
       0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -58,     0,
       0,     0,     0,     0,     0,     0,     0,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   366,   367,   368,   369,
     370,   371,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -49,     0,     0,     0,
       0,     0,     0,     0,     0,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -69,     0,     0,     0,     0,     0,     0,     0,     0,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,   -42,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -43,     0,
       0,     0,     0,     0,     0,     0,     0,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -44,     0,     0,     0,     0,     0,     0,     0,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   366,   367,   368,   369,   370,   371,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,   -50,
       0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -71,     0,     0,     0,     0,     0,
       0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -60,     0,
       0,     0,     0,     0,     0,     0,     0,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   366,   367,   368,   369,
     370,   371,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     366,   367,   368,   369,   370,   371,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -64,     0,     0,     0,     0,     0,     0,     0,     0,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -65,     0,     0,     0,     0,     0,
       0,     0,     0,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -75,     0,     0,     0,     0,     0,     0,     0,     0,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -41,     0,     0,     0,     0,     0,
       0,     0,     0,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -48,     0,     0,   -48,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -37,     0,     0,   -37,     0,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -38,     0,
       0,   -38,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -39,     0,     0,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -40,     0,     0,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -70,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -58,     0,     0,   -58,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   322,   323,   324,   325,   326,   327,   -62,     0,
       0,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -49,     0,     0,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -69,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -42,     0,     0,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -43,     0,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -44,     0,
       0,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -59,     0,     0,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   322,   323,
     324,   325,   326,   327,   -50,     0,     0,   -50,     0,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -71,     0,     0,   -71,     0,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -60,     0,     0,   -60,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   322,   323,   324,   325,   326,   327,   -61,     0,
       0,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     322,   323,   324,   325,   326,   327,   -63,     0,     0,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -64,     0,     0,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -65,     0,     0,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -66,     0,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,
       0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -75,     0,     0,   -75,     0,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -41,     0,     0,   -41,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -45,     0,     0,   -45,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -80,   -80,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -79,   -79,     0,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -40,   -40,     0,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   344,   345,   346,   347,
     348,   349,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -43,   -43,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -59,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   344,   345,
     346,   347,   348,   349,   -50,   -50,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   344,   345,   346,   347,
     348,   349,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   344,   345,   346,   347,   348,   349,   -63,   -63,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -75,   -75,     0,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -45,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45
};

static const yytype_int16 yycheck[] =
{
      18,   130,   130,   130,   130,   130,    16,   130,    26,   130,
     130,   130,   141,     5,    19,    19,     5,   146,   158,    24,
       3,    39,    40,    28,    28,     3,     4,   221,     6,     7,
       0,    36,    36,    25,     0,     5,    28,    20,    16,    17,
      18,     3,   182,    21,    19,     3,    24,    19,    26,    22,
      68,    69,    70,    28,    72,    73,    28,     0,    27,    28,
      70,    36,     5,     5,    36,     3,   206,    36,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   306,   277,    19,     3,     4,     0,     6,     7,
       0,   231,     5,    28,    24,     5,    18,     0,    16,    17,
      18,    36,     5,    21,   328,    19,    24,    19,    26,    24,
     250,    29,   130,   131,    28,    24,    28,    24,    40,    24,
      19,     3,    36,   141,    36,    26,   350,     0,   146,    28,
     148,   141,     5,    24,    19,    25,   146,    36,    28,   279,
      24,     3,     4,    28,     6,     7,    36,    24,    70,   373,
      27,    36,    19,    24,    16,    17,    18,    25,   382,    21,
      28,    28,    24,    25,    26,   183,    28,    29,   392,    36,
      27,    28,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    25,   207,
      21,    28,    23,    24,    26,    26,    27,    28,    29,    36,
      19,    25,    25,   221,    28,    36,    19,     3,     4,    28,
       6,     7,    36,    25,    25,    28,    28,    36,    19,   141,
      16,    17,    18,    36,   146,    21,    25,    28,    24,    28,
      26,     3,     4,    29,     6,     7,    26,    36,    19,    24,
      25,   259,   260,    28,    16,    17,    18,    28,   266,    21,
      25,    36,    24,    28,    26,    36,    19,    29,    19,   277,
      25,    36,   280,    28,    24,    28,    25,    28,   397,   397,
     397,   397,   397,    36,   397,    36,   397,   397,   397,    19,
       3,     4,    19,     6,     7,     3,    25,     0,    28,    28,
     308,    28,     5,    16,    17,    18,    36,   315,    21,   221,
     440,    24,    19,    26,   322,   323,   324,   325,   326,   327,
       0,    28,   330,    25,    25,     5,    28,    28,    24,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    25,    24,   352,    28,   476,    25,    27,    28,
      28,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   277,    19,   375,    19,    24,
      24,    19,    27,    28,    24,    28,   384,    28,    18,   593,
      28,    36,   512,    36,    25,    36,    26,    28,   396,   397,
     604,   399,   400,    19,   402,    36,    24,    25,   406,    39,
      40,   615,    28,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,    27,    28,    27,
      28,     3,     4,   637,     6,     7,    36,    24,    68,    69,
      70,    19,    72,    73,    16,    17,    18,   567,    25,    21,
      28,    28,    24,    24,    26,    25,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     372,    25,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    25,    25,
      21,    28,    23,    24,    24,    26,    27,    28,    29,    36,
     130,   131,    25,    19,   406,    36,    25,    27,    28,    28,
      19,   141,    28,    25,    25,    25,   146,    36,   148,    28,
      36,   630,   630,   630,   630,   630,    25,   630,    25,   630,
     630,   630,    25,    25,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      24,    24,    21,   183,    23,    24,    24,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    24,    27,    28,   207,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   221,   701,   701,   701,   701,   701,   595,   701,    24,
     701,   701,   701,     3,     4,    19,     6,     7,   606,    26,
      25,    19,    25,    28,    28,    28,    16,    17,    18,   617,
      28,    21,    36,    36,    24,    19,    26,    24,    36,   259,
     260,    19,   630,   631,    28,    19,   266,    27,    28,    24,
      28,   639,    36,     3,    28,    24,    36,   277,    36,    24,
     280,     3,    36,    34,    35,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    25,     3,    21,    28,    23,    24,   308,    26,
      27,    28,    29,     3,     4,   315,     6,     7,    25,    36,
      26,    28,    25,    27,    28,    28,    16,    17,    18,    36,
     330,    21,    36,   701,    24,    26,    26,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      25,    25,   352,    28,    28,    25,    25,     3,    28,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    27,    28,   375,    19,    25,    25,     3,
      28,    28,    36,    25,   384,    28,    18,    30,    31,    32,
      33,    34,    35,    36,    26,    25,   396,   397,    25,   399,
     400,    28,   402,   154,   155,   156,   406,    39,    40,    36,
      26,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,    19,    19,   178,   179,   180,
      19,    26,     3,    25,    28,    28,    68,    69,    70,    28,
      72,    73,    36,    36,    26,    25,    25,    36,    28,    28,
      24,   202,   203,   204,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     3,     4,
      19,     6,     7,    24,     3,    25,   227,   228,   229,    28,
      24,    16,    17,    18,    27,    28,    21,    36,    24,    24,
      24,    26,    25,    36,    29,   246,   247,   248,   130,   131,
      25,    25,    25,    28,    28,    28,    27,    28,    24,   141,
      19,    36,    36,    36,   146,    36,   148,    25,   269,    28,
      28,    25,    25,   274,   275,   276,    25,    25,    36,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    25,    25,    21,    28,    23,
      24,   183,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    25,
       3,     4,    28,     6,     7,   207,    25,    27,    28,    28,
      36,    27,    28,    16,    17,    18,    36,    36,    21,   221,
      36,    24,    24,    26,    25,   595,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   606,    13,    14,    15,
      16,    17,    18,    25,    24,    21,    22,   617,    24,    26,
      26,    25,    25,    29,    28,    28,    25,   259,   260,    28,
     630,   631,    36,    36,   266,    25,     3,    36,    28,   639,
      25,    25,     3,    28,    28,   277,    36,    26,   280,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     3,    26,    21,    25,    23,
      24,    28,    26,    27,    28,    29,   308,    25,    25,    36,
      28,    28,    36,   315,    25,   436,   437,   438,    36,    36,
      19,    25,    25,    25,    28,    28,    28,    25,   330,    28,
      28,   701,    36,    36,    36,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    25,    25,
     352,   472,   473,   474,    26,    25,    25,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    27,    28,   375,    30,    31,    32,    33,    34,    35,
      36,    25,   384,    25,    18,    25,    28,   508,   509,   510,
      27,    28,    26,    19,   396,   397,     3,   399,   400,    36,
     402,    17,    28,    -1,   406,    39,    40,    -1,    -1,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,    27,    28,    -1,    -1,    25,    27,    28,
      28,    -1,    36,    -1,    68,    69,    70,    36,    72,    73,
      27,    28,   563,   564,   565,    25,    -1,    25,    28,    36,
      28,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    19,    23,    24,    -1,    26,
      27,    28,    29,    -1,    28,    19,   130,   131,    -1,    36,
      27,    28,     3,     4,    28,     6,     7,   141,    -1,    36,
      27,    28,   146,    -1,   148,    16,    17,    18,    25,    36,
      21,    28,    -1,    24,    -1,    26,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    25,    -1,    21,    28,    23,    24,   183,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,     3,     4,    25,
       6,     7,    28,   207,    27,    28,    25,    27,    28,    28,
      16,    17,    18,    36,    -1,    21,    36,   221,    24,    -1,
      26,    25,    -1,   595,    28,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   606,    13,    14,    15,    16,    17,
      18,    27,    28,    21,    22,   617,    24,    -1,    26,    -1,
      36,    29,    27,    28,    25,   259,   260,    28,   630,   631,
      -1,    36,   266,    27,    28,    27,    28,   639,    25,    -1,
      -1,    28,    36,   277,    36,    -1,   280,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    25,    -1,    21,    28,    23,    24,    -1,
      26,    27,    28,    29,   308,    25,    -1,    -1,    28,    25,
      36,   315,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    27,    28,    27,    28,    25,   330,    -1,    28,   701,
      36,    -1,    36,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    25,    25,   352,    28,
      28,    25,    -1,    -1,    28,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,    27,
      28,   375,    27,    28,    27,    28,    27,    28,    36,    -1,
     384,    36,    18,    36,    25,    36,    25,    28,    25,    28,
      26,    28,   396,   397,    25,   399,   400,    28,   402,    -1,
      -1,    -1,   406,    39,    40,    -1,    -1,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,    25,    -1,    -1,    28,     3,     4,    25,     6,     7,
      28,    -1,    68,    69,    70,    -1,    72,    73,    16,    17,
      18,    -1,    -1,    21,    -1,    -1,    24,    -1,    26,    -1,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,   130,   131,    -1,    36,    -1,    -1,
       3,     4,    -1,     6,     7,   141,    -1,    -1,    -1,    -1,
     146,    -1,   148,    16,    17,    18,    -1,    -1,    21,    -1,
      -1,    24,    -1,    26,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,   183,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     3,     4,    -1,     6,     7,
      -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    21,    -1,   221,    24,    -1,    26,    -1,
      -1,   595,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   606,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    22,   617,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,   259,   260,    -1,   630,   631,    -1,    -1,
     266,    -1,    -1,    -1,    -1,   639,    -1,    -1,    -1,    -1,
      -1,   277,    -1,    -1,   280,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      28,    29,   308,    -1,    -1,    -1,    -1,    -1,    36,   315,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    -1,    -1,   701,    -1,    -1,
      -1,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    -1,    -1,   375,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
     396,   397,    -1,   399,   400,    -1,   402,    -1,    -1,    -1,
     406,    39,    40,    -1,    -1,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      68,    69,    70,    -1,    72,    73,    16,    17,    18,    -1,
      -1,    21,    -1,    -1,    24,    -1,    26,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,   130,   131,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,   183,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    24,    25,    -1,    -1,    28,   207,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,   221,    -1,    -1,    -1,    -1,    -1,   595,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     606,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,   617,    24,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,   259,   260,    -1,   630,   631,    -1,    -1,   266,    -1,
      -1,    -1,    -1,   639,    -1,    -1,    -1,    -1,    -1,   277,
      -1,    -1,   280,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,    27,    28,    29,
     308,    -1,    -1,    -1,    -1,    -1,    36,   315,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,    -1,    -1,   701,    -1,    -1,    -1,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,
      -1,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,    -1,    -1,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,   396,   397,
      -1,   399,   400,    -1,   402,    -1,    -1,    -1,   406,    39,
      40,    -1,    -1,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
     130,   131,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,   183,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    24,    -1,    -1,    27,    28,   207,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   221,    -1,    -1,    -1,    -1,    -1,   595,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   606,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   617,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,
     260,    -1,   630,   631,    -1,    -1,   266,    -1,    -1,    -1,
      -1,   639,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,
     280,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,   308,    -1,
      -1,    -1,    -1,    -1,    36,   315,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     330,    -1,    -1,   701,    -1,    -1,    -1,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
      -1,    -1,   352,    -1,    -1,    -1,    -1,    -1,    -1,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    -1,    -1,   375,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,   396,   397,    -1,   399,
     400,    -1,   402,    -1,    -1,    -1,   406,    39,    40,    -1,
      -1,   411,   412,   413,   414,   415,   416,   417,   418,   419,
     420,   421,   422,   423,   424,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,   130,   131,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,   183,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    25,    -1,    -1,    28,   207,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,   221,
      -1,    -1,    -1,    -1,    -1,   595,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   606,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   617,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,   260,    -1,
     630,   631,    -1,    -1,   266,    -1,    -1,    -1,    -1,   639,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,   280,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,    -1,    26,    27,    28,    29,   308,    -1,    -1,    -1,
      -1,    -1,    36,   315,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,
      -1,   701,    -1,    -1,    -1,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
     352,    -1,    -1,    -1,    -1,    -1,    -1,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,   396,   397,    -1,   399,   400,    -1,
     402,    -1,    -1,    -1,   406,    39,    40,    -1,    -1,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,   130,   131,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   146,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,   183,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    25,
      -1,    -1,    28,   207,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   221,    -1,    -1,
      -1,    -1,    -1,   595,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   606,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   617,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,   260,    -1,   630,   631,
      -1,    -1,   266,    -1,    -1,    -1,    -1,   639,    -1,    -1,
      -1,    -1,    -1,   277,    -1,    -1,   280,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      26,    27,    28,    29,   308,    -1,    -1,    -1,    -1,    -1,
      36,   315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,   701,
      -1,    -1,    -1,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,    -1,
      -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,   396,   397,    -1,   399,   400,    -1,   402,    -1,
      -1,    -1,   406,    39,    40,    -1,    -1,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    68,    69,    70,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      86,    18,    88,    89,    90,    91,    92,    93,    -1,    26,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    28,    40,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,   141,    -1,    -1,    -1,    -1,
     146,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,   183,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,   129,   130,   131,   132,    -1,    -1,    -1,    -1,
      -1,   207,    -1,    -1,   141,   142,    -1,    -1,    -1,   146,
      -1,   148,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,
     157,   595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   617,   181,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   259,   260,    -1,   630,   631,    -1,    -1,
     266,    -1,    -1,    -1,    -1,   639,    -1,    -1,   205,    -1,
      -1,   277,    -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     316,   317,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   330,    -1,    -1,   701,    -1,   266,
      -1,    -1,   338,   339,   340,   341,   342,   343,    -1,    -1,
     277,   278,    -1,    -1,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   360,   361,   362,   363,   364,   365,
      -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,   375,
      -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,   397,    -1,   330,    -1,    -1,   402,    -1,    -1,    -1,
     406,    -1,    -1,    -1,    -1,   411,    -1,   413,   414,   415,
     416,   417,   418,    -1,    -1,   352,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,   372,    23,    24,   375,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,   384,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,   395,   396,
     397,   398,    -1,    -1,    26,   402,    -1,    -1,    -1,   406,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,   425,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,   439,    -1,    40,    -1,    68,    69,    70,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    86,    -1,    -1,    -1,    90,    91,
      92,    93,    68,    69,    70,    -1,    -1,    -1,   475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,   148,    -1,    -1,   595,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
     606,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,   617,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,   630,   631,    -1,    -1,    -1,   566,
      -1,    -1,    28,   639,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   592,    -1,    -1,   595,   221,
      -1,    -1,    -1,    -1,    -1,    -1,   603,    -1,    -1,   606,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   614,    -1,    -1,
     617,    -1,    -1,    -1,    -1,   221,    -1,    -1,   625,    -1,
      -1,   628,    -1,   630,   631,   701,    -1,   259,   260,   636,
      -1,    -1,   639,    -1,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     677,   277,    -1,    -1,   681,    -1,   308,    -1,   685,    -1,
      -1,   688,    -1,    -1,    -1,   692,   318,   319,   320,   321,
      -1,    -1,    -1,    -1,   701,    -1,    -1,    -1,   330,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,   340,   341,
     342,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     352,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,
     362,   363,   364,   365,   340,   341,   342,   343,    -1,    -1,
     372,    -1,    -1,   375,    -1,    -1,   352,    -1,    -1,    -1,
      -1,    -1,   384,    -1,    -1,    -1,   362,   363,   364,   365,
      -1,    -1,    -1,    -1,   396,   397,   372,    -1,    -1,   375,
     402,    -1,    18,    -1,   406,    -1,    -1,    -1,   384,   411,
      26,    -1,    -1,   415,   416,   417,   418,    -1,    -1,    -1,
     396,   397,    -1,    -1,    40,    -1,   402,    -1,    -1,    -1,
     406,    -1,    -1,    -1,    -1,   411,    -1,    -1,    -1,   415,
     416,   417,   418,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      86,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,   148,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,   595,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,   606,   221,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   617,    -1,    -1,    -1,   595,
      -1,    -1,    -1,    -1,   240,    -1,    -1,    -1,   630,   631,
     606,    -1,    -1,    -1,    -1,    -1,    -1,   639,    -1,    -1,
      -1,   617,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,
     266,    -1,    -1,    -1,   630,   631,    -1,    -1,    -1,    -1,
      -1,   277,    -1,   639,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,   308,    -1,    -1,    25,    -1,    36,    28,   701,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   352,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,   372,    23,    24,   375,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,   384,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,   397,    -1,    -1,    -1,    -1,   402,    -1,    -1,    -1,
     406,    -1,    -1,    -1,    -1,   411,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,   595,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
     606,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   630,   631,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   639,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,   701,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    28,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      26,    27,    28,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    28,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    27,    28,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,    -1,    26,    27,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    27,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      -1,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    -1,    23,
      24,    -1,    26,    -1,    -1,    29,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,
      -1,    -1,    29,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      -1,    21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    -1,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    29,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    -1,    21,    -1,    23,    24,    -1,
      26,    -1,    -1,    29,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    -1,    21,    -1,    23,    24,    -1,    26,    -1,    -1,
      29,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    -1,    21,
      -1,    23,    24,    -1,    26,    -1,    -1,    29,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    -1,    21,    -1,    23,    24,
      -1,    26,    -1,    -1,    29,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    23,    24,    -1,    26,    -1,
      -1,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    -1,
      21,    -1,    23,    24,    -1,    26,    -1,    -1,    29,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    -1,    21,    19,    23,
      24,    -1,    26,    -1,    -1,    29,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    45,    46,    47,    48,    49,     3,     0,    47,
      24,    27,     5,    50,    51,     3,    25,    28,    22,    53,
      51,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      13,    14,    15,    16,    17,    18,    21,    24,    26,    29,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    70,    71,    72,    73,    74,
      75,    76,    78,    80,    24,     3,    70,    24,    24,    24,
      69,    24,    24,    24,    24,    69,    69,    69,    70,     3,
      20,    77,    75,    23,    55,    27,    28,    36,    30,    31,
      32,    33,    34,    35,    37,    38,    39,    40,    41,    42,
      70,    79,    70,    70,    70,    52,    53,    55,    70,    76,
      76,     3,    25,    26,    72,    76,    75,    75,    73,    73,
      73,    73,    76,    76,    76,    76,    76,    76,    25,    28,
      25,    27,    19,    25,    25,    25,    25,    70,    52,    70,
      70,    12,    27,    25,    52,    70,    25,    52,    24,     3,
       4,     6,     7,    16,    17,    18,    21,    24,    26,    29,
      64,    65,    66,    67,    68,    71,    72,    73,    74,    75,
      76,    78,    80,     3,     4,     6,     7,    16,    17,    18,
      21,    24,    26,    29,    64,    65,    66,    67,    68,    71,
      72,    73,    74,    75,    76,    78,    80,     3,     4,     6,
       7,    16,    17,    18,    21,    24,    26,    29,    64,    65,
      66,    67,    68,    71,    72,    73,    74,    75,    76,    78,
      80,    22,     3,     4,     6,     7,    16,    17,    18,    21,
      24,    26,    64,    65,    66,    67,    68,    71,    78,    80,
      28,     3,     4,     6,     7,    16,    17,    18,    21,    24,
      26,    64,    65,    66,    67,    68,    71,    78,    80,    28,
      28,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      13,    14,    15,    16,    17,    18,    21,    22,    24,    26,
      29,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    70,    71,    72,    73,
      74,    75,    76,    78,    80,    70,    24,    24,    24,    69,
      69,    69,    70,    77,    75,    36,    30,    31,    32,    33,
      34,    35,    37,    38,    39,    40,    41,    42,    24,    24,
      24,    69,    69,    69,    70,    77,    75,    36,    30,    31,
      32,    33,    34,    35,    37,    38,    39,    40,    41,    42,
      24,    24,    24,    69,    69,    69,    70,    77,    75,    36,
      30,    31,    32,    33,    34,    35,    37,    38,    39,    40,
      41,    42,    54,    24,    24,    24,    69,    69,    69,    70,
      77,    72,    24,    24,    24,    69,    69,    69,    70,    77,
      72,    72,    24,     3,    70,    24,    24,    69,    24,    24,
      24,    24,    24,    69,    69,    69,    54,    70,    77,    75,
      27,    28,    36,    30,    31,    32,    33,    34,    35,    37,
      38,    39,    40,    41,    42,    19,    79,     3,    70,    25,
      26,     3,     4,     6,     7,    16,    17,    18,    21,    24,
      26,    64,    65,    66,    67,    68,    71,    76,    78,    80,
      75,    75,    73,    73,    73,    73,    76,    76,    76,    76,
      76,    76,    79,     3,    70,    25,    26,     3,     4,     6,
       7,    16,    17,    18,    21,    24,    26,    64,    65,    66,
      67,    68,    71,    76,    78,    80,    75,    75,    73,    73,
      73,    73,    76,    76,    76,    76,    76,    76,    79,     3,
      70,    25,    26,     3,     4,     6,     7,    16,    17,    18,
      21,    24,    26,    64,    65,    66,    67,    68,    71,    76,
      78,    80,    75,    75,    73,    73,    73,    73,    76,    76,
      76,    76,    76,    76,    23,    79,     3,    70,    25,    26,
      79,     3,    70,    25,    26,    79,    70,    70,    52,    70,
      76,    76,     3,    70,    23,    25,    26,    72,     3,     4,
       6,     7,    16,    17,    18,    21,    24,    26,    64,    65,
      66,    67,    68,    71,    76,    78,    80,    75,    75,    73,
      73,    73,    73,    76,    76,    76,    76,    76,    76,    70,
      25,    25,    19,    24,    24,    24,    69,    69,    69,    70,
      77,    25,    25,    19,    24,    24,    24,    69,    69,    69,
      70,    77,    25,    25,    19,    24,    24,    24,    69,    69,
      69,    70,    77,    25,    25,    19,    25,    25,    19,    25,
      25,    27,    25,    25,    25,    25,    19,    24,    24,    24,
      69,    69,    69,    70,    77,    25,    70,    79,     3,    70,
      25,    26,    70,    79,     3,    70,    25,    26,    70,    79,
       3,    70,    25,    26,    70,    70,    52,    70,    70,    79,
       3,    70,    25,    26,    25,    25,    25,    19,    25,    25,
      25,    19,    25,    25,    25,    19,    25,    25,    27,    25,
      25,    25,    19,    70,    70,    70,    70,    70,    25,    25,
      25,    25,    25,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    50,    51,    52,    52,    53,    54,    54,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    57,    58,    59,
      59,    60,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    65,    66,    67,    68,    69,    70,    70,    71,    71,
      71,    72,    72,    73,    73,    73,    73,    73,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    77,    77,    78,    79,    79,    79,    80,
      80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     3,
       1,     0,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     4,
       4,     2,     1,     5,     7,     9,     3,     1,     1,     1,
       1,     4,     2,     2,     2,     5,     1,     3,     1,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     1,     2,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     1,     1,     4,     3,     1,     0,     1,
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
#line 3830 "mafralang.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 68 "mafralang.y"
                           {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3838 "mafralang.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 71 "mafralang.y"
              { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3844 "mafralang.tab.c"
    break;

  case 5: /* declaration: var_declaration  */
#line 75 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3850 "mafralang.tab.c"
    break;

  case 6: /* declaration: func_declaration  */
#line 76 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3856 "mafralang.tab.c"
    break;

  case 7: /* var_declaration: TYPE ID SEMICOLON  */
#line 80 "mafralang.y"
                    {
    (yyval.stmt) = addNode(VARIABLE_DECLARATION, NULL, NULL, (yyvsp[-2].strType), (yyvsp[-1].strType));
    addSymbol((yyvsp[-1].strType), (yyvsp[-2].strType), 'V');
  }
#line 3865 "mafralang.tab.c"
    break;

  case 8: /* func_declaration: TYPE ID LEFT_PARENTHESES paramaters RIGHT_PARENTHESES compound_statement  */
#line 87 "mafralang.y"
                                                                           {
    (yyval.stmt) = addNode(FUNCTION_DECLARATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-5].strType), (yyvsp[-4].strType));
    addSymbol((yyvsp[-4].strType), (yyvsp[-5].strType), 'F');
    popStack();
  }
#line 3875 "mafralang.tab.c"
    break;

  case 9: /* paramaters: paramaters COMMA paramater  */
#line 95 "mafralang.y"
                             {
    (yyval.stmt) = addNode(PARAMATERS, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3883 "mafralang.tab.c"
    break;

  case 10: /* paramaters: paramater  */
#line 98 "mafralang.y"
            {
    (yyval.stmt) = addNode(PARAMATERS, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3891 "mafralang.tab.c"
    break;

  case 11: /* paramaters: %empty  */
#line 101 "mafralang.y"
  { (yyval.stmt) = NULL; }
#line 3897 "mafralang.tab.c"
    break;

  case 12: /* paramater: TYPE ID  */
#line 105 "mafralang.y"
          {
    (yyval.stmt) = addNode(PARAMATER, NULL, NULL, (yyvsp[-1].strType), (yyvsp[0].strType));
    addSymbol((yyvsp[0].strType), (yyvsp[-1].strType), 'P');
  }
#line 3906 "mafralang.tab.c"
    break;

  case 13: /* block_struct: compound_statement  */
#line 112 "mafralang.y"
                     { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3912 "mafralang.tab.c"
    break;

  case 14: /* block_struct: block_statement  */
#line 113 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3918 "mafralang.tab.c"
    break;

  case 15: /* compound_statement: LEFT_CURLY_BRACKET statement_list RIGHT_CURLY_BRACKET  */
#line 117 "mafralang.y"
                                                        {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3926 "mafralang.tab.c"
    break;

  case 16: /* statement_list: statement_list block_statement  */
#line 123 "mafralang.y"
                                 {
    (yyval.stmt) = addNode(STATEMENT_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3934 "mafralang.tab.c"
    break;

  case 17: /* statement_list: block_statement  */
#line 126 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3940 "mafralang.tab.c"
    break;

  case 18: /* block_statement: statement  */
#line 130 "mafralang.y"
            { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3946 "mafralang.tab.c"
    break;

  case 19: /* block_statement: conditional_statement  */
#line 131 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3952 "mafralang.tab.c"
    break;

  case 20: /* block_statement: iteration_statement  */
#line 132 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3958 "mafralang.tab.c"
    break;

  case 21: /* statement: local_var_declaration  */
#line 136 "mafralang.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3964 "mafralang.tab.c"
    break;

  case 22: /* statement: expression_statement  */
#line 137 "mafralang.y"
                        { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3970 "mafralang.tab.c"
    break;

  case 23: /* statement: return_statement  */
#line 138 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3976 "mafralang.tab.c"
    break;

  case 24: /* statement: input_statement  */
#line 139 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3982 "mafralang.tab.c"
    break;

  case 25: /* statement: output_statement  */
#line 140 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 3988 "mafralang.tab.c"
    break;

  case 26: /* statement: statement SEMICOLON  */
#line 141 "mafralang.y"
                      {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3996 "mafralang.tab.c"
    break;

  case 27: /* local_var_declaration: TYPE ID  */
#line 147 "mafralang.y"
          {
    (yyval.stmt) = addNode(VARIABLE_DECLARATION, NULL, NULL, (yyvsp[-1].strType), (yyvsp[0].strType));
    addSymbol((yyvsp[0].strType), (yyvsp[-1].strType), 'V');
  }
#line 4005 "mafralang.tab.c"
    break;

  case 28: /* input_statement: READ LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 154 "mafralang.y"
                                                     {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4013 "mafralang.tab.c"
    break;

  case 29: /* output_statement: WRITE LEFT_PARENTHESES variable RIGHT_PARENTHESES  */
#line 160 "mafralang.y"
                                                    {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4021 "mafralang.tab.c"
    break;

  case 30: /* output_statement: WRITELN LEFT_PARENTHESES variable RIGHT_PARENTHESES  */
#line 163 "mafralang.y"
                                                      {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4029 "mafralang.tab.c"
    break;

  case 31: /* return_statement: RETURN expression  */
#line 169 "mafralang.y"
                    {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].strType));
  }
#line 4037 "mafralang.tab.c"
    break;

  case 32: /* expression_statement: expression  */
#line 175 "mafralang.y"
             {
    (yyval.stmt) = addNode(EXPRESSION_STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4045 "mafralang.tab.c"
    break;

  case 33: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES block_struct  */
#line 181 "mafralang.y"
                                                                           { 
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, (yyvsp[-4].strType));
  }
#line 4053 "mafralang.tab.c"
    break;

  case 34: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES block_struct ELSE block_struct  */
#line 184 "mafralang.y"
                                                                                  {
    ast_node* ast_node = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, (yyvsp[-1].strType));
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), ast_node, NULL, (yyvsp[-6].strType));
  }
#line 4062 "mafralang.tab.c"
    break;

  case 35: /* iteration_statement: FOR LEFT_PARENTHESES expression SEMICOLON expression SEMICOLON expression RIGHT_PARENTHESES block_struct  */
#line 191 "mafralang.y"
                                                                                                           {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-6].stmt), (yyvsp[-4].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), NULL, (yyvsp[-8].strType));
  }
#line 4072 "mafralang.tab.c"
    break;

  case 36: /* iteration_statement: FORALL set_expression block_struct  */
#line 196 "mafralang.y"
                                     {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-2].strType));
  }
#line 4080 "mafralang.tab.c"
    break;

  case 37: /* set_statement: is_set_statement  */
#line 202 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4086 "mafralang.tab.c"
    break;

  case 38: /* set_statement: remove_statement  */
#line 203 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4092 "mafralang.tab.c"
    break;

  case 39: /* set_statement: add_statement  */
#line 204 "mafralang.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4098 "mafralang.tab.c"
    break;

  case 40: /* set_statement: exists_statement  */
#line 205 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4104 "mafralang.tab.c"
    break;

  case 41: /* is_set_statement: IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES  */
#line 209 "mafralang.y"
                                               {
    (yyval.stmt) = addNode(IS_SET_STATEMENT, NULL, NULL, (yyvsp[-1].strType), NULL);
  }
#line 4112 "mafralang.tab.c"
    break;

  case 42: /* remove_statement: REMOVE set_expression  */
#line 215 "mafralang.y"
                        {
    (yyval.stmt) = addNode(REMOVE_STATEMENT, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].strType));
  }
#line 4120 "mafralang.tab.c"
    break;

  case 43: /* add_statement: ADD set_expression  */
#line 221 "mafralang.y"
                     {
    (yyval.stmt) = addNode(ADD_STATEMENT, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].strType));
  }
#line 4128 "mafralang.tab.c"
    break;

  case 44: /* exists_statement: EXISTS set_expression  */
#line 227 "mafralang.y"
                        {
    (yyval.stmt) = addNode(EXISTS_STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4136 "mafralang.tab.c"
    break;

  case 45: /* set_expression: LEFT_PARENTHESES expression IN expression RIGHT_PARENTHESES  */
#line 233 "mafralang.y"
                                                              {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-3].stmt), (yyvsp[-1].stmt), (yyvsp[-2].strType), NULL);
  }
#line 4144 "mafralang.tab.c"
    break;

  case 46: /* expression: operation  */
#line 239 "mafralang.y"
            {
    (yyval.stmt) = addNode(EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4152 "mafralang.tab.c"
    break;

  case 47: /* expression: expression COMMA operation  */
#line 242 "mafralang.y"
                             {
    (yyval.stmt) = addNode(EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4160 "mafralang.tab.c"
    break;

  case 48: /* function_expression: set_statement  */
#line 248 "mafralang.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4166 "mafralang.tab.c"
    break;

  case 49: /* function_expression: function_call  */
#line 249 "mafralang.y"
                { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4172 "mafralang.tab.c"
    break;

  case 50: /* function_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 250 "mafralang.y"
                                                { (yyval.stmt) = (yyvsp[-1].stmt); }
#line 4178 "mafralang.tab.c"
    break;

  case 51: /* operation: arithmetic_operation  */
#line 254 "mafralang.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4184 "mafralang.tab.c"
    break;

  case 52: /* operation: operation ASSIGN variable  */
#line 255 "mafralang.y"
                            {
    (yyval.stmt) = addNode(ASSIGN_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4192 "mafralang.tab.c"
    break;

  case 53: /* arithmetic_operation: logical_operation  */
#line 261 "mafralang.y"
                    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4198 "mafralang.tab.c"
    break;

  case 54: /* arithmetic_operation: logical_operation ADD_OP arithmetic_operation  */
#line 262 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4206 "mafralang.tab.c"
    break;

  case 55: /* arithmetic_operation: logical_operation SUB_OP arithmetic_operation  */
#line 265 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4214 "mafralang.tab.c"
    break;

  case 56: /* arithmetic_operation: logical_operation DIVIDE arithmetic_operation  */
#line 268 "mafralang.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL); 
  }
#line 4222 "mafralang.tab.c"
    break;

  case 57: /* arithmetic_operation: logical_operation MULT arithmetic_operation  */
#line 271 "mafralang.y"
                                               {
    (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4230 "mafralang.tab.c"
    break;

  case 58: /* logical_operation: relational_operation  */
#line 277 "mafralang.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4236 "mafralang.tab.c"
    break;

  case 59: /* logical_operation: NEGATE relational_operation  */
#line 278 "mafralang.y"
                              {
    (yyval.stmt) = addNode(LOGICAL_OPERATION, NULL, (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4244 "mafralang.tab.c"
    break;

  case 60: /* logical_operation: logical_operation AND relational_operation  */
#line 281 "mafralang.y"
                                             {
    (yyval.stmt) = addNode(LOGICAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4252 "mafralang.tab.c"
    break;

  case 61: /* logical_operation: logical_operation OR relational_operation  */
#line 284 "mafralang.y"
                                             {
    (yyval.stmt) = addNode(LOGICAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4260 "mafralang.tab.c"
    break;

  case 62: /* relational_operation: variable  */
#line 290 "mafralang.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4266 "mafralang.tab.c"
    break;

  case 63: /* relational_operation: relational_operation CLT variable  */
#line 291 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4274 "mafralang.tab.c"
    break;

  case 64: /* relational_operation: relational_operation CLE variable  */
#line 294 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4282 "mafralang.tab.c"
    break;

  case 65: /* relational_operation: relational_operation CEQ variable  */
#line 297 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4290 "mafralang.tab.c"
    break;

  case 66: /* relational_operation: relational_operation CGE variable  */
#line 300 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4298 "mafralang.tab.c"
    break;

  case 67: /* relational_operation: relational_operation CGT variable  */
#line 303 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4306 "mafralang.tab.c"
    break;

  case 68: /* relational_operation: relational_operation CNE variable  */
#line 306 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4314 "mafralang.tab.c"
    break;

  case 69: /* variable: constant  */
#line 312 "mafralang.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4320 "mafralang.tab.c"
    break;

  case 70: /* variable: function_expression  */
#line 313 "mafralang.y"
                      { (yyval.stmt) = (yyvsp[0].stmt); }
#line 4326 "mafralang.tab.c"
    break;

  case 71: /* variable: QUOTES string QUOTES  */
#line 314 "mafralang.y"
                       {
    (yyval.stmt) = addNode(QUOT, NULL, NULL, (yyvsp[-2].symbol), NULL);
  }
#line 4334 "mafralang.tab.c"
    break;

  case 72: /* variable: ID  */
#line 317 "mafralang.y"
     {
    (yyval.stmt) = addNode(IDENTIFIER, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4342 "mafralang.tab.c"
    break;

  case 73: /* string: STR  */
#line 323 "mafralang.y"
      {
    (yyval.stmt) = addNode(STRING, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4350 "mafralang.tab.c"
    break;

  case 74: /* string: ID  */
#line 326 "mafralang.y"
      {
    (yyval.stmt) = addNode(STRING, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4358 "mafralang.tab.c"
    break;

  case 75: /* function_call: ID LEFT_PARENTHESES local_parameters RIGHT_PARENTHESES  */
#line 332 "mafralang.y"
                                                         {
    (yyval.stmt) = addNode(FUNCTION_CALL, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4366 "mafralang.tab.c"
    break;

  case 76: /* local_parameters: local_parameters COMMA expression  */
#line 338 "mafralang.y"
                                    {
    (yyval.stmt) = addNode(PARAMATERS, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4374 "mafralang.tab.c"
    break;

  case 77: /* local_parameters: expression  */
#line 341 "mafralang.y"
              {
    (yyval.stmt) = addNode(PARAMATERS, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4382 "mafralang.tab.c"
    break;

  case 78: /* local_parameters: %empty  */
#line 344 "mafralang.y"
  { (yyval.stmt) = NULL; }
#line 4388 "mafralang.tab.c"
    break;

  case 79: /* constant: INTEGER  */
#line 348 "mafralang.y"
            {
    (yyval.stmt) = addNode(INTEG, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4396 "mafralang.tab.c"
    break;

  case 80: /* constant: FLOAT  */
#line 351 "mafralang.y"
             {
    (yyval.stmt) = addNode(DECIMAL, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4404 "mafralang.tab.c"
    break;

  case 81: /* constant: EMPTY  */
#line 354 "mafralang.y"
            {
    (yyval.stmt) = addNode(EMP, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4412 "mafralang.tab.c"
    break;


#line 4416 "mafralang.tab.c"

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

#line 359 "mafralang.y"


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
