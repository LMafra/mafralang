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
    RETURN = 263,                  /* RETURN  */
    IF = 264,                      /* IF  */
    FOR = 265,                     /* FOR  */
    FORALL = 266,                  /* FORALL  */
    ELSE = 267,                    /* ELSE  */
    READ = 268,                    /* READ  */
    WRITE = 269,                   /* WRITE  */
    WRITELN = 270,                 /* WRITELN  */
    IS_SET = 271,                  /* IS_SET  */
    REMOVE = 272,                  /* REMOVE  */
    ADD = 273,                     /* ADD  */
    IN = 274,                      /* IN  */
    STRING = 275,                  /* STRING  */
    EXISTS = 276,                  /* EXISTS  */
    LEFT_CURLY_BRACKET = 277,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 278,     /* RIGHT_CURLY_BRACKET  */
    LEFT_PARENTHESES = 279,        /* LEFT_PARENTHESES  */
    RIGHT_PARENTHESES = 280,       /* RIGHT_PARENTHESES  */
    QUOTES = 281,                  /* QUOTES  */
    SEMICOLON = 282,               /* SEMICOLON  */
    COMMA = 283,                   /* COMMA  */
    NEGATE = 284,                  /* NEGATE  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    ADD_OP = 287,                  /* ADD_OP  */
    SUB_OP = 288,                  /* SUB_OP  */
    DIVIDE = 289,                  /* DIVIDE  */
    MULT = 290,                    /* MULT  */
    ASSIGN = 291,                  /* ASSIGN  */
    CLT = 292,                     /* CLT  */
    CLE = 293,                     /* CLE  */
    CEQ = 294,                     /* CEQ  */
    CGE = 295,                     /* CGE  */
    CGT = 296,                     /* CGT  */
    CNE = 297,                     /* CNE  */
    THEN = 298                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "main/mafralang_grammar.y"

  char* symbol;
  char* strType;
  struct ast_node* stmt;

#line 113 "mafralang_grammar.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MAFRALANG_GRAMMAR_TAB_H_INCLUDED  */
