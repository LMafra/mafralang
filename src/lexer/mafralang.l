%option noyywrap
%{

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "mafralang.tab.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_ORANGE  "\x1b[37m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int line_number = 1;
int column_number = 0;
int string_size = 0;

void yyerror(const char *s);

%}

EOL                     "\n"        
QUOTES                  "\""|"\'"
LETTER                  [a-zA-Z]
DIGIT                   [0-9]
UNDERSCORE              "_"
WHITESPACE              [ \t]+|[ \b]+
INLINE_COMMENT          [/]{2}.*
START_COMMENT           "/*"
END_COMMENT             "*/"

ID                      {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*
TYPE                    "int"|"float"|"elem"|"set"
INTEGER                 "-"?{DIGIT}+
DECIMAl                 "-"?{DIGIT}+"."({DIGIT}+)?
EMPTY                   "EMPTY"
ITERATION               "for"|"forall"
CONDITIONAL             "if"|"else"
RETURN                  "return"
INPUT                   "read"
OUTPUT                  "write"|"writeln"
STR                     [^"]*
AR_OP                   [=]|[+\-*/]
LO_OP                   [!]|[&]{2}|[|]{2}
RE_OP                   [=]{2}|[<]|[<=]|[>]|[>=]|[!=]

%x                      COMMENT
%x                      STRING


%%
{ID}                            {yyval.id = yytext[0]; return ID;}
{TYPE}                          {return TYPE;}
{INTEGER}                       {yyval.num = atoi(yytext); return INTEGER;}
{DECIMAl}                       {yyval.num = atoi(yytext); return DECIMAL;}
{EMPTY}                         {return EMPTY;}
{ITERATION}                     {return ITERATION;}
{CONDITIONAL}                   {return CONDITIONAL;}
{RETURN}                        {return RETURN;}
{INPUT}                         {return INPUT;}
{OUTPUT}                        {return OUTPUT;}
<INITIAL,STRING>{QUOTES}        {
                                if(string_size)     { BEGIN(0);string_size--; return QUOTES; }
                                else                { BEGIN(STRING);string_size++; return QUOTES; }
                                }
<STRING>{STR}                   {yylval.str = (char *) strdup(yytext); return STRING;}
{AR_OP}                         {yylval.op = (char *) strdup(yytext); return ARITHMETIC_OP;}
{LO_OP}                         {yylval.op = (char *) strdup(yytext); return LOGICAL_OP;}
{RE_OP}                         {yylval.op = (char *) strdup(yytext); return RELATIONAL_OP;}
{INLINE_COMMENT}                {;}
{START_COMMENT}                 {BEGIN(COMMENT);}
<COMMENT>{END_COMMENT}          {BEGIN(INITIAL);}
<COMMENT>.                      {;}
<COMMENT>{EOL}                  {;}
{WHITESPACE}                    {;}
{EOL}                           {;}
.                               {return yytext[0];}
%%


void yyerror(const char *s){
  fprintf(stderr, "%d: %s \n", yylineno, s);
}