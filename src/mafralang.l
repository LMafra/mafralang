%option nounput noinput yylineno noyywrap
%{

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "mafralang.tab.h"

int line_number = 1;
int string_size = 0;
int lex_error = 0;

void lexical_error_unrecognizable_symbol(char* symbol);
void yyerror(const char* msg);

%}

EOL                     "\n"
DELIM                   [ \t]       
WHITESPACE              {DELIM}+
QUOTES                  "\""|"\'"
UNDERSCORE              "_"
START_COMMENT           "/*"
END_COMMENT             "*/"
INLINE_COMMENT          [/]{2}.*
LETTER                  [a-zA-Z]
DIGIT                   [0-9]

ID                      {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*
INTEGER                 "-"?{DIGIT}+
FLOAT                    "-"?{DIGIT}+"."({DIGIT}+)?
TYPE                    "int"|"float"|"elem"|"set"
EMPTY                   "EMPTY"

RETURN                  "return"
IF                      "if"
ELSE                    "else"
FOR                     "for"
READ                    "read"
WRITE                   "write"
WRITELN                 "writeln"


FORALL                  "forall"
IS_SET                  "is_set"
REMOVE                  "remove"
ADD                     "add"
EXISTS                  "exists"
IN                      "in"

LEFT_CURLY_BRACKET      "{"
RIGHT_CURLY_BRACKET     "}"
LEFT_PARENTHESES        "("
RIGHT_PARENTHESES       ")"
COMMA                   ","
SEMICOLON               ";"

ADD_OP                  "+"
SUB_OP                  "-"
DIVIDE                  "/"
MULT                    "*"
ASSIGN                  "="

CLT                     "<"
CLE                     "<="
CEQ                     "=="
CGE                     ">="
CGT                     ">"
CNE                     "!="

NEGATE                  "!"
AND                     "&&"
OR                      "||"

STR                     [^"]*
%x                      COMMENT
%s                      STRING

%%

{TYPE}                            {yylval.strType = (char *) strdup(yytext);return TYPE;}
{EMPTY}                           {yylval.strType = (char *) strdup(yytext);return EMPTY;}

{RETURN}                          {yylval.strType = (char *) strdup(yytext);return RETURN;}
{IF}                              {yylval.strType = (char *) strdup(yytext);return IF;}  
{ELSE}                            {yylval.strType = (char *) strdup(yytext);return ELSE;}
{FOR}                             {yylval.strType = (char *) strdup(yytext);return FOR;}
{READ}                            {yylval.strType = (char *) strdup(yytext);return READ;}
{WRITE}                           {yylval.strType = (char *) strdup(yytext);return WRITE;}
{WRITELN}                         {yylval.strType = (char *) strdup(yytext);return WRITELN;}

{FORALL}                          {yylval.strType = (char *) strdup(yytext);return FORALL;}
{IS_SET}                          {yylval.strType = (char *) strdup(yytext);return IS_SET;}
{REMOVE}                          {yylval.strType = (char *) strdup(yytext);return REMOVE;}
{ADD}                             {yylval.strType = (char *) strdup(yytext);return ADD;}
{EXISTS}                          {yylval.strType = (char *) strdup(yytext);return EXISTS;}
{IN}                              {yylval.strType = (char *) strdup(yytext);return IN;}

{ID}                              {yylval.strType = (char *) strdup(yytext);return ID;}
{FLOAT}                            {yylval.strType = (char *) strdup(yytext);return FLOAT;}
{INTEGER}                         {yylval.strType = (char *) strdup(yytext);return INTEGER;}

{LEFT_CURLY_BRACKET}              {yylval.symbol = (char *) strdup(yytext);return LEFT_CURLY_BRACKET;}
{RIGHT_CURLY_BRACKET}             {yylval.symbol = (char *) strdup(yytext);return RIGHT_CURLY_BRACKET;}
{LEFT_PARENTHESES}                {yylval.symbol = (char *) strdup(yytext);return LEFT_PARENTHESES;}
{RIGHT_PARENTHESES}               {yylval.symbol = (char *) strdup(yytext);return RIGHT_PARENTHESES;}
{COMMA}                           {yylval.symbol = (char *) strdup(yytext);return COMMA;}
{SEMICOLON}                       {yylval.symbol = (char *) strdup(yytext);return SEMICOLON;}

{ADD_OP}                          {yylval.symbol = (char *) strdup(yytext);return ADD_OP;}                          
{SUB_OP}                          {yylval.symbol = (char *) strdup(yytext);return SUB_OP;}
{DIVIDE}                          {yylval.symbol = (char *) strdup(yytext);return DIVIDE;}
{ASSIGN}                          {yylval.symbol = (char *) strdup(yytext);return ASSIGN;}
{MULT}                            {yylval.symbol = (char *) strdup(yytext);return MULT;}

{CLT}                             {yylval.symbol = (char *) strdup(yytext);return CLT;}
{CLE}                             {yylval.symbol = (char *) strdup(yytext);return CLE;}
{CEQ}                             {yylval.symbol = (char *) strdup(yytext);return CEQ;}
{CGE}                             {yylval.symbol = (char *) strdup(yytext);return CGE;}
{CGT}                             {yylval.symbol = (char *) strdup(yytext);return CGT;}
{CNE}                             {yylval.symbol = (char *) strdup(yytext);return CNE;}

{NEGATE}                          {yylval.symbol = (char *) strdup(yytext);return NEGATE;}
{AND}                             {yylval.symbol = (char *) strdup(yytext);return AND;}
{OR}                              {yylval.symbol = (char *) strdup(yytext);return OR;}

<INITIAL,STRING>{QUOTES}          {
                                    if(string_size)     { BEGIN(0);string_size--; return QUOTES; }
                                    else                { BEGIN(STRING);string_size++; return QUOTES; }
                                  }
<STRING>{STR}                     {if(strcmp(yytext, "\n") == 0){line_number++;} yylval.strType = (char *) strdup(yytext);return STR;}

{INLINE_COMMENT}                  {;}
{START_COMMENT}                   {BEGIN(COMMENT);}
<COMMENT>{END_COMMENT}            {BEGIN(INITIAL);}
<COMMENT>.                        {;}
<COMMENT>{EOL}                    {;}

{WHITESPACE}                      {;}
{EOL}                             {line_number++;}
.                                 {lexical_error_unrecognizable_symbol(yytext);}

%%

void lexical_error_unrecognizable_symbol(char* symbol){
  char *error = (char *)malloc((strlen(symbol) + 1 + 35) * sizeof(char)); // +1 for the null-terminator and 35 for lex error message
  sprintf(error, "lexical error, unrecognizable symbol %s", symbol);
  yyerror(error);
  free(error);
}