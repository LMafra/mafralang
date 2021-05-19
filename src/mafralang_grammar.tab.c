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
#line 4 "yacc_lexer/mafralang_grammar.y"

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
  int semantic_error = 0;

  void yyerror(const char* msg);  

#line 92 "mafralang_grammar.tab.c"

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
  YYSYMBOL_50_1 = 50,                      /* $@1  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_declaration_list = 52,          /* declaration_list  */
  YYSYMBOL_declaration = 53,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 54,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 55,      /* init_declarator_list  */
  YYSYMBOL_declarator = 56,                /* declarator  */
  YYSYMBOL_direct_declarator = 57,         /* direct_declarator  */
  YYSYMBOL_identifier_list = 58,           /* identifier_list  */
  YYSYMBOL_parameter_list = 59,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 60,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator = 61,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 62, /* direct_abstract_declarator  */
  YYSYMBOL_compound_statement = 63,        /* compound_statement  */
  YYSYMBOL_block_item_list = 64,           /* block_item_list  */
  YYSYMBOL_block_item = 65,                /* block_item  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_expression_statement = 67,      /* expression_statement  */
  YYSYMBOL_conditional_statement = 68,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 69,       /* iteration_statement  */
  YYSYMBOL_input_statement = 70,           /* input_statement  */
  YYSYMBOL_output_statement = 71,          /* output_statement  */
  YYSYMBOL_return_statement = 72,          /* return_statement  */
  YYSYMBOL_set_expression_list = 73,       /* set_expression_list  */
  YYSYMBOL_is_set_expression = 74,         /* is_set_expression  */
  YYSYMBOL_add_expression = 75,            /* add_expression  */
  YYSYMBOL_remove_expression = 76,         /* remove_expression  */
  YYSYMBOL_exists_expression = 77,         /* exists_expression  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_assignment_expression = 79,     /* assignment_expression  */
  YYSYMBOL_relational_expression = 80,     /* relational_expression  */
  YYSYMBOL_arithmetic_expression = 81,     /* arithmetic_expression  */
  YYSYMBOL_logical_expression = 82,        /* logical_expression  */
  YYSYMBOL_set_expression = 83,            /* set_expression  */
  YYSYMBOL_cast_expression = 84,           /* cast_expression  */
  YYSYMBOL_type_name = 85,                 /* type_name  */
  YYSYMBOL_specifier_qualifier_list = 86,  /* specifier_qualifier_list  */
  YYSYMBOL_unary_expression = 87,          /* unary_expression  */
  YYSYMBOL_function_expression = 88,       /* function_expression  */
  YYSYMBOL_postfix_expression = 89,        /* postfix_expression  */
  YYSYMBOL_initializer_list = 90,          /* initializer_list  */
  YYSYMBOL_initializer = 91,               /* initializer  */
  YYSYMBOL_primary_expression = 92         /* primary_expression  */
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
#define YYLAST   10853

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  693

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
       0,    63,    63,    70,    71,    74,    80,    81,    85,    85,
      94,    94,   105,   108,   114,   117,   123,   128,   136,   137,
     143,   147,   157,   167,   170,   171,   174,   177,   183,   191,
     203,   204,   210,   213,   219,   225,   228,   231,   234,   240,
     243,   249,   250,   256,   259,   265,   268,   271,   274,   277,
     280,   283,   286,   292,   295,   301,   304,   312,   317,   321,
     326,   330,   336,   342,   345,   351,   357,   360,   363,   366,
     372,   378,   384,   390,   396,   397,   401,   404,   409,   410,
     413,   416,   419,   422,   425,   431,   432,   435,   438,   441,
     447,   448,   451,   454,   460,   461,   467,   468,   474,   477,
     480,   486,   491,   499,   500,   501,   502,   508,   511,   517,
     518,   521,   527,   528,   534,   535,   538,   544,   552,   555,
     558,   561,   564
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
  "translation_unit", "external_declaration", "function_definition", "$@1",
  "$@2", "declaration_list", "declaration", "declaration_specifiers",
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

#define YYPACT_NINF (-338)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-123)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,    15,   106,    22,    75,    78,   124,   150,    46,    57,
    -338,   166,   209,   223,   151,   169,    38,   304,   242,     2,
     235,   159,    30,    56,   120,   269,    58,    84,   133,   107,
    3992,   285,    62,   110,   317,   250,   200,   279,   308,   135,
     323,    88,  4734,  1002,  2157,  2542,  2927,  3924,   118,   127,
     138,   158,   170,   202,   225,   239,   248,  3312,   262,   336,
    2321,  5511,  5348,  5435,  5574,  5618,  5652,  5719,  5818,  5850,
    5882,  5914,  5946,  5978,  6010,  4451,  6686,  6710,  6734,  6758,
     174,   233,   558, 10714, 10634,  8383,  8400,  6782,  6806,  6830,
    6854,   326,   416,   318,   428,   190,   333,   288,   501,   307,
     175,   351,  3958,   238,  3958,  3958,   616,   616,   290,  3958,
    3958,  3958,   281,   517,   275,   453,  8417,  8434,  6878,   343,
    6042,  6074,  3924,  4098,  4098,  4098,  4098,  4098,  4098,  4098,
    4098,  4098,  4098,  5348,  5348,  5348,  3924,   334,   309,    14,
     583,   585,  2488,  6902,   600,   662,   712,  6106,   719,  2620,
    2620,   824,   829,   327,  3958,   363,   382,   384,   908,   932,
     946,   462,  6926,   826,   388,   418,   654, 10730, 10746, 10762,
   10778, 10794, 10810, 10650, 10666, 10682, 10698,  8451,  8468,  8485,
     669,   547,   563,   951,   328,  6950,  2706,  5034,  2873,  3005,
    6682,   436,   438,   471,  6974,  6998,  7022,  7046,  2488,  8502,
     599,   955,   296,   957,   381,  6682,   959,  6682,   964,  6138,
    6170,  6202,  6234,   383,   968,  6682,  6266,  6682,  6298,  6682,
    7070,   749,  6330,  6362,  6394,  7094,   299,   752,   151,   816,
     634,   636,   151,   656,     5,   194,   893,  6426,   119,   626,
     670,   711,  1387,  7118,  7142,  7166,   291,   421,   458,  7190,
     476,  2321,  5540,  5681,  7214,  7238,  7262,  7286,  7310,   970,
     518,  4038, 10474,  8526,  8550,  7334,  7358,  7382,  7406,  7430,
    8567,  8584,  8601,   478,   480,   486,  8618,   490,  2321,  5348,
    8635,  8652,  8669,  8686,  8703,  8720,  8737,  8754,  2321,  7447,
     464,   493,   937,  3091,   145,  1000,   495,   506,   508,   524,
    3958,  1772,  7471,  7495,  7519,   527,   529,   552,  7543,   570,
    2488,  2321,  5748,  5792,  7567,  7591,  7615,  7639,  7663,   392,
    3810,   751, 10336,  8778,  8802,  7687,  7711,  7735,   393,  7759,
    3258,  1019,   989,   705,  3924,   577,   596,   609,   611,   618,
     620,  6458,   797,   858,   895,  1243,  1280,  1628,  1665,  2013,
    1201,   396,   623,   125,   663,   185,   455,   213,  6490,  6522,
    6554,  1204,   205,   948,   657,  3958,  3958,  3958,   991,   676,
    5121,  8826,  8850,  8874,   688,   700,   707,  8898,   725,  2321,
    5540,  8922,  8946,  8970,  8994,  9018,  9042,  9066,  9090,  9114,
    9138,  2321,  7783,  7807,  4393,  4393,  4393,  4393,  4393,  4393,
    4393,  4393,  4393,  4393,  5540,  5540,  5540,  3958,  1080,   757,
    3958,  3958,  3958,   995,   736,  9155,   738,  1209,   743,   718,
      21,  3390,  1208,  3476,   997,  1168,   773,  3958,  3958,  3958,
     423,  1020,   756,  5381,  9179,  9203,  9227,   763,   770,   774,
    9251,   780,  2321,  5748,  9275,  9299,  9323,  9347,  9371,  9395,
    9419,  9443,  9467,  9491,  2321,  7831,  7855,  4623,  4623,  4623,
    4623,  4623,  4623,  4623,  4623,  4623,  4623,  5748,  5748,  5748,
    4688,  3643,   791,  1246,  3958,   238,  3958,  3958,   616,   616,
    2050,  6586,  2398,  1253,   798,  1281,  1040,  1041,   675,   800,
     729,  1046,  1047,  6618,  6650,   802,   809,  1048,  1059,  7879,
    1064,   820,  1078,  1082,  1083,  7903,  4249,  1333,   834,  3958,
    3958,  3958,  1089,   840,  9515,   863,  4180,  4333, 10564, 10582,
   10600, 10618, 10492, 10510, 10528, 10546,  9539,  9563,  9587,  1091,
    9604,  1095,   869,  1099,  1100,  1104,  9621,  4544,  4763,  1286,
    1290,  1106,  3712,  7927,  1111,   889,  1112,  1113,  1125,   431,
    1465,  7951,  4800,  1553,   849,  3958,  3958,  3958,  1129,   900,
    9645,   909,  4109,  4293,  5037,  5750, 10436, 10456, 10356, 10376,
   10396, 10416,  9669,  9693,  9717,   444,  2435,  1131,  2620,  2620,
    1135,  1136,   927,   938,  2783,  1292,  1294,  1296,   811,   862,
     902,   868,   907,   931,  7975,  7999,  8023,  8047,  8071,  2488,
    9741,  9765,  1141,   942,  1147,  1154,  1170,  9789,  4971,  5250,
    9806,  9823,  9840,  9857,  9874,  2488,  8095,  1316,  8119,  8143,
    8167,  8191,  8215,   468,  2488,  9898,  9922,  1171,   953,  1181,
    1183,  1185,  9946,  5292,  5315,  5034,  3775,  3863,  5034,   856,
     961,   972,   504,  9970,  9994, 10018, 10042, 10066,  2488,  8239,
     507,   516, 10090, 10114, 10138, 10162, 10186,  2488,  8263,  2820,
    5034,  1197,  5034,  1199,  3168,  3205,  3553,  3590,  8287,  1718,
     538, 10203,  1850,  8311,  1936,   546,  5034,  4177,  5034,  4444,
    5034,  8335, 10227,  2103, 10244,  8359, 10268,  2235,  4499,  5089,
    5205, 10292, 10316
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,   924,  -338,  -338,  -338,  -338,    34,    42,
     -25,    49,    16,  -337,  -132,   899,   -65,   981,   -22,  -228,
     -63,  -176,   -97,  -185,  -164,  -125,   -96,   -45,   929,  1314,
    1699,  2084,  2469,  5140,  4724,  4810,  4510,  4215,  3920,  3625,
    -230,   956,   544,  2854,  3239,  -130,    18,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    22,    23,    27,    64,    35,
      16,    41,   229,    36,    37,    38,    94,   292,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   254,   255,
     256,   257,   258,    80,   259,   260,   261,   262,   263,   264,
     114,   115,   265,   266,   267,   145,   328,   268
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    31,   345,   120,   236,    40,   150,   183,   -16,   359,
     234,   204,   184,   -16,   209,    -5,   486,    90,   491,   234,
      -5,   369,    10,   346,    18,   497,   234,   138,    25,   216,
     -16,   218,   287,    90,     7,     2,    90,   233,     7,   222,
     182,   223,     8,   224,     9,   233,     8,   540,   414,    12,
     165,   241,   188,   189,    13,     1,    28,    17,   416,     2,
     -17,    39,   347,    19,    29,   -17,    20,    21,   213,    29,
      26,    14,   238,    90,    15,    -2,   155,   156,    -3,    30,
       2,   432,   -17,    -3,    93,   -17,   -19,   -19,    91,     2,
     344,   348,    90,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,    90,    30,   238,   -16,
     230,     2,   329,   481,   -16,   231,   -18,   -18,   146,    90,
      90,    32,   230,    33,    -6,   234,   484,   231,    33,    -6,
     234,   -16,   232,   287,   -16,   235,   -28,   149,   -12,   -28,
     -13,   291,   349,   102,   232,   294,    34,   360,   230,   513,
      -7,   485,   103,   231,   226,    -7,   -12,    90,   -13,   227,
      90,   515,   230,   104,   164,   343,    -4,   231,   329,   -14,
     232,    -4,   329,   421,   -14,    90,   228,    90,   242,   243,
     430,   244,   245,   105,   232,    90,   489,    90,    33,    90,
     234,   329,   246,   247,   248,   106,   249,   250,   142,   -14,
     251,   143,   121,   122,   203,   252,   495,    90,    33,   253,
     234,   490,   559,   361,   -21,   139,   -34,   -14,   -15,   -34,
     351,   487,   390,   492,   561,   418,    96,   107,   -22,    97,
     498,   496,   -21,   500,   -21,   -15,   -15,   -21,   -21,   351,
     -15,    43,    44,     2,    45,    46,   -22,   -20,   -22,   287,
     108,   -22,   -22,   239,   233,    54,    55,    56,   240,    57,
      58,   -75,   -75,    60,   109,   -20,   293,    24,    62,   422,
     -20,   -20,    63,   110,   -23,    92,   356,   352,   531,   238,
     329,   354,   453,   329,  -102,   -11,   112,   111,   541,  -102,
     -11,   140,   -23,   157,   -23,   544,   120,   -23,   -23,   301,
     302,   163,   303,   304,    90,    98,  -102,  -102,    99,    -8,
     233,    90,   234,   305,   306,   307,   364,   308,   309,   310,
     214,   311,   -24,    -9,   -21,   -21,   312,   -10,    -9,    90,
     313,   -27,   -18,   -18,   -30,   181,   -39,   -30,   -26,   352,
     -24,   -39,   -24,   -40,   -32,   -24,   -24,   -32,   -40,   -27,
     390,   -27,   201,  -117,   -27,   -27,   -26,   202,   -26,   -36,
     -36,   -26,   -26,   -36,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   602,   579,   147,
     122,   146,   -55,   238,   -55,   -55,   -55,   -55,   -55,   192,
     -55,   -55,   -55,   -55,   215,   -55,   -55,   -55,   -55,   -55,
     -55,   238,   -55,   -55,   -55,   -55,   -55,   220,   193,   -55,
     194,   -55,   221,   453,  -100,   -55,  -114,  -112,   120,   226,
    -113,  -114,  -112,   627,   227,  -113,   146,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     329,   290,   137,   146,   -99,    90,   365,   549,   582,   583,
     345,    90,   550,   345,   -33,  -115,   226,   -33,   -17,   659,
    -115,   227,   664,   -17,   210,  -101,   211,   226,   -76,   642,
    -101,   346,   227,   -76,   346,   345,   390,   345,   290,   -98,
     -17,   636,   637,   366,   677,   650,   679,  -101,  -101,   290,
     417,   345,  -116,   345,   651,   345,   346,  -116,   346,   212,
     688,   367,   689,   409,   690,   410,   -25,   287,    90,   578,
     347,   411,   346,   347,   346,   412,   346,   294,   670,   419,
     329,  -121,   453,   238,   -25,   146,   -25,   675,   668,   -25,
     -25,   671,  -119,   669,  -118,   347,   672,   347,   344,   348,
     673,   344,   348,   162,   -77,   674,   300,   -77,    90,    90,
    -120,   347,   426,   347,   427,   347,   394,   395,   396,   397,
     398,   399,   682,   344,   348,   344,   348,   683,   351,   329,
     686,   146,   -35,   -35,    87,   687,   -35,   428,   390,   344,
     348,   344,   348,   344,   348,   329,   -77,   -77,   -37,   -37,
     349,    87,   -37,   349,   329,   429,   123,   124,   125,   126,
     127,   128,   474,   453,   329,    90,   117,   289,    90,   -29,
      87,   -31,   -29,   343,   -31,   349,   343,   349,   329,   153,
     296,   475,   297,   298,   -38,   -38,  -114,   329,   -38,  -114,
      90,   349,    90,   349,   476,   349,   477,   299,   343,   329,
     343,   154,   329,   478,   329,   479,    90,    87,    90,   483,
      90,   -21,   -21,   329,   343,   -21,   343,   329,   343,   -21,
     501,   -22,   -21,   -21,   -22,   -22,    87,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
      87,   355,   -74,   -74,   -20,   -20,   325,   351,   185,   488,
     351,   186,   351,    87,    87,   -22,   -22,   -76,   -76,   -22,
     -23,   351,   506,   -23,   -23,   351,   -52,   117,   -52,   -52,
     -52,   -52,   -52,   508,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   509,   -52,   -52,   -52,   -52,
     -52,    87,   510,   -52,    87,   -52,   362,   -20,  -112,   -52,
     -20,  -112,   325,   -23,   -23,   187,   325,   -23,   300,    87,
     511,    87,   301,   302,   -24,   303,   304,   -24,   -24,    87,
     532,    87,   537,    87,   538,   325,   305,   306,   307,   539,
     308,   309,   310,   225,   311,   -78,   545,   -22,   -22,   312,
     -78,    87,   552,   313,   463,   464,   465,   466,   554,   -78,
     -78,   -78,   -78,   -78,   -78,   555,   387,   393,   -53,   556,
     -53,   -53,   -53,   -53,   -53,   557,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,  -122,   -53,   -53,
     -53,   -53,   -53,   117,   585,   -53,   588,   -53,   591,   269,
     270,   -53,   271,   272,   -24,   -24,   -27,   603,   -24,   -27,
     -27,   353,   -20,   273,   274,   275,   595,   276,   277,   198,
     190,   278,   628,   300,   325,   191,   450,   456,   300,   -46,
     279,   -46,   -46,   -46,   -46,   -46,   608,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    87,   -46,
     -46,   -46,   -46,   -46,   665,    87,   -46,   -26,   -46,   609,
     -26,   -26,   -46,   -27,   -27,   611,   -45,   -27,   -45,   -45,
     -45,   -45,   -45,    87,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   619,   -45,   -45,   -45,   -45,
     -45,   357,    21,   -45,   387,   -45,   633,   -25,    11,   -45,
     -25,   -25,   -26,   -26,   195,   634,   -26,   300,   387,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   242,   243,   640,   244,   245,   -25,   -25,   196,    75,
     -25,   300,   420,   -34,   641,   246,   247,   248,   644,   249,
     250,   142,   197,   251,   499,   300,    75,   200,   252,   653,
      99,  -115,   253,  -113,  -115,   217,  -113,   450,   300,   666,
     219,   280,    75,   300,  -116,    75,   -75,  -116,   141,   -75,
     667,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   325,   472,    95,   505,   300,    87,
     300,   536,  -117,   -74,   300,    87,   -74,   100,   423,   122,
    -117,  -117,    75,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,   551,   471,   122,   300,
     387,    75,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,    75,   586,   587,   161,    97,
      99,   314,   589,   590,   592,    97,    99,    97,    75,    75,
       0,   117,   289,   242,   243,   593,   244,   245,    99,     0,
     594,     0,   280,   186,   325,     0,   450,   246,   247,   248,
       0,   249,   250,   142,   596,   251,   530,   300,   597,   598,
     252,   300,   300,     0,   253,   607,    75,   -76,   300,    75,
     -76,   610,    87,    87,   186,   612,   613,   314,   300,   300,
     614,   314,   617,   300,    75,    99,    75,   618,   620,   621,
     186,   300,   300,   325,    75,     0,    75,     0,    75,     0,
     314,   622,   387,   393,   300,   632,     0,   635,   300,   325,
     300,   638,   639,     0,   300,   300,    75,   643,   325,     0,
     186,   242,   243,   645,   244,   245,   300,   450,   456,    87,
     646,   381,    87,   300,     0,   246,   247,   248,     0,   249,
     250,   142,   325,   251,   543,     0,   647,   652,   252,   300,
     186,   325,   253,     0,    87,     0,    87,   654,   280,   655,
     300,   656,   300,   325,   300,     0,   325,     0,   325,     0,
      87,     0,    87,   678,    87,   680,   300,   325,   300,   482,
     122,   325,   494,    21,   -36,   -36,   542,    21,     0,   314,
       0,   444,   314,     0,   -47,     0,   -47,   -47,   -47,   -47,
     -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,    75,   -47,   -47,   -47,   -47,   -47,     0,
      75,   -47,     0,   -47,   576,   122,     0,   -47,   -23,   -23,
       0,   -48,     0,   -48,   -48,   -48,   -48,   -48,    75,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,   -24,   -24,   -48,   381,
     -48,   -35,   -35,     0,   -48,   -37,   -37,   -27,   -27,   -26,
     -26,   -25,   -25,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   242,   243,     0,   244,
     245,   -38,   -38,     0,    76,     0,     0,     0,     0,     0,
     246,   247,   248,     0,   249,   250,   142,     0,   251,   601,
       0,    76,     0,   252,     0,     0,     0,   253,     0,     0,
       0,     0,   444,     0,     0,     0,   281,    76,     0,     0,
      76,     0,     0,     0,     0,     0,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   314,
       0,     0,     0,     0,    75,     0,     0,  -117,     0,     0,
      75,     0,   363,  -117,     0,     0,  -117,    76,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,     0,     0,     0,     0,   381,    76,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
      76,     0,     0,     0,     0,     0,   315,     0,     0,     0,
       0,     0,     0,    76,    76,     0,   280,    75,   301,   302,
       0,   303,   304,     0,     0,     0,     0,   281,     0,   314,
       0,   444,   305,   306,   307,     0,   308,   309,   310,   623,
     311,     0,     0,     0,     0,   312,     0,     0,     0,   313,
       0,    76,     0,     0,    76,     0,     0,    75,    75,     0,
       0,     0,   315,     0,     0,     0,   315,     0,     0,    76,
       0,    76,     0,     0,     0,     0,     0,     0,   314,    76,
       0,    76,     0,    76,     0,   315,     0,   381,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,     0,     0,
       0,    76,     0,   314,     0,     0,   242,   243,     0,   244,
     245,     0,   444,   314,    75,     0,   382,    75,     0,     0,
     246,   247,   248,     0,   249,   250,   142,   314,   251,   626,
       0,     0,     0,   252,     0,     0,   314,   253,     0,    75,
       0,    75,     0,   281,     0,     0,     0,     0,   314,     0,
       0,   314,     0,   314,     0,    75,     0,    75,     0,    75,
       0,     0,   314,     0,     0,     0,   314,     0,     0,     0,
       0,     0,     0,     0,   315,     0,   445,   315,     0,   -49,
       0,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    76,   -49,
     -49,   -49,   -49,   -49,     0,    76,   -49,     0,   -49,     0,
       0,     0,   -49,     0,     0,     0,   -50,     0,   -50,   -50,
     -50,   -50,   -50,    76,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,     0,     0,   -50,   382,   -50,     0,     0,     0,   -50,
       0,     0,     0,     0,     0,     0,     0,     0,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   301,   302,     0,   303,   304,     0,     0,     0,    77,
       0,     0,     0,     0,     0,   305,   306,   307,     0,   308,
     309,   310,   681,   311,     0,     0,    77,     0,   312,     0,
       0,     0,   313,     0,     0,     0,     0,   445,     0,     0,
       0,   282,    77,     0,     0,    77,     0,     0,     0,     0,
       0,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   315,     0,     0,     0,     0,    76,
       0,     0,  -117,     0,     0,    76,  -117,   425,     0,     0,
       0,  -117,    77,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,     0,     0,     0,     0,
     382,    77,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,    77,     0,     0,     0,     0,
       0,   316,     0,     0,     0,     0,     0,     0,    77,    77,
       0,   281,    76,   301,   302,     0,   303,   304,     0,     0,
       0,     0,   282,     0,   315,     0,   445,   305,   306,   307,
       0,   308,   309,   310,   684,   311,     0,     0,     0,     0,
     312,     0,     0,     0,   313,     0,    77,     0,     0,    77,
       0,     0,    76,    76,     0,     0,     0,   316,     0,     0,
       0,   316,     0,     0,    77,     0,    77,     0,     0,     0,
       0,     0,     0,   315,    77,     0,    77,     0,    77,     0,
     316,     0,   382,     0,     0,     0,     0,     0,     0,   315,
       0,     0,     0,     0,     0,     0,    77,     0,   315,   301,
     302,     0,   303,   304,     0,     0,     0,   445,   315,    76,
       0,   383,    76,   305,   306,   307,     0,   308,   309,   310,
     685,   311,   315,     0,     0,     0,   312,     0,     0,     0,
     313,   315,     0,     0,    76,     0,    76,     0,   282,     0,
       0,     0,     0,   315,     0,     0,   315,     0,   315,     0,
      76,     0,    76,     0,    76,     0,     0,   315,     0,     0,
       0,   315,     0,     0,     0,     0,     0,     0,     0,   316,
       0,   446,   316,     0,   -51,     0,   -51,   -51,   -51,   -51,
     -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,    77,   -51,   -51,   -51,   -51,   -51,     0,
      77,   -51,     0,   -51,     0,     0,     0,   -51,     0,     0,
       0,   -39,     0,   -39,   -39,   -39,   -39,   -39,    77,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,   383,
     -39,     0,     0,     0,   -39,     0,     0,     0,     0,     0,
       0,     0,     0,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   301,   302,     0,   303,
     304,     0,     0,     0,    78,     0,     0,     0,     0,     0,
     305,   306,   307,     0,   308,   309,   310,   691,   311,     0,
       0,    78,     0,   312,     0,     0,     0,   313,     0,     0,
       0,     0,   446,     0,     0,     0,   283,    78,     0,     0,
      78,     0,     0,     0,     0,     0,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   316,
       0,     0,     0,     0,    77,     0,     0,  -121,     0,     0,
      77,     0,     0,     0,     0,  -121,  -121,    78,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,     0,     0,     0,     0,   383,    78,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
      78,     0,     0,     0,     0,     0,   317,     0,     0,     0,
       0,     0,     0,    78,    78,     0,   282,    77,   301,   302,
       0,   303,   304,     0,     0,     0,     0,   283,     0,   316,
       0,   446,   305,   306,   307,     0,   308,   309,   310,   692,
     311,     0,     0,     0,     0,   312,     0,     0,     0,   313,
       0,    78,     0,     0,    78,     0,     0,    77,    77,     0,
       0,     0,   317,     0,     0,     0,   317,     0,     0,    78,
       0,    78,     0,     0,     0,     0,     0,     0,   316,    78,
       0,    78,     0,    78,     0,   317,     0,   383,     0,     0,
       0,     0,     0,     0,   316,     0,     0,     0,     0,     0,
       0,    78,     0,   316,   242,   243,   112,   244,   245,     0,
       0,     0,   446,   316,    77,     0,   384,    77,   246,   247,
     248,     0,   249,   250,     0,     0,   251,   316,     0,     0,
       0,   252,     0,     0,     0,   253,   316,     0,     0,    77,
       0,    77,     0,   283,     0,     0,     0,     0,   316,     0,
       0,   316,     0,   316,     0,    77,     0,    77,     0,    77,
       0,     0,   316,     0,     0,     0,   316,     0,     0,     0,
       0,     0,     0,     0,   317,     0,   447,   317,     0,   -54,
       0,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,    78,   -54,
     -54,   -54,   -54,   -54,     0,    78,   -54,     0,   -54,     0,
       0,     0,   -54,     0,     0,     0,   -65,     0,   -65,   -65,
     -65,   -65,   -65,    78,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,
     -65,     0,     0,   -65,   384,   -65,     0,     0,     0,   -65,
       0,     0,     0,     0,     0,     0,     0,     0,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   301,   302,     0,   303,   304,     0,     0,     0,    79,
       0,     0,     0,     0,     0,   305,   306,   307,     0,   308,
     309,   310,     0,   311,     0,     0,    79,     0,   312,     0,
       0,     0,   313,     0,     0,     0,     0,   447,     0,     0,
       0,   284,    79,     0,     0,    79,     0,     0,     0,     0,
       0,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   317,     0,     0,     0,     0,    78,
       0,     0,  -119,     0,     0,    78,     0,     0,     0,     0,
    -119,  -119,    79,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,     0,     0,     0,     0,
     384,    79,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,    79,     0,     0,     0,     0,
       0,   318,     0,     0,     0,     0,     0,     0,    79,    79,
       0,   283,    78,    43,    44,     0,    45,    46,     0,     0,
       0,     0,   284,     0,   317,     0,   447,    54,    55,    56,
       0,    57,    58,     0,     0,    60,     0,     0,   330,     0,
      62,     0,     0,     0,    63,     0,    79,     0,     0,    79,
       0,     0,    78,    78,     0,     0,     0,   318,     0,     0,
       0,   318,     0,     0,    79,     0,    79,     0,     0,     0,
       0,     0,     0,   317,    79,     0,    79,     0,    79,     0,
     318,     0,   384,     0,     0,     0,     0,     0,     0,   317,
       0,     0,     0,     0,     0,     0,    79,     0,   317,   242,
     243,     0,   244,   245,     0,     0,     0,   447,   317,    78,
       0,   385,    78,   246,   247,   248,     0,   249,   250,   142,
       0,   251,   317,     0,     0,     0,   252,     0,     0,     0,
     253,   317,     0,     0,    78,     0,    78,     0,   284,     0,
       0,     0,     0,   317,     0,     0,   317,     0,   317,     0,
      78,     0,    78,     0,    78,     0,     0,   317,     0,     0,
       0,   317,     0,     0,     0,     0,     0,     0,     0,   318,
       0,   448,   318,     0,   -40,     0,   -40,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,    79,   -40,   -40,   -40,   -40,   -40,     0,
      79,   -40,     0,   -40,     0,     0,     0,   -40,     0,     0,
       0,   -55,     0,   -55,   -55,   -55,   -55,   -55,    79,   -55,
     -55,   -55,   -55,   676,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -55,   -55,   -55,   -55,   -55,     0,     0,   -55,   385,
     -55,     0,     0,     0,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   242,   243,     0,   244,
     245,     0,     0,     0,    88,     0,     0,     0,     0,     0,
     246,   247,   248,     0,   249,   250,     0,     0,   251,   205,
       0,    88,     0,   252,     0,     0,     0,   253,     0,     0,
       0,     0,   448,     0,     0,     0,   285,    88,     0,     0,
      88,     0,     0,     0,     0,     0,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   318,
       0,     0,     0,     0,    79,     0,     0,  -118,     0,     0,
      79,     0,     0,     0,     0,  -118,  -118,    88,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,     0,     0,     0,     0,   385,    88,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
      88,     0,     0,     0,     0,     0,   326,     0,     0,     0,
       0,     0,     0,    88,    88,     0,   284,    79,   242,   243,
       0,   244,   245,     0,     0,     0,     0,   285,     0,   318,
       0,   448,   246,   247,   248,     0,   249,   250,     0,     0,
     251,   207,     0,     0,     0,   252,     0,     0,     0,   253,
       0,    88,     0,     0,    88,     0,     0,    79,    79,     0,
       0,     0,   326,     0,     0,     0,   326,     0,     0,    88,
       0,    88,     0,     0,     0,     0,     0,     0,   318,    88,
       0,    88,     0,    88,     0,   326,     0,   385,     0,     0,
       0,     0,     0,     0,   318,     0,     0,     0,     0,     0,
       0,    88,     0,   318,   -53,   -53,     0,   -53,   -53,     0,
       0,     0,   448,   318,    79,     0,   388,    79,   -53,   -53,
     -53,     0,   -53,   -53,     0,     0,   -53,   318,     0,   -53,
       0,   -53,     0,     0,     0,   -53,   318,     0,     0,    79,
       0,    79,     0,   285,     0,     0,     0,     0,   318,     0,
       0,   318,     0,   318,     0,    79,     0,    79,     0,    79,
       0,     0,   318,     0,     0,     0,   318,     0,     0,     0,
       0,     0,     0,     0,   326,     0,   451,   326,     0,   -61,
       0,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,    88,   -61,
     -61,   -61,   -61,   -61,     0,    88,   -61,     0,   -61,     0,
       0,     0,   -61,     0,     0,     0,   -62,     0,   -62,   -62,
     -62,   -62,   -62,    88,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,
     -62,     0,     0,   -62,   388,   -62,     0,     0,     0,   -62,
       0,     0,     0,     0,     0,     0,     0,     0,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   -53,   -53,     0,   -53,   -53,     0,     0,     0,    89,
       0,     0,     0,     0,     0,   -53,   -53,   -53,     0,   -53,
     -53,     0,     0,   -53,   -53,     0,    89,     0,   -53,     0,
       0,     0,   -53,     0,     0,     0,     0,   451,     0,     0,
       0,   286,    89,     0,     0,    89,     0,     0,     0,     0,
       0,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   326,     0,     0,     0,     0,    88,
       0,     0,  -120,     0,     0,    88,     0,     0,     0,     0,
    -120,  -120,    89,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,     0,     0,     0,     0,
     388,    89,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,    89,     0,     0,     0,     0,
       0,   327,     0,     0,     0,     0,     0,     0,    89,    89,
       0,   285,    88,   -14,   -14,     0,   -14,   -14,     0,     0,
       0,     0,   286,     0,   326,     0,   451,   -14,   -14,   -14,
       0,   -14,   -14,     0,     0,   -14,     0,     0,   -14,     0,
     -14,     0,     0,     0,   -14,     0,    89,     0,     0,    89,
       0,     0,    88,    88,     0,     0,     0,   327,     0,     0,
       0,   327,     0,     0,    89,     0,    89,     0,     0,     0,
       0,     0,     0,   326,    89,     0,    89,     0,    89,     0,
     327,     0,   388,     0,     0,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,    89,     0,   326,   -54,
     -54,     0,   -54,   -54,     0,     0,     0,   451,   326,    88,
       0,   389,    88,   -54,   -54,   -54,     0,   -54,   -54,     0,
       0,   -54,   326,     0,   -54,     0,   -54,     0,     0,     0,
     -54,   326,     0,     0,    88,     0,    88,     0,   286,     0,
       0,     0,     0,   326,     0,     0,   326,     0,   326,     0,
      88,     0,    88,     0,    88,     0,     0,   326,     0,     0,
       0,   326,     0,     0,     0,     0,     0,     0,     0,   327,
       0,   452,   327,     0,   -63,     0,   -63,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,    89,   -63,   -63,   -63,   -63,   -63,     0,
      89,   -63,     0,   -63,     0,     0,     0,   -63,     0,     0,
       0,   -64,     0,   -64,   -64,   -64,   -64,   -64,    89,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,     0,     0,   -64,   389,
     -64,     0,     0,     0,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   -54,   -54,     0,   -54,
     -54,     0,     0,     0,     0,    86,     0,     0,     0,     0,
     -54,   -54,   -54,     0,   -54,   -54,     0,     0,   -54,   -54,
       0,     0,    86,   -54,     0,     0,     0,   -54,     0,     0,
       0,     0,   452,     0,     0,     0,     0,    86,   118,     0,
       0,    86,     0,     0,     0,     0,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   327,
       0,     0,     0,     0,    89,   -15,   -15,     0,   -15,   -15,
      89,     0,     0,     0,     0,     0,     0,     0,    86,   -15,
     -15,   -15,     0,   -15,   -15,     0,     0,   -15,     0,     0,
     -15,     0,   -15,     0,     0,   389,   -15,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
     179,    86,     0,     0,     0,     0,     0,   324,     0,     0,
       0,     0,     0,     0,    86,    86,   286,    89,   242,   243,
       0,   244,   245,     0,     0,     0,     0,     0,   199,   327,
       0,   452,   246,   247,   248,     0,   249,   250,     0,     0,
     251,   660,     0,     0,     0,   252,     0,     0,     0,   253,
       0,     0,    86,     0,     0,    86,     0,    89,    89,     0,
       0,     0,     0,   324,     0,     0,     0,   324,     0,     0,
      86,     0,    86,     0,   -77,     0,     0,     0,   327,   -77,
      86,     0,    86,     0,    86,     0,   324,   389,   457,   458,
     459,   460,   461,   462,   327,     0,     0,     0,     0,     0,
       0,     0,    86,   327,     0,     0,   242,   243,     0,   244,
     245,     0,   452,   327,    89,     0,     0,    89,   392,     0,
     246,   247,   248,     0,   249,   250,     0,   327,   251,   662,
       0,     0,     0,   252,     0,     0,   327,   253,     0,    89,
       0,    89,     0,     0,   415,     0,     0,     0,   327,     0,
       0,   327,     0,   327,     0,    89,     0,    89,     0,    89,
       0,     0,   327,     0,     0,     0,   327,    43,    44,     0,
      45,    46,     0,     0,     0,   324,     0,   324,   455,     0,
       0,    54,    55,    56,     0,    57,    58,     0,     0,    60,
      85,     0,     0,     0,    62,     0,     0,     0,    63,    86,
       0,   242,   243,     0,   244,   245,    86,    85,     0,     0,
       0,     0,     0,     0,     0,   246,   247,   248,     0,   249,
     250,     0,   116,   251,    86,     0,    85,     0,   252,     0,
       0,     0,   253,    42,     0,    43,    44,     2,    45,    46,
       0,    47,    48,    49,    50,   514,    51,    52,    53,    54,
      55,    56,     0,    57,    58,   237,    59,    60,     0,     0,
      61,     0,    62,    85,     0,     0,    63,     0,     0,     0,
       0,   528,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,   177,   178,     0,    85,     0,     0,     0,
       0,     0,   323,     0,   -78,     0,     0,   -78,   560,    85,
      85,   400,   401,   402,   403,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   574,   324,     0,     0,     0,     0,
      86,   269,   270,     0,   271,   272,    86,    85,     0,     0,
      85,     0,     0,     0,     0,   273,   274,   275,   323,   276,
     277,     0,   323,   278,     0,    85,     0,    85,    62,     0,
       0,   600,   279,   -79,     0,    85,     0,    85,   -79,    85,
       0,   323,   463,   464,   465,   466,     0,   -79,   -79,   -79,
     -79,   -79,   -79,     0,     0,     0,     0,    85,     0,     0,
       0,     0,   199,   616,     0,     0,     0,     0,     0,     0,
       0,     0,   386,     0,     0,   324,     0,   625,   -60,     0,
     -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,   -60,   -60,    86,    86,   -60,   -79,   -60,     0,   -79,
       0,   -60,     0,   400,   401,   402,   403,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   324,     0,     0,     0,     0,     0,
     323,     0,   449,   600,   649,     0,     0,     0,     0,     0,
     324,     0,     0,     0,     0,    84,     0,     0,     0,   324,
       0,     0,   370,   371,    85,   372,   373,     0,   625,   658,
      86,    85,    84,    86,     0,     0,   374,   375,   376,     0,
     377,   378,   599,   324,   379,     0,     0,     0,     0,    85,
       0,    84,   324,   380,     0,    86,     0,    86,     0,     0,
       0,     0,     0,     0,   324,     0,     0,   324,     0,   324,
       0,    86,     0,    86,     0,    86,     0,     0,   324,     0,
       0,     0,   324,     0,     0,     0,     0,   -80,    84,     0,
       0,     0,   -80,     0,   526,   527,   463,   464,   465,   466,
       0,   -80,   -80,   -80,   -80,   -80,   -80,    84,    84,    84,
      84,    84,    84,    84,   173,   174,   175,   176,     0,     0,
       0,    84,     0,     0,     0,     0,     0,   322,     0,   -80,
       0,     0,   -80,     0,    84,    84,   400,   401,   402,   403,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   572,   573,     0,
     323,     0,     0,     0,     0,    85,   370,   371,     0,   372,
     373,    85,    84,     0,     0,    84,     0,     0,     0,     0,
     374,   375,   376,   322,   377,   378,     0,   322,   379,     0,
      84,     0,    84,   252,     0,     0,     0,   380,     0,     0,
      84,     0,    84,     0,    84,     0,   322,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,     0,   -58,   -58,   -58,
     -58,   -58,    84,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,
     323,  -104,   -58,     0,   -58,     0,     0,     0,   -58,  -104,
    -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,     0,     0,     0,    85,    85,
     -56,     0,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   323,
     -56,   -56,   -56,   -56,   -56,   322,     0,   -56,     0,   -56,
       0,     0,     0,   -56,     0,   323,     0,     0,     0,     0,
      83,     0,     0,     0,   323,     0,     0,   269,   270,    84,
     271,   272,     0,     0,     0,    85,    84,    83,    85,     0,
       0,   273,   274,   275,     0,   276,   277,   615,   323,   278,
       0,     0,     0,     0,    84,     0,    83,   323,   279,     0,
      85,     0,    85,     0,     0,     0,     0,     0,     0,   323,
       0,     0,   323,     0,   323,     0,    85,     0,    85,     0,
      85,     0,     0,   323,     0,     0,     0,   323,     0,     0,
       0,     0,     0,    83,     0,   522,   523,   524,   525,     0,
       0,     0,     0,     0,     0,     0,   433,   434,     0,   435,
     436,     0,    83,   167,   168,   169,   170,   171,   172,     0,
     437,   438,   439,     0,   440,   441,    83,     0,   442,     0,
       0,     0,   321,   312,     0,     0,     0,   443,     0,    83,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   322,   322,   322,   322,   322,   322,   568,   569,
     570,   571,     0,     0,     0,   322,     0,     0,     0,     0,
      84,   301,   302,     0,   303,   304,    84,    83,     0,     0,
      83,     0,     0,     0,     0,   305,   306,   307,   321,   308,
     309,     0,   321,   311,     0,    83,     0,    83,   312,     0,
       0,     0,   313,     0,     0,    83,     0,    83,     0,    83,
       0,   321,     0,     0,     0,   -52,     0,   -52,   -52,   -52,
     -52,   -52,     0,   -52,   -52,   -52,   -52,    83,   -52,   -52,
     -52,   -52,   -52,   -52,    81,   -52,   -52,   -52,   -52,   -52,
       0,     0,   -52,     0,   -52,   322,    43,    44,   -52,    45,
      46,    81,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,     0,    57,    58,   198,     0,   288,     0,
      81,     0,     0,    84,    84,     0,     0,    63,     0,     0,
       0,     0,     0,   433,   434,     0,   435,   436,     0,     0,
       0,     0,     0,     0,   322,     0,     0,   437,   438,   439,
     321,   440,   441,   624,   144,   442,     0,    81,     0,     0,
     322,     0,     0,     0,   443,     0,     0,     0,     0,   322,
      82,     0,     0,     0,    83,     0,   166,     0,     0,     0,
      84,    83,     0,    84,     0,     0,     0,    82,     0,     0,
     180,     0,     0,   322,     0,     0,   319,     0,     0,    83,
       0,     0,   322,    81,    81,    84,    82,    84,     0,     0,
       0,     0,     0,     0,   322,     0,     0,   322,     0,   322,
       0,    84,     0,    84,     0,    84,     0,     0,   322,     0,
       0,     0,   322,     0,   516,   517,   518,   519,   520,   521,
     144,    81,     0,    82,    81,     0,     0,     0,     0,     0,
       0,     0,   319,     0,     0,     0,   319,     0,     0,    81,
       0,    81,    82,     0,     0,     0,     0,     0,     0,    81,
       0,    81,     0,    81,     0,   319,    82,     0,     0,     0,
       0,     0,   320,     0,     0,     0,     0,     0,     0,    82,
      82,    81,     0,     0,     0,     0,     0,   562,   563,   564,
     565,   566,   567,     0,   370,   371,     0,   372,   373,     0,
     321,     0,     0,     0,     0,    83,     0,     0,   374,   375,
     376,    83,   377,   378,   648,     0,   379,    82,     0,     0,
      82,     0,     0,     0,     0,   380,     0,     0,   320,     0,
       0,     0,   320,     0,     0,    82,     0,    82,     0,     0,
       0,     0,     0,     0,   424,    82,     0,    82,     0,    82,
       0,   320,     0,     0,   319,   333,     0,    43,    44,     0,
      45,    46,     0,   334,   335,   336,   337,    82,   338,   339,
     340,    54,    55,    56,     0,    57,    58,   341,    81,    60,
     321,   -81,   342,     0,    62,    81,   -81,     0,    63,     0,
     463,   464,   465,   466,     0,   -81,   -81,   -81,   -81,   -81,
     -81,     0,     0,    81,     0,     0,     0,   144,    83,    83,
     -59,     0,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   321,
     -59,   -59,   -59,   -59,   -59,     0,     0,   -59,     0,   -59,
     320,     0,     0,   -59,     0,   321,     0,     0,     0,     0,
       0,   529,   144,     0,   321,     0,     0,     0,     0,     0,
       0,  -117,     0,     0,    82,    83,   507,  -117,    83,   144,
    -117,    82,  -117,  -117,  -117,  -117,  -117,  -117,   321,  -117,
    -117,  -117,  -117,  -117,  -117,     0,     0,   321,     0,    82,
      83,     0,    83,     0,     0,     0,     0,     0,     0,   321,
       0,     0,   321,     0,   321,     0,    83,   101,    83,     0,
      83,     0,     0,   321,   575,     0,     0,   321,     0,    81,
     113,     0,     0,     0,     0,    81,   -57,     0,   -57,   -57,
     -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,
     -57,   144,     0,   -57,     0,   -57,     0,     0,     0,   -57,
       0,     0,   148,   295,   151,   152,     0,     0,     0,   158,
     159,   160,     0,   242,   243,     0,   244,   245,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,   247,   248,
       0,   249,   250,   599,   319,   391,     0,   144,     0,     0,
     320,     0,     0,     0,   253,    82,     0,     0,     0,   331,
     331,    82,     0,     0,   332,   433,   434,     0,   435,   436,
       0,     0,    81,    81,     0,     0,     0,     0,     0,   437,
     438,   439,     0,   440,   441,   657,     0,   442,   301,   302,
       0,   303,   304,   319,     0,     0,   443,   350,   206,   208,
       0,     0,   305,   306,   307,     0,   308,   309,   624,   319,
     454,     0,     0,     0,     0,     0,     0,     0,   319,   313,
       0,   269,   270,     0,   271,   272,     0,     0,     0,    81,
     320,     0,    81,     0,     0,   273,   274,   275,     0,   276,
     277,     0,   319,   278,     0,     0,     0,     0,     0,     0,
       0,   319,   279,     0,    81,     0,    81,     0,    82,    82,
       0,   368,     0,   319,     0,     0,   319,     0,   319,     0,
      81,  -117,    81,     0,    81,  -117,   553,   319,     0,   320,
    -117,   319,  -117,  -117,  -117,  -117,  -117,  -117,   413,  -117,
    -117,  -117,  -117,  -117,  -117,   320,     0,     0,   113,     0,
       0,     0,     0,     0,   320,     0,     0,     0,    43,    44,
       0,    45,    46,     0,     0,    82,     0,     0,    82,     0,
       0,   431,    54,    55,    56,     0,    57,    58,   320,     0,
     288,     0,     0,     0,     0,     0,     0,   320,     0,    63,
      82,     0,    82,     0,   473,     0,     0,     0,     0,   320,
       0,     0,   320,     0,   320,     0,    82,     0,    82,     0,
      82,     0,     0,   320,     0,     0,     0,   320,     0,     0,
       0,     0,     0,     0,     0,   502,   503,   504,     0,     0,
       0,     0,   -53,     0,   -53,   -53,   -53,   -53,   -53,   512,
     -53,   -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   368,   -53,   -53,   -53,   -53,   -53,     0,     0,   -53,
       0,   -53,     0,   370,   371,   -53,   372,   373,     0,     0,
     533,   534,   535,     0,     0,     0,     0,   374,   375,   376,
       0,   377,   378,     0,     0,   379,     0,   546,   547,   548,
       0,     0,     0,     0,   380,   -43,     0,   -43,   -43,   -43,
     -43,   -43,   558,   -43,   -43,   -43,   -43,     0,   -43,   -43,
     -43,   -43,   -43,   -43,   431,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,     0,   -43,     0,     0,     0,   -43,     0,
       0,     0,     0,     0,   577,   295,   580,   581,     0,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,   604,
     605,   606,   -46,    42,     0,    43,    44,     2,    45,    46,
       0,    47,    48,    49,    50,     0,    51,    52,    53,    54,
      55,    56,     0,    57,    58,   237,   119,    60,     0,     0,
      61,     0,    62,     0,   242,   243,    63,   244,   245,     0,
       0,     0,     0,     0,     0,   629,   630,   631,   246,   247,
     248,     0,   249,   250,     0,     0,   391,     0,     0,     0,
       0,     0,     0,     0,     0,   253,     0,     0,   331,   331,
     -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,   -41,
     -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,
       0,   433,   434,   -41,   435,   436,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   437,   438,   439,     0,   440,
     441,     0,     0,   442,   -82,   350,   661,   663,   350,   -82,
       0,     0,   443,   463,   464,   465,   466,     0,   -82,   -82,
     -82,   -82,   -82,   -82,     0,   301,   302,     0,   303,   304,
     350,     0,   350,     0,     0,     0,     0,     0,     0,   305,
     306,   307,     0,   308,   309,     0,   350,   454,   350,   -44,
     350,   -44,   -44,   -44,   -44,   -44,   313,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,     0,
       0,   -45,   -44,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,     0,     0,   -45,     0,
     -45,     0,     0,   -47,   -45,   -47,   -47,   -47,   -47,   -47,
       0,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -47,     0,   -47,     0,     0,   -48,   -47,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,     0,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
       0,     0,   -48,     0,   -48,     0,     0,   -49,   -48,   -49,
     -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,     0,     0,   -49,     0,   -49,     0,     0,   -50,
     -49,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,
     -50,   -50,   -50,   -50,     0,     0,   -50,     0,   -50,     0,
       0,   -51,   -50,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,   -51,
       0,   -51,   -51,   -51,   -51,   -51,     0,     0,   -51,     0,
     -51,     0,     0,   -42,   -51,   -42,   -42,   -42,   -42,   -42,
       0,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,
     -42,     0,   -42,     0,     0,   -54,   -42,   -54,   -54,   -54,
     -54,   -54,     0,   -54,   -54,   -54,   -54,     0,   -54,   -54,
     -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,   -54,
       0,     0,   -54,     0,   -54,     0,     0,   -65,   -54,   -65,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,   -65,     0,     0,   -65,     0,   -65,     0,     0,   -61,
     -65,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
     -61,     0,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -61,     0,   -61,     0,
       0,   -62,   -61,   -62,   -62,   -62,   -62,   -62,     0,   -62,
     -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,   -62,
       0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,     0,
     -62,     0,     0,   -63,   -62,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,     0,     0,
     -63,     0,   -63,     0,     0,   -64,   -63,   -64,   -64,   -64,
     -64,   -64,     0,   -64,   -64,   -64,   -64,     0,   -64,   -64,
     -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,
       0,     0,   -64,     0,   -64,     0,     0,   -60,   -64,   -60,
     -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,   -60,     0,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -60,     0,   -60,     0,     0,   -58,
     -60,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,
     -58,     0,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,
     -58,   -58,   -58,   -58,     0,     0,   -58,     0,   -58,     0,
       0,   -56,   -58,   -56,   -56,   -56,   -56,   -56,     0,   -56,
     -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,     0,     0,   -56,     0,
     -56,     0,     0,   -59,   -56,   -59,   -59,   -59,   -59,   -59,
       0,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,
     -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,     0,     0,
     -59,     0,   -59,     0,     0,   -57,   -59,   -57,   -57,   -57,
     -57,   -57,     0,   -57,   -57,   -57,   -57,     0,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,   -57,
       0,     0,   -57,     0,   -57,     0,     0,    42,   -57,    43,
      44,     2,    45,    46,     0,    47,    48,    49,    50,     0,
      51,    52,    53,    54,    55,    56,     0,    57,    58,   237,
     358,    60,     0,     0,    61,     0,    62,     0,     0,    42,
      63,    43,    44,     2,    45,    46,     0,    47,    48,    49,
      50,     0,    51,    52,    53,    54,    55,    56,     0,    57,
      58,   237,   480,    60,     0,     0,    61,     0,    62,     0,
       0,   -39,    63,   -39,   -39,   -39,   -39,   -39,     0,   -39,
     -39,   -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,
       0,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,
     -39,     0,     0,    42,   -39,    43,    44,     2,    45,    46,
       0,    47,    48,    49,    50,     0,    51,    52,    53,    54,
      55,    56,     0,    57,    58,   237,   493,    60,     0,     0,
      61,     0,    62,     0,     0,   -14,    63,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,   -14,   -14,     0,   -14,   -14,
     -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,   -14,   -14,
       0,     0,   -14,     0,   -14,     0,     0,    42,   -14,    43,
      44,     2,    45,    46,     0,    47,    48,    49,    50,     0,
      51,    52,    53,    54,    55,    56,     0,    57,    58,   237,
     584,    60,     0,     0,    61,     0,    62,     0,     0,   -40,
      63,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,     0,
       0,   -15,   -40,   -15,   -15,   -15,   -15,   -15,     0,   -15,
     -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,
       0,   -15,   -15,   -15,   -15,   -15,     0,     0,   -15,     0,
     -15,     0,     0,    42,   -15,    43,    44,     0,    45,    46,
       0,    47,    48,    49,    50,     0,    51,    52,    53,    54,
      55,    56,     0,    57,    58,   237,   -66,    60,     0,     0,
      61,     0,    62,     0,   -66,   -66,    63,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,     0,     0,
       0,     0,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -96,     0,     0,     0,     0,     0,     0,     0,
     -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   136,
     -96,   -96,   -96,   -96,   -96,   -96,  -105,     0,     0,     0,
       0,     0,     0,     0,  -105,  -105,     0,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -103,     0,     0,     0,     0,     0,     0,     0,  -103,  -103,
       0,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -109,     0,     0,     0,     0,     0,
       0,     0,  -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -106,     0,
       0,     0,     0,     0,     0,     0,  -106,  -106,     0,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -108,     0,     0,     0,     0,     0,     0,     0,
    -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -122,     0,     0,     0,
       0,     0,     0,     0,  -122,  -122,     0,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -107,     0,     0,     0,     0,     0,     0,     0,  -107,  -107,
       0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,   -70,     0,     0,     0,     0,     0,
       0,     0,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -72,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -71,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,
       0,     0,     0,     0,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
    -110,     0,     0,     0,     0,     0,     0,     0,  -110,  -110,
       0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -111,     0,     0,     0,     0,     0,
       0,     0,  -111,  -111,     0,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -121,     0,
       0,     0,     0,     0,  -121,     0,     0,  -121,     0,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -119,     0,     0,     0,     0,     0,  -119,     0,
       0,  -119,     0,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -118,     0,     0,     0,
       0,     0,  -118,     0,     0,  -118,     0,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -120,     0,     0,     0,     0,     0,  -120,     0,     0,  -120,
       0,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -104,     0,     0,     0,     0,     0,
    -104,     0,     0,  -104,     0,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   -66,     0,
       0,     0,     0,     0,   -66,     0,     0,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -67,     0,     0,     0,     0,     0,   -67,     0,
       0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,     0,
       0,     0,   -68,     0,     0,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,     0,     0,     0,     0,     0,   -69,     0,     0,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -96,     0,     0,     0,     0,     0,
     -96,     0,     0,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   407,   -96,   -96,   -96,   -96,   -96,   -96,  -105,     0,
       0,     0,     0,     0,  -105,     0,     0,  -105,     0,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -103,     0,     0,     0,     0,     0,  -103,     0,
       0,  -103,     0,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -109,     0,     0,     0,
       0,     0,  -109,     0,     0,  -109,     0,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -117,     0,     0,     0,     0,   408,     0,     0,  -117,  -117,
       0,  -117,  -117,  -117,  -117,  -117,  -117,   -96,  -117,  -117,
    -117,  -117,  -117,  -117,     0,   -96,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,  -121,     0,     0,     0,  -121,     0,     0,     0,     0,
    -121,     0,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -119,     0,     0,     0,  -119,
       0,     0,     0,     0,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -118,
       0,     0,     0,  -118,     0,     0,     0,     0,  -118,     0,
    -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -120,     0,     0,     0,  -120,     0,     0,
       0,     0,  -120,     0,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -104,     0,     0,
       0,  -104,     0,     0,     0,     0,  -104,     0,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,   -66,     0,     0,     0,   -66,     0,     0,     0,     0,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,     0,     0,     0,   -67,
       0,     0,     0,     0,   -67,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,
       0,     0,     0,   -68,     0,     0,     0,     0,   -68,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,     0,     0,     0,   -69,     0,     0,
       0,     0,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -96,     0,     0,
       0,   -96,     0,     0,     0,     0,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   470,   -96,   -96,   -96,   -96,   -96,
     -96,  -105,     0,     0,     0,  -105,     0,     0,     0,     0,
    -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -103,     0,     0,     0,  -103,
       0,     0,     0,     0,  -103,     0,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -109,
       0,     0,     0,  -109,     0,     0,     0,     0,  -109,     0,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -106,     0,     0,     0,     0,     0,  -106,
       0,     0,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,   -96,     0,     0,
       0,     0,     0,   -96,     0,     0,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,  -106,     0,     0,     0,  -106,     0,     0,     0,     0,
    -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,   -96,     0,     0,     0,   -96,
       0,     0,     0,     0,   -96,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,  -108,
       0,     0,     0,     0,     0,  -108,     0,     0,  -108,     0,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -122,     0,     0,     0,     0,     0,  -122,
       0,     0,  -122,     0,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -108,     0,     0,
       0,  -108,     0,     0,     0,     0,  -108,     0,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -122,     0,     0,     0,  -122,     0,     0,     0,     0,
    -122,     0,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -107,     0,     0,     0,     0,
       0,  -107,     0,     0,  -107,     0,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   -70,
       0,     0,     0,     0,     0,   -70,     0,     0,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -72,     0,     0,     0,     0,     0,   -72,
       0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,     0,     0,
       0,     0,     0,   -71,     0,     0,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -73,     0,     0,     0,     0,     0,   -73,     0,     0,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -97,     0,     0,     0,     0,
       0,     0,     0,   -97,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,  -107,
       0,     0,     0,  -107,     0,     0,     0,     0,  -107,     0,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,   -70,     0,     0,     0,   -70,     0,     0,
       0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -72,     0,     0,
       0,   -72,     0,     0,     0,     0,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -71,     0,     0,     0,   -71,     0,     0,     0,     0,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,   -73,
       0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -97,
       0,     0,     0,     0,     0,   -97,     0,     0,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,     0,     0,     0,   -97,     0,     0,
       0,     0,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,  -110,     0,     0,
       0,     0,     0,  -110,     0,     0,  -110,     0,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,     0,     0,     0,  -110,     0,     0,     0,     0,
    -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -111,     0,     0,     0,     0,
       0,  -111,     0,     0,  -111,     0,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
       0,     0,     0,  -111,     0,     0,     0,     0,  -111,     0,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,   135,     0,     0,     0,     0,     0,     0,
       0,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -94,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -94,   -94,
       0,   -94,   -94,   -94,   -94,   -94,   -94,   135,   -94,   -94,
     -94,   -94,   -94,   -94,     0,   -91,   -91,     0,   -91,   -91,
     -91,   -91,   -91,   -91,   -96,   -91,   -91,   -91,   -91,   -91,
     -91,     0,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   135,   -96,   -96,   -96,   -96,   -96,   -96,     0,   -92,
     -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   135,   -92,
     -92,   -92,   -92,   -92,   -92,     0,   -93,   -93,     0,   -93,
     -93,   -93,   -93,   -93,   -93,   -95,   -93,   -93,   -93,   -93,
     -93,   -93,     0,   -95,   -95,     0,   -95,   -95,   -95,   -95,
     -95,   -95,   -97,   -95,   -95,   -95,   -95,   -95,   -95,     0,
     -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,
     -97,   -97,   -97,   -97,   -97,   -97,   406,     0,     0,     0,
       0,     0,   -90,     0,     0,   -90,     0,   -90,   -90,   -90,
     -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,
     -94,     0,     0,     0,     0,     0,   -94,     0,     0,   -94,
       0,   -94,   -94,   -94,   -94,   -94,   -94,  -121,   -94,   -94,
     -94,   -94,   -94,   -94,     0,  -121,  -121,     0,  -121,  -121,
    -121,  -121,  -121,  -121,  -119,  -121,  -121,  -121,  -121,  -121,
    -121,     0,  -119,  -119,     0,  -119,  -119,  -119,  -119,  -119,
    -119,  -118,  -119,  -119,  -119,  -119,  -119,  -119,     0,  -118,
    -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,  -120,  -118,
    -118,  -118,  -118,  -118,  -118,     0,  -120,  -120,     0,  -120,
    -120,  -120,  -120,  -120,  -120,  -104,  -120,  -120,  -120,  -120,
    -120,  -120,     0,  -104,  -104,     0,  -104,  -104,  -104,  -104,
    -104,  -104,   -66,  -104,  -104,  -104,  -104,  -104,  -104,     0,
     -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -67,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -67,   -67,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -68,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -68,   -68,     0,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,
    -105,   -69,   -69,   -69,   -69,   -69,   -69,     0,  -105,  -105,
       0,  -105,  -105,  -105,  -105,  -105,  -105,  -103,  -105,  -105,
    -105,  -105,  -105,  -105,     0,  -103,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,  -109,  -103,  -103,  -103,  -103,  -103,
    -103,     0,  -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,
    -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,   469,     0,
       0,     0,   -90,     0,     0,     0,     0,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,   -94,     0,     0,     0,   -94,     0,     0,     0,
       0,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,  -121,     0,     0,     0,
       0,     0,  -121,     0,     0,  -121,     0,  -121,  -121,  -121,
    -121,  -121,  -121,     0,  -121,  -121,  -121,  -121,  -121,  -121,
    -119,     0,     0,     0,     0,     0,  -119,     0,     0,  -119,
       0,  -119,  -119,  -119,  -119,  -119,  -119,     0,  -119,  -119,
    -119,  -119,  -119,  -119,  -118,     0,     0,     0,     0,     0,
    -118,     0,     0,  -118,     0,  -118,  -118,  -118,  -118,  -118,
    -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,  -120,     0,
       0,     0,     0,     0,  -120,     0,     0,  -120,     0,  -120,
    -120,  -120,  -120,  -120,  -120,     0,  -120,  -120,  -120,  -120,
    -120,  -120,  -104,     0,     0,     0,     0,     0,  -104,     0,
       0,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,     0,
    -104,  -104,  -104,  -104,  -104,  -104,   -66,     0,     0,     0,
       0,     0,   -66,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,     0,     0,   -67,     0,     0,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,     0,     0,
     -68,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
       0,     0,     0,     0,   -69,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   406,     0,     0,     0,     0,     0,   -91,     0,
       0,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -96,     0,     0,     0,
       0,     0,   -96,     0,     0,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,
    -105,     0,     0,     0,     0,     0,  -105,     0,     0,  -105,
       0,  -105,  -105,  -105,  -105,  -105,  -105,     0,  -105,  -105,
    -105,  -105,  -105,  -105,  -103,     0,     0,     0,     0,     0,
    -103,     0,     0,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,     0,  -103,  -103,  -103,  -103,  -103,  -103,  -109,     0,
       0,     0,     0,     0,  -109,     0,     0,  -109,     0,  -109,
    -109,  -109,  -109,  -109,  -109,  -106,  -109,  -109,  -109,  -109,
    -109,  -109,     0,  -106,  -106,     0,  -106,  -106,  -106,  -106,
    -106,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,  -121,
       0,     0,     0,  -121,     0,     0,     0,     0,  -121,     0,
    -121,  -121,  -121,  -121,  -121,  -121,     0,  -121,  -121,  -121,
    -121,  -121,  -121,  -119,     0,     0,     0,  -119,     0,     0,
       0,     0,  -119,     0,  -119,  -119,  -119,  -119,  -119,  -119,
       0,  -119,  -119,  -119,  -119,  -119,  -119,  -118,     0,     0,
       0,  -118,     0,     0,     0,     0,  -118,     0,  -118,  -118,
    -118,  -118,  -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,
    -118,  -120,     0,     0,     0,  -120,     0,     0,     0,     0,
    -120,     0,  -120,  -120,  -120,  -120,  -120,  -120,     0,  -120,
    -120,  -120,  -120,  -120,  -120,  -104,     0,     0,     0,  -104,
       0,     0,     0,     0,  -104,     0,  -104,  -104,  -104,  -104,
    -104,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,   -66,
       0,     0,     0,   -66,     0,     0,     0,     0,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -67,     0,     0,     0,   -67,     0,     0,
       0,     0,   -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -68,     0,     0,
       0,   -68,     0,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -69,     0,     0,     0,   -69,     0,     0,     0,     0,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   469,     0,     0,     0,   -91,
       0,     0,     0,     0,   -91,     0,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -96,
       0,     0,     0,   -96,     0,     0,     0,     0,   -96,     0,
     -96,   -96,   -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,  -105,     0,     0,     0,  -105,     0,     0,
       0,     0,  -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,
       0,  -105,  -105,  -105,  -105,  -105,  -105,  -103,     0,     0,
       0,  -103,     0,     0,     0,     0,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,  -109,     0,     0,     0,  -109,     0,     0,     0,     0,
    -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,     0,  -109,
    -109,  -109,  -109,  -109,  -109,  -106,     0,     0,     0,     0,
       0,  -106,     0,     0,  -106,     0,  -106,  -106,  -106,  -106,
    -106,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,   406,
       0,     0,     0,     0,     0,   -92,     0,     0,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   406,     0,     0,     0,     0,     0,   -93,
       0,     0,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -95,     0,     0,
       0,     0,     0,   -95,     0,     0,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,  -108,   -95,   -95,   -95,   -95,   -95,
     -95,     0,  -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,
    -108,  -122,  -108,  -108,  -108,  -108,  -108,  -108,     0,  -122,
    -122,     0,  -122,  -122,  -122,  -122,  -122,  -122,     0,  -122,
    -122,  -122,  -122,  -122,  -122,  -106,     0,     0,     0,  -106,
       0,     0,     0,     0,  -106,     0,  -106,  -106,  -106,  -106,
    -106,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,   469,
       0,     0,     0,   -92,     0,     0,     0,     0,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   469,     0,     0,     0,   -93,     0,     0,
       0,     0,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -95,     0,     0,
       0,   -95,     0,     0,     0,     0,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -97,     0,     0,     0,     0,     0,   -97,     0,     0,
     -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,  -108,     0,     0,     0,     0,
       0,  -108,     0,     0,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -122,
       0,     0,     0,     0,     0,  -122,     0,     0,  -122,     0,
    -122,  -122,  -122,  -122,  -122,  -122,  -107,  -122,  -122,  -122,
    -122,  -122,  -122,     0,  -107,  -107,     0,  -107,  -107,  -107,
    -107,  -107,  -107,   -70,  -107,  -107,  -107,  -107,  -107,  -107,
       0,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -72,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -72,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -71,   -72,   -72,
     -72,   -72,   -72,   -72,     0,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -73,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -97,     0,
       0,     0,   -97,     0,     0,     0,     0,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,  -108,     0,     0,     0,  -108,     0,     0,     0,
       0,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,     0,
    -108,  -108,  -108,  -108,  -108,  -108,  -122,     0,     0,     0,
    -122,     0,     0,     0,     0,  -122,     0,  -122,  -122,  -122,
    -122,  -122,  -122,     0,  -122,  -122,  -122,  -122,  -122,  -122,
    -107,     0,     0,     0,     0,     0,  -107,     0,     0,  -107,
       0,  -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,
    -107,  -107,  -107,  -107,   -70,     0,     0,     0,     0,     0,
     -70,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -72,     0,
       0,     0,     0,     0,   -72,     0,     0,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -71,     0,     0,     0,     0,     0,   -71,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,
       0,     0,   -73,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
    -107,     0,     0,     0,  -107,     0,     0,     0,     0,  -107,
       0,  -107,  -107,  -107,  -107,  -107,  -107,     0,  -107,  -107,
    -107,  -107,  -107,  -107,   -70,     0,     0,     0,   -70,     0,
       0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -72,     0,
       0,     0,   -72,     0,     0,     0,     0,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -71,     0,     0,     0,   -71,     0,     0,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,
     -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,  -110,   -73,   -73,   -73,   -73,   -73,   -73,
       0,  -110,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,
       0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,     0,     0,
       0,     0,     0,  -110,     0,     0,  -110,     0,  -110,  -110,
    -110,  -110,  -110,  -110,  -111,  -110,  -110,  -110,  -110,  -110,
    -110,     0,  -111,  -111,     0,  -111,  -111,  -111,  -111,  -111,
    -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,  -110,     0,
       0,     0,  -110,     0,     0,     0,     0,  -110,     0,  -110,
    -110,  -110,  -110,  -110,  -110,     0,  -110,  -110,  -110,  -110,
    -110,  -110,  -111,     0,     0,     0,     0,     0,  -111,     0,
       0,  -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,     0,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,     0,     0,     0,
    -111,     0,     0,     0,     0,  -111,     0,  -111,  -111,  -111,
    -111,  -111,  -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,
     -85,     0,     0,     0,     0,   -85,     0,   467,   468,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,     0,     0,     0,   -86,     0,   467,   468,   -86,
     -86,   -86,   -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,
     -87,     0,     0,     0,     0,   -87,     0,   467,   468,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -89,     0,     0,     0,     0,   -89,     0,   467,   468,   -89,
     -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -88,     0,     0,     0,     0,   -88,     0,   467,   468,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -83,     0,     0,     0,     0,   -83,     0,     0,     0,   463,
     464,   465,   466,     0,   -83,   -83,   -83,   -83,   -83,   -83,
     -84,     0,     0,     0,     0,   -84,     0,     0,     0,   463,
     464,   465,   466,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -85,     0,     0,   -85,     0,   404,   405,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,
       0,   -86,     0,   404,   405,   -86,   -86,   -86,   -86,     0,
     -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,
       0,   404,   405,   -87,   -87,   -87,   -87,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -89,     0,     0,   -89,     0,   404,
     405,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -88,     0,     0,   -88,     0,   404,   405,   -88,
     -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,   -88,   -88,
     -81,     0,     0,   -81,     0,     0,     0,   400,   401,   402,
     403,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -82,     0,
       0,   -82,     0,     0,     0,   400,   401,   402,   403,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,     0,   -83,
       0,     0,     0,   400,   401,   402,   403,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,     0,     0,   -84,     0,     0,
       0,   400,   401,   402,   403,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,     0,   133,   134,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
       0,   133,   134,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,     0,   133,   134,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -89,   -89,     0,   133,   134,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -88,   -88,     0,   133,
     134,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -78,   -78,     0,     0,     0,   129,   130,   131,
     132,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -79,   -79,
       0,     0,     0,   129,   130,   131,   132,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -80,   -80,     0,     0,     0,   129,
     130,   131,   132,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -81,   -81,     0,     0,     0,   129,   130,   131,   132,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -82,   -82,     0,     0,
       0,   129,   130,   131,   132,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -83,   -83,     0,     0,     0,   129,   130,   131,
     132,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -84,   -84,
       0,     0,     0,   129,   130,   131,   132,     0,   -84,   -84,
     -84,   -84,   -84,   -84
};

static const yytype_int16 yycheck[] =
{
      30,    23,   187,    66,    29,    27,   103,   139,     3,   237,
       5,   187,   142,     8,   190,     0,   353,    47,   355,     5,
       5,   251,     0,   187,     8,   362,     5,    92,    26,   205,
      25,   207,    62,    63,     0,     5,    66,    21,     4,   215,
      26,   217,     0,   219,     2,    29,     4,    26,   278,     3,
     115,    35,   149,   150,     8,     1,    22,     8,   288,     5,
       3,    27,   187,    14,    22,     8,    28,    29,   198,    27,
      21,    25,    30,   103,    28,     0,   106,   107,     0,    23,
       5,   311,    25,     5,    35,    28,    28,    29,    26,     5,
     187,   187,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    23,    66,     3,
       3,     5,   142,   341,     8,     8,    28,    29,   100,   149,
     150,     1,     3,     3,     0,     5,     1,     8,     3,     5,
       5,    25,    25,   163,    28,    28,    26,   103,     5,    29,
       5,    92,   187,    25,    25,   103,    26,    28,     3,   379,
       0,    26,    25,     8,     3,     5,    23,   187,    23,     8,
     190,   391,     3,    25,   115,   187,     0,     8,   198,     0,
      25,     5,   202,    28,     5,   205,    25,   207,     3,     4,
     310,     6,     7,    25,    25,   215,     1,   217,     3,   219,
       5,   221,    17,    18,    19,    25,    21,    22,    23,     5,
      25,    26,    28,    29,   186,    30,     1,   237,     3,    34,
       5,    26,   442,   238,     5,    25,    26,    23,     5,    29,
     202,   353,   252,   355,   454,   290,    26,    25,     5,    29,
     362,    26,    23,   363,    25,     0,    23,    28,    29,   221,
       5,     3,     4,     5,     6,     7,    23,     5,    25,   279,
      25,    28,    29,     3,   238,    17,    18,    19,     8,    21,
      22,    28,    29,    25,    25,    23,    28,    25,    30,   294,
      28,    29,    34,    25,     5,    25,   234,   228,   408,   237,
     310,   232,   312,   313,     3,     0,     5,    25,   420,     8,
       5,     3,    23,     3,    25,   425,   359,    28,    29,     3,
       4,    26,     6,     7,   334,    26,    25,    26,    29,     5,
     294,   341,     5,    17,    18,    19,    25,    21,    22,    23,
      24,    25,     5,     0,    25,    26,    30,    23,     5,   359,
      34,     5,    28,    29,    26,    26,     0,    29,     5,   290,
      23,     5,    25,     0,    26,    28,    29,    29,     5,    23,
     380,    25,    24,    26,    28,    29,    23,    29,    25,    25,
      26,    28,    29,    29,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   507,   475,    28,
      29,   363,     1,   341,     3,     4,     5,     6,     7,    26,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   359,    21,    22,    23,    24,    25,    24,    26,    28,
      26,    30,    29,   443,    26,    34,    24,    24,   481,     3,
      24,    29,    29,   553,     8,    29,   408,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,    25,    26,   425,    26,   475,    25,    24,   478,   479,
     635,   481,    29,   638,    26,    24,     3,    29,     3,   635,
      29,     8,   638,     8,    28,     3,    28,     3,    24,   599,
       8,   635,     8,    29,   638,   660,   506,   662,    25,    26,
      25,   578,   579,    25,   660,   615,   662,    25,    26,    25,
      26,   676,    24,   678,   624,   680,   660,    29,   662,    28,
     676,    25,   678,    25,   680,    25,     5,   537,   538,   475,
     635,    25,   676,   638,   678,    25,   680,   475,   648,    26,
     550,    26,   552,   481,    23,   507,    25,   657,    24,    28,
      29,    24,    26,    29,    26,   660,    29,   662,   635,   635,
      24,   638,   638,    26,    26,    29,    29,    29,   578,   579,
      26,   676,    25,   678,    25,   680,    38,    39,    40,    41,
      42,    43,    24,   660,   660,   662,   662,    29,   550,   599,
      24,   553,    25,    26,    30,    29,    29,    25,   608,   676,
     676,   678,   678,   680,   680,   615,    28,    29,    25,    26,
     635,    47,    29,   638,   624,    25,    38,    39,    40,    41,
      42,    43,    25,   633,   634,   635,    62,    63,   638,    26,
      66,    26,    29,   635,    29,   660,   638,   662,   648,     3,
       4,    25,     6,     7,    25,    26,    26,   657,    29,    29,
     660,   676,   662,   678,    25,   680,    25,    21,   660,   669,
     662,    25,   672,    25,   674,    25,   676,   103,   678,    26,
     680,    25,    26,   683,   676,    29,   678,   687,   680,    25,
       3,    25,    28,    29,    28,    29,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    25,    28,    29,    28,    29,   142,   669,    26,    26,
     672,    29,   674,   149,   150,    25,    26,    28,    29,    29,
      25,   683,    26,    28,    29,   687,     1,   163,     3,     4,
       5,     6,     7,    25,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    25,    21,    22,    23,    24,
      25,   187,    25,    28,   190,    30,    25,    26,    26,    34,
      29,    29,   198,    25,    26,    26,   202,    29,    29,   205,
      25,   207,     3,     4,    25,     6,     7,    28,    29,   215,
       3,   217,    26,   219,    26,   221,    17,    18,    19,    26,
      21,    22,    23,    24,    25,    24,     3,    25,    26,    30,
      29,   237,    26,    34,    33,    34,    35,    36,    25,    38,
      39,    40,    41,    42,    43,    25,   252,   253,     1,    25,
       3,     4,     5,     6,     7,    25,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    26,    21,    22,
      23,    24,    25,   279,    26,    28,    26,    30,    26,     3,
       4,    34,     6,     7,    25,    26,    25,     3,    29,    28,
      29,    25,    26,    17,    18,    19,    26,    21,    22,    23,
      26,    25,     3,    29,   310,    26,   312,   313,    29,     1,
      34,     3,     4,     5,     6,     7,    26,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   334,    21,
      22,    23,    24,    25,    28,   341,    28,    25,    30,    26,
      28,    29,    34,    25,    26,    26,     1,    29,     3,     4,
       5,     6,     7,   359,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    26,    21,    22,    23,    24,
      25,    28,    29,    28,   380,    30,    26,    25,     4,    34,
      28,    29,    25,    26,    26,    26,    29,    29,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     3,     4,    26,     6,     7,    25,    26,    26,    30,
      29,    29,    25,    26,    26,    17,    18,    19,    26,    21,
      22,    23,    26,    25,    26,    29,    47,    26,    30,    26,
      29,    26,    34,    26,    29,    26,    29,   443,    29,    28,
      26,    62,    63,    29,    26,    66,    26,    29,    99,    29,
      28,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,    26,    35,    26,    29,   475,
      29,    26,    20,    26,    29,   481,    29,    25,    28,    29,
      28,    29,   103,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    26,    28,    29,    29,
     506,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    26,    26,   112,    29,
      29,   142,    26,    26,    26,    29,    29,    29,   149,   150,
      -1,   537,   538,     3,     4,    26,     6,     7,    29,    -1,
      26,    -1,   163,    29,   550,    -1,   552,    17,    18,    19,
      -1,    21,    22,    23,    26,    25,    26,    29,    26,    26,
      30,    29,    29,    -1,    34,    26,   187,    26,    29,   190,
      29,    26,   578,   579,    29,    26,    26,   198,    29,    29,
      26,   202,    26,    29,   205,    29,   207,    26,    26,    26,
      29,    29,    29,   599,   215,    -1,   217,    -1,   219,    -1,
     221,    26,   608,   609,    29,    26,    -1,    26,    29,   615,
      29,    26,    26,    -1,    29,    29,   237,    26,   624,    -1,
      29,     3,     4,    26,     6,     7,    29,   633,   634,   635,
      26,   252,   638,    29,    -1,    17,    18,    19,    -1,    21,
      22,    23,   648,    25,    26,    -1,    26,    26,    30,    29,
      29,   657,    34,    -1,   660,    -1,   662,    26,   279,    26,
      29,    26,    29,   669,    29,    -1,   672,    -1,   674,    -1,
     676,    -1,   678,    26,   680,    26,    29,   683,    29,    28,
      29,   687,    28,    29,    25,    26,    28,    29,    -1,   310,
      -1,   312,   313,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   334,    21,    22,    23,    24,    25,    -1,
     341,    28,    -1,    30,    28,    29,    -1,    34,    25,    26,
      -1,     1,    -1,     3,     4,     5,     6,     7,   359,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    25,    26,    28,   380,
      30,    25,    26,    -1,    34,    25,    26,    25,    26,    25,
      26,    25,    26,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     3,     4,    -1,     6,
       7,    25,    26,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,    -1,    25,    26,
      -1,    47,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    20,    -1,    -1,
     481,    -1,    25,    26,    -1,    -1,    29,   103,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,   506,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,   537,   538,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,   163,    -1,   550,
      -1,   552,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,   187,    -1,    -1,   190,    -1,    -1,   578,   579,    -1,
      -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,   205,
      -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,   599,   215,
      -1,   217,    -1,   219,    -1,   221,    -1,   608,    -1,    -1,
      -1,    -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,    -1,
      -1,   237,    -1,   624,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,   633,   634,   635,    -1,   252,   638,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,   648,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,   657,    34,    -1,   660,
      -1,   662,    -1,   279,    -1,    -1,    -1,    -1,   669,    -1,
      -1,   672,    -1,   674,    -1,   676,    -1,   678,    -1,   680,
      -1,    -1,   683,    -1,    -1,    -1,   687,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,   312,   313,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   334,    21,
      22,    23,    24,    25,    -1,   341,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   359,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,   380,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    47,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,   443,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    20,    -1,    -1,   481,    24,    25,    -1,    -1,
      -1,    29,   103,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
     506,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,   537,   538,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   163,    -1,   550,    -1,   552,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,   187,    -1,    -1,   190,
      -1,    -1,   578,   579,    -1,    -1,    -1,   198,    -1,    -1,
      -1,   202,    -1,    -1,   205,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,   599,   215,    -1,   217,    -1,   219,    -1,
     221,    -1,   608,    -1,    -1,    -1,    -1,    -1,    -1,   615,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,   624,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,   633,   634,   635,
      -1,   252,   638,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,   648,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,   657,    -1,    -1,   660,    -1,   662,    -1,   279,    -1,
      -1,    -1,    -1,   669,    -1,    -1,   672,    -1,   674,    -1,
     676,    -1,   678,    -1,   680,    -1,    -1,   683,    -1,    -1,
      -1,   687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
      -1,   312,   313,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   334,    21,    22,    23,    24,    25,    -1,
     341,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,   359,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,   380,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    47,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    20,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    28,    29,   103,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,   506,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,   537,   538,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,   163,    -1,   550,
      -1,   552,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,   187,    -1,    -1,   190,    -1,    -1,   578,   579,    -1,
      -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,   205,
      -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,   599,   215,
      -1,   217,    -1,   219,    -1,   221,    -1,   608,    -1,    -1,
      -1,    -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,    -1,
      -1,   237,    -1,   624,     3,     4,     5,     6,     7,    -1,
      -1,    -1,   633,   634,   635,    -1,   252,   638,    17,    18,
      19,    -1,    21,    22,    -1,    -1,    25,   648,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,   657,    -1,    -1,   660,
      -1,   662,    -1,   279,    -1,    -1,    -1,    -1,   669,    -1,
      -1,   672,    -1,   674,    -1,   676,    -1,   678,    -1,   680,
      -1,    -1,   683,    -1,    -1,    -1,   687,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,   312,   313,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   334,    21,
      22,    23,    24,    25,    -1,   341,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   359,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,   380,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,    -1,    47,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,   443,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    20,    -1,    -1,   481,    -1,    -1,    -1,    -1,
      28,    29,   103,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
     506,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,   537,   538,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   163,    -1,   550,    -1,   552,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,   187,    -1,    -1,   190,
      -1,    -1,   578,   579,    -1,    -1,    -1,   198,    -1,    -1,
      -1,   202,    -1,    -1,   205,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,   599,   215,    -1,   217,    -1,   219,    -1,
     221,    -1,   608,    -1,    -1,    -1,    -1,    -1,    -1,   615,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,   624,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,   633,   634,   635,
      -1,   252,   638,    17,    18,    19,    -1,    21,    22,    23,
      -1,    25,   648,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,   657,    -1,    -1,   660,    -1,   662,    -1,   279,    -1,
      -1,    -1,    -1,   669,    -1,    -1,   672,    -1,   674,    -1,
     676,    -1,   678,    -1,   680,    -1,    -1,   683,    -1,    -1,
      -1,   687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
      -1,   312,   313,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   334,    21,    22,    23,    24,    25,    -1,
     341,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,   359,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,   380,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    47,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    62,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    20,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    28,    29,   103,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,   506,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,   537,   538,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,   163,    -1,   550,
      -1,   552,    17,    18,    19,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,   187,    -1,    -1,   190,    -1,    -1,   578,   579,    -1,
      -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,   205,
      -1,   207,    -1,    -1,    -1,    -1,    -1,    -1,   599,   215,
      -1,   217,    -1,   219,    -1,   221,    -1,   608,    -1,    -1,
      -1,    -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,    -1,
      -1,   237,    -1,   624,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,   633,   634,   635,    -1,   252,   638,    17,    18,
      19,    -1,    21,    22,    -1,    -1,    25,   648,    -1,    28,
      -1,    30,    -1,    -1,    -1,    34,   657,    -1,    -1,   660,
      -1,   662,    -1,   279,    -1,    -1,    -1,    -1,   669,    -1,
      -1,   672,    -1,   674,    -1,   676,    -1,   678,    -1,   680,
      -1,    -1,   683,    -1,    -1,    -1,   687,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,   312,   313,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   334,    21,
      22,    23,    24,    25,    -1,   341,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   359,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,   380,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    -1,    -1,    25,    26,    -1,    47,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,   443,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    20,    -1,    -1,   481,    -1,    -1,    -1,    -1,
      28,    29,   103,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
     506,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,   150,
      -1,   537,   538,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   163,    -1,   550,    -1,   552,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,   187,    -1,    -1,   190,
      -1,    -1,   578,   579,    -1,    -1,    -1,   198,    -1,    -1,
      -1,   202,    -1,    -1,   205,    -1,   207,    -1,    -1,    -1,
      -1,    -1,    -1,   599,   215,    -1,   217,    -1,   219,    -1,
     221,    -1,   608,    -1,    -1,    -1,    -1,    -1,    -1,   615,
      -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,   624,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,   633,   634,   635,
      -1,   252,   638,    17,    18,    19,    -1,    21,    22,    -1,
      -1,    25,   648,    -1,    28,    -1,    30,    -1,    -1,    -1,
      34,   657,    -1,    -1,   660,    -1,   662,    -1,   279,    -1,
      -1,    -1,    -1,   669,    -1,    -1,   672,    -1,   674,    -1,
     676,    -1,   678,    -1,   680,    -1,    -1,   683,    -1,    -1,
      -1,   687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
      -1,   312,   313,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   334,    21,    22,    23,    24,    25,    -1,
     341,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,   359,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,   380,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    -1,    -1,    25,    26,
      -1,    -1,    47,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,   443,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
      -1,    -1,    -1,    -1,   475,     3,     4,    -1,     6,     7,
     481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    17,
      18,    19,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,   506,    34,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,   537,   538,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,    -1,   163,   550,
      -1,   552,    17,    18,    19,    -1,    21,    22,    -1,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,   187,    -1,    -1,   190,    -1,   578,   579,    -1,
      -1,    -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,
     205,    -1,   207,    -1,    24,    -1,    -1,    -1,   599,    29,
     215,    -1,   217,    -1,   219,    -1,   221,   608,    38,    39,
      40,    41,    42,    43,   615,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,   624,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,   633,   634,   635,    -1,    -1,   638,   253,    -1,
      17,    18,    19,    -1,    21,    22,    -1,   648,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,   657,    34,    -1,   660,
      -1,   662,    -1,    -1,   279,    -1,    -1,    -1,   669,    -1,
      -1,   672,    -1,   674,    -1,   676,    -1,   678,    -1,   680,
      -1,    -1,   683,    -1,    -1,    -1,   687,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,   310,    -1,   312,   313,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    -1,    -1,    25,
      30,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,   334,
      -1,     3,     4,    -1,     6,     7,   341,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    -1,    62,    25,   359,    -1,    66,    -1,    30,    -1,
      -1,    -1,    34,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,   380,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,   103,    -1,    -1,    34,    -1,    -1,    -1,
      -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,   136,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    26,    -1,    -1,    29,   443,   149,
     150,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,    -1,    -1,    -1,    -1,
     475,     3,     4,    -1,     6,     7,   481,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    17,    18,    19,   198,    21,
      22,    -1,   202,    25,    -1,   205,    -1,   207,    30,    -1,
      -1,   506,    34,    24,    -1,   215,    -1,   217,    29,   219,
      -1,   221,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,   237,    -1,    -1,
      -1,    -1,   537,   538,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,    -1,    -1,   550,    -1,   552,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,   578,   579,    28,    26,    30,    -1,    29,
      -1,    34,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,   599,    -1,    -1,    -1,    -1,    -1,
     310,    -1,   312,   608,   609,    -1,    -1,    -1,    -1,    -1,
     615,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,   624,
      -1,    -1,     3,     4,   334,     6,     7,    -1,   633,   634,
     635,   341,    47,   638,    -1,    -1,    17,    18,    19,    -1,
      21,    22,    23,   648,    25,    -1,    -1,    -1,    -1,   359,
      -1,    66,   657,    34,    -1,   660,    -1,   662,    -1,    -1,
      -1,    -1,    -1,    -1,   669,    -1,    -1,   672,    -1,   674,
      -1,   676,    -1,   678,    -1,   680,    -1,    -1,   683,    -1,
      -1,    -1,   687,    -1,    -1,    -1,    -1,    24,   103,    -1,
      -1,    -1,    29,    -1,   404,   405,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    26,
      -1,    -1,    29,    -1,   149,   150,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,    -1,
     470,    -1,    -1,    -1,    -1,   475,     3,     4,    -1,     6,
       7,   481,   187,    -1,    -1,   190,    -1,    -1,    -1,    -1,
      17,    18,    19,   198,    21,    22,    -1,   202,    25,    -1,
     205,    -1,   207,    30,    -1,    -1,    -1,    34,    -1,    -1,
     215,    -1,   217,    -1,   219,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,   237,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
     550,    20,    28,    -1,    30,    -1,    -1,    -1,    34,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,   578,   579,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   599,
      21,    22,    23,    24,    25,   310,    -1,    28,    -1,    30,
      -1,    -1,    -1,    34,    -1,   615,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,   624,    -1,    -1,     3,     4,   334,
       6,     7,    -1,    -1,    -1,   635,   341,    47,   638,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    23,   648,    25,
      -1,    -1,    -1,    -1,   359,    -1,    66,   657,    34,    -1,
     660,    -1,   662,    -1,    -1,    -1,    -1,    -1,    -1,   669,
      -1,    -1,   672,    -1,   674,    -1,   676,    -1,   678,    -1,
     680,    -1,    -1,   683,    -1,    -1,    -1,   687,    -1,    -1,
      -1,    -1,    -1,   103,    -1,   400,   401,   402,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,   122,   123,   124,   125,   126,   127,   128,    -1,
      17,    18,    19,    -1,    21,    22,   136,    -1,    25,    -1,
      -1,    -1,   142,    30,    -1,    -1,    -1,    34,    -1,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
     475,     3,     4,    -1,     6,     7,   481,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    17,    18,    19,   198,    21,
      22,    -1,   202,    25,    -1,   205,    -1,   207,    30,    -1,
      -1,    -1,    34,    -1,    -1,   215,    -1,   217,    -1,   219,
      -1,   221,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,   237,    14,    15,
      16,    17,    18,    19,    30,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,   550,     3,     4,    34,     6,
       7,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,    -1,    25,    -1,
      66,    -1,    -1,   578,   579,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,   599,    -1,    -1,    17,    18,    19,
     310,    21,    22,    23,   100,    25,    -1,   103,    -1,    -1,
     615,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,   624,
      30,    -1,    -1,    -1,   334,    -1,   122,    -1,    -1,    -1,
     635,   341,    -1,   638,    -1,    -1,    -1,    47,    -1,    -1,
     136,    -1,    -1,   648,    -1,    -1,   142,    -1,    -1,   359,
      -1,    -1,   657,   149,   150,   660,    66,   662,    -1,    -1,
      -1,    -1,    -1,    -1,   669,    -1,    -1,   672,    -1,   674,
      -1,   676,    -1,   678,    -1,   680,    -1,    -1,   683,    -1,
      -1,    -1,   687,    -1,   394,   395,   396,   397,   398,   399,
     186,   187,    -1,   103,   190,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   198,    -1,    -1,    -1,   202,    -1,    -1,   205,
      -1,   207,   122,    -1,    -1,    -1,    -1,    -1,    -1,   215,
      -1,   217,    -1,   219,    -1,   221,   136,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,   149,
     150,   237,    -1,    -1,    -1,    -1,    -1,   457,   458,   459,
     460,   461,   462,    -1,     3,     4,    -1,     6,     7,    -1,
     470,    -1,    -1,    -1,    -1,   475,    -1,    -1,    17,    18,
      19,   481,    21,    22,    23,    -1,    25,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    34,    -1,    -1,   198,    -1,
      -1,    -1,   202,    -1,    -1,   205,    -1,   207,    -1,    -1,
      -1,    -1,    -1,    -1,   300,   215,    -1,   217,    -1,   219,
      -1,   221,    -1,    -1,   310,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,   237,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,   334,    25,
     550,    24,    28,    -1,    30,   341,    29,    -1,    34,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    -1,    -1,   359,    -1,    -1,    -1,   363,   578,   579,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   599,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
     310,    -1,    -1,    34,    -1,   615,    -1,    -1,    -1,    -1,
      -1,   407,   408,    -1,   624,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,   334,   635,    25,    26,   638,   425,
      29,   341,    31,    32,    33,    34,    35,    36,   648,    38,
      39,    40,    41,    42,    43,    -1,    -1,   657,    -1,   359,
     660,    -1,   662,    -1,    -1,    -1,    -1,    -1,    -1,   669,
      -1,    -1,   672,    -1,   674,    -1,   676,    47,   678,    -1,
     680,    -1,    -1,   683,   470,    -1,    -1,   687,    -1,   475,
      60,    -1,    -1,    -1,    -1,   481,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,   507,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,     3,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    22,    23,   550,    25,    -1,   553,    -1,    -1,
     470,    -1,    -1,    -1,    34,   475,    -1,    -1,    -1,   149,
     150,   481,    -1,    -1,   154,     3,     4,    -1,     6,     7,
      -1,    -1,   578,   579,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    -1,    25,     3,     4,
      -1,     6,     7,   599,    -1,    -1,    34,   187,   188,   189,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    23,   615,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   624,    34,
      -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,   635,
     550,    -1,   638,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    -1,   648,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   657,    34,    -1,   660,    -1,   662,    -1,   578,   579,
      -1,   251,    -1,   669,    -1,    -1,   672,    -1,   674,    -1,
     676,    20,   678,    -1,   680,    24,    25,   683,    -1,   599,
      29,   687,    31,    32,    33,    34,    35,    36,   278,    38,
      39,    40,    41,    42,    43,   615,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,   624,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,   635,    -1,    -1,   638,    -1,
      -1,   311,    17,    18,    19,    -1,    21,    22,   648,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,   657,    -1,    34,
     660,    -1,   662,    -1,   334,    -1,    -1,    -1,    -1,   669,
      -1,    -1,   672,    -1,   674,    -1,   676,    -1,   678,    -1,
     680,    -1,    -1,   683,    -1,    -1,    -1,   687,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   365,   366,   367,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,   379,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,   391,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,     3,     4,    34,     6,     7,    -1,    -1,
     410,   411,   412,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    25,    -1,   427,   428,   429,
      -1,    -1,    -1,    -1,    34,     1,    -1,     3,     4,     5,
       6,     7,   442,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,   454,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,   474,   475,   476,   477,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,   509,
     510,   511,    34,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,     3,     4,    34,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,   555,   556,   557,    17,    18,
      19,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,   578,   579,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,     3,     4,    34,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    -1,    -1,    25,    24,   635,   636,   637,   638,    29,
      -1,    -1,    34,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    -1,     3,     4,    -1,     6,     7,
     660,    -1,   662,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    -1,   676,    25,   678,     1,
     680,     3,     4,     5,     6,     7,    34,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,     1,    34,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,
      34,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,     1,    34,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,
      34,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,     1,    34,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,
      34,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,     1,    34,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,
      34,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,     1,    34,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,
      34,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    20,    25,    -1,    -1,
      28,    -1,    30,    -1,    28,    29,    34,    31,    32,    33,
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
      -1,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
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
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    20,    38,    39,
      40,    41,    42,    43,    -1,    28,    29,    -1,    31,    32,
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
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
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
      -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,    34,
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
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      20,    38,    39,    40,    41,    42,    43,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    20,    38,    39,
      40,    41,    42,    43,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    20,    38,    39,    40,    41,    42,    43,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    20,    38,
      39,    40,    41,    42,    43,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    20,    38,    39,    40,    41,
      42,    43,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    20,    38,    39,    40,    41,    42,    43,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    20,    38,    39,
      40,    41,    42,    43,    -1,    28,    29,    -1,    31,    32,
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
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
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
      32,    33,    34,    35,    36,    20,    38,    39,    40,    41,
      42,    43,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
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
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
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
      43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
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
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
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
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    20,    38,    39,    40,
      41,    42,    43,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    20,    38,    39,    40,    41,    42,    43,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      20,    38,    39,    40,    41,    42,    43,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    20,    38,    39,
      40,    41,    42,    43,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
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
      34,    35,    36,    20,    38,    39,    40,    41,    42,    43,
      -1,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    20,    38,    39,    40,    41,    42,
      43,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      26,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    26,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    26,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    26,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    28,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    46,    47,    48,    49,    53,    54,    54,
       0,    48,     3,     8,    25,    28,    55,    56,    57,    56,
      28,    29,    50,    51,    25,    26,    56,    52,    53,    54,
      23,    63,     1,     3,    26,    54,    58,    59,    60,    53,
      63,    56,     1,     3,     4,     6,     7,     9,    10,    11,
      12,    14,    15,    16,    17,    18,    19,    21,    22,    24,
      25,    28,    30,    34,    53,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    87,    88,    89,
      92,    26,    25,    56,    61,    62,    26,    29,    26,    29,
      25,    78,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,     5,    78,    85,    86,    83,    87,    84,    24,
      65,    28,    29,    38,    39,    40,    41,    42,    43,    33,
      34,    35,    36,    31,    32,    20,    37,    26,    61,    25,
       3,    60,    23,    26,    79,    90,    91,    28,    78,    53,
      67,    78,    78,     3,    25,    92,    92,     3,    78,    78,
      78,    86,    26,    26,    56,    61,    79,    81,    81,    81,
      81,    81,    81,    82,    82,    82,    82,    83,    83,    84,
      79,    26,    26,    59,    90,    26,    29,    26,    67,    67,
      26,    26,    26,    26,    26,    26,    26,    26,    23,    84,
      26,    24,    29,    91,    66,    26,    78,    26,    78,    66,
      28,    28,    28,    90,    24,    13,    66,    26,    66,    26,
      24,    29,    66,    66,    66,    24,     3,     8,    25,    57,
       3,     8,    25,    57,     5,    28,    55,    23,    54,     3,
       8,    57,     3,     4,     6,     7,    17,    18,    19,    21,
      22,    25,    30,    34,    73,    74,    75,    76,    77,    79,
      80,    81,    82,    83,    84,    87,    88,    89,    92,     3,
       4,     6,     7,    17,    18,    19,    21,    22,    25,    34,
      73,    74,    75,    76,    77,    88,    89,    92,    25,    87,
      25,    56,    62,    28,    54,    78,     4,     6,     7,    21,
      29,     3,     4,     6,     7,    17,    18,    19,    21,    22,
      23,    25,    30,    34,    73,    74,    75,    76,    77,    79,
      80,    81,    82,    83,    84,    87,    88,    89,    91,    92,
      28,    78,    78,     1,     9,    10,    11,    12,    14,    15,
      16,    23,    28,    63,    67,    68,    69,    70,    71,    72,
      78,    91,    56,    25,    56,    25,    54,    28,    24,    64,
      28,    55,    25,    25,    25,    25,    25,    25,    78,    85,
       3,     4,     6,     7,    17,    18,    19,    21,    22,    25,
      34,    73,    74,    75,    76,    77,    83,    87,    88,    89,
      92,    25,    84,    87,    38,    39,    40,    41,    42,    43,
      33,    34,    35,    36,    31,    32,    20,    37,    25,    25,
      25,    25,    25,    78,    85,    84,    85,    26,    61,    26,
      25,    28,    55,    28,    79,    25,    25,    25,    25,    25,
      90,    78,    85,     3,     4,     6,     7,    17,    18,    19,
      21,    22,    25,    34,    73,    74,    75,    76,    77,    83,
      87,    88,    89,    92,    25,    84,    87,    38,    39,    40,
      41,    42,    43,    33,    34,    35,    36,    31,    32,    20,
      37,    28,    26,    78,    25,    25,    25,    25,    25,    25,
      24,    64,    28,    26,     1,    26,    58,    59,    26,     1,
      26,    58,    59,    24,    28,     1,    26,    58,    59,    26,
      90,     3,    78,    78,    78,    26,    26,    25,    25,    25,
      25,    25,    78,    85,    84,    85,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    83,    83,    84,    79,
      26,    90,     3,    78,    78,    78,    26,    26,    26,    26,
      26,    59,    28,    26,    90,     3,    78,    78,    78,    24,
      29,    26,    26,    25,    25,    25,    25,    25,    78,    85,
      84,    85,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    79,    28,    78,    53,    67,
      78,    78,    92,    92,    24,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    23,
      84,    26,    90,     3,    78,    78,    78,    26,    26,    26,
      26,    26,    26,    26,    26,    23,    84,    26,    26,    26,
      26,    26,    26,    24,    23,    84,    26,    90,     3,    78,
      78,    78,    26,    26,    26,    26,    67,    67,    26,    26,
      26,    26,    90,    26,    26,    26,    26,    26,    23,    84,
      90,    90,    26,    26,    26,    26,    26,    23,    84,    66,
      26,    78,    26,    78,    66,    28,    28,    28,    24,    29,
      90,    24,    29,    24,    29,    90,    13,    66,    26,    66,
      26,    24,    24,    29,    24,    24,    24,    29,    66,    66,
      66,    24,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    48,    50,    49,
      51,    49,    52,    52,    53,    53,    54,    54,    55,    55,
      56,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    62,    62,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      69,    69,    70,    71,    71,    72,    73,    73,    73,    73,
      74,    75,    76,    77,    78,    78,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    83,    83,    84,    84,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    91,    91,    91,    92,    92,    92,
      92,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     0,     5,
       0,     4,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     1,     1,     3,     3,     4,     4,     4,     1,     3,
       1,     3,     2,     2,     1,     3,     2,     3,     4,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     5,     7,     7,     6,     7,
       6,     5,     5,     5,     5,     3,     1,     1,     1,     1,
       4,     4,     4,     4,     3,     1,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     3,     3,     1,     3,     1,     4,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     4,     3,     1,
       6,     7,     1,     3,     1,     3,     4,     1,     1,     1,
       1,     1,     3
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
#line 63 "yacc_lexer/mafralang_grammar.y"
                   { 
    parserTree = (yyvsp[0].stmt);
    checkSemanticErrorMain();
  }
#line 3874 "mafralang_grammar.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 71 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(TRANSLATION_UNIT, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3882 "mafralang_grammar.tab.c"
    break;

  case 5: /* translation_unit: error  */
#line 74 "yacc_lexer/mafralang_grammar.y"
        {
    yyerrok;
  }
#line 3890 "mafralang_grammar.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 85 "yacc_lexer/mafralang_grammar.y"
                                    {
    pushStack();
  }
#line 3898 "mafralang_grammar.tab.c"
    break;

  case 9: /* function_definition: declaration_specifiers declarator $@1 declaration_list compound_statement  */
#line 88 "yacc_lexer/mafralang_grammar.y"
                                      {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[-1].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node2, (yyvsp[0].stmt), NULL, NULL);
    popStack();
  }
#line 3909 "mafralang_grammar.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 94 "yacc_lexer/mafralang_grammar.y"
                                    {
    pushStack();
  }
#line 3917 "mafralang_grammar.tab.c"
    break;

  case 11: /* function_definition: declaration_specifiers declarator $@2 compound_statement  */
#line 97 "yacc_lexer/mafralang_grammar.y"
                     {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[0].stmt), NULL, NULL);
    popStack();
  }
#line 3927 "mafralang_grammar.tab.c"
    break;

  case 12: /* declaration_list: declaration  */
#line 105 "yacc_lexer/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3935 "mafralang_grammar.tab.c"
    break;

  case 13: /* declaration_list: declaration_list declaration  */
#line 108 "yacc_lexer/mafralang_grammar.y"
                               {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3943 "mafralang_grammar.tab.c"
    break;

  case 14: /* declaration: declaration_specifiers SEMICOLON  */
#line 114 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3951 "mafralang_grammar.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 117 "yacc_lexer/mafralang_grammar.y"
                                                        {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3959 "mafralang_grammar.tab.c"
    break;

  case 16: /* declaration_specifiers: TYPE  */
#line 123 "yacc_lexer/mafralang_grammar.y"
       {
    insertType((yyvsp[0].strType));
    insertScopeType((yyvsp[0].strType));
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, NULL, (yyvsp[0].strType), NULL);
  }
#line 3969 "mafralang_grammar.tab.c"
    break;

  case 17: /* declaration_specifiers: TYPE declaration_specifiers  */
#line 128 "yacc_lexer/mafralang_grammar.y"
                              {
    insertType((yyvsp[-1].strType));
    insertScopeType((yyvsp[-1].strType));
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 3979 "mafralang_grammar.tab.c"
    break;

  case 19: /* init_declarator_list: init_declarator_list COMMA declarator  */
#line 137 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(INIT_DECLARATOR_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3987 "mafralang_grammar.tab.c"
    break;

  case 21: /* direct_declarator: ID  */
#line 147 "yacc_lexer/mafralang_grammar.y"
      {
    insertSymbol((yyvsp[0].strType));
    insertScopeName((yyvsp[0].strType));
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
        type = s->type;
    }
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4002 "mafralang_grammar.tab.c"
    break;

  case 22: /* direct_declarator: MAIN  */
#line 157 "yacc_lexer/mafralang_grammar.y"
         {
    insertSymbol((yyvsp[0].strType));
    insertScopeName((yyvsp[0].strType));
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
        type = s->type;
    }
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4017 "mafralang_grammar.tab.c"
    break;

  case 23: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 167 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4025 "mafralang_grammar.tab.c"
    break;

  case 25: /* direct_declarator: direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 171 "yacc_lexer/mafralang_grammar.y"
                                                                      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4033 "mafralang_grammar.tab.c"
    break;

  case 26: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 174 "yacc_lexer/mafralang_grammar.y"
                                                                       {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4041 "mafralang_grammar.tab.c"
    break;

  case 27: /* direct_declarator: direct_declarator LEFT_PARENTHESES error RIGHT_PARENTHESES  */
#line 177 "yacc_lexer/mafralang_grammar.y"
                                                             {
    yyerrok;
  }
#line 4049 "mafralang_grammar.tab.c"
    break;

  case 28: /* identifier_list: ID  */
#line 183 "yacc_lexer/mafralang_grammar.y"
      {
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(IDENTIFIER_LIST, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4062 "mafralang_grammar.tab.c"
    break;

  case 29: /* identifier_list: identifier_list COMMA ID  */
#line 191 "yacc_lexer/mafralang_grammar.y"
                           {
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(IDENTIFIER_LIST, (yyvsp[-2].stmt), NULL, type, (yyvsp[0].strType));
  }
#line 4075 "mafralang_grammar.tab.c"
    break;

  case 31: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 204 "yacc_lexer/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4083 "mafralang_grammar.tab.c"
    break;

  case 32: /* parameter_declaration: declaration_specifiers declarator  */
#line 210 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4091 "mafralang_grammar.tab.c"
    break;

  case 33: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 213 "yacc_lexer/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4099 "mafralang_grammar.tab.c"
    break;

  case 34: /* abstract_declarator: direct_abstract_declarator  */
#line 219 "yacc_lexer/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(ABSTRACT_DECLARATOR, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4107 "mafralang_grammar.tab.c"
    break;

  case 35: /* direct_abstract_declarator: LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES  */
#line 225 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4115 "mafralang_grammar.tab.c"
    break;

  case 36: /* direct_abstract_declarator: LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 228 "yacc_lexer/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, NULL, NULL, NULL, NULL);
  }
#line 4123 "mafralang_grammar.tab.c"
    break;

  case 37: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 231 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4131 "mafralang_grammar.tab.c"
    break;

  case 38: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 234 "yacc_lexer/mafralang_grammar.y"
                                                                               {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4139 "mafralang_grammar.tab.c"
    break;

  case 39: /* compound_statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 240 "yacc_lexer/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL);
  }
#line 4147 "mafralang_grammar.tab.c"
    break;

  case 40: /* compound_statement: LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET  */
#line 243 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4155 "mafralang_grammar.tab.c"
    break;

  case 42: /* block_item_list: block_item_list block_item  */
#line 250 "yacc_lexer/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(BLOCK_ITEM_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4163 "mafralang_grammar.tab.c"
    break;

  case 43: /* block_item: declaration  */
#line 256 "yacc_lexer/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4171 "mafralang_grammar.tab.c"
    break;

  case 44: /* block_item: statement  */
#line 259 "yacc_lexer/mafralang_grammar.y"
            {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4179 "mafralang_grammar.tab.c"
    break;

  case 45: /* statement: expression_statement  */
#line 265 "yacc_lexer/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4187 "mafralang_grammar.tab.c"
    break;

  case 46: /* statement: compound_statement  */
#line 268 "yacc_lexer/mafralang_grammar.y"
                     {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4195 "mafralang_grammar.tab.c"
    break;

  case 47: /* statement: conditional_statement  */
#line 271 "yacc_lexer/mafralang_grammar.y"
                        {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4203 "mafralang_grammar.tab.c"
    break;

  case 48: /* statement: iteration_statement  */
#line 274 "yacc_lexer/mafralang_grammar.y"
                      {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4211 "mafralang_grammar.tab.c"
    break;

  case 49: /* statement: input_statement  */
#line 277 "yacc_lexer/mafralang_grammar.y"
                  {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4219 "mafralang_grammar.tab.c"
    break;

  case 50: /* statement: output_statement  */
#line 280 "yacc_lexer/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4227 "mafralang_grammar.tab.c"
    break;

  case 51: /* statement: return_statement  */
#line 283 "yacc_lexer/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4235 "mafralang_grammar.tab.c"
    break;

  case 52: /* statement: error  */
#line 286 "yacc_lexer/mafralang_grammar.y"
        { 
    yyerrok;
  }
#line 4243 "mafralang_grammar.tab.c"
    break;

  case 53: /* expression_statement: SEMICOLON  */
#line 292 "yacc_lexer/mafralang_grammar.y"
            {
    (yyval.stmt) = NULL;
  }
#line 4251 "mafralang_grammar.tab.c"
    break;

  case 54: /* expression_statement: expression SEMICOLON  */
#line 295 "yacc_lexer/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4259 "mafralang_grammar.tab.c"
    break;

  case 55: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 301 "yacc_lexer/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4267 "mafralang_grammar.tab.c"
    break;

  case 56: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement  */
#line 304 "yacc_lexer/mafralang_grammar.y"
                                                                             {
    ast_node* ast_node1 = addNode(CONDITIONAL_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-2].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(CONDITIONAL_STATEMENT, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, ast_node1, ast_node2, (yyvsp[-6].strType), NULL);
  }
#line 4277 "mafralang_grammar.tab.c"
    break;

  case 57: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement  */
#line 312 "yacc_lexer/mafralang_grammar.y"
                                                                                                        {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4287 "mafralang_grammar.tab.c"
    break;

  case 58: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement  */
#line 317 "yacc_lexer/mafralang_grammar.y"
                                                                                             {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4296 "mafralang_grammar.tab.c"
    break;

  case 59: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement  */
#line 321 "yacc_lexer/mafralang_grammar.y"
                                                                                               {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4306 "mafralang_grammar.tab.c"
    break;

  case 60: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement  */
#line 326 "yacc_lexer/mafralang_grammar.y"
                                                                                    {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4315 "mafralang_grammar.tab.c"
    break;

  case 61: /* iteration_statement: FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 330 "yacc_lexer/mafralang_grammar.y"
                                                                 {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4323 "mafralang_grammar.tab.c"
    break;

  case 62: /* input_statement: READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 336 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4331 "mafralang_grammar.tab.c"
    break;

  case 63: /* output_statement: WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 342 "yacc_lexer/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4339 "mafralang_grammar.tab.c"
    break;

  case 64: /* output_statement: WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 345 "yacc_lexer/mafralang_grammar.y"
                                                                          {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4347 "mafralang_grammar.tab.c"
    break;

  case 65: /* return_statement: RETURN expression SEMICOLON  */
#line 351 "yacc_lexer/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-1].stmt), NULL, (yyvsp[-2].strType), NULL);
  }
#line 4355 "mafralang_grammar.tab.c"
    break;

  case 66: /* set_expression_list: is_set_expression  */
#line 357 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4363 "mafralang_grammar.tab.c"
    break;

  case 67: /* set_expression_list: add_expression  */
#line 360 "yacc_lexer/mafralang_grammar.y"
                 {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4371 "mafralang_grammar.tab.c"
    break;

  case 68: /* set_expression_list: remove_expression  */
#line 363 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4379 "mafralang_grammar.tab.c"
    break;

  case 69: /* set_expression_list: exists_expression  */
#line 366 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4387 "mafralang_grammar.tab.c"
    break;

  case 70: /* is_set_expression: IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES  */
#line 372 "yacc_lexer/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(IS_SET_EXPRESSION, NULL, NULL, (yyvsp[-3].strType), (yyvsp[-1].strType));
  }
#line 4395 "mafralang_grammar.tab.c"
    break;

  case 71: /* add_expression: ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 378 "yacc_lexer/mafralang_grammar.y"
                                                    {
    (yyval.stmt) = addNode(ADD_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4403 "mafralang_grammar.tab.c"
    break;

  case 72: /* remove_expression: REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 384 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(REMOVE_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4411 "mafralang_grammar.tab.c"
    break;

  case 73: /* exists_expression: EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 390 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(EXISTS_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4419 "mafralang_grammar.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 401 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(ASSIGNMENT_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4427 "mafralang_grammar.tab.c"
    break;

  case 79: /* relational_expression: relational_expression CLT arithmetic_expression  */
#line 410 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4435 "mafralang_grammar.tab.c"
    break;

  case 80: /* relational_expression: relational_expression CLE arithmetic_expression  */
#line 413 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4443 "mafralang_grammar.tab.c"
    break;

  case 81: /* relational_expression: relational_expression CEQ arithmetic_expression  */
#line 416 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4451 "mafralang_grammar.tab.c"
    break;

  case 82: /* relational_expression: relational_expression CGE arithmetic_expression  */
#line 419 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4459 "mafralang_grammar.tab.c"
    break;

  case 83: /* relational_expression: relational_expression CGT arithmetic_expression  */
#line 422 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4467 "mafralang_grammar.tab.c"
    break;

  case 84: /* relational_expression: relational_expression CNE arithmetic_expression  */
#line 425 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4475 "mafralang_grammar.tab.c"
    break;

  case 86: /* arithmetic_expression: arithmetic_expression ADD_OP logical_expression  */
#line 432 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4483 "mafralang_grammar.tab.c"
    break;

  case 87: /* arithmetic_expression: arithmetic_expression SUB_OP logical_expression  */
#line 435 "yacc_lexer/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4491 "mafralang_grammar.tab.c"
    break;

  case 88: /* arithmetic_expression: arithmetic_expression MULT logical_expression  */
#line 438 "yacc_lexer/mafralang_grammar.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4499 "mafralang_grammar.tab.c"
    break;

  case 89: /* arithmetic_expression: arithmetic_expression DIVIDE logical_expression  */
#line 441 "yacc_lexer/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4507 "mafralang_grammar.tab.c"
    break;

  case 91: /* logical_expression: NEGATE set_expression  */
#line 448 "yacc_lexer/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[0].stmt), NULL, (yyvsp[-1].symbol), NULL);
  }
#line 4515 "mafralang_grammar.tab.c"
    break;

  case 92: /* logical_expression: logical_expression AND set_expression  */
#line 451 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4523 "mafralang_grammar.tab.c"
    break;

  case 93: /* logical_expression: logical_expression OR set_expression  */
#line 454 "yacc_lexer/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4531 "mafralang_grammar.tab.c"
    break;

  case 95: /* set_expression: set_expression IN cast_expression  */
#line 461 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4539 "mafralang_grammar.tab.c"
    break;

  case 97: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 468 "yacc_lexer/mafralang_grammar.y"
                                                               {
    (yyval.stmt) = addNode(CAST_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4547 "mafralang_grammar.tab.c"
    break;

  case 98: /* type_name: specifier_qualifier_list  */
#line 474 "yacc_lexer/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4555 "mafralang_grammar.tab.c"
    break;

  case 99: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 477 "yacc_lexer/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4563 "mafralang_grammar.tab.c"
    break;

  case 100: /* type_name: specifier_qualifier_list declarator  */
#line 480 "yacc_lexer/mafralang_grammar.y"
                                      {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4571 "mafralang_grammar.tab.c"
    break;

  case 101: /* specifier_qualifier_list: TYPE specifier_qualifier_list  */
#line 486 "yacc_lexer/mafralang_grammar.y"
                                {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, (yyvsp[0].stmt), NULL, (yyvsp[-1].strType), NULL);
    insertType((yyvsp[-1].strType));
    insertScopeType((yyvsp[-1].strType));
  }
#line 4581 "mafralang_grammar.tab.c"
    break;

  case 102: /* specifier_qualifier_list: TYPE  */
#line 491 "yacc_lexer/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, NULL, NULL, (yyvsp[0].strType), NULL);
    insertType((yyvsp[0].strType));
    insertScopeType((yyvsp[0].strType));
  }
#line 4591 "mafralang_grammar.tab.c"
    break;

  case 106: /* unary_expression: SUB_OP cast_expression  */
#line 502 "yacc_lexer/mafralang_grammar.y"
                         {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].symbol));
  }
#line 4599 "mafralang_grammar.tab.c"
    break;

  case 107: /* function_expression: ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES  */
#line 508 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4607 "mafralang_grammar.tab.c"
    break;

  case 108: /* function_expression: ID LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 511 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, NULL, NULL, NULL, (yyvsp[-2].strType));
  }
#line 4615 "mafralang_grammar.tab.c"
    break;

  case 110: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 518 "yacc_lexer/mafralang_grammar.y"
                                                                                                       {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-4].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4623 "mafralang_grammar.tab.c"
    break;

  case 111: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 521 "yacc_lexer/mafralang_grammar.y"
                                                                                                             {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-5].stmt), (yyvsp[-2].stmt), NULL, NULL);
  }
#line 4631 "mafralang_grammar.tab.c"
    break;

  case 113: /* initializer_list: initializer_list COMMA initializer  */
#line 528 "yacc_lexer/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(INITIALIZER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4639 "mafralang_grammar.tab.c"
    break;

  case 115: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 535 "yacc_lexer/mafralang_grammar.y"
                                                          {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4647 "mafralang_grammar.tab.c"
    break;

  case 116: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 538 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4655 "mafralang_grammar.tab.c"
    break;

  case 117: /* primary_expression: ID  */
#line 544 "yacc_lexer/mafralang_grammar.y"
     {
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4668 "mafralang_grammar.tab.c"
    break;

  case 118: /* primary_expression: INTEGER  */
#line 552 "yacc_lexer/mafralang_grammar.y"
          {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4676 "mafralang_grammar.tab.c"
    break;

  case 119: /* primary_expression: FLOAT  */
#line 555 "yacc_lexer/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4684 "mafralang_grammar.tab.c"
    break;

  case 120: /* primary_expression: STRING  */
#line 558 "yacc_lexer/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4692 "mafralang_grammar.tab.c"
    break;

  case 121: /* primary_expression: EMPTY  */
#line 561 "yacc_lexer/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4700 "mafralang_grammar.tab.c"
    break;

  case 122: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 564 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4708 "mafralang_grammar.tab.c"
    break;


#line 4712 "mafralang_grammar.tab.c"

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

#line 569 "yacc_lexer/mafralang_grammar.y"


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
  initializeGlobalScope();
  yyparse();
  printSymbolTable();
  if(!(syntax_error || lex_error | semantic_error)){
    createFileTAC(parserTree);
    printTree(syntax_error, lex_error, semantic_error, parserTree);
  }
  yylex_destroy();
  freeTree(parserTree);
  freeSymbolTable();
  return 0;
}
