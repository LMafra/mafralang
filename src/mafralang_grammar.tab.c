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
#line 4 "main/mafralang_grammar.y"

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "includes/ast.h"

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

#line 93 "mafralang_grammar.tab.c"

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

#include "mafralang_grammar.tab.h"
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
  YYSYMBOL_STRING = 20,                    /* STRING  */
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
  YYSYMBOL_translation_unit = 46,          /* translation_unit  */
  YYSYMBOL_external_declaration = 47,      /* external_declaration  */
  YYSYMBOL_function_definition = 48,       /* function_definition  */
  YYSYMBOL_declaration_list = 49,          /* declaration_list  */
  YYSYMBOL_declaration = 50,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 51,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 52,      /* init_declarator_list  */
  YYSYMBOL_declarator = 53,                /* declarator  */
  YYSYMBOL_direct_declarator = 54,         /* direct_declarator  */
  YYSYMBOL_identifier_list = 55,           /* identifier_list  */
  YYSYMBOL_parameter_list = 56,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 57,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator = 58,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 59, /* direct_abstract_declarator  */
  YYSYMBOL_compound_statement = 60,        /* compound_statement  */
  YYSYMBOL_block_item_list = 61,           /* block_item_list  */
  YYSYMBOL_block_item = 62,                /* block_item  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_expression_statement = 64,      /* expression_statement  */
  YYSYMBOL_conditional_statement = 65,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 66,       /* iteration_statement  */
  YYSYMBOL_input_statement = 67,           /* input_statement  */
  YYSYMBOL_output_statement = 68,          /* output_statement  */
  YYSYMBOL_return_statement = 69,          /* return_statement  */
  YYSYMBOL_set_expression_list = 70,       /* set_expression_list  */
  YYSYMBOL_is_set_expression = 71,         /* is_set_expression  */
  YYSYMBOL_add_expression = 72,            /* add_expression  */
  YYSYMBOL_remove_expression = 73,         /* remove_expression  */
  YYSYMBOL_exists_expression = 74,         /* exists_expression  */
  YYSYMBOL_expression = 75,                /* expression  */
  YYSYMBOL_assignment_expression = 76,     /* assignment_expression  */
  YYSYMBOL_arithmetic_expression = 77,     /* arithmetic_expression  */
  YYSYMBOL_logical_expression = 78,        /* logical_expression  */
  YYSYMBOL_relational_expression = 79,     /* relational_expression  */
  YYSYMBOL_set_expression = 80,            /* set_expression  */
  YYSYMBOL_cast_expression = 81,           /* cast_expression  */
  YYSYMBOL_type_name = 82,                 /* type_name  */
  YYSYMBOL_specifier_qualifier_list = 83,  /* specifier_qualifier_list  */
  YYSYMBOL_unary_expression = 84,          /* unary_expression  */
  YYSYMBOL_function_expression = 85,       /* function_expression  */
  YYSYMBOL_postfix_expression = 86,        /* postfix_expression  */
  YYSYMBOL_initializer_list = 87,          /* initializer_list  */
  YYSYMBOL_initializer = 88,               /* initializer  */
  YYSYMBOL_primary_expression = 89         /* primary_expression  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  668

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
       0,    64,    64,    68,    71,    77,    80,    86,    91,    98,
     101,   107,   110,   116,   119,   125,   128,   134,   140,   143,
     146,   149,   152,   158,   161,   168,   171,   177,   180,   186,
     192,   195,   198,   201,   207,   210,   216,   219,   225,   228,
     234,   237,   240,   243,   246,   249,   252,   258,   261,   267,
     270,   277,   282,   286,   291,   295,   301,   307,   310,   316,
     322,   325,   328,   331,   337,   343,   349,   355,   361,   364,
     370,   373,   379,   382,   385,   388,   391,   397,   400,   403,
     406,   412,   415,   418,   421,   424,   427,   430,   436,   439,
     445,   448,   454,   457,   460,   466,   469,   475,   478,   481,
     484,   490,   496,   499,   502,   508,   511,   517,   520,   523,
     529,   532,   535,   538,   541,   544
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
  "WRITE", "WRITELN", "IS_SET", "REMOVE", "ADD", "IN", "STRING", "EXISTS",
  "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET", "LEFT_PARENTHESES",
  "RIGHT_PARENTHESES", "QUOTES", "SEMICOLON", "COMMA", "NEGATE", "AND",
  "OR", "ADD_OP", "SUB_OP", "DIVIDE", "MULT", "ASSIGN", "CLT", "CLE",
  "CEQ", "CGE", "CGT", "CNE", "THEN", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "declaration", "declaration_specifiers",
  "init_declarator_list", "declarator", "direct_declarator",
  "identifier_list", "parameter_list", "parameter_declaration",
  "abstract_declarator", "direct_abstract_declarator",
  "compound_statement", "block_item_list", "block_item", "statement",
  "expression_statement", "conditional_statement", "iteration_statement",
  "input_statement", "output_statement", "return_statement",
  "set_expression_list", "is_set_expression", "add_expression",
  "remove_expression", "exists_expression", "expression",
  "assignment_expression", "arithmetic_expression", "logical_expression",
  "relational_expression", "set_expression", "cast_expression",
  "type_name", "specifier_qualifier_list", "unary_expression",
  "function_expression", "postfix_expression", "initializer_list",
  "initializer", "primary_expression", YY_NULLPTR
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

#define YYPACT_NINF (-303)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-116)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,    16,    44,     9,   113,   122,   166,    21,    26,  -303,
     268,    42,    22,   290,   -22,    51,   127,    40,   303,   105,
     313,    37,   153,    30,   338,   158,   175,   350,   774,  2835,
    3227,  3619,  3742,    50,    90,   104,   118,   144,   146,   148,
     177,   203,  4307,   215,   339,  1841,  3192,  5287,  5365,  3282,
    3552,  3584,  3674,  3944,  4021,  4208,  4507,  4774,  5075,  5329,
    5536,  5700,  5753,  5777,  6437,   375,   414,   381,   911, 10166,
    7973,  7990,  6461,  6485,  6509,  6533,   164,   345,   588,    -8,
     235,   192,    87,   132,   279,  2044,   655,  3801,   227,  3801,
    3801,   554,   554,   179,  3801,  3801,  3801,   140,   479,   216,
     128, 10182,  8007,  6557,   382,  5746,  5841,  3742,  3905,  3905,
    3905,  3905,  5287,  5287,  5287,  5287,  5287,  5287,  5287,  5287,
    5287,  3742,   187,   527,   538,   351,   265,   250,   272,    46,
    2174,   548,   561,   579,  5872,   605,  2233,  2233,   642,   644,
     240,  3801,   242,   255,   280,   656,   699,   772,   189,  6581,
     948,   316,   324,   664,  1723,  1845,  2115,  2237, 10198, 10214,
    8024,  8041,  8058,  8075,  8092,  8109,  8126,   710,   518,   326,
      27,   806,   847,   362,  6605,  2044,  1273,  2436,  2566,  1665,
     288,   361,   369,  6629,  6653,  6677,  6701,  2174,  8143,   575,
     620,   853,   859,   117,   860,   763,  1665,   922,  1665,   934,
    5903,  5934,  5965,  5996,   363,   622,   950,  1665,  6027,  1665,
    6058,  1665,  6725,   377,  6089,  6120,  6151,  6749,    52,    22,
     196,   560,    22,   594,  6182,    31,   193,   724,   261,  2051,
    3975,  5602,  6773,   400,   452,   470,  6797,   472,  1841,  5389,
    5411,  6821,  6845,  6869,  6893,  6917,   960,   715,  1238,   961,
    8167,  8191,  6941,  6965,  6989,  7013,   431,  8208,  8225,  8242,
     489,   493,   501,  8259,   515,  1841,  5287,  8276,  8293,  8310,
    8327,  8344,  8361,  8378,  8395,  1841,  7037,   634,   651,  2625,
      59,   761,   393,   427,   544,   550,  3801,   247,   841,   555,
    2443,  7061,  7085,  7109,   569,   578,   582,  7133,   596,  2174,
    1841,  5433,  5513,  7157,  7181,  7205,  7229,  7253,   394,   278,
     325,  5797,  8419,  8443,  7277,  7301,  7325,   416,  7349,  2828,
     849,   979,  3742,   604,   608,   617,   631,   633,   641,  6213,
     840,   907,  1077,  1167,  1200,  1232,  1322,  1592,   874,   417,
     652,   233,   673,   273,  6244,  6275,  6306,   880,   230,   205,
    2044,   704,  3801,  3801,  3801,   980,   687,  7373,  8467,  8491,
    8515,   690,   696,   707,  8539,   718,  1841,  5389,  8563,  8587,
    8611,  8635,  8659, 10114,  8683,  8707,  8731,  8755,  1841,  7397,
    7421,  4365,  4365,  4365,  4365,  5389,  5389,  5389,  5389,  5389,
    5389,  5389,  5389,  5389,  3801,  2044,   741,  3801,  3801,  3801,
     985,   721,  8772,   757,   349,  2958,  1036,  3017,   987,  1052,
     807,   100,   665,  2044,   796,  3801,  3801,  3801,   425,   991,
     815,  7445,  8796,  8820,  8844,   844,   862,   867,  8868,   871,
    1841,  5433,  8892,  8916,  8940,  8964,  8988, 10056,  9012,  9036,
    9060,  9084,  1841,  7469,  7493,  4465,  4465,  4465,  4465,  5433,
    5433,  5433,  5433,  5433,  5433,  5433,  5433,  5433,  4538,  3220,
     878,  1075,  3801,   227,  3801,  3801,   554,   554,  1624,  6337,
    1714,  1168,  1201,   997,   999,   672,   682,  1004,  1005,  6368,
    6399,  1026,   901,  1027,  1028,  1032,  7517,  4641,  2044,   932,
    3801,  3801,  3801,  1033,   912,  9108,   928,  1442,  1518,  1539,
    1630, 10132, 10150,  9132,  9156,  9180,  9204,  9228,  9252,  9276,
    1050,  1084,   933,  1086,  1090,  1092,  9293,  4673,  4802,   698,
    1096,  1098,  3350,  1274,  1299,  1104,  1130,   935,  1173,  1174,
    1239,   428,   712,  7541,  4833,  2044,   964,  3801,  3801,  3801,
    1250,   946,  9317,   954,   503,  1039,  1131,  1331, 10076, 10096,
    9341,  9365,  9389,  9413,  9437,  9461,  9485,   477,  1984,  1276,
    2233,  2233,  1280,  1342,   965,   989,  2016,  1323,  1332,   767,
     809,  7565,  7589,  7613,  7637,  7661,  2174,  9509,  1363,   995,
    1374,  1375,  1376,  9533,  4935,  4968,  9550,  9567,  9584,  9601,
    9618,  2174,  7685,   814,   846,  1365,  7709,  7733,  7757,  7781,
    7805,   492,  2174,  9642,  1392,  1009,  1393,  1397,  1399,  9666,
    5041,  5128,  1273,  3409,  3612,  1273,  1041,  1069,  1080,   496,
    9690,  9714,  9738,  9762,  9786,  2174,  7829,   504,   526,  9810,
    9834,  9858,  9882,  9906,  2174,  7853,  6430,  1273,  1420,  1273,
    1424,  2106,  2376,  2408,  2498,  7877,   876,   539,  9923,  1127,
    7901,  1390,   549,  2768,  1273,  2800,  1273,  7925,  9947,  1462,
    9964,  7949,  9988,  1782,  2890,  3160, 10012, 10036
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -303,  -303,  -303,   970,  -303,  -303,    15,    60,   -19,     4,
       3,  -302,  -162,   984,   -87,  1038,   -14,  -222,   -48,    -2,
      48,  -138,  -109,    12,    41,    49,   929,  1321,  1713,  2105,
    2497,  5187,  4843,  5055,  4562,  4267,  3972,  3673,  -156,  1031,
     372,  2889,  3281,   -81,    62,   -20
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    21,    49,    81,    14,    78,
     220,    82,    83,    84,   124,   288,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,   241,   242,   243,   244,
     245,    65,   246,   247,   248,   249,   250,   251,    99,   100,
     252,   253,   254,   132,   317,   255
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      75,    24,   345,   105,   227,    18,    19,    77,   191,    -2,
      16,    15,    75,   152,     1,     6,    17,   -23,     6,   -13,
     -23,     1,   223,    27,    11,   218,   223,   274,    75,   -14,
      22,    75,   228,   221,   221,   169,    76,     1,   333,   473,
     -13,   477,     1,   -13,     9,    12,   219,   -18,    13,   173,
     -14,   228,   190,   -14,   222,   222,     1,   226,   346,    20,
       7,     8,   221,     7,   -18,    26,   -18,   334,    75,   -18,
     -18,   142,   143,    20,    87,    23,   -18,   -18,   -15,   -15,
     225,    23,   356,   222,   278,   123,   405,    75,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,    75,   520,   136,   151,   228,   204,   469,   221,   401,
     318,   225,   126,    -3,    88,   127,    75,    75,    -3,   403,
     290,   291,    -5,   292,   293,   524,   289,    -5,    89,   222,
     274,   218,   -17,   294,   295,   296,   137,   297,   298,   299,
     206,   300,    90,   -96,   420,    97,   301,   133,   280,   -17,
     302,    25,   287,   -92,   -17,   -17,    75,   128,    -9,    75,
     129,    79,   331,   228,   -96,   -96,    -6,   318,    91,   -10,
      92,    -6,    93,   318,   195,    -9,    75,   200,    75,   474,
     -19,   478,   144,    80,   177,   178,   -10,    75,   335,    75,
     218,    75,   -95,   318,   208,   277,   210,   -19,   -11,   -19,
     410,    94,   -19,   -19,    75,   214,   347,   215,   -14,   216,
     494,   287,   168,   -95,   -95,   -11,   122,   336,   418,   377,
     341,   -17,   496,   340,   332,   337,   342,    95,   223,   -14,
      28,    29,     1,    30,    31,   -12,    79,   194,   228,    96,
     -20,   150,   521,    39,    40,    41,   274,    42,    43,   525,
     218,    45,   -12,   171,   279,   339,    47,   -20,   472,   -20,
      48,   406,   -20,   -20,   -13,  -110,   228,   181,    -4,   481,
     -22,   287,   409,    -4,   541,   339,    79,   -21,   228,   318,
     182,   441,   318,   223,   225,   -13,   543,   -22,   349,   -22,
     -11,   340,   -22,   -22,   -21,   -11,   -21,   105,   476,   -21,
     -21,   -70,    75,   -12,   -25,   183,   -70,   -25,   -12,    75,
     445,   446,   447,   448,   511,   201,    28,    29,     1,    30,
      31,    32,    33,    34,    35,    75,    36,    37,    38,    39,
      40,    41,   526,    42,    43,   224,    44,    45,    -8,   -34,
      46,   -94,    47,    -8,   -34,    -7,    48,   377,   -72,   -93,
      -7,   189,    79,   -72,   228,   449,   450,   -72,   -72,   -72,
     -72,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   519,   170,   -29,   -16,   -16,   -29,
     290,   291,   -35,   292,   293,   192,   212,   -35,   202,   225,
     193,   213,    72,   294,   295,   296,   203,   297,   298,   299,
     217,   300,   106,   107,    72,   225,   301,   578,   -70,   -70,
     302,   441,   133,   108,   109,   110,   111,  -107,  -114,   102,
     276,   105,  -107,    72,   351,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   318,  -105,
    -106,   -68,   -68,    75,  -105,  -106,   564,   565,   531,    75,
    -110,  -108,  -112,   532,   604,   395,  -108,   133,  -110,  -110,
      72,  -110,  -110,  -110,  -110,  -110,  -110,   377,  -110,  -110,
    -110,  -110,  -110,  -110,   333,   133,   352,   333,   560,    72,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,    72,   353,   619,   354,   274,    75,   333,
     -71,   333,   314,   334,   149,   -71,   334,   286,    72,    72,
     627,   561,   318,   396,   441,  -109,   333,   397,   333,   645,
    -109,   628,   102,   280,   646,   398,   -73,   648,   334,   225,
     334,   -73,   649,   449,   450,   -73,   -73,   -73,   -73,   399,
      75,    75,   -31,   -31,   647,   334,   -31,   334,    72,   650,
     133,    72,   -27,   652,   651,   -27,   318,   140,   282,   314,
     283,   284,   658,   -28,   377,   314,   -28,   659,    72,  -111,
      72,   318,   662,  -107,   285,  -113,  -107,   663,   141,    72,
     412,    72,   318,    72,   -18,   314,   174,   -18,   -18,   175,
     441,   318,    75,   414,   339,    75,    72,   133,   331,   -30,
     -30,   331,   415,   -30,  -105,   318,   416,  -105,   613,   614,
     636,   374,   380,   641,   318,   -15,   -15,    75,   343,    75,
     417,   -17,   -17,   331,   335,   331,   318,   335,   462,   318,
     176,   318,   463,   286,    75,   653,    75,   655,   102,   318,
     331,   464,   331,   318,   -32,   -32,   -33,   -33,   -32,   335,
     -33,   335,   664,   336,   665,   465,   336,   466,   -18,   -18,
     332,   337,   -18,   332,   337,   467,   335,   179,   335,   180,
     286,   314,   286,   438,   444,   404,   -17,   471,   336,   -17,
     336,   184,   134,   107,   286,   332,   337,   332,   337,   -19,
     -19,   -69,   -69,   -19,    72,   336,   -19,   336,   475,   -19,
     -19,    72,   332,   337,   332,   337,   -20,   482,   339,   -20,
     -20,   339,   487,   339,   489,   290,   291,    72,   292,   293,
     490,   339,   -20,   -20,   185,   339,   -20,   286,   294,   295,
     296,   491,   297,   298,   299,   601,   300,   -71,   -71,   374,
     -70,   301,   492,   -70,   512,   302,   517,   381,   382,   383,
     384,   348,    19,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   207,   -49,   -49,   -49,   -49,
     -49,   -49,   518,   -49,   -49,   -49,   -49,   -49,   407,   107,
     -49,   -22,   -49,  -110,   -22,   -22,   -49,   186,    85,   527,
     286,  -110,  -110,   438,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   438,   438,
     314,   -24,   523,   -21,   -24,    72,   -21,   -21,   -22,   -22,
     534,    72,   -22,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   374,
     -47,   -47,   -47,   -47,   -47,   411,   -29,   -47,   536,   -47,
     -21,   -21,   -26,   -47,   -21,   -26,   459,   107,   205,   290,
     291,   129,   292,   293,  -108,  -106,   537,  -108,  -106,   102,
     276,   538,   294,   295,   296,   539,   297,   298,   299,   657,
     300,   470,   107,  -115,   314,   301,   438,   480,    19,   302,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   572,   -41,   -41,   -41,
     -41,   -41,    72,    72,   -41,   579,   -41,   584,   -72,   -72,
     -41,   112,   113,   -72,   -72,   -72,   -72,   209,   314,    60,
     286,   256,   257,   585,   258,   259,   374,   380,   587,   211,
     597,    60,   286,   314,   260,   261,   262,   605,   263,   264,
     187,   610,   265,    10,   314,  -109,   267,    60,  -109,   611,
      60,   266,   438,   444,    72,   -68,   -77,    72,   -68,   -77,
     617,   -77,   -77,   -77,   -77,   -77,   -77,   314,   387,   388,
     389,   390,   391,   392,   460,   486,   314,   286,   286,    72,
     516,    72,   -69,   286,   618,   -69,   533,    60,   314,   286,
     621,   314,   567,   314,   568,   127,    72,   129,    72,   569,
     570,   314,   127,   129,   630,   314,    60,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
      60,   571,   573,   574,   175,   286,   286,   575,   583,   303,
     286,   286,   -74,   522,    19,    60,    60,   -74,   642,   449,
     450,   -74,   -74,   -74,   -74,   -71,   -31,   -31,   -71,   267,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   643,   -40,   -40,   -40,
     -40,   -40,   558,   107,   -40,    60,   -40,   644,    60,   586,
     -40,   588,   175,   172,   286,   589,   303,   590,   286,   125,
     286,   593,   303,   594,   127,    60,   129,    60,   148,   595,
     290,   291,   129,   292,   293,     0,    60,     0,    60,     0,
      60,     0,   303,   294,   295,   296,     0,   297,   298,   299,
     660,   300,     0,    60,   -76,   596,   301,     0,   175,   -76,
     302,   449,   450,   -76,   -76,   -76,   -76,     0,   368,     0,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,
     -42,   -42,   -19,   -19,   -42,   267,   -42,     0,   598,   599,
     -42,   286,   286,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -20,   -20,   -43,   303,   -43,
     432,   303,     0,   -43,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,    60,   -44,   -44,   -44,   -44,   -44,     0,    60,   -44,
       0,   -44,     0,   -72,   600,   -44,   -72,   286,   385,   386,
     -72,   -72,   -72,   -72,    60,   609,    28,    29,   286,    30,
      31,   322,   323,   324,   325,     0,   326,   327,   328,    39,
      40,    41,     0,    42,    43,   329,   368,    45,   -30,   -30,
     330,   612,    47,     0,   286,   615,    48,     0,   286,     0,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   -32,   -32,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,    61,   -45,   -45,   -45,   -45,   -45,   -22,   -22,   -45,
       0,   -45,     0,    61,   -75,   -45,   -21,   -21,     0,   -75,
     432,   449,   450,   -75,   -75,   -75,   -75,   616,   268,    61,
     286,     0,    61,     0,   432,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   432,   303,   620,   -33,
     -33,   175,    60,   290,   291,     0,   292,   293,    60,   622,
     623,   624,   286,   286,   286,     0,   294,   295,   296,    61,
     297,   298,   299,   661,   300,     0,   368,   629,   631,   301,
     175,   286,   632,   302,   633,   286,     0,   286,    61,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,    61,     0,     0,   654,   267,    60,   286,   656,
       0,   304,   286,     0,     0,     0,     0,    61,    61,     0,
       0,   303,     0,   432,     0,   290,   291,   -73,   292,   293,
     -73,   268,   385,   386,   -73,   -73,   -73,   -73,   294,   295,
     296,     0,   297,   298,   299,   666,   300,     0,     0,    60,
      60,   301,     0,     0,     0,   302,     0,    61,     0,     0,
      61,     0,     0,     0,     0,   303,     0,     0,   304,     0,
       0,     0,     0,   368,   304,     0,     0,    61,     0,    61,
     303,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      61,   303,    61,     0,   304,     0,     0,     0,     0,   432,
     303,    60,     0,   -74,    60,    61,   -74,     0,   385,   386,
     -74,   -74,   -74,   -74,   303,     0,     0,     0,     0,     0,
     369,     0,     0,   303,   -76,     0,    60,   -76,    60,   385,
     386,   -76,   -76,   -76,   -76,   303,     0,     0,   303,     0,
     303,     0,     0,    60,     0,    60,     0,   268,   303,     0,
       0,     0,   303,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,     0,   -46,
     304,   -46,   433,   304,     0,   -46,     0,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,    61,   -34,   -34,   -34,   -34,   -34,     0,
      61,   -34,     0,   -34,     0,   -75,     0,   -34,   -75,     0,
     385,   386,   -75,   -75,   -75,   -75,    61,     0,    28,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
      38,    39,    40,    41,     0,    42,    43,   224,   369,    45,
       0,     0,    46,     0,    47,     0,     0,     0,    48,     0,
       0,     0,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,    62,   -48,   -48,   -48,   -48,   -48,     0,
       0,   -48,     0,   -48,     0,    62,     0,   -48,     0,     0,
     -73,   -73,   433,   112,   113,   -73,   -73,   -73,   -73,     0,
     269,    62,     0,     0,    62,     0,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   304,
       0,     0,     0,     0,    61,   290,   291,     0,   292,   293,
      61,     0,     0,     0,     0,     0,     0,     0,   294,   295,
     296,    62,   297,   298,   299,   667,   300,     0,   369,     0,
       0,   301,     0,     0,     0,   302,     0,     0,     0,     0,
      62,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,    62,     0,     0,     0,   268,    61,
       0,     0,     0,   305,   229,   230,    97,   231,   232,    62,
      62,     0,     0,   304,     0,   433,     0,   233,   234,   235,
       0,   236,   237,   269,     0,   238,     0,     0,     0,     0,
     239,     0,   -74,   -74,   240,   112,   113,   -74,   -74,   -74,
     -74,    61,    61,     0,     0,     0,     0,     0,     0,    62,
       0,     0,    62,     0,     0,     0,     0,   304,     0,     0,
     305,     0,     0,     0,     0,   369,   305,     0,     0,    62,
       0,    62,   304,     0,     0,     0,     0,     0,     0,     0,
      62,     0,    62,   304,    62,     0,   305,     0,     0,     0,
       0,   433,   304,    61,     0,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,     0,
       0,     0,   370,     0,     0,   304,     0,     0,    61,     0,
      61,     0,     0,     0,     0,     0,     0,   304,     0,     0,
     304,     0,   304,     0,     0,    61,     0,    61,     0,   269,
     304,     0,     0,     0,   304,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,     0,
       0,   -59,   305,   -59,   434,   305,     0,   -59,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,    62,   -35,   -35,   -35,   -35,
     -35,     0,    62,   -35,     0,   -35,     0,   229,   230,   -35,
     231,   232,     0,     0,     0,     0,     0,     0,    62,     0,
     233,   234,   235,     0,   236,   237,   130,     0,   238,     0,
    -110,     0,     0,   239,     0,   350,  -110,   240,     0,  -110,
     370,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,     0,     0,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,    63,   -55,   -55,   -55,   -55,
     -55,     0,     0,   -55,     0,   -55,     0,    63,     0,   -55,
       0,     0,   -76,   -76,   434,   112,   113,   -76,   -76,   -76,
     -76,     0,   270,    63,     0,     0,    63,     0,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   305,     0,     0,     0,     0,    62,   290,   291,     0,
     292,   293,    62,     0,     0,     0,     0,     0,     0,     0,
     294,   295,   296,    63,   297,   298,   299,     0,   300,     0,
     370,     0,     0,   301,     0,     0,     0,   302,     0,     0,
       0,     0,    63,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,    63,     0,     0,     0,
     269,    62,     0,     0,     0,   306,    28,    29,     0,    30,
      31,    63,    63,     0,     0,   305,     0,   434,     0,    39,
      40,    41,     0,    42,    43,   270,     0,    45,     0,     0,
     319,     0,    47,     0,   -75,   -75,    48,   112,   113,   -75,
     -75,   -75,   -75,    62,    62,     0,     0,     0,     0,     0,
       0,    63,     0,     0,    63,     0,     0,     0,     0,   305,
       0,     0,   306,     0,     0,     0,     0,   370,   306,     0,
       0,    63,     0,    63,   305,     0,     0,     0,     0,     0,
       0,     0,    63,     0,    63,   305,    63,     0,   306,     0,
       0,     0,     0,   434,   305,    62,     0,     0,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,   305,     0,
       0,     0,     0,     0,   371,     0,     0,   305,     0,     0,
      62,     0,    62,     0,     0,     0,     0,     0,     0,   305,
       0,     0,   305,     0,   305,     0,     0,    62,     0,    62,
       0,   270,   305,     0,     0,     0,   305,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,
     -56,     0,     0,   -56,   306,   -56,   435,   306,     0,   -56,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,    63,   -57,   -57,
     -57,   -57,   -57,     0,    63,   -57,     0,   -57,     0,   229,
     230,   -57,   231,   232,     0,     0,     0,     0,     0,     0,
      63,     0,   233,   234,   235,     0,   236,   237,     0,     0,
     238,   196,  -110,     0,     0,   239,  -110,   413,     0,   240,
       0,  -110,   371,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,    64,   -58,   -58,
     -58,   -58,   -58,     0,     0,   -58,     0,   -58,     0,    64,
       0,   -58,     0,     0,     0,     0,   435,     0,     0,     0,
       0,     0,     0,     0,   271,    64,     0,     0,    64,     0,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   306,     0,     0,     0,     0,    63,   229,
     230,     0,   231,   232,    63,     0,     0,     0,     0,     0,
       0,     0,   233,   234,   235,    64,   236,   237,     0,     0,
     238,   198,   371,     0,     0,   239,     0,     0,     0,   240,
       0,     0,     0,     0,    64,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,    64,     0,
       0,     0,   270,    63,     0,     0,     0,   307,   -47,   -47,
       0,   -47,   -47,    64,    64,     0,     0,   306,     0,   435,
       0,   -47,   -47,   -47,     0,   -47,   -47,   271,     0,   -47,
       0,     0,   -47,     0,   -47,     0,     0,     0,   -47,     0,
       0,     0,     0,     0,     0,    63,    63,     0,     0,     0,
       0,     0,     0,    64,     0,     0,    64,     0,     0,     0,
       0,   306,     0,     0,   307,     0,     0,     0,     0,   371,
     307,     0,     0,    64,     0,    64,   306,     0,     0,     0,
       0,     0,     0,     0,    64,     0,    64,   306,    64,     0,
     307,     0,     0,     0,     0,   435,   306,    63,     0,     0,
      63,    64,     0,     0,     0,     0,     0,     0,     0,     0,
     306,     0,     0,     0,     0,     0,   372,     0,     0,   306,
       0,     0,    63,     0,    63,     0,     0,     0,     0,     0,
       0,   306,     0,     0,   306,     0,   306,     0,     0,    63,
       0,    63,     0,   271,   306,     0,     0,     0,   306,     0,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,   -54,   -54,     0,     0,   -54,   307,   -54,   436,   307,
       0,   -54,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,    64,
     -52,   -52,   -52,   -52,   -52,     0,    64,   -52,     0,   -52,
       0,   -47,   -47,   -52,   -47,   -47,     0,     0,     0,     0,
       0,     0,    64,     0,   -47,   -47,   -47,     0,   -47,   -47,
       0,     0,   -47,   -47,  -114,     0,     0,   -47,     0,     0,
       0,   -47,  -114,  -114,   372,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    73,
     -53,   -53,   -53,   -53,   -53,     0,     0,   -53,     0,   -53,
       0,    73,     0,   -53,     0,     0,     0,     0,   436,     0,
       0,     0,     0,     0,     0,     0,   272,    73,     0,     0,
      73,     0,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   307,     0,     0,     0,     0,
      64,   -11,   -11,     0,   -11,   -11,    64,     0,     0,     0,
       0,     0,     0,     0,   -11,   -11,   -11,    73,   -11,   -11,
       0,     0,   -11,     0,   372,   -11,     0,   -11,     0,     0,
       0,   -11,     0,     0,     0,     0,    73,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
      73,     0,     0,     0,   271,    64,     0,     0,     0,   315,
     -48,   -48,     0,   -48,   -48,    73,    73,     0,     0,   307,
       0,   436,     0,   -48,   -48,   -48,     0,   -48,   -48,   272,
       0,   -48,     0,     0,   -48,     0,   -48,     0,     0,     0,
     -48,     0,     0,     0,     0,     0,     0,    64,    64,     0,
       0,     0,     0,     0,     0,    73,     0,     0,    73,     0,
       0,     0,     0,   307,     0,     0,   315,     0,     0,     0,
       0,   372,   315,     0,     0,    73,     0,    73,   307,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    73,   307,
      73,     0,   315,     0,     0,     0,     0,   436,   307,    64,
       0,     0,    64,    73,     0,     0,     0,     0,     0,     0,
       0,     0,   307,     0,     0,     0,     0,     0,   375,     0,
       0,   307,     0,     0,    64,     0,    64,     0,     0,     0,
       0,     0,     0,   307,     0,     0,   307,     0,   307,     0,
       0,    64,     0,    64,     0,   272,   307,     0,     0,     0,
     307,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,
     -51,   -51,   -51,   -51,   -51,     0,     0,   -51,   315,   -51,
     439,   315,     0,   -51,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,    73,   -47,   -47,   -47,   -47,   -47,     0,    73,   -47,
       0,   -47,     0,   -48,   -48,   -47,   -48,   -48,     0,     0,
       0,     0,     0,     0,    73,     0,   -48,   -48,   -48,     0,
     -48,   -48,     0,     0,   -48,   -48,  -112,     0,     0,   -48,
       0,     0,     0,   -48,  -112,  -112,   375,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,   -38,
     -38,    74,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
       0,   -38,     0,    74,     0,   -38,     0,     0,     0,     0,
     439,     0,     0,     0,     0,     0,     0,     0,   273,    74,
       0,     0,    74,     0,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   315,     0,     0,
       0,     0,    73,   -12,   -12,     0,   -12,   -12,    73,     0,
       0,     0,     0,     0,     0,     0,   -12,   -12,   -12,    74,
     -12,   -12,     0,     0,   -12,     0,   375,   -12,     0,   -12,
       0,     0,     0,   -12,     0,     0,     0,     0,    74,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,    74,     0,     0,     0,   272,    73,     0,     0,
       0,   316,   229,   230,     0,   231,   232,    74,    74,     0,
       0,   315,     0,   439,     0,   233,   234,   235,     0,   236,
     237,   273,     0,   238,   637,     0,     0,     0,   239,     0,
       0,     0,   240,     0,     0,     0,     0,     0,     0,    73,
      73,     0,     0,     0,     0,     0,     0,    74,     0,     0,
      74,     0,     0,     0,     0,   315,     0,     0,   316,     0,
       0,     0,     0,   375,   316,     0,     0,    74,     0,    74,
     315,     0,     0,     0,     0,     0,     0,     0,    74,     0,
      74,   315,    74,     0,   316,     0,     0,     0,     0,   439,
     315,    73,     0,     0,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,   315,     0,     0,     0,     0,     0,
     376,     0,     0,   315,     0,     0,    73,     0,    73,     0,
       0,     0,     0,     0,     0,   315,     0,     0,   315,     0,
     315,     0,     0,    73,     0,    73,     0,   273,   315,     0,
       0,     0,   315,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
     316,   -41,   440,   316,     0,   -41,     0,    28,    29,     1,
      30,    31,    32,    33,    34,    35,     0,    36,    37,    38,
      39,    40,    41,    74,    42,    43,   224,   104,    45,     0,
      74,    46,     0,    47,     0,   229,   230,    48,   231,   232,
       0,     0,     0,     0,     0,     0,    74,     0,   233,   234,
     235,     0,   236,   237,     0,     0,   238,   639,  -111,     0,
       0,   239,     0,     0,     0,   240,  -111,  -111,   376,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,    71,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,     0,   -36,     0,    71,     0,   -36,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,     0,     0,
      71,   103,     0,     0,    71,     0,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   316,
       0,     0,     0,     0,    74,    28,    29,     0,    30,    31,
      74,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    71,    42,    43,     0,     0,    45,     0,   376,     0,
       0,    47,     0,     0,     0,    48,     0,     0,     0,     0,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,   166,    71,     0,     0,     0,   273,    74,
       0,     0,     0,   313,   229,   230,     0,   231,   232,    71,
      71,     0,     0,   316,     0,   440,     0,   233,   234,   235,
       0,   236,   237,   188,     0,   238,     0,     0,     0,     0,
     239,     0,     0,     0,   240,     0,     0,     0,     0,     0,
       0,    74,    74,     0,     0,     0,     0,     0,     0,    71,
       0,     0,    71,     0,     0,     0,     0,   316,     0,     0,
     313,     0,     0,     0,     0,   376,   313,     0,     0,    71,
       0,    71,   316,     0,     0,     0,     0,     0,     0,     0,
      71,     0,    71,   316,    71,     0,   313,     0,     0,     0,
       0,   440,   316,    74,     0,     0,    74,    71,     0,     0,
       0,     0,     0,     0,     0,     0,   316,     0,   256,   257,
       0,   258,   259,   379,     0,   316,     0,     0,    74,     0,
      74,   260,   261,   262,     0,   263,   264,   316,     0,   265,
     316,     0,   316,     0,    47,    74,     0,    74,   266,   402,
     316,     0,     0,     0,   316,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,     0,
       0,   -39,   313,   -39,   313,   443,     0,   -39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,  -114,    71,     0,     0,     0,     0,
    -114,     0,    71,  -114,    70,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,    71,    70,
       0,     0,     0,    70,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     495,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,
     -40,     0,     0,     0,   -40,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,   509,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      70,    70,    70,    70,    70,    70,   160,   161,   162,   163,
     164,   165,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,   312,     0,   542,     0,     0,     0,    70,    70,
       0,     0,     0,     0,     0,     0,     0,     0,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     556,   313,     0,     0,     0,     0,    71,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,    70,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,   312,
     577,     0,     0,     0,     0,   312,     0,     0,    70,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,    70,     0,    70,     0,   312,     0,     0,     0,     0,
     188,   592,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,     0,     0,     0,   313,     0,   603,     0,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,
     -42,   -42,   -42,    71,    71,   -42,     0,   -42,     0,     0,
       0,   -42,     0,     0,     0,     0,     0,     0,     0,   313,
       0,     0,     0,     0,     0,     0,     0,   577,   626,     0,
       0,     0,     0,     0,   313,     0,     0,     0,     0,     0,
       0,   312,     0,   312,     0,   313,     0,     0,     0,     0,
       0,     0,     0,   603,   635,    71,     0,    69,    71,     0,
       0,     0,     0,     0,    70,     0,     0,     0,   313,    69,
       0,    70,     0,     0,     0,     0,     0,   313,     0,     0,
      71,     0,    71,     0,   101,     0,     0,    70,    69,   313,
       0,     0,   313,     0,   313,     0,  -113,    71,     0,    71,
       0,     0,   313,     0,  -113,  -113,   313,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
       0,     0,     0,     0,     0,    69,     0,     0,     0,   503,
     504,   505,   506,   507,   508,     0,     0,     0,   357,   358,
       0,   359,   360,     0,    69,    69,    69,    69,    69,   158,
     159,   361,   362,   363,     0,   364,   365,     0,    69,   366,
       0,     0,     0,     0,   239,     0,     0,   311,   367,     0,
       0,     0,     0,    69,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   312,   312,   312,
     312,   312,   312,   550,   551,   552,   553,   554,   555,     0,
     312,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,    70,     0,    69,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,   311,     0,     0,     0,     0,     0,
     311,     0,     0,    69,     0,    69,     0,     0,   421,   422,
       0,   423,   424,     0,    69,     0,    69,     0,    69,     0,
     311,   425,   426,   427,     0,   428,   429,     0,     0,   430,
       0,    69,     0,     0,   301,     0,     0,     0,   431,     0,
       0,     0,     0,     0,   312,     0,   373,     0,     0,     0,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,    70,    70,   -43,     0,   -43,     0,     0,     0,
     -43,   290,   291,     0,   292,   293,     0,     0,   312,     0,
       0,     0,     0,     0,   294,   295,   296,     0,   297,   298,
       0,     0,   300,   312,     0,     0,   311,   301,   437,     0,
       0,   302,     0,     0,   312,     0,     0,     0,     0,     0,
       0,     0,    68,     0,    70,     0,     0,    70,     0,    69,
       0,     0,     0,     0,    68,     0,    69,   312,     0,     0,
       0,     0,     0,     0,     0,     0,   312,     0,     0,    70,
       0,    70,    69,    68,     0,     0,     0,     0,   312,     0,
       0,   312,     0,   312,     0,     0,    70,     0,    70,     0,
       0,   312,     0,     0,     0,   312,     0,     0,     0,     0,
       0,     0,     0,     0,   357,   358,     0,   359,   360,     0,
      68,     0,   501,   502,     0,     0,     0,   361,   362,   363,
       0,   364,   365,   576,     0,   366,     0,     0,     0,    68,
     154,   155,   156,   157,   367,     0,   256,   257,     0,   258,
     259,     0,     0,    68,     0,     0,     0,     0,     0,   260,
     261,   262,   310,   263,   264,   591,     0,   265,    68,    68,
       0,     0,     0,     0,     0,     0,   266,     0,     0,     0,
       0,     0,   311,   311,   311,   311,   548,   549,     0,     0,
       0,     0,     0,     0,     0,   311,     0,     0,     0,     0,
      69,     0,     0,     0,     0,     0,    69,     0,    68,     0,
       0,    68,     0,     0,     0,     0,     0,     0,     0,   310,
       0,     0,     0,     0,     0,   310,     0,     0,    68,     0,
      68,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,    68,     0,    68,     0,   310,     0,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,    68,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   311,
       0,   -44,     0,   -44,     0,    28,    29,   -44,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,     0,    42,    43,   187,     0,   275,    69,    69,     0,
       0,     0,     0,     0,     0,    48,   421,   422,     0,   423,
     424,     0,     0,   311,     0,     0,     0,     0,     0,   425,
     426,   427,     0,   428,   429,   602,     0,   430,   311,     0,
       0,   310,     0,    66,     0,     0,   431,     0,     0,   311,
       0,     0,     0,     0,     0,    66,     0,     0,     0,    69,
       0,     0,    69,     0,    68,     0,     0,     0,     0,     0,
       0,    68,   311,     0,    66,     0,     0,     0,     0,     0,
       0,   311,     0,     0,    69,     0,    69,    68,     0,     0,
       0,     0,     0,   311,     0,     0,   311,     0,   311,     0,
       0,    69,     0,    69,     0,     0,   311,     0,   131,     0,
     311,    66,     0,     0,     0,     0,     0,     0,   357,   358,
       0,   359,   360,   497,   498,   499,   500,     0,     0,     0,
     153,   361,   362,   363,     0,   364,   365,   625,     0,   366,
       0,     0,     0,     0,   167,     0,     0,     0,   367,     0,
       0,   229,   230,   308,   231,   232,     0,     0,     0,    66,
      66,     0,     0,     0,   233,   234,   235,     0,   236,   237,
     576,     0,   378,     0,     0,     0,     0,     0,     0,     0,
       0,   240,     0,     0,     0,     0,     0,   544,   545,   546,
     547,     0,     0,     0,     0,     0,     0,     0,   131,    66,
     310,     0,    66,     0,     0,    68,     0,     0,     0,     0,
     308,    68,     0,     0,     0,     0,   308,     0,     0,    66,
       0,    66,     0,     0,   421,   422,     0,   423,   424,     0,
      66,     0,    66,     0,    66,     0,   308,   425,   426,   427,
       0,   428,   429,   634,     0,   430,     0,    66,     0,     0,
       0,     0,     0,     0,   431,    67,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,    67,   -45,   -45,
     -45,   -45,   -45,   -45,   310,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,   -45,     0,    67,     0,   -45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    68,     0,     0,     0,     0,     0,   408,
       0,   290,   291,     0,   292,   293,     0,     0,   310,     0,
       0,     0,   308,    67,   294,   295,   296,     0,   297,   298,
     602,     0,   442,   310,     0,     0,     0,     0,     0,     0,
       0,   302,    67,     0,   310,    66,     0,     0,     0,     0,
       0,     0,    66,     0,    68,     0,    67,    68,     0,     0,
       0,     0,     0,     0,     0,   309,     0,   310,    66,     0,
       0,    67,    67,   131,     0,     0,   310,     0,     0,    68,
       0,    68,     0,     0,     0,     0,     0,     0,   310,     0,
       0,   310,     0,   310,     0,     0,    68,     0,    68,    86,
       0,   310,     0,     0,     0,   310,     0,     0,     0,     0,
       0,    67,    98,     0,    67,     0,     0,   510,   131,     0,
       0,     0,   309,     0,     0,     0,     0,     0,   309,     0,
       0,    67,     0,    67,     0,     0,   131,     0,     0,     0,
       0,     0,    67,     0,    67,     0,    67,     0,   309,     0,
       0,     0,     0,     0,   135,   281,   138,   139,     0,    67,
       0,   145,   146,   147,     0,     0,     0,     0,     0,     0,
     256,   257,     0,   258,   259,     0,     0,     0,     0,     0,
       0,   557,     0,   260,   261,   262,    66,   263,   264,     0,
       0,   265,    66,     0,     0,     0,     0,     0,     0,     0,
     266,     0,     0,   320,   320,     0,     0,     0,   321,     0,
       0,   131,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   309,     0,   -46,     0,   -46,     0,
       0,     0,   -46,   338,   197,   199,     0,     0,    28,    29,
       0,    30,    31,     0,     0,   308,     0,    67,   131,     0,
       0,    39,    40,    41,    67,    42,    43,     0,     0,   275,
       0,     0,   357,   358,     0,   359,   360,     0,    48,     0,
      67,     0,     0,    66,    66,   361,   362,   363,     0,   364,
     365,     0,     0,   366,   229,   230,     0,   231,   232,   308,
       0,     0,   367,     0,     0,   355,     0,   233,   234,   235,
       0,   236,   237,     0,   308,   378,   421,   422,     0,   423,
     424,     0,     0,     0,   240,   308,     0,     0,     0,   425,
     426,   427,   400,   428,   429,    66,     0,   430,    66,     0,
       0,     0,    98,     0,     0,     0,   431,     0,   308,     0,
       0,     0,     0,     0,     0,     0,     0,   308,     0,     0,
      66,     0,    66,     0,     0,     0,     0,   419,     0,   308,
       0,     0,   308,     0,   308,     0,     0,    66,     0,    66,
       0,     0,   308,     0,     0,     0,   308,     0,     0,   461,
       0,     0,     0,   309,     0,     0,   290,   291,    67,   292,
     293,     0,     0,     0,    67,     0,     0,     0,     0,   294,
     295,   296,     0,   297,   298,     0,     0,   442,     0,   483,
     484,   485,     0,     0,     0,     0,   302,     0,     0,     0,
       0,     0,     0,   493,     0,   -99,     0,     0,     0,     0,
       0,     0,     0,   -99,   -99,   355,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,     0,
       0,     0,     0,     0,   513,   514,   515,   309,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   528,   529,   530,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    67,   540,     0,     0,
       0,  -112,     0,     0,     0,     0,     0,  -112,     0,   419,
    -112,   309,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,     0,   309,     0,     0,   559,
     281,   562,   563,     0,     0,     0,     0,   309,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
      67,     0,     0,     0,     0,     0,     0,   580,   581,   582,
     309,     0,     0,     0,     0,     0,     0,     0,     0,   309,
       0,     0,    67,     0,    67,     0,     0,     0,     0,     0,
       0,   309,     0,     0,   309,     0,   309,     0,     0,    67,
       0,    67,     0,     0,   309,     0,     0,     0,   309,   -60,
       0,     0,     0,     0,   606,   607,   608,   -60,   -60,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,     0,     0,     0,     0,   320,   320,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
     -37,     0,   -61,   -37,     0,   -37,     0,     0,     0,   -37,
     -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -62,     0,     0,   338,
     638,   640,   338,     0,   -62,   -62,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -77,     0,     0,     0,   338,   -77,   338,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   451,   452,   453,   454,   455,   456,
       0,   338,     0,   338,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,     0,     0,   -48,     0,
     -48,     0,     0,     0,   -48,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,
     -59,     0,   -59,   -59,   -59,   -59,   -59,     0,     0,   -59,
       0,   -59,     0,     0,     0,   -59,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,
     -55,     0,   -55,     0,     0,     0,   -55,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,
     -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,     0,
       0,   -56,     0,   -56,     0,     0,     0,   -56,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,
       0,     0,   -57,     0,   -57,     0,     0,     0,   -57,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -58,     0,   -58,     0,     0,     0,   -58,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,
     -54,   -54,     0,     0,   -54,     0,   -54,     0,     0,     0,
     -54,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
       0,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,
     -52,   -52,   -52,     0,     0,   -52,     0,   -52,     0,     0,
       0,   -52,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,     0,     0,   -50,     0,   -50,     0,
       0,     0,   -50,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,     0,
     -53,   -53,   -53,   -53,   -53,     0,     0,   -53,     0,   -53,
       0,     0,     0,   -53,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,     0,
     -51,     0,     0,     0,   -51,    28,    29,     1,    30,    31,
      32,    33,    34,    35,     0,    36,    37,    38,    39,    40,
      41,     0,    42,    43,   224,   344,    45,     0,     0,    46,
       0,    47,     0,     0,     0,    48,    28,    29,     1,    30,
      31,    32,    33,    34,    35,     0,    36,    37,    38,    39,
      40,    41,     0,    42,    43,   224,   468,    45,     0,     0,
      46,     0,    47,     0,     0,     0,    48,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,     0,   -34,     0,     0,     0,   -34,    28,    29,
       1,    30,    31,    32,    33,    34,    35,     0,    36,    37,
      38,    39,    40,    41,     0,    42,    43,   224,   479,    45,
       0,     0,    46,     0,    47,     0,     0,     0,    48,   -11,
     -11,   -11,   -11,   -11,   -11,   -11,   -11,   -11,     0,   -11,
     -11,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,
     -11,     0,     0,   -11,     0,   -11,     0,     0,     0,   -11,
      28,    29,     1,    30,    31,    32,    33,    34,    35,     0,
      36,    37,    38,    39,    40,    41,     0,    42,    43,   224,
     566,    45,     0,     0,    46,     0,    47,     0,     0,     0,
      48,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,     0,   -35,     0,     0,
       0,   -35,   -12,   -12,   -12,   -12,   -12,   -12,   -12,   -12,
     -12,     0,   -12,   -12,   -12,   -12,   -12,   -12,     0,   -12,
     -12,   -12,   -12,   -12,     0,     0,   -12,     0,   -12,     0,
       0,     0,   -12,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,     0,   -63,   -49,     0,   -49,
       0,     0,     0,   -49,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -90,     0,     0,     0,     0,     0,     0,     0,   -90,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   121,   -90,   -90,
     -90,   -90,   -90,   -90,  -100,     0,     0,     0,     0,     0,
       0,     0,  -100,  -100,     0,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -97,     0,
       0,     0,     0,     0,     0,     0,   -97,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,  -102,     0,     0,     0,     0,     0,     0,     0,
    -102,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   -98,     0,     0,     0,
       0,     0,     0,     0,   -98,   -98,     0,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
    -115,     0,     0,     0,     0,     0,     0,     0,  -115,  -115,
       0,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -101,     0,     0,     0,     0,     0,
       0,     0,  -101,  -101,     0,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   -64,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -66,     0,     0,     0,     0,     0,     0,     0,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -65,     0,     0,     0,
       0,     0,     0,     0,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,  -103,     0,     0,     0,     0,     0,
       0,     0,  -103,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -104,     0,
       0,     0,     0,     0,     0,     0,  -104,  -104,     0,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -111,     0,     0,     0,     0,     0,  -111,     0,
       0,  -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -113,     0,     0,     0,
       0,     0,  -113,     0,     0,  -113,     0,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
     -99,     0,     0,     0,     0,     0,   -99,     0,     0,   -99,
       0,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -60,     0,     0,     0,     0,     0,
     -60,     0,     0,   -60,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -61,     0,
       0,     0,     0,     0,   -61,     0,     0,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -62,     0,     0,     0,     0,     0,   -62,     0,
       0,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -63,     0,     0,     0,
       0,     0,   -63,     0,     0,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -90,     0,     0,     0,     0,     0,   -90,     0,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   394,   -90,   -90,
     -90,   -90,   -90,   -90,  -100,     0,     0,     0,     0,     0,
    -100,     0,     0,  -100,     0,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,   -97,     0,
       0,     0,     0,     0,   -97,     0,     0,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,  -102,     0,     0,     0,     0,     0,  -102,     0,
       0,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   -90,     0,     0,     0,
       0,     0,     0,     0,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
    -114,     0,     0,     0,  -114,     0,     0,     0,     0,  -114,
       0,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -112,     0,     0,     0,  -112,     0,
       0,     0,     0,  -112,     0,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -111,     0,
       0,     0,  -111,     0,     0,     0,     0,  -111,     0,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -113,     0,     0,     0,  -113,     0,     0,     0,
       0,  -113,     0,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,   -99,     0,     0,     0,
     -99,     0,     0,     0,     0,   -99,     0,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -60,     0,     0,     0,   -60,     0,     0,     0,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -61,     0,     0,     0,   -61,     0,
       0,     0,     0,   -61,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -62,     0,
       0,     0,   -62,     0,     0,     0,     0,   -62,     0,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -63,     0,     0,     0,   -63,     0,     0,     0,
       0,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -90,     0,     0,     0,
     -90,     0,     0,     0,     0,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   458,   -90,   -90,   -90,   -90,   -90,   -90,
    -100,     0,     0,     0,  -100,     0,     0,     0,     0,  -100,
       0,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,   -97,     0,     0,     0,   -97,     0,
       0,     0,     0,   -97,     0,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,  -102,     0,
       0,     0,  -102,     0,     0,     0,     0,  -102,     0,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -110,     0,     0,     0,     0,   488,  -110,     0,
       0,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,     0,
    -110,  -110,  -110,  -110,  -110,  -110,   -98,     0,     0,     0,
       0,     0,   -98,     0,     0,   -98,     0,   -98,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -90,     0,     0,     0,     0,     0,   -90,     0,     0,   -90,
       0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,  -110,     0,     0,     0,  -110,   535,
       0,     0,     0,  -110,     0,  -110,  -110,  -110,  -110,  -110,
    -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,   -98,     0,
       0,     0,   -98,     0,     0,     0,     0,   -98,     0,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -90,     0,     0,     0,   -90,     0,     0,     0,
       0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,  -115,     0,     0,     0,
       0,     0,  -115,     0,     0,  -115,     0,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,     0,     0,     0,  -115,     0,     0,     0,     0,  -115,
       0,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -101,     0,     0,     0,     0,     0,
    -101,     0,     0,  -101,     0,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   -64,     0,
       0,     0,     0,     0,   -64,     0,     0,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -66,     0,     0,     0,     0,     0,   -66,     0,
       0,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -65,     0,     0,     0,
       0,     0,   -65,     0,     0,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -67,     0,     0,     0,     0,     0,   -67,     0,     0,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -91,     0,     0,     0,     0,     0,
       0,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,  -101,     0,
       0,     0,  -101,     0,     0,     0,     0,  -101,     0,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,   -64,     0,     0,     0,   -64,     0,     0,     0,
       0,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -66,     0,     0,     0,
     -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -65,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -67,     0,     0,     0,   -67,     0,
       0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -91,     0,
       0,     0,     0,     0,   -91,     0,     0,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,     0,     0,     0,   -91,     0,     0,     0,
       0,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,  -103,     0,     0,     0,
       0,     0,  -103,     0,     0,  -103,     0,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,     0,     0,     0,  -103,     0,     0,     0,     0,  -103,
       0,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -104,     0,     0,     0,     0,     0,
    -104,     0,     0,  -104,     0,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,     0,
       0,     0,  -104,     0,     0,     0,     0,  -104,     0,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,   120,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -88,
     -81,   -81,   -81,   -81,   -81,   -81,     0,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,   -90,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   120,   -90,   -90,   -90,   -90,   -90,   -90,
       0,   -82,   -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     120,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -83,   -83,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   120,   -83,   -83,
     -83,   -83,   -83,   -83,     0,   -84,   -84,     0,   -84,   -84,
     -84,   -84,   -84,   -84,   120,   -84,   -84,   -84,   -84,   -84,
     -84,     0,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   120,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   120,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -89,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -91,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   393,     0,     0,     0,
       0,     0,   -81,     0,     0,   -81,     0,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -88,     0,     0,     0,     0,     0,   -88,     0,     0,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,  -114,   -88,   -88,
     -88,   -88,   -88,   -88,     0,  -114,  -114,     0,  -114,  -114,
    -114,  -114,  -114,  -114,  -112,  -114,  -114,  -114,  -114,  -114,
    -114,     0,  -112,  -112,     0,  -112,  -112,  -112,  -112,  -112,
    -112,  -111,  -112,  -112,  -112,  -112,  -112,  -112,     0,  -111,
    -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,  -113,  -111,
    -111,  -111,  -111,  -111,  -111,     0,  -113,  -113,     0,  -113,
    -113,  -113,  -113,  -113,  -113,   -99,  -113,  -113,  -113,  -113,
    -113,  -113,     0,   -99,   -99,     0,   -99,   -99,   -99,   -99,
     -99,   -99,   -60,   -99,   -99,   -99,   -99,   -99,   -99,     0,
     -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -61,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -62,   -61,   -61,   -61,
     -61,   -61,   -61,     0,   -62,   -62,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -63,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,
    -100,   -63,   -63,   -63,   -63,   -63,   -63,     0,  -100,  -100,
       0,  -100,  -100,  -100,  -100,  -100,  -100,   -97,  -100,  -100,
    -100,  -100,  -100,  -100,     0,   -97,   -97,     0,   -97,   -97,
     -97,   -97,   -97,   -97,  -102,   -97,   -97,   -97,   -97,   -97,
     -97,     0,  -102,  -102,     0,  -102,  -102,  -102,  -102,  -102,
    -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,   457,     0,
       0,     0,   -81,     0,     0,     0,     0,   -81,     0,   -81,
     -81,   -81,   -81,   -81,   -81,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -88,     0,     0,     0,   -88,     0,     0,     0,
       0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,     0,
     -88,   -88,   -88,   -88,   -88,   -88,  -114,     0,     0,     0,
       0,     0,  -114,     0,     0,  -114,     0,  -114,  -114,  -114,
    -114,  -114,  -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,
    -112,     0,     0,     0,     0,     0,  -112,     0,     0,  -112,
       0,  -112,  -112,  -112,  -112,  -112,  -112,     0,  -112,  -112,
    -112,  -112,  -112,  -112,  -111,     0,     0,     0,     0,     0,
    -111,     0,     0,  -111,     0,  -111,  -111,  -111,  -111,  -111,
    -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,  -113,     0,
       0,     0,     0,     0,  -113,     0,     0,  -113,     0,  -113,
    -113,  -113,  -113,  -113,  -113,     0,  -113,  -113,  -113,  -113,
    -113,  -113,   -99,     0,     0,     0,     0,     0,   -99,     0,
       0,   -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,
     -99,   -99,   -99,   -99,   -99,   -99,   -60,     0,     0,     0,
       0,     0,   -60,     0,     0,   -60,     0,   -60,   -60,   -60,
     -60,   -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -61,     0,     0,     0,     0,     0,   -61,     0,     0,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -62,     0,     0,     0,     0,     0,
     -62,     0,     0,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -63,     0,
       0,     0,     0,     0,   -63,     0,     0,   -63,     0,   -63,
     -63,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -90,     0,     0,     0,     0,     0,   -90,     0,
       0,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,  -100,     0,     0,     0,
       0,     0,  -100,     0,     0,  -100,     0,  -100,  -100,  -100,
    -100,  -100,  -100,     0,  -100,  -100,  -100,  -100,  -100,  -100,
     -97,     0,     0,     0,     0,     0,   -97,     0,     0,   -97,
       0,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,
     -97,   -97,   -97,   -97,  -102,     0,     0,     0,     0,     0,
    -102,     0,     0,  -102,     0,  -102,  -102,  -102,  -102,  -102,
    -102,   -98,  -102,  -102,  -102,  -102,  -102,  -102,     0,   -98,
     -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,     0,   -98,
     -98,   -98,   -98,   -98,   -98,  -114,     0,     0,     0,  -114,
       0,     0,     0,     0,  -114,     0,  -114,  -114,  -114,  -114,
    -114,  -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,  -112,
       0,     0,     0,  -112,     0,     0,     0,     0,  -112,     0,
    -112,  -112,  -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,
    -112,  -112,  -112,  -111,     0,     0,     0,  -111,     0,     0,
       0,     0,  -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,
       0,  -111,  -111,  -111,  -111,  -111,  -111,  -113,     0,     0,
       0,  -113,     0,     0,     0,     0,  -113,     0,  -113,  -113,
    -113,  -113,  -113,  -113,     0,  -113,  -113,  -113,  -113,  -113,
    -113,   -99,     0,     0,     0,   -99,     0,     0,     0,     0,
     -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,     0,   -99,
     -99,   -99,   -99,   -99,   -99,   -60,     0,     0,     0,   -60,
       0,     0,     0,     0,   -60,     0,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -61,
       0,     0,     0,   -61,     0,     0,     0,     0,   -61,     0,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -62,     0,     0,     0,   -62,     0,     0,
       0,     0,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -63,     0,     0,
       0,   -63,     0,     0,     0,     0,   -63,     0,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -90,     0,     0,     0,   -90,     0,     0,     0,     0,
     -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,  -100,     0,     0,     0,  -100,
       0,     0,     0,     0,  -100,     0,  -100,  -100,  -100,  -100,
    -100,  -100,     0,  -100,  -100,  -100,  -100,  -100,  -100,   -97,
       0,     0,     0,   -97,     0,     0,     0,     0,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,
     -97,   -97,   -97,  -102,     0,     0,     0,  -102,     0,     0,
       0,     0,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,
       0,  -102,  -102,  -102,  -102,  -102,  -102,   -98,     0,     0,
       0,     0,     0,   -98,     0,     0,   -98,     0,   -98,   -98,
     -98,   -98,   -98,   -98,     0,   -98,   -98,   -98,   -98,   -98,
     -98,   393,     0,     0,     0,     0,     0,   -82,     0,     0,
     -82,     0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   393,     0,     0,     0,     0,
       0,   -83,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   393,
       0,     0,     0,     0,     0,   -84,     0,     0,   -84,     0,
     -84,   -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   393,     0,     0,     0,     0,     0,   -85,
       0,     0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   393,     0,     0,
       0,     0,     0,   -86,     0,     0,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,
     -86,   393,     0,     0,     0,     0,     0,   -87,     0,     0,
     -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -87,   -87,   -87,   -87,   -87,   -89,     0,     0,     0,     0,
       0,   -89,     0,     0,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,  -115,   -89,   -89,   -89,   -89,   -89,   -89,     0,
    -115,  -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,     0,
    -115,  -115,  -115,  -115,  -115,  -115,   -98,     0,     0,     0,
     -98,     0,     0,     0,     0,   -98,     0,   -98,   -98,   -98,
     -98,   -98,   -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,
     457,     0,     0,     0,   -82,     0,     0,     0,     0,   -82,
       0,   -82,   -82,   -82,   -82,   -82,   -82,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   457,     0,     0,     0,   -83,     0,
       0,     0,     0,   -83,     0,   -83,   -83,   -83,   -83,   -83,
     -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   457,     0,
       0,     0,   -84,     0,     0,     0,     0,   -84,     0,   -84,
     -84,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   457,     0,     0,     0,   -85,     0,     0,     0,
       0,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   457,     0,     0,     0,
     -86,     0,     0,     0,     0,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     457,     0,     0,     0,   -87,     0,     0,     0,     0,   -87,
       0,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -89,     0,     0,     0,   -89,     0,
       0,     0,     0,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -91,     0,
       0,     0,     0,     0,   -91,     0,     0,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,  -115,     0,     0,     0,     0,     0,  -115,     0,
       0,  -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,  -101,
    -115,  -115,  -115,  -115,  -115,  -115,     0,  -101,  -101,     0,
    -101,  -101,  -101,  -101,  -101,  -101,   -64,  -101,  -101,  -101,
    -101,  -101,  -101,     0,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -66,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -65,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -67,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -91,     0,     0,     0,   -91,     0,     0,     0,     0,
     -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,  -115,     0,     0,     0,  -115,
       0,     0,     0,     0,  -115,     0,  -115,  -115,  -115,  -115,
    -115,  -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,  -101,
       0,     0,     0,     0,     0,  -101,     0,     0,  -101,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,  -101,  -101,  -101,
    -101,  -101,  -101,   -64,     0,     0,     0,     0,     0,   -64,
       0,     0,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -66,     0,     0,
       0,     0,     0,   -66,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -65,     0,     0,     0,     0,     0,   -65,     0,     0,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -67,     0,     0,     0,     0,
       0,   -67,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,  -101,
       0,     0,     0,  -101,     0,     0,     0,     0,  -101,     0,
    -101,  -101,  -101,  -101,  -101,  -101,     0,  -101,  -101,  -101,
    -101,  -101,  -101,   -64,     0,     0,     0,   -64,     0,     0,
       0,     0,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -66,     0,     0,
       0,   -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -65,     0,     0,     0,   -65,     0,     0,     0,     0,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   -65,   -67,     0,     0,     0,   -67,
       0,     0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,  -103,   -67,   -67,   -67,   -67,   -67,   -67,     0,
    -103,  -103,     0,  -103,  -103,  -103,  -103,  -103,  -103,     0,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,     0,     0,     0,
       0,     0,  -103,     0,     0,  -103,     0,  -103,  -103,  -103,
    -103,  -103,  -103,  -104,  -103,  -103,  -103,  -103,  -103,  -103,
       0,  -104,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,
       0,  -104,  -104,  -104,  -104,  -104,  -104,  -103,     0,     0,
       0,  -103,     0,     0,     0,     0,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,  -104,     0,     0,     0,     0,     0,  -104,     0,     0,
    -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,     0,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,     0,     0,     0,  -104,
       0,     0,     0,     0,  -104,     0,  -104,  -104,  -104,  -104,
    -104,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,   -78,
       0,     0,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   451,   452,   453,   454,   455,   456,   -79,
       0,     0,     0,     0,   -79,     0,   -79,   -79,   -79,   -79,
     -79,   -79,     0,   451,   452,   453,   454,   455,   456,   -80,
       0,     0,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   451,   452,   453,   454,   455,   456,   -78,
       0,     0,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   387,   388,   389,   390,   391,   392,   -79,     0,     0,
     -79,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,   387,
     388,   389,   390,   391,   392,   -80,     0,     0,   -80,     0,
     -80,   -80,   -80,   -80,   -80,   -80,     0,   387,   388,   389,
     390,   391,   392,   -77,   -77,     0,   -77,   -77,   -77,   -77,
     -77,   -77,     0,   114,   115,   116,   117,   118,   119,   -78,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,     0,   114,
     115,   116,   117,   118,   119,   -79,   -79,     0,   -79,   -79,
     -79,   -79,   -79,   -79,     0,   114,   115,   116,   117,   118,
     119,   -80,   -80,     0,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   114,   115,   116,   117,   118,   119
};

static const yytype_int16 yycheck[] =
{
      20,    15,   224,    51,    23,    27,    28,    21,   170,     0,
       7,     7,    32,   100,     5,     0,    12,    25,     3,     3,
      28,     5,    19,    19,     3,     3,    23,    47,    48,     3,
      15,    51,     5,     3,     3,   122,    21,     5,   176,   341,
      24,   343,     5,    27,     0,    24,    24,     5,    27,   130,
      24,     5,    25,    27,    24,    24,     5,    27,    27,    22,
       0,     1,     3,     3,    22,    25,    24,   176,    88,    27,
      28,    91,    92,    22,    24,    15,    24,    25,    27,    28,
      20,    21,   238,    24,    81,    81,    27,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   404,    88,   100,     5,   187,   329,     3,   265,
     130,    51,    25,     0,    24,    28,   136,   137,     5,   275,
       3,     4,     0,     6,     7,    25,   122,     5,    24,    24,
     150,     3,     5,    16,    17,    18,    88,    20,    21,    22,
      23,    24,    24,     3,   300,     5,    29,    85,    88,    22,
      33,    24,    24,    25,    27,    28,   176,    25,     5,   179,
      28,     3,   176,     5,    24,    25,     0,   187,    24,     5,
      24,     5,    24,   193,   176,    22,   196,   179,   198,   341,
       5,   343,     3,    25,   136,   137,    22,   207,   176,   209,
       3,   211,     3,   213,   196,     3,   198,    22,     5,    24,
     287,    24,    27,    28,   224,   207,   225,   209,     3,   211,
     366,    24,    25,    24,    25,    22,    24,   176,   299,   239,
      24,    25,   378,   219,   176,   176,   222,    24,   225,    24,
       3,     4,     5,     6,     7,     5,     3,   175,     5,    24,
       5,    25,   404,    16,    17,    18,   266,    20,    21,   411,
       3,    24,    22,     3,    27,   193,    29,    22,    25,    24,
      33,   280,    27,    28,     3,    25,     5,    25,     0,   350,
       5,    24,    25,     5,   430,   213,     3,     5,     5,   299,
      25,   301,   302,   280,   224,    24,   442,    22,   228,    24,
       0,   287,    27,    28,    22,     5,    24,   345,    25,    27,
      28,    23,   322,     0,    25,    25,    28,    28,     5,   329,
      32,    33,    34,    35,   395,    27,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   345,    13,    14,    15,    16,
      17,    18,   413,    20,    21,    22,    23,    24,     0,     0,
      27,    25,    29,     5,     5,     0,    33,   367,    23,    25,
       5,    25,     3,    28,     5,    30,    31,    32,    33,    34,
      35,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,    25,    24,    25,    27,    28,    28,
       3,     4,     0,     6,     7,    23,    23,     5,    27,   329,
      28,    28,    20,    16,    17,    18,    27,    20,    21,    22,
      23,    24,    27,    28,    32,   345,    29,   488,    27,    28,
      33,   431,   350,    32,    33,    34,    35,    23,    25,    47,
      48,   469,    28,    51,    24,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,    23,
      23,    27,    28,   463,    28,    28,   466,   467,    23,   469,
      19,    23,    25,    28,   535,    24,    28,   395,    27,    28,
      88,    30,    31,    32,    33,    34,    35,   487,    37,    38,
      39,    40,    41,    42,   612,   413,    24,   615,   463,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    24,   576,    24,   517,   518,   637,
      23,   639,   130,   612,    25,    28,   615,    28,   136,   137,
     591,   463,   532,    24,   534,    23,   654,    24,   656,    23,
      28,   602,   150,   463,    28,    24,    23,    23,   637,   469,
     639,    28,    28,    30,    31,    32,    33,    34,    35,    24,
     560,   561,    24,    25,   625,   654,    28,   656,   176,    23,
     488,   179,    25,   634,    28,    28,   576,     3,     4,   187,
       6,     7,    23,    25,   584,   193,    28,    28,   196,    25,
     198,   591,    23,    25,    20,    25,    28,    28,    24,   207,
      25,   209,   602,   211,    24,   213,    25,    27,    28,    28,
     610,   611,   612,    24,   532,   615,   224,   535,   612,    24,
      25,   615,    24,    28,    25,   625,    24,    28,   560,   561,
     612,   239,   240,   615,   634,    27,    28,   637,    24,   639,
      24,    27,    28,   637,   612,   639,   646,   615,    24,   649,
      25,   651,    24,    28,   654,   637,   656,   639,   266,   659,
     654,    24,   656,   663,    24,    25,    24,    25,    28,   637,
      28,   639,   654,   612,   656,    24,   615,    24,    24,    25,
     612,   612,    28,   615,   615,    24,   654,    25,   656,    25,
      28,   299,    28,   301,   302,    24,    25,    25,   637,    28,
     639,    25,    27,    28,    28,   637,   637,   639,   639,    24,
      25,    27,    28,    28,   322,   654,    24,   656,    25,    27,
      28,   329,   654,   654,   656,   656,    24,     3,   646,    27,
      28,   649,    25,   651,    24,     3,     4,   345,     6,     7,
      24,   659,    24,    25,    25,   663,    28,    28,    16,    17,
      18,    24,    20,    21,    22,    23,    24,    27,    28,   367,
      25,    29,    24,    28,     3,    33,    25,    32,    33,    34,
      35,    27,    28,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    25,    20,    21,    22,    23,    24,    27,    28,
      27,    24,    29,    19,    27,    28,    33,    25,    24,     3,
      28,    27,    28,   431,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,    25,    25,    24,    28,   463,    27,    28,    24,    25,
      25,   469,    28,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   487,
      20,    21,    22,    23,    24,    24,    25,    27,    24,    29,
      24,    25,    25,    33,    28,    28,    27,    28,    25,     3,
       4,    28,     6,     7,    25,    25,    24,    28,    28,   517,
     518,    24,    16,    17,    18,    24,    20,    21,    22,    23,
      24,    27,    28,    25,   532,    29,   534,    27,    28,    33,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    25,    20,    21,    22,
      23,    24,   560,   561,    27,     3,    29,    25,    27,    28,
      33,    30,    31,    32,    33,    34,    35,    25,   576,    20,
      28,     3,     4,    25,     6,     7,   584,   585,    25,    25,
      25,    32,    28,   591,    16,    17,    18,     3,    20,    21,
      22,    25,    24,     3,   602,    25,    47,    48,    28,    25,
      51,    33,   610,   611,   612,    25,    25,   615,    28,    28,
      25,    30,    31,    32,    33,    34,    35,   625,    37,    38,
      39,    40,    41,    42,    25,    25,   634,    28,    28,   637,
      25,   639,    25,    28,    25,    28,    25,    88,   646,    28,
      25,   649,    25,   651,    25,    28,   654,    28,   656,    25,
      25,   659,    28,    28,    25,   663,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    25,    25,    25,    28,    28,    28,    25,    25,   130,
      28,    28,    23,    27,    28,   136,   137,    28,    27,    30,
      31,    32,    33,    34,    35,    25,    24,    25,    28,   150,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    27,    20,    21,    22,
      23,    24,    27,    28,    27,   176,    29,    27,   179,    25,
      33,    25,    28,   129,    28,    25,   187,    25,    28,    81,
      28,    25,   193,    25,    28,   196,    28,   198,    97,    25,
       3,     4,    28,     6,     7,    -1,   207,    -1,   209,    -1,
     211,    -1,   213,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,   224,    23,    25,    29,    -1,    28,    28,
      33,    30,    31,    32,    33,    34,    35,    -1,   239,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    24,    25,    27,   266,    29,    -1,    25,    25,
      33,    28,    28,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    24,    25,    27,   299,    29,
     301,   302,    -1,    33,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   322,    20,    21,    22,    23,    24,    -1,   329,    27,
      -1,    29,    -1,    25,    25,    33,    28,    28,    30,    31,
      32,    33,    34,    35,   345,    25,     3,     4,    28,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,   367,    24,    24,    25,
      27,    25,    29,    -1,    28,    25,    33,    -1,    28,    -1,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,    24,    25,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    20,    20,    21,    22,    23,    24,    24,    25,    27,
      -1,    29,    -1,    32,    23,    33,    24,    25,    -1,    28,
     431,    30,    31,    32,    33,    34,    35,    25,    47,    48,
      28,    -1,    51,    -1,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,    25,    24,
      25,    28,   463,     3,     4,    -1,     6,     7,   469,    25,
      25,    25,    28,    28,    28,    -1,    16,    17,    18,    88,
      20,    21,    22,    23,    24,    -1,   487,    25,    25,    29,
      28,    28,    25,    33,    25,    28,    -1,    28,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    25,   517,   518,    28,    25,
      -1,   130,    28,    -1,    -1,    -1,    -1,   136,   137,    -1,
      -1,   532,    -1,   534,    -1,     3,     4,    25,     6,     7,
      28,   150,    30,    31,    32,    33,    34,    35,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,   560,
     561,    29,    -1,    -1,    -1,    33,    -1,   176,    -1,    -1,
     179,    -1,    -1,    -1,    -1,   576,    -1,    -1,   187,    -1,
      -1,    -1,    -1,   584,   193,    -1,    -1,   196,    -1,   198,
     591,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
     209,   602,   211,    -1,   213,    -1,    -1,    -1,    -1,   610,
     611,   612,    -1,    25,   615,   224,    28,    -1,    30,    31,
      32,    33,    34,    35,   625,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,   634,    25,    -1,   637,    28,   639,    30,
      31,    32,    33,    34,    35,   646,    -1,    -1,   649,    -1,
     651,    -1,    -1,   654,    -1,   656,    -1,   266,   659,    -1,
      -1,    -1,   663,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    27,
     299,    29,   301,   302,    -1,    33,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   322,    20,    21,    22,    23,    24,    -1,
     329,    27,    -1,    29,    -1,    25,    -1,    33,    28,    -1,
      30,    31,    32,    33,    34,    35,   345,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,   367,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    20,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    32,    -1,    33,    -1,    -1,
      27,    28,   431,    30,    31,    32,    33,    34,    35,    -1,
      47,    48,    -1,    -1,    51,    -1,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
      -1,    -1,    -1,    -1,   463,     3,     4,    -1,     6,     7,
     469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    88,    20,    21,    22,    23,    24,    -1,   487,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,   517,   518,
      -1,    -1,    -1,   130,     3,     4,     5,     6,     7,   136,
     137,    -1,    -1,   532,    -1,   534,    -1,    16,    17,    18,
      -1,    20,    21,   150,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    27,    28,    33,    30,    31,    32,    33,    34,
      35,   560,   561,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,   179,    -1,    -1,    -1,    -1,   576,    -1,    -1,
     187,    -1,    -1,    -1,    -1,   584,   193,    -1,    -1,   196,
      -1,   198,   591,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,    -1,   209,   602,   211,    -1,   213,    -1,    -1,    -1,
      -1,   610,   611,   612,    -1,    -1,   615,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   625,    -1,    -1,    -1,
      -1,    -1,   239,    -1,    -1,   634,    -1,    -1,   637,    -1,
     639,    -1,    -1,    -1,    -1,    -1,    -1,   646,    -1,    -1,
     649,    -1,   651,    -1,    -1,   654,    -1,   656,    -1,   266,
     659,    -1,    -1,    -1,   663,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    27,   299,    29,   301,   302,    -1,    33,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   322,    20,    21,    22,    23,
      24,    -1,   329,    27,    -1,    29,    -1,     3,     4,    33,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,
      16,    17,    18,    -1,    20,    21,    22,    -1,    24,    -1,
      19,    -1,    -1,    29,    -1,    24,    25,    33,    -1,    28,
     367,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    20,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    32,    -1,    33,
      -1,    -1,    27,    28,   431,    30,    31,    32,    33,    34,
      35,    -1,    47,    48,    -1,    -1,    51,    -1,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,    -1,    -1,    -1,    -1,   463,     3,     4,    -1,
       6,     7,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    88,    20,    21,    22,    -1,    24,    -1,
     487,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
     517,   518,    -1,    -1,    -1,   130,     3,     4,    -1,     6,
       7,   136,   137,    -1,    -1,   532,    -1,   534,    -1,    16,
      17,    18,    -1,    20,    21,   150,    -1,    24,    -1,    -1,
      27,    -1,    29,    -1,    27,    28,    33,    30,    31,    32,
      33,    34,    35,   560,   561,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,   179,    -1,    -1,    -1,    -1,   576,
      -1,    -1,   187,    -1,    -1,    -1,    -1,   584,   193,    -1,
      -1,   196,    -1,   198,   591,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   207,    -1,   209,   602,   211,    -1,   213,    -1,
      -1,    -1,    -1,   610,   611,   612,    -1,    -1,   615,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   625,    -1,
      -1,    -1,    -1,    -1,   239,    -1,    -1,   634,    -1,    -1,
     637,    -1,   639,    -1,    -1,    -1,    -1,    -1,    -1,   646,
      -1,    -1,   649,    -1,   651,    -1,    -1,   654,    -1,   656,
      -1,   266,   659,    -1,    -1,    -1,   663,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    27,   299,    29,   301,   302,    -1,    33,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   322,    20,    21,
      22,    23,    24,    -1,   329,    27,    -1,    29,    -1,     3,
       4,    33,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
     345,    -1,    16,    17,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    19,    -1,    -1,    29,    23,    24,    -1,    33,
      -1,    28,   367,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    20,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    32,
      -1,    33,    -1,    -1,    -1,    -1,   431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    -1,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,    -1,    -1,    -1,    -1,   463,     3,
       4,    -1,     6,     7,   469,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    88,    20,    21,    -1,    -1,
      24,    25,   487,    -1,    -1,    29,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,   517,   518,    -1,    -1,    -1,   130,     3,     4,
      -1,     6,     7,   136,   137,    -1,    -1,   532,    -1,   534,
      -1,    16,    17,    18,    -1,    20,    21,   150,    -1,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,   560,   561,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,   576,    -1,    -1,   187,    -1,    -1,    -1,    -1,   584,
     193,    -1,    -1,   196,    -1,   198,   591,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,    -1,   209,   602,   211,    -1,
     213,    -1,    -1,    -1,    -1,   610,   611,   612,    -1,    -1,
     615,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     625,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,   634,
      -1,    -1,   637,    -1,   639,    -1,    -1,    -1,    -1,    -1,
      -1,   646,    -1,    -1,   649,    -1,   651,    -1,    -1,   654,
      -1,   656,    -1,   266,   659,    -1,    -1,    -1,   663,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    27,   299,    29,   301,   302,
      -1,    33,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   322,
      20,    21,    22,    23,    24,    -1,   329,    27,    -1,    29,
      -1,     3,     4,    33,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,    25,    19,    -1,    -1,    29,    -1,    -1,
      -1,    33,    27,    28,   367,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    20,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    32,    -1,    33,    -1,    -1,    -1,    -1,   431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    -1,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,    -1,    -1,    -1,    -1,
     463,     3,     4,    -1,     6,     7,   469,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    88,    20,    21,
      -1,    -1,    24,    -1,   487,    27,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,   517,   518,    -1,    -1,    -1,   130,
       3,     4,    -1,     6,     7,   136,   137,    -1,    -1,   532,
      -1,   534,    -1,    16,    17,    18,    -1,    20,    21,   150,
      -1,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,   560,   561,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,    -1,
      -1,    -1,    -1,   576,    -1,    -1,   187,    -1,    -1,    -1,
      -1,   584,   193,    -1,    -1,   196,    -1,   198,   591,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,   209,   602,
     211,    -1,   213,    -1,    -1,    -1,    -1,   610,   611,   612,
      -1,    -1,   615,   224,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   625,    -1,    -1,    -1,    -1,    -1,   239,    -1,
      -1,   634,    -1,    -1,   637,    -1,   639,    -1,    -1,    -1,
      -1,    -1,    -1,   646,    -1,    -1,   649,    -1,   651,    -1,
      -1,   654,    -1,   656,    -1,   266,   659,    -1,    -1,    -1,
     663,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    27,   299,    29,
     301,   302,    -1,    33,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,   322,    20,    21,    22,    23,    24,    -1,   329,    27,
      -1,    29,    -1,     3,     4,    33,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    16,    17,    18,    -1,
      20,    21,    -1,    -1,    24,    25,    19,    -1,    -1,    29,
      -1,    -1,    -1,    33,    27,    28,   367,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    20,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    32,    -1,    33,    -1,    -1,    -1,    -1,
     431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    -1,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,    -1,    -1,
      -1,    -1,   463,     3,     4,    -1,     6,     7,   469,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    88,
      20,    21,    -1,    -1,    24,    -1,   487,    27,    -1,    29,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,   517,   518,    -1,    -1,
      -1,   130,     3,     4,    -1,     6,     7,   136,   137,    -1,
      -1,   532,    -1,   534,    -1,    16,    17,    18,    -1,    20,
      21,   150,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,   560,
     561,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
     179,    -1,    -1,    -1,    -1,   576,    -1,    -1,   187,    -1,
      -1,    -1,    -1,   584,   193,    -1,    -1,   196,    -1,   198,
     591,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,
     209,   602,   211,    -1,   213,    -1,    -1,    -1,    -1,   610,
     611,   612,    -1,    -1,   615,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   625,    -1,    -1,    -1,    -1,    -1,
     239,    -1,    -1,   634,    -1,    -1,   637,    -1,   639,    -1,
      -1,    -1,    -1,    -1,    -1,   646,    -1,    -1,   649,    -1,
     651,    -1,    -1,   654,    -1,   656,    -1,   266,   659,    -1,
      -1,    -1,   663,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    27,
     299,    29,   301,   302,    -1,    33,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,   322,    20,    21,    22,    23,    24,    -1,
     329,    27,    -1,    29,    -1,     3,     4,    33,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,   345,    -1,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    25,    19,    -1,
      -1,    29,    -1,    -1,    -1,    33,    27,    28,   367,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    20,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    32,    -1,    33,    -1,    -1,
      -1,    -1,   431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    51,    -1,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
      -1,    -1,    -1,    -1,   463,     3,     4,    -1,     6,     7,
     469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    88,    20,    21,    -1,    -1,    24,    -1,   487,    -1,
      -1,    29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,   517,   518,
      -1,    -1,    -1,   130,     3,     4,    -1,     6,     7,   136,
     137,    -1,    -1,   532,    -1,   534,    -1,    16,    17,    18,
      -1,    20,    21,   150,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      -1,   560,   561,    -1,    -1,    -1,    -1,    -1,    -1,   176,
      -1,    -1,   179,    -1,    -1,    -1,    -1,   576,    -1,    -1,
     187,    -1,    -1,    -1,    -1,   584,   193,    -1,    -1,   196,
      -1,   198,   591,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     207,    -1,   209,   602,   211,    -1,   213,    -1,    -1,    -1,
      -1,   610,   611,   612,    -1,    -1,   615,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   625,    -1,     3,     4,
      -1,     6,     7,   240,    -1,   634,    -1,    -1,   637,    -1,
     639,    16,    17,    18,    -1,    20,    21,   646,    -1,    24,
     649,    -1,   651,    -1,    29,   654,    -1,   656,    33,   266,
     659,    -1,    -1,    -1,   663,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    27,   299,    29,   301,   302,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    19,   322,    -1,    -1,    -1,    -1,
      25,    -1,   329,    28,    32,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   345,    47,
      -1,    -1,    -1,    51,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
     367,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,   431,    -1,    -1,    -1,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,   446,
     447,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,    -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,
      -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
     487,    -1,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,   209,    -1,   211,    -1,   213,    -1,    -1,    -1,    -1,
     517,   518,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   532,    -1,   534,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,   560,   561,    27,    -1,    29,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   576,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   584,   585,    -1,
      -1,    -1,    -1,    -1,   591,    -1,    -1,    -1,    -1,    -1,
      -1,   299,    -1,   301,    -1,   602,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   610,   611,   612,    -1,    20,   615,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,   625,    32,
      -1,   329,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,
     637,    -1,   639,    -1,    47,    -1,    -1,   345,    51,   646,
      -1,    -1,   649,    -1,   651,    -1,    19,   654,    -1,   656,
      -1,    -1,   659,    -1,    27,    28,   663,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,   387,
     388,   389,   390,   391,   392,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,   107,   108,   109,   110,   111,   112,
     113,    16,    17,    18,    -1,    20,    21,    -1,   121,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,   130,    33,    -1,
      -1,    -1,    -1,   136,   137,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,    -1,
     458,    -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,
      -1,   469,    -1,   176,    -1,    -1,   179,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,
     193,    -1,    -1,   196,    -1,   198,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,   207,    -1,   209,    -1,   211,    -1,
     213,    16,    17,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,   224,    -1,    -1,    29,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,   532,    -1,   239,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,   560,   561,    27,    -1,    29,    -1,    -1,    -1,
      33,     3,     4,    -1,     6,     7,    -1,    -1,   576,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    21,
      -1,    -1,    24,   591,    -1,    -1,   299,    29,   301,    -1,
      -1,    33,    -1,    -1,   602,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,   612,    -1,    -1,   615,    -1,   322,
      -1,    -1,    -1,    -1,    32,    -1,   329,   625,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,   637,
      -1,   639,   345,    51,    -1,    -1,    -1,    -1,   646,    -1,
      -1,   649,    -1,   651,    -1,    -1,   654,    -1,   656,    -1,
      -1,   659,    -1,    -1,    -1,   663,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
      88,    -1,   385,   386,    -1,    -1,    -1,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    -1,    -1,    -1,   107,
     108,   109,   110,   111,    33,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,   130,    20,    21,    22,    -1,    24,   136,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,   445,   446,   447,   448,   449,   450,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,
     463,    -1,    -1,    -1,    -1,    -1,   469,    -1,   176,    -1,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,   196,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,   209,    -1,   211,    -1,   213,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   224,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,   532,
      -1,    27,    -1,    29,    -1,     3,     4,    33,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    -1,    20,    21,    22,    -1,    24,   560,   561,    -1,
      -1,    -1,    -1,    -1,    -1,    33,     3,     4,    -1,     6,
       7,    -1,    -1,   576,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    21,    22,    -1,    24,   591,    -1,
      -1,   299,    -1,    20,    -1,    -1,    33,    -1,    -1,   602,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,   612,
      -1,    -1,   615,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,   329,   625,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,   634,    -1,    -1,   637,    -1,   639,   345,    -1,    -1,
      -1,    -1,    -1,   646,    -1,    -1,   649,    -1,   651,    -1,
      -1,   654,    -1,   656,    -1,    -1,   659,    -1,    85,    -1,
     663,    88,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,   381,   382,   383,   384,    -1,    -1,    -1,
     107,    16,    17,    18,    -1,    20,    21,    22,    -1,    24,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    33,    -1,
      -1,     3,     4,   130,     6,     7,    -1,    -1,    -1,   136,
     137,    -1,    -1,    -1,    16,    17,    18,    -1,    20,    21,
      22,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,   445,   446,   447,
     448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,   176,
     458,    -1,   179,    -1,    -1,   463,    -1,    -1,    -1,    -1,
     187,   469,    -1,    -1,    -1,    -1,   193,    -1,    -1,   196,
      -1,   198,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
     207,    -1,   209,    -1,   211,    -1,   213,    16,    17,    18,
      -1,    20,    21,    22,    -1,    24,    -1,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    20,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    32,    13,    14,
      15,    16,    17,    18,   532,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    51,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   560,   561,    -1,    -1,    -1,    -1,    -1,   286,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,   576,    -1,
      -1,    -1,   299,    88,    16,    17,    18,    -1,    20,    21,
      22,    -1,    24,   591,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,   107,    -1,   602,   322,    -1,    -1,    -1,    -1,
      -1,    -1,   329,    -1,   612,    -1,   121,   615,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,   625,   345,    -1,
      -1,   136,   137,   350,    -1,    -1,   634,    -1,    -1,   637,
      -1,   639,    -1,    -1,    -1,    -1,    -1,    -1,   646,    -1,
      -1,   649,    -1,   651,    -1,    -1,   654,    -1,   656,    32,
      -1,   659,    -1,    -1,    -1,   663,    -1,    -1,    -1,    -1,
      -1,   176,    45,    -1,   179,    -1,    -1,   394,   395,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,   196,    -1,   198,    -1,    -1,   413,    -1,    -1,    -1,
      -1,    -1,   207,    -1,   209,    -1,   211,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    -1,   224,
      -1,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,   458,    -1,    16,    17,    18,   463,    20,    21,    -1,
      -1,    24,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,   136,   137,    -1,    -1,    -1,   141,    -1,
      -1,   488,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,   299,    -1,    27,    -1,    29,    -1,
      -1,    -1,    33,   176,   177,   178,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,   532,    -1,   322,   535,    -1,
      -1,    16,    17,    18,   329,    20,    21,    -1,    -1,    24,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,    33,    -1,
     345,    -1,    -1,   560,   561,    16,    17,    18,    -1,    20,
      21,    -1,    -1,    24,     3,     4,    -1,     6,     7,   576,
      -1,    -1,    33,    -1,    -1,   238,    -1,    16,    17,    18,
      -1,    20,    21,    -1,   591,    24,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    33,   602,    -1,    -1,    -1,    16,
      17,    18,   265,    20,    21,   612,    -1,    24,   615,    -1,
      -1,    -1,   275,    -1,    -1,    -1,    33,    -1,   625,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,
     637,    -1,   639,    -1,    -1,    -1,    -1,   300,    -1,   646,
      -1,    -1,   649,    -1,   651,    -1,    -1,   654,    -1,   656,
      -1,    -1,   659,    -1,    -1,    -1,   663,    -1,    -1,   322,
      -1,    -1,    -1,   458,    -1,    -1,     3,     4,   463,     6,
       7,    -1,    -1,    -1,   469,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    24,    -1,   352,
     353,   354,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    -1,   366,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,   378,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,   397,   398,   399,   532,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   415,   416,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   560,   561,   430,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,   442,
      28,   576,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,   591,    -1,    -1,   462,
     463,   464,   465,    -1,    -1,    -1,    -1,   602,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   612,    -1,    -1,
     615,    -1,    -1,    -1,    -1,    -1,    -1,   490,   491,   492,
     625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   634,
      -1,    -1,   637,    -1,   639,    -1,    -1,    -1,    -1,    -1,
      -1,   646,    -1,    -1,   649,    -1,   651,    -1,    -1,   654,
      -1,   656,    -1,    -1,   659,    -1,    -1,    -1,   663,    19,
      -1,    -1,    -1,    -1,   537,   538,   539,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,   560,   561,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    19,    27,    -1,    29,    -1,    -1,    -1,    33,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,   612,
     613,   614,   615,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      23,    -1,    -1,    -1,   637,    28,   639,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      -1,   654,    -1,   656,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    33,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    33,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    33,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    33,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      33,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    33,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    33,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    -1,    33,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    -1,    33,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    -1,    33,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    -1,    33,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    33,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,    33,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    -1,
      33,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      -1,    33,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    -1,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    33,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    -1,    19,    27,    -1,    29,
      -1,    -1,    -1,    33,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    24,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    19,
      37,    38,    39,    40,    41,    42,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    19,    37,    38,    39,
      40,    41,    42,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    19,    37,    38,    39,    40,    41,    42,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      19,    37,    38,    39,    40,    41,    42,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    19,    37,    38,
      39,    40,    41,    42,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    19,    37,    38,    39,    40,    41,
      42,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    19,    37,    38,    39,    40,    41,    42,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    19,    37,
      38,    39,    40,    41,    42,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    19,    37,    38,    39,    40,
      41,    42,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    19,    37,    38,    39,    40,    41,    42,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    19,    37,    38,
      39,    40,    41,    42,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    19,    37,    38,    39,    40,    41,
      42,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    19,    37,    38,    39,    40,    41,    42,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    19,    37,
      38,    39,    40,    41,    42,    -1,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    19,    37,    38,    39,    40,
      41,    42,    -1,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    19,    37,    38,    39,    40,    41,    42,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    19,
      37,    38,    39,    40,    41,    42,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    19,    37,    38,    39,
      40,    41,    42,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    19,    37,    38,    39,    40,    41,    42,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      19,    37,    38,    39,    40,    41,    42,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    19,    37,    38,
      39,    40,    41,    42,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    19,    37,    38,    39,    40,    41,
      42,    -1,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    19,    37,    38,    39,    40,    41,    42,    -1,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    19,    37,    38,    39,    40,    41,    42,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    19,
      37,    38,    39,    40,    41,    42,    -1,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    19,    37,    38,    39,
      40,    41,    42,    -1,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    19,    37,    38,    39,    40,    41,    42,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      19,    37,    38,    39,    40,    41,    42,    -1,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    19,    37,    38,
      39,    40,    41,    42,    -1,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    19,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    19,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    19,    37,    38,    39,    40,    41,    42,    -1,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    19,    37,    38,    39,    40,    41,    42,
      -1,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    19,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    19,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    25,
      -1,    -1,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    25,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    25,    -1,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    39,
      40,    41,    42,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    39,    40,    41,    42,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    37,    38,    39,    40,    41,
      42,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    45,    46,    47,    48,    50,    51,    51,     0,
      47,     3,    24,    27,    52,    53,    54,    53,    27,    28,
      22,    49,    50,    51,    60,    24,    25,    53,     3,     4,
       6,     7,     8,     9,    10,    11,    13,    14,    15,    16,
      17,    18,    20,    21,    23,    24,    27,    29,    33,    50,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    84,    85,    86,    89,    50,    60,    53,     3,
      25,    51,    55,    56,    57,    24,    75,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,     5,    75,    82,
      83,    79,    84,    81,    23,    62,    27,    28,    32,    33,
      34,    35,    30,    31,    37,    38,    39,    40,    41,    42,
      19,    36,    24,    53,    58,    59,    25,    28,    25,    28,
      22,    76,    87,    88,    27,    75,    50,    64,    75,    75,
       3,    24,    89,    89,     3,    75,    75,    75,    83,    25,
      25,    53,    58,    76,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80,    81,    76,    25,    58,
      24,     3,    57,    87,    25,    28,    25,    64,    64,    25,
      25,    25,    25,    25,    25,    25,    25,    22,    81,    25,
      25,    56,    23,    28,    88,    63,    25,    75,    25,    75,
      63,    27,    27,    27,    87,    25,    23,    12,    63,    25,
      63,    25,    23,    28,    63,    63,    63,    23,     3,    24,
      54,     3,    24,    54,    22,    51,    27,    52,     5,     3,
       4,     6,     7,    16,    17,    18,    20,    21,    24,    29,
      33,    70,    71,    72,    73,    74,    76,    77,    78,    79,
      80,    81,    84,    85,    86,    89,     3,     4,     6,     7,
      16,    17,    18,    20,    21,    24,    33,    70,    71,    72,
      73,    74,    85,    86,    89,    24,    84,     3,    54,    27,
      51,    75,     4,     6,     7,    20,    28,    24,    59,    53,
       3,     4,     6,     7,    16,    17,    18,    20,    21,    22,
      24,    29,    33,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    80,    81,    84,    85,    86,    88,    89,    27,
      75,    75,     8,     9,    10,    11,    13,    14,    15,    22,
      27,    60,    64,    65,    66,    67,    68,    69,    75,    88,
      53,    24,    53,    24,    23,    61,    27,    52,    27,    51,
      24,    24,    24,    24,    24,    75,    82,     3,     4,     6,
       7,    16,    17,    18,    20,    21,    24,    33,    70,    71,
      72,    73,    74,    79,    84,    85,    86,    89,    24,    81,
      84,    32,    33,    34,    35,    30,    31,    37,    38,    39,
      40,    41,    42,    19,    36,    24,    24,    24,    24,    24,
      75,    82,    81,    82,    24,    27,    52,    27,    76,    25,
      58,    24,    25,    24,    24,    24,    24,    24,    87,    75,
      82,     3,     4,     6,     7,    16,    17,    18,    20,    21,
      24,    33,    70,    71,    72,    73,    74,    79,    84,    85,
      86,    89,    24,    81,    84,    32,    33,    34,    35,    30,
      31,    37,    38,    39,    40,    41,    42,    19,    36,    27,
      25,    75,    24,    24,    24,    24,    24,    24,    23,    61,
      27,    25,    25,    55,    56,    25,    25,    55,    56,    23,
      27,    87,     3,    75,    75,    75,    25,    25,    24,    24,
      24,    24,    24,    75,    82,    81,    82,    78,    78,    78,
      78,    79,    79,    80,    80,    80,    80,    80,    80,    81,
      76,    87,     3,    75,    75,    75,    25,    25,    25,    25,
      55,    56,    27,    25,    25,    56,    87,     3,    75,    75,
      75,    23,    28,    25,    25,    24,    24,    24,    24,    24,
      75,    82,    81,    82,    78,    78,    78,    78,    79,    79,
      80,    80,    80,    80,    80,    80,    81,    76,    27,    75,
      50,    64,    75,    75,    89,    89,    23,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    22,    81,    87,     3,
      75,    75,    75,    25,    25,    25,    25,    25,    25,    25,
      25,    22,    81,    25,    25,    25,    25,    25,    25,    25,
      25,    23,    22,    81,    87,     3,    75,    75,    75,    25,
      25,    25,    25,    64,    64,    25,    25,    25,    25,    87,
      25,    25,    25,    25,    25,    22,    81,    87,    87,    25,
      25,    25,    25,    25,    22,    81,    63,    25,    75,    25,
      75,    63,    27,    27,    27,    23,    28,    87,    23,    28,
      23,    28,    87,    63,    25,    63,    25,    23,    23,    28,
      23,    23,    23,    28,    63,    63,    23,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    54,    54,
      54,    54,    54,    55,    55,    56,    56,    57,    57,    58,
      59,    59,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    67,    68,    68,    69,
      70,    70,    70,    70,    71,    72,    73,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    82,    83,    83,    84,    84,    84,
      84,    85,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     1,
       2,     2,     3,     1,     2,     1,     3,     1,     1,     3,
       3,     4,     4,     1,     3,     1,     3,     2,     2,     1,
       3,     2,     3,     4,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     7,     6,     7,     6,     5,     5,     5,     5,     3,
       1,     1,     1,     1,     4,     4,     4,     4,     1,     3,
       1,     3,     1,     3,     3,     3,     3,     1,     2,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     4,     1,     2,     2,     2,     1,     1,     2,     1,
       1,     4,     1,     6,     7,     1,     3,     1,     3,     4,
       1,     1,     1,     1,     1,     3
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
  case 2: /* program: translation_unit  */
#line 64 "main/mafralang_grammar.y"
                   { parserTree = (yyvsp[0].stmt); }
#line 3737 "mafralang_grammar.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 68 "main/mafralang_grammar.y"
                       {
    (yyval.stmt) = addNode(TRANSLATION_UNIT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3745 "mafralang_grammar.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 71 "main/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(TRANSLATION_UNIT, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3753 "mafralang_grammar.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 77 "main/mafralang_grammar.y"
                      {
    (yyval.stmt) = addNode(EXTERNAL_DECLARATION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3761 "mafralang_grammar.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 80 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(EXTERNAL_DECLARATION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3769 "mafralang_grammar.tab.c"
    break;

  case 7: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 86 "main/mafralang_grammar.y"
                                                                        {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[-1].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node2, (yyvsp[0].stmt), NULL, NULL);
  }
#line 3779 "mafralang_grammar.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 91 "main/mafralang_grammar.y"
                                                       {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[0].stmt), NULL, NULL);
  }
#line 3788 "mafralang_grammar.tab.c"
    break;

  case 9: /* declaration_list: declaration  */
#line 98 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3796 "mafralang_grammar.tab.c"
    break;

  case 10: /* declaration_list: declaration_list declaration  */
#line 101 "main/mafralang_grammar.y"
                               {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3804 "mafralang_grammar.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers SEMICOLON  */
#line 107 "main/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3812 "mafralang_grammar.tab.c"
    break;

  case 12: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 110 "main/mafralang_grammar.y"
                                                        {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3820 "mafralang_grammar.tab.c"
    break;

  case 13: /* declaration_specifiers: TYPE  */
#line 116 "main/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, NULL, (yyvsp[0].strType), NULL);
  }
#line 3828 "mafralang_grammar.tab.c"
    break;

  case 14: /* declaration_specifiers: TYPE declaration_specifiers  */
#line 119 "main/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 3836 "mafralang_grammar.tab.c"
    break;

  case 15: /* init_declarator_list: declarator  */
#line 125 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(INIT_DECLARATOR_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3844 "mafralang_grammar.tab.c"
    break;

  case 16: /* init_declarator_list: init_declarator_list COMMA declarator  */
#line 128 "main/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(INIT_DECLARATOR_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3852 "mafralang_grammar.tab.c"
    break;

  case 17: /* declarator: direct_declarator  */
#line 134 "main/mafralang_grammar.y"
                     {
    (yyval.stmt) = addNode(DECLARATOR, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3860 "mafralang_grammar.tab.c"
    break;

  case 18: /* direct_declarator: ID  */
#line 140 "main/mafralang_grammar.y"
      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 3868 "mafralang_grammar.tab.c"
    break;

  case 19: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 143 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3876 "mafralang_grammar.tab.c"
    break;

  case 20: /* direct_declarator: direct_declarator LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 146 "main/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 3884 "mafralang_grammar.tab.c"
    break;

  case 21: /* direct_declarator: direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 149 "main/mafralang_grammar.y"
                                                                      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3892 "mafralang_grammar.tab.c"
    break;

  case 22: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 152 "main/mafralang_grammar.y"
                                                                       {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3900 "mafralang_grammar.tab.c"
    break;

  case 23: /* identifier_list: ID  */
#line 158 "main/mafralang_grammar.y"
      {
    (yyval.stmt) = addNode(IDENTIFIER_LIST, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 3908 "mafralang_grammar.tab.c"
    break;

  case 24: /* identifier_list: identifier_list COMMA ID  */
#line 161 "main/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(IDENTIFIER_LIST, (yyvsp[-2].stmt), NULL, NULL, (yyvsp[0].strType));
  }
#line 3916 "mafralang_grammar.tab.c"
    break;

  case 25: /* parameter_list: parameter_declaration  */
#line 168 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(PARAMETER_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3924 "mafralang_grammar.tab.c"
    break;

  case 26: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 171 "main/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3932 "mafralang_grammar.tab.c"
    break;

  case 27: /* parameter_declaration: declaration_specifiers declarator  */
#line 177 "main/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3940 "mafralang_grammar.tab.c"
    break;

  case 28: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 180 "main/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3948 "mafralang_grammar.tab.c"
    break;

  case 29: /* abstract_declarator: direct_abstract_declarator  */
#line 186 "main/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(ABSTRACT_DECLARATOR, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3956 "mafralang_grammar.tab.c"
    break;

  case 30: /* direct_abstract_declarator: LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES  */
#line 192 "main/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3964 "mafralang_grammar.tab.c"
    break;

  case 31: /* direct_abstract_declarator: LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 195 "main/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, NULL, NULL, NULL, NULL);
  }
#line 3972 "mafralang_grammar.tab.c"
    break;

  case 32: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 198 "main/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 3980 "mafralang_grammar.tab.c"
    break;

  case 33: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 201 "main/mafralang_grammar.y"
                                                                               {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3988 "mafralang_grammar.tab.c"
    break;

  case 34: /* compound_statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 207 "main/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL);
  }
#line 3996 "mafralang_grammar.tab.c"
    break;

  case 35: /* compound_statement: LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET  */
#line 210 "main/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4004 "mafralang_grammar.tab.c"
    break;

  case 36: /* block_item_list: block_item  */
#line 216 "main/mafralang_grammar.y"
             {
    (yyval.stmt) = addNode(BLOCK_ITEM_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4012 "mafralang_grammar.tab.c"
    break;

  case 37: /* block_item_list: block_item_list block_item  */
#line 219 "main/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(BLOCK_ITEM_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4020 "mafralang_grammar.tab.c"
    break;

  case 38: /* block_item: declaration  */
#line 225 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4028 "mafralang_grammar.tab.c"
    break;

  case 39: /* block_item: statement  */
#line 228 "main/mafralang_grammar.y"
            {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4036 "mafralang_grammar.tab.c"
    break;

  case 40: /* statement: expression_statement  */
#line 234 "main/mafralang_grammar.y"
                       {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4044 "mafralang_grammar.tab.c"
    break;

  case 41: /* statement: compound_statement  */
#line 237 "main/mafralang_grammar.y"
                     {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4052 "mafralang_grammar.tab.c"
    break;

  case 42: /* statement: conditional_statement  */
#line 240 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4060 "mafralang_grammar.tab.c"
    break;

  case 43: /* statement: iteration_statement  */
#line 243 "main/mafralang_grammar.y"
                      {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4068 "mafralang_grammar.tab.c"
    break;

  case 44: /* statement: input_statement  */
#line 246 "main/mafralang_grammar.y"
                  {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4076 "mafralang_grammar.tab.c"
    break;

  case 45: /* statement: output_statement  */
#line 249 "main/mafralang_grammar.y"
                   {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4084 "mafralang_grammar.tab.c"
    break;

  case 46: /* statement: return_statement  */
#line 252 "main/mafralang_grammar.y"
                   {
    (yyval.stmt) = addNode(STATEMENT, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4092 "mafralang_grammar.tab.c"
    break;

  case 47: /* expression_statement: SEMICOLON  */
#line 258 "main/mafralang_grammar.y"
            {
    (yyval.stmt) = addNode(EXPRESSION_STATEMENT, NULL, NULL, NULL, NULL);
  }
#line 4100 "mafralang_grammar.tab.c"
    break;

  case 48: /* expression_statement: expression SEMICOLON  */
#line 261 "main/mafralang_grammar.y"
                       {
    (yyval.stmt) = addNode(EXPRESSION_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4108 "mafralang_grammar.tab.c"
    break;

  case 49: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 267 "main/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4116 "mafralang_grammar.tab.c"
    break;

  case 50: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement  */
#line 270 "main/mafralang_grammar.y"
                                                                             {
    ast_node* ast_node1 = addNode(CONDITIONAL_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-2].stmt), (yyvsp[-6].strType), NULL);
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4125 "mafralang_grammar.tab.c"
    break;

  case 51: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement  */
#line 277 "main/mafralang_grammar.y"
                                                                                                        {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4135 "mafralang_grammar.tab.c"
    break;

  case 52: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement  */
#line 282 "main/mafralang_grammar.y"
                                                                                             {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4144 "mafralang_grammar.tab.c"
    break;

  case 53: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement  */
#line 286 "main/mafralang_grammar.y"
                                                                                               {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4154 "mafralang_grammar.tab.c"
    break;

  case 54: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement  */
#line 291 "main/mafralang_grammar.y"
                                                                                    {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4163 "mafralang_grammar.tab.c"
    break;

  case 55: /* iteration_statement: FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 295 "main/mafralang_grammar.y"
                                                                 {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4171 "mafralang_grammar.tab.c"
    break;

  case 56: /* input_statement: READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 301 "main/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4179 "mafralang_grammar.tab.c"
    break;

  case 57: /* output_statement: WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 307 "main/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4187 "mafralang_grammar.tab.c"
    break;

  case 58: /* output_statement: WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 310 "main/mafralang_grammar.y"
                                                                          {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4195 "mafralang_grammar.tab.c"
    break;

  case 59: /* return_statement: RETURN expression SEMICOLON  */
#line 316 "main/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-1].stmt), NULL, (yyvsp[-2].strType), NULL);
  }
#line 4203 "mafralang_grammar.tab.c"
    break;

  case 60: /* set_expression_list: is_set_expression  */
#line 322 "main/mafralang_grammar.y"
                    {
    (yyval.stmt) = addNode(SET_EXPRESSION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4211 "mafralang_grammar.tab.c"
    break;

  case 61: /* set_expression_list: add_expression  */
#line 325 "main/mafralang_grammar.y"
                 {
    (yyval.stmt) = addNode(SET_EXPRESSION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4219 "mafralang_grammar.tab.c"
    break;

  case 62: /* set_expression_list: remove_expression  */
#line 328 "main/mafralang_grammar.y"
                    {
    (yyval.stmt) = addNode(SET_EXPRESSION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4227 "mafralang_grammar.tab.c"
    break;

  case 63: /* set_expression_list: exists_expression  */
#line 331 "main/mafralang_grammar.y"
                    {
    (yyval.stmt) = addNode(SET_EXPRESSION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4235 "mafralang_grammar.tab.c"
    break;

  case 64: /* is_set_expression: IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES  */
#line 337 "main/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(IS_SET_EXPRESSION, NULL, NULL, (yyvsp[-3].strType), (yyvsp[-1].strType));
  }
#line 4243 "mafralang_grammar.tab.c"
    break;

  case 65: /* add_expression: ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 343 "main/mafralang_grammar.y"
                                                    {
    (yyval.stmt) = addNode(ADD_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4251 "mafralang_grammar.tab.c"
    break;

  case 66: /* remove_expression: REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 349 "main/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(REMOVE_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4259 "mafralang_grammar.tab.c"
    break;

  case 67: /* exists_expression: EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 355 "main/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(EXISTS_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4267 "mafralang_grammar.tab.c"
    break;

  case 68: /* expression: assignment_expression  */
#line 361 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4275 "mafralang_grammar.tab.c"
    break;

  case 69: /* expression: expression COMMA assignment_expression  */
#line 364 "main/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4283 "mafralang_grammar.tab.c"
    break;

  case 70: /* assignment_expression: arithmetic_expression  */
#line 370 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(ASSIGNMENT_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4291 "mafralang_grammar.tab.c"
    break;

  case 71: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 373 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(ASSIGNMENT_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4299 "mafralang_grammar.tab.c"
    break;

  case 72: /* arithmetic_expression: logical_expression  */
#line 379 "main/mafralang_grammar.y"
                     {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4307 "mafralang_grammar.tab.c"
    break;

  case 73: /* arithmetic_expression: arithmetic_expression ADD_OP logical_expression  */
#line 382 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4315 "mafralang_grammar.tab.c"
    break;

  case 74: /* arithmetic_expression: arithmetic_expression SUB_OP logical_expression  */
#line 385 "main/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4323 "mafralang_grammar.tab.c"
    break;

  case 75: /* arithmetic_expression: arithmetic_expression MULT logical_expression  */
#line 388 "main/mafralang_grammar.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4331 "mafralang_grammar.tab.c"
    break;

  case 76: /* arithmetic_expression: arithmetic_expression DIVIDE logical_expression  */
#line 391 "main/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4339 "mafralang_grammar.tab.c"
    break;

  case 77: /* logical_expression: relational_expression  */
#line 397 "main/mafralang_grammar.y"
                         {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4347 "mafralang_grammar.tab.c"
    break;

  case 78: /* logical_expression: NEGATE relational_expression  */
#line 400 "main/mafralang_grammar.y"
                               {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[0].stmt), NULL, (yyvsp[-1].symbol), NULL);
  }
#line 4355 "mafralang_grammar.tab.c"
    break;

  case 79: /* logical_expression: logical_expression AND relational_expression  */
#line 403 "main/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4363 "mafralang_grammar.tab.c"
    break;

  case 80: /* logical_expression: logical_expression OR relational_expression  */
#line 406 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4371 "mafralang_grammar.tab.c"
    break;

  case 81: /* relational_expression: set_expression  */
#line 412 "main/mafralang_grammar.y"
                 {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4379 "mafralang_grammar.tab.c"
    break;

  case 82: /* relational_expression: relational_expression CLT set_expression  */
#line 415 "main/mafralang_grammar.y"
                                           {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4387 "mafralang_grammar.tab.c"
    break;

  case 83: /* relational_expression: relational_expression CLE set_expression  */
#line 418 "main/mafralang_grammar.y"
                                           {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4395 "mafralang_grammar.tab.c"
    break;

  case 84: /* relational_expression: relational_expression CEQ set_expression  */
#line 421 "main/mafralang_grammar.y"
                                           {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4403 "mafralang_grammar.tab.c"
    break;

  case 85: /* relational_expression: relational_expression CGE set_expression  */
#line 424 "main/mafralang_grammar.y"
                                           {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4411 "mafralang_grammar.tab.c"
    break;

  case 86: /* relational_expression: relational_expression CGT set_expression  */
#line 427 "main/mafralang_grammar.y"
                                           {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4419 "mafralang_grammar.tab.c"
    break;

  case 87: /* relational_expression: relational_expression CNE set_expression  */
#line 430 "main/mafralang_grammar.y"
                                           {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4427 "mafralang_grammar.tab.c"
    break;

  case 88: /* set_expression: cast_expression  */
#line 436 "main/mafralang_grammar.y"
                  {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4435 "mafralang_grammar.tab.c"
    break;

  case 89: /* set_expression: set_expression IN cast_expression  */
#line 439 "main/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4443 "mafralang_grammar.tab.c"
    break;

  case 90: /* cast_expression: unary_expression  */
#line 445 "main/mafralang_grammar.y"
                   {
    (yyval.stmt) = addNode(CAST_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4451 "mafralang_grammar.tab.c"
    break;

  case 91: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 448 "main/mafralang_grammar.y"
                                                               {
    (yyval.stmt) = addNode(CAST_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4459 "mafralang_grammar.tab.c"
    break;

  case 92: /* type_name: specifier_qualifier_list  */
#line 454 "main/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4467 "mafralang_grammar.tab.c"
    break;

  case 93: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 457 "main/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4475 "mafralang_grammar.tab.c"
    break;

  case 94: /* type_name: specifier_qualifier_list declarator  */
#line 460 "main/mafralang_grammar.y"
                                      {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4483 "mafralang_grammar.tab.c"
    break;

  case 95: /* specifier_qualifier_list: TYPE specifier_qualifier_list  */
#line 466 "main/mafralang_grammar.y"
                                {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, (yyvsp[0].stmt), NULL, (yyvsp[-1].strType), NULL);
  }
#line 4491 "mafralang_grammar.tab.c"
    break;

  case 96: /* specifier_qualifier_list: TYPE  */
#line 469 "main/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, NULL, NULL, (yyvsp[0].strType), NULL);
  }
#line 4499 "mafralang_grammar.tab.c"
    break;

  case 97: /* unary_expression: postfix_expression  */
#line 475 "main/mafralang_grammar.y"
                     {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4507 "mafralang_grammar.tab.c"
    break;

  case 98: /* unary_expression: SUB_OP cast_expression  */
#line 478 "main/mafralang_grammar.y"
                         {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].symbol));
  }
#line 4515 "mafralang_grammar.tab.c"
    break;

  case 99: /* unary_expression: set_expression_list  */
#line 481 "main/mafralang_grammar.y"
                      {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4523 "mafralang_grammar.tab.c"
    break;

  case 100: /* unary_expression: function_expression  */
#line 484 "main/mafralang_grammar.y"
                       {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4531 "mafralang_grammar.tab.c"
    break;

  case 101: /* function_expression: ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES  */
#line 490 "main/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4539 "mafralang_grammar.tab.c"
    break;

  case 102: /* postfix_expression: primary_expression  */
#line 496 "main/mafralang_grammar.y"
                     {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4547 "mafralang_grammar.tab.c"
    break;

  case 103: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 499 "main/mafralang_grammar.y"
                                                                                                       {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-4].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4555 "mafralang_grammar.tab.c"
    break;

  case 104: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 502 "main/mafralang_grammar.y"
                                                                                                             {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-5].stmt), (yyvsp[-2].stmt), NULL, NULL);
  }
#line 4563 "mafralang_grammar.tab.c"
    break;

  case 105: /* initializer_list: initializer  */
#line 508 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(INITIALIZER_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4571 "mafralang_grammar.tab.c"
    break;

  case 106: /* initializer_list: initializer_list COMMA initializer  */
#line 511 "main/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(INITIALIZER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4579 "mafralang_grammar.tab.c"
    break;

  case 107: /* initializer: assignment_expression  */
#line 517 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4587 "mafralang_grammar.tab.c"
    break;

  case 108: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 520 "main/mafralang_grammar.y"
                                                          {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4595 "mafralang_grammar.tab.c"
    break;

  case 109: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 523 "main/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4603 "mafralang_grammar.tab.c"
    break;

  case 110: /* primary_expression: ID  */
#line 529 "main/mafralang_grammar.y"
     {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4611 "mafralang_grammar.tab.c"
    break;

  case 111: /* primary_expression: INTEGER  */
#line 532 "main/mafralang_grammar.y"
          {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4619 "mafralang_grammar.tab.c"
    break;

  case 112: /* primary_expression: FLOAT  */
#line 535 "main/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4627 "mafralang_grammar.tab.c"
    break;

  case 113: /* primary_expression: STRING  */
#line 538 "main/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4635 "mafralang_grammar.tab.c"
    break;

  case 114: /* primary_expression: EMPTY  */
#line 541 "main/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4643 "mafralang_grammar.tab.c"
    break;

  case 115: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 544 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4651 "mafralang_grammar.tab.c"
    break;


#line 4655 "mafralang_grammar.tab.c"

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

#line 549 "main/mafralang_grammar.y"


int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
    yyin = fopen( argv[0], "r" );
  else
    yyin = stdin;
  // initializeGlobalScope();
  yyparse();
  yylex_destroy();
  if(syntax_error == 0 && lex_error == 0){
    printf("\n\n\t\t\t\t\t\t\t\t----------  ABSTRACT SYNTAX TREE ----------\t\t\t\t\t\t\t\t\n\n");
    printTree(parserTree, 0);
  }
  // printSymbolTable();
  freeTree(parserTree);
  // freeSymbolTable();
  return 0;
}
