%error-verbose
%debug
%locations

%{
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int node_class;
  struct node* left;
  struct node* right;
  char* var_type;
  char* name;
} node;

node* parser_tree = NULL;

%}

%define lr.type canonical-lr
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

%%

program:
  declaration { parser_tree = $1; printf("program\n"); }
;

declaration:
  '(' declaration ')'
| declaration operation ';'
;

operation:
  arithmetic_op
| logical_op
| relational_op
| input_op
| output_op
;

arithmetic_op:
  arithmetic_op '+' arithmetic_op
| arithmetic_op '-' arithmetic_op
| arithmetic_op '*' arithmetic_op
| arithmetic_op '/' arithmetic_op
| expression
;

logical_op:
  ! logical_op
| logical_op '&&' logical_op
| logical_op '||' logical_op
| expression
;

relational_op:
  relational_op '==' relational_op
| relational_op '<' relational_op
| relational_op '<=' relational_op
| relational_op '>=' relational_op
| relational_op '>' relational_op
| relational_op '!=' relational_op
| expression
;

input_op:
  'read' '(' expression ')'
;

output_op:
  'write' '(' expression ')'
| 'writeln' '(' expression ')'
;

expression:
  operation
| expression ',' expression
| constant
| 'id'
;

constant:
  integer_constant
| float_constant
| char_constant
| 'EMPTY'
;

compound_statement:
  ''
;

statement:
  expression_statement  { $$ = }
| conditional_statement { $$ = }
| iteration_statement { $$ = }
| return_statement  { $$ = }
;

iteration_statement:
  'for' '(' expression ';' expression ';' expression')'
| 'forall' '(' expression ';' expression ';' expression')'
;

return_statement:
  'return' expression ';'
;

conditional_statement:
  'if' '(' expression ')' ';'
| 'if' '(' expression ')' 'else' '(' expression ')'
;
