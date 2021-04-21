%define parse.error verbose
%define lr.type canonical-lr

%{
  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "includes/ast.h"
  #include "includes/symbolTable.h"

  struct ast_node* parserTree = NULL;


  int yylex();
  extern int yylex_destroy(void);
  extern FILE *yyin;
  extern int line_number;
  extern int lex_error;
  
  int syntax_error = 0;  
  void yyerror(const char* msg) {
    fprintf(stderr, "\n%s -- linha: %d\n", msg, line_number);
    syntax_error++;
  }

%}

%union{
  char* symbol;
  char* strType;
  struct ast_node* stmt;
}

%token <strType>  ID EMPTY TYPE FLOAT INTEGER
%token <strType>  RETURN IF FOR FORALL ELSE
%token <strType>  READ WRITE WRITELN
%token <strType>  IS_SET REMOVE ADD IN STR EXISTS
%token <symbol>   LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET
%token <symbol>   LEFT_PARENTHESES RIGHT_PARENTHESES QUOTES
%token <symbol>   SEMICOLON COMMA
%token <symbol>   NEGATE AND OR
%token <symbol>   ADD_OP SUB_OP DIVIDE MULT ASSIGN
%token <symbol>   CLT CLE CEQ CGE CGT CNE

%left CLT CLE CEQ CGE CGT CNE
%left ADD_OP SUB_OP DIVIDE MULT
%right ASSIGN

%nonassoc THEN ELSE

%type <stmt> program declarations declaration var_declaration func_declaration paramaters paramater
%type <stmt> compound_statement expression_statement conditional_statement local_var_declaration
%type <stmt> iteration_statement return_statement is_set_statement remove_statement statement
%type <stmt> add_statement expression operation variable arithmetic_operation constant
%type <stmt> logical_operation relational_operation input_statement output_statement
%type <stmt> statement_list exists_statement block_statement string function_expression
%type <stmt> local_parameters set_statement set_expression block_struct function_call

%start program

%%

program:
  declarations { parserTree = $1; }
;

declarations:
  declarations declaration {
    $$ = addNode(DECLARATION, $1, $2, NULL, NULL);
  }
| declaration { $$ = $1; }
;

declaration:
  var_declaration  { $$ = $1; }
| func_declaration { $$ = $1; }
;

var_declaration:
  TYPE ID SEMICOLON {
    $$ = addNode(VARIABLE_DECLARATION, NULL, NULL, $1, $2);
    addSymbol($2, $1, 'V');
  }
;

func_declaration:
  TYPE ID LEFT_PARENTHESES paramaters RIGHT_PARENTHESES compound_statement {
    $$ = addNode(FUNCTION_DECLARATION, $4, $6, $1, $2);
    addSymbol($2, $1, 'F');
    popStack();
  }
;

paramaters:
  paramaters COMMA paramater {
    $$ = addNode(PARAMATERS, $1, $3, NULL, NULL);
  }
| paramater {
    $$ = addNode(PARAMATERS, $1, NULL, NULL, NULL);
  }
| { $$ = NULL; }
;

paramater:
  TYPE ID {
    $$ = addNode(PARAMATER, NULL, NULL, $1, $2);
    addSymbol($2, $1, 'P');
  }
;

block_struct:
  compound_statement { $$ = $1; }
| block_statement { $$ = $1; }
;

compound_statement:
  LEFT_CURLY_BRACKET statement_list RIGHT_CURLY_BRACKET {
    $$ = addNode(COMPOUND_STATEMENT, $2, NULL, NULL, NULL);
  }
;

statement_list:
  statement_list block_statement {
    $$ = addNode(STATEMENT_LIST, $1, $2, NULL, NULL);
  }
| block_statement { $$ = $1; }
;

block_statement:
  statement { $$ = $1; }
| conditional_statement  { $$ = $1; }
| iteration_statement    { $$ = $1; }
;

statement:
  local_var_declaration { $$ = $1; }
| expression_statement  { $$ = $1; }
| return_statement { $$ = $1; }
| input_statement { $$ = $1; }
| output_statement { $$ = $1; }
| statement SEMICOLON {
    $$ = addNode(STATEMENT, $1, NULL, NULL, NULL);
  }
;

local_var_declaration:
  TYPE ID {
    $$ = addNode(VARIABLE_DECLARATION, NULL, NULL, $1, $2);
    addSymbol($2, $1, 'V');
  }
;

input_statement:
  READ LEFT_PARENTHESES expression RIGHT_PARENTHESES {
    $$ = addNode(INPUT_STATEMENT, $3, NULL, NULL, $1);
  }
;

output_statement:
  WRITE LEFT_PARENTHESES variable RIGHT_PARENTHESES {
    $$ = addNode(OUTPUT_STATEMENT, $3, NULL, NULL, $1);
  }
| WRITELN LEFT_PARENTHESES variable RIGHT_PARENTHESES {
    $$ = addNode(OUTPUT_STATEMENT, $3, NULL, NULL, $1);
  }
;

return_statement:
  RETURN expression {
    $$ = addNode(RETURN_STATEMENT, $2, NULL, NULL, $1);
  }
;

expression_statement:
  expression {
    $$ = addNode(EXPRESSION_STATEMENT, $1, NULL, NULL, NULL);
  }
;

conditional_statement:
  IF LEFT_PARENTHESES expression RIGHT_PARENTHESES block_struct %prec THEN { 
    $$ = addNode(CONDITIONAL_STATEMENT, $3, $5, NULL, $1);
  }
| IF LEFT_PARENTHESES expression RIGHT_PARENTHESES block_struct ELSE block_struct {
    ast_node* ast_node = addNode(CONDITIONAL_STATEMENT, $5, $7, NULL, $6);
    $$ = addNode(CONDITIONAL_STATEMENT, $5, ast_node, NULL, $1);
  }
;

iteration_statement:
  FOR LEFT_PARENTHESES expression SEMICOLON expression SEMICOLON expression RIGHT_PARENTHESES block_struct {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, $3, $5, NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, $7, NULL, NULL);
    $$ = addNode(ITERATION_STATEMENT, ast_node2, $9, NULL, $1);
  }
| FORALL set_expression block_struct {
    $$ = addNode(ITERATION_STATEMENT, $3, NULL, NULL, $1);
  }
;

set_statement:
  is_set_statement { $$ = $1; }
| remove_statement { $$ = $1; }
| add_statement { $$ = $1; }
| exists_statement { $$ = $1; }
;

is_set_statement:
  IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES {
    $$ = addNode(IS_SET_EXPRESSION, NULL, NULL, $3, NULL);
  }
;

remove_statement:
  REMOVE set_expression {
    $$ = addNode(REMOVE_EXPRESSION, $2, NULL, NULL, $1);
  }
;

add_statement:
  ADD set_expression {
    $$ = addNode(ADD_EXPRESSION, $2, NULL, NULL, $1);
  }
;

exists_statement:
  EXISTS set_expression {
    $$ = addNode(EXISTS_EXPRESSION, $2, NULL, NULL, NULL);
  }
;

set_expression:
  LEFT_PARENTHESES expression IN expression RIGHT_PARENTHESES {
    $$ = addNode(SET_EXPRESSION, $2, $4, $3, NULL);
  }
;

expression:
  operation {
    $$ = addNode(EXPRESSION, $1, NULL, NULL, NULL);
  }
| expression COMMA operation {
    $$ = addNode(EXPRESSION, $1, $3, NULL, NULL);
  }
;

function_expression:
  set_statement { $$ = $1; }
| function_call { $$ = $1; }
| LEFT_PARENTHESES expression RIGHT_PARENTHESES { $$ = $2; } 
;

operation:
  arithmetic_operation { $$ = $1; }
| operation ASSIGN variable {
    $$ = addNode(ASSIGN_OPERATION, $1, $3, $2, NULL);
  }
;

arithmetic_operation:
  logical_operation { $$ = $1; }
| logical_operation ADD_OP arithmetic_operation  {
    $$ = addNode(ARITHMETIC_OPERATION, $1, $3, $2, NULL);
  } 
| logical_operation SUB_OP arithmetic_operation  {
    $$ = addNode(ARITHMETIC_OPERATION, $1, $3, $2, NULL);
  }  
| logical_operation DIVIDE arithmetic_operation  {
    $$ = addNode(ARITHMETIC_OPERATION, $1, $3, $2, NULL); 
  }  
| logical_operation MULT arithmetic_operation  {
    $$ = addNode(ARITHMETIC_OPERATION, $1, $3, $2, NULL);
  }
;

logical_operation:
  relational_operation { $$ = $1; }
| NEGATE relational_operation {
    $$ = addNode(LOGICAL_OPERATION, NULL, $2, $1, NULL);
  }
| logical_operation AND relational_operation {
    $$ = addNode(LOGICAL_OPERATION, $1, $3, $2, NULL);
  }
| logical_operation OR  relational_operation {
    $$ = addNode(LOGICAL_OPERATION, $1, $3, $2, NULL);
  }
;

relational_operation:
  variable { $$ = $1; }
| relational_operation CLT variable {
    $$ = addNode(RELATIONAL_OPERATION, $1, $3, $2, NULL);
  }
| relational_operation CLE variable {
    $$ = addNode(RELATIONAL_OPERATION, $1, $3, $2, NULL);
  }
| relational_operation CEQ variable {
    $$ = addNode(RELATIONAL_OPERATION, $1, $3, $2, NULL);
  }
| relational_operation CGE variable {
    $$ = addNode(RELATIONAL_OPERATION, $1, $3, $2, NULL);
  }
| relational_operation CGT variable {
    $$ = addNode(RELATIONAL_OPERATION, $1, $3, $2, NULL);
  }
| relational_operation CNE variable {
    $$ = addNode(RELATIONAL_OPERATION, $1, $3, $2, NULL);
  }
;

variable:
  constant { $$ = $1; }
| function_expression { $$ = $1; }
| QUOTES string QUOTES {
    $$ = addNode(QUOT, NULL, NULL, $1, NULL);
  }
| ID {
    $$ = addNode(IDENTIFIER, NULL, NULL, NULL, $1);
  }
;

string:
  STR {
    $$ = addNode(STRING, NULL, NULL, NULL, $1);
  }
|  ID {
    $$ = addNode(STRING, NULL, NULL, NULL, $1);
  }
;

function_call:
  ID LEFT_PARENTHESES local_parameters RIGHT_PARENTHESES {
    $$ = addNode(FUNCTION_CALL, $3, NULL, NULL, NULL);
  }
;

local_parameters:
  local_parameters COMMA expression {
    $$ = addNode(PARAMATERS, $1, $3, NULL, NULL);
  }
|  expression {
    $$ = addNode(PARAMATERS, $1, NULL, NULL, NULL);
  }
| { $$ = NULL; }
;

constant:
  INTEGER   {
    $$ = addNode(INTEG, NULL, NULL, NULL, $1);
  }
| FLOAT      {
    $$ = addNode(DECIMAL, NULL, NULL, NULL, $1);
  }
| EMPTY     {
    $$ = addNode(EMP, NULL, NULL, NULL, $1);
  }
;

%%

int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
      yyin = fopen( argv[0], "r" );
  else
      yyin = stdin;
  initializeGlobalScope();
  yyparse();
  yylex_destroy();
  if(syntax_error == 0 && lex_error == 0){
      printf("\n\n\t\t\t\t\t\t\t\t----------  ABSTRACT SYNTAX TREE ----------\t\t\t\t\t\t\t\t\n\n");
      printTree(parserTree, 0);
      printSymbolTable();
  }
  freeTree(parserTree);
  freeSymbolTable();
  return 0;
}