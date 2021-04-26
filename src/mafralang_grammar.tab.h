/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MAFRALANG_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_MAFRALANG_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    EMPTY = 259,                   /* EMPTY  */
    TYPE = 260,                    /* TYPE  */
    FLOAT = 261,                   /* FLOAT  */
    INTEGER = 262,                 /* INTEGER  */
    MAIN = 263,                    /* MAIN  */
    RETURN = 264,                  /* RETURN  */
    IF = 265,                      /* IF  */
    FOR = 266,                     /* FOR  */
    FORALL = 267,                  /* FORALL  */
    ELSE = 268,                    /* ELSE  */
    READ = 269,                    /* READ  */
    WRITE = 270,                   /* WRITE  */
    WRITELN = 271,                 /* WRITELN  */
    IS_SET = 272,                  /* IS_SET  */
    REMOVE = 273,                  /* REMOVE  */
    ADD = 274,                     /* ADD  */
    IN = 275,                      /* IN  */
    STRING = 276,                  /* STRING  */
    EXISTS = 277,                  /* EXISTS  */
    LEFT_CURLY_BRACKET = 278,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 279,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESES = 280,        /* LEFT_PARENTHESES  */
    RIGHT_PARENTHESES = 281,       /* RIGHT_PARENTHESES  */
    QUOTES = 282,                  /* QUOTES  */
    SEMICOLON = 283,               /* SEMICOLON  */
    COMMA = 284,                   /* COMMA  */
    NEGATE = 285,                  /* NEGATE  */
    AND = 286,                     /* AND  */
    OR = 287,                      /* OR  */
    ADD_OP = 288,                  /* ADD_OP  */
    SUB_OP = 289,                  /* SUB_OP  */
    DIVIDE = 290,                  /* DIVIDE  */
    MULT = 291,                    /* MULT  */
    ASSIGN = 292,                  /* ASSIGN  */
    CLT = 293,                     /* CLT  */
    CLE = 294,                     /* CLE  */
    CEQ = 295,                     /* CEQ  */
    CGE = 296,                     /* CGE  */
    CGT = 297,                     /* CGT  */
    CNE = 298,                     /* CNE  */
    THEN = 299                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "main/mafralang_grammar.y"

  char* symbol;
  char* strType;
  struct ast_node* stmt;

#line 114 "mafralang_grammar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAFRALANG_GRAMMAR_TAB_H_INCLUDED  */
