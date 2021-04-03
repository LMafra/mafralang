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

  #define DECLARATION 1
  #define VARIABLE_DECLARATION 2
  #define FUNCTION_DECLARATION 3
  #define PARAMATERS 4
  #define PARAMATER 5
  #define COMPOUND_STATEMENT 6
  #define EXPRESSION_STATEMENT 7
  #define CONDITIONAL_STATEMENT 8
  #define ITERATION_STATEMENT 9
  #define RETURN_STATEMENT 10
  #define IS_SET_STATEMENT 11
  #define REMOVE_STATEMENT 12
  #define ADD_STATEMENT 13
  #define SET_EXPRESSION 14
  #define EXPRESSION 15
  #define ARITHMETIC_OPERATION 16
  #define LOGICAL_OPERATION 17
  #define RELATIONAL_OPERATION 18
  #define INPUT_OPERATION 19
  #define OUTPUT_OPERATION 20
  #define QUOT 21
  #define IDENTIFIER 22
  #define STRING 23
  #define INTEG 24
  #define DECIMAL 25
  #define EMP 26

  int yylex();
  int yyerror(const char *s);
  extern int yylex_destroy(void);
  extern FILE *yyin;
  extern int total_errors;
  extern int line_number;
  extern int lex_error;


  typedef struct ast_node {
    int node_class;
    char* type;
    char* value;
    struct ast_node *left;
    struct ast_node *right;
  } ast_node;
  
  struct ast_node* parserTree = NULL;

  struct ast_node* addNode(int node_class, struct ast_node *left, struct ast_node *right);
  void print_class(int node_class);
  void print_depth(int depth);
  void print_tree(struct ast_node *tree, int depth);
  void free_tree(ast_node* node);

#line 128 "mafralang.tab.c"

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
  YYSYMBOL_REAL = 3,                       /* REAL  */
  YYSYMBOL_INTEGER = 4,                    /* INTEGER  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_EMPTY = 6,                      /* EMPTY  */
  YYSYMBOL_TYPE = 7,                       /* TYPE  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_FORALL = 11,                    /* FORALL  */
  YYSYMBOL_READ = 12,                      /* READ  */
  YYSYMBOL_WRITE = 13,                     /* WRITE  */
  YYSYMBOL_WRITELN = 14,                   /* WRITELN  */
  YYSYMBOL_IS_SET = 15,                    /* IS_SET  */
  YYSYMBOL_REMOVE = 16,                    /* REMOVE  */
  YYSYMBOL_ADD = 17,                       /* ADD  */
  YYSYMBOL_IN = 18,                        /* IN  */
  YYSYMBOL_STR = 19,                       /* STR  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 20,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 21,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 22,          /* LEFT_PARENTHESES  */
  YYSYMBOL_RIGHT_PARENTHESES = 23,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_QUOTES = 24,                    /* QUOTES  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_NEGATE = 27,                    /* NEGATE  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_ADD_OP = 30,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 31,                    /* SUB_OP  */
  YYSYMBOL_DIVIDE = 32,                    /* DIVIDE  */
  YYSYMBOL_MULT = 33,                      /* MULT  */
  YYSYMBOL_ASSIGN = 34,                    /* ASSIGN  */
  YYSYMBOL_CLT = 35,                       /* CLT  */
  YYSYMBOL_CLE = 36,                       /* CLE  */
  YYSYMBOL_CEQ = 37,                       /* CEQ  */
  YYSYMBOL_CGE = 38,                       /* CGE  */
  YYSYMBOL_CGT = 39,                       /* CGT  */
  YYSYMBOL_CNE = 40,                       /* CNE  */
  YYSYMBOL_ELSE = 41,                      /* ELSE  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_declarations = 44,              /* declarations  */
  YYSYMBOL_declaration = 45,               /* declaration  */
  YYSYMBOL_varDeclaration = 46,            /* varDeclaration  */
  YYSYMBOL_funcDeclaration = 47,           /* funcDeclaration  */
  YYSYMBOL_paramaters = 48,                /* paramaters  */
  YYSYMBOL_paramater = 49,                 /* paramater  */
  YYSYMBOL_statement = 50,                 /* statement  */
  YYSYMBOL_compound_statement = 51,        /* compound_statement  */
  YYSYMBOL_expression_statement = 52,      /* expression_statement  */
  YYSYMBOL_conditional_statement = 53,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 54,       /* iteration_statement  */
  YYSYMBOL_return_statement = 55,          /* return_statement  */
  YYSYMBOL_is_set_statement = 56,          /* is_set_statement  */
  YYSYMBOL_remove_statement = 57,          /* remove_statement  */
  YYSYMBOL_add_statement = 58,             /* add_statement  */
  YYSYMBOL_set_expression = 59,            /* set_expression  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_operation = 61,                 /* operation  */
  YYSYMBOL_arithmetic_operation = 62,      /* arithmetic_operation  */
  YYSYMBOL_logical_operation = 63,         /* logical_operation  */
  YYSYMBOL_relational_operation = 64,      /* relational_operation  */
  YYSYMBOL_input_operation = 65,           /* input_operation  */
  YYSYMBOL_output_operation = 66,          /* output_operation  */
  YYSYMBOL_variable = 67,                  /* variable  */
  YYSYMBOL_string = 68,                    /* string  */
  YYSYMBOL_constant = 69                   /* constant  */
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
#define YYLAST   954

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  291

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   100,   100,   104,   105,   109,   110,   114,   118,   124,
     125,   126,   130,   134,   135,   136,   137,   138,   139,   140,
     141,   145,   149,   153,   156,   162,   163,   167,   171,   177,
     181,   185,   189,   190,   191,   192,   196,   197,   198,   199,
     200,   204,   205,   206,   207,   208,   212,   213,   214,   218,
     219,   220,   221,   222,   223,   227,   231,   232,   237,   238,
     239,   243,   247,   248,   249
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
  "\"end of file\"", "error", "\"invalid token\"", "REAL", "INTEGER",
  "ID", "EMPTY", "TYPE", "RETURN", "IF", "FOR", "FORALL", "READ", "WRITE",
  "WRITELN", "IS_SET", "REMOVE", "ADD", "IN", "STR", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "QUOTES",
  "SEMICOLON", "COMMA", "NEGATE", "AND", "OR", "ADD_OP", "SUB_OP",
  "DIVIDE", "MULT", "ASSIGN", "CLT", "CLE", "CEQ", "CGE", "CGT", "CNE",
  "ELSE", "$accept", "program", "declarations", "declaration",
  "varDeclaration", "funcDeclaration", "paramaters", "paramater",
  "statement", "compound_statement", "expression_statement",
  "conditional_statement", "iteration_statement", "return_statement",
  "is_set_statement", "remove_statement", "add_statement",
  "set_expression", "expression", "operation", "arithmetic_operation",
  "logical_operation", "relational_operation", "input_operation",
  "output_operation", "variable", "string", "constant", YY_NULLPTR
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
     295,   296
};
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    24,    34,    15,    28,    59,    82,   111,   -85,   174,
      10,   198,    98,   288,   334,   357,    67,   109,   256,   274,
     358,   722,   738,   754,   770,    83,   113,   117,   126,   142,
     143,   147,   177,   232,   236,   244,    87,   254,   261,   279,
     283,   313,   315,   319,   325,   335,    60,    96,   134,   154,
     178,   207,   227,   786,   802,   285,   285,   314,   318,   123,
     123,   123,   318,   318,   318,   339,   381,   336,   303,   403,
     314,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,   359,   400,   361,   541,    -5,   399,
     544,   565,   566,   582,   600,   818,   391,   834,   856,   858,
     860,   862,   864,   866,   868,   870,   872,   874,   876,   878,
     880,   724,   398,   314,   256,   285,   882,   884,   886,   621,
     740,   756,   638,   656,   -16,   888,   674,   421,   692,   710,
     776,   621,   285,   792,   422,   256,   808,   256,   890,   892,
     894,   896,   244,   898,   580,   598,   616,   634,   823,   839,
     905,   244,   139,   423,   444,   445,   446,   467,   468,   652,
     670,   401,   424,   447,   470,   906,   907,   908,   244,   151,
      31,    42,    44,    51,    94,    97,   493,   516,   909,   910,
     911,   912,   244,   913,   285,   318,   256,   915,   914,   123,
     123,   123,   916,   469,   490,   491,   492,   244,   513,   514,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   123,   123,   123,   917,   120,   132,   144,
     203,   244,   259,   260,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   918,   515,   688,
     266,   539,   922,   923,   900,   924,   925,   926,   706,   921,
     535,   536,   537,   558,   559,   560,   581,   599,   617,   635,
     653,   671,   689,   927,   928,   929,   562,   930,   269,   275,
     276,   287,   289,   311,   317,   321,   326,   332,   333,   402,
     425,   931,   -14,   707,   852,   853,   854,   448,   471,   494,
     517
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   934,   -85,   -85,   -85,   935,   -61,   -13,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     1,   193,   -54,
     -44,   -32,    -8,    17,    46,   164,   -84,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,    13,    14,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    87,    46,    47,
      48,    49,    50,    51,    52,    53,    66,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,   153,   153,    19,   170,   -13,     1,   -21,   170,   170,
     170,   154,   154,   115,   171,    -2,    96,    12,   171,   171,
     171,   185,     1,   155,   155,   131,   172,   -21,    -4,     7,
     172,   172,   172,   -11,     8,    -4,   -11,   160,   160,    54,
     177,   183,   183,   183,   177,   177,   177,   156,   156,   -34,
     173,   123,    54,   126,   173,   173,   173,   -34,   188,    -5,
     -36,   153,   -37,    92,    93,    94,    -5,   192,   -36,   -38,
     -37,   154,   157,   157,   136,   174,   187,   -38,   153,   174,
     174,   174,    -6,   155,   216,    69,    70,    18,   154,    -6,
     138,   139,   140,   141,    54,    54,    54,   160,   237,   124,
     155,   158,   158,    15,   175,    55,   128,   156,   175,   175,
     175,   142,   -39,   249,   160,   -40,    12,    54,   133,    54,
     -39,   -34,   -34,   -40,   156,   242,   178,   179,   180,   181,
     238,   240,   157,    10,   199,    56,    11,   267,   -63,    57,
     154,   171,   193,   194,   195,   196,   -63,   182,    58,   157,
     -62,   223,   155,   172,   217,   218,   219,   220,   -62,   -36,
     -36,   158,   -60,   197,    59,    60,   160,   177,    54,    61,
     -60,   183,   183,   183,    -3,   221,   156,   173,   158,   -37,
     -37,    -3,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   183,   183,   183,    -7,    62,
      67,   157,   174,   -38,   -38,    -7,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   159,
     159,   -64,   176,    89,    90,    91,   176,   176,   176,   -64,
     158,   175,   -39,   -39,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    84,    85,
      86,    88,   -40,   -40,    63,    88,    88,    88,    64,    21,
      22,    23,    24,    65,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -8,    68,   137,   -46,   -58,   159,
      35,    -8,   -13,    36,   -32,   -46,   -58,   -47,   144,   145,
     146,   147,   -32,   -48,   -41,   -47,   159,   148,   149,   150,
     -14,   -48,   -41,   -21,   -15,   -42,   125,   -43,   127,   151,
     -21,    16,   152,   -42,    17,   -43,   198,    21,    22,    23,
      24,   161,   162,   163,   164,   134,    29,    30,    31,   -44,
     165,   166,   167,   222,   -16,   -45,   -17,   -44,    35,   -49,
     -18,    36,   168,   -45,   -50,   169,   -19,   -49,   239,   241,
     -51,   -52,   -50,   245,   246,   247,   -20,   -10,   -51,   -52,
     -10,   -46,   -46,   -61,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     -12,    -9,   111,   -12,    -9,   184,   113,    70,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,    21,    22,    23,    24,    95,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   -32,   -32,   186,   -63,
     -53,   116,    35,   112,   -22,    36,   184,   -63,   -53,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -62,   -54,   -31,   135,   -34,   184,   184,   -34,
     -62,   -54,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -60,   -55,   -36,   -37,   -38,
     -36,   -37,   -38,   -60,   -55,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -64,   -56,
     -39,   -40,   -63,   -39,   -40,   -63,   -64,   -56,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -35,   -57,   -62,   -60,   -64,   -62,   -60,   -64,   -35,
     -57,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   -58,   -59,   -46,   -58,   -32,   -46,
     -58,   -32,   -58,   -59,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -33,   -47,   -48,
     -41,   -47,   -48,   -41,   114,   -33,   117,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     -59,   -42,   -43,   -44,   -42,   -43,   -44,   118,   -59,   119,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -63,   -45,   120,   -63,   -45,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -62,   -49,   121,   -62,   -49,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -60,
     -50,   137,   -60,   -50,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -64,   -51,   -27,
     -64,   -51,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -35,   -52,   -23,   -35,   -52,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   -58,   -53,   -26,   -58,   -53,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -33,   -54,   -28,   -33,   -54,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   -59,
     -55,   -29,   -59,   -55,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -63,   -63,   122,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -62,   -62,   129,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -60,
     -60,   130,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -64,   -64,   -30,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -35,   -35,   -24,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   -58,   -58,   -25,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -59,   -59,   189,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -33,
     -33,   190,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,   -56,   -57,   -59,   -56,   -57,
     -59,   -47,   -47,   -48,   -48,   -41,   -41,   -42,   -42,   -43,
     -43,   -44,   -44,   -45,   -45,   -49,   -49,   -50,   -50,   -51,
     -51,   -52,   -52,   -53,   -53,   -54,   -54,   -55,   -55,   -56,
     -56,   -57,   -57,   132,    70,   -63,   -63,   -62,   -62,   -60,
     -60,   -64,   -64,   -58,   -58,   -59,   -59,   191,   213,   214,
     215,   -63,   -62,   -60,   -64,   -58,   243,     9,   244,     0,
     248,   266,   281,   282,   -21,   286,   283,   284,   285,   287,
     288,   289,    20,   -59,   290
};

static const yytype_int16 yycheck[] =
{
      18,    55,    56,    16,    58,    21,     7,    21,    62,    63,
      64,    55,    56,    18,    58,     0,    70,     7,    62,    63,
      64,    26,     7,    55,    56,    41,    58,    41,     0,     5,
      62,    63,    64,    23,     0,     7,    26,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    55,    56,    18,
      58,   112,    70,   114,    62,    63,    64,    26,   142,     0,
      18,   115,    18,    62,    63,    64,     7,   151,    26,    18,
      26,   115,    55,    56,   135,    58,   137,    26,   132,    62,
      63,    64,     0,   115,   168,    25,    26,    20,   132,     7,
       3,     4,     5,     6,   112,   113,   114,   115,   182,   112,
     132,    55,    56,     5,    58,    22,   119,   115,    62,    63,
      64,    24,    18,   197,   132,    18,     7,   135,   131,   137,
      26,    25,    26,    26,   132,   186,     3,     4,     5,     6,
     184,   185,   115,    22,   152,    22,    25,   221,    18,    22,
     184,   185,     3,     4,     5,     6,    26,    24,    22,   132,
      18,   169,   184,   185,     3,     4,     5,     6,    26,    25,
      26,   115,    18,    24,    22,    22,   184,   185,   186,    22,
      26,   189,   190,   191,     0,    24,   184,   185,   132,    25,
      26,     7,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,     0,    22,
      36,   184,   185,    25,    26,     7,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,    55,
      56,    18,    58,    59,    60,    61,    62,    63,    64,    26,
     184,   185,    25,    26,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    55,    56,
      57,    58,    25,    26,    22,    62,    63,    64,    22,     3,
       4,     5,     6,    19,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,     0,    21,    20,    18,    18,   115,
      24,     7,    21,    27,    18,    26,    26,    18,     3,     4,
       5,     6,    26,    18,    18,    26,   132,    12,    13,    14,
      21,    26,    26,     0,    21,    18,   113,    18,   115,    24,
       7,    23,    27,    26,    26,    26,   152,     3,     4,     5,
       6,     3,     4,     5,     6,   132,    12,    13,    14,    18,
      12,    13,    14,   169,    21,    18,    21,    26,    24,    18,
      21,    27,    24,    26,    18,    27,    21,    26,   184,   185,
      18,    18,    26,   189,   190,   191,    21,    23,    26,    26,
      26,    25,    26,    24,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
      23,    23,    23,    26,    26,    26,    25,    26,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,     3,     4,     5,     6,    24,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    25,    26,    20,    18,
      18,    22,    24,    23,    21,    27,    26,    26,    26,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    18,    18,    23,    23,    23,    26,    26,    26,
      26,    26,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    18,    18,    23,    23,    23,
      26,    26,    26,    26,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    18,    18,
      23,    23,    23,    26,    26,    26,    26,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    18,    18,    23,    23,    23,    26,    26,    26,    26,
      26,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    18,    18,    23,    23,    23,    26,
      26,    26,    26,    26,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    18,    23,    23,
      23,    26,    26,    26,    23,    26,    22,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      18,    23,    23,    23,    26,    26,    26,    22,    26,    23,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    23,    23,    23,    26,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    23,    23,    23,    26,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    23,
      23,    20,    26,    26,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    23,    23,    21,
      26,    26,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    23,    23,    21,    26,    26,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    23,    23,    21,    26,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    23,    23,    21,    26,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    23,
      23,    21,    26,    26,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    25,    26,    25,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    25,    26,    25,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    25,
      26,    25,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    25,    26,    21,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    25,    26,    21,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    25,    26,    21,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    25,    26,    22,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    25,
      26,    22,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    23,    23,    23,    26,    26,
      26,    25,    26,    25,    26,    25,    26,    25,    26,    25,
      26,    25,    26,    25,    26,    25,    26,    25,    26,    25,
      26,    25,    26,    25,    26,    25,    26,    25,    26,    25,
      26,    25,    26,    25,    26,    25,    26,    25,    26,    25,
      26,    25,    26,    25,    26,    25,    26,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    21,     3,    24,    -1,
      24,    24,    24,    21,    21,    24,    22,    22,    22,    22,
      22,    22,    17,    22,    24
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    43,    44,    45,    46,    47,     5,     0,    45,
      22,    25,     7,    48,    49,     5,    23,    26,    20,    51,
      49,     3,     4,     5,     6,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    24,    27,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    60,    61,    62,    63,
      64,    65,    66,    67,    69,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    19,    68,    67,    21,    25,
      26,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    60,    60,    60,    59,    60,    67,
      67,    67,    59,    59,    59,    24,    61,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    23,    23,    25,    23,    18,    22,    22,    22,    23,
      23,    23,    25,    50,    51,    60,    50,    60,    51,    25,
      25,    41,    25,    51,    60,    23,    50,    20,     3,     4,
       5,     6,    24,    69,     3,     4,     5,     6,    12,    13,
      14,    24,    27,    61,    62,    63,    64,    65,    66,    67,
      69,     3,     4,     5,     6,    12,    13,    14,    24,    27,
      61,    62,    63,    64,    65,    66,    67,    69,     3,     4,
       5,     6,    24,    69,    26,    26,    20,    50,    68,    22,
      22,    22,    68,     3,     4,     5,     6,    24,    67,    69,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    22,    22,    22,    68,     3,     4,     5,
       6,    24,    67,    69,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    68,    61,    67,
      61,    67,    50,    21,    24,    67,    67,    67,    24,    68,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    24,    68,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    24,    21,    22,    22,    22,    24,    22,    22,    22,
      24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    47,    48,
      48,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    51,    52,    53,    53,    54,    54,    55,    56,    57,
      58,    59,    60,    60,    60,    60,    61,    61,    61,    61,
      61,    62,    62,    62,    62,    62,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    65,    66,    66,    67,    67,
      67,    68,    69,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     3,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     5,     7,     9,     5,     5,     5,     5,
       5,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     1,     3,
       1,     1,     1,     1,     1
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
#line 100 "mafralang.y"
               { parserTree = (yyvsp[0].stmt); }
#line 1754 "mafralang.tab.c"
    break;

  case 3: /* declarations: declarations declaration  */
#line 104 "mafralang.y"
                           { (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt));}
#line 1760 "mafralang.tab.c"
    break;

  case 4: /* declarations: declaration  */
#line 105 "mafralang.y"
              { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1766 "mafralang.tab.c"
    break;

  case 5: /* declaration: varDeclaration  */
#line 109 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1772 "mafralang.tab.c"
    break;

  case 6: /* declaration: funcDeclaration  */
#line 110 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1778 "mafralang.tab.c"
    break;

  case 7: /* varDeclaration: TYPE ID SEMICOLON  */
#line 114 "mafralang.y"
                    { (yyval.stmt) = addNode(VARIABLE_DECLARATION, NULL, NULL);}
#line 1784 "mafralang.tab.c"
    break;

  case 8: /* funcDeclaration: TYPE ID LEFT_PARENTHESES paramaters RIGHT_PARENTHESES compound_statement  */
#line 118 "mafralang.y"
                                                                           {
    (yyval.stmt) = addNode(FUNCTION_DECLARATION, NULL, (yyvsp[0].stmt));
  }
#line 1792 "mafralang.tab.c"
    break;

  case 9: /* paramaters: paramaters COMMA paramater  */
#line 124 "mafralang.y"
                             { (yyval.stmt) = addNode(PARAMATERS, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 1798 "mafralang.tab.c"
    break;

  case 10: /* paramaters: paramater  */
#line 125 "mafralang.y"
            { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1804 "mafralang.tab.c"
    break;

  case 11: /* paramaters: %empty  */
#line 126 "mafralang.y"
            { (yyval.stmt) = NULL; }
#line 1810 "mafralang.tab.c"
    break;

  case 12: /* paramater: TYPE ID  */
#line 130 "mafralang.y"
          { (yyval.stmt) = addNode(PARAMATER, NULL, NULL);}
#line 1816 "mafralang.tab.c"
    break;

  case 13: /* statement: compound_statement  */
#line 134 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1822 "mafralang.tab.c"
    break;

  case 14: /* statement: expression_statement  */
#line 135 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1828 "mafralang.tab.c"
    break;

  case 15: /* statement: conditional_statement  */
#line 136 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1834 "mafralang.tab.c"
    break;

  case 16: /* statement: iteration_statement  */
#line 137 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1840 "mafralang.tab.c"
    break;

  case 17: /* statement: return_statement  */
#line 138 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1846 "mafralang.tab.c"
    break;

  case 18: /* statement: is_set_statement  */
#line 139 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1852 "mafralang.tab.c"
    break;

  case 19: /* statement: remove_statement  */
#line 140 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1858 "mafralang.tab.c"
    break;

  case 20: /* statement: add_statement  */
#line 141 "mafralang.y"
                         { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1864 "mafralang.tab.c"
    break;

  case 21: /* compound_statement: LEFT_CURLY_BRACKET statement RIGHT_CURLY_BRACKET  */
#line 145 "mafralang.y"
                                                   { (yyval.stmt) = addNode(COMPOUND_STATEMENT, NULL, (yyvsp[-1].stmt)); }
#line 1870 "mafralang.tab.c"
    break;

  case 22: /* expression_statement: expression SEMICOLON  */
#line 149 "mafralang.y"
                       { (yyval.stmt) = addNode(EXPRESSION_STATEMENT, (yyvsp[-1].stmt), NULL); }
#line 1876 "mafralang.tab.c"
    break;

  case 23: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 153 "mafralang.y"
                                                             { 
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt));
  }
#line 1884 "mafralang.tab.c"
    break;

  case 24: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES compound_statement ELSE compound_statement  */
#line 156 "mafralang.y"
                                                                                              { 
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, addNode(CONDITIONAL_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-2].stmt)), (yyvsp[0].stmt));;
  }
#line 1892 "mafralang.tab.c"
    break;

  case 25: /* iteration_statement: FOR LEFT_PARENTHESES expression SEMICOLON expression SEMICOLON expression RIGHT_PARENTHESES statement  */
#line 162 "mafralang.y"
                                                                                                        { (yyval.stmt) = addNode('P', (yyvsp[-6].stmt), (yyvsp[0].stmt)); }
#line 1898 "mafralang.tab.c"
    break;

  case 26: /* iteration_statement: FORALL LEFT_PARENTHESES set_expression RIGHT_PARENTHESES statement  */
#line 163 "mafralang.y"
                                                                     { (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt)); }
#line 1904 "mafralang.tab.c"
    break;

  case 27: /* return_statement: RETURN LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 167 "mafralang.y"
                                                                 { (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-2].stmt), NULL);}
#line 1910 "mafralang.tab.c"
    break;

  case 28: /* is_set_statement: IS_SET LEFT_PARENTHESES set_expression RIGHT_PARENTHESES compound_statement  */
#line 171 "mafralang.y"
                                                                                 {
    (yyval.stmt) = addNode(IS_SET_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt));
  }
#line 1918 "mafralang.tab.c"
    break;

  case 29: /* remove_statement: REMOVE LEFT_PARENTHESES set_expression RIGHT_PARENTHESES SEMICOLON  */
#line 177 "mafralang.y"
                                                                        { (yyval.stmt) = addNode(REMOVE_STATEMENT, (yyvsp[-2].stmt), NULL);}
#line 1924 "mafralang.tab.c"
    break;

  case 30: /* add_statement: ADD LEFT_PARENTHESES set_expression RIGHT_PARENTHESES SEMICOLON  */
#line 181 "mafralang.y"
                                                                     { (yyval.stmt) = addNode(ADD_STATEMENT, (yyvsp[-2].stmt), NULL);}
#line 1930 "mafralang.tab.c"
    break;

  case 31: /* set_expression: expression IN expression  */
#line 185 "mafralang.y"
                           { (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 1936 "mafralang.tab.c"
    break;

  case 32: /* expression: expression COMMA operation  */
#line 189 "mafralang.y"
                             { (yyval.stmt) = addNode(EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 1942 "mafralang.tab.c"
    break;

  case 33: /* expression: expression COMMA variable  */
#line 190 "mafralang.y"
                            { (yyval.stmt) = addNode(EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 1948 "mafralang.tab.c"
    break;

  case 34: /* expression: operation  */
#line 191 "mafralang.y"
            { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1954 "mafralang.tab.c"
    break;

  case 35: /* expression: variable  */
#line 192 "mafralang.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1960 "mafralang.tab.c"
    break;

  case 36: /* operation: arithmetic_operation  */
#line 196 "mafralang.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1966 "mafralang.tab.c"
    break;

  case 37: /* operation: logical_operation  */
#line 197 "mafralang.y"
                    { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1972 "mafralang.tab.c"
    break;

  case 38: /* operation: relational_operation  */
#line 198 "mafralang.y"
                       { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1978 "mafralang.tab.c"
    break;

  case 39: /* operation: input_operation  */
#line 199 "mafralang.y"
                  { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1984 "mafralang.tab.c"
    break;

  case 40: /* operation: output_operation  */
#line 200 "mafralang.y"
                   { (yyval.stmt) = (yyvsp[0].stmt); }
#line 1990 "mafralang.tab.c"
    break;

  case 41: /* arithmetic_operation: variable ADD_OP variable  */
#line 204 "mafralang.y"
                            { (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 1996 "mafralang.tab.c"
    break;

  case 42: /* arithmetic_operation: variable SUB_OP variable  */
#line 205 "mafralang.y"
                            { (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2002 "mafralang.tab.c"
    break;

  case 43: /* arithmetic_operation: variable DIVIDE variable  */
#line 206 "mafralang.y"
                            { (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2008 "mafralang.tab.c"
    break;

  case 44: /* arithmetic_operation: variable MULT variable  */
#line 207 "mafralang.y"
                            { (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2014 "mafralang.tab.c"
    break;

  case 45: /* arithmetic_operation: variable ASSIGN variable  */
#line 208 "mafralang.y"
                            { (yyval.stmt) = addNode(ARITHMETIC_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2020 "mafralang.tab.c"
    break;

  case 46: /* logical_operation: NEGATE variable  */
#line 212 "mafralang.y"
                            { (yyval.stmt) = addNode(LOGICAL_OPERATION, NULL, (yyvsp[0].stmt));}
#line 2026 "mafralang.tab.c"
    break;

  case 47: /* logical_operation: variable AND variable  */
#line 213 "mafralang.y"
                            { (yyval.stmt) = addNode(LOGICAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2032 "mafralang.tab.c"
    break;

  case 48: /* logical_operation: variable OR variable  */
#line 214 "mafralang.y"
                            { (yyval.stmt) = addNode(LOGICAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2038 "mafralang.tab.c"
    break;

  case 49: /* relational_operation: variable CLT variable  */
#line 218 "mafralang.y"
                         { (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2044 "mafralang.tab.c"
    break;

  case 50: /* relational_operation: variable CLE variable  */
#line 219 "mafralang.y"
                         { (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2050 "mafralang.tab.c"
    break;

  case 51: /* relational_operation: variable CEQ variable  */
#line 220 "mafralang.y"
                         { (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2056 "mafralang.tab.c"
    break;

  case 52: /* relational_operation: variable CGE variable  */
#line 221 "mafralang.y"
                         { (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2062 "mafralang.tab.c"
    break;

  case 53: /* relational_operation: variable CGT variable  */
#line 222 "mafralang.y"
                         { (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2068 "mafralang.tab.c"
    break;

  case 54: /* relational_operation: variable CNE variable  */
#line 223 "mafralang.y"
                         { (yyval.stmt) = addNode(RELATIONAL_OPERATION, (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 2074 "mafralang.tab.c"
    break;

  case 55: /* input_operation: READ LEFT_PARENTHESES variable LEFT_PARENTHESES  */
#line 227 "mafralang.y"
                                                  { (yyval.stmt) = addNode(INPUT_OPERATION, (yyvsp[-1].stmt), NULL);}
#line 2080 "mafralang.tab.c"
    break;

  case 56: /* output_operation: WRITE LEFT_PARENTHESES variable LEFT_PARENTHESES  */
#line 231 "mafralang.y"
                                                     { (yyval.stmt) = addNode(OUTPUT_OPERATION, (yyvsp[-1].stmt), NULL);}
#line 2086 "mafralang.tab.c"
    break;

  case 57: /* output_operation: WRITELN LEFT_PARENTHESES variable LEFT_PARENTHESES  */
#line 232 "mafralang.y"
                                                     { (yyval.stmt) = addNode(OUTPUT_OPERATION, (yyvsp[-1].stmt), NULL);}
#line 2092 "mafralang.tab.c"
    break;

  case 58: /* variable: constant  */
#line 237 "mafralang.y"
           { (yyval.stmt) = (yyvsp[0].stmt); }
#line 2098 "mafralang.tab.c"
    break;

  case 59: /* variable: QUOTES string QUOTES  */
#line 238 "mafralang.y"
                       {(yyval.stmt) = addNode(QUOT, NULL, (yyvsp[-1].stmt));}
#line 2104 "mafralang.tab.c"
    break;

  case 60: /* variable: ID  */
#line 239 "mafralang.y"
     {(yyval.stmt) = addNode(IDENTIFIER, NULL, NULL);}
#line 2110 "mafralang.tab.c"
    break;

  case 61: /* string: STR  */
#line 243 "mafralang.y"
      {(yyval.stmt) = addNode(STRING, NULL, NULL);}
#line 2116 "mafralang.tab.c"
    break;

  case 62: /* constant: INTEGER  */
#line 247 "mafralang.y"
            { (yyval.stmt) = addNode(INTEG, NULL, NULL);  }
#line 2122 "mafralang.tab.c"
    break;

  case 63: /* constant: REAL  */
#line 248 "mafralang.y"
            { (yyval.stmt) = addNode(DECIMAL, NULL, NULL);  }
#line 2128 "mafralang.tab.c"
    break;

  case 64: /* constant: EMPTY  */
#line 249 "mafralang.y"
            { (yyval.stmt) = addNode(EMP, NULL, NULL);  }
#line 2134 "mafralang.tab.c"
    break;


#line 2138 "mafralang.tab.c"

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

#line 252 "mafralang.y"


void print_class(int node_class){
  switch(node_class){
    case DECLARATION:
      printf("Declaration");
    break;
    case VARIABLE_DECLARATION:
      printf("Variable_Declaration");
    break;
    case FUNCTION_DECLARATION:
      printf("Variable_Declaration");
    break;
    case PARAMATERS:
      printf("Paramaters");
    break;
    case PARAMATER:
      printf("Paramater");
    break;
    case COMPOUND_STATEMENT:
      printf("Compound_Statement");
    break;
    case EXPRESSION_STATEMENT:
      printf("Expression_Statement");
    break;
    case CONDITIONAL_STATEMENT:
      printf("Conditional_Statement");
    break;
    case ITERATION_STATEMENT:
      printf("Iteration_Statement");
    break;
    case RETURN_STATEMENT:
      printf("Return_Statement");
    break;
    case IS_SET_STATEMENT:
      printf("Is_Set_Statement");
    break;
    case REMOVE_STATEMENT:
      printf("Remove_Statement");
    break;
    case ADD_STATEMENT:
      printf("Add_Statement");
    break;
    case SET_EXPRESSION:
      printf("Set_Expression");
    break;
    case EXPRESSION:
      printf("Expression");
    break;
    case ARITHMETIC_OPERATION:
      printf("Arithmetic_Operation");
    break;
    case LOGICAL_OPERATION:
      printf("Logical_Operation");
    break;
    case RELATIONAL_OPERATION:
      printf("Relational_Operation");
    break;
    case INPUT_OPERATION:
      printf("Input_Operation");
    break;
    case OUTPUT_OPERATION:
      printf("Output_Operation");
    break;
    case QUOT:
      printf("Quotes");
    break;
    case IDENTIFIER:
      printf("Identifier");
    break;
    case STRING:
      printf("String");
    break;
    case INTEG:
      printf("Integer");
    break;
    case DECIMAL:
      printf("Decimal");
    break;
    case EMP:
      printf("Empty");
    break;
  }
  printf(" | ");
}

void print_depth(int depth) {
  int i = depth;
  while(i != 0){
      printf("-");
      i--;
  }
}

void print_tree(struct ast_node *tree, int depth) {
  if (tree) {
    print_depth(depth);
    print_class(tree->node_class);
    if (tree->type != NULL){
        printf("type: %s | ", tree->type);
    }
    if (tree->value != NULL){
        printf("value: %s | ", tree->value);
    }
    printf("\n");
    print_tree(tree->left, depth + 1);
    print_tree(tree->right, depth + 1);
  }
}

void free_tree(struct ast_node* node){
    if(node == NULL) return;
    if(node->left) free_tree(node->left);
    if(node->right) free_tree(node->right);
    free(node);
}

struct ast_node* addNode(int node_class, struct ast_node *left, struct ast_node *right){
  struct ast_node* ast_node = (struct ast_node*)calloc(1, sizeof(struct ast_node));

  ast_node->node_class = node_class;
  ast_node->left = left;
  ast_node->right = right;

  return ast_node;
}

int main(int argc, char **argv) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
    if(total_errors == 0){
        printf("\n\n----------  ABSTRACT SYNTAX TREE ----------\n\n");
        print_tree(parserTree, 0);
    }
    yylex_destroy();
    free_tree(parserTree);
    return 0;
}
