%define parse.error verbose
%define lr.type canonical-lr

%{
  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "includes/ast.h"

  struct ast_node* parserTree = NULL;


  int yylex();
  extern int yylex_destroy(void);
  extern FILE *yyin;
  int line_number = 1;
  int column_number = 0;
  int lex_error = 0;
  int syntax_error = 0;
  int semantic_error = 0;

  void yyerror(const char* msg);  
%}

%union{
  char* symbol;
  char* strType;
  struct ast_node* stmt;
}

%token <strType>  ID EMPTY TYPE FLOAT INTEGER MAIN
%token <strType>  RETURN IF FOR FORALL ELSE
%token <strType>  READ WRITE WRITELN
%token <strType>  IS_SET REMOVE ADD IN STRING EXISTS
%token <symbol>   LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET
%token <symbol>   LEFT_PARENTHESES RIGHT_PARENTHESES QUOTES
%token <symbol>   SEMICOLON COMMA
%token <symbol>   NEGATE AND OR
%token <symbol>   ADD_OP SUB_OP DIVIDE MULT ASSIGN
%token <symbol>   CLT CLE CEQ CGE CGT CNE

%left CLT CLE CEQ CGE CGT CNE
%left ADD_OP SUB_OP
%left DIVIDE MULT
%right ASSIGN
%right THEN ELSE

%type <stmt> program translation_unit external_declaration function_definition declaration_list declaration
%type <stmt> declaration_specifiers init_declarator_list declarator direct_declarator 
%type <stmt> identifier_list parameter_list parameter_declaration abstract_declarator
%type <stmt> direct_abstract_declarator block_item_list block_item statement expression_statement
%type <stmt> compound_statement conditional_statement iteration_statement input_statement output_statement return_statement
%type <stmt> set_expression_list is_set_expression add_expression remove_expression exists_expression
%type <stmt> expression assignment_expression arithmetic_expression logical_expression
%type <stmt> relational_expression set_expression cast_expression type_name specifier_qualifier_list unary_expression
%type <stmt> postfix_expression function_expression initializer_list initializer primary_expression

%start program

%%

program:
  translation_unit { 
    parserTree = $1;
    checkSemanticErrorMain();
  }
;

translation_unit:
  external_declaration
| translation_unit external_declaration {
    $$ = addNode(TRANSLATION_UNIT, $1, $2, NULL, NULL);
  }
| error {
    yyerrok;
  }
;

external_declaration:
  function_definition
| declaration
;

function_definition:
  declaration_specifiers declarator {
    pushStack();
  }
  declaration_list compound_statement {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, $1, $2, NULL, NULL);
    ast_node* ast_node2 = addNode(FUNCTION_DEFINITION, ast_node1, $4, NULL, NULL);
    $$ = addNode(FUNCTION_DEFINITION, ast_node2, $5, NULL, NULL);
    popStack();
  }
| declaration_specifiers declarator {
    pushStack();
  }
  compound_statement {
    ast_node* ast_node1 = addNode(FUNCTION_DEFINITION, $1, $2, NULL, NULL);
    $$ = addNode(FUNCTION_DEFINITION, ast_node1, $4, NULL, NULL);
    popStack();
  }
;

declaration_list:
  declaration {
    $$ = addNode(DECLARATION_LIST, $1, NULL, NULL, NULL);
  }
| declaration_list declaration {
    $$ = addNode(DECLARATION_LIST, $1, $2, NULL, NULL);
  }
;

declaration:
  declaration_specifiers SEMICOLON  {
    $$ = addNode(DECLARATION, $1, NULL, NULL, NULL);
  }
| declaration_specifiers init_declarator_list SEMICOLON {
    $$ = addNode(DECLARATION, $1, $2, NULL, NULL);
  }
;

declaration_specifiers:
  TYPE {
    $$ = addNode(DECLARATION_SPECIFIERS, NULL, NULL, $1, NULL);
    insertType($1);
    insertScopeType($1);
  }
| TYPE declaration_specifiers {
    $$ = addNode(DECLARATION_SPECIFIERS, NULL, $2, $1, NULL);
    insertType($1);
    insertScopeType($1);
  }
;

init_declarator_list:
  declarator
| init_declarator_list COMMA declarator {
    $$ = addNode(INIT_DECLARATOR_LIST, $1, $3, NULL, NULL);
  }
;

declarator:
  direct_declarator
;

direct_declarator:
  ID  {
    $$ = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, $1);
    insertSymbol($1);
    insertScopeName($1);
  }
|  MAIN  {
    $$ = addNode(DIRECT_DECLARATOR, NULL, NULL, NULL, $1);
    insertSymbol($1);
    insertScopeName($1);
  }
| LEFT_PARENTHESES declarator RIGHT_PARENTHESES {
    $$ = $2;
  }
| direct_declarator LEFT_PARENTHESES RIGHT_PARENTHESES
| direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES {
    $$ = addNode(DIRECT_DECLARATOR, $1, $3, NULL, NULL);
  }
| direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES {
    $$ = addNode(DIRECT_DECLARATOR, $1, $3, NULL, NULL);
  }
| direct_declarator LEFT_PARENTHESES error RIGHT_PARENTHESES {
    yyerrok;
  }
;

identifier_list:
  ID  {
    $$ = addNode(IDENTIFIER_LIST, NULL, NULL, NULL, $1);
    insertSymbol($1);
  }
| identifier_list COMMA ID {
    $$ = addNode(IDENTIFIER_LIST, $1, NULL, NULL, $3);
    insertSymbol($3);
  }
;


parameter_list:
  parameter_declaration
| parameter_list COMMA parameter_declaration {
    $$ = addNode(PARAMETER_LIST, $1, $3, NULL, NULL);
  }
;

parameter_declaration:
  declaration_specifiers declarator {
    $$ = addNode(PARAMETER_DECLARATION, $1, $2, NULL, NULL);
  }
| declaration_specifiers abstract_declarator {
    $$ = addNode(PARAMETER_DECLARATION, $1, $2, NULL, NULL);
  }
;

abstract_declarator:
  direct_abstract_declarator {
    $$ = addNode(ABSTRACT_DECLARATOR, $1, NULL, NULL, NULL);
  }
;

direct_abstract_declarator:
  LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES {
    $$ = addNode(DIRECT_ABSTRACT_DECLARATOR, $2, NULL, NULL, NULL);
  }
| LEFT_PARENTHESES RIGHT_PARENTHESES {
    $$ = addNode(DIRECT_ABSTRACT_DECLARATOR, NULL, NULL, NULL, NULL);
  }
| direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES {
    $$ = addNode(DIRECT_ABSTRACT_DECLARATOR, $1, NULL, NULL, NULL);
  }
| direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES {
    $$ = addNode(DIRECT_ABSTRACT_DECLARATOR, $1, $3, NULL, NULL);
  }
;

compound_statement:
  LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET {
    $$ = addNode(COMPOUND_STATEMENT, NULL, NULL, NULL, NULL);
  }
| LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET {
    $$ = addNode(COMPOUND_STATEMENT, $2, NULL, NULL, NULL);
  }
;

block_item_list:
  block_item
| block_item_list block_item {
    $$ = addNode(BLOCK_ITEM_LIST, $1, $2, NULL, NULL);
  }
;

block_item:
  declaration {
    $$ = addNode(BLOCK_ITEM, $1, NULL, NULL, NULL);
  }
| statement {
    $$ = addNode(BLOCK_ITEM, $1, NULL, NULL, NULL);
  }
;

statement:
  expression_statement {
    $$ = $1;
  }
| compound_statement {
    $$ = $1;
  }
| conditional_statement {
    $$ = $1;
  }
| iteration_statement {
    $$ = $1;
  }
| input_statement {
    $$ = $1;
  }
| output_statement {
    $$ = $1;
  }
| return_statement {
    $$ = $1;
  }
| error { 
    yyerrok;
  }
;

expression_statement:
  SEMICOLON {
    $$ = NULL;
  }
| expression SEMICOLON {
    $$ = $1;
  }
;

conditional_statement:
  IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement %prec THEN {
    $$ = addNode(CONDITIONAL_STATEMENT, $3, $5, $1, NULL);
  }
| IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement  {
    ast_node* ast_node1 = addNode(CONDITIONAL_STATEMENT, $3, $5, NULL, NULL);
    ast_node* ast_node2 = addNode(CONDITIONAL_STATEMENT, NULL, $7, $6, NULL);
    $$ = addNode(CONDITIONAL_STATEMENT, ast_node1, ast_node2, $1, NULL);
  }
;

iteration_statement:
  FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, $3, $4, NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, $5, NULL, NULL);
    $$ = addNode(ITERATION_STATEMENT, ast_node2, $7, $1, NULL);
  }
| FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, $3, $4, NULL, NULL);
    $$ = addNode(ITERATION_STATEMENT, ast_node1, $6, $1, NULL);
  }
| FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, $3, $4, NULL, NULL);
    ast_node* ast_node2 = addNode(ITERATION_STATEMENT, ast_node1, $5, NULL, NULL);
    $$ = addNode(ITERATION_STATEMENT, ast_node2, $7, $1, NULL);
  }
| FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement {
    ast_node* ast_node1 = addNode(ITERATION_STATEMENT, $3, $4, NULL, NULL);
    $$ = addNode(ITERATION_STATEMENT, ast_node1, $6, $1, NULL);
  }
| FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement {
    $$ = addNode(ITERATION_STATEMENT, $3, $5, $1, NULL);
  }
;

input_statement:
  READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON  {
    $$ = addNode(INPUT_STATEMENT, $3, NULL, $1, NULL);
  }
;

output_statement:
  WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON {
    $$ = addNode(OUTPUT_STATEMENT, $3, NULL, $1, NULL);
  }
| WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON {
    $$ = addNode(OUTPUT_STATEMENT, $3, NULL, $1, NULL);
  }
;

return_statement:
  RETURN expression SEMICOLON {
    $$ = addNode(RETURN_STATEMENT, $2, NULL, $1, NULL);
  }
;

set_expression_list:
  is_set_expression {
    $$ = $1;
  }
| add_expression {
    $$ = $1;
  }
| remove_expression {
    $$ = $1;
  }
| exists_expression {
    $$ = $1;
  }
;

is_set_expression:
  IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES {
    $$ = addNode(IS_SET_EXPRESSION, NULL, NULL, $1, $3);
  }
;

add_expression:
  ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES {
    $$ = addNode(ADD_EXPRESSION, $3, NULL, $1, NULL);
  }
;

remove_expression:
  REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES {
    $$ = addNode(REMOVE_EXPRESSION, $3, NULL, $1, NULL);
  }
;

exists_expression:
  EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES {
    $$ = addNode(EXISTS_EXPRESSION, $3, NULL, $1, NULL);
  }
;

expression:
  expression COMMA assignment_expression
|  assignment_expression
;

assignment_expression:
  unary_expression ASSIGN assignment_expression {
    $$ = addNode(ASSIGNMENT_EXPRESSION, $1, $3, $2, NULL);
  }
|  relational_expression
;


relational_expression:
  arithmetic_expression
| relational_expression CLT arithmetic_expression {
    $$ = addNode(RELATIONAL_EXPRESSION, $1, $3, $2, NULL);
  }
| relational_expression CLE arithmetic_expression {
    $$ = addNode(RELATIONAL_EXPRESSION, $1, $3, $2, NULL);
  }
| relational_expression CEQ arithmetic_expression {
    $$ = addNode(RELATIONAL_EXPRESSION, $1, $3, $2, NULL);
  }
| relational_expression CGE arithmetic_expression {
    $$ = addNode(RELATIONAL_EXPRESSION, $1, $3, $2, NULL);
  }
| relational_expression CGT arithmetic_expression {
    $$ = addNode(RELATIONAL_EXPRESSION, $1, $3, $2, NULL);
  }
| relational_expression CNE arithmetic_expression {
    $$ = addNode(RELATIONAL_EXPRESSION, $1, $3, $2, NULL);
  }
;

arithmetic_expression:
  logical_expression
| arithmetic_expression ADD_OP logical_expression {
    $$ = addNode(ARITHMETIC_EXPRESSION, $1, $3, $2, NULL);
  }
| arithmetic_expression SUB_OP logical_expression  {
    $$ = addNode(ARITHMETIC_EXPRESSION, $1, $3, $2, NULL);
  }
| arithmetic_expression MULT logical_expression  {
    $$ = addNode(ARITHMETIC_EXPRESSION, $1, $3, $2, NULL);
  }
| arithmetic_expression DIVIDE logical_expression  {
    $$ = addNode(ARITHMETIC_EXPRESSION, $1, $3, $2, NULL);
  }
;

logical_expression:
  set_expression
| NEGATE set_expression {
    $$ = addNode(LOGICAL_EXPRESSION, $2, NULL, $1, NULL);
  }
| logical_expression AND set_expression {
    $$ = addNode(LOGICAL_EXPRESSION, $1, $3, $2, NULL);
  }
| logical_expression OR  set_expression  {
    $$ = addNode(LOGICAL_EXPRESSION, $1, $3, $2, NULL);
  }
;

set_expression:
  cast_expression
| set_expression IN cast_expression {
    $$ = addNode(SET_EXPRESSION, $1, $3, $2, NULL);
  }
;

cast_expression:
  unary_expression
| LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression {
    $$ = addNode(CAST_EXPRESSION, $2, $4, NULL, NULL);
  }
;

type_name:
  specifier_qualifier_list {
    $$ = addNode(TYPE_NAME, $1, NULL, NULL, NULL);
  }
| specifier_qualifier_list abstract_declarator {
    $$ = addNode(TYPE_NAME, $1, $2, NULL, NULL);
  }
| specifier_qualifier_list declarator {
    $$ = addNode(TYPE_NAME, $1, $2, NULL, NULL);
  }
;

specifier_qualifier_list:
  TYPE specifier_qualifier_list {
    $$ = addNode(SPECIFIER_QUALIFIER_LIST, $2, NULL, $1, NULL);
    insertType($1);
    insertScopeType($1);
  }
| TYPE {
    $$ = addNode(SPECIFIER_QUALIFIER_LIST, NULL, NULL, $1, NULL);
    insertType($1);
    insertScopeType($1);
  }
;

unary_expression:
  postfix_expression
| set_expression_list
| function_expression
| SUB_OP cast_expression {
    $$ = addNode(UNARY_EXPRESSION, $2, NULL, NULL, $1);
  }
;

function_expression:
  ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES {
    $$ = addNode(FUNCTION_EXPRESSION, $3, NULL, NULL, $1);
  }
;

postfix_expression:
  primary_expression
| LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET {
    $$ = addNode(POSTFIX_EXPRESSION, $2, $5, NULL, NULL);
  }
| LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET {
    $$ = addNode(POSTFIX_EXPRESSION, $2, $5, NULL, NULL);
  }
;

initializer_list:
  initializer
| initializer_list COMMA initializer {
    $$ = addNode(INITIALIZER_LIST, $1, $3, NULL, NULL);
  }
;

initializer:
  assignment_expression
| LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET {
    $$ = addNode(INITIALIZER, $2, NULL, NULL, NULL);
  }
| LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET {
    $$ = addNode(INITIALIZER, $2, NULL, NULL, NULL);
  }
;

primary_expression:
  ID {
    $$ = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, $1);
  }
| INTEGER {
    $$ = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, $1);
  }
| FLOAT {
    $$ = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, $1);
  }
| STRING {
    $$ = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, $1);
  }
| EMPTY {
    $$ = addNode(PRIMARY_EXPRESSION, NULL, NULL, NULL, $1);
  }
| LEFT_PARENTHESES expression RIGHT_PARENTHESES {
    $$ = addNode(PRIMARY_EXPRESSION, $2, NULL, NULL, NULL);
  }
;

%%

void yyerror(const char* msg) {
  fprintf(stderr, "\n%s -- line: %d, column: %d\n", msg, line_number, column_number);
  syntax_error++;
}


int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
    yyin = fopen( argv[0], "r" );
  else
    yyin = stdin;
  initializeGlobalScope();
  yyparse();
  yylex_destroy();
  printSymbolTable();
  // if(!(syntax_error || lex_error)){
  //   printTree(syntax_error, lex_error, parserTree);
  //   freeTree(parserTree);
  // }
  return 0;
}
