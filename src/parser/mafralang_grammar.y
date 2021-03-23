%{
    #include <stdlib.h>
    #include <stdio.h>

    int yylex();
    void yyerror(const char *s);
%}

%output  "parser/parser.c"
%defines "parser/parser.h"
%define parse.error verbose
%define lr.type canonical-lr

%start program

%union {
    char op;
    char* str_value;
    int int_value;
    float float_value;
}

%token <id> ID
%token <type> TYPE
%token <num> INTEGER
%token <num> DECIMAL
%token <str> STRING
%token EMPTY
%token ITERATION
%token CONDITIONAL
%token RETURN
%token INPUT
%token OUTPUT
%token QUOTES
%token <op> ARITHMETIC_OP
%token <op> LOGICAL_OP
%token <op> RELATIONAL_OP



%nonassoc THEN
%nonassoc ELSE

%%

program:
  declaration
;

declaration:
  declaration
| type ID statement
| ID statement
| statement
;

statement:
  compound_statemennt
| expression_statement
| conditional_statement
| iteration_statement
| return_statement
;

compound_statement:
  OPEN_CURLY_BRACKET statement CLOSE_CURLY_BRACKET
| OPEN_BRACKET statement CLOSE_CURLY_BRACKET
| OPEN_PARENTHESES statement CLOSE_PARENTHESES
;

expression_statement:
  expression SEMICOLON
;

conditional_statement:
  IF OPEN_PARENTHESES statement CLOSE_PARENTHESES statement
| IF OPEN_PARENTHESES statement CLOSE_PARENTHESES ELSE statement
;

iteration_statement:
  FOR OPEN_PARENTHESES statement SEMICOLON statement SEMICOLON statement CLOSE_PARENTHESES statement
  FORALL OPEN_PARENTHESES statement SEMICOLON statement SEMICOLON statement CLOSE_PARENTHESES statement
;

return_statement:
  RETURN OPEN_PARENTHESES statement CLOSE_PARENTHESES SEMICOLON
;

expression:
  expression COMMA expression
| operation
| variable
;

operation:
  arithmetic_operation
| logical_operation
| relational_operation
| input_operation
| output_operation
| return_operation
;

arithmetic_operation:
  variable PLUS variable
| variable MINUS variable
| variable DIVIDE variable
| variable MULT variable
| variable EQUAL variable
;

logical_operation:
  NEGATE variable
| variable IS_EQUAL variable
| variable AND variable
| variable OR variable
;

relational_operation:
  variable CLT variable
| variable CLE variable
| variable CEQ variable
| variable CGE variable
| variable CGT variable
| variable CNE variable
;

input_operation:
  READ variable
;

output_operation:
  WRITE variable
| WRITELN variable

;

variable:
  constant
| ID
;

constant:
  INTEGER
| FLOAT
| EMPTY
;

%%

void yyerror(const char *s) {
    printf("\nSyntaxError: %s in line %d, column %d.\n",
           s, parser_line, parser_column);
    syntax_error = 1;
}