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
  int line_number = 1;
  int column_number = 0;
  int lex_error = 0;
  int syntax_error = 0;

  void yyerror(const char* msg);  

#line 91 "mafralang_grammar.tab.c"

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
  YYSYMBOL_MAIN = 8,                       /* MAIN  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_FORALL = 12,                    /* FORALL  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_READ = 14,                      /* READ  */
  YYSYMBOL_WRITE = 15,                     /* WRITE  */
  YYSYMBOL_WRITELN = 16,                   /* WRITELN  */
  YYSYMBOL_IS_SET = 17,                    /* IS_SET  */
  YYSYMBOL_REMOVE = 18,                    /* REMOVE  */
  YYSYMBOL_ADD = 19,                       /* ADD  */
  YYSYMBOL_IN = 20,                        /* IN  */
  YYSYMBOL_STRING = 21,                    /* STRING  */
  YYSYMBOL_EXISTS = 22,                    /* EXISTS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 23,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 24,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 25,          /* LEFT_PARENTHESES  */
  YYSYMBOL_RIGHT_PARENTHESES = 26,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_QUOTES = 27,                    /* QUOTES  */
  YYSYMBOL_SEMICOLON = 28,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 29,                     /* COMMA  */
  YYSYMBOL_NEGATE = 30,                    /* NEGATE  */
  YYSYMBOL_AND = 31,                       /* AND  */
  YYSYMBOL_OR = 32,                        /* OR  */
  YYSYMBOL_ADD_OP = 33,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 34,                    /* SUB_OP  */
  YYSYMBOL_DIVIDE = 35,                    /* DIVIDE  */
  YYSYMBOL_MULT = 36,                      /* MULT  */
  YYSYMBOL_ASSIGN = 37,                    /* ASSIGN  */
  YYSYMBOL_CLT = 38,                       /* CLT  */
  YYSYMBOL_CLE = 39,                       /* CLE  */
  YYSYMBOL_CEQ = 40,                       /* CEQ  */
  YYSYMBOL_CGE = 41,                       /* CGE  */
  YYSYMBOL_CGT = 42,                       /* CGT  */
  YYSYMBOL_CNE = 43,                       /* CNE  */
  YYSYMBOL_THEN = 44,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_translation_unit = 47,          /* translation_unit  */
  YYSYMBOL_external_declaration = 48,      /* external_declaration  */
  YYSYMBOL_function_definition = 49,       /* function_definition  */
  YYSYMBOL_declaration_list = 50,          /* declaration_list  */
  YYSYMBOL_declaration = 51,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 52,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 53,      /* init_declarator_list  */
  YYSYMBOL_declarator = 54,                /* declarator  */
  YYSYMBOL_direct_declarator = 55,         /* direct_declarator  */
  YYSYMBOL_identifier_list = 56,           /* identifier_list  */
  YYSYMBOL_parameter_list = 57,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 58,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator = 59,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 60, /* direct_abstract_declarator  */
  YYSYMBOL_compound_statement = 61,        /* compound_statement  */
  YYSYMBOL_block_item_list = 62,           /* block_item_list  */
  YYSYMBOL_block_item = 63,                /* block_item  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_expression_statement = 65,      /* expression_statement  */
  YYSYMBOL_conditional_statement = 66,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 67,       /* iteration_statement  */
  YYSYMBOL_input_statement = 68,           /* input_statement  */
  YYSYMBOL_output_statement = 69,          /* output_statement  */
  YYSYMBOL_return_statement = 70,          /* return_statement  */
  YYSYMBOL_set_expression_list = 71,       /* set_expression_list  */
  YYSYMBOL_is_set_expression = 72,         /* is_set_expression  */
  YYSYMBOL_add_expression = 73,            /* add_expression  */
  YYSYMBOL_remove_expression = 74,         /* remove_expression  */
  YYSYMBOL_exists_expression = 75,         /* exists_expression  */
  YYSYMBOL_expression = 76,                /* expression  */
  YYSYMBOL_assignment_expression = 77,     /* assignment_expression  */
  YYSYMBOL_relational_expression = 78,     /* relational_expression  */
  YYSYMBOL_arithmetic_expression = 79,     /* arithmetic_expression  */
  YYSYMBOL_logical_expression = 80,        /* logical_expression  */
  YYSYMBOL_set_expression = 81,            /* set_expression  */
  YYSYMBOL_cast_expression = 82,           /* cast_expression  */
  YYSYMBOL_type_name = 83,                 /* type_name  */
  YYSYMBOL_specifier_qualifier_list = 84,  /* specifier_qualifier_list  */
  YYSYMBOL_unary_expression = 85,          /* unary_expression  */
  YYSYMBOL_function_expression = 86,       /* function_expression  */
  YYSYMBOL_postfix_expression = 87,        /* postfix_expression  */
  YYSYMBOL_initializer_list = 88,          /* initializer_list  */
  YYSYMBOL_initializer = 89,               /* initializer  */
  YYSYMBOL_primary_expression = 90         /* primary_expression  */
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  685

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    66,    67,    70,    76,    77,    81,    86,
      93,    96,   102,   105,   111,   115,   122,   123,   129,   133,
     137,   141,   144,   145,   148,   151,   157,   161,   169,   170,
     176,   179,   185,   191,   194,   197,   200,   206,   209,   215,
     216,   222,   225,   231,   234,   237,   240,   243,   246,   249,
     252,   258,   261,   267,   270,   278,   283,   287,   292,   296,
     302,   308,   311,   317,   323,   326,   329,   332,   338,   344,
     350,   356,   362,   363,   367,   370,   375,   376,   379,   382,
     385,   388,   391,   397,   398,   401,   404,   407,   413,   414,
     417,   420,   426,   427,   433,   434,   440,   443,   446,   452,
     456,   463,   464,   465,   466,   472,   478,   479,   482,   488,
     489,   495,   496,   499,   505,   508,   511,   514,   517,   520
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
  "FLOAT", "INTEGER", "MAIN", "RETURN", "IF", "FOR", "FORALL", "ELSE",
  "READ", "WRITE", "WRITELN", "IS_SET", "REMOVE", "ADD", "IN", "STRING",
  "EXISTS", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "QUOTES", "SEMICOLON", "COMMA",
  "NEGATE", "AND", "OR", "ADD_OP", "SUB_OP", "DIVIDE", "MULT", "ASSIGN",
  "CLT", "CLE", "CEQ", "CGE", "CGT", "CNE", "THEN", "$accept", "program",
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
  "assignment_expression", "relational_expression",
  "arithmetic_expression", "logical_expression", "set_expression",
  "cast_expression", "type_name", "specifier_qualifier_list",
  "unary_expression", "function_expression", "postfix_expression",
  "initializer_list", "initializer", "primary_expression", YY_NULLPTR
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
     295,   296,   297,   298,   299
};
#endif

#define YYPACT_NINF (-328)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-120)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,   117,   124,     6,   214,   230,   258,   265,   132,   133,
    -328,   266,    22,    53,   101,   268,   138,   216,   213,     9,
     278,   406,  3748,     7,    11,   160,   292,    61,   224,   298,
    4020,  5516,  5882,  5959,  6015,  4272,    -5,    23,    36,    43,
      52,    60,    93,    99,   109,  6039,   122,   294,   679,  4579,
    4977,  5124,  4614,  4885,  5068,  5394,  5470,  5647,  5866,  5938,
    6008,  6105,  6137,  6784,  6808,  6832,  6856,  6880,   336,   387,
     876,  2883, 10360,  5745,  8457,  6904,  6928,  6952,  6976,    44,
     307,   492,   119,    79,   252,   454,    85,   127,   148,  2608,
     530,  4301,    35,  4301,  4301,   404,   404,   152,  4301,  4301,
    4301,   325,   475,   165,    18,  8474,  8491,  7000,   318,  6169,
    6201,  4272,  4326,  4326,  4326,  4326,  4326,  4326,  4326,  4326,
    4326,  4326,  4977,  4977,  4977,  4272,   285,   333,   502,   553,
     158,   306,   190,   315,   192,  2802,   558,   572,   673,  6233,
     681,  2945,  2945,   719,   738,   173,  4301,   179,   181,   197,
     744,   749,   750,   395,  7024,   791,   220,   222,   588,  5550,
   10440, 10456, 10472, 10488, 10504, 10376, 10392, 10408, 10424,  8508,
    8525,  8542,   606,   191,   229,    54,   751,   767,   324,  7048,
    2608,  1201,  1167,  2041,  2075,   236,   246,   256,  7072,  7096,
    7120,  7144,  2802,  8559,   208,   320,   775,   776,   860,   777,
     817,  2075,   820,  2075,   824,  6265,  6297,  6329,  6361,   331,
     422,   826,  2075,  6393,  2075,  6425,  2075,  7168,  1054,  6457,
    6489,  6521,  7192,   663,   669,   101,   697,   452,   487,   101,
     498,  6553,   161,   105,   871,   251,  5653,  7216,  7240,  7264,
     261,   280,   290,  7288,   312,   679,  5173,  5205,  7312,  7336,
    7360,  7384,  7408,   828,   581,  2710,  1455,  8583,  8607,  7432,
    7456,  7480,  7504,  7528,  8624,  8641,  8658,   314,   322,   332,
    8675,   356,   679,  4977,  8692,  8709,  8726,  8743,  8760,  8777,
    8794,  8811,   679,  7545,   509,   514,   520,  3097,   170,  1052,
     270,   291,   293,   391,  4301,   397,  1091,   398,  5690,  7569,
    7593,  7617,   403,   405,   424,  7641,   433,  2802,   679,  5225,
    5428,  7665,  7689,  7713,  7737,  7761,   337,   523,   918,  1555,
    8835,  8859,  7785,  7809,  7833,   338,  7857,  3189,  1124,   830,
    1007,  4272,   445,   459,   463,   465,   483,   511,  6585,  1090,
    1126,  1398,  1547,  1623,  1691,  1881,  1964,  1153,   373,   516,
     145,   522,   199,  6617,  6649,  6681,  1210,   149,   457,  2608,
     550,  4301,  4301,  4301,   836,   541,  4132,  8883,  8907,  8931,
     552,   560,   565,  8955,   569,   679,  5173,  8979,  9003,  9027,
    9051,  9075,  9099,  9123,  9147,  9171,  9195,   679,  7881,  7905,
    4383,  4383,  4383,  4383,  4383,  4383,  4383,  4383,  4383,  4383,
    5173,  5173,  5173,  4301,  2608,   603,  4301,  4301,  4301,   842,
     586,  9212,   600,   205,  3483,  1212,  3676,   846,  1246,   602,
     111,   571,  2608,   640,  4301,  4301,  4301,   375,   863,   619,
    7929,  9236,  9260,  9284,   624,   626,   635,  9308,   652,   679,
    5225,  9332,  9356,  9380,  9404,  9428,  9452,  9476,  9500,  9524,
    9548,   679,  7953,  7977,  4437,  4437,  4437,  4437,  4437,  4437,
    4437,  4437,  4437,  4437,  5225,  5225,  5225,  4487,  3789,   655,
    1245,  4301,    35,  4301,  4301,   404,   404,  2000,  6713,  2272,
    1250,   686,  1252,   881,   883,   612,   688,   630,   895,   900,
    6745,  6777,   901,   698,   902,   907,   919,  8001,  1659,  2608,
     702,  4301,  4301,  4301,   952,   713,  9572,   720,  3003,  3541,
    3584,  3877,  5008, 10344,  2329,  3203,  5425, 10326,  9596,  9620,
    9644,   953,   954,   733,   959,   963,   980,  9661,  2533,  3407,
     737,   649,  1013,  1014,  3823,  1256,  1276,  1019,  1020,   745,
    1025,  1030,  1036,   437,  1348,  8025,  4653,  2608,   778,  4301,
    4301,  4301,  1056,   757,  9685,   759,   962,  1255,  1792,  1836,
    2129,  2666,  2429,  3303,  5718,  6059,  9709,  9733,  9757,   449,
    2421,  1060,  2945,  2945,  1061,  1093,   761,   763,  2497,  1278,
    1295,  1297,   651,   662,   691,  8049,  8073,  8097,  8121,  8145,
    2802,  9781,  1097,   765,  1129,  1137,  1139,  9805,  4746,  4834,
    9822,  9839,  9856,  9873,  9890,  2802,  8169,   726,   728,   736,
    1302,  8193,  8217,  8241,  8265,  8289,   467,  2802,  9914,  1143,
     781,  1149,  1150,  1165,  9938,  4918,  4942,  1201,  3970,  4063,
    1201,   783,   809,   832,   468,  9962,  9986, 10010, 10034, 10058,
    2802,  8313,   470,   474, 10082, 10106, 10130, 10154, 10178,  2802,
    8337,  2565,  1201,  1174,  1201,  1204,  2755,  2838,  2874,  3146,
    8361,  1441,   476, 10195,  1734,  8385,  1928,   490,  1201,  3295,
    1201,  3371,  1201,  8409, 10219,  2222, 10236,  8433, 10260,  2315,
    3439,  3629,  3712, 10284, 10308
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -328,  -328,   815,  -328,  -328,    14,   121,   -21,     3,
      -6,  -327,  -170,   714,   -94,   773,   -16,  -223,   -51,    88,
     120,  -159,   -98,   -97,   -39,   114,   852,  1145,  1726,  2019,
    2600,  5435,  4970,  5165,  4662,  4361,  4068,  3767,  -236,   772,
     271,  2893,  3474,   -80,    42,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    23,    52,    85,    16,    81,
     226,    86,    87,    88,   129,   296,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,   248,   249,   250,   251,
     252,    68,   253,   254,   255,   256,   257,   258,   103,   104,
     259,   260,   261,   137,   325,   262
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      78,    26,    18,   109,   234,   196,    10,    80,   354,   365,
     157,    17,     2,    78,     7,   230,   -10,    19,     7,   230,
      91,   223,   342,   483,    29,   488,   224,   -19,   281,    78,
      22,    24,    78,   174,   -10,    28,   410,    79,    31,    32,
       2,    33,    34,   295,   -96,   -19,   412,   -19,    92,   -11,
     -19,   -19,    42,    43,    44,   178,    45,    46,   -20,   235,
      48,    93,    82,   287,    83,    50,   235,   -11,    94,    51,
      78,     1,   429,   147,   148,     2,   -20,    95,   -20,   286,
     195,   -20,   -20,   343,   344,    96,   532,    84,   128,    78,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,    78,   223,   -26,   141,   156,   -26,   224,
     -12,   131,   209,   326,   132,   478,   235,    -5,    97,    78,
      78,     8,    -5,     9,    98,     8,   225,   -14,   -12,     2,
     297,   138,   -14,   281,    99,    12,   -15,   536,    25,   505,
      13,   -15,   345,   232,    25,   126,   481,   100,    83,   -14,
     235,   507,   -14,   133,   -13,   149,   134,    14,   -15,    78,
      15,   -15,    78,   227,   227,   340,    20,    21,   228,   228,
     326,   482,   -13,   227,   -28,   232,   326,   -28,   228,    78,
     484,    78,   489,   175,   -32,   229,   229,   -32,   233,   355,
      78,   155,    78,   176,    78,   229,   326,   235,   414,  -114,
     486,   419,    83,   553,   235,   186,   530,   187,    83,    78,
     235,   356,   142,   288,    -2,   555,   -34,   -34,   -18,     2,
     -34,     2,   199,   188,   386,   487,   230,   427,   349,   -21,
      -3,   531,   351,   -33,   -33,    -3,   -18,   -33,    27,    22,
     348,   -18,   -18,   533,   -16,   -16,   -98,   -21,   -97,   -21,
     537,   281,   -21,   -21,   -14,   194,   235,   -22,    -6,   -14,
     348,   182,   183,    -6,   206,    -7,    -4,   415,   -12,   200,
      -7,    -4,   205,   -12,   207,   -22,   -14,   -22,   -13,   492,
     -22,   -22,   230,   -13,   208,   326,   360,   450,   326,   213,
     -25,   215,    -9,    75,   -37,   346,  -118,    -9,   349,   -37,
     219,   341,   220,   109,   221,   361,    75,    -8,   -25,    78,
     -25,   -24,    -8,   -25,   -25,   362,    78,  -116,   -38,  -115,
     -23,   106,   283,   -38,   522,    75,   -17,   -17,  -100,   -24,
     101,   -24,    78,  -100,   -24,   -24,   223,   363,   -23,   405,
     -23,   224,   538,   -23,   -23,   -35,   -35,   406,   197,   -35,
    -100,  -100,   232,   198,   386,   217,   358,   407,   295,   173,
     218,  -111,  -109,    75,   110,   111,  -111,  -109,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   408,    75,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,    75,  -110,   -99,   543,
     223,   138,  -110,   -99,   544,   224,   322,   145,   290,   227,
     291,   292,    75,    75,   228,   -73,   -73,  -117,   450,   592,
     -99,   -99,   295,   418,   421,   293,   106,   109,   423,   146,
     424,   229,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   326,   138,   -36,   -36,   425,
      78,   -36,    75,   576,   577,    75,    78,   284,   426,   232,
     -15,  -112,   285,   322,   138,   -15,  -112,   619,   342,   322,
     471,   342,    75,   -74,    75,   232,   386,   -19,   -74,   127,
     -19,   -19,   -15,    75,   472,    75,   572,    75,   473,   322,
     474,  -113,   660,   342,   663,   342,  -113,   661,   665,   664,
     674,   154,    75,   666,   294,   675,   281,    78,   475,   342,
     634,   342,   -20,   342,   678,   -20,   -20,   383,   389,   679,
     -16,   -16,   326,   352,   450,   642,   -18,   -18,   -30,   343,
     344,   -30,   343,   344,   -19,   -19,   476,   643,   -19,   -20,
     -20,   138,   480,   -20,   106,   413,   -18,   -75,   485,   -18,
      78,    78,   -75,   493,   343,   344,   343,   344,   139,   111,
     662,   454,   455,   456,   457,   458,   459,   498,   326,   667,
     343,   344,   343,   344,   343,   344,   386,   500,   322,   -31,
     447,   453,   -31,   326,  -111,   501,   348,  -111,   345,   138,
     502,   345,   573,   288,   503,   326,   -21,   -21,   179,   232,
     -21,   180,    75,   450,   326,    78,   523,   -75,    78,    75,
     -75,   340,   528,   345,   340,   345,   -72,   -72,   326,   390,
     391,   392,   393,   394,   395,    75,   529,   326,   535,   345,
      78,   345,    78,   345,   -74,   -74,   340,   -21,   340,   326,
     -21,   -21,   326,   539,   326,   546,    78,   383,    78,   548,
      78,   549,   340,   326,   340,   -22,   340,   326,   -22,   -22,
     550,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   -22,   -22,   -25,   551,   -22,   -25,
     -25,  -119,   236,   237,   101,   238,   239,   -24,   -19,   -19,
     -24,   -24,   628,   629,   -20,   -20,   240,   241,   242,  -109,
     243,   244,  -109,   348,   245,   593,   348,   181,   348,   246,
     294,   447,   579,   247,   582,   651,   -23,   348,   656,   -23,
     -23,   348,   350,   -18,   586,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   322,   598,
     669,   346,   671,    75,   346,   184,   599,   341,   294,    75,
     341,   -25,   -25,   -24,   -24,   -25,   680,   -24,   681,   601,
     682,   -23,   -23,   607,   185,   -23,   346,   294,   346,   383,
     189,   612,   341,   294,   341,   190,   191,   -27,   294,   294,
     -27,   620,   346,   625,   346,   626,   346,   632,   341,   633,
     341,   636,   341,   -29,   263,   264,   -29,   265,   266,   106,
     283,   210,  -112,  -110,   134,  -112,  -110,   645,   267,   268,
     269,   657,   270,   271,   192,   322,   272,   447,   -53,    11,
     -53,   -53,   -53,   -53,   -53,   273,   -53,   -53,   -53,   -53,
     212,   -53,   -53,   -53,   -53,   -53,   -53,   658,   -53,   -53,
     -53,   -53,   -53,    75,    75,   -53,   214,   -53,   177,   294,
     216,   -53,  -113,   294,   -73,  -113,   469,   -73,   130,   294,
     659,   322,   497,   298,   299,   294,   300,   301,   527,   383,
     389,   294,   -72,   153,    63,   -72,   322,   302,   303,   304,
       0,   305,   306,   307,   211,   308,     0,    63,   322,   545,
     309,     0,   294,     0,   310,     0,   447,   453,    75,   357,
      21,    75,   274,    63,   -75,   -75,    63,   580,     0,   581,
     132,   322,   134,     0,   112,   113,   114,   115,   116,   117,
     322,   583,     0,    75,   132,    75,   584,   585,   587,   134,
     180,   294,   322,   588,     0,   322,   294,   322,     0,    75,
       0,    75,   -76,    75,    63,   589,   322,   -76,   294,     0,
     322,   460,   461,   462,   463,     0,   -76,   -76,   -76,   -76,
     -76,   -76,     0,    63,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,    63,   597,   -74,
     600,   294,   -74,   180,     0,   602,   -77,   311,   294,   603,
       0,   -77,   294,    63,    63,   460,   461,   462,   463,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   604,   274,   -50,   294,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,    63,     0,   -50,    63,   -50,     0,   608,
     609,   -50,   132,   134,   311,   610,   611,     0,   134,   180,
     311,   613,     0,    63,   294,    63,   614,   298,   299,   294,
     300,   301,   615,     0,    63,   294,    63,     0,    63,     0,
     311,   302,   303,   304,     0,   305,   306,   307,   222,   308,
     416,   111,   624,    63,   309,   294,   627,   630,   310,   294,
     294,   -51,     0,   -51,   -51,   -51,   -51,   -51,   377,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -51,   -51,   -51,   -51,   420,   -32,   -51,   631,
     -51,     0,   294,   635,   -51,   274,   180,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   468,   111,   -44,   637,   -44,     0,   294,   311,
     -44,   441,   311,   638,     0,   639,   294,    64,   294,   644,
     236,   237,   180,   238,   239,   646,   647,     0,   294,   294,
      64,   479,   111,    63,   240,   241,   242,     0,   243,   244,
      63,   648,   245,   201,   294,   275,    64,   246,     0,    64,
     670,   247,   330,   294,    31,    32,    63,    33,    34,     0,
     331,   332,   333,   334,     0,   335,   336,   337,    42,    43,
      44,     0,    45,    46,   338,     0,    48,     0,   377,   339,
     672,    50,     0,   294,     0,    51,     0,    64,   491,    21,
     534,    21,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,     0,    64,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
      64,   -34,   -34,   570,   111,   -21,   -21,   -22,   -22,   -78,
     312,   -33,   -33,     0,   -78,     0,    64,    64,   460,   461,
     462,   463,   441,   -78,   -78,   -78,   -78,   -78,   -78,     0,
     275,   -35,   -35,   -25,   -25,     0,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   311,
     -24,   -24,   -23,   -23,    63,     0,    64,   -36,   -36,    64,
      63,     0,     0,     0,     0,     0,     0,   312,     0,     0,
       0,     0,     0,   312,     0,     0,    64,     0,    64,     0,
     377,   298,   299,     0,   300,   301,     0,    64,     0,    64,
       0,    64,     0,   312,     0,   302,   303,   304,     0,   305,
     306,   307,   616,   308,     0,     0,    64,     0,   309,     0,
     274,    63,   310,     0,     0,     0,     0,     0,     0,     0,
       0,   378,     0,     0,     0,     0,   311,     0,   441,   -43,
       0,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   275,   -43,
     -43,   -43,   -43,   -43,    63,    63,   -43,     0,   -43,     0,
       0,     0,   -43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   311,     0,   298,   299,     0,   300,   301,     0,
     377,     0,   312,     0,   442,   312,     0,   311,   302,   303,
     304,     0,   305,   306,   307,   673,   308,     0,     0,   311,
       0,   309,     0,     0,     0,   310,    64,   441,   311,    63,
       0,   -83,    63,    64,   -83,     0,   400,   401,   -83,   -83,
     -83,   -83,   311,   -83,   -83,   -83,   -83,   -83,   -83,    64,
       0,   311,     0,     0,    63,     0,    63,     0,     0,     0,
       0,     0,     0,   311,     0,     0,   311,     0,   311,     0,
      63,   378,    63,     0,    63,     0,     0,   311,     0,     0,
       0,   311,     0,     0,     0,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   -45,     0,     0,   -45,     0,   -45,     0,   -83,
       0,   -45,     0,     0,   -83,   442,   464,   465,   -83,   -83,
     -83,   -83,     0,   -83,   -83,   -83,   -83,   -83,   -83,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   312,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     0,    64,   -46,     0,   -46,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   378,   -46,   -46,   -46,   -46,   -46,     0,
       0,   -46,     0,   -46,     0,     0,     0,   -46,     0,     0,
       0,     0,   366,   367,     0,   368,   369,     0,     0,     0,
       0,     0,     0,   275,    64,     0,   370,   371,   372,     0,
     373,   374,   590,     0,   375,     0,     0,     0,     0,   312,
       0,   442,   -47,   376,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,    64,    64,   -47,
       0,   -47,     0,     0,     0,   -47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   312,     0,   298,   299,     0,
     300,   301,     0,   378,     0,     0,     0,     0,    65,     0,
     312,   302,   303,   304,     0,   305,   306,   307,   676,   308,
       0,    65,   312,     0,   309,     0,     0,     0,   310,     0,
     442,   312,    64,     0,     0,    64,   276,    65,     0,     0,
      65,     0,     0,     0,     0,   312,     0,     0,     0,     0,
       0,     0,     0,     0,   312,     0,     0,    64,     0,    64,
       0,     0,     0,     0,     0,     0,   312,     0,     0,   312,
       0,   312,     0,    64,     0,    64,   -79,    64,    65,     0,
     312,   -79,     0,     0,   312,   460,   461,   462,   463,     0,
     -79,   -79,   -79,   -79,   -79,   -79,     0,    65,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,    65,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   313,     0,     0,     0,   -80,     0,    65,    65,   460,
     461,   462,   463,     0,   -80,   -80,   -80,   -80,   -80,   -80,
       0,   276,   -48,     0,   -48,   -48,   -48,   -48,   -48,     0,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -48,   -48,   -48,   -48,   -48,    65,     0,   -48,
      65,   -48,     0,     0,     0,   -48,     0,     0,   313,     0,
       0,     0,     0,     0,   313,     0,     0,    65,     0,    65,
       0,   298,   299,     0,   300,   301,     0,     0,    65,     0,
      65,     0,    65,     0,   313,   302,   303,   304,     0,   305,
     306,   307,   677,   308,     0,     0,     0,    65,   309,     0,
       0,     0,   310,     0,     0,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   379,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
       0,     0,   -49,     0,   -49,     0,     0,     0,   -49,   276,
       0,   -37,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,
     -37,     0,     0,   313,   -37,   443,   313,     0,     0,     0,
       0,    66,     0,     0,   236,   237,     0,   238,   239,     0,
       0,     0,     0,     0,    66,     0,     0,    65,   240,   241,
     242,     0,   243,   244,    65,     0,   245,   203,     0,   277,
      66,   246,     0,    66,     0,   247,    30,     0,    31,    32,
      65,    33,    34,     0,    35,    36,    37,    38,     0,    39,
      40,    41,    42,    43,    44,     0,    45,    46,   231,     0,
      48,     0,   379,    49,     0,    50,     0,     0,     0,    51,
       0,    66,     0,     0,     0,     0,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,     0,
      66,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,    66,     0,     0,     0,     0,     0,
       0,     0,     0,   -81,   314,     0,     0,     0,   -81,     0,
      66,    66,   460,   461,   462,   463,   443,   -81,   -81,   -81,
     -81,   -81,   -81,     0,   277,     0,     0,     0,     0,     0,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   313,     0,     0,     0,     0,    65,     0,
      66,     0,     0,    66,    65,     0,     0,     0,     0,     0,
       0,   314,     0,     0,     0,     0,     0,   314,     0,     0,
      66,     0,    66,     0,   379,   298,   299,     0,   300,   301,
       0,    66,     0,    66,     0,    66,     0,   314,     0,   302,
     303,   304,     0,   305,   306,   307,   683,   308,     0,     0,
      66,     0,   309,     0,   276,    65,   310,     0,     0,     0,
       0,     0,     0,     0,     0,   380,     0,     0,     0,     0,
     313,     0,   443,   -52,     0,   -52,   -52,   -52,   -52,   -52,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   277,   -52,   -52,   -52,   -52,   -52,    65,    65,
     -52,     0,   -52,     0,     0,     0,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   313,     0,   298,   299,
       0,   300,   301,     0,   379,     0,   314,     0,   444,   314,
       0,   313,   302,   303,   304,     0,   305,   306,   307,   684,
     308,     0,     0,   313,     0,   309,     0,     0,     0,   310,
      66,   443,   313,    65,     0,   -84,    65,    66,   -84,     0,
     400,   401,   -84,   -84,   -84,   -84,   313,   -84,   -84,   -84,
     -84,   -84,   -84,    66,     0,   313,     0,     0,    65,     0,
      65,     0,     0,     0,     0,     0,     0,   313,     0,     0,
     313,     0,   313,     0,    65,   380,    65,     0,    65,     0,
       0,   313,     0,     0,     0,   313,     0,     0,     0,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   -63,     0,   -63,   -63,   -63,   -63,   -63,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,     0,     0,   -63,
       0,   -63,     0,   -84,     0,   -63,     0,     0,   -84,   444,
     464,   465,   -84,   -84,   -84,   -84,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   314,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    66,   -38,     0,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   380,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,     0,   -38,     0,     0,
       0,   -38,     0,     0,     0,     0,   263,   264,     0,   265,
     266,     0,     0,     0,     0,     0,     0,   277,    66,     0,
     267,   268,   269,     0,   270,   271,   605,     0,   272,     0,
       0,     0,     0,   314,     0,   444,   -53,   273,   -53,   -53,
     -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,   668,   -53,
     -53,   -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,
     -53,    66,    66,   -53,     0,   -53,     0,     0,     0,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,   236,   237,     0,   238,   239,     0,   380,     0,     0,
       0,     0,    67,     0,   314,   240,   241,   242,     0,   243,
     244,   135,     0,   245,     0,    67,   314,     0,   246,     0,
       0,     0,   247,     0,   444,   314,    66,     0,     0,    66,
     278,    67,     0,     0,    67,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,    66,     0,    66,     0,     0,     0,     0,     0,     0,
     314,     0,     0,   314,     0,   314,     0,    66,     0,    66,
     -82,    66,    67,     0,   314,   -82,     0,     0,   314,   460,
     461,   462,   463,     0,   -82,   -82,   -82,   -82,   -82,   -82,
       0,    67,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   315,   -76,     0,     0,   -76,
       0,    67,    67,   396,   397,   398,   399,     0,   -76,   -76,
     -76,   -76,   -76,   -76,     0,   278,   -59,     0,   -59,   -59,
     -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,
     -59,    67,     0,   -59,    67,   -59,     0,     0,     0,   -59,
       0,     0,   315,     0,     0,     0,     0,     0,   315,     0,
       0,    67,     0,    67,     0,   298,   299,     0,   300,   301,
       0,     0,    67,     0,    67,     0,    67,     0,   315,   302,
     303,   304,     0,   305,   306,   307,     0,   308,     0,     0,
       0,    67,   309,     0,     0,     0,   310,     0,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   381,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,     0,     0,   -60,     0,   -60,     0,
       0,     0,   -60,   278,     0,   -61,     0,   -61,   -61,   -61,
     -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,     0,   -61,     0,     0,   315,   -61,   445,
     315,   -76,   -76,     0,     0,    76,   118,   119,   120,   121,
       0,   -76,   -76,   -76,   -76,   -76,   -76,     0,    76,     0,
       0,    67,     0,     0,     0,     0,     0,     0,    67,     0,
       0,     0,     0,   279,    76,     0,     0,    76,    31,    32,
       0,    33,    34,     0,    67,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,     0,    45,    46,     0,     0,
      48,     0,     0,   327,     0,    50,   381,     0,     0,    51,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,     0,    76,   279,   279,   279,   279,   279,
     279,   279,   279,   279,   279,   279,   279,   279,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   323,   -77,
       0,     0,   -77,     0,    76,    76,   396,   397,   398,   399,
     445,   -77,   -77,   -77,   -77,   -77,   -77,     0,   279,     0,
       0,     0,     0,     0,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   315,     0,     0,
       0,     0,    67,     0,    76,     0,     0,    76,    67,     0,
       0,     0,     0,     0,     0,   323,     0,     0,     0,     0,
       0,   323,     0,     0,    76,     0,    76,     0,   381,     0,
     -51,   -51,     0,   -51,   -51,    76,     0,    76,     0,    76,
       0,   323,     0,     0,   -51,   -51,   -51,     0,   -51,   -51,
       0,     0,   -51,     0,    76,   -51,     0,   -51,   278,    67,
       0,   -51,     0,     0,     0,     0,     0,     0,     0,   384,
       0,     0,     0,     0,   315,     0,   445,   -62,     0,   -62,
     -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   279,   -62,   -62,   -62,
     -62,   -62,    67,    67,   -62,     0,   -62,     0,     0,     0,
     -62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     315,     0,   -51,   -51,     0,   -51,   -51,     0,   381,     0,
     323,     0,   448,   323,     0,   315,   -51,   -51,   -51,     0,
     -51,   -51,     0,     0,   -51,   -51,     0,   315,     0,   -51,
       0,     0,     0,   -51,    76,   445,   315,    67,     0,   -85,
      67,    76,   -85,     0,   400,   401,   -85,   -85,   -85,   -85,
     315,   -85,   -85,   -85,   -85,   -85,   -85,    76,     0,   315,
       0,     0,    67,     0,    67,     0,     0,     0,     0,     0,
       0,   315,     0,     0,   315,     0,   315,     0,    67,   384,
      67,     0,    67,     0,     0,   315,     0,     0,     0,   315,
       0,     0,     0,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   -58,     0,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,
     -58,     0,     0,   -58,     0,   -58,     0,   -85,     0,   -58,
       0,     0,   -85,   448,   464,   465,   -85,   -85,   -85,   -85,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     323,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    76,   -56,     0,   -56,   -56,   -56,   -56,   -56,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   384,   -56,   -56,   -56,   -56,   -56,     0,     0,   -56,
       0,   -56,     0,     0,     0,   -56,     0,     0,     0,     0,
      31,    32,     0,    33,    34,     0,     0,     0,     0,     0,
       0,   279,    76,     0,    42,    43,    44,     0,    45,    46,
     192,     0,   282,     0,     0,     0,     0,   323,     0,   448,
     -54,    51,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -54,   -54,   -54,    76,    76,   -54,     0,   -54,
       0,     0,     0,   -54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   323,     0,     0,   -12,   -12,     0,   -12,
     -12,   384,     0,     0,     0,     0,    77,     0,   323,     0,
     -12,   -12,   -12,     0,   -12,   -12,     0,     0,   -12,    77,
     323,   -12,     0,   -12,     0,     0,     0,   -12,   448,   323,
      76,     0,     0,    76,   280,    77,     0,     0,    77,     0,
       0,     0,     0,   323,     0,     0,     0,     0,     0,     0,
       0,     0,   323,     0,     0,    76,     0,    76,     0,     0,
       0,     0,     0,     0,   323,     0,     0,   323,     0,   323,
       0,    76,     0,    76,     0,    76,    77,   -78,   323,     0,
     -78,     0,   323,     0,   396,   397,   398,   399,     0,   -78,
     -78,   -78,   -78,   -78,   -78,    77,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   324,
     -79,     0,     0,   -79,     0,    77,    77,   396,   397,   398,
     399,     0,   -79,   -79,   -79,   -79,   -79,   -79,     0,   280,
     -57,     0,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,    77,     0,   -57,    77,   -57,
       0,     0,     0,   -57,     0,     0,   324,     0,     0,     0,
       0,     0,   324,     0,     0,    77,     0,    77,     0,   -52,
     -52,     0,   -52,   -52,     0,     0,    77,     0,    77,     0,
      77,     0,   324,   -52,   -52,   -52,     0,   -52,   -52,     0,
       0,   -52,     0,     0,   -52,    77,   -52,     0,     0,     0,
     -52,     0,     0,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     385,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,
     -55,     0,   -55,     0,     0,     0,   -55,   280,     0,    30,
       0,    31,    32,     2,    33,    34,     0,    35,    36,    37,
      38,     0,    39,    40,    41,    42,    43,    44,     0,    45,
      46,   231,    47,    48,     0,     0,    49,     0,    50,     0,
       0,   324,    51,   449,   324,     0,     0,     0,     0,    74,
       0,     0,   -52,   -52,     0,   -52,   -52,     0,     0,     0,
       0,     0,    74,     0,     0,    77,   -52,   -52,   -52,     0,
     -52,   -52,    77,     0,   -52,   -52,     0,    74,   107,   -52,
       0,    74,     0,   -52,     0,     0,   -13,   -13,    77,   -13,
     -13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -13,   -13,   -13,     0,   -13,   -13,     0,     0,   -13,     0,
     385,   -13,     0,   -13,     0,     0,     0,   -13,     0,    74,
       0,     0,     0,     0,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,     0,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,   171,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   321,   -80,     0,     0,   -80,     0,    74,    74,
     396,   397,   398,   399,   449,   -80,   -80,   -80,   -80,   -80,
     -80,     0,   193,     0,     0,     0,     0,     0,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   324,     0,     0,     0,     0,    77,     0,    74,     0,
       0,    74,    77,     0,     0,     0,     0,     0,     0,   321,
       0,     0,     0,     0,     0,   321,     0,     0,    74,     0,
      74,     0,   385,   236,   237,     0,   238,   239,     0,    74,
       0,    74,     0,    74,     0,   321,     0,   240,   241,   242,
       0,   243,   244,     0,     0,   245,   652,     0,    74,     0,
     246,     0,   280,    77,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   388,     0,     0,     0,   324,     0,
     449,   -50,     0,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     411,   -50,   -50,   -50,   -50,   -50,    77,    77,   -50,     0,
     -50,     0,     0,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   324,     0,   236,   237,     0,   238,
     239,     0,   385,     0,   321,     0,   321,   452,     0,   324,
     240,   241,   242,     0,   243,   244,     0,     0,   245,   654,
      73,   324,     0,   246,     0,     0,     0,   247,    74,   449,
     324,    77,     0,    73,    77,    74,     0,     0,     0,     0,
       0,     0,     0,     0,   324,     0,     0,     0,   105,     0,
       0,    74,    73,   324,     0,     0,    77,     0,    77,     0,
       0,     0,     0,     0,     0,   324,     0,     0,   324,     0,
     324,     0,    77,   506,    77,     0,    77,     0,     0,   324,
       0,     0,  -114,   324,     0,     0,     0,   499,  -114,     0,
      73,  -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,   520,
    -114,  -114,  -114,  -114,  -114,  -114,     0,     0,     0,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
     169,   170,     0,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   320,     0,     0,     0,   554,     0,    73,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   568,   321,     0,     0,     0,     0,    74,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    73,
       0,     0,    73,     0,     0,     0,     0,     0,     0,     0,
     320,     0,     0,     0,     0,   591,   320,     0,     0,    73,
       0,    73,     0,     0,     0,    31,    32,     0,    33,    34,
      73,     0,    73,     0,    73,     0,   320,     0,     0,    42,
      43,    44,     0,    45,    46,   193,   606,    48,     0,    73,
       0,     0,    50,     0,   236,   237,    51,   238,   239,     0,
       0,   321,     0,   618,   382,     0,     0,     0,   240,   241,
     242,     0,   243,   244,     0,     0,   245,     0,     0,   263,
     264,   246,   265,   266,     0,   247,     0,     0,     0,    74,
      74,     0,     0,   267,   268,   269,     0,   270,   271,     0,
       0,   272,     0,     0,     0,     0,    50,   321,     0,     0,
     273,     0,     0,     0,     0,   591,   641,     0,     0,     0,
       0,     0,   321,     0,     0,   320,     0,   446,     0,     0,
       0,     0,     0,    72,   321,     0,   366,   367,     0,   368,
     369,     0,   618,   650,    74,     0,    72,    74,     0,    73,
     370,   371,   372,     0,   373,   374,    73,   321,   375,     0,
       0,     0,     0,   246,     0,    72,   321,   376,     0,    74,
       0,    74,    73,     0,     0,     0,     0,     0,   321,     0,
       0,   321,     0,   321,     0,    74,     0,    74,     0,    74,
     430,   431,   321,   432,   433,     0,   321,     0,     0,     0,
       0,     0,     0,    72,   434,   435,   436,     0,   437,   438,
       0,     0,   439,     0,     0,     0,     0,   309,   518,   519,
       0,   440,    72,    72,    72,    72,    72,    72,    72,   165,
     166,   167,   168,     0,     0,     0,    72,     0,     0,     0,
     298,   299,     0,   300,   301,     0,   319,     0,     0,     0,
       0,     0,    72,    72,   302,   303,   304,     0,   305,   306,
       0,     0,   308,     0,     0,     0,     0,   309,     0,     0,
       0,   310,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   566,   567,     0,   320,     0,     0,     0,     0,
      73,     0,    72,     0,     0,    72,    73,     0,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,     0,   319,
       0,     0,    72,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,    72,     0,    72,     0,   319,
     -51,     0,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -51,   -51,    72,   -51,   -51,   -51,   -51,   -51,   -51,     0,
     -51,   -51,   -51,   -51,   -51,     0,     0,   -51,     0,   -51,
       0,     0,   320,   -51,     0,   -41,     0,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,
      73,    73,   -41,     0,   -41,     0,     0,     0,   -41,     0,
       0,     0,     0,     0,     0,     0,   430,   431,   320,   432,
     433,     0,     0,     0,     0,     0,     0,     0,   319,     0,
     434,   435,   436,   320,   437,   438,   617,     0,   439,     0,
       0,     0,     0,     0,    71,   320,     0,   440,     0,     0,
       0,     0,    72,     0,     0,    73,     0,    71,    73,    72,
       0,     0,     0,     0,     0,     0,     0,     0,   320,     0,
       0,     0,     0,     0,     0,    72,    71,   320,     0,     0,
      73,     0,    73,     0,     0,     0,     0,     0,     0,   320,
       0,     0,   320,     0,   320,     0,    73,     0,    73,     0,
      73,     0,     0,   320,     0,     0,     0,   320,     0,   366,
     367,     0,   368,   369,    71,     0,     0,   514,   515,   516,
     517,     0,     0,   370,   371,   372,     0,   373,   374,   640,
       0,   375,     0,    71,   159,   160,   161,   162,   163,   164,
     376,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
       0,     0,     0,    71,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,   319,   319,   319,   319,
     319,   562,   563,   564,   565,     0,     0,     0,   319,     0,
       0,     0,     0,    72,     0,     0,     0,   236,   237,    72,
     238,   239,     0,    71,     0,     0,    71,     0,     0,     0,
       0,   240,   241,   242,   318,   243,   244,   590,     0,   387,
     318,     0,     0,    71,     0,    71,     0,     0,   247,     0,
       0,     0,     0,     0,    71,     0,    71,     0,    71,     0,
     318,     0,     0,     0,     0,     0,   -44,     0,   -44,   -44,
     -44,   -44,   -44,    71,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,   -44,   319,   -44,   -44,   -44,   -44,
     -44,     0,     0,   -44,     0,   -44,     0,     0,     0,   -44,
       0,   430,   431,     0,   432,   433,     0,     0,     0,     0,
       0,     0,     0,    72,    72,   434,   435,   436,     0,   437,
     438,   649,     0,   439,     0,   298,   299,     0,   300,   301,
       0,   319,   440,     0,     0,     0,     0,     0,     0,   302,
     303,   304,     0,   305,   306,   617,   319,   451,     0,   318,
       0,     0,     0,     0,     0,     0,   310,     0,   319,     0,
     263,   264,     0,   265,   266,     0,     0,     0,    72,     0,
       0,    72,    69,    71,   267,   268,   269,     0,   270,   271,
      71,   319,   272,     0,     0,    69,     0,     0,     0,     0,
     319,   273,     0,    72,     0,    72,    71,     0,     0,     0,
       0,     0,   319,     0,    69,   319,     0,   319,     0,    72,
       0,    72,     0,    72,   -81,     0,   319,   -81,     0,     0,
     319,   396,   397,   398,   399,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   508,   509,   510,   511,   512,   513,     0,   136,
       0,     0,    69,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,     2,    33,    34,     0,    35,    36,    37,
      38,   158,    39,    40,    41,    42,    43,    44,     0,    45,
      46,   231,   108,    48,     0,   172,    49,     0,    50,     0,
       0,     0,    51,     0,     0,   316,     0,     0,     0,     0,
       0,    69,    69,     0,     0,     0,   556,   557,   558,   559,
     560,   561,     0,     0,     0,     0,     0,    31,    32,   318,
      33,    34,     0,     0,    71,     0,     0,     0,     0,     0,
      71,    42,    43,    44,     0,    45,    46,     0,     0,   282,
     136,    69,     0,     0,    69,     0,     0,     0,    51,     0,
       0,     0,   316,     0,     0,     0,     0,     0,   316,     0,
       0,    69,     0,    69,     0,     0,   366,   367,     0,   368,
     369,     0,    69,     0,    69,     0,    69,    70,   316,     0,
     370,   371,   372,     0,   373,   374,     0,     0,   375,     0,
      70,    69,     0,     0,     0,     0,   318,   376,   236,   237,
       0,   238,   239,     0,     0,     0,     0,     0,     0,    70,
       0,     0,   240,   241,   242,     0,   243,   244,   430,   431,
     387,   432,   433,     0,    71,    71,     0,     0,     0,   247,
       0,     0,   434,   435,   436,     0,   437,   438,     0,     0,
     439,     0,   318,     0,     0,     0,     0,    70,     0,   440,
       0,     0,     0,     0,   417,     0,     0,   318,     0,     0,
       0,     0,     0,     0,     0,     0,    70,   316,     0,   318,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
      70,     0,    71,     0,     0,     0,     0,     0,     0,     0,
     317,    69,   318,     0,     0,     0,    70,    70,    69,     0,
       0,   318,     0,     0,    71,     0,    71,     0,     0,     0,
       0,     0,     0,   318,    69,     0,   318,     0,   318,   136,
      71,     0,    71,     0,    71,     0,     0,   318,     0,     0,
       0,   318,     0,     0,     0,     0,    70,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,   317,     0,     0,
       0,     0,     0,   317,     0,     0,    70,     0,    70,     0,
       0,     0,     0,   521,   136,     0,     0,    70,     0,    70,
       0,    70,     0,   317,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,     0,   -39,    70,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,
       0,     0,   -39,     0,   -39,     0,     0,     0,   -39,     0,
       0,   298,   299,     0,   300,   301,     0,   569,     0,     0,
       0,     0,    69,     0,     0,   302,   303,   304,    69,   305,
     306,   -87,     0,   451,   -87,     0,   400,   401,   -87,   -87,
     -87,   -87,   310,   -87,   -87,   -87,   -87,   -87,   -87,   136,
      90,   -42,   317,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,   -42,   -42,   102,   -42,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,   -42,    70,     0,   -42,     0,
     -42,     0,     0,    70,   -42,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   316,     0,     0,   136,     0,    70,
       0,     0,     0,     0,     0,     0,   140,   289,   143,   144,
       0,     0,     0,   150,   151,   152,  -114,     0,     0,     0,
       0,    89,    69,    69,  -114,  -114,     0,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
     316,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   316,   328,   328,   -77,   -77,
       0,   329,     0,   118,   119,   120,   121,   316,   -77,   -77,
     -77,   -77,   -77,   -77,     0,     0,     0,    69,     0,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     316,     0,     0,     0,     0,     0,   347,   202,   204,   316,
       0,     0,    69,     0,    69,     0,     0,     0,     0,     0,
       0,   316,   317,     0,   316,     0,   316,    70,    69,     0,
      69,     0,    69,    70,     0,   316,     0,     0,   -43,   316,
     -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
       0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,  -114,     0,   -43,     0,   -43,   359,  -114,
     364,   -43,  -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   409,     0,   317,
    -114,     0,     0,     0,  -114,   422,     0,   102,     0,  -114,
       0,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,     0,     0,     0,    70,    70,     0,
       0,     0,   -87,   428,     0,     0,     0,   -87,     0,   464,
     465,   -87,   -87,   -87,   -87,   317,   -87,   -87,   -87,   -87,
     -87,   -87,     0,     0,     0,   124,   470,     0,     0,     0,
     317,     0,     0,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   317,   -88,   -88,   -88,   -88,   -88,   -88,     0,
       0,     0,    70,     0,     0,    70,   494,   495,   496,     0,
       0,     0,     0,     0,     0,   317,     0,     0,     0,     0,
     504,     0,     0,     0,   317,     0,     0,    70,     0,    70,
       0,     0,   364,     0,     0,     0,   317,     0,     0,   317,
       0,   317,     0,    70,     0,    70,     0,    70,     0,     0,
     317,   524,   525,   526,   317,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   540,
     541,   542,     0,     0,     0,     0,     0,   -45,     0,   -45,
     -45,   -45,   -45,   -45,   552,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,   -45,   428,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,     0,   -45,     0,     0,     0,
     -45,     0,  -118,     0,     0,     0,   571,   289,   574,   575,
    -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   594,   595,   596,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,     0,
       0,     0,   -46,     0,     0,     0,     0,     0,     0,  -116,
       0,     0,     0,     0,   621,   622,   623,  -116,  -116,     0,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,     0,     0,     0,     0,   328,   328,   -47,
       0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,     0,  -115,   -47,     0,   -47,     0,
       0,     0,   -47,  -115,  -115,     0,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -117,
       0,     0,   347,   653,   655,   347,     0,  -117,  -117,     0,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,   -86,     0,     0,     0,   347,   -86,   347,
     464,   465,   -86,   -86,   -86,   -86,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   347,     0,   347,   -48,   347,   -48,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,     0,   -48,
     -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,
     -48,     0,     0,   -48,     0,   -48,     0,     0,   -49,   -48,
     -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,
     -49,   -49,   -49,     0,     0,   -49,     0,   -49,     0,     0,
     -40,   -49,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,
       0,     0,   -52,   -40,   -52,   -52,   -52,   -52,   -52,     0,
     -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,
     -52,     0,   -52,   -52,   -52,   -52,   -52,     0,     0,   -52,
       0,   -52,     0,     0,   -63,   -52,   -63,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,     0,
       0,   -63,     0,   -63,     0,     0,   -59,   -63,   -59,   -59,
     -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,     0,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,
     -59,     0,     0,   -59,     0,   -59,     0,     0,   -60,   -59,
     -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,   -60,
       0,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,   -60,   -60,     0,     0,   -60,     0,   -60,     0,     0,
     -61,   -60,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,
     -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,
     -61,   -61,   -61,   -61,   -61,     0,     0,   -61,     0,   -61,
       0,     0,   -62,   -61,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
       0,   -62,     0,     0,   -58,   -62,   -58,   -58,   -58,   -58,
     -58,     0,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,     0,
       0,   -58,     0,   -58,     0,     0,   -56,   -58,   -56,   -56,
     -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,     0,   -56,
     -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,
     -56,     0,     0,   -56,     0,   -56,     0,     0,   -54,   -56,
     -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,
       0,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,   -54,   -54,     0,     0,   -54,     0,   -54,     0,     0,
     -57,   -54,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,     0,     0,   -57,     0,   -57,
       0,     0,   -55,   -57,   -55,   -55,   -55,   -55,   -55,     0,
     -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,   -55,
       0,   -55,     0,     0,    30,   -55,    31,    32,     2,    33,
      34,     0,    35,    36,    37,    38,     0,    39,    40,    41,
      42,    43,    44,     0,    45,    46,   231,   353,    48,     0,
       0,    49,     0,    50,     0,     0,    30,    51,    31,    32,
       2,    33,    34,     0,    35,    36,    37,    38,     0,    39,
      40,    41,    42,    43,    44,     0,    45,    46,   231,   477,
      48,     0,     0,    49,     0,    50,     0,     0,   -37,    51,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,     0,   -37,     0,     0,
      30,   -37,    31,    32,     2,    33,    34,     0,    35,    36,
      37,    38,     0,    39,    40,    41,    42,    43,    44,     0,
      45,    46,   231,   490,    48,     0,     0,    49,     0,    50,
       0,     0,   -12,    51,   -12,   -12,   -12,   -12,   -12,     0,
     -12,   -12,   -12,   -12,     0,   -12,   -12,   -12,   -12,   -12,
     -12,     0,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,
       0,   -12,     0,     0,    30,   -12,    31,    32,     2,    33,
      34,     0,    35,    36,    37,    38,     0,    39,    40,    41,
      42,    43,    44,     0,    45,    46,   231,   578,    48,     0,
       0,    49,     0,    50,     0,     0,   -38,    51,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,   -38,   -38,
     -38,     0,     0,   -38,     0,   -38,     0,     0,   -13,   -38,
     -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,   -13,   -13,
       0,   -13,   -13,   -13,   -13,   -13,   -13,     0,   -13,   -13,
     -13,   -13,   -13,     0,  -102,   -13,     0,   -13,     0,     0,
       0,   -13,  -102,  -102,     0,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,   -64,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -65,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,     0,     0,
       0,     0,     0,     0,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -94,     0,     0,     0,     0,     0,
       0,     0,   -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,
     -94,   125,   -94,   -94,   -94,   -94,   -94,   -94,  -103,     0,
       0,     0,     0,     0,     0,     0,  -103,  -103,     0,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -101,     0,     0,     0,     0,     0,     0,     0,
    -101,  -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -106,     0,     0,     0,
       0,     0,     0,     0,  -106,  -106,     0,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -104,     0,     0,     0,     0,     0,     0,     0,  -104,  -104,
       0,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -119,     0,     0,     0,     0,     0,
       0,     0,  -119,  -119,     0,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -105,     0,
       0,     0,     0,     0,     0,     0,  -105,  -105,     0,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,   -68,     0,     0,     0,     0,     0,     0,     0,
     -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -70,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -69,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -71,     0,     0,     0,     0,     0,
       0,     0,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,  -107,     0,
       0,     0,     0,     0,     0,     0,  -107,  -107,     0,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -108,     0,     0,     0,     0,     0,     0,     0,
    -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -118,     0,     0,     0,
       0,     0,  -118,     0,     0,  -118,     0,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -116,     0,     0,     0,     0,     0,  -116,     0,     0,  -116,
       0,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -115,     0,     0,     0,     0,     0,
    -115,     0,     0,  -115,     0,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -117,     0,
       0,     0,     0,     0,  -117,     0,     0,  -117,     0,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -102,     0,     0,     0,     0,     0,  -102,     0,
       0,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   -64,     0,     0,     0,
       0,     0,   -64,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,     0,     0,     0,     0,     0,   -65,     0,     0,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -66,     0,     0,     0,     0,     0,
     -66,     0,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,
       0,     0,     0,     0,   -67,     0,     0,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -94,     0,     0,     0,     0,     0,   -94,     0,
       0,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   403,
     -94,   -94,   -94,   -94,   -94,   -94,  -103,     0,     0,     0,
       0,     0,  -103,     0,     0,  -103,     0,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -101,     0,     0,     0,     0,     0,  -101,     0,     0,  -101,
       0,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -106,     0,     0,     0,     0,     0,
    -106,     0,     0,  -106,     0,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -114,     0,
       0,     0,     0,   404,     0,     0,  -114,  -114,     0,  -114,
    -114,  -114,  -114,  -114,  -114,   -94,  -114,  -114,  -114,  -114,
    -114,  -114,     0,   -94,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,  -118,
       0,     0,     0,  -118,     0,     0,     0,     0,  -118,     0,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -116,     0,     0,     0,  -116,     0,     0,
       0,     0,  -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -115,     0,     0,
       0,  -115,     0,     0,     0,     0,  -115,     0,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -117,     0,     0,     0,  -117,     0,     0,     0,     0,
    -117,     0,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -102,     0,     0,     0,  -102,
       0,     0,     0,     0,  -102,     0,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,   -64,
       0,     0,     0,   -64,     0,     0,     0,     0,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -65,     0,     0,     0,   -65,     0,     0,
       0,     0,   -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -66,     0,     0,
       0,   -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -67,     0,     0,     0,   -67,     0,     0,     0,     0,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -94,     0,     0,     0,   -94,
       0,     0,     0,     0,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   467,   -94,   -94,   -94,   -94,   -94,   -94,  -103,
       0,     0,     0,  -103,     0,     0,     0,     0,  -103,     0,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -101,     0,     0,     0,  -101,     0,     0,
       0,     0,  -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -106,     0,     0,
       0,  -106,     0,     0,     0,     0,  -106,     0,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -104,     0,     0,     0,     0,     0,  -104,     0,     0,
    -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,   -94,     0,     0,     0,     0,
       0,   -94,     0,     0,   -94,     0,   -94,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,  -114,
       0,     0,     0,  -114,   547,     0,     0,     0,  -114,     0,
    -114,  -114,  -114,  -114,  -114,  -114,     0,  -114,  -114,  -114,
    -114,  -114,  -114,  -104,     0,     0,     0,  -104,     0,     0,
       0,     0,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,   -94,     0,     0,
       0,   -94,     0,     0,     0,     0,   -94,     0,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,   -94,
     -94,  -119,     0,     0,     0,     0,     0,  -119,     0,     0,
    -119,     0,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,     0,     0,     0,  -119,
       0,     0,     0,     0,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -105,
       0,     0,     0,     0,     0,  -105,     0,     0,  -105,     0,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,   -68,     0,     0,     0,     0,     0,   -68,
       0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -70,     0,     0,
       0,     0,     0,   -70,     0,     0,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -69,     0,     0,     0,     0,     0,   -69,     0,     0,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -71,     0,     0,     0,     0,
       0,   -71,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -95,
       0,     0,     0,     0,     0,     0,     0,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,  -105,     0,     0,     0,  -105,     0,     0,
       0,     0,  -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,   -68,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -70,     0,     0,     0,   -70,     0,     0,     0,     0,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -69,     0,     0,     0,   -69,
       0,     0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -71,
       0,     0,     0,   -71,     0,     0,     0,     0,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -95,     0,     0,     0,     0,     0,   -95,
       0,     0,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,   -95,     0,     0,     0,     0,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,  -107,     0,     0,     0,     0,     0,  -107,     0,     0,
    -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,     0,     0,     0,  -107,
       0,     0,     0,     0,  -107,     0,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -108,
       0,     0,     0,     0,     0,  -108,     0,     0,  -108,     0,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,     0,     0,     0,  -108,     0,     0,
       0,     0,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,   -92,     0,     0,
       0,     0,     0,     0,     0,   -92,   -92,     0,   -92,   -92,
     -92,   -92,   -92,   -92,   124,   -92,   -92,   -92,   -92,   -92,
     -92,     0,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   -94,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -94,
     -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   124,   -94,
     -94,   -94,   -94,   -94,   -94,     0,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   124,   -90,   -90,   -90,   -90,
     -90,   -90,     0,   -91,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,   -93,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -95,
     -93,   -93,   -93,   -93,   -93,   -93,     0,   -95,   -95,     0,
     -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   402,     0,     0,     0,     0,     0,   -88,
       0,     0,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -92,     0,     0,
       0,     0,     0,   -92,     0,     0,   -92,     0,   -92,   -92,
     -92,   -92,   -92,   -92,  -118,   -92,   -92,   -92,   -92,   -92,
     -92,     0,  -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,
    -118,  -116,  -118,  -118,  -118,  -118,  -118,  -118,     0,  -116,
    -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,  -115,  -116,
    -116,  -116,  -116,  -116,  -116,     0,  -115,  -115,     0,  -115,
    -115,  -115,  -115,  -115,  -115,  -117,  -115,  -115,  -115,  -115,
    -115,  -115,     0,  -117,  -117,     0,  -117,  -117,  -117,  -117,
    -117,  -117,  -102,  -117,  -117,  -117,  -117,  -117,  -117,     0,
    -102,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,   -64,
    -102,  -102,  -102,  -102,  -102,  -102,     0,   -64,   -64,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -65,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -66,   -65,   -65,   -65,   -65,   -65,   -65,
       0,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,  -103,   -67,   -67,
     -67,   -67,   -67,   -67,     0,  -103,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,  -101,  -103,  -103,  -103,  -103,  -103,
    -103,     0,  -101,  -101,     0,  -101,  -101,  -101,  -101,  -101,
    -101,  -106,  -101,  -101,  -101,  -101,  -101,  -101,     0,  -106,
    -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,     0,  -106,
    -106,  -106,  -106,  -106,  -106,   466,     0,     0,     0,   -88,
       0,     0,     0,     0,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -92,
       0,     0,     0,   -92,     0,     0,     0,     0,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,  -118,     0,     0,     0,     0,     0,  -118,
       0,     0,  -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,
       0,  -118,  -118,  -118,  -118,  -118,  -118,  -116,     0,     0,
       0,     0,     0,  -116,     0,     0,  -116,     0,  -116,  -116,
    -116,  -116,  -116,  -116,     0,  -116,  -116,  -116,  -116,  -116,
    -116,  -115,     0,     0,     0,     0,     0,  -115,     0,     0,
    -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,     0,  -115,
    -115,  -115,  -115,  -115,  -115,  -117,     0,     0,     0,     0,
       0,  -117,     0,     0,  -117,     0,  -117,  -117,  -117,  -117,
    -117,  -117,     0,  -117,  -117,  -117,  -117,  -117,  -117,  -102,
       0,     0,     0,     0,     0,  -102,     0,     0,  -102,     0,
    -102,  -102,  -102,  -102,  -102,  -102,     0,  -102,  -102,  -102,
    -102,  -102,  -102,   -64,     0,     0,     0,     0,     0,   -64,
       0,     0,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -65,     0,     0,
       0,     0,     0,   -65,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -66,     0,     0,     0,     0,     0,   -66,     0,     0,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,     0,
       0,   -67,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   402,
       0,     0,     0,     0,     0,   -89,     0,     0,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,
     -89,   -89,   -89,   -94,     0,     0,     0,     0,     0,   -94,
       0,     0,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,
       0,   -94,   -94,   -94,   -94,   -94,   -94,  -103,     0,     0,
       0,     0,     0,  -103,     0,     0,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,  -101,     0,     0,     0,     0,     0,  -101,     0,     0,
    -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,  -101,
    -101,  -101,  -101,  -101,  -101,  -106,     0,     0,     0,     0,
       0,  -106,     0,     0,  -106,     0,  -106,  -106,  -106,  -106,
    -106,  -106,  -104,  -106,  -106,  -106,  -106,  -106,  -106,     0,
    -104,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,     0,
    -104,  -104,  -104,  -104,  -104,  -104,  -118,     0,     0,     0,
    -118,     0,     0,     0,     0,  -118,     0,  -118,  -118,  -118,
    -118,  -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,
    -116,     0,     0,     0,  -116,     0,     0,     0,     0,  -116,
       0,  -116,  -116,  -116,  -116,  -116,  -116,     0,  -116,  -116,
    -116,  -116,  -116,  -116,  -115,     0,     0,     0,  -115,     0,
       0,     0,     0,  -115,     0,  -115,  -115,  -115,  -115,  -115,
    -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,  -117,     0,
       0,     0,  -117,     0,     0,     0,     0,  -117,     0,  -117,
    -117,  -117,  -117,  -117,  -117,     0,  -117,  -117,  -117,  -117,
    -117,  -117,  -102,     0,     0,     0,  -102,     0,     0,     0,
       0,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,     0,
    -102,  -102,  -102,  -102,  -102,  -102,   -64,     0,     0,     0,
     -64,     0,     0,     0,     0,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -65,     0,     0,     0,   -65,     0,     0,     0,     0,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -66,     0,     0,     0,   -66,     0,
       0,     0,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,
       0,     0,   -67,     0,     0,     0,     0,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   466,     0,     0,     0,   -89,     0,     0,     0,
       0,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -94,     0,     0,     0,
     -94,     0,     0,     0,     0,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,
    -103,     0,     0,     0,  -103,     0,     0,     0,     0,  -103,
       0,  -103,  -103,  -103,  -103,  -103,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,  -101,     0,     0,     0,  -101,     0,
       0,     0,     0,  -101,     0,  -101,  -101,  -101,  -101,  -101,
    -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,  -106,     0,
       0,     0,  -106,     0,     0,     0,     0,  -106,     0,  -106,
    -106,  -106,  -106,  -106,  -106,     0,  -106,  -106,  -106,  -106,
    -106,  -106,  -104,     0,     0,     0,     0,     0,  -104,     0,
       0,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,     0,
    -104,  -104,  -104,  -104,  -104,  -104,   402,     0,     0,     0,
       0,     0,   -90,     0,     0,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     402,     0,     0,     0,     0,     0,   -91,     0,     0,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -93,     0,     0,     0,     0,     0,
     -93,     0,     0,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,  -119,   -93,   -93,   -93,   -93,   -93,   -93,     0,  -119,
    -119,     0,  -119,  -119,  -119,  -119,  -119,  -119,     0,  -119,
    -119,  -119,  -119,  -119,  -119,  -104,     0,     0,     0,  -104,
       0,     0,     0,     0,  -104,     0,  -104,  -104,  -104,  -104,
    -104,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,   466,
       0,     0,     0,   -90,     0,     0,     0,     0,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,   466,     0,     0,     0,   -91,     0,     0,
       0,     0,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -93,     0,     0,
       0,   -93,     0,     0,     0,     0,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -95,     0,     0,     0,     0,     0,   -95,     0,     0,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,     0,   -95,
     -95,   -95,   -95,   -95,   -95,  -119,     0,     0,     0,     0,
       0,  -119,     0,     0,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,  -105,  -119,  -119,  -119,  -119,  -119,  -119,     0,
    -105,  -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,   -68,
    -105,  -105,  -105,  -105,  -105,  -105,     0,   -68,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -70,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -69,   -70,   -70,   -70,   -70,   -70,   -70,
       0,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -71,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -71,   -71,
       0,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -95,     0,     0,     0,   -95,     0,
       0,     0,     0,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,  -119,     0,
       0,     0,  -119,     0,     0,     0,     0,  -119,     0,  -119,
    -119,  -119,  -119,  -119,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,  -105,     0,     0,     0,     0,     0,  -105,     0,
       0,  -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,     0,
    -105,  -105,  -105,  -105,  -105,  -105,   -68,     0,     0,     0,
       0,     0,   -68,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -69,     0,     0,     0,     0,     0,
     -69,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -71,     0,
       0,     0,     0,     0,   -71,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,  -105,     0,     0,     0,  -105,     0,     0,     0,
       0,  -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,     0,
    -105,  -105,  -105,  -105,  -105,  -105,   -68,     0,     0,     0,
     -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -70,     0,     0,     0,   -70,     0,     0,     0,     0,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -69,     0,     0,     0,   -69,     0,
       0,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -71,     0,
       0,     0,   -71,     0,     0,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,  -107,   -71,   -71,   -71,   -71,
     -71,   -71,     0,  -107,  -107,     0,  -107,  -107,  -107,  -107,
    -107,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
       0,     0,     0,     0,     0,  -107,     0,     0,  -107,     0,
    -107,  -107,  -107,  -107,  -107,  -107,  -108,  -107,  -107,  -107,
    -107,  -107,  -107,     0,  -108,  -108,     0,  -108,  -108,  -108,
    -108,  -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,
    -107,     0,     0,     0,  -107,     0,     0,     0,     0,  -107,
       0,  -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,
    -107,  -107,  -107,  -107,  -108,     0,     0,     0,     0,     0,
    -108,     0,     0,  -108,     0,  -108,  -108,  -108,  -108,  -108,
    -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -108,     0,
       0,     0,  -108,     0,     0,     0,     0,  -108,     0,  -108,
    -108,  -108,  -108,  -108,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,   -86,     0,     0,   -86,     0,   400,   401,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -82,     0,     0,   -82,     0,     0,     0,   396,   397,   398,
     399,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,
       0,   122,   123,   -83,   -83,   -83,   -83,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,   -84,     0,   122,   123,   -84,
     -84,   -84,   -84,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,   -85,     0,   122,   123,   -85,   -85,   -85,   -85,     0,
     -85,   -85,   -85,   -85,   -85,   -85,   -87,   -87,     0,   122,
     123,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -86,   -86,     0,   122,   123,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -78,   -78,
       0,     0,     0,   118,   119,   120,   121,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -79,   -79,     0,     0,     0,   118,
     119,   120,   121,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -80,   -80,     0,     0,     0,   118,   119,   120,   121,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -81,   -81,     0,     0,
       0,   118,   119,   120,   121,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -82,   -82,     0,     0,     0,   118,   119,   120,
     121,     0,   -82,   -82,   -82,   -82,   -82,   -82
};

static const yytype_int16 yycheck[] =
{
      22,    17,     8,    54,    25,   175,     0,    23,   231,   245,
     104,     8,     5,    35,     0,    21,     5,    14,     4,    25,
      25,     3,   181,   350,    21,   352,     8,     5,    50,    51,
      23,    17,    54,   127,    23,    26,   272,    23,     3,     4,
       5,     6,     7,    25,    26,    23,   282,    25,    25,     5,
      28,    29,    17,    18,    19,   135,    21,    22,     5,     5,
      25,    25,     1,    28,     3,    30,     5,    23,    25,    34,
      92,     1,   308,    95,    96,     5,    23,    25,    25,    85,
      26,    28,    29,   181,   181,    25,   413,    26,    85,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,     3,    26,    92,   104,    29,     8,
       5,    26,   192,   135,    29,   338,     5,     0,    25,   141,
     142,     0,     5,     2,    25,     4,    25,     3,    23,     5,
     127,    89,     8,   155,    25,     3,     3,    26,    17,   375,
       8,     8,   181,    22,    23,    26,     1,    25,     3,    25,
       5,   387,    28,    26,     5,     3,    29,    25,    25,   181,
      28,    28,   184,     3,     3,   181,    28,    29,     8,     8,
     192,    26,    23,     3,    26,    54,   198,    29,     8,   201,
     350,   203,   352,    25,    26,    25,    25,    29,    28,    28,
     212,    26,   214,     3,   216,    25,   218,     5,    28,    26,
       1,   295,     3,   439,     5,    26,     1,    26,     3,   231,
       5,   232,    92,    92,     0,   451,    25,    26,     5,     5,
      29,     5,   180,    26,   246,    26,   232,   307,   225,     5,
       0,    26,   229,    25,    26,     5,    23,    29,    25,    23,
     198,    28,    29,   413,    28,    29,    26,    23,    26,    25,
     420,   273,    28,    29,     3,    26,     5,     5,     0,     8,
     218,   141,   142,     5,    28,     0,     0,   288,     0,   181,
       5,     5,   184,     5,    28,    23,    25,    25,     0,   359,
      28,    29,   288,     5,    28,   307,    25,   309,   310,   201,
       5,   203,     0,    22,     0,   181,    26,     5,   295,     5,
     212,   181,   214,   354,   216,    25,    35,     0,    23,   331,
      25,     5,     5,    28,    29,    25,   338,    26,     0,    26,
       5,    50,    51,     5,   404,    54,    28,    29,     3,    23,
       5,    25,   354,     8,    28,    29,     3,    25,    23,    25,
      25,     8,   422,    28,    29,    25,    26,    25,    24,    29,
      25,    26,   231,    29,   376,    24,   235,    25,    25,    26,
      29,    24,    24,    92,    28,    29,    29,    29,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,    25,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    24,     3,    24,
       3,   359,    29,     8,    29,     8,   135,     3,     4,     3,
       6,     7,   141,   142,     8,    28,    29,    26,   440,   499,
      25,    26,    25,    26,    26,    21,   155,   478,    25,    25,
      25,    25,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   404,    25,    26,    25,
     472,    29,   181,   475,   476,   184,   478,     3,    25,   338,
       3,    24,     8,   192,   422,     8,    29,   547,   627,   198,
      25,   630,   201,    24,   203,   354,   498,    25,    29,    25,
      28,    29,    25,   212,    25,   214,   472,   216,    25,   218,
      25,    24,    24,   652,    24,   654,    29,    29,    24,    29,
      24,    26,   231,    29,    29,    29,   528,   529,    25,   668,
     590,   670,    25,   672,    24,    28,    29,   246,   247,    29,
      28,    29,   544,    25,   546,   605,    28,    29,    26,   627,
     627,    29,   630,   630,    25,    26,    25,   617,    29,    25,
      26,   499,    26,    29,   273,    25,    26,    24,    26,    29,
     572,   573,    29,     3,   652,   652,   654,   654,    28,    29,
     640,    38,    39,    40,    41,    42,    43,    26,   590,   649,
     668,   668,   670,   670,   672,   672,   598,    25,   307,    26,
     309,   310,    29,   605,    26,    25,   544,    29,   627,   547,
      25,   630,   472,   472,    25,   617,    25,    26,    26,   478,
      29,    29,   331,   625,   626,   627,     3,    26,   630,   338,
      29,   627,    26,   652,   630,   654,    28,    29,   640,    38,
      39,    40,    41,    42,    43,   354,    26,   649,    26,   668,
     652,   670,   654,   672,    28,    29,   652,    25,   654,   661,
      28,    29,   664,     3,   666,    26,   668,   376,   670,    25,
     672,    25,   668,   675,   670,    25,   672,   679,    28,    29,
      25,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,    25,    26,    25,    25,    29,    28,
      29,    26,     3,     4,     5,     6,     7,    25,    25,    26,
      28,    29,   572,   573,    25,    26,    17,    18,    19,    26,
      21,    22,    29,   661,    25,     3,   664,    26,   666,    30,
      29,   440,    26,    34,    26,   627,    25,   675,   630,    28,
      29,   679,    25,    26,    26,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,    26,
     652,   627,   654,   472,   630,    26,    26,   627,    29,   478,
     630,    25,    26,    25,    26,    29,   668,    29,   670,    26,
     672,    25,    26,    26,    26,    29,   652,    29,   654,   498,
      26,    26,   652,    29,   654,    26,    26,    26,    29,    29,
      29,     3,   668,    26,   670,    26,   672,    26,   668,    26,
     670,    26,   672,    26,     3,     4,    29,     6,     7,   528,
     529,    26,    26,    26,    29,    29,    29,    26,    17,    18,
      19,    28,    21,    22,    23,   544,    25,   546,     1,     4,
       3,     4,     5,     6,     7,    34,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    28,    21,    22,
      23,    24,    25,   572,   573,    28,    26,    30,   134,    29,
      26,    34,    26,    29,    26,    29,    26,    29,    85,    29,
      28,   590,    26,     3,     4,    29,     6,     7,    26,   598,
     599,    29,    26,   101,    22,    29,   605,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    35,   617,    26,
      30,    -1,    29,    -1,    34,    -1,   625,   626,   627,    28,
      29,   630,    50,    51,    28,    29,    54,    26,    -1,    26,
      29,   640,    29,    -1,    38,    39,    40,    41,    42,    43,
     649,    26,    -1,   652,    29,   654,    26,    26,    26,    29,
      29,    29,   661,    26,    -1,   664,    29,   666,    -1,   668,
      -1,   670,    24,   672,    92,    26,   675,    29,    29,    -1,
     679,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    26,    26,
      26,    29,    29,    29,    -1,    26,    24,   135,    29,    26,
      -1,    29,    29,   141,   142,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    26,   155,     1,    29,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,   181,    -1,    28,   184,    30,    -1,    26,
      26,    34,    29,    29,   192,    26,    26,    -1,    29,    29,
     198,    26,    -1,   201,    29,   203,    26,     3,     4,    29,
       6,     7,    26,    -1,   212,    29,   214,    -1,   216,    -1,
     218,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      28,    29,    26,   231,    30,    29,    26,    26,    34,    29,
      29,     1,    -1,     3,     4,     5,     6,     7,   246,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    25,    26,    28,    26,
      30,    -1,    29,    26,    34,   273,    29,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    28,    29,    28,    26,    30,    -1,    29,   307,
      34,   309,   310,    26,    -1,    26,    29,    22,    29,    26,
       3,     4,    29,     6,     7,    26,    26,    -1,    29,    29,
      35,    28,    29,   331,    17,    18,    19,    -1,    21,    22,
     338,    26,    25,    26,    29,    50,    51,    30,    -1,    54,
      26,    34,     1,    29,     3,     4,   354,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    -1,    25,    -1,   376,    28,
      26,    30,    -1,    29,    -1,    34,    -1,    92,    28,    29,
      28,    29,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,    -1,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    25,    26,    28,    29,    25,    26,    25,    26,    24,
     135,    25,    26,    -1,    29,    -1,   141,   142,    33,    34,
      35,    36,   440,    38,    39,    40,    41,    42,    43,    -1,
     155,    25,    26,    25,    26,    -1,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
      25,    26,    25,    26,   472,    -1,   181,    25,    26,   184,
     478,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,   201,    -1,   203,    -1,
     498,     3,     4,    -1,     6,     7,    -1,   212,    -1,   214,
      -1,   216,    -1,   218,    -1,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,   231,    -1,    30,    -1,
     528,   529,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,   544,    -1,   546,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   273,    21,
      22,    23,    24,    25,   572,   573,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   590,    -1,     3,     4,    -1,     6,     7,    -1,
     598,    -1,   307,    -1,   309,   310,    -1,   605,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,   617,
      -1,    30,    -1,    -1,    -1,    34,   331,   625,   626,   627,
      -1,    26,   630,   338,    29,    -1,    31,    32,    33,    34,
      35,    36,   640,    38,    39,    40,    41,    42,    43,   354,
      -1,   649,    -1,    -1,   652,    -1,   654,    -1,    -1,    -1,
      -1,    -1,    -1,   661,    -1,    -1,   664,    -1,   666,    -1,
     668,   376,   670,    -1,   672,    -1,    -1,   675,    -1,    -1,
      -1,   679,    -1,    -1,    -1,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    24,
      -1,    34,    -1,    -1,    29,   440,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,   478,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   498,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,   528,   529,    -1,    17,    18,    19,    -1,
      21,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,   544,
      -1,   546,     1,    34,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,   572,   573,    28,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   590,    -1,     3,     4,    -1,
       6,     7,    -1,   598,    -1,    -1,    -1,    -1,    22,    -1,
     605,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    35,   617,    -1,    30,    -1,    -1,    -1,    34,    -1,
     625,   626,   627,    -1,    -1,   630,    50,    51,    -1,    -1,
      54,    -1,    -1,    -1,    -1,   640,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   649,    -1,    -1,   652,    -1,   654,
      -1,    -1,    -1,    -1,    -1,    -1,   661,    -1,    -1,   664,
      -1,   666,    -1,   668,    -1,   670,    24,   672,    92,    -1,
     675,    29,    -1,    -1,   679,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,   135,    -1,    -1,    -1,    29,    -1,   141,   142,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      -1,   155,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,   181,    -1,    28,
     184,    30,    -1,    -1,    -1,    34,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,   198,    -1,    -1,   201,    -1,   203,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,   212,    -1,
     214,    -1,   216,    -1,   218,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,   231,    30,    -1,
      -1,    -1,    34,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,   246,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,   273,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,   307,    34,   309,   310,    -1,    -1,    -1,
      -1,    22,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,   331,    17,    18,
      19,    -1,    21,    22,   338,    -1,    25,    26,    -1,    50,
      51,    30,    -1,    54,    -1,    34,     1,    -1,     3,     4,
     354,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    -1,
      25,    -1,   376,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,    92,    -1,    -1,    -1,    -1,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,    -1,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,   135,    -1,    -1,    -1,    29,    -1,
     141,   142,    33,    34,    35,    36,   440,    38,    39,    40,
      41,    42,    43,    -1,   155,    -1,    -1,    -1,    -1,    -1,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,    -1,    -1,    -1,    -1,   472,    -1,
     181,    -1,    -1,   184,   478,    -1,    -1,    -1,    -1,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
     201,    -1,   203,    -1,   498,     3,     4,    -1,     6,     7,
      -1,   212,    -1,   214,    -1,   216,    -1,   218,    -1,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
     231,    -1,    30,    -1,   528,   529,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
     544,    -1,   546,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   273,    21,    22,    23,    24,    25,   572,   573,
      28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   590,    -1,     3,     4,
      -1,     6,     7,    -1,   598,    -1,   307,    -1,   309,   310,
      -1,   605,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,   617,    -1,    30,    -1,    -1,    -1,    34,
     331,   625,   626,   627,    -1,    26,   630,   338,    29,    -1,
      31,    32,    33,    34,    35,    36,   640,    38,    39,    40,
      41,    42,    43,   354,    -1,   649,    -1,    -1,   652,    -1,
     654,    -1,    -1,    -1,    -1,    -1,    -1,   661,    -1,    -1,
     664,    -1,   666,    -1,   668,   376,   670,    -1,   672,    -1,
      -1,   675,    -1,    -1,    -1,   679,    -1,    -1,    -1,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    24,    -1,    34,    -1,    -1,    29,   440,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,    -1,    -1,    -1,
      -1,   472,    -1,    -1,    -1,    -1,    -1,   478,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   498,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,   528,   529,    -1,
      17,    18,    19,    -1,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,   544,    -1,   546,     1,    34,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,   572,   573,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   590,
      -1,     3,     4,    -1,     6,     7,    -1,   598,    -1,    -1,
      -1,    -1,    22,    -1,   605,    17,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,    35,   617,    -1,    30,    -1,
      -1,    -1,    34,    -1,   625,   626,   627,    -1,    -1,   630,
      50,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,   640,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   649,    -1,
      -1,   652,    -1,   654,    -1,    -1,    -1,    -1,    -1,    -1,
     661,    -1,    -1,   664,    -1,   666,    -1,   668,    -1,   670,
      24,   672,    92,    -1,   675,    29,    -1,    -1,   679,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    26,    -1,    -1,    29,
      -1,   141,   142,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    -1,   155,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,   181,    -1,    28,   184,    30,    -1,    -1,    -1,    34,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,   201,    -1,   203,    -1,     3,     4,    -1,     6,     7,
      -1,    -1,   212,    -1,   214,    -1,   216,    -1,   218,    17,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,   231,    30,    -1,    -1,    -1,    34,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,   246,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,   273,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,   307,    34,   309,
     310,    28,    29,    -1,    -1,    22,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    -1,    35,    -1,
      -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    54,     3,     4,
      -1,     6,     7,    -1,   354,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    -1,
      25,    -1,    -1,    28,    -1,    30,   376,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,    -1,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    26,
      -1,    -1,    29,    -1,   141,   142,    33,    34,    35,    36,
     440,    38,    39,    40,    41,    42,    43,    -1,   155,    -1,
      -1,    -1,    -1,    -1,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,    -1,    -1,
      -1,    -1,   472,    -1,   181,    -1,    -1,   184,   478,    -1,
      -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
      -1,   198,    -1,    -1,   201,    -1,   203,    -1,   498,    -1,
       3,     4,    -1,     6,     7,   212,    -1,   214,    -1,   216,
      -1,   218,    -1,    -1,    17,    18,    19,    -1,    21,    22,
      -1,    -1,    25,    -1,   231,    28,    -1,    30,   528,   529,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    -1,    -1,    -1,   544,    -1,   546,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   273,    21,    22,    23,
      24,    25,   572,   573,    28,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     590,    -1,     3,     4,    -1,     6,     7,    -1,   598,    -1,
     307,    -1,   309,   310,    -1,   605,    17,    18,    19,    -1,
      21,    22,    -1,    -1,    25,    26,    -1,   617,    -1,    30,
      -1,    -1,    -1,    34,   331,   625,   626,   627,    -1,    26,
     630,   338,    29,    -1,    31,    32,    33,    34,    35,    36,
     640,    38,    39,    40,    41,    42,    43,   354,    -1,   649,
      -1,    -1,   652,    -1,   654,    -1,    -1,    -1,    -1,    -1,
      -1,   661,    -1,    -1,   664,    -1,   666,    -1,   668,   376,
     670,    -1,   672,    -1,    -1,   675,    -1,    -1,    -1,   679,
      -1,    -1,    -1,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    24,    -1,    34,
      -1,    -1,    29,   440,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,    -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,
      -1,   478,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   498,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,   528,   529,    -1,    17,    18,    19,    -1,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,   544,    -1,   546,
       1,    34,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,   572,   573,    28,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   590,    -1,    -1,     3,     4,    -1,     6,
       7,   598,    -1,    -1,    -1,    -1,    22,    -1,   605,    -1,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    35,
     617,    28,    -1,    30,    -1,    -1,    -1,    34,   625,   626,
     627,    -1,    -1,   630,    50,    51,    -1,    -1,    54,    -1,
      -1,    -1,    -1,   640,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   649,    -1,    -1,   652,    -1,   654,    -1,    -1,
      -1,    -1,    -1,    -1,   661,    -1,    -1,   664,    -1,   666,
      -1,   668,    -1,   670,    -1,   672,    92,    26,   675,    -1,
      29,    -1,   679,    -1,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      26,    -1,    -1,    29,    -1,   141,   142,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    -1,   155,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,   181,    -1,    28,   184,    30,
      -1,    -1,    -1,    34,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,   201,    -1,   203,    -1,     3,
       4,    -1,     6,     7,    -1,    -1,   212,    -1,   214,    -1,
     216,    -1,   218,    17,    18,    19,    -1,    21,    22,    -1,
      -1,    25,    -1,    -1,    28,   231,    30,    -1,    -1,    -1,
      34,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
     246,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    34,   273,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,   307,    34,   309,   310,    -1,    -1,    -1,    -1,    22,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,   331,    17,    18,    19,    -1,
      21,    22,   338,    -1,    25,    26,    -1,    50,    51,    30,
      -1,    54,    -1,    34,    -1,    -1,     3,     4,   354,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    -1,
     376,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    92,
      -1,    -1,    -1,    -1,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,    -1,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,    26,    -1,    -1,    29,    -1,   141,   142,
      33,    34,    35,    36,   440,    38,    39,    40,    41,    42,
      43,    -1,   155,    -1,    -1,    -1,    -1,    -1,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,    -1,    -1,    -1,    -1,   472,    -1,   181,    -1,
      -1,   184,   478,    -1,    -1,    -1,    -1,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,   201,    -1,
     203,    -1,   498,     3,     4,    -1,     6,     7,    -1,   212,
      -1,   214,    -1,   216,    -1,   218,    -1,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,   231,    -1,
      30,    -1,   528,   529,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,   544,    -1,
     546,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
     273,    21,    22,    23,    24,    25,   572,   573,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   590,    -1,     3,     4,    -1,     6,
       7,    -1,   598,    -1,   307,    -1,   309,   310,    -1,   605,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    26,
      22,   617,    -1,    30,    -1,    -1,    -1,    34,   331,   625,
     626,   627,    -1,    35,   630,   338,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   640,    -1,    -1,    -1,    50,    -1,
      -1,   354,    54,   649,    -1,    -1,   652,    -1,   654,    -1,
      -1,    -1,    -1,    -1,    -1,   661,    -1,    -1,   664,    -1,
     666,    -1,   668,   376,   670,    -1,   672,    -1,    -1,   675,
      -1,    -1,    20,   679,    -1,    -1,    -1,    25,    26,    -1,
      92,    29,    -1,    31,    32,    33,    34,    35,    36,   402,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    -1,   440,    -1,   141,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,    -1,    -1,    -1,    -1,   472,
      -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,   181,
      -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,   498,   198,    -1,    -1,   201,
      -1,   203,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
     212,    -1,   214,    -1,   216,    -1,   218,    -1,    -1,    17,
      18,    19,    -1,    21,    22,   528,   529,    25,    -1,   231,
      -1,    -1,    30,    -1,     3,     4,    34,     6,     7,    -1,
      -1,   544,    -1,   546,   246,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,     3,
       4,    30,     6,     7,    -1,    34,    -1,    -1,    -1,   572,
     573,    -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,   590,    -1,    -1,
      34,    -1,    -1,    -1,    -1,   598,   599,    -1,    -1,    -1,
      -1,    -1,   605,    -1,    -1,   307,    -1,   309,    -1,    -1,
      -1,    -1,    -1,    22,   617,    -1,     3,     4,    -1,     6,
       7,    -1,   625,   626,   627,    -1,    35,   630,    -1,   331,
      17,    18,    19,    -1,    21,    22,   338,   640,    25,    -1,
      -1,    -1,    -1,    30,    -1,    54,   649,    34,    -1,   652,
      -1,   654,   354,    -1,    -1,    -1,    -1,    -1,   661,    -1,
      -1,   664,    -1,   666,    -1,   668,    -1,   670,    -1,   672,
       3,     4,   675,     6,     7,    -1,   679,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    17,    18,    19,    -1,    21,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,   400,   401,
      -1,    34,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,    17,    18,    19,    -1,    21,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,    -1,   467,    -1,    -1,    -1,    -1,
     472,    -1,   181,    -1,    -1,   184,   478,    -1,    -1,    -1,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,
      -1,    -1,   201,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   214,    -1,   216,    -1,   218,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,   231,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,   544,    34,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
     572,   573,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,   590,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,
      17,    18,    19,   605,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    22,   617,    -1,    34,    -1,    -1,
      -1,    -1,   331,    -1,    -1,   627,    -1,    35,   630,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   640,    -1,
      -1,    -1,    -1,    -1,    -1,   354,    54,   649,    -1,    -1,
     652,    -1,   654,    -1,    -1,    -1,    -1,    -1,    -1,   661,
      -1,    -1,   664,    -1,   666,    -1,   668,    -1,   670,    -1,
     672,    -1,    -1,   675,    -1,    -1,    -1,   679,    -1,     3,
       4,    -1,     6,     7,    92,    -1,    -1,   396,   397,   398,
     399,    -1,    -1,    17,    18,    19,    -1,    21,    22,    23,
      -1,    25,    -1,   111,   112,   113,   114,   115,   116,   117,
      34,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    -1,   141,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,    -1,    -1,    -1,   467,    -1,
      -1,    -1,    -1,   472,    -1,    -1,    -1,     3,     4,   478,
       6,     7,    -1,   181,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    17,    18,    19,   192,    21,    22,    23,    -1,    25,
     198,    -1,    -1,   201,    -1,   203,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,   212,    -1,   214,    -1,   216,    -1,
     218,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   231,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,   544,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   572,   573,    17,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,     3,     4,    -1,     6,     7,
      -1,   590,    34,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,   605,    25,    -1,   307,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,   617,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,   627,    -1,
      -1,   630,    22,   331,    17,    18,    19,    -1,    21,    22,
     338,   640,    25,    -1,    -1,    35,    -1,    -1,    -1,    -1,
     649,    34,    -1,   652,    -1,   654,   354,    -1,    -1,    -1,
      -1,    -1,   661,    -1,    54,   664,    -1,   666,    -1,   668,
      -1,   670,    -1,   672,    26,    -1,   675,    29,    -1,    -1,
     679,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,   390,   391,   392,   393,   394,   395,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,   111,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,   125,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,    -1,    -1,    -1,   454,   455,   456,   457,
     458,   459,    -1,    -1,    -1,    -1,    -1,     3,     4,   467,
       6,     7,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,
     478,    17,    18,    19,    -1,    21,    22,    -1,    -1,    25,
     180,   181,    -1,    -1,   184,    -1,    -1,    -1,    34,    -1,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,   201,    -1,   203,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,   212,    -1,   214,    -1,   216,    22,   218,    -1,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    -1,
      35,   231,    -1,    -1,    -1,    -1,   544,    34,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    17,    18,    19,    -1,    21,    22,     3,     4,
      25,     6,     7,    -1,   572,   573,    -1,    -1,    -1,    34,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    -1,
      25,    -1,   590,    -1,    -1,    -1,    -1,    92,    -1,    34,
      -1,    -1,    -1,    -1,   294,    -1,    -1,   605,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   307,    -1,   617,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   627,
     125,    -1,   630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   331,   640,    -1,    -1,    -1,   141,   142,   338,    -1,
      -1,   649,    -1,    -1,   652,    -1,   654,    -1,    -1,    -1,
      -1,    -1,    -1,   661,   354,    -1,   664,    -1,   666,   359,
     668,    -1,   670,    -1,   672,    -1,    -1,   675,    -1,    -1,
      -1,   679,    -1,    -1,    -1,    -1,   181,    -1,    -1,   184,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,   198,    -1,    -1,   201,    -1,   203,    -1,
      -1,    -1,    -1,   403,   404,    -1,    -1,   212,    -1,   214,
      -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   422,    -1,    -1,     1,   231,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,   467,    -1,    -1,
      -1,    -1,   472,    -1,    -1,    17,    18,    19,   478,    21,
      22,    26,    -1,    25,    29,    -1,    31,    32,    33,    34,
      35,    36,    34,    38,    39,    40,    41,    42,    43,   499,
      35,     1,   307,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    48,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,   331,    -1,    28,    -1,
      30,    -1,    -1,   338,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   544,    -1,    -1,   547,    -1,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    98,    99,   100,    20,    -1,    -1,    -1,
      -1,    25,   572,   573,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     590,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   605,   141,   142,    28,    29,
      -1,   146,    -1,    33,    34,    35,    36,   617,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,   627,    -1,    -1,
     630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     640,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   649,
      -1,    -1,   652,    -1,   654,    -1,    -1,    -1,    -1,    -1,
      -1,   661,   467,    -1,   664,    -1,   666,   472,   668,    -1,
     670,    -1,   672,   478,    -1,   675,    -1,    -1,     1,   679,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    20,    -1,    28,    -1,    30,    25,    26,
     245,    34,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,   544,
      20,    -1,    -1,    -1,    24,    25,    -1,   282,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,   572,   573,    -1,
      -1,    -1,    24,   308,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,   590,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    20,   331,    -1,    -1,    -1,
     605,    -1,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,   617,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,   627,    -1,    -1,   630,   361,   362,   363,    -1,
      -1,    -1,    -1,    -1,    -1,   640,    -1,    -1,    -1,    -1,
     375,    -1,    -1,    -1,   649,    -1,    -1,   652,    -1,   654,
      -1,    -1,   387,    -1,    -1,    -1,   661,    -1,    -1,   664,
      -1,   666,    -1,   668,    -1,   670,    -1,   672,    -1,    -1,
     675,   406,   407,   408,   679,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   424,
     425,   426,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   439,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,   451,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      34,    -1,    20,    -1,    -1,    -1,   471,   472,   473,   474,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   501,   502,   503,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,   549,   550,   551,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,   572,   573,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    20,    28,    -1,    30,    -1,
      -1,    -1,    34,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,   627,   628,   629,   630,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    24,    -1,    -1,    -1,   652,    29,   654,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,   668,    -1,   670,     1,   672,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
       1,    34,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,     1,    34,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,     1,    34,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
       1,    34,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,     1,    34,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,     1,    34,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
       1,    34,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,     1,    34,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,     1,    34,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
       1,    34,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,     1,    34,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,     1,    34,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    20,    28,    -1,    30,    -1,    -1,
      -1,    34,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    20,    38,    39,    40,    41,
      42,    43,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    25,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    20,    38,    39,    40,    41,    42,    43,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    20,    38,
      39,    40,    41,    42,    43,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    20,    38,    39,    40,    41,
      42,    43,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    20,    38,    39,    40,    41,    42,    43,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    20,
      38,    39,    40,    41,    42,    43,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    20,    38,    39,    40,    41,    42,    43,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    20,    38,
      39,    40,    41,    42,    43,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    20,    38,    39,    40,    41,
      42,    43,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    20,    38,    39,    40,    41,    42,    43,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    20,
      38,    39,    40,    41,    42,    43,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    20,    38,    39,    40,
      41,    42,    43,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    20,    38,    39,    40,    41,    42,    43,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      20,    38,    39,    40,    41,    42,    43,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    20,    38,    39,
      40,    41,    42,    43,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    20,    38,    39,    40,    41,    42,    43,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    20,    38,    39,    40,    41,    42,    43,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    20,    38,    39,    40,    41,    42,    43,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    20,    38,    39,    40,    41,    42,    43,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    20,
      38,    39,    40,    41,    42,    43,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    36,    20,    38,    39,    40,
      41,    42,    43,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    20,    38,    39,    40,    41,    42,    43,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      20,    38,    39,    40,    41,    42,    43,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    20,    38,    39,    40,    41,
      42,    43,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    20,    38,    39,    40,
      41,    42,    43,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      26,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    46,    47,    48,    49,    51,    52,    52,
       0,    48,     3,     8,    25,    28,    53,    54,    55,    54,
      28,    29,    23,    50,    51,    52,    61,    25,    26,    54,
       1,     3,     4,     6,     7,     9,    10,    11,    12,    14,
      15,    16,    17,    18,    19,    21,    22,    24,    25,    28,
      30,    34,    51,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    85,    86,    87,    90,    51,
      61,    54,     1,     3,    26,    52,    56,    57,    58,    25,
      76,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,     5,    76,    83,    84,    81,    85,    82,    24,    63,
      28,    29,    38,    39,    40,    41,    42,    43,    33,    34,
      35,    36,    31,    32,    20,    37,    26,    25,    54,    59,
      60,    26,    29,    26,    29,    23,    77,    88,    89,    28,
      76,    51,    65,    76,    76,     3,    25,    90,    90,     3,
      76,    76,    76,    84,    26,    26,    54,    59,    77,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    81,
      81,    82,    77,    26,    59,    25,     3,    58,    88,    26,
      29,    26,    65,    65,    26,    26,    26,    26,    26,    26,
      26,    26,    23,    82,    26,    26,    57,    24,    29,    89,
      64,    26,    76,    26,    76,    64,    28,    28,    28,    88,
      26,    24,    13,    64,    26,    64,    26,    24,    29,    64,
      64,    64,    24,     3,     8,    25,    55,     3,     8,    25,
      55,    23,    52,    28,    53,     5,     3,     4,     6,     7,
      17,    18,    19,    21,    22,    25,    30,    34,    71,    72,
      73,    74,    75,    77,    78,    79,    80,    81,    82,    85,
      86,    87,    90,     3,     4,     6,     7,    17,    18,    19,
      21,    22,    25,    34,    71,    72,    73,    74,    75,    86,
      87,    90,    25,    85,     3,     8,    55,    28,    52,    76,
       4,     6,     7,    21,    29,    25,    60,    54,     3,     4,
       6,     7,    17,    18,    19,    21,    22,    23,    25,    30,
      34,    71,    72,    73,    74,    75,    77,    78,    79,    80,
      81,    82,    85,    86,    87,    89,    90,    28,    76,    76,
       1,     9,    10,    11,    12,    14,    15,    16,    23,    28,
      61,    65,    66,    67,    68,    69,    70,    76,    89,    54,
      25,    54,    25,    24,    62,    28,    53,    28,    52,    25,
      25,    25,    25,    25,    76,    83,     3,     4,     6,     7,
      17,    18,    19,    21,    22,    25,    34,    71,    72,    73,
      74,    75,    81,    85,    86,    87,    90,    25,    82,    85,
      38,    39,    40,    41,    42,    43,    33,    34,    35,    36,
      31,    32,    20,    37,    25,    25,    25,    25,    25,    76,
      83,    82,    83,    25,    28,    53,    28,    77,    26,    59,
      25,    26,    25,    25,    25,    25,    25,    88,    76,    83,
       3,     4,     6,     7,    17,    18,    19,    21,    22,    25,
      34,    71,    72,    73,    74,    75,    81,    85,    86,    87,
      90,    25,    82,    85,    38,    39,    40,    41,    42,    43,
      33,    34,    35,    36,    31,    32,    20,    37,    28,    26,
      76,    25,    25,    25,    25,    25,    25,    24,    62,    28,
      26,     1,    26,    56,    57,    26,     1,    26,    56,    57,
      24,    28,    88,     3,    76,    76,    76,    26,    26,    25,
      25,    25,    25,    25,    76,    83,    82,    83,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      82,    77,    88,     3,    76,    76,    76,    26,    26,    26,
       1,    26,    56,    57,    28,    26,    26,    57,    88,     3,
      76,    76,    76,    24,    29,    26,    26,    25,    25,    25,
      25,    25,    76,    83,    82,    83,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    81,    81,    82,    77,
      28,    76,    51,    65,    76,    76,    90,    90,    24,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      23,    82,    88,     3,    76,    76,    76,    26,    26,    26,
      26,    26,    26,    26,    26,    23,    82,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    24,    23,    82,    88,
       3,    76,    76,    76,    26,    26,    26,    26,    65,    65,
      26,    26,    26,    26,    88,    26,    26,    26,    26,    26,
      23,    82,    88,    88,    26,    26,    26,    26,    26,    23,
      82,    64,    26,    76,    26,    76,    64,    28,    28,    28,
      24,    29,    88,    24,    29,    24,    29,    88,    13,    64,
      26,    64,    26,    24,    24,    29,    24,    24,    24,    29,
      64,    64,    64,    24,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    54,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    60,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      68,    69,    69,    70,    71,    71,    71,    71,    72,    73,
      74,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    87,    87,    87,    88,
      88,    89,    89,    89,    90,    90,    90,    90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     1,
       1,     3,     3,     4,     4,     4,     1,     3,     1,     3,
       2,     2,     1,     3,     2,     3,     4,     2,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     5,     7,     7,     6,     7,     6,     5,
       5,     5,     5,     3,     1,     1,     1,     1,     4,     4,
       4,     4,     3,     1,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     2,
       3,     3,     1,     3,     1,     4,     1,     2,     2,     2,
       1,     1,     1,     1,     2,     4,     1,     6,     7,     1,
       3,     1,     3,     4,     1,     1,     1,     1,     1,     3
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
#line 62 "main/mafralang_grammar.y"
                   { parserTree = (yyvsp[0].stmt); }
#line 3800 "mafralang_grammar.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 67 "main/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(TRANSLATION_UNIT, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3808 "mafralang_grammar.tab.c"
    break;

  case 5: /* translation_unit: error  */
#line 70 "main/mafralang_grammar.y"
        {
    yyerrok;
  }
#line 3816 "mafralang_grammar.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 81 "main/mafralang_grammar.y"
                                                                        {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[-1].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node2, (yyvsp[0].stmt), NULL, NULL);
  }
#line 3826 "mafralang_grammar.tab.c"
    break;

  case 9: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 86 "main/mafralang_grammar.y"
                                                       {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[0].stmt), NULL, NULL);
  }
#line 3835 "mafralang_grammar.tab.c"
    break;

  case 10: /* declaration_list: declaration  */
#line 93 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3843 "mafralang_grammar.tab.c"
    break;

  case 11: /* declaration_list: declaration_list declaration  */
#line 96 "main/mafralang_grammar.y"
                               {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3851 "mafralang_grammar.tab.c"
    break;

  case 12: /* declaration: declaration_specifiers SEMICOLON  */
#line 102 "main/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3859 "mafralang_grammar.tab.c"
    break;

  case 13: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 105 "main/mafralang_grammar.y"
                                                        {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3867 "mafralang_grammar.tab.c"
    break;

  case 14: /* declaration_specifiers: TYPE  */
#line 111 "main/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, NULL, (yyvsp[0].strType), NULL);
    insertType((yyvsp[0].strType));
  }
#line 3876 "mafralang_grammar.tab.c"
    break;

  case 15: /* declaration_specifiers: TYPE declaration_specifiers  */
#line 115 "main/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
    insertType((yyvsp[-1].strType));
  }
#line 3885 "mafralang_grammar.tab.c"
    break;

  case 17: /* init_declarator_list: init_declarator_list COMMA declarator  */
#line 123 "main/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(INIT_DECLARATOR_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3893 "mafralang_grammar.tab.c"
    break;

  case 19: /* direct_declarator: ID  */
#line 133 "main/mafralang_grammar.y"
      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
  }
#line 3902 "mafralang_grammar.tab.c"
    break;

  case 20: /* direct_declarator: MAIN  */
#line 137 "main/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
  }
#line 3911 "mafralang_grammar.tab.c"
    break;

  case 21: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 141 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 3919 "mafralang_grammar.tab.c"
    break;

  case 23: /* direct_declarator: direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 145 "main/mafralang_grammar.y"
                                                                      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3927 "mafralang_grammar.tab.c"
    break;

  case 24: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 148 "main/mafralang_grammar.y"
                                                                       {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3935 "mafralang_grammar.tab.c"
    break;

  case 25: /* direct_declarator: direct_declarator LEFT_PARENTHESES error RIGHT_PARENTHESES  */
#line 151 "main/mafralang_grammar.y"
                                                             {
    yyerrok;
  }
#line 3943 "mafralang_grammar.tab.c"
    break;

  case 26: /* identifier_list: ID  */
#line 157 "main/mafralang_grammar.y"
      {
    (yyval.stmt) = addNode(IDENTIFIER_LIST, NULL, NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
  }
#line 3952 "mafralang_grammar.tab.c"
    break;

  case 27: /* identifier_list: identifier_list COMMA ID  */
#line 161 "main/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(IDENTIFIER_LIST, (yyvsp[-2].stmt), NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
  }
#line 3961 "mafralang_grammar.tab.c"
    break;

  case 29: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 170 "main/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3969 "mafralang_grammar.tab.c"
    break;

  case 30: /* parameter_declaration: declaration_specifiers declarator  */
#line 176 "main/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3977 "mafralang_grammar.tab.c"
    break;

  case 31: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 179 "main/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3985 "mafralang_grammar.tab.c"
    break;

  case 32: /* abstract_declarator: direct_abstract_declarator  */
#line 185 "main/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(ABSTRACT_DECLARATOR, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3993 "mafralang_grammar.tab.c"
    break;

  case 33: /* direct_abstract_declarator: LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES  */
#line 191 "main/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4001 "mafralang_grammar.tab.c"
    break;

  case 34: /* direct_abstract_declarator: LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 194 "main/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, NULL, NULL, NULL, NULL);
  }
#line 4009 "mafralang_grammar.tab.c"
    break;

  case 35: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 197 "main/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4017 "mafralang_grammar.tab.c"
    break;

  case 36: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 200 "main/mafralang_grammar.y"
                                                                               {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4025 "mafralang_grammar.tab.c"
    break;

  case 37: /* compound_statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 206 "main/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL);
  }
#line 4033 "mafralang_grammar.tab.c"
    break;

  case 38: /* compound_statement: LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET  */
#line 209 "main/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4041 "mafralang_grammar.tab.c"
    break;

  case 40: /* block_item_list: block_item_list block_item  */
#line 216 "main/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(BLOCK_ITEM_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4049 "mafralang_grammar.tab.c"
    break;

  case 41: /* block_item: declaration  */
#line 222 "main/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4057 "mafralang_grammar.tab.c"
    break;

  case 42: /* block_item: statement  */
#line 225 "main/mafralang_grammar.y"
            {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4065 "mafralang_grammar.tab.c"
    break;

  case 43: /* statement: expression_statement  */
#line 231 "main/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4073 "mafralang_grammar.tab.c"
    break;

  case 44: /* statement: compound_statement  */
#line 234 "main/mafralang_grammar.y"
                     {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4081 "mafralang_grammar.tab.c"
    break;

  case 45: /* statement: conditional_statement  */
#line 237 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4089 "mafralang_grammar.tab.c"
    break;

  case 46: /* statement: iteration_statement  */
#line 240 "main/mafralang_grammar.y"
                      {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4097 "mafralang_grammar.tab.c"
    break;

  case 47: /* statement: input_statement  */
#line 243 "main/mafralang_grammar.y"
                  {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4105 "mafralang_grammar.tab.c"
    break;

  case 48: /* statement: output_statement  */
#line 246 "main/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4113 "mafralang_grammar.tab.c"
    break;

  case 49: /* statement: return_statement  */
#line 249 "main/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4121 "mafralang_grammar.tab.c"
    break;

  case 50: /* statement: error  */
#line 252 "main/mafralang_grammar.y"
        { 
    yyerrok;
  }
#line 4129 "mafralang_grammar.tab.c"
    break;

  case 51: /* expression_statement: SEMICOLON  */
#line 258 "main/mafralang_grammar.y"
            {
    (yyval.stmt) = NULL;
  }
#line 4137 "mafralang_grammar.tab.c"
    break;

  case 52: /* expression_statement: expression SEMICOLON  */
#line 261 "main/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4145 "mafralang_grammar.tab.c"
    break;

  case 53: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 267 "main/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4153 "mafralang_grammar.tab.c"
    break;

  case 54: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement  */
#line 270 "main/mafralang_grammar.y"
                                                                             {
    ast_node* ast_node1 = addNode(CONDITIONAL_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-2].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(CONDITIONAL_STATEMENT, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, ast_node1, ast_node2, (yyvsp[-6].strType), NULL);
  }
#line 4163 "mafralang_grammar.tab.c"
    break;

  case 55: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement  */
#line 278 "main/mafralang_grammar.y"
                                                                                                        {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4173 "mafralang_grammar.tab.c"
    break;

  case 56: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement  */
#line 283 "main/mafralang_grammar.y"
                                                                                             {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4182 "mafralang_grammar.tab.c"
    break;

  case 57: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement  */
#line 287 "main/mafralang_grammar.y"
                                                                                               {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4192 "mafralang_grammar.tab.c"
    break;

  case 58: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement  */
#line 292 "main/mafralang_grammar.y"
                                                                                    {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4201 "mafralang_grammar.tab.c"
    break;

  case 59: /* iteration_statement: FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 296 "main/mafralang_grammar.y"
                                                                 {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4209 "mafralang_grammar.tab.c"
    break;

  case 60: /* input_statement: READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 302 "main/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4217 "mafralang_grammar.tab.c"
    break;

  case 61: /* output_statement: WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 308 "main/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4225 "mafralang_grammar.tab.c"
    break;

  case 62: /* output_statement: WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 311 "main/mafralang_grammar.y"
                                                                          {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4233 "mafralang_grammar.tab.c"
    break;

  case 63: /* return_statement: RETURN expression SEMICOLON  */
#line 317 "main/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-1].stmt), NULL, (yyvsp[-2].strType), NULL);
  }
#line 4241 "mafralang_grammar.tab.c"
    break;

  case 64: /* set_expression_list: is_set_expression  */
#line 323 "main/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4249 "mafralang_grammar.tab.c"
    break;

  case 65: /* set_expression_list: add_expression  */
#line 326 "main/mafralang_grammar.y"
                 {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4257 "mafralang_grammar.tab.c"
    break;

  case 66: /* set_expression_list: remove_expression  */
#line 329 "main/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4265 "mafralang_grammar.tab.c"
    break;

  case 67: /* set_expression_list: exists_expression  */
#line 332 "main/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4273 "mafralang_grammar.tab.c"
    break;

  case 68: /* is_set_expression: IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES  */
#line 338 "main/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(IS_SET_EXPRESSION, NULL, NULL, (yyvsp[-3].strType), (yyvsp[-1].strType));
  }
#line 4281 "mafralang_grammar.tab.c"
    break;

  case 69: /* add_expression: ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 344 "main/mafralang_grammar.y"
                                                    {
    (yyval.stmt) = addNode(ADD_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4289 "mafralang_grammar.tab.c"
    break;

  case 70: /* remove_expression: REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 350 "main/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(REMOVE_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4297 "mafralang_grammar.tab.c"
    break;

  case 71: /* exists_expression: EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 356 "main/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(EXISTS_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4305 "mafralang_grammar.tab.c"
    break;

  case 74: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 367 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(ASSIGNMENT_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4313 "mafralang_grammar.tab.c"
    break;

  case 77: /* relational_expression: relational_expression CLT arithmetic_expression  */
#line 376 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4321 "mafralang_grammar.tab.c"
    break;

  case 78: /* relational_expression: relational_expression CLE arithmetic_expression  */
#line 379 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4329 "mafralang_grammar.tab.c"
    break;

  case 79: /* relational_expression: relational_expression CEQ arithmetic_expression  */
#line 382 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4337 "mafralang_grammar.tab.c"
    break;

  case 80: /* relational_expression: relational_expression CGE arithmetic_expression  */
#line 385 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4345 "mafralang_grammar.tab.c"
    break;

  case 81: /* relational_expression: relational_expression CGT arithmetic_expression  */
#line 388 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4353 "mafralang_grammar.tab.c"
    break;

  case 82: /* relational_expression: relational_expression CNE arithmetic_expression  */
#line 391 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4361 "mafralang_grammar.tab.c"
    break;

  case 84: /* arithmetic_expression: arithmetic_expression ADD_OP logical_expression  */
#line 398 "main/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4369 "mafralang_grammar.tab.c"
    break;

  case 85: /* arithmetic_expression: arithmetic_expression SUB_OP logical_expression  */
#line 401 "main/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4377 "mafralang_grammar.tab.c"
    break;

  case 86: /* arithmetic_expression: arithmetic_expression MULT logical_expression  */
#line 404 "main/mafralang_grammar.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4385 "mafralang_grammar.tab.c"
    break;

  case 87: /* arithmetic_expression: arithmetic_expression DIVIDE logical_expression  */
#line 407 "main/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4393 "mafralang_grammar.tab.c"
    break;

  case 89: /* logical_expression: NEGATE set_expression  */
#line 414 "main/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[0].stmt), NULL, (yyvsp[-1].symbol), NULL);
  }
#line 4401 "mafralang_grammar.tab.c"
    break;

  case 90: /* logical_expression: logical_expression AND set_expression  */
#line 417 "main/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4409 "mafralang_grammar.tab.c"
    break;

  case 91: /* logical_expression: logical_expression OR set_expression  */
#line 420 "main/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4417 "mafralang_grammar.tab.c"
    break;

  case 93: /* set_expression: set_expression IN cast_expression  */
#line 427 "main/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4425 "mafralang_grammar.tab.c"
    break;

  case 95: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 434 "main/mafralang_grammar.y"
                                                               {
    (yyval.stmt) = addNode(CAST_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4433 "mafralang_grammar.tab.c"
    break;

  case 96: /* type_name: specifier_qualifier_list  */
#line 440 "main/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4441 "mafralang_grammar.tab.c"
    break;

  case 97: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 443 "main/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4449 "mafralang_grammar.tab.c"
    break;

  case 98: /* type_name: specifier_qualifier_list declarator  */
#line 446 "main/mafralang_grammar.y"
                                      {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4457 "mafralang_grammar.tab.c"
    break;

  case 99: /* specifier_qualifier_list: TYPE specifier_qualifier_list  */
#line 452 "main/mafralang_grammar.y"
                                {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, (yyvsp[0].stmt), NULL, (yyvsp[-1].strType), NULL);
    insertType((yyvsp[-1].strType));
  }
#line 4466 "mafralang_grammar.tab.c"
    break;

  case 100: /* specifier_qualifier_list: TYPE  */
#line 456 "main/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, NULL, NULL, (yyvsp[0].strType), NULL);
    insertType((yyvsp[0].strType));
  }
#line 4475 "mafralang_grammar.tab.c"
    break;

  case 104: /* unary_expression: SUB_OP cast_expression  */
#line 466 "main/mafralang_grammar.y"
                         {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].symbol));
  }
#line 4483 "mafralang_grammar.tab.c"
    break;

  case 105: /* function_expression: ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES  */
#line 472 "main/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4491 "mafralang_grammar.tab.c"
    break;

  case 107: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 479 "main/mafralang_grammar.y"
                                                                                                       {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-4].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4499 "mafralang_grammar.tab.c"
    break;

  case 108: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 482 "main/mafralang_grammar.y"
                                                                                                             {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-5].stmt), (yyvsp[-2].stmt), NULL, NULL);
  }
#line 4507 "mafralang_grammar.tab.c"
    break;

  case 110: /* initializer_list: initializer_list COMMA initializer  */
#line 489 "main/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(INITIALIZER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4515 "mafralang_grammar.tab.c"
    break;

  case 112: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 496 "main/mafralang_grammar.y"
                                                          {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4523 "mafralang_grammar.tab.c"
    break;

  case 113: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 499 "main/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4531 "mafralang_grammar.tab.c"
    break;

  case 114: /* primary_expression: ID  */
#line 505 "main/mafralang_grammar.y"
     {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4539 "mafralang_grammar.tab.c"
    break;

  case 115: /* primary_expression: INTEGER  */
#line 508 "main/mafralang_grammar.y"
          {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4547 "mafralang_grammar.tab.c"
    break;

  case 116: /* primary_expression: FLOAT  */
#line 511 "main/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4555 "mafralang_grammar.tab.c"
    break;

  case 117: /* primary_expression: STRING  */
#line 514 "main/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4563 "mafralang_grammar.tab.c"
    break;

  case 118: /* primary_expression: EMPTY  */
#line 517 "main/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4571 "mafralang_grammar.tab.c"
    break;

  case 119: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 520 "main/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4579 "mafralang_grammar.tab.c"
    break;


#line 4583 "mafralang_grammar.tab.c"

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

#line 525 "main/mafralang_grammar.y"


void yyerror(const char* msg) {
  fprintf(stderr, "\n%s -- line: %d, column: %d\n", msg, line_number, column_number);
  syntax_error++;
}


int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
    yyin = fopen( argv[0], "r" );
  else
    yyin = stdin;
  yyparse();
  yylex_destroy();
  initializeGlobalScope();
  printSymbolTable();
  if(!(syntax_error || lex_error)){
    printTree(syntax_error, lex_error, parserTree);
    freeTree(parserTree);
  }
  return 0;
}
