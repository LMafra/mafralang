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
#define YYLAST   10427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  687

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
     143,   147,   152,   157,   160,   161,   164,   167,   173,   177,
     185,   186,   192,   195,   201,   207,   210,   213,   216,   222,
     225,   231,   232,   238,   241,   247,   250,   253,   256,   259,
     262,   265,   268,   274,   277,   283,   286,   294,   299,   303,
     308,   312,   318,   324,   327,   333,   339,   342,   345,   348,
     354,   360,   366,   372,   378,   379,   383,   386,   391,   392,
     395,   398,   401,   404,   407,   413,   414,   417,   420,   423,
     429,   430,   433,   436,   442,   443,   449,   450,   456,   459,
     462,   468,   473,   481,   482,   483,   484,   490,   496,   497,
     500,   506,   507,   513,   514,   517,   523,   526,   529,   532,
     535,   538
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

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-122)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     190,    80,    61,    26,    83,   157,   202,   220,    47,   106,
    -230,   352,   209,   242,    20,   353,   -10,   257,   283,    36,
     378,   150,    46,    51,   124,   319,     9,     6,    42,   108,
    2480,   388,    56,    34,   331,   236,   111,   227,   247,   105,
     398,   194,  2512,   950,  1393,  1961,  2023,  4564,    65,    96,
     126,   138,   148,   164,   176,   178,   185,  2086,   215,   409,
    1156,  2555,  4870,  5097,  2592,  2647,  2714,  2750,  2790,  2959,
    3048,  3080,  3123,  3160,  3215,  2654,  3222,  3790,  4358,  4926,
     287,   414,   886,  5525, 10224,  8104,  8121,  5288,  5312,  5336,
    5367,   356,   266,   303,   555,   276,   440,   162,   504,   245,
    1724,   601,  4648,   224,  4648,  4648,   293,   293,   261,  4648,
    4648,  4648,   210,   562,   240,   301,  8138,  8155,  5431,   419,
    3282,  3318,  4564,  4668,  4668,  4668,  4668,  4668,  4668,  4668,
    4668,  4668,  4668,  4870,  4870,  4870,  4564,   366,   249,     5,
     564,   585,  2292,   596,   649,   665,  3358,   676,  2446,  2446,
     817,   822,   263,  4648,   272,   291,   299,  1017,  1019,  1108,
     415,  5462,   819,   305,   317,   648, 10304, 10320, 10336, 10352,
   10368, 10384, 10240, 10256, 10272, 10288,  8172,  8189,  8206,   654,
     396,   602,  1109,   427,  5607,  1724,   700,  2825,  2860,  4494,
     255,   259,   323,  5631,  5796,  5879,  5905,  2292,  8223,   620,
    1114,   175,  1118,   790,  4494,  1120,  4494,  1125,  3527,  3616,
    3648,  3691,   464,  1126,  4494,  3728,  4494,  3783,  4494,  5934,
     316,  3850,  3886,  3926,  6194,   745,   809,    20,   983,   450,
     524,    20,   580,   252,   115,  1008,  4095,   114,   630,   659,
     664,  1455,  6084,  6220,  6487,   320,   330,   337,  6514,   355,
    1156,  5132,  5216,  6629,  6654,  6728,  6956,  7019,  1150,   577,
    1089, 10046,  6759,  8247,  7047,  7080,  7124,  7148,  5403,  8264,
    8281,  8298,   369,   385,   428,  8315,   437,  1156,  4870,  8332,
    8349,  8366,  8383,  8400,  8417,  8434,  8451,  1156,  7172,   451,
     438,  1157,  3014,   127,  1258,   446,   454,   469,   481,  4648,
    1518,  7200,  7240,  7264,   492,   542,   554,  7288,   561,  2292,
    1156,  5236,  5256,  7312,  7336,  7360,  7384,  7408,   482,   518,
     744,  6679,  8475,  8499,  7432,  7456,  7480,   490,  7504,  3393,
    1308,  1158,   851,  4564,   570,   588,   598,   610,   612,   614,
    4184,   888,   943,  1010,  1046,  1086,  1260,  1349,  1386,  1347,
     491,   500,   140,   537,   143,   374,   149,  4216,  4259,  4296,
    1414,   182,  1724,   568,  4648,  4648,  4648,  1159,   617,  6162,
    8523,  8547,  8571,   628,   633,   667,  8595,   671,  1156,  5132,
    8619,  8643,  8667,  8691,  8715,  8739,  8763,  8787,  8811,  8835,
    1156,  7528,  7552,  4718,  4718,  4718,  4718,  4718,  4718,  4718,
    4718,  4718,  4718,  5132,  5132,  5132,  4648,  1724,   695,  4648,
    4648,  4648,  1167,   682,  8852,   687,  1445,   694,   707,    15,
    3428,  1548,  3582,  1169,  1724,   723,  4648,  4648,  4648,   499,
    1171,   703,  7576,  8876,  8900,  8924,   706,   713,   718,  8948,
     728,  1156,  5236,  8972,  8996,  9020,  9044,  9068,  9092,  9116,
    9140,  9164,  9188,  1156,  7600,  7624,  4738,  4738,  4738,  4738,
    4738,  4738,  4738,  4738,  4738,  4738,  5236,  5236,  5236,  4763,
    3961,   729,  1576,  4648,   224,  4648,  4648,   293,   293,  1444,
    4351,  1511,  1660,   731,  1664,  1173,  1185,   712,   736,   722,
    1187,  1191,  4418,  4454,   743,   802,  1192,  1196,  1197,   749,
    1198,  1217,  1218,  7648,  4783,  1724,   778,  4648,  4648,  4648,
    1223,   762,  9212,   766,  6782, 10136, 10154, 10172, 10190, 10208,
   10064, 10082, 10100, 10118,  9236,  9260,  9284,  1224,  1230,   772,
    1231,  1267,  1271,  9301,  4812,  4845,  1672,  1677,  1272,  3996,
    1273,   784,  1279,  1280,  1289,   501,   383,  7672,  4917,  1724,
     814,  4648,  4648,  4648,  1312,   793,  9325,   795,  5731,  6406,
    6455,  6916,  6992, 10028,  7100,  9968,  9988, 10008,  9349,  9373,
    9397,   510,  1578,  1317,  2446,  2446,  1319,  1352,   813,   833,
    1614,  1692,  1725,  1727,   804,   855,  1050,   861,   894,  1056,
    7696,  7720,  7744,  7768,  7792,  2292,  9421,  1356,   856,  1411,
    1412,  1447,  9445,  4983,  5006,  9462,  9479,  9496,  9513,  9530,
    2292,  7816,  1730,  7840,  7864,  7888,  7912,  7936,   511,  2292,
    9554,  1453,   862,  1585,  1587,  1617,  9578,  5047,  5073,   700,
    4150,  4529,   700,   849,   880,   893,   512,  9602,  9626,  9650,
    9674,  9698,  2292,  7960,   514,   526,  9722,  9746,  9770,  9794,
    9818,  2292,  7984,  1654,   700,  1621,   700,  1627,  1828,  1917,
    1954,  2012,  8008,   742,   546,  9835,  1310,  8032,  1689,   553,
     700,  2079,   700,  2146,   700,  8056,  9859,  1878,  9876,  8080,
    9900,  2257,  2182,  2222,  2396,  9924,  9948
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   826,  -230,  -230,  -230,  -230,    12,    57,
     -21,    32,    14,  -184,  -135,   746,   -85,   895,   -22,  -227,
     -64,  -162,   -78,  -183,  -172,  -171,  -108,    25,  1106,  1674,
    2242,  2810,  3378,  6596,  6177,  6267,  5963,  5673,  5386,  5082,
    -229,   839,   538,  3946,  4514,  -129,   -94,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    22,    23,    27,    64,    35,
      16,    41,   228,    36,    37,    38,    94,   291,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   253,   254,
     255,   256,   257,    80,   258,   259,   260,   261,   262,   263,
     114,   115,   264,   265,   266,   144,   327,   267
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    31,   120,   344,   182,    40,   145,   138,   235,   358,
     233,     2,     7,   183,   345,   346,     7,    90,    20,    21,
     233,   368,    18,   225,   203,   149,    10,   208,   226,    30,
     164,   181,   286,    90,    28,   232,    90,   -19,   -19,    39,
      17,   537,   215,   232,   217,   227,    19,   -12,   413,   240,
      12,     2,   221,    26,   222,    13,   223,     8,   415,     9,
     -28,     8,    25,   -28,   -16,   -12,     2,    93,   212,   -16,
     187,   188,    14,    90,    30,    15,   154,   155,   347,    29,
      -5,   431,    91,    -2,    29,    -5,   -16,   237,     2,   -16,
     102,   202,    90,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,    90,   350,   343,   -17,
     -13,   229,   328,   480,   -17,   148,   230,   229,    90,    90,
     -14,   103,   230,   237,   290,    32,   350,    33,   -13,   233,
     229,   -17,   286,   231,   -17,   230,   234,    96,   -14,   231,
      97,   483,   359,    33,   488,   233,    33,   163,   233,   511,
      34,   104,   231,   229,   -15,   420,    90,    -3,   230,    90,
     293,   513,    -3,   105,   342,   140,   484,   328,   485,   489,
     490,   328,   -15,   106,    90,   231,    90,   496,   300,   301,
     429,   302,   303,   494,    90,    33,    90,   233,    90,   107,
     328,     1,   304,   305,   306,     2,   307,   308,   309,   213,
     310,   108,    -6,   109,   417,   311,    90,    -6,   495,   312,
     110,   348,   555,  -102,   -21,   112,   360,   486,  -102,   491,
      -7,   389,   -18,   -18,   557,    -7,   497,    43,    44,     2,
      45,    46,   -21,   498,   -21,  -102,  -102,   -21,   -21,   238,
     111,    54,    55,    56,   239,    57,    58,   -22,   286,    60,
     233,   232,   292,    98,    62,   -16,    99,   233,    63,   351,
     -16,    92,    -8,   353,   156,   -22,   162,   -22,   145,   225,
     -22,   -22,   421,   -30,   226,   180,   -30,   -16,   528,   328,
     -10,   452,   328,   209,   538,   -18,   -18,   210,   -20,  -116,
     355,   289,   137,   237,   120,   540,   152,   295,   191,   296,
     297,   139,   -34,    90,   225,   -34,   -20,   232,    24,   226,
      90,   -20,   -20,   145,   298,   121,   122,   192,   153,   300,
     301,   351,   302,   303,   -23,   193,   289,   -98,    90,   -32,
     145,  -100,   -32,   304,   305,   306,   -24,   307,   308,   309,
     224,   310,   -23,   -99,   -23,   363,   311,   -23,   -23,   389,
     312,   211,    -4,   -14,   -24,   364,   -24,    -4,   -14,   -24,
     -24,   -27,   365,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   597,   -17,   -15,   -27,
     366,   -27,   -17,   -15,   -27,   -27,   300,   301,   -11,   302,
     303,   -36,   -36,   -11,   408,   -36,   575,   237,    -9,   -17,
     304,   305,   306,    -9,   307,   308,   309,   618,   310,   -39,
     409,   145,   452,   311,   -39,   237,   120,   312,  -101,   -40,
     621,   -35,   -35,  -101,   -40,   -35,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   328,
    -101,  -101,   -75,   -75,    90,   -26,   344,   578,   579,   344,
      90,   200,   350,   410,   225,   145,   201,   345,   346,   226,
     345,   346,   411,   -26,   418,   -26,   636,   653,   -26,   -26,
     658,   344,  -120,   344,   389,   -21,   289,   416,   -21,   -21,
    -118,   644,   345,   346,   345,   346,   574,   344,   219,   344,
     645,   344,   671,   220,   673,  -117,   630,   631,   345,   346,
     345,   346,   345,   346,   286,    90,  -113,  -119,   682,   -25,
     683,  -113,   684,   664,  -111,  -112,   328,   425,   452,  -111,
    -112,   347,   669,   545,   347,  -114,   482,   -25,   546,   -25,
    -114,   293,   -25,   -25,   -76,  -115,   662,   237,   665,   -76,
    -115,   663,   -77,   666,    90,    90,   347,   -77,   347,   -22,
     667,   343,   -22,   -22,   343,   668,   456,   457,   458,   459,
     460,   461,   347,   487,   347,   328,   347,   426,    87,   350,
     676,   499,   350,   389,   350,   677,   343,   680,   343,   427,
     328,   -33,   681,   350,   -33,    87,   428,   350,   161,   328,
     -29,   299,   343,   -29,   343,   473,   343,   452,   328,    90,
     117,   288,    90,   -77,    87,   354,   -77,   342,   -20,   -20,
     342,   -31,   328,   474,   -31,   393,   394,   395,   396,   397,
     398,   328,  -113,   475,    90,  -113,    90,   -37,   -37,   146,
     122,   -37,   342,   328,   342,   476,   328,   477,   328,   478,
      90,    87,    90,   504,    90,   -38,   -38,   328,   342,   -38,
     342,   328,   342,   506,   348,   -21,   -21,   348,   507,   -21,
      87,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,    87,   184,   -74,   -74,   185,   348,
     324,   348,   -76,   -76,   -22,   -22,    87,    87,   -22,   361,
     -20,  -111,   508,   -20,  -111,   348,   509,   348,   529,   348,
     117,   332,   186,    43,    44,   299,    45,    46,   534,   333,
     334,   335,   336,   535,   337,   338,   339,    54,    55,    56,
     536,    57,    58,   340,    87,    60,   541,    87,   341,   548,
      62,   550,   -23,   -23,    63,   324,   -23,   -23,   551,   324,
     -23,   -23,    87,   552,    87,   300,   301,   -24,   302,   303,
     -24,   -24,    87,   553,    87,  -121,    87,   581,   324,   304,
     305,   306,   584,   307,   308,   309,   675,   310,   -78,   587,
     -21,   -21,   311,   -78,    87,   591,   312,   462,   463,   464,
     465,   598,   -78,   -78,   -78,   -78,   -78,   -78,   603,   386,
     392,   -55,   604,   -55,   -55,   -55,   -55,   -55,   606,   -55,
     -55,   -55,   -55,   214,   -55,   -55,   -55,   -55,   -55,   -55,
     614,   -55,   -55,   -55,   -55,   -55,   117,   622,   -55,   627,
     -55,   628,   268,   269,   -55,   270,   271,   -24,   -24,   -27,
      11,   -24,   -27,   -27,   -22,   -22,   272,   273,   274,   634,
     275,   276,   197,   189,   277,   141,   299,   324,   190,   449,
     455,   299,   -52,   278,   -52,   -52,   -52,   -52,   -52,   635,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,    87,   -52,   -52,   -52,   -52,   -52,   659,    87,   -52,
     -26,   -52,   638,   -26,   -26,   -52,   -27,   -27,   647,   -53,
     -27,   -53,   -53,   -53,   -53,   -53,    87,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   660,   -53,
     -53,   -53,   -53,   -53,   -77,   -77,   -53,   386,   -53,   -26,
     -26,   661,   -53,   -26,   123,   124,   125,   126,   127,   128,
      95,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   160,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,   -46,     0,
    -116,   -46,     0,   -46,     0,   100,     0,   -46,  -116,  -116,
     449,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   324,   352,   -20,
       0,   -45,    87,   -45,   -45,   -45,   -45,   -45,    87,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   356,    21,   -45,     0,
     -45,     0,   386,   194,   -45,   195,   299,   -47,   299,   -47,
     -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   -47,   117,   288,   -47,   -25,   -47,     0,   -25,   -25,
     -47,   -25,   -25,     0,   324,   -25,   449,   -48,     0,   -48,
     -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,     0,   -48,   -48,   -48,
     -48,   -48,    87,    87,   -48,   -78,   -48,     0,   -78,     0,
     -48,     0,   399,   400,   401,   402,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   324,   196,   199,    75,   299,    99,     0,
    -114,   386,   392,  -114,  -112,     0,   216,  -112,   324,   299,
       0,   218,  -115,    75,   299,  -115,     0,   324,     0,   241,
     242,   112,   243,   244,     0,   449,   455,    87,   279,    75,
      87,     0,    75,   245,   246,   247,   -75,   248,   249,   -75,
     324,   250,   419,   -34,   471,   503,   251,   299,   299,   324,
     252,     0,    87,   533,    87,   -74,   299,   547,   -74,   582,
     299,   324,    97,     0,   324,     0,   324,     0,    87,    75,
      87,   583,    87,   585,    99,   324,    97,   586,   588,   324,
      99,    97,   589,   590,   592,    99,   185,   299,    75,   279,
     279,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,    75,   593,   594,     0,   299,   299,   313,   602,
     -76,     0,   299,   -76,    75,    75,   605,   607,     0,   185,
     299,   -49,     0,   -49,   -49,   -49,   -49,   -49,   279,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   422,   122,   -49,     0,
     -49,     0,    75,   608,   -49,    75,   299,   609,   612,   613,
     299,    99,   185,   313,     0,   615,   616,   313,   299,   299,
      75,     0,    75,   300,   301,   617,   302,   303,   299,     0,
      75,     0,    75,     0,    75,     0,   313,   304,   305,   306,
       0,   307,   308,   309,   678,   310,   470,   122,   626,     0,
     311,   299,    75,   629,   312,   632,   299,     0,   299,     0,
     -50,     0,   -50,   -50,   -50,   -50,   -50,   380,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,
     -50,   -50,   -50,   -50,   -50,   481,   122,   -50,   633,   -50,
       0,   299,   637,   -50,   279,   185,     0,   -51,     0,   -51,
     -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,
     -51,   -51,     0,  -120,   -51,   313,   -51,   443,   313,     0,
     -51,  -120,  -120,     0,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,   639,   640,    75,
     299,   299,   493,    21,     0,   -39,    75,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,    75,   -39,   -39,   -39,   -39,   -39,
     -36,   -36,   -39,   641,   -39,  -116,   299,     0,   -39,   646,
     362,  -116,   185,     0,  -116,   380,  -116,  -116,  -116,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   380,   -54,     0,   -54,   -54,   -54,   -54,   -54,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,     0,   -54,   -54,   -54,   -54,   -54,     0,  -116,   -54,
       0,   -54,  -116,   424,     0,   -54,     0,  -116,   443,  -116,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,  -116,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   313,   539,    21,     0,   -65,
      75,   -65,   -65,   -65,   -65,   -65,    75,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,   572,   122,   -65,     0,   -65,     0,
     380,   648,   -65,   649,   299,   -40,   299,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,
     279,    75,   -40,   650,   -40,     0,   299,   672,   -40,     0,
     299,     0,   313,   674,   443,   -55,   299,   -55,   -55,   -55,
     -55,   -55,     0,   -55,   -55,   -55,   -55,   670,   -55,   -55,
     -55,   -55,   -55,   -55,     0,   -55,   -55,   -55,   -55,   -55,
      75,    75,   -55,     0,   -55,   -23,   -23,     0,   -55,   -24,
     -24,     0,   300,   301,     0,   302,   303,   -35,   -35,     0,
       0,   313,   -37,   -37,    76,     0,   304,   305,   306,   380,
     307,   308,   309,   679,   310,     0,   313,   -27,   -27,   311,
       0,    76,     0,   312,     0,   313,     0,   241,   242,     0,
     243,   244,     0,   443,   313,    75,   280,    76,    75,     0,
      76,   245,   246,   247,     0,   248,   249,   142,   313,   250,
     -26,   -26,   -25,   -25,   251,   -38,   -38,   313,   252,     0,
      75,     0,    75,     0,     0,     0,     0,     0,     0,   313,
       0,     0,   313,     0,   313,     0,    75,    76,    75,     0,
      75,     0,     0,   313,     0,     0,     0,   313,     0,     0,
       0,     0,     0,     0,     0,     0,    76,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
      76,     0,     0,     0,     0,     0,   314,     0,     0,     0,
       0,     0,    76,    76,     0,     0,     0,     0,     0,   -61,
       0,   -61,   -61,   -61,   -61,   -61,   280,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -61,   -61,   -61,   -61,     0,     0,   -61,     0,   -61,     0,
      76,     0,   -61,    76,     0,     0,     0,     0,     0,     0,
       0,   314,     0,     0,     0,   314,     0,     0,    76,     0,
      76,   300,   301,     0,   302,   303,     0,     0,    76,     0,
      76,     0,    76,     0,   314,   304,   305,   306,     0,   307,
     308,   309,   685,   310,     0,     0,     0,     0,   311,     0,
      76,     0,   312,     0,     0,     0,     0,     0,   -62,     0,
     -62,   -62,   -62,   -62,   -62,   381,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,
     -62,   -62,   -62,     0,     0,   -62,     0,   -62,     0,     0,
       0,   -62,   280,     0,     0,   -63,     0,   -63,   -63,   -63,
     -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,     0,   -63,   -63,   -63,   -63,   -63,
       0,  -118,   -63,   314,   -63,   444,   314,     0,   -63,  -118,
    -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,     0,     0,    76,     0,     0,
       0,     0,     0,   -64,    76,   -64,   -64,   -64,   -64,   -64,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,    76,   -64,   -64,   -64,   -64,   -64,     0,     0,
     -64,     0,   -64,  -117,     0,     0,   -64,     0,     0,     0,
       0,  -117,  -117,   381,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     -60,     0,   -60,   -60,   -60,   -60,   -60,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,
     -60,   -60,   -60,   -60,   -60,     0,  -119,   -60,     0,   -60,
       0,     0,     0,   -60,  -119,  -119,   444,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   314,     0,     0,     0,   -58,    76,   -58,
     -58,   -58,   -58,   -58,    76,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,
     -58,   -58,     0,     0,   -58,     0,   -58,     0,   381,     0,
     -58,     0,     0,   -56,     0,   -56,   -56,   -56,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,   280,    76,
     -56,     0,   -56,     0,     0,     0,   -56,     0,     0,     0,
     314,     0,   444,   -59,     0,   -59,   -59,   -59,   -59,   -59,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,     0,   -59,   -59,   -59,   -59,   -59,    76,    76,
     -59,     0,   -59,     0,     0,     0,   -59,     0,     0,     0,
     300,   301,     0,   302,   303,     0,     0,     0,     0,   314,
       0,     0,    77,     0,   304,   305,   306,   381,   307,   308,
     309,   686,   310,     0,   314,     0,     0,   311,     0,    77,
       0,   312,     0,   314,     0,   300,   301,     0,   302,   303,
       0,   444,   314,    76,   281,    77,    76,     0,    77,   304,
     305,   306,     0,   307,   308,   309,   314,   310,     0,     0,
       0,     0,   311,     0,     0,   314,   312,     0,    76,     0,
      76,     0,     0,     0,     0,     0,     0,   314,     0,     0,
     314,     0,   314,     0,    76,    77,    76,     0,    76,     0,
       0,   314,     0,     0,     0,   314,     0,     0,     0,     0,
       0,     0,     0,     0,    77,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,    77,     0,
       0,     0,     0,     0,   315,     0,     0,     0,     0,     0,
      77,    77,     0,     0,     0,     0,     0,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   281,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,
     -57,   -57,     0,     0,   -57,     0,   -57,     0,    77,     0,
     -57,    77,     0,     0,     0,     0,     0,     0,     0,   315,
       0,     0,     0,   315,     0,     0,    77,     0,    77,    43,
      44,     0,    45,    46,     0,     0,    77,     0,    77,     0,
      77,     0,   315,    54,    55,    56,     0,    57,    58,     0,
       0,    60,     0,     0,   329,     0,    62,     0,    77,     0,
      63,    42,     0,    43,    44,     2,    45,    46,     0,    47,
      48,    49,    50,   382,    51,    52,    53,    54,    55,    56,
       0,    57,    58,   236,    59,    60,     0,     0,    61,     0,
      62,     0,     0,   -52,    63,   -52,   -52,   -52,   -52,   -52,
     281,   -52,   -52,   -52,   -52,     0,   -52,   -52,   -52,   -52,
     -52,   -52,     0,   -52,   -52,   -52,   -52,   -52,     0,     0,
     -52,     0,   -52,     0,     0,     0,   -52,     0,     0,     0,
       0,   315,     0,   445,   315,     0,   -53,     0,   -53,   -53,
     -53,   -53,   -53,     0,   -53,   -53,   -53,   -53,     0,   -53,
     -53,   -53,   -53,   -53,   -53,    77,   -53,   -53,   -53,   -53,
     -53,     0,    77,   -53,     0,   -53,     0,     0,     0,   -53,
       0,     0,     0,   -43,     0,   -43,   -43,   -43,   -43,   -43,
      77,   -43,   -43,   -43,   -43,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,   -43,   -43,   -43,   -43,   -43,     0,     0,
     -43,   382,   -43,     0,     0,     0,   -43,     0,     0,     0,
       0,     0,     0,     0,     0,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   -46,     0,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,   -46,   -46,
       0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,
     -46,   -46,   -46,     0,  -104,   -46,     0,   -46,     0,     0,
       0,   -46,  -104,  -104,   445,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   315,     0,     0,     0,    42,    77,    43,    44,     2,
      45,    46,    77,    47,    48,    49,    50,     0,    51,    52,
      53,    54,    55,    56,     0,    57,    58,   236,   119,    60,
       0,     0,    61,     0,    62,     0,   382,     0,    63,     0,
       0,   -41,     0,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,   -41,   -41,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,   -41,   -41,   -41,   281,    77,   -41,     0,
     -41,     0,     0,     0,   -41,     0,     0,     0,   315,     0,
     445,   -44,     0,   -44,   -44,   -44,   -44,   -44,     0,   -44,
     -44,   -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,   -44,   -44,   -44,    77,    77,   -44,     0,
     -44,     0,     0,     0,   -44,     0,     0,     0,   241,   242,
       0,   243,   244,     0,     0,     0,     0,   315,     0,     0,
      78,     0,   245,   246,   247,   382,   248,   249,     0,     0,
     250,   204,   315,     0,     0,   251,     0,    78,     0,   252,
       0,   315,     0,   241,   242,     0,   243,   244,     0,   445,
     315,    77,   282,    78,    77,     0,    78,   245,   246,   247,
       0,   248,   249,     0,   315,   250,   206,     0,     0,     0,
     251,     0,     0,   315,   252,     0,    77,     0,    77,     0,
       0,     0,     0,     0,     0,   315,     0,     0,   315,     0,
     315,     0,    77,    78,    77,     0,    77,     0,     0,   315,
       0,     0,     0,   315,     0,     0,     0,     0,     0,     0,
       0,     0,    78,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,    78,     0,     0,     0,
       0,     0,   316,     0,     0,     0,     0,     0,    78,    78,
     -45,     0,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
     -45,   -45,   282,   -45,   -45,   -45,   -45,   -45,   -45,     0,
     -45,   -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,
       0,     0,     0,   -45,     0,     0,    78,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,   316,     0,     0,
       0,   316,     0,     0,    78,     0,    78,   -53,   -53,     0,
     -53,   -53,     0,     0,    78,     0,    78,     0,    78,     0,
     316,   -53,   -53,   -53,     0,   -53,   -53,     0,     0,   -53,
       0,     0,   -53,     0,   -53,     0,    78,     0,   -53,   -47,
       0,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,   -47,
     -47,   383,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,     0,     0,   -47,     0,   -47,     0,
       0,   -48,   -47,   -48,   -48,   -48,   -48,   -48,   282,   -48,
     -48,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,   -48,
       0,   -48,   -48,   -48,   -48,   -48,     0,     0,   -48,     0,
     -48,     0,     0,     0,   -48,     0,     0,     0,     0,   316,
       0,   446,   316,     0,   -49,     0,   -49,   -49,   -49,   -49,
     -49,     0,   -49,   -49,   -49,   -49,     0,   -49,   -49,   -49,
     -49,   -49,   -49,    78,   -49,   -49,   -49,   -49,   -49,     0,
      78,   -49,     0,   -49,     0,     0,     0,   -49,     0,     0,
       0,   -50,     0,   -50,   -50,   -50,   -50,   -50,    78,   -50,
     -50,   -50,   -50,     0,   -50,   -50,   -50,   -50,   -50,   -50,
       0,   -50,   -50,   -50,   -50,   -50,     0,     0,   -50,   383,
     -50,     0,     0,     0,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,   383,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   -51,     0,   -51,   -51,
     -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -51,   -51,   -51,   -51,     0,   -51,   -51,   -51,   -51,
     -51,     0,   -66,   -51,     0,   -51,     0,     0,     0,   -51,
     -66,   -66,   446,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   316,
       0,     0,     0,   -42,    78,   -42,   -42,   -42,   -42,   -42,
      78,   -42,   -42,   -42,   -42,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   -42,   -42,   -42,   -42,   -42,     0,     0,
     -42,     0,   -42,     0,   383,     0,   -42,     0,     0,   -54,
       0,   -54,   -54,   -54,   -54,   -54,     0,   -54,   -54,   -54,
     -54,     0,   -54,   -54,   -54,   -54,   -54,   -54,     0,   -54,
     -54,   -54,   -54,   -54,   282,    78,   -54,     0,   -54,     0,
       0,     0,   -54,     0,     0,     0,   316,     0,   446,   -65,
       0,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,   -65,    78,    78,   -65,     0,   -65,     0,
       0,     0,   -65,     0,     0,     0,   -53,   -53,     0,   -53,
     -53,     0,     0,     0,     0,   316,     0,     0,    79,     0,
     -53,   -53,   -53,   383,   -53,   -53,     0,     0,   -53,   -53,
     316,     0,     0,   -53,     0,    79,     0,   -53,     0,   316,
       0,   -14,   -14,     0,   -14,   -14,     0,   446,   316,    78,
     283,    79,    78,     0,    79,   -14,   -14,   -14,     0,   -14,
     -14,     0,   316,   -14,     0,     0,   -14,     0,   -14,     0,
       0,   316,   -14,     0,    78,     0,    78,     0,     0,     0,
       0,     0,     0,   316,     0,     0,   316,     0,   316,     0,
      78,    79,    78,     0,    78,     0,     0,   316,     0,     0,
       0,   316,     0,     0,     0,     0,     0,     0,     0,     0,
      79,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,    79,     0,     0,     0,     0,     0,
     317,     0,     0,     0,     0,     0,    79,    79,   -61,     0,
     -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,   -61,   -61,
     283,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -61,
     -61,   -61,   -61,     0,     0,   -61,     0,   -61,     0,     0,
       0,   -61,     0,     0,    79,     0,     0,    79,     0,     0,
       0,     0,     0,     0,     0,   317,     0,     0,     0,   317,
       0,     0,    79,     0,    79,   -54,   -54,     0,   -54,   -54,
       0,     0,    79,     0,    79,     0,    79,     0,   317,   -54,
     -54,   -54,     0,   -54,   -54,     0,     0,   -54,     0,     0,
     -54,     0,   -54,     0,    79,     0,   -54,   -62,     0,   -62,
     -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,   -62,   384,
     -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,   -62,   -62,
     -62,   -62,     0,     0,   -62,     0,   -62,     0,     0,   -63,
     -62,   -63,   -63,   -63,   -63,   -63,   283,   -63,   -63,   -63,
     -63,     0,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,
     -63,   -63,   -63,   -63,     0,     0,   -63,     0,   -63,     0,
       0,     0,   -63,     0,     0,     0,     0,   317,     0,   447,
     317,     0,   -64,     0,   -64,   -64,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,     0,   -64,   -64,   -64,   -64,   -64,
     -64,    79,   -64,   -64,   -64,   -64,   -64,     0,    79,   -64,
       0,   -64,     0,     0,     0,   -64,     0,     0,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -60,    79,   -60,   -60,   -60,
     -60,     0,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,
     -60,   -60,   -60,   -60,     0,     0,   -60,   384,   -60,     0,
       0,     0,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   -58,     0,   -58,   -58,   -58,   -58,
     -58,     0,   -58,   -58,   -58,   -58,     0,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -58,   -58,   -58,   -58,     0,
     -67,   -58,     0,   -58,     0,     0,     0,   -58,   -67,   -67,
     447,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   317,     0,     0,
       0,   -56,    79,   -56,   -56,   -56,   -56,   -56,    79,   -56,
     -56,   -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
       0,   -56,   -56,   -56,   -56,   -56,     0,     0,   -56,     0,
     -56,     0,   384,     0,   -56,     0,     0,   -59,     0,   -59,
     -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,   -59,     0,
     -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -59,   -59,
     -59,   -59,   283,    79,   -59,     0,   -59,     0,     0,     0,
     -59,     0,     0,     0,   317,     0,   447,   -57,     0,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,   -57,     0,
     -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -57,   -57,
     -57,   -57,    79,    79,   -57,     0,   -57,     0,     0,     0,
     -57,     0,     0,     0,   -54,   -54,     0,   -54,   -54,     0,
       0,     0,     0,   317,     0,     0,    88,     0,   -54,   -54,
     -54,   384,   -54,   -54,     0,     0,   -54,   -54,   317,     0,
       0,   -54,     0,    88,     0,   -54,     0,   317,     0,   -15,
     -15,     0,   -15,   -15,     0,   447,   317,    79,   284,    88,
      79,     0,    88,   -15,   -15,   -15,     0,   -15,   -15,     0,
     317,   -15,     0,     0,   -15,     0,   -15,     0,     0,   317,
     -15,     0,    79,     0,    79,     0,     0,     0,     0,     0,
       0,   317,     0,     0,   317,     0,   317,     0,    79,    88,
      79,     0,    79,     0,     0,   317,     0,     0,     0,   317,
       0,     0,     0,     0,     0,     0,     0,     0,    88,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
     284,   284,    88,     0,     0,     0,     0,     0,   325,     0,
       0,     0,     0,     0,    88,    88,    42,     0,    43,    44,
       2,    45,    46,     0,    47,    48,    49,    50,   284,    51,
      52,    53,    54,    55,    56,     0,    57,    58,   236,   357,
      60,     0,     0,    61,     0,    62,     0,     0,     0,    63,
       0,     0,    88,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,   325,     0,     0,     0,   325,     0,     0,
      88,     0,    88,   241,   242,     0,   243,   244,     0,     0,
      88,     0,    88,     0,    88,     0,   325,   245,   246,   247,
       0,   248,   249,     0,     0,   250,   654,     0,     0,     0,
     251,     0,    88,     0,   252,    42,     0,    43,    44,     2,
      45,    46,     0,    47,    48,    49,    50,   387,    51,    52,
      53,    54,    55,    56,     0,    57,    58,   236,   479,    60,
       0,     0,    61,     0,    62,     0,     0,   -39,    63,   -39,
     -39,   -39,   -39,   -39,   284,   -39,   -39,   -39,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,   -39,
     -39,   -39,     0,     0,   -39,     0,   -39,     0,     0,     0,
     -39,     0,     0,     0,     0,   325,     0,   450,   325,     0,
      42,     0,    43,    44,     2,    45,    46,     0,    47,    48,
      49,    50,     0,    51,    52,    53,    54,    55,    56,    88,
      57,    58,   236,   492,    60,     0,    88,    61,     0,    62,
       0,     0,     0,    63,     0,     0,     0,   -14,     0,   -14,
     -14,   -14,   -14,   -14,    88,   -14,   -14,   -14,   -14,     0,
     -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,   -14,
     -14,   -14,     0,     0,   -14,   387,   -14,     0,     0,     0,
     -14,     0,     0,     0,     0,     0,     0,     0,     0,   387,
     387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
     387,   387,    42,     0,    43,    44,     2,    45,    46,     0,
      47,    48,    49,    50,     0,    51,    52,    53,    54,    55,
      56,     0,    57,    58,   236,   580,    60,     0,   -68,    61,
       0,    62,     0,     0,     0,    63,   -68,   -68,   450,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   325,     0,     0,     0,   -40,
      88,   -40,   -40,   -40,   -40,   -40,    88,   -40,   -40,   -40,
     -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,     0,   -40,     0,
     387,     0,   -40,     0,     0,   -15,     0,   -15,   -15,   -15,
     -15,   -15,     0,   -15,   -15,   -15,   -15,     0,   -15,   -15,
     -15,   -15,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     284,    88,   -15,     0,   -15,     0,     0,     0,   -15,     0,
       0,     0,   325,     0,   450,    42,     0,    43,    44,     0,
      45,    46,     0,    47,    48,    49,    50,     0,    51,    52,
      53,    54,    55,    56,     0,    57,    58,   236,     0,    60,
      88,    88,    61,     0,    62,     0,     0,     0,    63,     0,
       0,     0,   241,   242,     0,   243,   244,     0,     0,     0,
       0,   325,     0,     0,    89,     0,   245,   246,   247,   387,
     248,   249,     0,     0,   250,   656,   325,     0,     0,   251,
       0,    89,     0,   252,     0,   325,     0,    43,    44,     0,
      45,    46,     0,   450,   325,    88,   285,    89,    88,     0,
      89,    54,    55,    56,     0,    57,    58,     0,   325,    60,
       0,     0,     0,     0,    62,     0,     0,   325,    63,     0,
      88,     0,    88,     0,     0,     0,     0,     0,     0,   325,
       0,     0,   325,     0,   325,     0,    88,    89,    88,     0,
      88,     0,     0,   325,     0,     0,     0,   325,     0,     0,
       0,     0,     0,     0,     0,     0,    89,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
      89,   241,   242,     0,   243,   244,   326,     0,     0,     0,
       0,     0,    89,    89,     0,   245,   246,   247,     0,   248,
     249,   268,   269,   250,   270,   271,   285,     0,   251,     0,
       0,     0,   252,     0,     0,   272,   273,   274,     0,   275,
     276,     0,     0,   277,     0,     0,     0,     0,    62,     0,
      89,     0,   278,    89,     0,     0,     0,     0,     0,     0,
       0,   326,     0,     0,     0,   326,     0,     0,    89,     0,
      89,   369,   370,     0,   371,   372,     0,     0,    89,     0,
      89,     0,    89,     0,   326,   373,   374,   375,     0,   376,
     377,   432,   433,   378,   434,   435,     0,     0,   251,     0,
      89,     0,   379,     0,     0,   436,   437,   438,     0,   439,
     440,     0,     0,   441,     0,   388,   300,   301,   311,   302,
     303,     0,   442,     0,     0,     0,     0,     0,     0,     0,
     304,   305,   306,     0,   307,   308,   369,   370,   310,   371,
     372,     0,   285,   311,     0,     0,     0,   312,     0,     0,
     373,   374,   375,     0,   376,   377,   595,     0,   378,     0,
       0,     0,     0,     0,     0,   268,   269,   379,   270,   271,
       0,     0,     0,   326,     0,   451,   326,     0,     0,   272,
     273,   274,     0,   275,   276,   610,     0,   277,     0,     0,
       0,     0,     0,     0,     0,     0,   278,    89,    43,    44,
       0,    45,    46,     0,    89,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     0,    57,    58,   197,     0,
     287,     0,    89,   268,   269,     0,   270,   271,     0,    63,
       0,     0,     0,     0,     0,     0,     0,   272,   273,   274,
       0,   275,   276,   388,     0,   277,     0,     0,     0,     0,
       0,     0,     0,     0,   278,     0,     0,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     432,   433,     0,   434,   435,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   436,   437,   438,     0,   439,   440,
     619,     0,   441,     0,     0,     0,   -69,     0,     0,     0,
       0,   442,     0,     0,   -69,   -69,   451,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   326,     0,     0,   369,   370,    89,   371,
     372,     0,     0,     0,    89,     0,     0,     0,     0,     0,
     373,   374,   375,     0,   376,   377,   642,     0,   378,   241,
     242,     0,   243,   244,     0,     0,     0,   379,   388,     0,
       0,     0,     0,   245,   246,   247,     0,   248,   249,   595,
       0,   390,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,     0,     0,     0,     0,   285,    89,
     432,   433,     0,   434,   435,     0,     0,     0,     0,     0,
     326,     0,   451,     0,   436,   437,   438,     0,   439,   440,
     651,     0,   441,     0,     0,     0,   300,   301,     0,   302,
     303,   442,     0,     0,     0,     0,     0,     0,    89,    89,
     304,   305,   306,     0,   307,   308,   619,     0,   453,     0,
      43,    44,     0,    45,    46,     0,     0,   312,     0,   326,
       0,     0,    86,     0,    54,    55,    56,   388,    57,    58,
       0,     0,   287,     0,   326,     0,     0,     0,     0,    86,
       0,    63,     0,   326,     0,   369,   370,     0,   371,   372,
       0,   451,   326,    89,    86,   118,    89,     0,    86,   373,
     374,   375,     0,   376,   377,     0,   326,   378,     0,     0,
       0,     0,     0,     0,     0,   326,   379,     0,    89,     0,
      89,     0,     0,     0,     0,     0,     0,   326,     0,     0,
     326,     0,   326,     0,    89,    86,    89,     0,    89,     0,
       0,   326,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,   178,    86,   241,
     242,     0,   243,   244,   323,     0,     0,     0,     0,     0,
      86,    86,     0,   245,   246,   247,     0,   248,   249,   432,
     433,   390,   434,   435,   198,     0,     0,     0,     0,     0,
     252,     0,     0,   436,   437,   438,     0,   439,   440,   300,
     301,   441,   302,   303,     0,     0,     0,     0,    86,     0,
     442,    86,     0,   304,   305,   306,     0,   307,   308,   323,
       0,   453,     0,   323,     0,     0,    86,     0,    86,     0,
     312,     0,     0,     0,     0,     0,    86,     0,    86,     0,
      86,     0,   323,     0,     0,     0,     0,     0,   -96,     0,
       0,     0,     0,     0,     0,     0,   -96,   -96,    86,   -96,
     -96,   -96,   -96,   -96,   -96,   136,   -96,   -96,   -96,   -96,
     -96,   -96,  -105,     0,   391,     0,     0,     0,     0,     0,
    -105,  -105,     0,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -103,     0,     0,     0,
     414,     0,     0,     0,  -103,  -103,     0,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
       0,     0,     0,     0,     0,     0,     0,  -108,     0,     0,
       0,   323,     0,   323,   454,  -108,  -108,     0,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,     0,     0,     0,     0,    86,    85,     0,     0,     0,
       0,     0,    86,  -116,     0,     0,     0,     0,   407,     0,
       0,  -116,  -116,    85,  -116,  -116,  -116,  -116,  -116,  -116,
      86,  -116,  -116,  -116,  -116,  -116,  -116,     0,   116,     0,
       0,  -106,    85,     0,     0,     0,     0,     0,     0,  -106,
    -106,   512,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,  -106,     0,     0,     0,     0,     0,
       0,     0,  -121,     0,     0,     0,     0,   526,     0,    85,
    -121,  -121,     0,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,     0,     0,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,   176,
     177,     0,    85,     0,   556,     0,     0,     0,   322,     0,
       0,     0,     0,     0,    85,    85,     0,     0,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     570,   323,     0,   -78,   -78,     0,    86,     0,   129,   130,
     131,   132,    86,   -78,   -78,   -78,   -78,   -78,   -78,     0,
       0,     0,    85,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,   322,     0,     0,   596,   322,     0,     0,
      85,     0,    85,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    85,     0,    85,     0,   322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,   611,     0,     0,
       0,     0,    85,     0,     0,     0,     0,  -107,   323,     0,
     620,     0,     0,     0,     0,  -107,  -107,   385,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,   -70,     0,     0,     0,     0,    86,    86,     0,   -70,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,     0,   323,     0,     0,
       0,     0,     0,     0,     0,   596,   643,     0,     0,     0,
       0,     0,   323,     0,     0,   322,     0,   448,     0,     0,
       0,   323,     0,    84,     0,     0,     0,     0,     0,   620,
     652,    86,     0,     0,    86,     0,     0,     0,     0,    85,
      84,     0,     0,     0,   323,     0,    85,     0,     0,     0,
       0,     0,     0,   323,     0,     0,    86,     0,    86,    84,
       0,     0,     0,     0,    85,   323,     0,     0,   323,     0,
     323,     0,    86,     0,    86,   -79,    86,     0,     0,   323,
     -79,     0,     0,   323,   462,   463,   464,   465,     0,   -79,
     -79,   -79,   -79,   -79,   -79,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   524,
     525,     0,     0,     0,     0,    84,    84,    84,    84,    84,
      84,    84,   172,   173,   174,   175,     0,     0,     0,    84,
       0,     0,     0,     0,     0,   321,   -72,     0,     0,     0,
       0,    84,    84,     0,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
       0,     0,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   568,   569,     0,   322,     0,     0,     0,    84,
      85,     0,    84,     0,     0,     0,    85,     0,     0,     0,
     321,     0,     0,     0,   321,     0,     0,    84,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    84,     0,    84,
       0,    84,     0,   321,     0,     0,     0,     0,     0,   -71,
       0,     0,     0,     0,     0,     0,     0,   -71,   -71,    84,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,     0,   -73,     0,     0,     0,     0,
       0,     0,   322,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,
       0,     0,     0,     0,  -109,     0,     0,     0,     0,     0,
      85,    85,  -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,     0,     0,
       0,   322,   321,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,   322,     0,     0,     0,
       0,     0,     0,     0,     0,   322,    84,     0,     0,     0,
      83,     0,     0,    84,     0,    85,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   322,    83,
       0,    84,     0,     0,     0,     0,     0,   322,     0,     0,
      85,     0,    85,     0,     0,     0,     0,     0,     0,   322,
       0,     0,   322,     0,   322,     0,    85,     0,    85,     0,
      85,     0,     0,   322,     0,     0,    83,   322,     0,     0,
       0,     0,   520,   521,   522,   523,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,   166,   167,   168,   169,
     170,   171,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,  -120,   320,     0,     0,     0,     0,
    -120,    83,    83,  -120,     0,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,     0,   321,
     321,   321,   321,   321,   321,   564,   565,   566,   567,     0,
       0,     0,   321,     0,     0,     0,     0,    84,     0,    83,
       0,     0,    83,    84,     0,     0,     0,     0,     0,     0,
     320,     0,     0,     0,   320,     0,     0,    83,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    83,     0,    83,
       0,    83,  -116,   320,     0,     0,     0,   505,  -116,     0,
       0,  -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,    83,
    -116,  -116,  -116,  -116,  -116,  -116,     0,    81,     0,     0,
       0,     0,     0,     0,  -110,     0,     0,     0,     0,   321,
       0,     0,  -110,  -110,    81,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,     0,     0,
    -118,     0,     0,    81,     0,     0,  -118,    84,    84,  -118,
       0,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,     0,     0,     0,     0,   321,     0,
       0,     0,   320,     0,     0,     0,     0,   143,     0,     0,
      81,     0,     0,   321,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,     0,     0,    83,    82,     0,   165,
       0,     0,    84,    83,     0,    84,     0,     0,     0,     0,
       0,     0,     0,   179,    82,   321,     0,     0,     0,   318,
       0,    83,     0,     0,   321,    81,    81,    84,     0,    84,
       0,     0,     0,    82,     0,     0,   321,     0,     0,   321,
       0,   321,     0,    84,     0,    84,     0,    84,     0,     0,
     321,     0,     0,     0,   321,     0,   514,   515,   516,   517,
     518,   519,   143,    81,     0,     0,    81,     0,     0,     0,
      82,     0,     0,     0,   318,     0,     0,     0,   318,     0,
       0,    81,     0,    81,     0,     0,     0,     0,     0,    82,
       0,    81,     0,    81,     0,    81,     0,   318,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,   319,
       0,     0,     0,    81,     0,    82,    82,     0,     0,   558,
     559,   560,   561,   562,   563,     0,     0,     0,     0,     0,
     -80,     0,   320,     0,     0,   -80,     0,    83,     0,   462,
     463,   464,   465,    83,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,     0,    82,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,   319,     0,
       0,    82,     0,    82,     0,     0,   423,     0,     0,   -81,
       0,    82,     0,    82,   -81,    82,   318,   319,   462,   463,
     464,   465,     0,   -81,   -81,   -81,   -81,   -81,   -81,     0,
       0,     0,     0,    82,     0,     0,     0,  -117,     0,   320,
      81,     0,     0,  -117,     0,     0,  -117,    81,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,     0,     0,     0,  -119,    81,     0,    83,    83,   143,
    -119,     0,     0,  -119,     0,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   320,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   320,     0,     0,   319,     0,     0,     0,
       0,     0,   320,   527,   143,     0,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    83,     0,     0,     0,     0,
      82,   143,     0,     0,     0,   320,     0,    82,     0,     0,
       0,     0,     0,     0,   320,     0,     0,    83,     0,    83,
       0,     0,     0,     0,     0,    82,   320,     0,     0,   320,
       0,   320,     0,    83,     0,    83,     0,    83,     0,     0,
     320,     0,     0,   101,   320,     0,   571,     0,     0,  -104,
       0,    81,     0,     0,     0,  -104,   113,    81,  -104,     0,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,     0,   -66,     0,     0,     0,     0,     0,
     -66,     0,   143,   -66,     0,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   147,   294,
     150,   151,     0,   -85,     0,   157,   158,   159,   -85,     0,
     466,   467,   -85,   -85,   -85,   -85,     0,   -85,   -85,   -85,
     -85,   -85,   -85,   318,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   319,     0,     0,     0,
       0,    82,     0,     0,   330,   330,     0,    82,   -67,   331,
       0,    81,    81,     0,   -67,     0,     0,   -67,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   318,     0,     0,     0,     0,     0,     0,   405,
       0,     0,   349,   205,   207,   -90,     0,   318,   -90,     0,
     -90,   -90,   -90,   -90,   -90,   -90,   318,   -90,   -90,   -90,
     -90,   -90,   -90,     0,     0,     0,    81,     0,   -79,    81,
       0,   -79,     0,   319,     0,   399,   400,   401,   402,   318,
     -79,   -79,   -79,   -79,   -79,   -79,     0,     0,   318,     0,
       0,    81,     0,    81,     0,     0,     0,     0,     0,     0,
     318,    82,    82,   318,     0,   318,   367,    81,     0,    81,
       0,    81,     0,     0,   318,     0,     0,     0,   318,     0,
       0,     0,   319,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   412,     0,     0,     0,   319,     0,     0,
       0,     0,     0,   113,     0,     0,   319,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,    82,
       0,     0,     0,     0,     0,     0,   430,     0,     0,   319,
       0,     0,     0,     0,     0,     0,     0,     0,   319,     0,
       0,    82,     0,    82,     0,     0,     0,     0,     0,   472,
     319,     0,     0,   319,     0,   319,     0,    82,     0,    82,
     -82,    82,     0,     0,   319,   -82,     0,     0,   319,   462,
     463,   464,   465,     0,   -82,   -82,   -82,   -82,   -82,   -82,
     500,   501,   502,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   510,     0,   -68,     0,     0,     0,
       0,     0,   -68,     0,     0,   -68,   367,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,   530,   531,   532,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,     0,     0,     0,
       0,   -83,   542,   543,   544,   462,   463,   464,   465,     0,
     -83,   -83,   -83,   -83,   -83,   -83,     0,   554,     0,   -69,
       0,     0,     0,     0,     0,   -69,     0,     0,   -69,   430,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,     0,     0,     0,   -96,     0,   573,
     294,   576,   577,   -96,     0,     0,   -96,     0,   -96,   -96,
     -96,   -96,   -96,   -96,   406,   -96,   -96,   -96,   -96,   -96,
     -96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -105,     0,     0,   599,   600,   601,  -105,     0,     0,  -105,
       0,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,   -86,     0,     0,     0,     0,   -86,
       0,   466,   467,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,  -103,     0,     0,   623,   624,   625,
    -103,     0,     0,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -108,     0,
     330,   330,     0,     0,  -108,     0,     0,  -108,     0,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,   -96,     0,     0,     0,     0,     0,     0,     0,
     -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,     0,     0,     0,     0,
    -120,     0,     0,     0,  -120,   349,   655,   657,   349,  -120,
       0,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,     0,     0,     0,     0,     0,     0,
     349,     0,   349,     0,     0,     0,     0,     0,     0,     0,
    -118,     0,     0,     0,  -118,     0,   349,     0,   349,  -118,
     349,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -117,     0,     0,     0,  -117,     0,
       0,     0,     0,  -117,     0,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -119,     0,
       0,     0,  -119,     0,     0,     0,     0,  -119,     0,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -104,     0,     0,     0,  -104,     0,     0,     0,
       0,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,  -104,  -104,   -66,     0,     0,     0,
     -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,   -67,     0,     0,     0,     0,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,   -68,     0,
       0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
       0,     0,   -69,     0,     0,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -96,     0,     0,     0,   -96,     0,     0,     0,
       0,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   469,
     -96,   -96,   -96,   -96,   -96,   -96,  -105,     0,     0,     0,
    -105,     0,     0,     0,     0,  -105,     0,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
    -103,     0,     0,     0,  -103,     0,     0,     0,     0,  -103,
       0,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -108,     0,     0,     0,  -108,     0,
       0,     0,     0,  -108,     0,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,  -108,  -108,  -108,  -108,  -108,  -108,  -106,     0,
       0,     0,     0,     0,  -106,     0,     0,  -106,     0,  -106,
    -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,   -96,     0,     0,     0,     0,     0,   -96,     0,
       0,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,  -116,     0,     0,     0,
    -116,   549,     0,     0,     0,  -116,     0,  -116,  -116,  -116,
    -116,  -116,  -116,     0,  -116,  -116,  -116,  -116,  -116,  -116,
    -106,     0,     0,     0,  -106,     0,     0,     0,     0,  -106,
       0,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,  -106,
    -106,  -106,  -106,  -106,   -96,     0,     0,     0,   -96,     0,
       0,     0,     0,   -96,     0,   -96,   -96,   -96,   -96,   -96,
     -96,   -96,   -96,   -96,   -96,   -96,   -96,   -96,  -121,     0,
       0,     0,     0,     0,  -121,     0,     0,  -121,     0,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,     0,     0,     0,  -121,     0,     0,     0,
       0,  -121,     0,  -121,  -121,  -121,  -121,  -121,  -121,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,  -107,     0,     0,     0,
       0,     0,  -107,     0,     0,  -107,     0,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
     -70,     0,     0,     0,     0,     0,   -70,     0,     0,   -70,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -72,     0,     0,     0,     0,     0,
     -72,     0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -71,     0,
       0,     0,     0,     0,   -71,     0,     0,   -71,     0,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -73,     0,     0,     0,     0,     0,   -73,     0,
       0,   -73,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -97,     0,     0,     0,
       0,     0,     0,     0,   -97,   -97,     0,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
    -107,     0,     0,     0,  -107,     0,     0,     0,     0,  -107,
       0,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,   -70,     0,     0,     0,   -70,     0,
       0,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -72,     0,
       0,     0,   -72,     0,     0,     0,     0,   -72,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -71,     0,     0,     0,   -71,     0,     0,     0,
       0,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -73,     0,     0,     0,
     -73,     0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -97,     0,     0,     0,     0,     0,   -97,     0,     0,   -97,
       0,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,     0,     0,     0,   -97,     0,
       0,     0,     0,   -97,     0,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,  -109,     0,
       0,     0,     0,     0,  -109,     0,     0,  -109,     0,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,     0,     0,     0,  -109,     0,     0,     0,
       0,  -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -110,     0,     0,     0,
       0,     0,  -110,     0,     0,  -110,     0,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,     0,     0,     0,  -110,     0,     0,     0,     0,  -110,
       0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,   135,     0,     0,     0,     0,     0,
       0,     0,   -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,
     -90,   -94,   -90,   -90,   -90,   -90,   -90,   -90,     0,   -94,
     -94,     0,   -94,   -94,   -94,   -94,   -94,   -94,   135,   -94,
     -94,   -94,   -94,   -94,   -94,     0,   -91,   -91,     0,   -91,
     -91,   -91,   -91,   -91,   -91,   -96,   -91,   -91,   -91,   -91,
     -91,   -91,     0,   -96,   -96,     0,   -96,   -96,   -96,   -96,
     -96,   -96,   135,   -96,   -96,   -96,   -96,   -96,   -96,     0,
     -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,   135,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -93,   -93,     0,
     -93,   -93,   -93,   -93,   -93,   -93,   -95,   -93,   -93,   -93,
     -93,   -93,   -93,     0,   -95,   -95,     0,   -95,   -95,   -95,
     -95,   -95,   -95,   -97,   -95,   -95,   -95,   -95,   -95,   -95,
       0,   -97,   -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,
       0,   -97,   -97,   -97,   -97,   -97,   -97,   -94,     0,     0,
       0,     0,     0,   -94,     0,     0,   -94,     0,   -94,   -94,
     -94,   -94,   -94,   -94,  -120,   -94,   -94,   -94,   -94,   -94,
     -94,     0,  -120,  -120,     0,  -120,  -120,  -120,  -120,  -120,
    -120,  -118,  -120,  -120,  -120,  -120,  -120,  -120,     0,  -118,
    -118,     0,  -118,  -118,  -118,  -118,  -118,  -118,  -117,  -118,
    -118,  -118,  -118,  -118,  -118,     0,  -117,  -117,     0,  -117,
    -117,  -117,  -117,  -117,  -117,  -119,  -117,  -117,  -117,  -117,
    -117,  -117,     0,  -119,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,  -104,  -119,  -119,  -119,  -119,  -119,  -119,     0,
    -104,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,   -66,
    -104,  -104,  -104,  -104,  -104,  -104,     0,   -66,   -66,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -67,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -67,   -67,     0,   -67,   -67,   -67,
     -67,   -67,   -67,   -68,   -67,   -67,   -67,   -67,   -67,   -67,
       0,   -68,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -69,   -69,
       0,   -69,   -69,   -69,   -69,   -69,   -69,  -105,   -69,   -69,
     -69,   -69,   -69,   -69,     0,  -105,  -105,     0,  -105,  -105,
    -105,  -105,  -105,  -105,  -103,  -105,  -105,  -105,  -105,  -105,
    -105,     0,  -103,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,  -108,  -103,  -103,  -103,  -103,  -103,  -103,     0,  -108,
    -108,     0,  -108,  -108,  -108,  -108,  -108,  -108,     0,  -108,
    -108,  -108,  -108,  -108,  -108,   468,     0,     0,     0,   -90,
       0,     0,     0,     0,   -90,     0,   -90,   -90,   -90,   -90,
     -90,   -90,     0,   -90,   -90,   -90,   -90,   -90,   -90,   -94,
       0,     0,     0,   -94,     0,     0,     0,     0,   -94,     0,
     -94,   -94,   -94,   -94,   -94,   -94,     0,   -94,   -94,   -94,
     -94,   -94,   -94,  -120,     0,     0,     0,     0,     0,  -120,
       0,     0,  -120,     0,  -120,  -120,  -120,  -120,  -120,  -120,
       0,  -120,  -120,  -120,  -120,  -120,  -120,  -118,     0,     0,
       0,     0,     0,  -118,     0,     0,  -118,     0,  -118,  -118,
    -118,  -118,  -118,  -118,     0,  -118,  -118,  -118,  -118,  -118,
    -118,  -117,     0,     0,     0,     0,     0,  -117,     0,     0,
    -117,     0,  -117,  -117,  -117,  -117,  -117,  -117,     0,  -117,
    -117,  -117,  -117,  -117,  -117,  -119,     0,     0,     0,     0,
       0,  -119,     0,     0,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,     0,  -119,  -119,  -119,  -119,  -119,  -119,  -104,
       0,     0,     0,     0,     0,  -104,     0,     0,  -104,     0,
    -104,  -104,  -104,  -104,  -104,  -104,     0,  -104,  -104,  -104,
    -104,  -104,  -104,   -66,     0,     0,     0,     0,     0,   -66,
       0,     0,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -67,     0,     0,
       0,     0,     0,   -67,     0,     0,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -68,     0,     0,     0,     0,     0,   -68,     0,     0,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,     0,     0,     0,     0,
       0,   -69,     0,     0,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -69,   -69,   -69,   -69,   -69,   405,
       0,     0,     0,     0,     0,   -91,     0,     0,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,     0,   -91,   -91,   -91,
     -91,   -91,   -91,   -96,     0,     0,     0,     0,     0,   -96,
       0,     0,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,
       0,   -96,   -96,   -96,   -96,   -96,   -96,  -105,     0,     0,
       0,     0,     0,  -105,     0,     0,  -105,     0,  -105,  -105,
    -105,  -105,  -105,  -105,     0,  -105,  -105,  -105,  -105,  -105,
    -105,  -103,     0,     0,     0,     0,     0,  -103,     0,     0,
    -103,     0,  -103,  -103,  -103,  -103,  -103,  -103,     0,  -103,
    -103,  -103,  -103,  -103,  -103,  -108,     0,     0,     0,     0,
       0,  -108,     0,     0,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,  -106,  -108,  -108,  -108,  -108,  -108,  -108,     0,
    -106,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,     0,
    -106,  -106,  -106,  -106,  -106,  -106,  -120,     0,     0,     0,
    -120,     0,     0,     0,     0,  -120,     0,  -120,  -120,  -120,
    -120,  -120,  -120,     0,  -120,  -120,  -120,  -120,  -120,  -120,
    -118,     0,     0,     0,  -118,     0,     0,     0,     0,  -118,
       0,  -118,  -118,  -118,  -118,  -118,  -118,     0,  -118,  -118,
    -118,  -118,  -118,  -118,  -117,     0,     0,     0,  -117,     0,
       0,     0,     0,  -117,     0,  -117,  -117,  -117,  -117,  -117,
    -117,     0,  -117,  -117,  -117,  -117,  -117,  -117,  -119,     0,
       0,     0,  -119,     0,     0,     0,     0,  -119,     0,  -119,
    -119,  -119,  -119,  -119,  -119,     0,  -119,  -119,  -119,  -119,
    -119,  -119,  -104,     0,     0,     0,  -104,     0,     0,     0,
       0,  -104,     0,  -104,  -104,  -104,  -104,  -104,  -104,     0,
    -104,  -104,  -104,  -104,  -104,  -104,   -66,     0,     0,     0,
     -66,     0,     0,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -67,     0,     0,     0,   -67,     0,     0,     0,     0,   -67,
       0,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,     0,     0,     0,   -68,     0,
       0,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -69,     0,
       0,     0,   -69,     0,     0,     0,     0,   -69,     0,   -69,
     -69,   -69,   -69,   -69,   -69,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   468,     0,     0,     0,   -91,     0,     0,     0,
       0,   -91,     0,   -91,   -91,   -91,   -91,   -91,   -91,     0,
     -91,   -91,   -91,   -91,   -91,   -91,   -96,     0,     0,     0,
     -96,     0,     0,     0,     0,   -96,     0,   -96,   -96,   -96,
     -96,   -96,   -96,     0,   -96,   -96,   -96,   -96,   -96,   -96,
    -105,     0,     0,     0,  -105,     0,     0,     0,     0,  -105,
       0,  -105,  -105,  -105,  -105,  -105,  -105,     0,  -105,  -105,
    -105,  -105,  -105,  -105,  -103,     0,     0,     0,  -103,     0,
       0,     0,     0,  -103,     0,  -103,  -103,  -103,  -103,  -103,
    -103,     0,  -103,  -103,  -103,  -103,  -103,  -103,  -108,     0,
       0,     0,  -108,     0,     0,     0,     0,  -108,     0,  -108,
    -108,  -108,  -108,  -108,  -108,     0,  -108,  -108,  -108,  -108,
    -108,  -108,  -106,     0,     0,     0,     0,     0,  -106,     0,
       0,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,     0,
    -106,  -106,  -106,  -106,  -106,  -106,   405,     0,     0,     0,
       0,     0,   -92,     0,     0,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,     0,   -92,   -92,   -92,   -92,   -92,   -92,
     405,     0,     0,     0,     0,     0,   -93,     0,     0,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,     0,   -93,   -93,
     -93,   -93,   -93,   -93,   -95,     0,     0,     0,     0,     0,
     -95,     0,     0,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,  -121,   -95,   -95,   -95,   -95,   -95,   -95,     0,  -121,
    -121,     0,  -121,  -121,  -121,  -121,  -121,  -121,     0,  -121,
    -121,  -121,  -121,  -121,  -121,  -106,     0,     0,     0,  -106,
       0,     0,     0,     0,  -106,     0,  -106,  -106,  -106,  -106,
    -106,  -106,     0,  -106,  -106,  -106,  -106,  -106,  -106,   468,
       0,     0,     0,   -92,     0,     0,     0,     0,   -92,     0,
     -92,   -92,   -92,   -92,   -92,   -92,     0,   -92,   -92,   -92,
     -92,   -92,   -92,   468,     0,     0,     0,   -93,     0,     0,
       0,     0,   -93,     0,   -93,   -93,   -93,   -93,   -93,   -93,
       0,   -93,   -93,   -93,   -93,   -93,   -93,   -95,     0,     0,
       0,   -95,     0,     0,     0,     0,   -95,     0,   -95,   -95,
     -95,   -95,   -95,   -95,     0,   -95,   -95,   -95,   -95,   -95,
     -95,   -97,     0,     0,     0,     0,     0,   -97,     0,     0,
     -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,     0,   -97,
     -97,   -97,   -97,   -97,   -97,  -121,     0,     0,     0,     0,
       0,  -121,     0,     0,  -121,     0,  -121,  -121,  -121,  -121,
    -121,  -121,  -107,  -121,  -121,  -121,  -121,  -121,  -121,     0,
    -107,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,   -70,
    -107,  -107,  -107,  -107,  -107,  -107,     0,   -70,   -70,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -72,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -72,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -71,   -72,   -72,   -72,   -72,   -72,   -72,
       0,   -71,   -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -73,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -73,   -73,
       0,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,
     -73,   -73,   -73,   -73,   -97,     0,     0,     0,   -97,     0,
       0,     0,     0,   -97,     0,   -97,   -97,   -97,   -97,   -97,
     -97,     0,   -97,   -97,   -97,   -97,   -97,   -97,  -121,     0,
       0,     0,  -121,     0,     0,     0,     0,  -121,     0,  -121,
    -121,  -121,  -121,  -121,  -121,     0,  -121,  -121,  -121,  -121,
    -121,  -121,  -107,     0,     0,     0,     0,     0,  -107,     0,
       0,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,     0,
    -107,  -107,  -107,  -107,  -107,  -107,   -70,     0,     0,     0,
       0,     0,   -70,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -72,     0,     0,     0,     0,     0,   -72,     0,     0,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,     0,     0,     0,     0,     0,
     -71,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -73,     0,
       0,     0,     0,     0,   -73,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
     -73,   -73,  -107,     0,     0,     0,  -107,     0,     0,     0,
       0,  -107,     0,  -107,  -107,  -107,  -107,  -107,  -107,     0,
    -107,  -107,  -107,  -107,  -107,  -107,   -70,     0,     0,     0,
     -70,     0,     0,     0,     0,   -70,     0,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -72,     0,     0,     0,   -72,     0,     0,     0,     0,   -72,
       0,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,   -72,
     -72,   -72,   -72,   -72,   -71,     0,     0,     0,   -71,     0,
       0,     0,     0,   -71,     0,   -71,   -71,   -71,   -71,   -71,
     -71,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -73,     0,
       0,     0,   -73,     0,     0,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -73,  -109,   -73,   -73,   -73,   -73,
     -73,   -73,     0,  -109,  -109,     0,  -109,  -109,  -109,  -109,
    -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,  -109,  -109,
       0,     0,     0,     0,     0,  -109,     0,     0,  -109,     0,
    -109,  -109,  -109,  -109,  -109,  -109,  -110,  -109,  -109,  -109,
    -109,  -109,  -109,     0,  -110,  -110,     0,  -110,  -110,  -110,
    -110,  -110,  -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,
    -109,     0,     0,     0,  -109,     0,     0,     0,     0,  -109,
       0,  -109,  -109,  -109,  -109,  -109,  -109,     0,  -109,  -109,
    -109,  -109,  -109,  -109,  -110,     0,     0,     0,     0,     0,
    -110,     0,     0,  -110,     0,  -110,  -110,  -110,  -110,  -110,
    -110,     0,  -110,  -110,  -110,  -110,  -110,  -110,  -110,     0,
       0,     0,  -110,     0,     0,     0,     0,  -110,     0,  -110,
    -110,  -110,  -110,  -110,  -110,     0,  -110,  -110,  -110,  -110,
    -110,  -110,   -87,     0,     0,     0,     0,   -87,     0,   466,
     467,   -87,   -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -89,     0,     0,     0,     0,   -89,     0,   466,
     467,   -89,   -89,   -89,   -89,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -88,     0,     0,     0,     0,   -88,     0,   466,
     467,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -84,     0,     0,     0,     0,   -84,     0,     0,
       0,   462,   463,   464,   465,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,     0,     0,   -85,     0,   403,   404,   -85,
     -85,   -85,   -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,
     -86,     0,     0,   -86,     0,   403,   404,   -86,   -86,   -86,
     -86,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -87,     0,
       0,   -87,     0,   403,   404,   -87,   -87,   -87,   -87,     0,
     -87,   -87,   -87,   -87,   -87,   -87,   -89,     0,     0,   -89,
       0,   403,   404,   -89,   -89,   -89,   -89,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -88,     0,     0,   -88,     0,   403,
     404,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -80,     0,     0,   -80,     0,     0,     0,   399,
     400,   401,   402,     0,   -80,   -80,   -80,   -80,   -80,   -80,
     -81,     0,     0,   -81,     0,     0,     0,   399,   400,   401,
     402,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -82,     0,
       0,   -82,     0,     0,     0,   399,   400,   401,   402,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -83,     0,     0,   -83,
       0,     0,     0,   399,   400,   401,   402,     0,   -83,   -83,
     -83,   -83,   -83,   -83,   -84,     0,     0,   -84,     0,     0,
       0,   399,   400,   401,   402,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -85,   -85,     0,   133,   134,   -85,   -85,   -85,
     -85,     0,   -85,   -85,   -85,   -85,   -85,   -85,   -86,   -86,
       0,   133,   134,   -86,   -86,   -86,   -86,     0,   -86,   -86,
     -86,   -86,   -86,   -86,   -87,   -87,     0,   133,   134,   -87,
     -87,   -87,   -87,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -89,   -89,     0,   133,   134,   -89,   -89,   -89,   -89,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -88,   -88,     0,   133,
     134,   -88,   -88,   -88,   -88,     0,   -88,   -88,   -88,   -88,
     -88,   -88,   -79,   -79,     0,     0,     0,   129,   130,   131,
     132,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -80,   -80,
       0,     0,     0,   129,   130,   131,   132,     0,   -80,   -80,
     -80,   -80,   -80,   -80,   -81,   -81,     0,     0,     0,   129,
     130,   131,   132,     0,   -81,   -81,   -81,   -81,   -81,   -81,
     -82,   -82,     0,     0,     0,   129,   130,   131,   132,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -83,   -83,     0,     0,
       0,   129,   130,   131,   132,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -84,   -84,     0,     0,     0,   129,   130,   131,
     132,     0,   -84,   -84,   -84,   -84,   -84,   -84
};

static const yytype_int16 yycheck[] =
{
      30,    23,    66,   186,   139,    27,   100,    92,    29,   236,
       5,     5,     0,   142,   186,   186,     4,    47,    28,    29,
       5,   250,     8,     3,   186,   103,     0,   189,     8,    23,
     115,    26,    62,    63,    22,    21,    66,    28,    29,    27,
       8,    26,   204,    29,   206,    25,    14,     5,   277,    35,
       3,     5,   214,    21,   216,     8,   218,     0,   287,     2,
      26,     4,    26,    29,     3,    23,     5,    35,   197,     8,
     148,   149,    25,   103,    23,    28,   106,   107,   186,    22,
       0,   310,    26,     0,    27,     5,    25,    30,     5,    28,
      25,   185,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   201,   186,     3,
       5,     3,   142,   340,     8,   103,     8,     3,   148,   149,
       5,    25,     8,    66,    92,     1,   220,     3,    23,     5,
       3,    25,   162,    25,    28,     8,    28,    26,    23,    25,
      29,     1,    28,     3,     1,     5,     3,   115,     5,   378,
      26,    25,    25,     3,     5,    28,   186,     0,     8,   189,
     103,   390,     5,    25,   186,     3,    26,   197,   352,    26,
     354,   201,    23,    25,   204,    25,   206,   361,     3,     4,
     309,     6,     7,     1,   214,     3,   216,     5,   218,    25,
     220,     1,    17,    18,    19,     5,    21,    22,    23,    24,
      25,    25,     0,    25,   289,    30,   236,     5,    26,    34,
      25,   186,   441,     3,     5,     5,   237,   352,     8,   354,
       0,   251,    28,    29,   453,     5,   361,     3,     4,     5,
       6,     7,    23,   362,    25,    25,    26,    28,    29,     3,
      25,    17,    18,    19,     8,    21,    22,     5,   278,    25,
       5,   237,    28,    26,    30,     3,    29,     5,    34,   227,
       8,    25,     5,   231,     3,    23,    26,    25,   362,     3,
      28,    29,   293,    26,     8,    26,    29,    25,   407,   309,
      23,   311,   312,    28,   419,    28,    29,    28,     5,    26,
     233,    25,    26,   236,   358,   424,     3,     4,    26,     6,
       7,    25,    26,   333,     3,    29,    23,   293,    25,     8,
     340,    28,    29,   407,    21,    28,    29,    26,    25,     3,
       4,   289,     6,     7,     5,    26,    25,    26,   358,    26,
     424,    26,    29,    17,    18,    19,     5,    21,    22,    23,
      24,    25,    23,    26,    25,    25,    30,    28,    29,   379,
      34,    28,     0,     0,    23,    25,    25,     5,     5,    28,
      29,     5,    25,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   505,     3,     0,    23,
      25,    25,     8,     5,    28,    29,     3,     4,     0,     6,
       7,    25,    26,     5,    25,    29,   474,   340,     0,    25,
      17,    18,    19,     5,    21,    22,    23,    24,    25,     0,
      25,   505,   442,    30,     5,   358,   480,    34,     3,     0,
     549,    25,    26,     8,     5,    29,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
      25,    26,    28,    29,   474,     5,   629,   477,   478,   632,
     480,    24,   546,    25,     3,   549,    29,   629,   629,     8,
     632,   632,    25,    23,    26,    25,   595,   629,    28,    29,
     632,   654,    26,   656,   504,    25,    25,    26,    28,    29,
      26,   610,   654,   654,   656,   656,   474,   670,    24,   672,
     619,   674,   654,    29,   656,    26,   574,   575,   670,   670,
     672,   672,   674,   674,   534,   535,    24,    26,   670,     5,
     672,    29,   674,   642,    24,    24,   546,    25,   548,    29,
      29,   629,   651,    24,   632,    24,    26,    23,    29,    25,
      29,   474,    28,    29,    24,    24,    24,   480,    24,    29,
      29,    29,    24,    29,   574,   575,   654,    29,   656,    25,
      24,   629,    28,    29,   632,    29,    38,    39,    40,    41,
      42,    43,   670,    26,   672,   595,   674,    25,    30,   663,
      24,     3,   666,   603,   668,    29,   654,    24,   656,    25,
     610,    26,    29,   677,    29,    47,    25,   681,    26,   619,
      26,    29,   670,    29,   672,    25,   674,   627,   628,   629,
      62,    63,   632,    26,    66,    25,    29,   629,    28,    29,
     632,    26,   642,    25,    29,    38,    39,    40,    41,    42,
      43,   651,    26,    25,   654,    29,   656,    25,    26,    28,
      29,    29,   654,   663,   656,    25,   666,    25,   668,    25,
     670,   103,   672,    26,   674,    25,    26,   677,   670,    29,
     672,   681,   674,    25,   629,    25,    26,   632,    25,    29,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    26,    28,    29,    29,   654,
     142,   656,    28,    29,    25,    26,   148,   149,    29,    25,
      26,    26,    25,    29,    29,   670,    25,   672,     3,   674,
     162,     1,    26,     3,     4,    29,     6,     7,    26,     9,
      10,    11,    12,    26,    14,    15,    16,    17,    18,    19,
      26,    21,    22,    23,   186,    25,     3,   189,    28,    26,
      30,    25,    25,    26,    34,   197,    29,    25,    25,   201,
      28,    29,   204,    25,   206,     3,     4,    25,     6,     7,
      28,    29,   214,    25,   216,    26,   218,    26,   220,    17,
      18,    19,    26,    21,    22,    23,    24,    25,    24,    26,
      25,    26,    30,    29,   236,    26,    34,    33,    34,    35,
      36,     3,    38,    39,    40,    41,    42,    43,    26,   251,
     252,     1,    26,     3,     4,     5,     6,     7,    26,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      26,    21,    22,    23,    24,    25,   278,     3,    28,    26,
      30,    26,     3,     4,    34,     6,     7,    25,    26,    25,
       4,    29,    28,    29,    25,    26,    17,    18,    19,    26,
      21,    22,    23,    26,    25,    99,    29,   309,    26,   311,
     312,    29,     1,    34,     3,     4,     5,     6,     7,    26,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   333,    21,    22,    23,    24,    25,    28,   340,    28,
      25,    30,    26,    28,    29,    34,    25,    26,    26,     1,
      29,     3,     4,     5,     6,     7,   358,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    28,    21,
      22,    23,    24,    25,    28,    29,    28,   379,    30,    25,
      26,    28,    34,    29,    38,    39,    40,    41,    42,    43,
      35,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     1,    -1,     3,     4,     5,     6,
       7,   112,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      20,    28,    -1,    30,    -1,    25,    -1,    34,    28,    29,
     442,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,    25,    26,
      -1,     1,   474,     3,     4,     5,     6,     7,   480,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    28,    29,    28,    -1,
      30,    -1,   504,    26,    34,    26,    29,     1,    29,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,   534,   535,    28,    25,    30,    -1,    28,    29,
      34,    25,    26,    -1,   546,    29,   548,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,   574,   575,    28,    26,    30,    -1,    29,    -1,
      34,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,   595,    26,    26,    30,    29,    29,    -1,
      26,   603,   604,    29,    26,    -1,    26,    29,   610,    29,
      -1,    26,    26,    47,    29,    29,    -1,   619,    -1,     3,
       4,     5,     6,     7,    -1,   627,   628,   629,    62,    63,
     632,    -1,    66,    17,    18,    19,    26,    21,    22,    29,
     642,    25,    25,    26,    26,    26,    30,    29,    29,   651,
      34,    -1,   654,    26,   656,    26,    29,    26,    29,    26,
      29,   663,    29,    -1,   666,    -1,   668,    -1,   670,   103,
     672,    26,   674,    26,    29,   677,    29,    26,    26,   681,
      29,    29,    26,    26,    26,    29,    29,    29,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    26,    26,    -1,    29,    29,   142,    26,
      26,    -1,    29,    29,   148,   149,    26,    26,    -1,    29,
      29,     1,    -1,     3,     4,     5,     6,     7,   162,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    28,    29,    28,    -1,
      30,    -1,   186,    26,    34,   189,    29,    26,    26,    26,
      29,    29,    29,   197,    -1,    26,    26,   201,    29,    29,
     204,    -1,   206,     3,     4,    26,     6,     7,    29,    -1,
     214,    -1,   216,    -1,   218,    -1,   220,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    28,    29,    26,    -1,
      30,    29,   236,    26,    34,    26,    29,    -1,    29,    -1,
       1,    -1,     3,     4,     5,     6,     7,   251,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    28,    29,    28,    26,    30,
      -1,    29,    26,    34,   278,    29,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    20,    28,   309,    30,   311,   312,    -1,
      34,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    26,    26,   333,
      29,    29,    28,    29,    -1,     1,   340,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   358,    21,    22,    23,    24,    25,
      25,    26,    28,    26,    30,    20,    29,    -1,    34,    26,
      25,    26,    29,    -1,    29,   379,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    20,    28,
      -1,    30,    24,    25,    -1,    34,    -1,    29,   442,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,    28,    29,    -1,     1,
     474,     3,     4,     5,     6,     7,   480,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    28,    29,    28,    -1,    30,    -1,
     504,    26,    34,    26,    29,     1,    29,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
     534,   535,    28,    26,    30,    -1,    29,    26,    34,    -1,
      29,    -1,   546,    26,   548,     1,    29,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
     574,   575,    28,    -1,    30,    25,    26,    -1,    34,    25,
      26,    -1,     3,     4,    -1,     6,     7,    25,    26,    -1,
      -1,   595,    25,    26,    30,    -1,    17,    18,    19,   603,
      21,    22,    23,    24,    25,    -1,   610,    25,    26,    30,
      -1,    47,    -1,    34,    -1,   619,    -1,     3,     4,    -1,
       6,     7,    -1,   627,   628,   629,    62,    63,   632,    -1,
      66,    17,    18,    19,    -1,    21,    22,    23,   642,    25,
      25,    26,    25,    26,    30,    25,    26,   651,    34,    -1,
     654,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,   663,
      -1,    -1,   666,    -1,   668,    -1,   670,   103,   672,    -1,
     674,    -1,    -1,   677,    -1,    -1,    -1,   681,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,   162,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
     186,    -1,    34,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,   201,    -1,    -1,   204,    -1,
     206,     3,     4,    -1,     6,     7,    -1,    -1,   214,    -1,
     216,    -1,   218,    -1,   220,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
     236,    -1,    34,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,   251,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    34,   278,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    20,    28,   309,    30,   311,   312,    -1,    34,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,   333,    -1,    -1,
      -1,    -1,    -1,     1,   340,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   358,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    20,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    28,    29,   379,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    20,    28,    -1,    30,
      -1,    -1,    -1,    34,    28,    29,   442,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,    -1,    -1,    -1,     1,   474,     3,
       4,     5,     6,     7,   480,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,   504,    -1,
      34,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,   534,   535,
      28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
     546,    -1,   548,     1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,   574,   575,
      28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,   595,
      -1,    -1,    30,    -1,    17,    18,    19,   603,    21,    22,
      23,    24,    25,    -1,   610,    -1,    -1,    30,    -1,    47,
      -1,    34,    -1,   619,    -1,     3,     4,    -1,     6,     7,
      -1,   627,   628,   629,    62,    63,   632,    -1,    66,    17,
      18,    19,    -1,    21,    22,    23,   642,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,   651,    34,    -1,   654,    -1,
     656,    -1,    -1,    -1,    -1,    -1,    -1,   663,    -1,    -1,
     666,    -1,   668,    -1,   670,   103,   672,    -1,   674,    -1,
      -1,   677,    -1,    -1,    -1,   681,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
      -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   162,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,   186,    -1,
      34,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,   201,    -1,    -1,   204,    -1,   206,     3,
       4,    -1,     6,     7,    -1,    -1,   214,    -1,   216,    -1,
     218,    -1,   220,    17,    18,    19,    -1,    21,    22,    -1,
      -1,    25,    -1,    -1,    28,    -1,    30,    -1,   236,    -1,
      34,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,   251,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,     1,    34,     3,     4,     5,     6,     7,
     278,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,   309,    -1,   311,   312,    -1,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,   333,    21,    22,    23,    24,
      25,    -1,   340,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     7,
     358,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,   379,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    20,    28,    -1,    30,    -1,    -1,
      -1,    34,    28,    29,   442,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,    -1,    -1,    -1,     1,   474,     3,     4,     5,
       6,     7,   480,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,   504,    -1,    34,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,   534,   535,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,   546,    -1,
     548,     1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,   574,   575,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,    -1,    -1,    -1,    -1,   595,    -1,    -1,
      30,    -1,    17,    18,    19,   603,    21,    22,    -1,    -1,
      25,    26,   610,    -1,    -1,    30,    -1,    47,    -1,    34,
      -1,   619,    -1,     3,     4,    -1,     6,     7,    -1,   627,
     628,   629,    62,    63,   632,    -1,    66,    17,    18,    19,
      -1,    21,    22,    -1,   642,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,   651,    34,    -1,   654,    -1,   656,    -1,
      -1,    -1,    -1,    -1,    -1,   663,    -1,    -1,   666,    -1,
     668,    -1,   670,   103,   672,    -1,   674,    -1,    -1,   677,
      -1,    -1,    -1,   681,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,   148,   149,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,   162,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,   186,    -1,    -1,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,
      -1,   201,    -1,    -1,   204,    -1,   206,     3,     4,    -1,
       6,     7,    -1,    -1,   214,    -1,   216,    -1,   218,    -1,
     220,    17,    18,    19,    -1,    21,    22,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    -1,   236,    -1,    34,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,   251,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,     1,    34,     3,     4,     5,     6,     7,   278,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,   309,
      -1,   311,   312,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,   333,    21,    22,    23,    24,    25,    -1,
     340,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     7,   358,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,   379,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    20,    28,    -1,    30,    -1,    -1,    -1,    34,
      28,    29,   442,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
      -1,    -1,    -1,     1,   474,     3,     4,     5,     6,     7,
     480,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,   504,    -1,    34,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,   534,   535,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,   546,    -1,   548,     1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,   574,   575,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    -1,    -1,    -1,    -1,   595,    -1,    -1,    30,    -1,
      17,    18,    19,   603,    21,    22,    -1,    -1,    25,    26,
     610,    -1,    -1,    30,    -1,    47,    -1,    34,    -1,   619,
      -1,     3,     4,    -1,     6,     7,    -1,   627,   628,   629,
      62,    63,   632,    -1,    66,    17,    18,    19,    -1,    21,
      22,    -1,   642,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,   651,    34,    -1,   654,    -1,   656,    -1,    -1,    -1,
      -1,    -1,    -1,   663,    -1,    -1,   666,    -1,   668,    -1,
     670,   103,   672,    -1,   674,    -1,    -1,   677,    -1,    -1,
      -1,   681,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,   148,   149,     1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    11,    12,
     162,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    34,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,   201,
      -1,    -1,   204,    -1,   206,     3,     4,    -1,     6,     7,
      -1,    -1,   214,    -1,   216,    -1,   218,    -1,   220,    17,
      18,    19,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    30,    -1,   236,    -1,    34,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,   251,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,     1,
      34,     3,     4,     5,     6,     7,   278,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,   309,    -1,   311,
     312,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,   333,    21,    22,    23,    24,    25,    -1,   340,    28,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,   358,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,   379,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,     1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      20,    28,    -1,    30,    -1,    -1,    -1,    34,    28,    29,
     442,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,    -1,    -1,
      -1,     1,   474,     3,     4,     5,     6,     7,   480,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,   504,    -1,    34,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,   534,   535,    28,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,   546,    -1,   548,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,   574,   575,    28,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,
      -1,    -1,    -1,   595,    -1,    -1,    30,    -1,    17,    18,
      19,   603,    21,    22,    -1,    -1,    25,    26,   610,    -1,
      -1,    30,    -1,    47,    -1,    34,    -1,   619,    -1,     3,
       4,    -1,     6,     7,    -1,   627,   628,   629,    62,    63,
     632,    -1,    66,    17,    18,    19,    -1,    21,    22,    -1,
     642,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,   651,
      34,    -1,   654,    -1,   656,    -1,    -1,    -1,    -1,    -1,
      -1,   663,    -1,    -1,   666,    -1,   668,    -1,   670,   103,
     672,    -1,   674,    -1,    -1,   677,    -1,    -1,    -1,   681,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,   148,   149,     1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,   162,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,   186,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,   201,    -1,    -1,
     204,    -1,   206,     3,     4,    -1,     6,     7,    -1,    -1,
     214,    -1,   216,    -1,   218,    -1,   220,    17,    18,    19,
      -1,    21,    22,    -1,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,   236,    -1,    34,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,   251,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,     1,    34,     3,
       4,     5,     6,     7,   278,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,   309,    -1,   311,   312,    -1,
       1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,   333,
      21,    22,    23,    24,    25,    -1,   340,    28,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     7,   358,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    28,   379,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    20,    28,
      -1,    30,    -1,    -1,    -1,    34,    28,    29,   442,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,    -1,    -1,    -1,     1,
     474,     3,     4,     5,     6,     7,   480,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
     504,    -1,    34,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
     534,   535,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,   546,    -1,   548,     1,    -1,     3,     4,    -1,
       6,     7,    -1,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    -1,    25,
     574,   575,    28,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    -1,
      -1,   595,    -1,    -1,    30,    -1,    17,    18,    19,   603,
      21,    22,    -1,    -1,    25,    26,   610,    -1,    -1,    30,
      -1,    47,    -1,    34,    -1,   619,    -1,     3,     4,    -1,
       6,     7,    -1,   627,   628,   629,    62,    63,   632,    -1,
      66,    17,    18,    19,    -1,    21,    22,    -1,   642,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,   651,    34,    -1,
     654,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,   663,
      -1,    -1,   666,    -1,   668,    -1,   670,   103,   672,    -1,
     674,    -1,    -1,   677,    -1,    -1,    -1,   681,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     3,     4,    -1,     6,     7,   142,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    17,    18,    19,    -1,    21,
      22,     3,     4,    25,     6,     7,   162,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
     186,    -1,    34,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,   201,    -1,    -1,   204,    -1,
     206,     3,     4,    -1,     6,     7,    -1,    -1,   214,    -1,
     216,    -1,   218,    -1,   220,    17,    18,    19,    -1,    21,
      22,     3,     4,    25,     6,     7,    -1,    -1,    30,    -1,
     236,    -1,    34,    -1,    -1,    17,    18,    19,    -1,    21,
      22,    -1,    -1,    25,    -1,   251,     3,     4,    30,     6,
       7,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,     3,     4,    25,     6,
       7,    -1,   278,    30,    -1,    -1,    -1,    34,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    34,     6,     7,
      -1,    -1,    -1,   309,    -1,   311,   312,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    23,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,   333,     3,     4,
      -1,     6,     7,    -1,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    23,    -1,
      25,    -1,   358,     3,     4,    -1,     6,     7,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      -1,    21,    22,   379,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    28,    29,   442,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,    -1,    -1,     3,     4,   474,     6,
       7,    -1,    -1,    -1,   480,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    22,    23,    -1,    25,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    34,   504,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   534,   535,
       3,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,    -1,
     546,    -1,   548,    -1,    17,    18,    19,    -1,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,    34,    -1,    -1,    -1,    -1,    -1,    -1,   574,   575,
      17,    18,    19,    -1,    21,    22,    23,    -1,    25,    -1,
       3,     4,    -1,     6,     7,    -1,    -1,    34,    -1,   595,
      -1,    -1,    30,    -1,    17,    18,    19,   603,    21,    22,
      -1,    -1,    25,    -1,   610,    -1,    -1,    -1,    -1,    47,
      -1,    34,    -1,   619,    -1,     3,     4,    -1,     6,     7,
      -1,   627,   628,   629,    62,    63,   632,    -1,    66,    17,
      18,    19,    -1,    21,    22,    -1,   642,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   651,    34,    -1,   654,    -1,
     656,    -1,    -1,    -1,    -1,    -1,    -1,   663,    -1,    -1,
     666,    -1,   668,    -1,   670,   103,   672,    -1,   674,    -1,
      -1,   677,    -1,    -1,    -1,   681,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     3,
       4,    -1,     6,     7,   142,    -1,    -1,    -1,    -1,    -1,
     148,   149,    -1,    17,    18,    19,    -1,    21,    22,     3,
       4,    25,     6,     7,   162,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    17,    18,    19,    -1,    21,    22,     3,
       4,    25,     6,     7,    -1,    -1,    -1,    -1,   186,    -1,
      34,   189,    -1,    17,    18,    19,    -1,    21,    22,   197,
      -1,    25,    -1,   201,    -1,    -1,   204,    -1,   206,    -1,
      34,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,    -1,
     218,    -1,   220,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,   236,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,   252,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,   309,    -1,   311,   312,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,   333,    30,    -1,    -1,    -1,
      -1,    -1,   340,    20,    -1,    -1,    -1,    -1,    25,    -1,
      -1,    28,    29,    47,    31,    32,    33,    34,    35,    36,
     358,    38,    39,    40,    41,    42,    43,    -1,    62,    -1,
      -1,    20,    66,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,   379,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,   405,    -1,   103,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,   136,    -1,   442,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,   148,   149,    -1,    -1,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,    -1,    28,    29,    -1,   474,    -1,    33,    34,
      35,    36,   480,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,   186,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,   504,   201,    -1,    -1,
     204,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   216,    -1,   218,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   534,   535,    -1,    -1,
      -1,    -1,   236,    -1,    -1,    -1,    -1,    20,   546,    -1,
     548,    -1,    -1,    -1,    -1,    28,    29,   251,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    20,    -1,    -1,    -1,    -1,   574,   575,    -1,    28,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,   595,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   603,   604,    -1,    -1,    -1,
      -1,    -1,   610,    -1,    -1,   309,    -1,   311,    -1,    -1,
      -1,   619,    -1,    30,    -1,    -1,    -1,    -1,    -1,   627,
     628,   629,    -1,    -1,   632,    -1,    -1,    -1,    -1,   333,
      47,    -1,    -1,    -1,   642,    -1,   340,    -1,    -1,    -1,
      -1,    -1,    -1,   651,    -1,    -1,   654,    -1,   656,    66,
      -1,    -1,    -1,    -1,   358,   663,    -1,    -1,   666,    -1,
     668,    -1,   670,    -1,   672,    24,   674,    -1,    -1,   677,
      29,    -1,    -1,   681,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,
     404,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    -1,   142,    20,    -1,    -1,    -1,
      -1,   148,   149,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,    -1,   469,    -1,    -1,    -1,   186,
     474,    -1,   189,    -1,    -1,    -1,   480,    -1,    -1,    -1,
     197,    -1,    -1,    -1,   201,    -1,    -1,   204,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,
      -1,   218,    -1,   220,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,   236,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,   546,    28,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
     574,   575,    28,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,   595,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,   610,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   619,   333,    -1,    -1,    -1,
      47,    -1,    -1,   340,    -1,   629,    -1,    -1,   632,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   642,    66,
      -1,   358,    -1,    -1,    -1,    -1,    -1,   651,    -1,    -1,
     654,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,   663,
      -1,    -1,   666,    -1,   668,    -1,   670,    -1,   672,    -1,
     674,    -1,    -1,   677,    -1,    -1,   103,   681,    -1,    -1,
      -1,    -1,   399,   400,   401,   402,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    20,   142,    -1,    -1,    -1,    -1,
      26,   148,   149,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,    -1,
      -1,    -1,   469,    -1,    -1,    -1,    -1,   474,    -1,   186,
      -1,    -1,   189,   480,    -1,    -1,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,   201,    -1,    -1,   204,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,   216,
      -1,   218,    20,   220,    -1,    -1,    -1,    25,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,   236,
      38,    39,    40,    41,    42,    43,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,   546,
      -1,    -1,    28,    29,    47,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      20,    -1,    -1,    66,    -1,    -1,    26,   574,   575,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,   595,    -1,
      -1,    -1,   309,    -1,    -1,    -1,    -1,   100,    -1,    -1,
     103,    -1,    -1,   610,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   619,    -1,    -1,    -1,   333,    30,    -1,   122,
      -1,    -1,   629,   340,    -1,   632,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    47,   642,    -1,    -1,    -1,   142,
      -1,   358,    -1,    -1,   651,   148,   149,   654,    -1,   656,
      -1,    -1,    -1,    66,    -1,    -1,   663,    -1,    -1,   666,
      -1,   668,    -1,   670,    -1,   672,    -1,   674,    -1,    -1,
     677,    -1,    -1,    -1,   681,    -1,   393,   394,   395,   396,
     397,   398,   185,   186,    -1,    -1,   189,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   197,    -1,    -1,    -1,   201,    -1,
      -1,   204,    -1,   206,    -1,    -1,    -1,    -1,    -1,   122,
      -1,   214,    -1,   216,    -1,   218,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,   236,    -1,   148,   149,    -1,    -1,   456,
     457,   458,   459,   460,   461,    -1,    -1,    -1,    -1,    -1,
      24,    -1,   469,    -1,    -1,    29,    -1,   474,    -1,    33,
      34,    35,    36,   480,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,   186,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,   201,    -1,
      -1,   204,    -1,   206,    -1,    -1,   299,    -1,    -1,    24,
      -1,   214,    -1,   216,    29,   218,   309,   220,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,   236,    -1,    -1,    -1,    20,    -1,   546,
     333,    -1,    -1,    26,    -1,    -1,    29,   340,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    20,   358,    -1,   574,   575,   362,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   595,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   610,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,   619,   406,   407,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   629,    -1,    -1,   632,    -1,    -1,    -1,    -1,
     333,   424,    -1,    -1,    -1,   642,    -1,   340,    -1,    -1,
      -1,    -1,    -1,    -1,   651,    -1,    -1,   654,    -1,   656,
      -1,    -1,    -1,    -1,    -1,   358,   663,    -1,    -1,   666,
      -1,   668,    -1,   670,    -1,   672,    -1,   674,    -1,    -1,
     677,    -1,    -1,    47,   681,    -1,   469,    -1,    -1,    20,
      -1,   474,    -1,    -1,    -1,    26,    60,   480,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,   505,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   102,   103,
     104,   105,    -1,    24,    -1,   109,   110,   111,    29,    -1,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,   546,    -1,    -1,   549,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,
      -1,   474,    -1,    -1,   148,   149,    -1,   480,    20,   153,
      -1,   574,   575,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,   595,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,   186,   187,   188,    26,    -1,   610,    29,    -1,
      31,    32,    33,    34,    35,    36,   619,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,   629,    -1,    26,   632,
      -1,    29,    -1,   546,    -1,    33,    34,    35,    36,   642,
      38,    39,    40,    41,    42,    43,    -1,    -1,   651,    -1,
      -1,   654,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,
     663,   574,   575,   666,    -1,   668,   250,   670,    -1,   672,
      -1,   674,    -1,    -1,   677,    -1,    -1,    -1,   681,    -1,
      -1,    -1,   595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,    -1,    -1,   610,    -1,    -1,
      -1,    -1,    -1,   287,    -1,    -1,   619,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   629,    -1,    -1,   632,
      -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,   642,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   651,    -1,
      -1,   654,    -1,   656,    -1,    -1,    -1,    -1,    -1,   333,
     663,    -1,    -1,   666,    -1,   668,    -1,   670,    -1,   672,
      24,   674,    -1,    -1,   677,    29,    -1,    -1,   681,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
     364,   365,   366,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   378,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,   390,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,   409,   410,   411,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,   426,   427,   428,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    -1,   441,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,   453,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    20,    -1,   473,
     474,   475,   476,    26,    -1,    -1,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,   507,   508,   509,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,   551,   552,   553,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
     574,   575,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,   629,   630,   631,   632,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
     654,    -1,   656,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    24,    -1,   670,    -1,   672,    29,
     674,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
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
      42,    43,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    24,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    26,    -1,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    43,
      26,    -1,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    26,    -1,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    26,    -1,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    26,    -1,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    43,    26,    -1,    -1,    29,    -1,    -1,    -1,    33,
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
      36,    -1,    38,    39,    40,    41,    42,    43
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
       3,    60,    23,    79,    90,    91,    28,    78,    53,    67,
      78,    78,     3,    25,    92,    92,     3,    78,    78,    78,
      86,    26,    26,    56,    61,    79,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    83,    83,    84,    79,
      26,    26,    59,    90,    26,    29,    26,    67,    67,    26,
      26,    26,    26,    26,    26,    26,    26,    23,    84,    26,
      24,    29,    91,    66,    26,    78,    26,    78,    66,    28,
      28,    28,    90,    24,    13,    66,    26,    66,    26,    24,
      29,    66,    66,    66,    24,     3,     8,    25,    57,     3,
       8,    25,    57,     5,    28,    55,    23,    54,     3,     8,
      57,     3,     4,     6,     7,    17,    18,    19,    21,    22,
      25,    30,    34,    73,    74,    75,    76,    77,    79,    80,
      81,    82,    83,    84,    87,    88,    89,    92,     3,     4,
       6,     7,    17,    18,    19,    21,    22,    25,    34,    73,
      74,    75,    76,    77,    88,    89,    92,    25,    87,    25,
      56,    62,    28,    54,    78,     4,     6,     7,    21,    29,
       3,     4,     6,     7,    17,    18,    19,    21,    22,    23,
      25,    30,    34,    73,    74,    75,    76,    77,    79,    80,
      81,    82,    83,    84,    87,    88,    89,    91,    92,    28,
      78,    78,     1,     9,    10,    11,    12,    14,    15,    16,
      23,    28,    63,    67,    68,    69,    70,    71,    72,    78,
      91,    56,    25,    56,    25,    54,    28,    24,    64,    28,
      55,    25,    25,    25,    25,    25,    25,    78,    85,     3,
       4,     6,     7,    17,    18,    19,    21,    22,    25,    34,
      73,    74,    75,    76,    77,    83,    87,    88,    89,    92,
      25,    84,    87,    38,    39,    40,    41,    42,    43,    33,
      34,    35,    36,    31,    32,    20,    37,    25,    25,    25,
      25,    25,    78,    85,    84,    85,    26,    61,    26,    25,
      28,    55,    28,    79,    25,    25,    25,    25,    25,    90,
      78,    85,     3,     4,     6,     7,    17,    18,    19,    21,
      22,    25,    34,    73,    74,    75,    76,    77,    83,    87,
      88,    89,    92,    25,    84,    87,    38,    39,    40,    41,
      42,    43,    33,    34,    35,    36,    31,    32,    20,    37,
      28,    26,    78,    25,    25,    25,    25,    25,    25,    24,
      64,    28,    26,     1,    26,    58,    59,    26,     1,    26,
      58,    59,    24,    28,     1,    26,    58,    59,    90,     3,
      78,    78,    78,    26,    26,    25,    25,    25,    25,    25,
      78,    85,    84,    85,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    83,    83,    84,    79,    90,     3,
      78,    78,    78,    26,    26,    26,    26,    26,    59,    28,
      90,     3,    78,    78,    78,    24,    29,    26,    26,    25,
      25,    25,    25,    25,    78,    85,    84,    85,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    79,    28,    78,    53,    67,    78,    78,    92,    92,
      24,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    26,    23,    84,    90,     3,    78,
      78,    78,    26,    26,    26,    26,    26,    26,    26,    26,
      23,    84,    26,    26,    26,    26,    26,    26,    24,    23,
      84,    90,     3,    78,    78,    78,    26,    26,    26,    26,
      67,    67,    26,    26,    26,    26,    90,    26,    26,    26,
      26,    26,    23,    84,    90,    90,    26,    26,    26,    26,
      26,    23,    84,    66,    26,    78,    26,    78,    66,    28,
      28,    28,    24,    29,    90,    24,    29,    24,    29,    90,
      13,    66,    26,    66,    26,    24,    24,    29,    24,    24,
      24,    29,    66,    66,    66,    24,    24
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
      85,    86,    86,    87,    87,    87,    87,    88,    89,    89,
      89,    90,    90,    91,    91,    91,    92,    92,    92,    92,
      92,    92
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
       2,     2,     1,     1,     1,     1,     2,     4,     1,     6,
       7,     1,     3,     1,     3,     4,     1,     1,     1,     1,
       1,     3
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
#line 3785 "mafralang_grammar.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 71 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(TRANSLATION_UNIT, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3793 "mafralang_grammar.tab.c"
    break;

  case 5: /* translation_unit: error  */
#line 74 "yacc_lexer/mafralang_grammar.y"
        {
    yyerrok;
  }
#line 3801 "mafralang_grammar.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 85 "yacc_lexer/mafralang_grammar.y"
                                    {
    pushStack();
  }
#line 3809 "mafralang_grammar.tab.c"
    break;

  case 9: /* function_definition: declaration_specifiers declarator $@1 declaration_list compound_statement  */
#line 88 "yacc_lexer/mafralang_grammar.y"
                                      {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[-1].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node2, (yyvsp[0].stmt), NULL, NULL);
    popStack();
  }
#line 3820 "mafralang_grammar.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 94 "yacc_lexer/mafralang_grammar.y"
                                    {
    pushStack();
  }
#line 3828 "mafralang_grammar.tab.c"
    break;

  case 11: /* function_definition: declaration_specifiers declarator $@2 compound_statement  */
#line 97 "yacc_lexer/mafralang_grammar.y"
                     {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(FUNCTION_DEFINITION, ast_node1, (yyvsp[0].stmt), NULL, NULL);
    popStack();
  }
#line 3838 "mafralang_grammar.tab.c"
    break;

  case 12: /* declaration_list: declaration  */
#line 105 "yacc_lexer/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 3846 "mafralang_grammar.tab.c"
    break;

  case 13: /* declaration_list: declaration_list declaration  */
#line 108 "yacc_lexer/mafralang_grammar.y"
                               {
    (yyval.stmt) = addNode(DECLARATION_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3854 "mafralang_grammar.tab.c"
    break;

  case 14: /* declaration: declaration_specifiers SEMICOLON  */
#line 114 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 3862 "mafralang_grammar.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list SEMICOLON  */
#line 117 "yacc_lexer/mafralang_grammar.y"
                                                        {
    (yyval.stmt) = addNode(DECLARATION, (yyvsp[-2].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3870 "mafralang_grammar.tab.c"
    break;

  case 16: /* declaration_specifiers: TYPE  */
#line 123 "yacc_lexer/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, NULL, (yyvsp[0].strType), NULL);
    insertType((yyvsp[0].strType));
    insertScopeType((yyvsp[0].strType));
  }
#line 3880 "mafralang_grammar.tab.c"
    break;

  case 17: /* declaration_specifiers: TYPE declaration_specifiers  */
#line 128 "yacc_lexer/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(DECLARATION_SPECIFIERS, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
    insertType((yyvsp[-1].strType));
    insertScopeType((yyvsp[-1].strType));
  }
#line 3890 "mafralang_grammar.tab.c"
    break;

  case 19: /* init_declarator_list: init_declarator_list COMMA declarator  */
#line 137 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(INIT_DECLARATOR_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3898 "mafralang_grammar.tab.c"
    break;

  case 21: /* direct_declarator: ID  */
#line 147 "yacc_lexer/mafralang_grammar.y"
      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
    insertScopeName((yyvsp[0].strType));
  }
#line 3908 "mafralang_grammar.tab.c"
    break;

  case 22: /* direct_declarator: MAIN  */
#line 152 "yacc_lexer/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
    insertScopeName((yyvsp[0].strType));
  }
#line 3918 "mafralang_grammar.tab.c"
    break;

  case 23: /* direct_declarator: LEFT_PARENTHESES declarator RIGHT_PARENTHESES  */
#line 157 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 3926 "mafralang_grammar.tab.c"
    break;

  case 25: /* direct_declarator: direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 161 "yacc_lexer/mafralang_grammar.y"
                                                                      {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3934 "mafralang_grammar.tab.c"
    break;

  case 26: /* direct_declarator: direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES  */
#line 164 "yacc_lexer/mafralang_grammar.y"
                                                                       {
    (yyval.stmt) = addNode(DIRECT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 3942 "mafralang_grammar.tab.c"
    break;

  case 27: /* direct_declarator: direct_declarator LEFT_PARENTHESES error RIGHT_PARENTHESES  */
#line 167 "yacc_lexer/mafralang_grammar.y"
                                                             {
    yyerrok;
  }
#line 3950 "mafralang_grammar.tab.c"
    break;

  case 28: /* identifier_list: ID  */
#line 173 "yacc_lexer/mafralang_grammar.y"
      {
    (yyval.stmt) = addNode(IDENTIFIER_LIST, NULL, NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
  }
#line 3959 "mafralang_grammar.tab.c"
    break;

  case 29: /* identifier_list: identifier_list COMMA ID  */
#line 177 "yacc_lexer/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(IDENTIFIER_LIST, (yyvsp[-2].stmt), NULL, NULL, (yyvsp[0].strType));
    insertSymbol((yyvsp[0].strType));
  }
#line 3968 "mafralang_grammar.tab.c"
    break;

  case 31: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 186 "yacc_lexer/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3976 "mafralang_grammar.tab.c"
    break;

  case 32: /* parameter_declaration: declaration_specifiers declarator  */
#line 192 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3984 "mafralang_grammar.tab.c"
    break;

  case 33: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 195 "yacc_lexer/mafralang_grammar.y"
                                             {
    (yyval.stmt) = addNode(PARAMETER_DECLARATION, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 3992 "mafralang_grammar.tab.c"
    break;

  case 34: /* abstract_declarator: direct_abstract_declarator  */
#line 201 "yacc_lexer/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(ABSTRACT_DECLARATOR, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4000 "mafralang_grammar.tab.c"
    break;

  case 35: /* direct_abstract_declarator: LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES  */
#line 207 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4008 "mafralang_grammar.tab.c"
    break;

  case 36: /* direct_abstract_declarator: LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 210 "yacc_lexer/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, NULL, NULL, NULL, NULL);
  }
#line 4016 "mafralang_grammar.tab.c"
    break;

  case 37: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES  */
#line 213 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4024 "mafralang_grammar.tab.c"
    break;

  case 38: /* direct_abstract_declarator: direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES  */
#line 216 "yacc_lexer/mafralang_grammar.y"
                                                                               {
    (yyval.stmt) = addNode(DIRECT_ABSTRACT_DECLARATOR, (yyvsp[-3].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4032 "mafralang_grammar.tab.c"
    break;

  case 39: /* compound_statement: LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET  */
#line 222 "yacc_lexer/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL);
  }
#line 4040 "mafralang_grammar.tab.c"
    break;

  case 40: /* compound_statement: LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET  */
#line 225 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(COMPOUND_STATEMENT, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4048 "mafralang_grammar.tab.c"
    break;

  case 42: /* block_item_list: block_item_list block_item  */
#line 232 "yacc_lexer/mafralang_grammar.y"
                             {
    (yyval.stmt) = addNode(BLOCK_ITEM_LIST, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4056 "mafralang_grammar.tab.c"
    break;

  case 43: /* block_item: declaration  */
#line 238 "yacc_lexer/mafralang_grammar.y"
              {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4064 "mafralang_grammar.tab.c"
    break;

  case 44: /* block_item: statement  */
#line 241 "yacc_lexer/mafralang_grammar.y"
            {
    (yyval.stmt) = addNode(BLOCK_ITEM, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4072 "mafralang_grammar.tab.c"
    break;

  case 45: /* statement: expression_statement  */
#line 247 "yacc_lexer/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4080 "mafralang_grammar.tab.c"
    break;

  case 46: /* statement: compound_statement  */
#line 250 "yacc_lexer/mafralang_grammar.y"
                     {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4088 "mafralang_grammar.tab.c"
    break;

  case 47: /* statement: conditional_statement  */
#line 253 "yacc_lexer/mafralang_grammar.y"
                        {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4096 "mafralang_grammar.tab.c"
    break;

  case 48: /* statement: iteration_statement  */
#line 256 "yacc_lexer/mafralang_grammar.y"
                      {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4104 "mafralang_grammar.tab.c"
    break;

  case 49: /* statement: input_statement  */
#line 259 "yacc_lexer/mafralang_grammar.y"
                  {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4112 "mafralang_grammar.tab.c"
    break;

  case 50: /* statement: output_statement  */
#line 262 "yacc_lexer/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4120 "mafralang_grammar.tab.c"
    break;

  case 51: /* statement: return_statement  */
#line 265 "yacc_lexer/mafralang_grammar.y"
                   {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4128 "mafralang_grammar.tab.c"
    break;

  case 52: /* statement: error  */
#line 268 "yacc_lexer/mafralang_grammar.y"
        { 
    yyerrok;
  }
#line 4136 "mafralang_grammar.tab.c"
    break;

  case 53: /* expression_statement: SEMICOLON  */
#line 274 "yacc_lexer/mafralang_grammar.y"
            {
    (yyval.stmt) = NULL;
  }
#line 4144 "mafralang_grammar.tab.c"
    break;

  case 54: /* expression_statement: expression SEMICOLON  */
#line 277 "yacc_lexer/mafralang_grammar.y"
                       {
    (yyval.stmt) = (yyvsp[-1].stmt);
  }
#line 4152 "mafralang_grammar.tab.c"
    break;

  case 55: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 283 "yacc_lexer/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4160 "mafralang_grammar.tab.c"
    break;

  case 56: /* conditional_statement: IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement  */
#line 286 "yacc_lexer/mafralang_grammar.y"
                                                                             {
    ast_node* ast_node1 = addNode(CONDITIONAL_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-2].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(CONDITIONAL_STATEMENT, NULL, (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
    (yyval.stmt) = addNode(CONDITIONAL_STATEMENT, ast_node1, ast_node2, (yyvsp[-6].strType), NULL);
  }
#line 4170 "mafralang_grammar.tab.c"
    break;

  case 57: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement  */
#line 294 "yacc_lexer/mafralang_grammar.y"
                                                                                                        {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4180 "mafralang_grammar.tab.c"
    break;

  case 58: /* iteration_statement: FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement  */
#line 299 "yacc_lexer/mafralang_grammar.y"
                                                                                             {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4189 "mafralang_grammar.tab.c"
    break;

  case 59: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement  */
#line 303 "yacc_lexer/mafralang_grammar.y"
                                                                                               {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-4].stmt), (yyvsp[-3].stmt), NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node2, (yyvsp[0].stmt), (yyvsp[-6].strType), NULL);
  }
#line 4199 "mafralang_grammar.tab.c"
    break;

  case 60: /* iteration_statement: FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement  */
#line 308 "yacc_lexer/mafralang_grammar.y"
                                                                                    {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, (yyvsp[-3].stmt), (yyvsp[-2].stmt), NULL, NULL);
    (yyval.stmt) = addNode(ITERATION_STATEMENT, ast_node1, (yyvsp[0].stmt), (yyvsp[-5].strType), NULL);
  }
#line 4208 "mafralang_grammar.tab.c"
    break;

  case 61: /* iteration_statement: FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement  */
#line 312 "yacc_lexer/mafralang_grammar.y"
                                                                 {
    (yyval.stmt) = addNode(ITERATION_STATEMENT, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-4].strType), NULL);
  }
#line 4216 "mafralang_grammar.tab.c"
    break;

  case 62: /* input_statement: READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  */
#line 318 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4224 "mafralang_grammar.tab.c"
    break;

  case 63: /* output_statement: WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 324 "yacc_lexer/mafralang_grammar.y"
                                                                        {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4232 "mafralang_grammar.tab.c"
    break;

  case 64: /* output_statement: WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON  */
#line 327 "yacc_lexer/mafralang_grammar.y"
                                                                          {
    (yyval.stmt) = addNode(OUTPUT_STATEMENT, (yyvsp[-2].stmt), NULL, (yyvsp[-4].strType), NULL);
  }
#line 4240 "mafralang_grammar.tab.c"
    break;

  case 65: /* return_statement: RETURN expression SEMICOLON  */
#line 333 "yacc_lexer/mafralang_grammar.y"
                              {
    (yyval.stmt) = addNode(RETURN_STATEMENT, (yyvsp[-1].stmt), NULL, (yyvsp[-2].strType), NULL);
  }
#line 4248 "mafralang_grammar.tab.c"
    break;

  case 66: /* set_expression_list: is_set_expression  */
#line 339 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4256 "mafralang_grammar.tab.c"
    break;

  case 67: /* set_expression_list: add_expression  */
#line 342 "yacc_lexer/mafralang_grammar.y"
                 {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4264 "mafralang_grammar.tab.c"
    break;

  case 68: /* set_expression_list: remove_expression  */
#line 345 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4272 "mafralang_grammar.tab.c"
    break;

  case 69: /* set_expression_list: exists_expression  */
#line 348 "yacc_lexer/mafralang_grammar.y"
                    {
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 4280 "mafralang_grammar.tab.c"
    break;

  case 70: /* is_set_expression: IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES  */
#line 354 "yacc_lexer/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(IS_SET_EXPRESSION, NULL, NULL, (yyvsp[-3].strType), (yyvsp[-1].strType));
  }
#line 4288 "mafralang_grammar.tab.c"
    break;

  case 71: /* add_expression: ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 360 "yacc_lexer/mafralang_grammar.y"
                                                    {
    (yyval.stmt) = addNode(ADD_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4296 "mafralang_grammar.tab.c"
    break;

  case 72: /* remove_expression: REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 366 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(REMOVE_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4304 "mafralang_grammar.tab.c"
    break;

  case 73: /* exists_expression: EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 372 "yacc_lexer/mafralang_grammar.y"
                                                       {
    (yyval.stmt) = addNode(EXISTS_EXPRESSION, (yyvsp[-1].stmt), NULL, (yyvsp[-3].strType), NULL);
  }
#line 4312 "mafralang_grammar.tab.c"
    break;

  case 76: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 383 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(ASSIGNMENT_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4320 "mafralang_grammar.tab.c"
    break;

  case 79: /* relational_expression: relational_expression CLT arithmetic_expression  */
#line 392 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4328 "mafralang_grammar.tab.c"
    break;

  case 80: /* relational_expression: relational_expression CLE arithmetic_expression  */
#line 395 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4336 "mafralang_grammar.tab.c"
    break;

  case 81: /* relational_expression: relational_expression CEQ arithmetic_expression  */
#line 398 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4344 "mafralang_grammar.tab.c"
    break;

  case 82: /* relational_expression: relational_expression CGE arithmetic_expression  */
#line 401 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4352 "mafralang_grammar.tab.c"
    break;

  case 83: /* relational_expression: relational_expression CGT arithmetic_expression  */
#line 404 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4360 "mafralang_grammar.tab.c"
    break;

  case 84: /* relational_expression: relational_expression CNE arithmetic_expression  */
#line 407 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(RELATIONAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4368 "mafralang_grammar.tab.c"
    break;

  case 86: /* arithmetic_expression: arithmetic_expression ADD_OP logical_expression  */
#line 414 "yacc_lexer/mafralang_grammar.y"
                                                  {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4376 "mafralang_grammar.tab.c"
    break;

  case 87: /* arithmetic_expression: arithmetic_expression SUB_OP logical_expression  */
#line 417 "yacc_lexer/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4384 "mafralang_grammar.tab.c"
    break;

  case 88: /* arithmetic_expression: arithmetic_expression MULT logical_expression  */
#line 420 "yacc_lexer/mafralang_grammar.y"
                                                 {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4392 "mafralang_grammar.tab.c"
    break;

  case 89: /* arithmetic_expression: arithmetic_expression DIVIDE logical_expression  */
#line 423 "yacc_lexer/mafralang_grammar.y"
                                                   {
    (yyval.stmt) = addNode(ARITHMETIC_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4400 "mafralang_grammar.tab.c"
    break;

  case 91: /* logical_expression: NEGATE set_expression  */
#line 430 "yacc_lexer/mafralang_grammar.y"
                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[0].stmt), NULL, (yyvsp[-1].symbol), NULL);
  }
#line 4408 "mafralang_grammar.tab.c"
    break;

  case 92: /* logical_expression: logical_expression AND set_expression  */
#line 433 "yacc_lexer/mafralang_grammar.y"
                                        {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4416 "mafralang_grammar.tab.c"
    break;

  case 93: /* logical_expression: logical_expression OR set_expression  */
#line 436 "yacc_lexer/mafralang_grammar.y"
                                         {
    (yyval.stmt) = addNode(LOGICAL_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].symbol), NULL);
  }
#line 4424 "mafralang_grammar.tab.c"
    break;

  case 95: /* set_expression: set_expression IN cast_expression  */
#line 443 "yacc_lexer/mafralang_grammar.y"
                                    {
    (yyval.stmt) = addNode(SET_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), (yyvsp[-1].strType), NULL);
  }
#line 4432 "mafralang_grammar.tab.c"
    break;

  case 97: /* cast_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression  */
#line 450 "yacc_lexer/mafralang_grammar.y"
                                                               {
    (yyval.stmt) = addNode(CAST_EXPRESSION, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4440 "mafralang_grammar.tab.c"
    break;

  case 98: /* type_name: specifier_qualifier_list  */
#line 456 "yacc_lexer/mafralang_grammar.y"
                           {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[0].stmt), NULL, NULL, NULL);
  }
#line 4448 "mafralang_grammar.tab.c"
    break;

  case 99: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 459 "yacc_lexer/mafralang_grammar.y"
                                               {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4456 "mafralang_grammar.tab.c"
    break;

  case 100: /* type_name: specifier_qualifier_list declarator  */
#line 462 "yacc_lexer/mafralang_grammar.y"
                                      {
    (yyval.stmt) = addNode(TYPE_NAME, (yyvsp[-1].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4464 "mafralang_grammar.tab.c"
    break;

  case 101: /* specifier_qualifier_list: TYPE specifier_qualifier_list  */
#line 468 "yacc_lexer/mafralang_grammar.y"
                                {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, (yyvsp[0].stmt), NULL, (yyvsp[-1].strType), NULL);
    insertType((yyvsp[-1].strType));
    insertScopeType((yyvsp[-1].strType));
  }
#line 4474 "mafralang_grammar.tab.c"
    break;

  case 102: /* specifier_qualifier_list: TYPE  */
#line 473 "yacc_lexer/mafralang_grammar.y"
       {
    (yyval.stmt) = addNode(SPECIFIER_QUALIFIER_LIST, NULL, NULL, (yyvsp[0].strType), NULL);
    insertType((yyvsp[0].strType));
    insertScopeType((yyvsp[0].strType));
  }
#line 4484 "mafralang_grammar.tab.c"
    break;

  case 106: /* unary_expression: SUB_OP cast_expression  */
#line 484 "yacc_lexer/mafralang_grammar.y"
                         {
    (yyval.stmt) = addNode(UNARY_EXPRESSION, (yyvsp[0].stmt), NULL, NULL, (yyvsp[-1].symbol));
  }
#line 4492 "mafralang_grammar.tab.c"
    break;

  case 107: /* function_expression: ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES  */
#line 490 "yacc_lexer/mafralang_grammar.y"
                                                         {
    (yyval.stmt) = addNode(FUNCTION_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, (yyvsp[-3].strType));
  }
#line 4500 "mafralang_grammar.tab.c"
    break;

  case 109: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 497 "yacc_lexer/mafralang_grammar.y"
                                                                                                       {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-4].stmt), (yyvsp[-1].stmt), NULL, NULL);
  }
#line 4508 "mafralang_grammar.tab.c"
    break;

  case 110: /* postfix_expression: LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 500 "yacc_lexer/mafralang_grammar.y"
                                                                                                             {
    (yyval.stmt) = addNode(POSTFIX_EXPRESSION, (yyvsp[-5].stmt), (yyvsp[-2].stmt), NULL, NULL);
  }
#line 4516 "mafralang_grammar.tab.c"
    break;

  case 112: /* initializer_list: initializer_list COMMA initializer  */
#line 507 "yacc_lexer/mafralang_grammar.y"
                                     {
    (yyval.stmt) = addNode(INITIALIZER_LIST, (yyvsp[-2].stmt), (yyvsp[0].stmt), NULL, NULL);
  }
#line 4524 "mafralang_grammar.tab.c"
    break;

  case 114: /* initializer: LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET  */
#line 514 "yacc_lexer/mafralang_grammar.y"
                                                          {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4532 "mafralang_grammar.tab.c"
    break;

  case 115: /* initializer: LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET  */
#line 517 "yacc_lexer/mafralang_grammar.y"
                                                                {
    (yyval.stmt) = addNode(INITIALIZER, (yyvsp[-2].stmt), NULL, NULL, NULL);
  }
#line 4540 "mafralang_grammar.tab.c"
    break;

  case 116: /* primary_expression: ID  */
#line 523 "yacc_lexer/mafralang_grammar.y"
     {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4548 "mafralang_grammar.tab.c"
    break;

  case 117: /* primary_expression: INTEGER  */
#line 526 "yacc_lexer/mafralang_grammar.y"
          {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4556 "mafralang_grammar.tab.c"
    break;

  case 118: /* primary_expression: FLOAT  */
#line 529 "yacc_lexer/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4564 "mafralang_grammar.tab.c"
    break;

  case 119: /* primary_expression: STRING  */
#line 532 "yacc_lexer/mafralang_grammar.y"
         {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4572 "mafralang_grammar.tab.c"
    break;

  case 120: /* primary_expression: EMPTY  */
#line 535 "yacc_lexer/mafralang_grammar.y"
        {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, (yyvsp[0].strType));
  }
#line 4580 "mafralang_grammar.tab.c"
    break;

  case 121: /* primary_expression: LEFT_PARENTHESES expression RIGHT_PARENTHESES  */
#line 538 "yacc_lexer/mafralang_grammar.y"
                                                {
    (yyval.stmt) = addNode(PRIMARY_EXPRESSION, (yyvsp[-1].stmt), NULL, NULL, NULL);
  }
#line 4588 "mafralang_grammar.tab.c"
    break;


#line 4592 "mafralang_grammar.tab.c"

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

#line 543 "yacc_lexer/mafralang_grammar.y"


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
  yylex_destroy();
  printSymbolTable();
  // if(!(syntax_error || lex_error)){
  //   printTree(syntax_error, lex_error, parserTree);
  //   freeTree(parserTree);
  // }
  return 0;
}
