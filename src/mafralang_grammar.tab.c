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
  #include "includes/tac.h"

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
  YYSYMBOL_EXISTS = 20,                    /* EXISTS  */
  YYSYMBOL_IN = 21,                        /* IN  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_CHAR = 23,                      /* CHAR  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 24,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 25,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_LEFT_PARENTHESES = 26,          /* LEFT_PARENTHESES  */
  YYSYMBOL_RIGHT_PARENTHESES = 27,         /* RIGHT_PARENTHESES  */
  YYSYMBOL_QUOTES = 28,                    /* QUOTES  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_NEGATE = 31,                    /* NEGATE  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_OR = 33,                        /* OR  */
  YYSYMBOL_ADD_OP = 34,                    /* ADD_OP  */
  YYSYMBOL_SUB_OP = 35,                    /* SUB_OP  */
  YYSYMBOL_DIVIDE = 36,                    /* DIVIDE  */
  YYSYMBOL_MULT = 37,                      /* MULT  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_CLT = 39,                       /* CLT  */
  YYSYMBOL_CLE = 40,                       /* CLE  */
  YYSYMBOL_CEQ = 41,                       /* CEQ  */
  YYSYMBOL_CGE = 42,                       /* CGE  */
  YYSYMBOL_CGT = 43,                       /* CGT  */
  YYSYMBOL_CNE = 44,                       /* CNE  */
  YYSYMBOL_THEN = 45,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_translation_unit = 48,          /* translation_unit  */
  YYSYMBOL_external_declaration = 49,      /* external_declaration  */
  YYSYMBOL_function_definition = 50,       /* function_definition  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_declaration = 52,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 53,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 54,      /* init_declarator_list  */
  YYSYMBOL_declarator = 55,                /* declarator  */
  YYSYMBOL_direct_declarator = 56,         /* direct_declarator  */
  YYSYMBOL_identifier_list = 57,           /* identifier_list  */
  YYSYMBOL_parameter_list = 58,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 59,     /* parameter_declaration  */
  YYSYMBOL_type_specifiers = 60,           /* type_specifiers  */
  YYSYMBOL_parameter_declarator = 61,      /* parameter_declarator  */
  YYSYMBOL_direct_parameter_declarator = 62, /* direct_parameter_declarator  */
  YYSYMBOL_abstract_declarator = 63,       /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 64, /* direct_abstract_declarator  */
  YYSYMBOL_compound_statement = 65,        /* compound_statement  */
  YYSYMBOL_block_item_list = 66,           /* block_item_list  */
  YYSYMBOL_block_item = 67,                /* block_item  */
  YYSYMBOL_statement = 68,                 /* statement  */
  YYSYMBOL_expression_statement = 69,      /* expression_statement  */
  YYSYMBOL_conditional_statement = 70,     /* conditional_statement  */
  YYSYMBOL_iteration_statement = 71,       /* iteration_statement  */
  YYSYMBOL_input_statement = 72,           /* input_statement  */
  YYSYMBOL_output_statement = 73,          /* output_statement  */
  YYSYMBOL_return_statement = 74,          /* return_statement  */
  YYSYMBOL_set_expression_list = 75,       /* set_expression_list  */
  YYSYMBOL_is_set_expression = 76,         /* is_set_expression  */
  YYSYMBOL_add_expression = 77,            /* add_expression  */
  YYSYMBOL_remove_expression = 78,         /* remove_expression  */
  YYSYMBOL_exists_expression = 79,         /* exists_expression  */
  YYSYMBOL_expression = 80,                /* expression  */
  YYSYMBOL_assignment_expression = 81,     /* assignment_expression  */
  YYSYMBOL_relational_expression = 82,     /* relational_expression  */
  YYSYMBOL_arithmetic_expression = 83,     /* arithmetic_expression  */
  YYSYMBOL_logical_expression = 84,        /* logical_expression  */
  YYSYMBOL_set_expression = 85,            /* set_expression  */
  YYSYMBOL_cast_expression = 86,           /* cast_expression  */
  YYSYMBOL_type_name = 87,                 /* type_name  */
  YYSYMBOL_specifier_qualifier_list = 88,  /* specifier_qualifier_list  */
  YYSYMBOL_unary_expression = 89,          /* unary_expression  */
  YYSYMBOL_function_expression = 90,       /* function_expression  */
  YYSYMBOL_postfix_expression = 91,        /* postfix_expression  */
  YYSYMBOL_initializer_list = 92,          /* initializer_list  */
  YYSYMBOL_initializer = 93,               /* initializer  */
  YYSYMBOL_primary_expression = 94         /* primary_expression  */
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
#define YYLAST   10980

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  703

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    67,    68,    71,    77,    78,    82,    82,
      95,    98,   104,   109,   117,   118,   124,   128,   138,   148,
     151,   152,   155,   158,   164,   172,   184,   185,   191,   194,
     200,   204,   211,   215,   224,   227,   228,   231,   234,   240,
     246,   249,   252,   255,   261,   264,   270,   271,   277,   280,
     286,   289,   292,   295,   298,   301,   304,   307,   313,   316,
     322,   325,   333,   338,   342,   347,   351,   357,   363,   366,
     372,   378,   381,   384,   387,   393,   399,   405,   411,   417,
     418,   422,   425,   430,   431,   434,   437,   440,   443,   446,
     452,   453,   456,   459,   462,   468,   469,   472,   475,   481,
     482,   488,   489,   495,   498,   501,   507,   512,   520,   521,
     522,   523,   529,   537,   548,   549,   552,   558,   559,   565,
     566,   569,   575,   583,   586,   589,   592,   595,   598
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
  "READ", "WRITE", "WRITELN", "IS_SET", "REMOVE", "ADD", "EXISTS", "IN",
  "STRING", "CHAR", "LEFT_CURLY_BRACKET", "RIGHT_CURLY_BRACKET",
  "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "QUOTES", "SEMICOLON", "COMMA",
  "NEGATE", "AND", "OR", "ADD_OP", "SUB_OP", "DIVIDE", "MULT", "ASSIGN",
  "CLT", "CLE", "CEQ", "CGE", "CGT", "CNE", "THEN", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "$@1",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "declarator", "direct_declarator", "identifier_list", "parameter_list",
  "parameter_declaration", "type_specifiers", "parameter_declarator",
  "direct_parameter_declarator", "abstract_declarator",
  "direct_abstract_declarator", "compound_statement", "block_item_list",
  "block_item", "statement", "expression_statement",
  "conditional_statement", "iteration_statement", "input_statement",
  "output_statement", "return_statement", "set_expression_list",
  "is_set_expression", "add_expression", "remove_expression",
  "exists_expression", "expression", "assignment_expression",
  "relational_expression", "arithmetic_expression", "logical_expression",
  "set_expression", "cast_expression", "type_name",
  "specifier_qualifier_list", "unary_expression", "function_expression",
  "postfix_expression", "initializer_list", "initializer",
  "primary_expression", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-252)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-129)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      60,   115,    41,    37,   119,   127,   130,   171,    26,    56,
    -252,   224,   159,   186,   214,   302,    -4,   318,   197,    30,
     371,   261,     3,    86,   247,    44,  2613,   417,    59,   117,
      85,   264,   137,   215,   226,    36,  2648,   974,  2708,  3286,
    3864,  1195,    28,    97,   114,   129,   179,   192,   208,   242,
     270,   274,  4442,  5020,   418,  2227,  2701,  3046,  3624,  2771,
     125,  3016,  3113,  3149,  3191,  3226,  3279,  3349,  3594,  3691,
    3727,  5452,  5710,  5737,  5898,  5988,    54,    65,   284, 10840,
   10760,  6602,  6750,  6012,  6041,  6194,  6316,   275,    55,   286,
     303,   400,   336,   169,    90,   245,   252,   323,   447,   139,
     256,  1773,   232,  1773,  1773,   433,   433,  1773,  1773,  1773,
    1773,    42,   345,   292,   217,  8592,  8609,  6538,   344,   428,
    3769,  3804,  1195,  2351,  2351,  2351,  2351,  2351,  2351,  2351,
    2351,  2351,  2351,  3046,  3046,  3046,  1195,   405,   537,   564,
     316,   329,   133,    48,  2257,  6791,   665,   670,   672,  3857,
     734,  2287,  2287,   739,   746,   363,  1773,   365,   384,   766,
     771,   775,   777,   254,  6846,  2893,   257,   411,   431,   460,
   10856, 10872, 10888, 10904, 10920, 10936, 10776, 10792, 10808, 10824,
    8626,  8643,  8660,   476,   577,   586,   435,   594,   813,   882,
     600,   886,   445,  6951,  2502,  5448,  2801,  2834,  5544,   301,
     369,   437,  6979,  7028,  7187,  7215,  2257,  8677,   610,   612,
     621,   663,   917,   314,   921,   390,  5544,   923,  5544,  1006,
    3927,  4172,  4269,  4305,   455,  1007,  5544,  4347,  5544,  4382,
    5544,  7243,   702,  4435,  4505,  4750,  7267,   496,   512,   214,
     579,   569,   643,   214,   709,  4847,  1552,  5847,  7295,  7319,
     450,   471,   503,   505,  7343,  7376,  2227,  4085,  4663,  7416,
    7440,  7464,  7488,  7512,  1048,   671,  6557,  6334,  5553,  6690,
    7536,  7560,  7584,  7608,   325,  8694,  8711,  8728,   521,   532,
     539,   547,  8745,  8762,  2227,  3046,  8779,  8796,  8813,  8830,
    8847,  8864,  8881,  8898,  2227,  7632,  4883,   700,   728,   126,
     844,  1055,  2860,   165,  1086,   494,   522,   548,   550,   555,
    1773,  2130,  7656,  7680,  7704,   553,   566,   575,   597,  7728,
    7752,  2257,  2227,  5171,  5192,  7776,  7800,  7824,  7848,  7872,
     458,   544,  4219,  7000,  8922,  8946,  7896,  7920,  7944,   462,
    7968,  3080,  1285,  1049,  1133,   602,   604,   810,  1195,   607,
     617,   619,   623,   629,   631,  4925,   843,   879,   914,   967,
    1037,  1287,  1379,  1415,  1377,   478,   176,   632,   181,  4960,
    5013,   768,  1773,  1773,  1773,  1773,  1050,   634,  5218,  6881,
    8970,  8994,   637,   639,   681,   697,  9018,  9042,  2227,  4085,
    9066,  9090,  9114,  9138,  9162,  9186,  9210,  9234,  9258,  9282,
    2227,  7992,  8016,  2929,  2929,  2929,  2929,  2929,  2929,  2929,
    2929,  2929,  2929,  4085,  4085,  4085,  1773,  1067,  1773,  1773,
    1773,  1773,  1070,   704,  9299,   740,  5083,   750,   206,    51,
    3383,  1413,  3413,  1078,  1100,  1773,  1773,  1773,  1773,   495,
    1083,   752,  6288,  9323,  9347,  9371,   715,   723,   755,   757,
    9395,  9419,  2227,  5171,  9443,  9467,  9491,  9515,  9539,  9563,
    9587,  9611,  9635,  9659,  2227,  8040,  8064,  3507,  3507,  3507,
    3507,  3507,  3507,  3507,  3507,  3507,  3507,  5171,  5171,  5171,
    4021,  3454,   762,  1463,  1498,  1499,  1773,   232,  1773,  1773,
     433,   433,  1457,  5328,  1492,   773,  1504,  1098,  1107,   714,
     779,   716,  1109,  1124,  5413,  8088,  1142,  1143,  1176,  1177,
    1178,  8112,  4205,  1126,  1773,  1773,  1773,  1773,  1193,   781,
    9683,   785, 10654, 10672, 10690, 10708, 10726, 10744, 10582, 10600,
   10618, 10636,  9707,  9731,  9755,  1198,  9772,  1214,  1216,  1220,
    1221,  1240,  9789,  4535,  4568,  1585,   791,  1587,  1241,  1242,
    1627,  1246,  3961,  8136,  1248,  1250,  1256,  1257,  1290,   507,
    1159,  8160,  4593,  1346,  1773,  1773,  1773,  1773,  1294,   804,
    9813,   811,  4797,  5473,  6064,  6358,  6484,  7056, 10504, 10524,
   10544, 10564,  9837,  9861,  9885,   510,  1545,  1296,  2287,  2287,
    1300,  1302,   815,   824,  1615,  1629,  1631,  1633,   722,   727,
     733,  8184,  8208,  8232,  8256,  8280,  2257,  9909,  9933,  1304,
    1308,  1310,  1312,  1314,  9957,  4626,  4783,  9974,  9991, 10008,
   10025, 10042,  2257,  8304,  1651,  1660,  1662,  1667,  8328,  8352,
    8376,  8400,  8424,   520,  2257, 10066, 10090,  1324,  1344,  1349,
    1382,  1418, 10114,  5113,  5146,  5448,  3658,  3991,  5448,   731,
     835,   848,   523, 10138, 10162, 10186, 10210, 10234,  2257,  8448,
     526,   530, 10258, 10282, 10306, 10330, 10354,  2257,  8472,  1865,
    5448,  1422,  5448,  1429,  1957,  1993,  2035,  2070,  8496,  1645,
     541, 10371,  1678,  8520,  1704,   551,  5448,  2123,  5448,  2193,
    5448,  8544, 10395,  1737, 10412,  8568, 10436,  1924,  2443,  2535,
    2571, 10460, 10484
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,   875,  -252,  -252,    20,    12,   -56,    27,
       0,  -136,  -120,   789,   857,   -85,   871,   -22,   876,   -20,
    -234,   -59,  -188,    46,  -177,  -176,  -144,  -129,  -118,  1130,
    1708,  2286,  2864,  3442,  6754,  6285,  6467,  6070,  5774,  5480,
    5176,  -251,   831,   552,  4020,  4598,  -143,   -82,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    22,    59,    60,    16,   118,
     240,    32,    33,    34,    35,    95,   300,   346,   301,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   259,
     260,   261,   262,   263,    76,   264,   265,   266,   267,   268,
     269,   113,   114,   270,   271,   272,   147,   339,   273
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,   192,    27,   120,   297,   377,   188,   215,    18,   140,
     220,   370,     8,    97,     9,    86,     8,   148,   359,   360,
       7,   244,   189,   191,     7,    20,    21,    26,   227,    12,
     229,   293,    86,   423,    13,    17,    86,    10,   233,    93,
     234,    19,   235,   425,   -12,  -107,     2,   111,    25,   -12,
    -107,   361,    14,    30,   101,    15,    30,    24,   -31,   -13,
     244,     1,    94,   224,   -13,     2,   362,   -12,  -107,  -107,
     -12,   441,   141,   -15,   -15,   190,    86,   363,   550,   157,
     158,   -31,   -13,   121,   122,   -13,    87,    28,   -30,    29,
      30,    30,   168,   298,   -80,   -80,    86,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   293,   293,
      86,   -30,   214,    31,   303,    -5,   299,   139,   340,    -2,
      -5,   493,   151,   102,     2,    86,    86,    -3,   241,   298,
      -6,   365,    -3,   242,   186,    -6,    29,   519,    30,   293,
     103,   167,   246,   247,   -24,   248,   249,   -24,   152,   521,
     365,   243,   299,   344,   296,   104,   250,   251,   252,   253,
     187,   254,   255,   144,    89,   256,   145,    90,   241,    86,
     257,    -7,    86,   242,   258,   357,    -7,   495,   439,    29,
     340,    30,   500,   -17,    29,   -17,    30,   340,   -17,   -17,
      86,   243,    86,   345,   430,   -33,   -33,   196,   197,   -33,
      86,   569,    86,   496,    86,   105,   340,   546,   501,    29,
     -18,    30,   -18,   571,   427,   -18,   -18,   237,   106,    86,
     237,   -16,   238,    23,    -4,   238,   -16,   -16,   506,    -4,
     497,   399,   502,   547,   107,    37,    38,     2,    39,    40,
     239,   358,    91,   166,  -103,    92,   498,   431,   503,    48,
      49,    50,    51,   -26,    52,    53,   -26,  -106,    55,   293,
     237,   302,  -106,    57,   241,   238,   345,    58,   108,   242,
     367,   -19,   -28,   -19,   537,   -28,   -19,   -19,   142,   -32,
    -106,  -106,   -32,   166,   344,   149,   122,   243,   -20,   148,
     -20,   554,   548,   -20,   -20,   340,   109,   463,   340,   -23,
     110,   -23,   -10,   244,   -23,   -23,   137,   -10,   549,   551,
     -22,   120,   -22,   -82,   -82,   -22,   -22,   311,   312,   165,
     313,   314,    86,   123,   124,   125,   126,   127,   128,    86,
     221,   315,   316,   317,   318,   148,   319,   320,   321,   225,
     322,    30,    -8,   184,    86,   323,  -122,   -14,   -14,   324,
     -29,   417,   148,   -29,  -122,  -122,   185,  -122,  -122,  -122,
    -122,  -122,  -122,   399,  -122,  -122,  -122,  -122,  -122,  -122,
     609,   -11,   164,   -14,   -14,   310,   -11,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
    -122,   -60,   200,   -60,   -60,   -60,   -60,   -60,   222,   -60,
     -60,   -60,   -60,   226,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   201,   -60,   -60,   -60,   -60,   -60,    -9,   -44,   -60,
     637,   -60,    -9,   -44,   -21,   -60,   -21,   463,   -45,   -21,
     -21,   148,   -25,   -45,   120,   -25,   155,   305,  -105,   306,
     307,   463,   463,   463,   463,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   340,   308,   309,   669,  -104,   156,
     674,    86,   208,   652,   592,   593,   223,    86,   359,   360,
     212,   359,   360,   143,   -39,   213,   372,   -39,   365,   660,
     231,   148,   687,  -119,   689,   232,   399,  -117,  -119,   -79,
     -79,   661,  -117,   359,   360,   359,   360,   373,   698,   303,
     699,   361,   700,  -118,   361,   -81,   -81,   588,  -118,   359,
     360,   359,   360,   359,   360,   680,   362,   293,    86,   362,
     559,  -127,   -17,   -17,   685,   560,   361,   363,   361,   374,
     363,   375,  -120,   589,   340,   -81,   463,  -120,   -18,   -18,
     -81,   362,   361,   362,   361,  -121,   361,   418,   678,  -124,
    -121,   681,   363,   679,   363,   683,   682,   362,   419,   362,
     684,   362,    86,    86,   -27,   420,   692,   -27,   363,   -82,
     363,   693,   363,   421,   -82,  -123,   696,  -125,    83,   435,
     340,   697,  -126,   467,   468,   469,   470,   471,   472,   399,
     -41,   -41,   436,    83,   -41,   -17,   340,   365,   -17,   -17,
     365,   437,   365,   -34,   -34,   366,   -16,   -34,   340,   116,
     295,   365,   -40,   -40,    83,   365,   -40,   463,   340,    86,
     -35,   -35,    86,   438,   -35,   357,   -42,   -42,   357,   483,
     -42,   484,   340,   486,   646,   647,   -38,   -38,   -37,   -37,
     -38,   340,   -37,   487,    86,   488,    86,   -36,   -36,   489,
     357,   -36,   357,   340,    83,   490,   340,   491,   340,   499,
      86,   512,    86,   514,    86,   515,   357,   340,   357,   -18,
     357,   340,   -18,   -18,    83,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,    83,   -43,
     -43,   358,  -119,   -43,   358,  -119,   336,   193,   -82,  -117,
     194,   -82,  -117,    83,    83,   311,   312,   516,   313,   314,
     403,   404,   405,   406,   407,   408,   358,   116,   358,   315,
     316,   317,   318,   517,   319,   320,   321,   236,   322,   426,
      21,   543,   358,   323,   358,   368,   358,   324,   -16,   -16,
     -19,   564,   -20,   -19,   -19,   -20,   -20,    83,   -23,   565,
      83,   -23,   -23,   -22,   -33,   -33,   -22,   -22,   336,   -21,
     675,   195,   -21,   -21,   310,   336,   198,   544,    83,   310,
      83,   246,   247,   199,   248,   249,   310,   545,    83,   562,
      83,   566,    83,   567,   336,   250,   251,   252,   253,  -128,
     254,   255,   144,   202,   256,   505,   310,    83,   203,   257,
     595,   310,   204,   258,   205,   310,   598,   310,   615,   396,
     402,   -57,   616,   -57,   -57,   -57,   -57,   -57,   624,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   643,   -57,   -57,   -57,   -57,   -57,   116,   644,   -57,
     209,   -57,   650,    90,   -58,   -57,   -58,   -58,   -58,   -58,
     -58,   651,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   676,   -58,   -58,   -58,   -58,   -58,
     428,   -32,   -58,   336,   -58,   460,   466,   677,   -58,    11,
     -51,   138,   -51,   -51,   -51,   -51,   -51,    88,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
      83,   -51,   -51,   -51,   -51,   -51,    96,    83,   -51,   210,
     -51,    98,    92,   211,   -51,   -50,    92,   -50,   -50,   -50,
     -50,   -50,    83,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   396,   163,   -50,  -120,   -50,     0,  -120,  -118,   -50,
     228,  -118,     0,   310,     0,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   -52,     0,
     -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,
     -52,   -52,   -52,   -52,     0,  -122,   -52,     0,   -52,     0,
      99,     0,   -52,  -122,  -122,   460,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   336,   230,  -121,     0,   310,  -121,   -53,    83,
     -53,   -53,   -53,   -53,   -53,    83,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   396,     0,   -53,     0,   -53,     0,
     246,   247,   -53,   248,   249,   -80,   482,   511,   -80,   310,
     310,   429,   -39,     0,   250,   251,   252,   253,     0,   254,
     255,   144,     0,   256,   536,   116,   295,   542,   257,     0,
     310,     0,   258,   246,   247,   -79,   248,   249,   -79,     0,
     561,     0,   336,   310,   460,   432,   122,   250,   251,   252,
     253,     0,   254,   255,   144,   596,   256,   553,    90,   246,
     247,   257,   248,   249,   597,   258,   599,    92,     0,    90,
      83,    83,     0,   250,   251,   252,   253,     0,   254,   255,
     144,   600,   256,   608,    92,     0,    71,   257,   336,   -41,
     -41,   258,   311,   312,     0,   313,   314,   396,   402,   601,
     602,    71,   194,   310,   336,     0,   315,   316,   317,   318,
       0,   319,   320,   321,   633,   322,   336,   286,    71,     0,
     323,     0,    71,     0,   324,   460,   466,    83,    37,    38,
      83,    39,    40,   603,   604,   605,   310,   310,   310,     0,
     336,     0,    48,    49,    50,    51,     0,    52,    53,   336,
     614,    55,    83,   310,    83,   -81,    57,     0,   -81,     0,
      58,   336,    71,     0,   336,     0,   336,     0,    83,     0,
      83,   617,    83,   618,   194,   336,   310,   619,   620,   336,
     310,   310,    71,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,    71,   621,   625,   626,
     310,    90,    92,   627,   325,   628,    92,   629,   194,     0,
     310,    71,    71,   630,   631,     0,   310,   310,   -54,     0,
     -54,   -54,   -54,   -54,   -54,   286,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   481,   122,   -54,   632,   -54,     0,
     310,   642,   -54,   645,   310,    71,   310,   648,    71,   649,
     310,   653,   310,     0,   194,   654,   325,   655,   310,   656,
     310,   657,   310,   325,   310,     0,    71,     0,    71,   246,
     247,   662,   248,   249,   194,     0,    71,     0,    71,     0,
      71,     0,   325,   250,   251,   252,   253,     0,   254,   255,
     144,   663,   256,   636,   310,    71,   664,   257,     0,   310,
     -55,   258,   -55,   -55,   -55,   -55,   -55,   390,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
       0,   -55,   -55,   -55,   -55,   -55,   494,   122,   -55,   665,
     -55,     0,   310,     0,   -55,   286,   -56,     0,   -56,   -56,
     -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,
     -56,   -56,   552,    21,   -56,   666,   -56,     0,   310,   688,
     -56,   325,   310,   454,   325,     0,   690,     0,   -44,   310,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,    71,   -44,
     -44,   -44,   -44,   -44,     0,    71,   -44,     0,   -44,   -19,
     -19,     0,   -44,   -59,     0,   -59,   -59,   -59,   -59,   -59,
      71,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,   390,
       0,   -59,     0,   -59,   -40,   -40,     0,   -59,   586,   122,
     -20,   -20,     0,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   -70,     0,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,
     -70,   -70,     0,  -122,   -70,     0,   -70,     0,   371,  -122,
     -70,     0,  -122,   454,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     325,   -34,   -34,   -35,   -35,     0,   -45,    71,   -45,   -45,
     -45,   -45,   -45,    71,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   390,     0,   -45,     0,   -45,     0,   311,   312,
     -45,   313,   314,   -42,   -42,   -23,   -23,   -22,   -22,   -21,
     -21,     0,   315,   316,   317,   318,     0,   319,   320,   321,
     691,   322,     0,   286,    71,     0,   323,   -38,   -38,     0,
     324,   311,   312,     0,   313,   314,   -37,   -37,   -36,   -36,
     325,     0,   454,   -43,   -43,   315,   316,   317,   318,     0,
     319,   320,   321,   694,   322,     0,     0,   311,   312,   323,
     313,   314,     0,   324,     0,     0,     0,     0,    71,    71,
       0,   315,   316,   317,   318,     0,   319,   320,   321,   695,
     322,     0,     0,     0,    72,   323,   325,     0,     0,   324,
     311,   312,     0,   313,   314,   390,     0,     0,     0,    72,
       0,     0,   325,     0,   315,   316,   317,   318,     0,   319,
     320,   321,   701,   322,   325,   287,    72,     0,   323,     0,
      72,     0,   324,   454,   325,    71,   246,   247,    71,   248,
     249,     0,     0,     0,     0,     0,     0,     0,   325,     0,
     250,   251,   252,   253,     0,   254,   255,   325,     0,   256,
      71,     0,    71,     0,   257,     0,     0,     0,   258,   325,
      72,     0,   325,     0,   325,     0,    71,     0,    71,     0,
      71,     0,     0,   325,     0,     0,     0,   325,     0,     0,
      72,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,    72,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,     0,     0,    72,
      72,     0,     0,     0,     0,     0,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   287,   -60,   -60,   -60,   -60,   686,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,   -60,
     -60,   -60,     0,     0,   -60,     0,   -60,     0,     0,     0,
     -60,     0,     0,    72,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,   326,     0,     0,     0,     0,     0,
       0,   326,     0,     0,    72,     0,    72,   311,   312,     0,
     313,   314,     0,     0,    72,     0,    72,     0,    72,     0,
     326,   315,   316,   317,   318,     0,   319,   320,   321,   702,
     322,     0,     0,    72,     0,   323,     0,     0,   -66,   324,
     -66,   -66,   -66,   -66,   -66,   391,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,     0,     0,   -66,     0,   -66,     0,
       0,     0,   -66,   287,   -67,     0,   -67,   -67,   -67,   -67,
     -67,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
       0,     0,   -67,     0,   -67,     0,     0,     0,   -67,   326,
       0,   455,   326,     0,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,    72,   -68,   -68,   -68,
     -68,   -68,     0,    72,   -68,     0,   -68,     0,     0,     0,
     -68,   -69,     0,   -69,   -69,   -69,   -69,   -69,    72,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,     0,   -69,   -69,   -69,   -69,   -69,   391,     0,   -69,
       0,   -69,     0,     0,     0,   -69,     0,     0,     0,     0,
       0,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   -65,     0,   -65,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,   -65,
       0,  -122,   -65,     0,   -65,  -122,   434,     0,   -65,     0,
    -122,   455,  -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   326,     0,
       0,     0,     0,     0,   -63,    72,   -63,   -63,   -63,   -63,
     -63,    72,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
     391,     0,   -63,     0,   -63,     0,     0,     0,   -63,     0,
     246,   247,   111,   248,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   250,   251,   252,   253,     0,   254,
     255,   287,    72,   256,     0,     0,     0,     0,   257,     0,
     311,   312,   258,   313,   314,     0,     0,     0,   326,     0,
     455,     0,     0,     0,   315,   316,   317,   318,     0,   319,
     320,   321,     0,   322,     0,     0,     0,     0,   323,     0,
      37,    38,   324,    39,    40,     0,    72,    72,     0,     0,
       0,     0,     0,     0,    48,    49,    50,    51,     0,    52,
      53,     0,    73,    55,   326,     0,   341,     0,    57,     0,
       0,     0,    58,   391,     0,     0,     0,    73,     0,     0,
     326,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,   288,    73,     0,     0,     0,    73,     0,
       0,   455,   326,    72,   274,   275,    72,   276,   277,     0,
       0,     0,     0,     0,     0,     0,   326,     0,   278,   279,
     280,   281,     0,   282,   283,   326,     0,   284,    72,     0,
      72,     0,    57,     0,     0,     0,   285,   326,    73,     0,
     326,     0,   326,     0,    72,     0,    72,     0,    72,     0,
       0,   326,     0,     0,     0,   326,     0,     0,    73,   288,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,    73,     0,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,     0,     0,    73,    73,     0,
       0,     0,     0,     0,   -61,     0,   -61,   -61,   -61,   -61,
     -61,   288,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,   -61,
       0,     0,   -61,     0,   -61,     0,     0,     0,   -61,     0,
       0,    73,     0,     0,    73,     0,     0,     0,     0,     0,
       0,     0,   327,     0,     0,     0,     0,     0,     0,   327,
       0,     0,    73,     0,    73,   246,   247,     0,   248,   249,
       0,     0,    73,     0,    73,     0,    73,     0,   327,   250,
     251,   252,   253,     0,   254,   255,   144,     0,   256,     0,
       0,    73,     0,   257,     0,     0,   -64,   258,   -64,   -64,
     -64,   -64,   -64,   392,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,     0,     0,   -64,     0,   -64,     0,     0,     0,
     -64,   288,   -62,     0,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,
     -62,     0,   -62,     0,     0,     0,   -62,   327,     0,   456,
     327,     0,     0,     0,    36,     0,    37,    38,     2,    39,
      40,     0,    41,    42,    43,    44,     0,    45,    46,    47,
      48,    49,    50,    51,    73,    52,    53,   245,    54,    55,
       0,    73,    56,     0,    57,     0,     0,     0,    58,   -57,
       0,   -57,   -57,   -57,   -57,   -57,    73,   -57,   -57,   -57,
     -57,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,   392,     0,   -57,     0,   -57,
       0,     0,     0,   -57,     0,     0,     0,     0,     0,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   -58,     0,   -58,   -58,   -58,   -58,   -58,     0,
     -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,     0,  -127,
     -58,     0,   -58,     0,     0,     0,   -58,  -127,  -127,   456,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   327,     0,     0,     0,
       0,     0,   -48,    73,   -48,   -48,   -48,   -48,   -48,    73,
     -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   392,     0,
     -48,     0,   -48,     0,   246,   247,   -48,   248,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   250,   251,
     252,   253,     0,   254,   255,     0,     0,   256,   216,   288,
      73,     0,   257,     0,     0,     0,   258,   246,   247,     0,
     248,   249,     0,     0,     0,     0,   327,     0,   456,     0,
       0,   250,   251,   252,   253,     0,   254,   255,     0,     0,
     256,   218,     0,   -58,   -58,   257,   -58,   -58,     0,   258,
       0,     0,     0,     0,    73,    73,     0,   -58,   -58,   -58,
     -58,     0,   -58,   -58,     0,     0,   -58,     0,     0,   -58,
      74,   -58,   327,     0,     0,   -58,   274,   275,     0,   276,
     277,   392,     0,     0,     0,    74,     0,     0,   327,     0,
     278,   279,   280,   281,     0,   282,   283,   206,     0,   284,
     327,   289,    74,     0,     0,     0,    74,     0,   285,   456,
     327,    73,   378,   379,    73,   380,   381,     0,     0,     0,
       0,     0,     0,     0,   327,     0,   382,   383,   384,   385,
       0,   386,   387,   327,     0,   388,    73,     0,    73,     0,
     257,     0,     0,     0,   389,   327,    74,     0,   327,     0,
     327,     0,    73,     0,    73,     0,    73,     0,     0,   327,
       0,     0,     0,   327,     0,     0,    74,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
      74,     0,     0,     0,     0,     0,     0,     0,   328,     0,
       0,     0,     0,     0,     0,    74,    74,   -51,     0,   -51,
     -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   289,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,
     -51,   -51,   -51,     0,     0,   -51,     0,   -51,     0,   274,
     275,   -51,   276,   277,     0,     0,     0,     0,     0,    74,
       0,     0,    74,   278,   279,   280,   281,     0,   282,   283,
     328,     0,   284,     0,     0,     0,     0,   328,     0,     0,
      74,   285,    74,   -58,   -58,     0,   -58,   -58,     0,     0,
      74,     0,    74,     0,    74,     0,   328,   -58,   -58,   -58,
     -58,     0,   -58,   -58,     0,     0,   -58,   -58,     0,    74,
       0,   -58,     0,     0,    36,   -58,    37,    38,     2,    39,
      40,   393,    41,    42,    43,    44,     0,    45,    46,    47,
      48,    49,    50,    51,     0,    52,    53,   245,   119,    55,
       0,     0,    56,     0,    57,     0,     0,     0,    58,   289,
     -46,     0,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,
     -46,     0,     0,     0,   -46,   328,     0,   457,   328,     0,
       0,     0,   -49,     0,   -49,   -49,   -49,   -49,   -49,     0,
     -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,    74,   -49,   -49,   -49,   -49,   -49,     0,    74,
     -49,     0,   -49,     0,     0,     0,   -49,   -50,     0,   -50,
     -50,   -50,   -50,   -50,    74,   -50,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   -50,   -50,
     -50,   -50,   -50,   393,     0,   -50,     0,   -50,     0,     0,
       0,   -50,     0,     0,     0,     0,     0,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     -52,     0,   -52,   -52,   -52,   -52,   -52,     0,   -52,   -52,
     -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
       0,   -52,   -52,   -52,   -52,   -52,     0,  -124,   -52,     0,
     -52,     0,     0,     0,   -52,  -124,  -124,   457,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   328,     0,     0,     0,     0,     0,
     -53,    74,   -53,   -53,   -53,   -53,   -53,    74,   -53,   -53,
     -53,   -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
       0,   -53,   -53,   -53,   -53,   -53,   393,     0,   -53,     0,
     -53,     0,     0,     0,   -53,     0,   -10,   -10,     0,   -10,
     -10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -10,   -10,   -10,   -10,     0,   -10,   -10,   289,    74,   -10,
       0,     0,   -10,     0,   -10,     0,   -59,   -59,   -10,   -59,
     -59,     0,     0,     0,   328,     0,   457,     0,     0,     0,
     -59,   -59,   -59,   -59,     0,   -59,   -59,     0,     0,   -59,
       0,     0,   -59,     0,   -59,     0,     0,     0,   -59,     0,
       0,     0,    74,    74,     0,     0,     0,   -59,   -59,     0,
     -59,   -59,     0,     0,     0,     0,     0,     0,    75,     0,
     328,   -59,   -59,   -59,   -59,     0,   -59,   -59,     0,   393,
     -59,   -59,     0,    75,     0,   -59,   328,     0,     0,   -59,
       0,     0,     0,     0,     0,     0,     0,     0,   328,   290,
      75,     0,     0,     0,    75,     0,     0,   457,   328,    74,
     442,   443,    74,   444,   445,     0,     0,     0,     0,     0,
       0,     0,   328,     0,   446,   447,   448,   449,     0,   450,
     451,   328,     0,   452,    74,     0,    74,     0,   323,     0,
       0,     0,   453,   328,    75,     0,   328,     0,   328,     0,
      74,     0,    74,     0,    74,     0,     0,   328,     0,     0,
       0,   328,     0,     0,    75,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,    75,     0,
       0,     0,     0,     0,     0,     0,   329,     0,     0,     0,
       0,     0,     0,    75,    75,   -54,     0,   -54,   -54,   -54,
     -54,   -54,     0,   -54,   -54,   -54,   -54,   290,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,   -54,
     -54,     0,     0,   -54,     0,   -54,     0,    37,    38,   -54,
      39,    40,     0,     0,     0,     0,     0,    75,     0,     0,
      75,    48,    49,    50,    51,     0,    52,    53,   329,     0,
     294,     0,     0,     0,     0,   329,     0,     0,    75,    58,
      75,   246,   247,     0,   248,   249,     0,     0,    75,     0,
      75,     0,    75,     0,   329,   250,   251,   252,   253,     0,
     254,   255,     0,     0,   256,   670,     0,    75,     0,   257,
       0,     0,   -55,   258,   -55,   -55,   -55,   -55,   -55,   394,
     -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,     0,     0,
     -55,     0,   -55,     0,     0,     0,   -55,   290,   -56,     0,
     -56,   -56,   -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
     -56,   -56,   -56,   -56,     0,     0,   -56,     0,   -56,     0,
       0,     0,   -56,   329,     0,   458,   329,     0,     0,     0,
     -47,     0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
      75,   -47,   -47,   -47,   -47,   -47,     0,    75,   -47,     0,
     -47,     0,     0,     0,   -47,   -59,     0,   -59,   -59,   -59,
     -59,   -59,    75,   -59,   -59,   -59,   -59,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,
     -59,   394,     0,   -59,     0,   -59,     0,     0,     0,   -59,
       0,     0,     0,     0,     0,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   -70,     0,
     -70,   -70,   -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,   -70,     0,  -123,   -70,     0,   -70,     0,
       0,     0,   -70,  -123,  -123,   458,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   329,     0,     0,     0,     0,     0,   -66,    75,
     -66,   -66,   -66,   -66,   -66,    75,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -66,   -66,   -66,   394,     0,   -66,     0,   -66,     0,
       0,     0,   -66,     0,   -11,   -11,     0,   -11,   -11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -11,   -11,
     -11,   -11,     0,   -11,   -11,   290,    75,   -11,     0,     0,
     -11,     0,   -11,     0,   246,   247,   -11,   248,   249,     0,
       0,     0,   329,     0,   458,     0,     0,     0,   250,   251,
     252,   253,     0,   254,   255,     0,     0,   256,   672,     0,
       0,     0,   257,     0,   311,   312,   258,   313,   314,     0,
      75,    75,     0,     0,     0,     0,     0,     0,   315,   316,
     317,   318,     0,   319,   320,     0,    84,   322,   329,     0,
       0,     0,   323,     0,     0,     0,   324,   394,     0,     0,
       0,    84,     0,     0,   329,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   329,   291,    84,     0,
       0,     0,    84,     0,     0,   458,   329,    75,   378,   379,
      75,   380,   381,     0,     0,     0,     0,     0,     0,     0,
     329,     0,   382,   383,   384,   385,     0,   386,   387,   329,
       0,   388,    75,     0,    75,     0,     0,     0,     0,     0,
     389,   329,    84,     0,   329,     0,   329,     0,    75,     0,
      75,     0,    75,     0,     0,   329,     0,     0,     0,   329,
       0,     0,    84,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,    84,     0,     0,     0,
       0,     0,     0,     0,   337,     0,     0,     0,     0,     0,
       0,    84,    84,   -67,     0,   -67,   -67,   -67,   -67,   -67,
       0,   -67,   -67,   -67,   -67,   291,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,     0,
       0,   -67,     0,   -67,     0,     0,     0,   -67,   378,   379,
       0,   380,   381,     0,     0,    84,     0,     0,    84,     0,
       0,     0,   382,   383,   384,   385,   337,   386,   387,   606,
       0,   388,     0,   337,     0,     0,    84,     0,    84,     0,
     389,     0,     0,     0,   -83,     0,    84,     0,    84,   -83,
      84,     0,   337,   473,   474,   475,   476,     0,   -83,   -83,
     -83,   -83,   -83,   -83,     0,    84,     0,     0,     0,     0,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   397,   -68,   -68,
     -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,   -68,   -68,   -68,   -68,   -68,     0,     0,   -68,     0,
     -68,     0,     0,     0,   -68,   291,   -69,     0,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,
     -69,   -69,     0,     0,   -69,     0,   -69,     0,     0,     0,
     -69,   337,     0,   461,   337,     0,     0,     0,   -65,     0,
     -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,   -65,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,    84,   -65,
     -65,   -65,   -65,   -65,     0,    84,   -65,     0,   -65,     0,
       0,     0,   -65,   -63,     0,   -63,   -63,   -63,   -63,   -63,
      84,   -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,   397,
       0,   -63,     0,   -63,     0,     0,     0,   -63,     0,     0,
       0,     0,     0,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   -61,     0,   -61,   -61,
     -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,
     -61,   -61,     0,  -125,   -61,     0,   -61,     0,     0,     0,
     -61,  -125,  -125,   461,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     337,     0,     0,     0,     0,     0,   -64,    84,   -64,   -64,
     -64,   -64,   -64,    84,   -64,   -64,   -64,   -64,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,
     -64,   -64,   397,     0,   -64,     0,   -64,     0,   274,   275,
     -64,   276,   277,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   278,   279,   280,   281,     0,   282,   283,   622,
       0,   284,     0,   291,    84,     0,     0,     0,     0,     0,
     285,    37,    38,     0,    39,    40,     0,     0,     0,     0,
     337,     0,   461,     0,     0,    48,    49,    50,    51,     0,
      52,    53,   206,     0,   294,     0,   442,   443,     0,   444,
     445,     0,     0,    58,     0,     0,     0,     0,    84,    84,
     446,   447,   448,   449,     0,   450,   451,   634,     0,   452,
       0,     0,     0,     0,    85,     0,   337,     0,   453,   378,
     379,     0,   380,   381,     0,   397,     0,     0,     0,    85,
       0,     0,   337,   382,   383,   384,   385,     0,   386,   387,
     658,     0,   388,     0,   337,   292,    85,     0,     0,     0,
      85,   389,     0,   461,   337,    84,   246,   247,    84,   248,
     249,     0,     0,     0,     0,     0,     0,     0,   337,     0,
     250,   251,   252,   253,     0,   254,   255,   337,     0,   400,
      84,     0,    84,     0,     0,     0,     0,     0,   258,   337,
      85,     0,   337,     0,   337,     0,    84,     0,    84,     0,
      84,     0,     0,   337,     0,     0,     0,   337,     0,     0,
      85,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,    85,     0,     0,     0,     0,     0,
       0,     0,   338,     0,     0,     0,     0,     0,     0,    85,
      85,   -62,     0,   -62,   -62,   -62,   -62,   -62,     0,   -62,
     -62,   -62,   -62,   292,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,   -62,   -62,   -62,   -62,   -62,     0,     0,   -62,
       0,   -62,     0,     0,     0,   -62,   246,   247,     0,   248,
     249,     0,     0,    85,     0,     0,    85,     0,     0,     0,
     250,   251,   252,   253,   338,   254,   255,   606,     0,   400,
       0,   338,     0,     0,    85,     0,    85,     0,   258,     0,
       0,     0,   -84,     0,    85,     0,    85,   -84,    85,     0,
     338,   473,   474,   475,   476,     0,   -84,   -84,   -84,   -84,
     -84,   -84,     0,    85,     0,     0,     0,     0,    36,     0,
      37,    38,     2,    39,    40,   398,    41,    42,    43,    44,
       0,    45,    46,    47,    48,    49,    50,    51,     0,    52,
      53,   245,   369,    55,     0,     0,    56,     0,    57,     0,
       0,     0,    58,   292,   -10,     0,   -10,   -10,   -10,   -10,
     -10,     0,   -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,
     -10,   -10,   -10,   -10,     0,   -10,   -10,   -10,   -10,   -10,
       0,     0,   -10,     0,   -10,     0,     0,     0,   -10,   338,
       0,   462,   338,     0,     0,     0,    36,     0,    37,    38,
       2,    39,    40,     0,    41,    42,    43,    44,     0,    45,
      46,    47,    48,    49,    50,    51,    85,    52,    53,   245,
     492,    55,     0,    85,    56,     0,    57,     0,     0,     0,
      58,   -44,     0,   -44,   -44,   -44,   -44,   -44,    85,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,   -44,   -44,   -44,   -44,   -44,   398,     0,   -44,
       0,   -44,     0,     0,     0,   -44,     0,     0,     0,     0,
       0,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,    36,     0,    37,    38,     2,    39,
      40,     0,    41,    42,    43,    44,     0,    45,    46,    47,
      48,    49,    50,    51,     0,    52,    53,   245,   504,    55,
       0,  -126,    56,     0,    57,     0,     0,     0,    58,  -126,
    -126,   462,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,   462,   462,   462,   462,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   338,     0,
       0,     0,     0,     0,   -11,    85,   -11,   -11,   -11,   -11,
     -11,    85,   -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,
     -11,   -11,   -11,   -11,     0,   -11,   -11,   -11,   -11,   -11,
     398,     0,   -11,     0,   -11,     0,   442,   443,   -11,   444,
     445,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     446,   447,   448,   449,     0,   450,   451,   667,     0,   452,
       0,   292,    85,     0,     0,     0,     0,     0,   453,   311,
     312,     0,   313,   314,     0,     0,     0,     0,   338,     0,
     462,     0,     0,   315,   316,   317,   318,     0,   319,   320,
     634,     0,   464,     0,   442,   443,     0,   444,   445,     0,
       0,   324,     0,     0,     0,     0,    85,    85,   446,   447,
     448,   449,     0,   450,   451,   311,   312,   452,   313,   314,
       0,     0,    82,     0,   338,     0,   453,     0,     0,   315,
     316,   317,   318,   398,   319,   320,     0,    82,   464,     0,
     338,     0,     0,     0,     0,     0,     0,   324,     0,     0,
       0,     0,   338,    82,   117,     0,     0,     0,    82,  -122,
       0,   462,   338,    85,   513,  -122,    85,     0,  -122,     0,
    -122,  -122,  -122,  -122,  -122,  -122,   338,  -122,  -122,  -122,
    -122,  -122,  -122,     0,     0,   338,     0,     0,    85,     0,
      85,     0,     0,     0,     0,     0,     0,   338,    82,     0,
     338,     0,   338,     0,    85,     0,    85,     0,    85,     0,
       0,   338,     0,     0,     0,   338,     0,     0,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,   182,    82,     0,     0,     0,     0,     0,     0,     0,
     335,     0,     0,     0,     0,     0,     0,    82,    82,    36,
       0,    37,    38,     2,    39,    40,     0,    41,    42,    43,
      44,   207,    45,    46,    47,    48,    49,    50,    51,     0,
      52,    53,   245,   594,    55,     0,     0,    56,     0,    57,
       0,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,   335,     0,     0,     0,     0,     0,     0,   335,
       0,     0,    82,     0,    82,     0,     0,     0,     0,     0,
       0,     0,    82,     0,    82,     0,    82,     0,   335,     0,
       0,     0,     0,     0,   -45,     0,   -45,   -45,   -45,   -45,
     -45,    82,   -45,   -45,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   401,   -45,   -45,   -45,   -45,   -45,
       0,     0,   -45,     0,   -45,     0,     0,     0,   -45,   347,
       0,    37,    38,     0,    39,    40,     0,   348,   349,   350,
     351,   424,   352,   353,   354,    48,    49,    50,    51,     0,
      52,    53,   355,  -109,    55,     0,     0,   356,     0,    57,
       0,  -109,  -109,    58,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,   335,   -85,   335,
     465,     0,     0,   -85,     0,     0,    81,   473,   474,   475,
     476,     0,   -85,   -85,   -85,   -85,   -85,   -85,     0,     0,
       0,    81,     0,     0,    82,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,    81,     0,     0,    36,    82,    37,    38,     0,
      39,    40,     0,    41,    42,    43,    44,     0,    45,    46,
      47,    48,    49,    50,    51,   520,    52,    53,   245,     0,
      55,     0,     0,    56,   415,    57,     0,     0,     0,    58,
     -95,     0,    81,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   534,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,
       0,     0,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,   180,   181,     0,    81,     0,     0,     0,
       0,     0,     0,     0,   334,     0,     0,     0,     0,   570,
       0,    81,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   584,   335,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,    81,     0,     0,    81,     0,
       0,     0,     0,     0,     0,     0,   334,     0,   607,     0,
       0,     0,     0,   334,     0,     0,    81,     0,    81,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    81,     0,
      81,     0,   334,     0,     0,     0,     0,     0,     0,   207,
     623,     0,     0,     0,     0,    81,     0,     0,     0,     0,
       0,   -71,     0,     0,     0,     0,   335,   395,   635,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,     0,     0,     0,   -72,     0,
       0,     0,     0,     0,    82,    82,   -72,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   335,     0,     0,     0,     0,     0,     0,     0,
       0,   607,   659,     0,     0,     0,     0,     0,   335,     0,
      80,   334,     0,   459,     0,     0,     0,     0,     0,     0,
     335,     0,     0,     0,     0,    80,     0,     0,     0,   635,
     668,    82,     0,     0,    82,     0,     0,     0,    81,     0,
       0,     0,     0,     0,   335,    81,    80,     0,     0,     0,
       0,     0,     0,   335,     0,     0,    82,     0,    82,     0,
      81,     0,     0,     0,     0,   335,     0,     0,   335,     0,
     335,     0,    82,     0,    82,     0,    82,     0,  -127,   335,
       0,     0,     0,   335,  -127,     0,    80,  -127,     0,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,     0,   532,   533,     0,    80,    80,    80,    80,
      80,    80,    80,   176,   177,   178,   179,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,     0,   333,   -73,
       0,     0,     0,     0,     0,    80,    80,   -73,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,     0,     0,     0,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   582,   583,     0,
     334,     0,     0,     0,     0,     0,     0,    81,     0,    80,
       0,     0,    80,    81,     0,     0,     0,     0,     0,     0,
     333,     0,     0,     0,     0,     0,     0,   333,     0,     0,
      80,     0,    80,     0,     0,     0,     0,     0,     0,     0,
      80,     0,    80,     0,    80,     0,   333,     0,     0,   -74,
       0,     0,     0,     0,     0,     0,     0,   -74,   -74,    80,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,  -101,     0,     0,     0,     0,     0,     0,
     334,  -101,  -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,
     136,  -101,  -101,  -101,  -101,  -101,  -101,     0,     0,     0,
       0,     0,  -110,     0,     0,     0,     0,     0,    81,    81,
    -110,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   334,     0,     0,   -86,
       0,     0,     0,     0,   -86,   333,    79,     0,   473,   474,
     475,   476,   334,   -86,   -86,   -86,   -86,   -86,   -86,     0,
       0,    79,     0,     0,   334,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,    81,     0,     0,    81,    80,
       0,     0,    79,     0,     0,     0,     0,     0,   334,     0,
       0,     0,     0,     0,    80,     0,     0,   334,     0,     0,
      81,     0,    81,     0,     0,     0,     0,     0,     0,   334,
       0,     0,   334,     0,   334,     0,    81,     0,    81,     0,
      81,     0,    79,   334,     0,     0,     0,   334,     0,     0,
       0,     0,     0,   528,   529,   530,   531,     0,     0,     0,
       0,     0,    79,   170,   171,   172,   173,   174,   175,     0,
       0,     0,     0,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,   332,  -108,     0,     0,     0,     0,
       0,    79,    79,  -108,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,     0,
       0,   333,   333,   333,   333,   333,   333,   578,   579,   580,
     581,     0,     0,     0,   333,     0,     0,     0,     0,     0,
       0,    80,     0,     0,     0,    79,     0,    80,    79,     0,
       0,     0,     0,     0,     0,     0,   332,     0,     0,     0,
       0,     0,     0,   332,     0,     0,    79,     0,    79,     0,
       0,     0,     0,     0,     0,     0,    79,     0,    79,     0,
      79,     0,   332,     0,     0,     0,     0,     0,     0,  -122,
       0,    77,     0,  -122,   563,    79,     0,     0,  -122,     0,
    -122,  -122,  -122,  -122,  -122,  -122,    77,  -122,  -122,  -122,
    -122,  -122,  -122,     0,   333,     0,     0,  -114,     0,     0,
       0,     0,     0,     0,     0,  -114,  -114,    77,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,   -90,    80,    80,   -90,     0,   413,   414,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,
     333,     0,     0,   -87,   146,     0,     0,    77,   -87,     0,
       0,   332,   473,   474,   475,   476,   333,   -87,   -87,   -87,
     -87,   -87,   -87,     0,     0,     0,     0,   169,   333,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    79,    80,
       0,   183,    80,     0,     0,    79,     0,     0,     0,   330,
       0,     0,   333,     0,     0,     0,    77,    77,     0,     0,
      79,   333,     0,     0,    80,     0,    80,     0,     0,     0,
       0,     0,     0,   333,     0,     0,   333,     0,   333,     0,
      80,     0,    80,     0,    80,     0,     0,   333,     0,     0,
       0,   333,     0,   522,   523,   524,   525,   526,   527,   146,
      77,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,   330,     0,    78,     0,     0,     0,     0,   330,     0,
       0,    77,     0,    77,     0,     0,     0,     0,    78,   -88,
       0,    77,     0,    77,   -88,    77,     0,   330,   473,   474,
     475,   476,     0,   -88,   -88,   -88,   -88,   -88,   -88,    78,
      77,     0,     0,     0,     0,     0,     0,   572,   573,   574,
     575,   576,   577,     0,     0,     0,     0,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,    79,     0,  -111,
       0,     0,     0,    79,     0,     0,     0,  -111,  -111,    78,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,     0,   -83,     0,     0,   -83,     0,    78,
       0,   409,   410,   411,   412,   433,   -83,   -83,   -83,   -83,
     -83,   -83,     0,    78,     0,     0,   330,     0,     0,     0,
       0,   331,     0,     0,     0,     0,     0,     0,    78,    78,
       0,     0,     0,   135,     0,     0,     0,     0,     0,     0,
     332,   -95,   -95,    77,   -95,   -95,   -95,   -95,   -95,   -95,
      77,   -95,   -95,   -95,   -95,   -95,   -95,     0,     0,     0,
       0,     0,     0,     0,     0,    77,   146,     0,    79,    79,
       0,     0,    78,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,   331,     0,     0,   332,     0,     0,     0,
     331,     0,     0,    78,     0,    78,     0,     0,     0,     0,
       0,     0,   332,    78,     0,    78,     0,    78,     0,   331,
       0,   535,   146,     0,   332,     0,     0,     0,     0,     0,
       0,   -99,    78,     0,     0,    79,     0,   -99,    79,   146,
     -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,   332,   -99,
     -99,   -99,   -99,   -99,   -99,     0,     0,   332,     0,     0,
      79,     0,    79,     0,     0,     0,     0,     0,     0,   332,
       0,     0,   332,     0,   332,     0,    79,     0,    79,     0,
      79,     0,     0,   332,     0,   585,     0,   332,     0,     0,
       0,   -99,    77,     0,     0,     0,     0,     0,    77,   -99,
     -99,     0,   -99,   -99,   -99,   -99,   -99,   -99,   331,   -99,
     -99,   -99,   -99,   -99,   -99,   100,     0,     0,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,  -113,     0,     0,    78,     0,     0,     0,     0,
    -113,  -113,    78,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,     0,    78,     0,     0,
       0,     0,     0,     0,     0,   330,     0,     0,   146,     0,
       0,     0,     0,     0,     0,   150,   304,   153,   154,     0,
       0,   159,   160,   161,   162,     0,     0,  -128,     0,     0,
       0,     0,     0,    77,    77,  -128,  -128,     0,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,   330,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -127,     0,     0,   342,   342,   330,  -127,     0,
     343,  -127,     0,  -127,  -127,  -127,  -127,  -127,  -127,   330,
    -127,  -127,  -127,  -127,  -127,  -127,     0,     0,     0,     0,
      77,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   330,     0,     0,     0,   331,     0,   364,
     217,   219,   330,     0,    78,    77,     0,    77,     0,     0,
      78,     0,     0,     0,   330,     0,     0,   330,     0,   330,
       0,    77,  -112,    77,     0,    77,     0,     0,   330,     0,
    -112,  -112,   330,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,     0,     0,     0,     0,
     -75,     0,     0,     0,     0,     0,     0,     0,   -75,   -75,
     376,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,     0,   -90,     0,   331,     0,     0,
     -90,     0,   477,   478,   -90,   -90,   -90,   -90,   422,   -90,
     -90,   -90,   -90,   -90,   -90,     0,     0,     0,   112,   -77,
       0,     0,     0,     0,     0,    78,    78,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   331,     0,     0,   440,     0,     0,     0,
       0,   -89,     0,     0,     0,     0,   -89,     0,     0,   331,
     473,   474,   475,   476,     0,   -89,   -89,   -89,   -89,   -89,
     -89,   331,   485,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,     0,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,   507,   508,   509,   510,
       0,     0,     0,     0,   331,     0,     0,    78,     0,    78,
       0,     0,   518,     0,     0,     0,   331,     0,     0,   331,
       0,   331,     0,    78,   376,    78,     0,    78,     0,     0,
     331,     0,     0,     0,   331,     0,     0,     0,     0,     0,
       0,     0,   538,   539,   540,   541,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   555,
     556,   557,   558,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   568,     0,   -76,     0,
       0,     0,     0,     0,     0,     0,   -76,   -76,   440,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,     0,     0,     0,   -78,     0,     0,     0,
     587,   304,   590,   591,   -78,   -78,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
       0,     0,     0,     0,  -115,     0,     0,     0,   610,   611,
     612,   613,  -115,  -115,     0,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -116,     0,
       0,     0,     0,     0,     0,     0,  -116,  -116,     0,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,     0,     0,     0,     0,  -124,     0,   638,   639,
     640,   641,  -124,     0,     0,  -124,     0,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -123,     0,   342,   342,     0,     0,  -123,     0,     0,  -123,
       0,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -125,     0,     0,     0,     0,     0,
    -125,     0,     0,  -125,     0,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -126,     0,   364,
     671,   673,   364,  -126,     0,     0,  -126,     0,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,     0,     0,     0,   364,     0,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -109,     0,     0,
     364,     0,   364,  -109,   364,     0,  -109,     0,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,   -71,     0,     0,     0,     0,     0,   -71,     0,     0,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,     0,
       0,   -72,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
       0,     0,     0,     0,     0,   -73,     0,     0,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,     0,     0,     0,     0,     0,   -74,
       0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,  -101,     0,     0,
       0,     0,     0,  -101,     0,     0,  -101,     0,  -101,  -101,
    -101,  -101,  -101,  -101,   416,  -101,  -101,  -101,  -101,  -101,
    -101,  -110,     0,     0,     0,     0,     0,  -110,     0,     0,
    -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -108,     0,     0,     0,     0,
       0,  -108,     0,     0,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -114,
       0,     0,     0,     0,     0,  -114,     0,     0,  -114,     0,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -101,     0,     0,     0,     0,     0,     0,
       0,  -101,  -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -127,     0,     0,
       0,  -127,     0,     0,     0,     0,  -127,     0,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -124,     0,     0,     0,  -124,     0,     0,     0,     0,
    -124,     0,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -123,     0,     0,     0,  -123,
       0,     0,     0,     0,  -123,     0,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -125,
       0,     0,     0,  -125,     0,     0,     0,     0,  -125,     0,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -126,     0,     0,     0,  -126,     0,     0,
       0,     0,  -126,     0,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -109,     0,     0,
       0,  -109,     0,     0,     0,     0,  -109,     0,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,   -71,     0,     0,     0,   -71,     0,     0,     0,     0,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,   -72,
       0,     0,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
       0,     0,     0,   -73,     0,     0,     0,     0,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,     0,     0,     0,   -74,     0,     0,
       0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,  -101,     0,     0,
       0,  -101,     0,     0,     0,     0,  -101,     0,  -101,  -101,
    -101,  -101,  -101,  -101,   480,  -101,  -101,  -101,  -101,  -101,
    -101,  -110,     0,     0,     0,  -110,     0,     0,     0,     0,
    -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -108,     0,     0,     0,  -108,
       0,     0,     0,     0,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -114,
       0,     0,     0,  -114,     0,     0,     0,     0,  -114,     0,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -111,     0,     0,     0,     0,     0,  -111,
       0,     0,  -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -101,     0,     0,
       0,     0,     0,  -101,     0,     0,  -101,     0,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -111,     0,     0,     0,  -111,     0,     0,     0,     0,
    -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -101,     0,     0,     0,  -101,
       0,     0,     0,     0,  -101,     0,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -113,
       0,     0,     0,     0,     0,  -113,     0,     0,  -113,     0,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -128,     0,     0,     0,     0,     0,  -128,
       0,     0,  -128,     0,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -113,     0,     0,
       0,  -113,     0,     0,     0,     0,  -113,     0,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -128,     0,     0,     0,  -128,     0,     0,     0,     0,
    -128,     0,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -112,     0,     0,     0,     0,
       0,  -112,     0,     0,  -112,     0,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,   -75,
       0,     0,     0,     0,     0,   -75,     0,     0,   -75,     0,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -77,     0,     0,     0,     0,     0,   -77,
       0,     0,   -77,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,     0,     0,
       0,     0,     0,   -76,     0,     0,   -76,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -78,     0,     0,     0,     0,     0,   -78,     0,     0,
     -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,  -102,     0,     0,     0,     0,
       0,     0,     0,  -102,  -102,     0,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -112,
       0,     0,     0,  -112,     0,     0,     0,     0,  -112,     0,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,   -75,     0,     0,     0,   -75,     0,     0,
       0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -77,     0,     0,
       0,   -77,     0,     0,     0,     0,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,     0,     0,     0,   -76,     0,     0,     0,     0,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -78,     0,     0,     0,   -78,
       0,     0,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,  -102,
       0,     0,     0,     0,     0,  -102,     0,     0,  -102,     0,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,     0,     0,     0,  -102,     0,     0,
       0,     0,  -102,     0,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -115,     0,     0,
       0,     0,     0,  -115,     0,     0,  -115,     0,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,     0,     0,     0,  -115,     0,     0,     0,     0,
    -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -116,     0,     0,     0,     0,
       0,  -116,     0,     0,  -116,     0,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
       0,     0,     0,  -116,     0,     0,     0,     0,  -116,     0,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,   135,     0,     0,     0,     0,     0,     0,
       0,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,
    -101,   -96,   -96,   -96,   -96,   -96,   -96,     0,  -101,  -101,
       0,  -101,  -101,  -101,  -101,  -101,  -101,   135,  -101,  -101,
    -101,  -101,  -101,  -101,     0,   -97,   -97,     0,   -97,   -97,
     -97,   -97,   -97,   -97,   135,   -97,   -97,   -97,   -97,   -97,
     -97,     0,   -98,   -98,     0,   -98,   -98,   -98,   -98,   -98,
     -98,  -100,   -98,   -98,   -98,   -98,   -98,   -98,     0,  -100,
    -100,     0,  -100,  -100,  -100,  -100,  -100,  -100,  -102,  -100,
    -100,  -100,  -100,  -100,  -100,     0,  -102,  -102,     0,  -102,
    -102,  -102,  -102,  -102,  -102,  -127,  -102,  -102,  -102,  -102,
    -102,  -102,     0,  -127,  -127,     0,  -127,  -127,  -127,  -127,
    -127,  -127,  -124,  -127,  -127,  -127,  -127,  -127,  -127,     0,
    -124,  -124,     0,  -124,  -124,  -124,  -124,  -124,  -124,  -123,
    -124,  -124,  -124,  -124,  -124,  -124,     0,  -123,  -123,     0,
    -123,  -123,  -123,  -123,  -123,  -123,  -125,  -123,  -123,  -123,
    -123,  -123,  -123,     0,  -125,  -125,     0,  -125,  -125,  -125,
    -125,  -125,  -125,  -126,  -125,  -125,  -125,  -125,  -125,  -125,
       0,  -126,  -126,     0,  -126,  -126,  -126,  -126,  -126,  -126,
    -109,  -126,  -126,  -126,  -126,  -126,  -126,     0,  -109,  -109,
       0,  -109,  -109,  -109,  -109,  -109,  -109,   -71,  -109,  -109,
    -109,  -109,  -109,  -109,     0,   -71,   -71,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -73,
     -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -74,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -74,   -74,     0,   -74,
     -74,   -74,   -74,   -74,   -74,  -110,   -74,   -74,   -74,   -74,
     -74,   -74,     0,  -110,  -110,     0,  -110,  -110,  -110,  -110,
    -110,  -110,  -108,  -110,  -110,  -110,  -110,  -110,  -110,     0,
    -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,  -114,
    -108,  -108,  -108,  -108,  -108,  -108,     0,  -114,  -114,     0,
    -114,  -114,  -114,  -114,  -114,  -114,     0,  -114,  -114,  -114,
    -114,  -114,  -114,   479,     0,     0,     0,   -95,     0,     0,
       0,     0,   -95,     0,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -95,   -95,   -95,   -95,   -95,   -95,   -99,     0,     0,
       0,   -99,     0,     0,     0,     0,   -99,     0,   -99,   -99,
     -99,   -99,   -99,   -99,     0,   -99,   -99,   -99,   -99,   -99,
     -99,  -124,     0,     0,     0,     0,     0,  -124,     0,     0,
    -124,     0,  -124,  -124,  -124,  -124,  -124,  -124,     0,  -124,
    -124,  -124,  -124,  -124,  -124,  -123,     0,     0,     0,     0,
       0,  -123,     0,     0,  -123,     0,  -123,  -123,  -123,  -123,
    -123,  -123,     0,  -123,  -123,  -123,  -123,  -123,  -123,  -125,
       0,     0,     0,     0,     0,  -125,     0,     0,  -125,     0,
    -125,  -125,  -125,  -125,  -125,  -125,     0,  -125,  -125,  -125,
    -125,  -125,  -125,  -126,     0,     0,     0,     0,     0,  -126,
       0,     0,  -126,     0,  -126,  -126,  -126,  -126,  -126,  -126,
       0,  -126,  -126,  -126,  -126,  -126,  -126,  -109,     0,     0,
       0,     0,     0,  -109,     0,     0,  -109,     0,  -109,  -109,
    -109,  -109,  -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,
    -109,   -71,     0,     0,     0,     0,     0,   -71,     0,     0,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -72,     0,     0,     0,     0,
       0,   -72,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -73,
       0,     0,     0,     0,     0,   -73,     0,     0,   -73,     0,
     -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -74,     0,     0,     0,     0,     0,   -74,
       0,     0,   -74,     0,   -74,   -74,   -74,   -74,   -74,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   415,     0,     0,
       0,     0,     0,   -96,     0,     0,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,  -101,     0,     0,     0,     0,     0,  -101,     0,     0,
    -101,     0,  -101,  -101,  -101,  -101,  -101,  -101,     0,  -101,
    -101,  -101,  -101,  -101,  -101,  -110,     0,     0,     0,     0,
       0,  -110,     0,     0,  -110,     0,  -110,  -110,  -110,  -110,
    -110,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,  -108,
       0,     0,     0,     0,     0,  -108,     0,     0,  -108,     0,
    -108,  -108,  -108,  -108,  -108,  -108,     0,  -108,  -108,  -108,
    -108,  -108,  -108,  -114,     0,     0,     0,     0,     0,  -114,
       0,     0,  -114,     0,  -114,  -114,  -114,  -114,  -114,  -114,
    -111,  -114,  -114,  -114,  -114,  -114,  -114,     0,  -111,  -111,
       0,  -111,  -111,  -111,  -111,  -111,  -111,     0,  -111,  -111,
    -111,  -111,  -111,  -111,  -127,     0,     0,     0,  -127,     0,
       0,     0,     0,  -127,     0,  -127,  -127,  -127,  -127,  -127,
    -127,     0,  -127,  -127,  -127,  -127,  -127,  -127,  -124,     0,
       0,     0,  -124,     0,     0,     0,     0,  -124,     0,  -124,
    -124,  -124,  -124,  -124,  -124,     0,  -124,  -124,  -124,  -124,
    -124,  -124,  -123,     0,     0,     0,  -123,     0,     0,     0,
       0,  -123,     0,  -123,  -123,  -123,  -123,  -123,  -123,     0,
    -123,  -123,  -123,  -123,  -123,  -123,  -125,     0,     0,     0,
    -125,     0,     0,     0,     0,  -125,     0,  -125,  -125,  -125,
    -125,  -125,  -125,     0,  -125,  -125,  -125,  -125,  -125,  -125,
    -126,     0,     0,     0,  -126,     0,     0,     0,     0,  -126,
       0,  -126,  -126,  -126,  -126,  -126,  -126,     0,  -126,  -126,
    -126,  -126,  -126,  -126,  -109,     0,     0,     0,  -109,     0,
       0,     0,     0,  -109,     0,  -109,  -109,  -109,  -109,  -109,
    -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,   -71,     0,
       0,     0,   -71,     0,     0,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -72,     0,     0,     0,   -72,     0,     0,     0,
       0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -73,     0,     0,     0,
     -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,
     -74,     0,     0,     0,   -74,     0,     0,     0,     0,   -74,
       0,   -74,   -74,   -74,   -74,   -74,   -74,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   479,     0,     0,     0,   -96,     0,
       0,     0,     0,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,  -101,     0,
       0,     0,  -101,     0,     0,     0,     0,  -101,     0,  -101,
    -101,  -101,  -101,  -101,  -101,     0,  -101,  -101,  -101,  -101,
    -101,  -101,  -110,     0,     0,     0,  -110,     0,     0,     0,
       0,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,     0,
    -110,  -110,  -110,  -110,  -110,  -110,  -108,     0,     0,     0,
    -108,     0,     0,     0,     0,  -108,     0,  -108,  -108,  -108,
    -108,  -108,  -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,
    -114,     0,     0,     0,  -114,     0,     0,     0,     0,  -114,
       0,  -114,  -114,  -114,  -114,  -114,  -114,     0,  -114,  -114,
    -114,  -114,  -114,  -114,  -111,     0,     0,     0,     0,     0,
    -111,     0,     0,  -111,     0,  -111,  -111,  -111,  -111,  -111,
    -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,   415,     0,
       0,     0,     0,     0,   -97,     0,     0,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   415,     0,     0,     0,     0,     0,   -98,     0,
       0,   -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,     0,
     -98,   -98,   -98,   -98,   -98,   -98,  -100,     0,     0,     0,
       0,     0,  -100,     0,     0,  -100,     0,  -100,  -100,  -100,
    -100,  -100,  -100,  -113,  -100,  -100,  -100,  -100,  -100,  -100,
       0,  -113,  -113,     0,  -113,  -113,  -113,  -113,  -113,  -113,
    -128,  -113,  -113,  -113,  -113,  -113,  -113,     0,  -128,  -128,
       0,  -128,  -128,  -128,  -128,  -128,  -128,     0,  -128,  -128,
    -128,  -128,  -128,  -128,  -111,     0,     0,     0,  -111,     0,
       0,     0,     0,  -111,     0,  -111,  -111,  -111,  -111,  -111,
    -111,     0,  -111,  -111,  -111,  -111,  -111,  -111,   479,     0,
       0,     0,   -97,     0,     0,     0,     0,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,     0,   -97,   -97,   -97,   -97,
     -97,   -97,   479,     0,     0,     0,   -98,     0,     0,     0,
       0,   -98,     0,   -98,   -98,   -98,   -98,   -98,   -98,     0,
     -98,   -98,   -98,   -98,   -98,   -98,  -100,     0,     0,     0,
    -100,     0,     0,     0,     0,  -100,     0,  -100,  -100,  -100,
    -100,  -100,  -100,     0,  -100,  -100,  -100,  -100,  -100,  -100,
    -102,     0,     0,     0,     0,     0,  -102,     0,     0,  -102,
       0,  -102,  -102,  -102,  -102,  -102,  -102,     0,  -102,  -102,
    -102,  -102,  -102,  -102,  -113,     0,     0,     0,     0,     0,
    -113,     0,     0,  -113,     0,  -113,  -113,  -113,  -113,  -113,
    -113,     0,  -113,  -113,  -113,  -113,  -113,  -113,  -128,     0,
       0,     0,     0,     0,  -128,     0,     0,  -128,     0,  -128,
    -128,  -128,  -128,  -128,  -128,  -112,  -128,  -128,  -128,  -128,
    -128,  -128,     0,  -112,  -112,     0,  -112,  -112,  -112,  -112,
    -112,  -112,   -75,  -112,  -112,  -112,  -112,  -112,  -112,     0,
     -75,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -77,
     -75,   -75,   -75,   -75,   -75,   -75,     0,   -77,   -77,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -76,   -77,   -77,   -77,
     -77,   -77,   -77,     0,   -76,   -76,     0,   -76,   -76,   -76,
     -76,   -76,   -76,   -78,   -76,   -76,   -76,   -76,   -76,   -76,
       0,   -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,
       0,   -78,   -78,   -78,   -78,   -78,   -78,  -102,     0,     0,
       0,  -102,     0,     0,     0,     0,  -102,     0,  -102,  -102,
    -102,  -102,  -102,  -102,     0,  -102,  -102,  -102,  -102,  -102,
    -102,  -113,     0,     0,     0,  -113,     0,     0,     0,     0,
    -113,     0,  -113,  -113,  -113,  -113,  -113,  -113,     0,  -113,
    -113,  -113,  -113,  -113,  -113,  -128,     0,     0,     0,  -128,
       0,     0,     0,     0,  -128,     0,  -128,  -128,  -128,  -128,
    -128,  -128,     0,  -128,  -128,  -128,  -128,  -128,  -128,  -112,
       0,     0,     0,     0,     0,  -112,     0,     0,  -112,     0,
    -112,  -112,  -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,
    -112,  -112,  -112,   -75,     0,     0,     0,     0,     0,   -75,
       0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -77,     0,     0,
       0,     0,     0,   -77,     0,     0,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,     0,     0,     0,     0,     0,   -76,     0,     0,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -78,     0,     0,     0,     0,
       0,   -78,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,     0,   -78,   -78,   -78,   -78,   -78,   -78,  -112,
       0,     0,     0,  -112,     0,     0,     0,     0,  -112,     0,
    -112,  -112,  -112,  -112,  -112,  -112,     0,  -112,  -112,  -112,
    -112,  -112,  -112,   -75,     0,     0,     0,   -75,     0,     0,
       0,     0,   -75,     0,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -75,   -75,   -75,   -75,   -75,   -77,     0,     0,
       0,   -77,     0,     0,     0,     0,   -77,     0,   -77,   -77,
     -77,   -77,   -77,   -77,     0,   -77,   -77,   -77,   -77,   -77,
     -77,   -76,     0,     0,     0,   -76,     0,     0,     0,     0,
     -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -78,     0,     0,     0,   -78,
       0,     0,     0,     0,   -78,     0,   -78,   -78,   -78,   -78,
     -78,   -78,  -115,   -78,   -78,   -78,   -78,   -78,   -78,     0,
    -115,  -115,     0,  -115,  -115,  -115,  -115,  -115,  -115,     0,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,     0,     0,     0,
       0,     0,  -115,     0,     0,  -115,     0,  -115,  -115,  -115,
    -115,  -115,  -115,  -116,  -115,  -115,  -115,  -115,  -115,  -115,
       0,  -116,  -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,
       0,  -116,  -116,  -116,  -116,  -116,  -116,  -115,     0,     0,
       0,  -115,     0,     0,     0,     0,  -115,     0,  -115,  -115,
    -115,  -115,  -115,  -115,     0,  -115,  -115,  -115,  -115,  -115,
    -115,  -116,     0,     0,     0,     0,     0,  -116,     0,     0,
    -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,     0,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,     0,     0,     0,  -116,
       0,     0,     0,     0,  -116,     0,  -116,  -116,  -116,  -116,
    -116,  -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,   -91,
       0,     0,     0,     0,   -91,     0,   477,   478,   -91,   -91,
     -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,   -92,
       0,     0,     0,     0,   -92,     0,   477,   478,   -92,   -92,
     -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   -94,
       0,     0,     0,     0,   -94,     0,   477,   478,   -94,   -94,
     -94,   -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   -93,
       0,     0,     0,     0,   -93,     0,   477,   478,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -91,
       0,     0,   -91,     0,   413,   414,   -91,   -91,   -91,   -91,
       0,   -91,   -91,   -91,   -91,   -91,   -91,   -92,     0,     0,
     -92,     0,   413,   414,   -92,   -92,   -92,   -92,     0,   -92,
     -92,   -92,   -92,   -92,   -92,   -94,     0,     0,   -94,     0,
     413,   414,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -93,     0,     0,   -93,     0,   413,   414,
     -93,   -93,   -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,
     -93,   -84,     0,     0,   -84,     0,     0,     0,   409,   410,
     411,   412,     0,   -84,   -84,   -84,   -84,   -84,   -84,   -85,
       0,     0,   -85,     0,     0,     0,   409,   410,   411,   412,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,     0,     0,
     -86,     0,     0,     0,   409,   410,   411,   412,     0,   -86,
     -86,   -86,   -86,   -86,   -86,   -87,     0,     0,   -87,     0,
       0,     0,   409,   410,   411,   412,     0,   -87,   -87,   -87,
     -87,   -87,   -87,   -88,     0,     0,   -88,     0,     0,     0,
     409,   410,   411,   412,     0,   -88,   -88,   -88,   -88,   -88,
     -88,   -89,     0,     0,   -89,     0,     0,     0,   409,   410,
     411,   412,     0,   -89,   -89,   -89,   -89,   -89,   -89,   -90,
     -90,     0,   133,   134,   -90,   -90,   -90,   -90,     0,   -90,
     -90,   -90,   -90,   -90,   -90,   -91,   -91,     0,   133,   134,
     -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,   -91,   -91,
     -91,   -92,   -92,     0,   133,   134,   -92,   -92,   -92,   -92,
       0,   -92,   -92,   -92,   -92,   -92,   -92,   -94,   -94,     0,
     133,   134,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,   -93,   -93,     0,   133,   134,   -93,   -93,
     -93,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,   -83,
     -83,     0,     0,     0,   129,   130,   131,   132,     0,   -83,
     -83,   -83,   -83,   -83,   -83,   -84,   -84,     0,     0,     0,
     129,   130,   131,   132,     0,   -84,   -84,   -84,   -84,   -84,
     -84,   -85,   -85,     0,     0,     0,   129,   130,   131,   132,
       0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,     0,
       0,     0,   129,   130,   131,   132,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -87,   -87,     0,     0,     0,   129,   130,
     131,   132,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -88,
     -88,     0,     0,     0,   129,   130,   131,   132,     0,   -88,
     -88,   -88,   -88,   -88,   -88,   -89,   -89,     0,     0,     0,
     129,   130,   131,   132,     0,   -89,   -89,   -89,   -89,   -89,
     -89
};

static const yytype_int16 yycheck[] =
{
      26,   144,    22,    62,    60,   256,   142,   195,     8,    94,
     198,   245,     0,    35,     2,    41,     4,    99,   195,   195,
       0,    21,   142,   143,     4,    29,    30,    24,   216,     3,
     218,    57,    58,   284,     8,     8,    62,     0,   226,     3,
     228,    14,   230,   294,     3,     3,     5,     5,    21,     8,
       8,   195,    26,     5,    26,    29,     5,    27,     3,     3,
      60,     1,    26,   206,     8,     5,   195,    26,    26,    27,
      29,   322,    94,    29,    30,    27,   102,   195,    27,   105,
     106,    26,    26,    29,    30,    29,    27,     1,     3,     3,
       5,     5,   114,     3,    29,    30,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    26,   194,    27,   102,     0,    26,    27,   144,     0,
       5,   355,   102,    26,     5,   151,   152,     0,     3,     3,
       0,   213,     5,     8,     1,     5,     3,   388,     5,   165,
      26,   114,     3,     4,    27,     6,     7,    30,   102,   400,
     232,    26,    26,    27,    29,    26,    17,    18,    19,    20,
      27,    22,    23,    24,    27,    26,    27,    30,     3,   195,
      31,     0,   198,     8,    35,   195,     5,     1,   321,     3,
     206,     5,     1,    24,     3,    26,     5,   213,    29,    30,
     216,    26,   218,   166,    29,    26,    27,   151,   152,    30,
     226,   452,   228,    27,   230,    26,   232,     1,    27,     3,
      24,     5,    26,   464,   299,    29,    30,     3,    26,   245,
       3,    24,     8,    26,     0,     8,    29,    30,   371,     5,
     366,   257,   368,    27,    26,     3,     4,     5,     6,     7,
      26,   195,    27,    26,    27,    30,   366,   303,   368,    17,
      18,    19,    20,    27,    22,    23,    30,     3,    26,   285,
       3,    29,     8,    31,     3,     8,   239,    35,    26,     8,
     243,    24,    27,    26,   417,    30,    29,    30,    26,    27,
      26,    27,    30,    26,    27,    29,    30,    26,    24,   371,
      26,   434,   428,    29,    30,   321,    26,   323,   324,    24,
      26,    26,     0,   303,    29,    30,     3,     5,   428,   429,
      24,   370,    26,    29,    30,    29,    30,     3,     4,    27,
       6,     7,   348,    39,    40,    41,    42,    43,    44,   355,
      29,    17,    18,    19,    20,   417,    22,    23,    24,    25,
      26,     5,    24,    27,   370,    31,    21,    29,    30,    35,
      27,    26,   434,    30,    29,    30,    27,    32,    33,    34,
      35,    36,    37,   389,    39,    40,    41,    42,    43,    44,
     513,     0,    27,    29,    30,    30,     5,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
      27,     1,    27,     3,     4,     5,     6,     7,    29,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    27,    22,    23,    24,    25,    26,     0,     0,    29,
     563,    31,     5,     5,    24,    35,    26,   453,     0,    29,
      30,   513,    27,     5,   493,    30,     3,     4,    27,     6,
       7,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,    22,    23,   645,    27,    26,
     648,   487,    27,   606,   490,   491,    29,   493,   645,   645,
      25,   648,   648,    26,    27,    30,    26,    30,   560,   622,
      25,   563,   670,    25,   672,    30,   512,    25,    30,    29,
      30,   634,    30,   670,   670,   672,   672,    26,   686,   487,
     688,   645,   690,    25,   648,    29,    30,   487,    30,   686,
     686,   688,   688,   690,   690,   658,   645,   543,   544,   648,
      25,    27,    26,    27,   667,    30,   670,   645,   672,    26,
     648,    26,    25,   487,   560,    25,   562,    30,    26,    27,
      30,   670,   686,   672,   688,    25,   690,    26,    25,    27,
      30,    25,   670,    30,   672,    25,    30,   686,    26,   688,
      30,   690,   588,   589,    27,    26,    25,    30,   686,    25,
     688,    30,   690,    26,    30,    27,    25,    27,    26,    26,
     606,    30,    27,    39,    40,    41,    42,    43,    44,   615,
      26,    27,    26,    41,    30,    26,   622,   679,    29,    30,
     682,    26,   684,    26,    27,    26,    27,    30,   634,    57,
      58,   693,    26,    27,    62,   697,    30,   643,   644,   645,
      26,    27,   648,    26,    30,   645,    26,    27,   648,    27,
      30,    27,   658,    26,   588,   589,    26,    27,    26,    27,
      30,   667,    30,    26,   670,    26,   672,    26,    27,    26,
     670,    30,   672,   679,   102,    26,   682,    26,   684,    27,
     686,    27,   688,    26,   690,    26,   686,   693,   688,    26,
     690,   697,    29,    30,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    26,
      27,   645,    27,    30,   648,    30,   144,    27,    27,    27,
      30,    30,    30,   151,   152,     3,     4,    26,     6,     7,
      39,    40,    41,    42,    43,    44,   670,   165,   672,    17,
      18,    19,    20,    26,    22,    23,    24,    25,    26,    29,
      30,    27,   686,    31,   688,    26,   690,    35,    29,    30,
      26,    26,    26,    29,    30,    29,    30,   195,    26,    26,
     198,    29,    30,    26,    26,    27,    29,    30,   206,    26,
      29,    27,    29,    30,    30,   213,    27,    27,   216,    30,
     218,     3,     4,    27,     6,     7,    30,    27,   226,    27,
     228,    26,   230,    26,   232,    17,    18,    19,    20,    27,
      22,    23,    24,    27,    26,    27,    30,   245,    27,    31,
      27,    30,    27,    35,    27,    30,    27,    30,    27,   257,
     258,     1,    27,     3,     4,     5,     6,     7,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    27,    22,    23,    24,    25,    26,   285,    27,    29,
      27,    31,    27,    30,     1,    35,     3,     4,     5,     6,
       7,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    29,    22,    23,    24,    25,    26,
      26,    27,    29,   321,    31,   323,   324,    29,    35,     4,
       1,    92,     3,     4,     5,     6,     7,    30,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     348,    22,    23,    24,    25,    26,    35,   355,    29,    27,
      31,    35,    30,    27,    35,     1,    30,     3,     4,     5,
       6,     7,   370,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,   389,   111,    29,    27,    31,    -1,    30,    27,    35,
      27,    30,    -1,    30,    -1,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    21,    29,    -1,    31,    -1,
      26,    -1,    35,    29,    30,   453,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,    27,    27,    -1,    30,    30,     1,   487,
       3,     4,     5,     6,     7,   493,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,   512,    -1,    29,    -1,    31,    -1,
       3,     4,    35,     6,     7,    27,    27,    27,    30,    30,
      30,    26,    27,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    26,    27,   543,   544,    27,    31,    -1,
      30,    -1,    35,     3,     4,    27,     6,     7,    30,    -1,
      27,    -1,   560,    30,   562,    29,    30,    17,    18,    19,
      20,    -1,    22,    23,    24,    27,    26,    27,    30,     3,
       4,    31,     6,     7,    27,    35,    27,    30,    -1,    30,
     588,   589,    -1,    17,    18,    19,    20,    -1,    22,    23,
      24,    27,    26,    27,    30,    -1,    26,    31,   606,    26,
      27,    35,     3,     4,    -1,     6,     7,   615,   616,    27,
      27,    41,    30,    30,   622,    -1,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,   634,    57,    58,    -1,
      31,    -1,    62,    -1,    35,   643,   644,   645,     3,     4,
     648,     6,     7,    27,    27,    27,    30,    30,    30,    -1,
     658,    -1,    17,    18,    19,    20,    -1,    22,    23,   667,
      27,    26,   670,    30,   672,    27,    31,    -1,    30,    -1,
      35,   679,   102,    -1,   682,    -1,   684,    -1,   686,    -1,
     688,    27,   690,    27,    30,   693,    30,    27,    27,   697,
      30,    30,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    27,    27,    27,
      30,    30,    30,    27,   144,    27,    30,    27,    30,    -1,
      30,   151,   152,    27,    27,    -1,    30,    30,     1,    -1,
       3,     4,     5,     6,     7,   165,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    29,    30,    29,    27,    31,    -1,
      30,    27,    35,    27,    30,   195,    30,    27,   198,    27,
      30,    27,    30,    -1,    30,    27,   206,    27,    30,    27,
      30,    27,    30,   213,    30,    -1,   216,    -1,   218,     3,
       4,    27,     6,     7,    30,    -1,   226,    -1,   228,    -1,
     230,    -1,   232,    17,    18,    19,    20,    -1,    22,    23,
      24,    27,    26,    27,    30,   245,    27,    31,    -1,    30,
       1,    35,     3,     4,     5,     6,     7,   257,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    29,    30,    29,    27,
      31,    -1,    30,    -1,    35,   285,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    29,    30,    29,    27,    31,    -1,    30,    27,
      35,   321,    30,   323,   324,    -1,    27,    -1,     1,    30,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   348,    22,
      23,    24,    25,    26,    -1,   355,    29,    -1,    31,    26,
      27,    -1,    35,     1,    -1,     3,     4,     5,     6,     7,
     370,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,   389,
      -1,    29,    -1,    31,    26,    27,    -1,    35,    29,    30,
      26,    27,    -1,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    21,    29,    -1,    31,    -1,    26,    27,
      35,    -1,    30,   453,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,    26,    27,    26,    27,    -1,     1,   487,     3,     4,
       5,     6,     7,   493,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,   512,    -1,    29,    -1,    31,    -1,     3,     4,
      35,     6,     7,    26,    27,    26,    27,    26,    27,    26,
      27,    -1,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,   543,   544,    -1,    31,    26,    27,    -1,
      35,     3,     4,    -1,     6,     7,    26,    27,    26,    27,
     560,    -1,   562,    26,    27,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    -1,    -1,     3,     4,    31,
       6,     7,    -1,    35,    -1,    -1,    -1,    -1,   588,   589,
      -1,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    26,    31,   606,    -1,    -1,    35,
       3,     4,    -1,     6,     7,   615,    -1,    -1,    -1,    41,
      -1,    -1,   622,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,   634,    57,    58,    -1,    31,    -1,
      62,    -1,    35,   643,   644,   645,     3,     4,   648,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   658,    -1,
      17,    18,    19,    20,    -1,    22,    23,   667,    -1,    26,
     670,    -1,   672,    -1,    31,    -1,    -1,    -1,    35,   679,
     102,    -1,   682,    -1,   684,    -1,   686,    -1,   688,    -1,
     690,    -1,    -1,   693,    -1,    -1,    -1,   697,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
     152,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,   165,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,   213,    -1,    -1,   216,    -1,   218,     3,     4,    -1,
       6,     7,    -1,    -1,   226,    -1,   228,    -1,   230,    -1,
     232,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    -1,    -1,   245,    -1,    31,    -1,    -1,     1,    35,
       3,     4,     5,     6,     7,   257,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    35,   285,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,   321,
      -1,   323,   324,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   348,    22,    23,    24,
      25,    26,    -1,   355,    29,    -1,    31,    -1,    -1,    -1,
      35,     1,    -1,     3,     4,     5,     6,     7,   370,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,   389,    -1,    29,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    21,    29,    -1,    31,    25,    26,    -1,    35,    -1,
      30,   453,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,    -1,
      -1,    -1,    -1,    -1,     1,   487,     3,     4,     5,     6,
       7,   493,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
     512,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,   543,   544,    26,    -1,    -1,    -1,    -1,    31,    -1,
       3,     4,    35,     6,     7,    -1,    -1,    -1,   560,    -1,
     562,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,
       3,     4,    35,     6,     7,    -1,   588,   589,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      23,    -1,    26,    26,   606,    -1,    29,    -1,    31,    -1,
      -1,    -1,    35,   615,    -1,    -1,    -1,    41,    -1,    -1,
     622,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   634,    57,    58,    -1,    -1,    -1,    62,    -1,
      -1,   643,   644,   645,     3,     4,   648,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   658,    -1,    17,    18,
      19,    20,    -1,    22,    23,   667,    -1,    26,   670,    -1,
     672,    -1,    31,    -1,    -1,    -1,    35,   679,   102,    -1,
     682,    -1,   684,    -1,   686,    -1,   688,    -1,   690,    -1,
      -1,   693,    -1,    -1,    -1,   697,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,   165,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,   216,    -1,   218,     3,     4,    -1,     6,     7,
      -1,    -1,   226,    -1,   228,    -1,   230,    -1,   232,    17,
      18,    19,    20,    -1,    22,    23,    24,    -1,    26,    -1,
      -1,   245,    -1,    31,    -1,    -1,     1,    35,     3,     4,
       5,     6,     7,   257,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      35,   285,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    35,   321,    -1,   323,
     324,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,   348,    22,    23,    24,    25,    26,
      -1,   355,    29,    -1,    31,    -1,    -1,    -1,    35,     1,
      -1,     3,     4,     5,     6,     7,   370,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,   389,    -1,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    21,
      29,    -1,    31,    -1,    -1,    -1,    35,    29,    30,   453,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,    -1,    -1,    -1,
      -1,    -1,     1,   487,     3,     4,     5,     6,     7,   493,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,   512,    -1,
      29,    -1,    31,    -1,     3,     4,    35,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    -1,    26,    27,   543,
     544,    -1,    31,    -1,    -1,    -1,    35,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,   560,    -1,   562,    -1,
      -1,    17,    18,    19,    20,    -1,    22,    23,    -1,    -1,
      26,    27,    -1,     3,     4,    31,     6,     7,    -1,    35,
      -1,    -1,    -1,    -1,   588,   589,    -1,    17,    18,    19,
      20,    -1,    22,    23,    -1,    -1,    26,    -1,    -1,    29,
      26,    31,   606,    -1,    -1,    35,     3,     4,    -1,     6,
       7,   615,    -1,    -1,    -1,    41,    -1,    -1,   622,    -1,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    26,
     634,    57,    58,    -1,    -1,    -1,    62,    -1,    35,   643,
     644,   645,     3,     4,   648,     6,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   658,    -1,    17,    18,    19,    20,
      -1,    22,    23,   667,    -1,    26,   670,    -1,   672,    -1,
      31,    -1,    -1,    -1,    35,   679,   102,    -1,   682,    -1,
     684,    -1,   686,    -1,   688,    -1,   690,    -1,    -1,   693,
      -1,    -1,    -1,   697,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,   151,   152,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,   165,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,     3,
       4,    35,     6,     7,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,   198,    17,    18,    19,    20,    -1,    22,    23,
     206,    -1,    26,    -1,    -1,    -1,    -1,   213,    -1,    -1,
     216,    35,   218,     3,     4,    -1,     6,     7,    -1,    -1,
     226,    -1,   228,    -1,   230,    -1,   232,    17,    18,    19,
      20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,   245,
      -1,    31,    -1,    -1,     1,    35,     3,     4,     5,     6,
       7,   257,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,   285,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    35,   321,    -1,   323,   324,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,   348,    22,    23,    24,    25,    26,    -1,   355,
      29,    -1,    31,    -1,    -1,    -1,    35,     1,    -1,     3,
       4,     5,     6,     7,   370,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,   389,    -1,    29,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    21,    29,    -1,
      31,    -1,    -1,    -1,    35,    29,    30,   453,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,    -1,    -1,    -1,    -1,    -1,
       1,   487,     3,     4,     5,     6,     7,   493,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,   512,    -1,    29,    -1,
      31,    -1,    -1,    -1,    35,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,   543,   544,    26,
      -1,    -1,    29,    -1,    31,    -1,     3,     4,    35,     6,
       7,    -1,    -1,    -1,   560,    -1,   562,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,    -1,    -1,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,   588,   589,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
     606,    17,    18,    19,    20,    -1,    22,    23,    -1,   615,
      26,    27,    -1,    41,    -1,    31,   622,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   634,    57,
      58,    -1,    -1,    -1,    62,    -1,    -1,   643,   644,   645,
       3,     4,   648,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   658,    -1,    17,    18,    19,    20,    -1,    22,
      23,   667,    -1,    26,   670,    -1,   672,    -1,    31,    -1,
      -1,    -1,    35,   679,   102,    -1,   682,    -1,   684,    -1,
     686,    -1,   688,    -1,   690,    -1,    -1,   693,    -1,    -1,
      -1,   697,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,   151,   152,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,   165,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    -1,    -1,    29,    -1,    31,    -1,     3,     4,    35,
       6,     7,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,
     198,    17,    18,    19,    20,    -1,    22,    23,   206,    -1,
      26,    -1,    -1,    -1,    -1,   213,    -1,    -1,   216,    35,
     218,     3,     4,    -1,     6,     7,    -1,    -1,   226,    -1,
     228,    -1,   230,    -1,   232,    17,    18,    19,    20,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,   245,    -1,    31,
      -1,    -1,     1,    35,     3,     4,     5,     6,     7,   257,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    24,    25,    26,    -1,    -1,
      29,    -1,    31,    -1,    -1,    -1,    35,   285,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    35,   321,    -1,   323,   324,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
     348,    22,    23,    24,    25,    26,    -1,   355,    29,    -1,
      31,    -1,    -1,    -1,    35,     1,    -1,     3,     4,     5,
       6,     7,   370,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,   389,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    21,    29,    -1,    31,    -1,
      -1,    -1,    35,    29,    30,   453,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,    -1,    -1,    -1,    -1,    -1,     1,   487,
       3,     4,     5,     6,     7,   493,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,   512,    -1,    29,    -1,    31,    -1,
      -1,    -1,    35,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,   543,   544,    26,    -1,    -1,
      29,    -1,    31,    -1,     3,     4,    35,     6,     7,    -1,
      -1,    -1,   560,    -1,   562,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    -1,     3,     4,    35,     6,     7,    -1,
     588,   589,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    22,    23,    -1,    26,    26,   606,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,   615,    -1,    -1,
      -1,    41,    -1,    -1,   622,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   634,    57,    58,    -1,
      -1,    -1,    62,    -1,    -1,   643,   644,   645,     3,     4,
     648,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     658,    -1,    17,    18,    19,    20,    -1,    22,    23,   667,
      -1,    26,   670,    -1,   672,    -1,    -1,    -1,    -1,    -1,
      35,   679,   102,    -1,   682,    -1,   684,    -1,   686,    -1,
     688,    -1,   690,    -1,    -1,   693,    -1,    -1,    -1,   697,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,   151,   152,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,   165,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    -1,
      -1,    29,    -1,    31,    -1,    -1,    -1,    35,     3,     4,
      -1,     6,     7,    -1,    -1,   195,    -1,    -1,   198,    -1,
      -1,    -1,    17,    18,    19,    20,   206,    22,    23,    24,
      -1,    26,    -1,   213,    -1,    -1,   216,    -1,   218,    -1,
      35,    -1,    -1,    -1,    25,    -1,   226,    -1,   228,    30,
     230,    -1,   232,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    -1,   245,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,   257,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    24,    25,    26,    -1,    -1,    29,    -1,
      31,    -1,    -1,    -1,    35,   285,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    -1,    29,    -1,    31,    -1,    -1,    -1,
      35,   321,    -1,   323,   324,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,   348,    22,
      23,    24,    25,    26,    -1,   355,    29,    -1,    31,    -1,
      -1,    -1,    35,     1,    -1,     3,     4,     5,     6,     7,
     370,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,   389,
      -1,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    -1,    21,    29,    -1,    31,    -1,    -1,    -1,
      35,    29,    30,   453,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,    -1,    -1,    -1,    -1,    -1,     1,   487,     3,     4,
       5,     6,     7,   493,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,   512,    -1,    29,    -1,    31,    -1,     3,     4,
      35,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    22,    23,    24,
      -1,    26,    -1,   543,   544,    -1,    -1,    -1,    -1,    -1,
      35,     3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,
     560,    -1,   562,    -1,    -1,    17,    18,    19,    20,    -1,
      22,    23,    24,    -1,    26,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    35,    -1,    -1,    -1,    -1,   588,   589,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    26,
      -1,    -1,    -1,    -1,    26,    -1,   606,    -1,    35,     3,
       4,    -1,     6,     7,    -1,   615,    -1,    -1,    -1,    41,
      -1,    -1,   622,    17,    18,    19,    20,    -1,    22,    23,
      24,    -1,    26,    -1,   634,    57,    58,    -1,    -1,    -1,
      62,    35,    -1,   643,   644,   645,     3,     4,   648,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   658,    -1,
      17,    18,    19,    20,    -1,    22,    23,   667,    -1,    26,
     670,    -1,   672,    -1,    -1,    -1,    -1,    -1,    35,   679,
     102,    -1,   682,    -1,   684,    -1,   686,    -1,   688,    -1,
     690,    -1,    -1,   693,    -1,    -1,    -1,   697,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,
     152,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,   165,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    -1,    -1,    29,
      -1,    31,    -1,    -1,    -1,    35,     3,     4,    -1,     6,
       7,    -1,    -1,   195,    -1,    -1,   198,    -1,    -1,    -1,
      17,    18,    19,    20,   206,    22,    23,    24,    -1,    26,
      -1,   213,    -1,    -1,   216,    -1,   218,    -1,    35,    -1,
      -1,    -1,    25,    -1,   226,    -1,   228,    30,   230,    -1,
     232,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    -1,   245,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,   257,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    -1,    29,    -1,    31,    -1,
      -1,    -1,    35,   285,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,   321,
      -1,   323,   324,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,   348,    22,    23,    24,
      25,    26,    -1,   355,    29,    -1,    31,    -1,    -1,    -1,
      35,     1,    -1,     3,     4,     5,     6,     7,   370,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,   389,    -1,    29,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
      -1,    21,    29,    -1,    31,    -1,    -1,    -1,    35,    29,
      30,   453,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,    -1,
      -1,    -1,    -1,    -1,     1,   487,     3,     4,     5,     6,
       7,   493,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    25,    26,
     512,    -1,    29,    -1,    31,    -1,     3,     4,    35,     6,
       7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    26,
      -1,   543,   544,    -1,    -1,    -1,    -1,    -1,    35,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,   560,    -1,
     562,    -1,    -1,    17,    18,    19,    20,    -1,    22,    23,
      24,    -1,    26,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    35,    -1,    -1,    -1,    -1,   588,   589,    17,    18,
      19,    20,    -1,    22,    23,     3,     4,    26,     6,     7,
      -1,    -1,    26,    -1,   606,    -1,    35,    -1,    -1,    17,
      18,    19,    20,   615,    22,    23,    -1,    41,    26,    -1,
     622,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,   634,    57,    58,    -1,    -1,    -1,    62,    21,
      -1,   643,   644,   645,    26,    27,   648,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,   658,    39,    40,    41,
      42,    43,    44,    -1,    -1,   667,    -1,    -1,   670,    -1,
     672,    -1,    -1,    -1,    -1,    -1,    -1,   679,   102,    -1,
     682,    -1,   684,    -1,   686,    -1,   688,    -1,   690,    -1,
      -1,   693,    -1,    -1,    -1,   697,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,   165,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    -1,    -1,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   228,    -1,   230,    -1,   232,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,   245,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,   258,    22,    23,    24,    25,    26,
      -1,    -1,    29,    -1,    31,    -1,    -1,    -1,    35,     1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      12,   285,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    21,    26,    -1,    -1,    29,    -1,    31,
      -1,    29,    30,    35,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   321,    25,   323,
     324,    -1,    -1,    30,    -1,    -1,    26,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    41,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,     1,   370,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,   389,    22,    23,    24,    -1,
      26,    -1,    -1,    29,    21,    31,    -1,    -1,    -1,    35,
      27,    -1,   102,    30,    -1,    32,    33,    34,    35,    36,
      37,   415,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,   136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,   453,
      -1,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,    -1,    -1,    -1,
      -1,    -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,   493,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,   512,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   216,    -1,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,
     230,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,   543,
     544,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,   560,   257,   562,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,   588,   589,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   615,   616,    -1,    -1,    -1,    -1,    -1,   622,    -1,
      26,   321,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,
     634,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,   643,
     644,   645,    -1,    -1,   648,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,   658,   355,    62,    -1,    -1,    -1,
      -1,    -1,    -1,   667,    -1,    -1,   670,    -1,   672,    -1,
     370,    -1,    -1,    -1,    -1,   679,    -1,    -1,   682,    -1,
     684,    -1,   686,    -1,   688,    -1,   690,    -1,    21,   693,
      -1,    -1,    -1,   697,    27,    -1,   102,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,   413,   414,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    21,
      -1,    -1,    -1,    -1,    -1,   151,   152,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,    -1,
     480,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,   195,
      -1,    -1,   198,   493,    -1,    -1,    -1,    -1,    -1,    -1,
     206,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
     216,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,    -1,   228,    -1,   230,    -1,   232,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,   245,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    -1,
     560,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,   588,   589,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   606,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,   321,    26,    -1,    34,    35,
      36,    37,   622,    39,    40,    41,    42,    43,    44,    -1,
      -1,    41,    -1,    -1,   634,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,   645,    -1,    -1,   648,   355,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,   658,    -1,
      -1,    -1,    -1,    -1,   370,    -1,    -1,   667,    -1,    -1,
     670,    -1,   672,    -1,    -1,    -1,    -1,    -1,    -1,   679,
      -1,    -1,   682,    -1,   684,    -1,   686,    -1,   688,    -1,
     690,    -1,   102,   693,    -1,    -1,    -1,   697,    -1,    -1,
      -1,    -1,    -1,   409,   410,   411,   412,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    21,    -1,    -1,    -1,    -1,
      -1,   151,   152,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      -1,   487,    -1,    -1,    -1,   195,    -1,   493,   198,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,   216,    -1,   218,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,   228,    -1,
     230,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    26,    -1,    25,    26,   245,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    41,    39,    40,    41,
      42,    43,    44,    -1,   560,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    62,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    27,   588,   589,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    -1,
     606,    -1,    -1,    25,    99,    -1,    -1,   102,    30,    -1,
      -1,   321,    34,    35,    36,    37,   622,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,   122,   634,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,   645,
      -1,   136,   648,    -1,    -1,   355,    -1,    -1,    -1,   144,
      -1,    -1,   658,    -1,    -1,    -1,   151,   152,    -1,    -1,
     370,   667,    -1,    -1,   670,    -1,   672,    -1,    -1,    -1,
      -1,    -1,    -1,   679,    -1,    -1,   682,    -1,   684,    -1,
     686,    -1,   688,    -1,   690,    -1,    -1,   693,    -1,    -1,
      -1,   697,    -1,   403,   404,   405,   406,   407,   408,   194,
     195,    -1,    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    26,    -1,    -1,    -1,    -1,   213,    -1,
      -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    41,    25,
      -1,   226,    -1,   228,    30,   230,    -1,   232,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    62,
     245,    -1,    -1,    -1,    -1,    -1,    -1,   467,   468,   469,
     470,   471,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     480,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    21,
      -1,    -1,    -1,   493,    -1,    -1,    -1,    29,    30,   102,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    27,    -1,    -1,    30,    -1,   122,
      -1,    34,    35,    36,    37,   310,    39,    40,    41,    42,
      43,    44,    -1,   136,    -1,    -1,   321,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
     560,    29,    30,   348,    32,    33,    34,    35,    36,    37,
     355,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   370,   371,    -1,   588,   589,
      -1,    -1,   195,    -1,    -1,   198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,   606,    -1,    -1,    -1,
     213,    -1,    -1,   216,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,   622,   226,    -1,   228,    -1,   230,    -1,   232,
      -1,   416,   417,    -1,   634,    -1,    -1,    -1,    -1,    -1,
      -1,    21,   245,    -1,    -1,   645,    -1,    27,   648,   434,
      30,    -1,    32,    33,    34,    35,    36,    37,   658,    39,
      40,    41,    42,    43,    44,    -1,    -1,   667,    -1,    -1,
     670,    -1,   672,    -1,    -1,    -1,    -1,    -1,    -1,   679,
      -1,    -1,   682,    -1,   684,    -1,   686,    -1,   688,    -1,
     690,    -1,    -1,   693,    -1,   480,    -1,   697,    -1,    -1,
      -1,    21,   487,    -1,    -1,    -1,    -1,    -1,   493,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,   321,    39,
      40,    41,    42,    43,    44,    41,    -1,    -1,   513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    21,    -1,    -1,   348,    -1,    -1,    -1,    -1,
      29,    30,   355,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,   370,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   560,    -1,    -1,   563,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,    -1,
      -1,   107,   108,   109,   110,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,   588,   589,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,   151,   152,   622,    27,    -1,
     156,    30,    -1,    32,    33,    34,    35,    36,    37,   634,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
     645,    -1,    -1,   648,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   658,    -1,    -1,    -1,   480,    -1,   195,
     196,   197,   667,    -1,   487,   670,    -1,   672,    -1,    -1,
     493,    -1,    -1,    -1,   679,    -1,    -1,   682,    -1,   684,
      -1,   686,    21,   688,    -1,   690,    -1,    -1,   693,    -1,
      29,    30,   697,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
     256,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    25,    -1,   560,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,   284,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,   294,    21,
      -1,    -1,    -1,    -1,    -1,   588,   589,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,   606,    -1,    -1,   322,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,   622,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,   634,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   645,    -1,    -1,   648,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   658,   372,   373,   374,   375,
      -1,    -1,    -1,    -1,   667,    -1,    -1,   670,    -1,   672,
      -1,    -1,   388,    -1,    -1,    -1,   679,    -1,    -1,   682,
      -1,   684,    -1,   686,   400,   688,    -1,   690,    -1,    -1,
     693,    -1,    -1,    -1,   697,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   418,   419,   420,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,
     436,   437,   438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,   464,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
     486,   487,   488,   489,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,   514,   515,
     516,   517,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    21,    -1,   564,   565,
     566,   567,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      21,    -1,   588,   589,    -1,    -1,    27,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,   645,
     646,   647,   648,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,   670,    -1,   672,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
     686,    -1,   688,    27,   690,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      21,    39,    40,    41,    42,    43,    44,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    21,    39,    40,
      41,    42,    43,    44,    -1,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    21,    39,    40,    41,    42,    43,
      44,    -1,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    21,    39,    40,    41,    42,    43,    44,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    21,    39,
      40,    41,    42,    43,    44,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    21,    39,    40,    41,    42,
      43,    44,    -1,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    21,    39,    40,    41,    42,    43,    44,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    21,
      39,    40,    41,    42,    43,    44,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    21,    39,    40,    41,
      42,    43,    44,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    21,    39,    40,    41,    42,    43,    44,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      21,    39,    40,    41,    42,    43,    44,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    21,    39,    40,
      41,    42,    43,    44,    -1,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    21,    39,    40,    41,    42,    43,
      44,    -1,    29,    30,    -1,    32,    33,    34,    35,    36,
      37,    21,    39,    40,    41,    42,    43,    44,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    21,    39,
      40,    41,    42,    43,    44,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    21,    39,    40,    41,    42,
      43,    44,    -1,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    21,    39,    40,    41,    42,    43,    44,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    21,
      39,    40,    41,    42,    43,    44,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      21,    39,    40,    41,    42,    43,    44,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    21,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    21,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    21,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    21,    39,    40,    41,    42,    43,    44,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      21,    39,    40,    41,    42,    43,    44,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    21,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    42,    43,    44,    21,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,
      33,    34,    35,    36,    37,    21,    39,    40,    41,    42,
      43,    44,    -1,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    21,    39,    40,    41,    42,    43,    44,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    21,
      39,    40,    41,    42,    43,    44,    -1,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    21,    39,    40,    41,
      42,    43,    44,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    21,    39,    40,    41,    42,    43,    44,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    21,    39,    40,    41,    42,    43,    44,    -1,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      35,    36,    37,    21,    39,    40,    41,    42,    43,    44,
      -1,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    21,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    27,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    27,
      -1,    -1,    30,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    27,    -1,    -1,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    27,    -1,    -1,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    27,    -1,    -1,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    27,    -1,    -1,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    29,    30,    -1,    32,    33,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    29,    30,    -1,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    29,    30,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    39,    40,    41,    42,    43,    44,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    -1,    39,    40,    41,    42,    43,
      44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     5,    47,    48,    49,    50,    52,    53,    53,
       0,    49,     3,     8,    26,    29,    54,    55,    56,    55,
      29,    30,    51,    26,    27,    55,    24,    65,     1,     3,
       5,    27,    57,    58,    59,    60,     1,     3,     4,     6,
       7,     9,    10,    11,    12,    14,    15,    16,    17,    18,
      19,    20,    22,    23,    25,    26,    29,    31,    35,    52,
      53,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    89,    90,    91,    94,    27,    60,    27,
      30,    27,    30,     3,    26,    61,    62,    63,    64,    26,
      80,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,     5,    80,    87,    88,    85,    89,    86,    55,    25,
      67,    29,    30,    39,    40,    41,    42,    43,    44,    34,
      35,    36,    37,    32,    33,    21,    38,     3,    59,    27,
      61,    63,    26,    26,    24,    27,    81,    92,    93,    29,
      80,    52,    69,    80,    80,     3,    26,    94,    94,    80,
      80,    80,    80,    88,    27,    27,    26,    55,    63,    81,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    81,    27,    27,     1,    27,    57,    58,
      27,    58,    92,    27,    30,    27,    69,    69,    27,    27,
      27,    27,    27,    27,    27,    27,    24,    86,    27,    27,
      27,    27,    25,    30,    93,    68,    27,    80,    27,    80,
      68,    29,    29,    29,    92,    25,    13,    68,    27,    68,
      27,    25,    30,    68,    68,    68,    25,     3,     8,    26,
      56,     3,     8,    26,    56,    24,     3,     4,     6,     7,
      17,    18,    19,    20,    22,    23,    26,    31,    35,    75,
      76,    77,    78,    79,    81,    82,    83,    84,    85,    86,
      89,    90,    91,    94,     3,     4,     6,     7,    17,    18,
      19,    20,    22,    23,    26,    35,    75,    76,    77,    78,
      79,    90,    91,    94,    26,    89,    29,    54,     3,    26,
      62,    64,    29,    53,    80,     4,     6,     7,    22,    23,
      30,     3,     4,     6,     7,    17,    18,    19,    20,    22,
      23,    24,    26,    31,    35,    75,    76,    77,    78,    79,
      81,    82,    83,    84,    85,    86,    89,    90,    91,    93,
      94,    29,    80,    80,    27,    55,    63,     1,     9,    10,
      11,    12,    14,    15,    16,    24,    29,    65,    69,    70,
      71,    72,    73,    74,    80,    93,    26,    55,    26,    25,
      66,    26,    26,    26,    26,    26,    80,    87,     3,     4,
       6,     7,    17,    18,    19,    20,    22,    23,    26,    35,
      75,    76,    77,    78,    79,    85,    89,    90,    91,    94,
      26,    86,    89,    39,    40,    41,    42,    43,    44,    34,
      35,    36,    37,    32,    33,    21,    38,    26,    26,    26,
      26,    26,    80,    87,    86,    87,    29,    61,    26,    26,
      29,    54,    29,    81,    26,    26,    26,    26,    26,    92,
      80,    87,     3,     4,     6,     7,    17,    18,    19,    20,
      22,    23,    26,    35,    75,    76,    77,    78,    79,    85,
      89,    90,    91,    94,    26,    86,    89,    39,    40,    41,
      42,    43,    44,    34,    35,    36,    37,    32,    33,    21,
      38,    29,    27,    27,    27,    80,    26,    26,    26,    26,
      26,    26,    25,    66,    29,     1,    27,    57,    58,    27,
       1,    27,    57,    58,    25,    27,    92,    80,    80,    80,
      80,    27,    27,    26,    26,    26,    26,    26,    80,    87,
      86,    87,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    81,    27,    92,    80,    80,
      80,    80,    27,    27,    27,    27,     1,    27,    57,    58,
      27,    58,    29,    27,    92,    80,    80,    80,    80,    25,
      30,    27,    27,    26,    26,    26,    26,    26,    80,    87,
      86,    87,    83,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    81,    29,    80,    52,    69,
      80,    80,    94,    94,    25,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    24,    86,    27,    92,
      80,    80,    80,    80,    27,    27,    27,    27,    27,    27,
      27,    27,    24,    86,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    25,    24,    86,    27,    92,    80,    80,
      80,    80,    27,    27,    27,    27,    69,    69,    27,    27,
      27,    27,    92,    27,    27,    27,    27,    27,    24,    86,
      92,    92,    27,    27,    27,    27,    27,    24,    86,    68,
      27,    80,    27,    80,    68,    29,    29,    29,    25,    30,
      92,    25,    30,    25,    30,    92,    13,    68,    27,    68,
      27,    25,    25,    30,    25,    25,    25,    30,    68,    68,
      68,    25,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    49,    51,    50,
      52,    52,    53,    53,    54,    54,    55,    56,    56,    56,
      56,    56,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    71,    72,    73,    73,
      74,    75,    75,    75,    75,    76,    77,    78,    79,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    87,    88,    88,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    92,    92,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    94
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     0,     4,
       2,     3,     1,     2,     1,     3,     1,     1,     1,     3,
       3,     4,     4,     4,     1,     3,     1,     3,     2,     2,
       1,     2,     1,     1,     3,     3,     4,     4,     4,     1,
       3,     2,     3,     4,     2,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       5,     7,     7,     6,     7,     6,     5,     5,     5,     5,
       3,     1,     1,     1,     1,     4,     4,     4,     4,     3,
       1,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     2,     3,     3,     1,
       3,     1,     4,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     4,     3,     1,     6,     7,     1,     3,     1,
       3,     4,     1,     1,     1,     1,     1,     1,     3
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
#line 60 "yacc_lexer/mafralang_grammar.y"
                   { 
    parserTree = (yyvsp[0].stmt);
    checkSemanticErrorMain();
  }
#line 3908 "mafralang_grammar.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 68 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(TRANSLATION_UNIT, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3916 "mafralang_grammar.tab.c"
    break;

  case 5: /* translation_unit: error  */
#line 71 "yacc_lexer/mafralang_grammar.y"
        {
    yyerrok;
  }
#line 3924 "mafralang_grammar.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 82 "yacc_lexer/mafralang_grammar.y"
                                    {
    pushStack();
  }
#line 3932 "mafralang_grammar.tab.c"
    break;

  case 9: /* function_definition: declaration_specifiers declarator $@1 compound_statement  */
#line 85 "yacc_lexer/mafralang_grammar.y"
                     {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[0].stmt), NULL, NULL);
    popStack();
  }
#line 3942 "mafralang_grammar.tab.c"
    break;

  case 10: /* declaration: declaration_specifiers SEMICOLON  */
#line 95 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3950 "mafralang_grammar.tab.c"
    break;

  case 11: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 98 "yacc_lexer/mafralang_grammar.y"
                                                        {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3958 "mafralang_grammar.tab.c"
    break;

  case 12: /* declaration_specifiers: TYPE  */
#line 104 "yacc_lexer/mafralang_grammar.y"
       {
    insertType((yyvsp[0].strType));
    insertScopeType((yyvsp[0].strType));
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, NULL, (yyvsp[0].strType), NULL);
  }
#line 3968 "mafralang_grammar.tab.c"
    break;

  case 13: /* declaration_specifiers: TYPE declaration_specifiers  */
#line 109 "yacc_lexer/mafralang_grammar.y"
                              {
    insertType((yyvsp[-1].strType));
    insertScopeType((yyvsp[-1].strType));
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 3978 "mafralang_grammar.tab.c"
    break;

  case 15: /* init_declarator_list: init_declarator_list COMMA declarator  */
#line 118 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(INIT_DECLARATOR_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3986 "mafralang_grammar.tab.c"
    break;

  case 17: /* direct_declarator: ID  */
#line 128 "yacc_lexer/mafralang_grammar.y"
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
#line 4001 "mafralang_grammar.tab.c"
    break;

  case 18: /* direct_declarator: MAIN  */
#line 138 "yacc_lexer/mafralang_grammar.y"
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
#line 4016 "mafralang_grammar.tab.c"
    break;

  case 19: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 148 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4024 "mafralang_grammar.tab.c"
    break;

  case 21: /* direct_declarator: direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 152 "yacc_lexer/mafralang_grammar.y"
                                                                      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4032 "mafralang_grammar.tab.c"
    break;

  case 22: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 155 "yacc_lexer/mafralang_grammar.y"
                                                                       {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4040 "mafralang_grammar.tab.c"
    break;

  case 23: /* direct_declarator: direct_declarator LEFT_PARENTHESES error RIGHT_PARENTHESES  */
#line 158 "yacc_lexer/mafralang_grammar.y"
                                                             {
    yyerrok;
  }
#line 4048 "mafralang_grammar.tab.c"
    break;

  case 24: /* identifier_list: ID  */
#line 164 "yacc_lexer/mafralang_grammar.y"
      {
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(IDENTIFIER_LIST, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4061 "mafralang_grammar.tab.c"
    break;

  case 25: /* identifier_list: identifier_list COMMA ID  */
#line 172 "yacc_lexer/mafralang_grammar.y"
                           {
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(IDENTIFIER_LIST, (yyvsp[-2].stmt), NULL, type, (yyvsp[0].strType));
  }
#line 4074 "mafralang_grammar.tab.c"
    break;

  case 27: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 185 "yacc_lexer/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4082 "mafralang_grammar.tab.c"
    break;

  case 28: /* parameter_declaration: type_specifiers parameter_declarator  */
#line 191 "yacc_lexer/mafralang_grammar.y"
                                       {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4090 "mafralang_grammar.tab.c"
    break;

  case 29: /* parameter_declaration: type_specifiers abstract_declarator  */
#line 194 "yacc_lexer/mafralang_grammar.y"
                                      {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4098 "mafralang_grammar.tab.c"
    break;

  case 30: /* type_specifiers: TYPE  */
#line 200 "yacc_lexer/mafralang_grammar.y"
       {
    insertType((yyvsp[0].strType));
    (yyval.stmt) = addNode(TYPE_SPECIFIERS, NULL, NULL, (yyvsp[0].strType), NULL);
  }
#line 4107 "mafralang_grammar.tab.c"
    break;

  case 31: /* type_specifiers: TYPE type_specifiers  */
#line 204 "yacc_lexer/mafralang_grammar.y"
                       {
    insertType((yyvsp[-1].strType));
    (yyval.stmt) = addNode(TYPE_SPECIFIERS, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4116 "mafralang_grammar.tab.c"
    break;

  case 33: /* direct_parameter_declarator: ID  */
#line 215 "yacc_lexer/mafralang_grammar.y"
      {
    insertSymbol((yyvsp[0].strType));
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
        type = s->type;
    }
    (yyval.stmt) = addNode(DIRECT_PARAMETER_DECLARATOR, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4130 "mafralang_grammar.tab.c"
    break;

  case 34: /* direct_parameter_declarator: LEFT_PARENTHESES parameter_declarator RIGHT_PARENTHESES  */
#line 224 "yacc_lexer/mafralang_grammar.y"
                                                          {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4138 "mafralang_grammar.tab.c"
    break;

  case 36: /* direct_parameter_declarator: direct_parameter_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 228 "yacc_lexer/mafralang_grammar.y"
                                                                                {
    (yyval.stmt) = addNode(DIRECT_PARAMETER_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4146 "mafralang_grammar.tab.c"
    break;

  case 37: /* direct_parameter_declarator: direct_parameter_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 231 "yacc_lexer/mafralang_grammar.y"
                                                                                 {
    (yyval.stmt) = addNode(DIRECT_PARAMETER_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4154 "mafralang_grammar.tab.c"
    break;

  case 38: /* direct_parameter_declarator: direct_parameter_declarator LEFT_PARENTHESES error RIGHT_PARENTHESES  */
#line 234 "yacc_lexer/mafralang_grammar.y"
                                                                       {
    yyerrok;
  }
#line 4162 "mafralang_grammar.tab.c"
    break;

  case 39: /* abstract_declarator: direct_abstract_declarator  */
#line 240 "yacc_lexer/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(ABSTRACT_DECLARATOR, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4170 "mafralang_grammar.tab.c"
    break;

  case 40: /* direct_abstract_declarator: LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES  */
#line 246 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4178 "mafralang_grammar.tab.c"
    break;

  case 41: /* direct_abstract_declarator: LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 249 "yacc_lexer/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, NULL, NULL, NULL, NULL);
  }
#line 4186 "mafralang_grammar.tab.c"
    break;

  case 42: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 252 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4194 "mafralang_grammar.tab.c"
    break;

  case 43: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 255 "yacc_lexer/mafralang_grammar.y"
                                                                               {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4202 "mafralang_grammar.tab.c"
    break;

  case 44: /* compound_statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 261 "yacc_lexer/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL);
  }
#line 4210 "mafralang_grammar.tab.c"
    break;

  case 45: /* compound_statement: LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET  */
#line 264 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4218 "mafralang_grammar.tab.c"
    break;

  case 47: /* block_item_list: block_item_list block_item  */
#line 271 "yacc_lexer/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(BLOCK_ITEM_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4226 "mafralang_grammar.tab.c"
    break;

  case 48: /* block_item: declaration  */
#line 277 "yacc_lexer/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4234 "mafralang_grammar.tab.c"
    break;

  case 49: /* block_item: statement  */
#line 280 "yacc_lexer/mafralang_grammar.y"
            {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4242 "mafralang_grammar.tab.c"
    break;

  case 50: /* statement: expression_statement  */
#line 286 "yacc_lexer/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4250 "mafralang_grammar.tab.c"
    break;

  case 51: /* statement: compound_statement  */
#line 289 "yacc_lexer/mafralang_grammar.y"
                     {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4258 "mafralang_grammar.tab.c"
    break;

  case 52: /* statement: conditional_statement  */
#line 292 "yacc_lexer/mafralang_grammar.y"
                        {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4266 "mafralang_grammar.tab.c"
    break;

  case 53: /* statement: iteration_statement  */
#line 295 "yacc_lexer/mafralang_grammar.y"
                      {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4274 "mafralang_grammar.tab.c"
    break;

  case 54: /* statement: input_statement  */
#line 298 "yacc_lexer/mafralang_grammar.y"
                  {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4282 "mafralang_grammar.tab.c"
    break;

  case 55: /* statement: output_statement  */
#line 301 "yacc_lexer/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4290 "mafralang_grammar.tab.c"
    break;

  case 56: /* statement: return_statement  */
#line 304 "yacc_lexer/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4298 "mafralang_grammar.tab.c"
    break;

  case 57: /* statement: error  */
#line 307 "yacc_lexer/mafralang_grammar.y"
        { 
    yyerrok;
  }
#line 4306 "mafralang_grammar.tab.c"
    break;

  case 58: /* expression_statement: SEMICOLON  */
#line 313 "yacc_lexer/mafralang_grammar.y"
            {
    (yyval.stmt) = NULL;
  }
#line 4314 "mafralang_grammar.tab.c"
    break;

  case 59: /* expression_statement: expression SEMICOLON  */
#line 316 "yacc_lexer/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4322 "mafralang_grammar.tab.c"
    break;

  case 60: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 322 "yacc_lexer/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4330 "mafralang_grammar.tab.c"
    break;

  case 61: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement  */
#line 325 "yacc_lexer/mafralang_grammar.y"
                                                                             {
    ast_node* ast_node1 = addNode(CONDITIONAL_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-2].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(CONDITIONAL_STATEMENT, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, ast_node1, ast_node2, (yyvsp[-6].strType), NULL);
  }
#line 4340 "mafralang_grammar.tab.c"
    break;

  case 62: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement  */
#line 333 "yacc_lexer/mafralang_grammar.y"
                                                                                                        {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4350 "mafralang_grammar.tab.c"
    break;

  case 63: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement  */
#line 338 "yacc_lexer/mafralang_grammar.y"
                                                                                             {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4359 "mafralang_grammar.tab.c"
    break;

  case 64: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement  */
#line 342 "yacc_lexer/mafralang_grammar.y"
                                                                                               {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4369 "mafralang_grammar.tab.c"
    break;

  case 65: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement  */
#line 347 "yacc_lexer/mafralang_grammar.y"
                                                                                    {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4378 "mafralang_grammar.tab.c"
    break;

  case 66: /* iteration_statement: FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 351 "yacc_lexer/mafralang_grammar.y"
                                                                 {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4386 "mafralang_grammar.tab.c"
    break;

  case 67: /* input_statement: READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 357 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4394 "mafralang_grammar.tab.c"
    break;

  case 68: /* output_statement: WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 363 "yacc_lexer/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4402 "mafralang_grammar.tab.c"
    break;

  case 69: /* output_statement: WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 366 "yacc_lexer/mafralang_grammar.y"
                                                                          {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4410 "mafralang_grammar.tab.c"
    break;

  case 70: /* return_statement: RETURN expression SEMICOLON  */
#line 372 "yacc_lexer/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-1].stmt), NULL, (yyvsp[-2].strType), NULL);
  }
#line 4418 "mafralang_grammar.tab.c"
    break;

  case 71: /* set_expression_list: is_set_expression  */
#line 378 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4426 "mafralang_grammar.tab.c"
    break;

  case 72: /* set_expression_list: add_expression  */
#line 381 "yacc_lexer/mafralang_grammar.y"
                 {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4434 "mafralang_grammar.tab.c"
    break;

  case 73: /* set_expression_list: remove_expression  */
#line 384 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4442 "mafralang_grammar.tab.c"
    break;

  case 74: /* set_expression_list: exists_expression  */
#line 387 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4450 "mafralang_grammar.tab.c"
    break;

  case 75: /* is_set_expression: IS_SET LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 393 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(IS_SET_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4458 "mafralang_grammar.tab.c"
    break;

  case 76: /* add_expression: ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 399 "yacc_lexer/mafralang_grammar.y"
                                                    {
    (yyval.stmt) = addNode(ADD_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4466 "mafralang_grammar.tab.c"
    break;

  case 77: /* remove_expression: REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 405 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(REMOVE_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4474 "mafralang_grammar.tab.c"
    break;

  case 78: /* exists_expression: EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 411 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(EXISTS_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4482 "mafralang_grammar.tab.c"
    break;

  case 81: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 422 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(ASSIGNMENT_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4490 "mafralang_grammar.tab.c"
    break;

  case 84: /* relational_expression: relational_expression CLT arithmetic_expression  */
#line 431 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4498 "mafralang_grammar.tab.c"
    break;

  case 85: /* relational_expression: relational_expression CLE arithmetic_expression  */
#line 434 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4506 "mafralang_grammar.tab.c"
    break;

  case 86: /* relational_expression: relational_expression CEQ arithmetic_expression  */
#line 437 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4514 "mafralang_grammar.tab.c"
    break;

  case 87: /* relational_expression: relational_expression CGE arithmetic_expression  */
#line 440 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4522 "mafralang_grammar.tab.c"
    break;

  case 88: /* relational_expression: relational_expression CGT arithmetic_expression  */
#line 443 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4530 "mafralang_grammar.tab.c"
    break;

  case 89: /* relational_expression: relational_expression CNE arithmetic_expression  */
#line 446 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4538 "mafralang_grammar.tab.c"
    break;

  case 91: /* arithmetic_expression: arithmetic_expression ADD_OP logical_expression  */
#line 453 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4546 "mafralang_grammar.tab.c"
    break;

  case 92: /* arithmetic_expression: arithmetic_expression SUB_OP logical_expression  */
#line 456 "yacc_lexer/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4554 "mafralang_grammar.tab.c"
    break;

  case 93: /* arithmetic_expression: arithmetic_expression MULT logical_expression  */
#line 459 "yacc_lexer/mafralang_grammar.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4562 "mafralang_grammar.tab.c"
    break;

  case 94: /* arithmetic_expression: arithmetic_expression DIVIDE logical_expression  */
#line 462 "yacc_lexer/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4570 "mafralang_grammar.tab.c"
    break;

  case 96: /* logical_expression: NEGATE set_expression  */
#line 469 "yacc_lexer/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[0].stmt), NULL, (yyvsp[-1].symbol), NULL);
  }
#line 4578 "mafralang_grammar.tab.c"
    break;

  case 97: /* logical_expression: logical_expression AND set_expression  */
#line 472 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4586 "mafralang_grammar.tab.c"
    break;

  case 98: /* logical_expression: logical_expression OR set_expression  */
#line 475 "yacc_lexer/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4594 "mafralang_grammar.tab.c"
    break;

  case 100: /* set_expression: set_expression IN cast_expression  */
#line 482 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4602 "mafralang_grammar.tab.c"
    break;

  case 102: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 489 "yacc_lexer/mafralang_grammar.y"
                                                               {
    (yyval.stmt) = addNode(CAST_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4610 "mafralang_grammar.tab.c"
    break;

  case 103: /* type_name: specifier_qualifier_list  */
#line 495 "yacc_lexer/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4618 "mafralang_grammar.tab.c"
    break;

  case 104: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 498 "yacc_lexer/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4626 "mafralang_grammar.tab.c"
    break;

  case 105: /* type_name: specifier_qualifier_list declarator  */
#line 501 "yacc_lexer/mafralang_grammar.y"
                                      {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4634 "mafralang_grammar.tab.c"
    break;

  case 106: /* specifier_qualifier_list: TYPE specifier_qualifier_list  */
#line 507 "yacc_lexer/mafralang_grammar.y"
                                {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, (yyvsp[0].stmt), NULL, (yyvsp[-1].strType), NULL);
    insertType((yyvsp[-1].strType));
    insertScopeType((yyvsp[-1].strType));
  }
#line 4644 "mafralang_grammar.tab.c"
    break;

  case 107: /* specifier_qualifier_list: TYPE  */
#line 512 "yacc_lexer/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, NULL, NULL, (yyvsp[0].strType), NULL);
    insertType((yyvsp[0].strType));
    insertScopeType((yyvsp[0].strType));
  }
#line 4654 "mafralang_grammar.tab.c"
    break;

  case 111: /* unary_expression: SUB_OP cast_expression  */
#line 523 "yacc_lexer/mafralang_grammar.y"
                         {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].symbol));
  }
#line 4662 "mafralang_grammar.tab.c"
    break;

  case 112: /* function_expression: ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES  */
#line 529 "yacc_lexer/mafralang_grammar.y"
                                                         {
    symbol_node* s = findSymbol((yyvsp[-3].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, (yyvsp[-1].stmt), NULL, type, (yyvsp[-3].strType));
  }
#line 4675 "mafralang_grammar.tab.c"
    break;

  case 113: /* function_expression: ID LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 537 "yacc_lexer/mafralang_grammar.y"
                                        {
    symbol_node* s = findSymbol((yyvsp[-2].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, NULL, NULL, type, (yyvsp[-2].strType));
  }
#line 4688 "mafralang_grammar.tab.c"
    break;

  case 115: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 549 "yacc_lexer/mafralang_grammar.y"
                                                                                                       {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-4].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4696 "mafralang_grammar.tab.c"
    break;

  case 116: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 552 "yacc_lexer/mafralang_grammar.y"
                                                                                                             {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-5].stmt), (yyvsp[-2].stmt), NULL, NULL);
  }
#line 4704 "mafralang_grammar.tab.c"
    break;

  case 118: /* initializer_list: initializer_list COMMA initializer  */
#line 559 "yacc_lexer/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(INITIALIZER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4712 "mafralang_grammar.tab.c"
    break;

  case 120: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 566 "yacc_lexer/mafralang_grammar.y"
                                                          {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4720 "mafralang_grammar.tab.c"
    break;

  case 121: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 569 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4728 "mafralang_grammar.tab.c"
    break;

  case 122: /* primary_expression: ID  */
#line 575 "yacc_lexer/mafralang_grammar.y"
     {
    symbol_node* s = findSymbol((yyvsp[0].strType));
    char* type = NULL;
    if(s != NULL){
      type = s->type;
    }
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, type, (yyvsp[0].strType));
  }
#line 4741 "mafralang_grammar.tab.c"
    break;

  case 123: /* primary_expression: INTEGER  */
#line 583 "yacc_lexer/mafralang_grammar.y"
          {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4749 "mafralang_grammar.tab.c"
    break;

  case 124: /* primary_expression: FLOAT  */
#line 586 "yacc_lexer/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4757 "mafralang_grammar.tab.c"
    break;

  case 125: /* primary_expression: STRING  */
#line 589 "yacc_lexer/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4765 "mafralang_grammar.tab.c"
    break;

  case 126: /* primary_expression: CHAR  */
#line 592 "yacc_lexer/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4773 "mafralang_grammar.tab.c"
    break;

  case 127: /* primary_expression: EMPTY  */
#line 595 "yacc_lexer/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4781 "mafralang_grammar.tab.c"
    break;

  case 128: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 598 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4789 "mafralang_grammar.tab.c"
    break;


#line 4793 "mafralang_grammar.tab.c"

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

#line 603 "yacc_lexer/mafralang_grammar.y"


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
    printTree(syntax_error, lex_error, semantic_error, parserTree);
    createFileTAC(parserTree);
    freeTree(parserTree);
  }
  yylex_destroy();
  freeSymbolTable();
  return 0;
}
