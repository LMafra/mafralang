%{

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int stringLen = 0;
char openParenthesis[] = "(";
char closeParenthesis[] = ")";
int line_number = 1;
int error_pos = 0;

struct lexError {
    char symbol[100];
    char type[100];
    char message[100];
    int line_number;
};

struct lexError errors[100];

%}

LETTER                  [a-zA-Z]
DIGIT                   [0-9]
UNDERSCORE              "_"
TYPE                    "int"|"float"|"elem"|"set"
INTEGER                 "-"?{DIGIT}+
FLOAT                   "-"?{DIGIT}+"."({DIGIT}+)?
EMPTY                   "EMPTY"
AR_OP                   [+]{2}|[-]{2}|[=]|[+\-*/]
LO_OP                   [!]|[&]{2}|[|]{2}
RE_OP                   [=]{2}|[<]|[<=]|[>]|[>=]|[!=]
KEYWORD                 "if"|"else"|"for"|"forall"|"return"
READ                    "read"
WRITE                   "write"|"writeln"
ID                      {LETTER}({LETTER}|{DIGIT}|{UNDERSCORE})*
SYMBOL_ERROR            {DIGIT}+({LETTER}|{UNDERSCORE})+
EOL                     \n        
WHITESPACE              [ \t]+
INLINE_COMMENT          [/]{2}.*
%x STRING

%%
{TYPE}                  {
                        printf(KGRN"TYPE:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{INTEGER}               {
                        printf(KGRN"INTEGER:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{FLOAT}                 {
                        printf(KGRN"FLOAT:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{EMPTY}                 {
                        printf(KGRN"EMPTY:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{AR_OP}                 {
                        printf(KGRN"AR_OP:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{LO_OP}                 {
                        printf(KGRN"LO_OP:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{RE_OP}                 {
                        printf(KGRN"RE_OP:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{KEYWORD}               {
                        printf(KGRN"RE_OP:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{READ}                  {
                        printf(KGRN"READ:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{WRITE}                 {
                        printf(KGRN"WRITE:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{ID}                    {
                        printf(KGRN"ID:");
                        printf(KMAG"%s\n", yytext);
                        printf(KGRN"LINE:");
                        printf(KNRM"%d\n\n", line_number);
                        }
{EOL}                   {line_number++;}
{INLINE_COMMENT}        {;}
{WHITESPACE}            {;} 
"{"                     {;}    
"}"                     {;} 
"("                     {;}    
")"                     {;}    
","                     {;}    
";"                     {;}

{SYMBOL_ERROR}          {
                        struct lexError error; 
                        strcpy(error.symbol, yytext);
                        strcpy(error.type, "NO_SIMBOL");
                        strcpy(error.message, "Simbolo nao reconhecido pela analise lexica");
                        error.line_number = line_number;
                        errors[error_pos] = error;
                        error_pos++;
                        }

\"                      {
                        printf("STRING:%s%s", openParenthesis, yytext);
                        stringLen += 1;
                        BEGIN(STRING);
                        }

<STRING>\"              {
                        stringLen += 1;
                        printf("%s%s LENGTH %d\n\n", yytext, closeParenthesis, stringLen);
                        stringLen = 0;
                        BEGIN(INITIAL);
                        }

<STRING>\n              {
                        printf("%s", yytext);
                        stringLen += 1;
                        line_number++;
                        }

<STRING>.               {
                        printf("%s", yytext);
                        stringLen += 1;
                        }

.                       { 
                        struct lexError error; 
                        strcpy(error.symbol, yytext);
                        strcpy(error.type, "NO_SIMBOL");
                        strcpy(error.message, "Simbolo nao reconhecido pela analise lexica");
                        error.line_number = line_number;
                        errors[error_pos] = error;
                        error_pos++;
                        }

%%

void showError(struct lexError error, int current_error){
    printf("------ERROR %d--------\n", current_error + 1);
    printf("Simbolo: %s\n", error.symbol);
    printf("%s\n", error.message);
    printf("Line: %d\n", error.line_number);
    printf("----------------------\n");
}

int main( int argc, char **argv ) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yylex();

    if(error_pos > 0){
        printf("----------------\n");
        printf("Number of errors: %d\n\n", error_pos);
        int current_error = 0;
        while(current_error < error_pos){
            showError(errors[current_error], current_error);
            current_error++;
        }
    }
}