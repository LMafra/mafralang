%option noinput
%option nounput
%option noyywrap
%option yylineno

%{

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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

void moveColumn() {
    column_number += yyleng;
};

void resetColumn() {
    column_number = 1;
};

void newline() {
    line_number++;
    resetColumn();
}
void printMessage(char *token) {
    printf(ANSI_COLOR_GREEN "Token " ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE "%s: " ANSI_COLOR_RESET, token);
    printf(ANSI_COLOR_MAGENTA "%s\n" ANSI_COLOR_RESET, yytext);
    printf(ANSI_COLOR_GREEN "Line: " ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "%d\t" ANSI_COLOR_RESET, line_number);
    printf(ANSI_COLOR_GREEN "Column: " ANSI_COLOR_RESET);
    printf(ANSI_COLOR_MAGENTA "%d\n" ANSI_COLOR_RESET, column_number);
    
};

void createToken(char *token) {
    printMessage(token);
    moveColumn();
};

void printString() {
    printf(ANSI_COLOR_ORANGE "String: " ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED "%s\n" ANSI_COLOR_RESET, yytext);
}
void printError(){
    printf(ANSI_COLOR_YELLOW "--------ERROR--------\n" ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN "Token: " ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW "%s\n" ANSI_COLOR_RESET, yytext);
    printf(ANSI_COLOR_CYAN "Token not identified by lexical analysis.\n");
    printf(ANSI_COLOR_CYAN "Line: ");
    printf(ANSI_COLOR_YELLOW "%d\t" ANSI_COLOR_RESET, line_number);
    printf(ANSI_COLOR_CYAN "Column: ");
    printf(ANSI_COLOR_YELLOW "%d\n" ANSI_COLOR_RESET, column_number);
    printf(ANSI_COLOR_YELLOW "----------------------\n" ANSI_COLOR_RESET);
};

void newError() {
    printError();
    moveColumn();
};

%}

QUOTES                  "\""|"\'"
LETTER                  [a-zA-Z]
DIGIT                   [0-9]
UNDERSCORE              "_"
TYPE                    "int"|"float"|"elem"|"set"
INTEGER                 "-"?{DIGIT}+
FLOAT                   "-"?{DIGIT}+"."({DIGIT}+)?
EMPTY                   "EMPTY"
AR_OP                   [=]|[+\-*/]
LO_OP                   [!]|[&]{2}|[|]{2}
RE_OP                   [=]{2}|[<]|[<=]|[>]|[>=]|[!=]
KEYWORD                 "if"|"else"|"for"|"forall"|"return"
OPERATOR                "("|")"|","|";"|"{"|"}"|"["|"]"
READ                    "read"
WRITE                   "write"|"writeln"
ID                      {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*
SYMBOL_ERROR            {DIGIT}+({LETTER}|{UNDERSCORE})+
WHITESPACE              [ \t]+|[ \b]+
EOL                     "\n"        
INLINE_COMMENT          [/]{2}.*
START_COMMENT           "/*"
END_COMMENT             "*/"
STR                     (\\.|[^"#{}\\])*
%x                      COMMENT
%x                      STRING


%%
{TYPE}                          {createToken("Type");}
{INTEGER}                       {createToken("Integer");}
{FLOAT}                         {createToken("Float");}
{EMPTY}                         {createToken("Empty");}
{AR_OP}                         {createToken("Arithmetic Operation");}
{LO_OP}                         {createToken("Logical Operation");}
{RE_OP}                         {createToken("Relational Operation");}
{KEYWORD}                       {createToken("Keyword");}
{OPERATOR}                      {createToken("Operator");}
{READ}                          {createToken("Read");}
{WRITE}                         {createToken("Write");}
<INITIAL,STRING>{QUOTES}        {
                                createToken("Quotes");
                                if(string_size)     { BEGIN(0);string_size--; }
                                else                { BEGIN(STRING);string_size++; }
                                }
<STRING>.                       {printString();}
{ID}                            {createToken("Identifier");}
{INLINE_COMMENT}                {;}
{START_COMMENT}                 {BEGIN(COMMENT);}
<COMMENT>{END_COMMENT}          {BEGIN(INITIAL);}
<COMMENT>.                      {;}
<COMMENT>{EOL}                  {;}
{WHITESPACE}                    {moveColumn();}
{EOL}                           {newline();}
{SYMBOL_ERROR}                  {newError();}
.                               {newError();}
%%


int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yylex();
}