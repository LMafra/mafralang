%option nounput noinput yylineno noyywrap
%{

  #include <string.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include "mafralang_grammar.tab.h"

  extern int line_number;
  extern int column_number;
  extern int lex_error;

  void lexical_error_unrecognizable_symbol(char* symbol);
  void yyerror(const char* msg);

  void handleTokenStrType(int line_number, int column_number) {
    yylval.strType = (char *) strdup(yytext);
  }

  void handleTokenSymbol(int line_number, int column_number) {
    yylval.symbol = (char *) strdup(yytext);
  }

%}

EOL                     "\n"
DELIM                   [ \t]       
WHITESPACE              {DELIM}+
UNDERSCORE              "_"
START_COMMENT           "/*"
END_COMMENT             "*/"
INLINE_COMMENT          [/]{2}.*
LETTER                  [a-zA-Z]
DIGIT                   [0-9]
STRING                  \"[^\"]*\"|'[^']*'

ID                      {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*
INTEGER                 {DIGIT}+
FLOAT                   {DIGIT}+"."({DIGIT}+)?
TYPE                    "int"|"float"|"elem"|"set"
EMPTY                   "EMPTY"
MAIN                    "main"

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

%x                      COMMENT

%%

{WHITESPACE}                      {column_number += yyleng;}
{EOL}                             {line_number++; column_number = 0;}

{TYPE}                            {column_number += yyleng;handleTokenStrType(line_number, column_number);return TYPE;}
{EMPTY}                           {column_number += yyleng;handleTokenStrType(line_number, column_number);return EMPTY;}
{MAIN}                            {column_number += yyleng;handleTokenStrType(line_number, column_number);return MAIN;}

{RETURN}                          {column_number += yyleng;handleTokenStrType(line_number, column_number);return RETURN;}
{IF}                              {column_number += yyleng;handleTokenStrType(line_number, column_number);return IF;}  
{ELSE}                            {column_number += yyleng;handleTokenStrType(line_number, column_number);return ELSE;}
{FOR}                             {column_number += yyleng;handleTokenStrType(line_number, column_number);return FOR;}
{READ}                            {column_number += yyleng;handleTokenStrType(line_number, column_number);return READ;}
{WRITE}                           {column_number += yyleng;handleTokenStrType(line_number, column_number);return WRITE;}
{WRITELN}                         {column_number += yyleng;handleTokenStrType(line_number, column_number);return WRITELN;}

{FORALL}                          {column_number += yyleng;handleTokenStrType(line_number, column_number);return FORALL;}
{IS_SET}                          {column_number += yyleng;handleTokenStrType(line_number, column_number);return IS_SET;}
{REMOVE}                          {column_number += yyleng;handleTokenStrType(line_number, column_number);return REMOVE;}
{ADD}                             {column_number += yyleng;handleTokenStrType(line_number, column_number);return ADD;}
{EXISTS}                          {column_number += yyleng;handleTokenStrType(line_number, column_number);return EXISTS;}
{IN}                              {column_number += yyleng;handleTokenStrType(line_number, column_number);return IN;}

{ID}                              {column_number += yyleng;handleTokenStrType(line_number, column_number);return ID;}
{FLOAT}                           {column_number += yyleng;handleTokenStrType(line_number, column_number);return FLOAT;}
{INTEGER}                         {column_number += yyleng;handleTokenStrType(line_number, column_number);return INTEGER;}

{LEFT_CURLY_BRACKET}              {column_number += yyleng;handleTokenSymbol(line_number, column_number);return LEFT_CURLY_BRACKET;}
{RIGHT_CURLY_BRACKET}             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return RIGHT_CURLY_BRACKET;}
{LEFT_PARENTHESES}                {column_number += yyleng;handleTokenSymbol(line_number, column_number);return LEFT_PARENTHESES;}
{RIGHT_PARENTHESES}               {column_number += yyleng;handleTokenSymbol(line_number, column_number);return RIGHT_PARENTHESES;}
{COMMA}                           {column_number += yyleng;handleTokenSymbol(line_number, column_number);return COMMA;}
{SEMICOLON}                       {column_number += yyleng;handleTokenSymbol(line_number, column_number);return SEMICOLON;}

{ADD_OP}                          {column_number += yyleng;handleTokenSymbol(line_number, column_number);return ADD_OP;}                          
{SUB_OP}                          {column_number += yyleng;handleTokenSymbol(line_number, column_number);return SUB_OP;}
{DIVIDE}                          {column_number += yyleng;handleTokenSymbol(line_number, column_number);return DIVIDE;}
{ASSIGN}                          {column_number += yyleng;handleTokenSymbol(line_number, column_number);return ASSIGN;}
{MULT}                            {column_number += yyleng;handleTokenSymbol(line_number, column_number);return MULT;}

{CLT}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return CLT;}
{CLE}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return CLE;}
{CEQ}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return CEQ;}
{CGE}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return CGE;}
{CGT}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return CGT;}
{CNE}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return CNE;}

{NEGATE}                          {column_number += yyleng;handleTokenSymbol(line_number, column_number);return NEGATE;}
{AND}                             {column_number += yyleng;handleTokenSymbol(line_number, column_number);return AND;}
{OR}                              {column_number += yyleng;handleTokenSymbol(line_number, column_number);return OR;}

{STRING}                          {column_number += yyleng;handleTokenSymbol(line_number, column_number);return STRING;}

{INLINE_COMMENT}                  {;}
{START_COMMENT}                   {BEGIN(COMMENT);}
<COMMENT>{END_COMMENT}            {BEGIN(INITIAL);}
<COMMENT>.                        {;}
<COMMENT>{EOL}                    {;}

.                                 {lexical_error_unrecognizable_symbol(yytext);}

%%

void lexical_error_unrecognizable_symbol(char* symbol){
  char *error = (char *)malloc((strlen(symbol) + 1 + 35) * sizeof(char)); // +1 for the null-terminator and 35 for lex error message
  sprintf(error, "Lexical Error, unrecognizable symbol %s", symbol);
  yyerror(error);
  free(error);
}