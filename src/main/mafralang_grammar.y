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
%token <strType>  IS_SET REMOVE ADD IN STRING EXISTS
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
  translation_unit { parserTree = $1; }
;

translation_unit:
  external_declaration {
    printf("external_declaration \n");
  }
| translation_unit external_declaration
;

external_declaration:
  function_definition {
    printf("function_definition \n");
  }
| declaration {
  printf("declaration \n");
}
;

function_definition:
  declaration_specifiers declarator declaration_list compound_statement {
  printf("function_definition 1 \n");
}
| declaration_specifiers declarator compound_statement {
  printf("function_definition 2 \n");
}
;

declaration_list:
  declaration {
  printf("declaration_list declaration \n");
}
| declaration_list declaration {
  printf("declaration_list \n");
}
;

declaration:
  declaration_specifiers SEMICOLON {
  printf("declaration_specifiers \n");
}
| declaration_specifiers init_declarator_list SEMICOLON {
  printf("declaration_specifiers init_declarator_list \n");
}
;

declaration_specifiers:
  TYPE { $$ = NULL; }
| TYPE declaration_specifiers { $$ = NULL; }
;

init_declarator_list:
  declarator
| init_declarator_list COMMA declarator
;

declarator:
  direct_declarator { $$ = NULL; }
;

direct_declarator:
  ID { $$ = NULL; }
| LEFT_PARENTHESES declarator RIGHT_PARENTHESES { $$ = $2; }
| direct_declarator LEFT_PARENTHESES RIGHT_PARENTHESES
| direct_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES
| direct_declarator LEFT_PARENTHESES identifier_list RIGHT_PARENTHESES
;

identifier_list:
  ID { $$ = NULL; }
| identifier_list COMMA ID { $$ = NULL; }
;


parameter_list:
  parameter_declaration
| parameter_list COMMA parameter_declaration
;

parameter_declaration:
  declaration_specifiers declarator
| declaration_specifiers abstract_declarator
;

abstract_declarator:
  direct_abstract_declarator { $$ = NULL; }
;

direct_abstract_declarator:
  LEFT_PARENTHESES abstract_declarator RIGHT_PARENTHESES { $$ = $2; }
| LEFT_PARENTHESES RIGHT_PARENTHESES { $$ = NULL; }
| direct_abstract_declarator LEFT_PARENTHESES RIGHT_PARENTHESES
| direct_abstract_declarator LEFT_PARENTHESES parameter_list RIGHT_PARENTHESES
;

compound_statement:
  LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET { $$ = NULL; }
| LEFT_CURLY_BRACKET block_item_list RIGHT_CURLY_BRACKET { $$ = $2; }
;

block_item_list:
  block_item 
| block_item_list block_item
;

block_item:
  declaration { $$ = $1; }
| statement
;

statement:
  expression_statement { $$ = $1; }
| compound_statement { $$ = $1; }
| conditional_statement { $$ = $1; }
| iteration_statement { $$ = $1; }
| input_statement { $$ = $1; }
| output_statement { $$ = $1; }
| return_statement { $$ = $1; }
;

expression_statement:
  SEMICOLON { $$ = NULL; }
| expression SEMICOLON
;

conditional_statement:
  IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement %prec THEN { $$ = $5; }
| IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement ELSE statement { $$ = $7; }
;

iteration_statement:
  FOR LEFT_PARENTHESES expression_statement expression_statement expression RIGHT_PARENTHESES statement { $$ = $7; }
| FOR LEFT_PARENTHESES expression_statement expression_statement RIGHT_PARENTHESES statement { $$ = $6; }
| FOR LEFT_PARENTHESES declaration expression_statement expression RIGHT_PARENTHESES statement { $$ = $7; }
| FOR LEFT_PARENTHESES declaration expression_statement RIGHT_PARENTHESES statement { $$ = $6; }
| FORALL LEFT_PARENTHESES expression RIGHT_PARENTHESES statement { $$ = $5; }
;

input_statement:
  READ LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON { $$ = NULL; }
;

output_statement:
  WRITE LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON { $$ = NULL; }
| WRITELN LEFT_PARENTHESES primary_expression RIGHT_PARENTHESES SEMICOLON { $$ = NULL; }
;

return_statement:
  RETURN expression SEMICOLON { $$ = NULL; }
;

set_expression_list:
  is_set_expression { $$ = $1; }
| add_expression { $$ = $1; }
| remove_expression { $$ = $1; }
| exists_expression { $$ = $1; }
;

is_set_expression:
  IS_SET LEFT_PARENTHESES ID RIGHT_PARENTHESES { $$ = NULL; }
;

add_expression:
  ADD LEFT_PARENTHESES expression RIGHT_PARENTHESES { $$ = $3; }
;

remove_expression:
  REMOVE LEFT_PARENTHESES expression RIGHT_PARENTHESES { $$ = $3; }
;

exists_expression:
  EXISTS LEFT_PARENTHESES expression RIGHT_PARENTHESES { $$ = $3; }
;

expression:
  assignment_expression
| expression COMMA assignment_expression
;

assignment_expression:
  arithmetic_expression
| unary_expression ASSIGN assignment_expression
;

arithmetic_expression:
  logical_expression
| arithmetic_expression ADD_OP logical_expression
| arithmetic_expression SUB_OP logical_expression
| arithmetic_expression MULT logical_expression
| arithmetic_expression DIVIDE logical_expression
;

logical_expression:
  relational_expression
| NEGATE relational_expression { $$ = $2; }
| logical_expression AND relational_expression
| logical_expression OR  relational_expression
;

relational_expression:
  set_expression
| relational_expression CLT set_expression
| relational_expression CLE set_expression
| relational_expression CEQ set_expression
| relational_expression CGE set_expression
| relational_expression CGT set_expression
| relational_expression CNE set_expression
;

set_expression:
  cast_expression
| set_expression IN cast_expression
;

cast_expression:
  unary_expression
| LEFT_PARENTHESES type_name RIGHT_PARENTHESES cast_expression { $$ = $4; }
;

type_name:
  specifier_qualifier_list
| specifier_qualifier_list abstract_declarator
| specifier_qualifier_list declarator
;

specifier_qualifier_list:
  TYPE specifier_qualifier_list { $$ = NULL; }
| TYPE { $$ = NULL; }
;

unary_expression:
  postfix_expression
| SUB_OP cast_expression { $$ = NULL; }
| set_expression_list
| function_expression
;

function_expression:
  ID LEFT_PARENTHESES initializer_list RIGHT_PARENTHESES { $$ = NULL; }
;

postfix_expression:
  primary_expression
| LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET { $$ = $5; }
| LEFT_PARENTHESES type_name RIGHT_PARENTHESES LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET { $$ = $5; }
;

initializer_list:
  initializer
| initializer_list COMMA initializer
;

initializer:
  assignment_expression
| LEFT_CURLY_BRACKET initializer_list RIGHT_CURLY_BRACKET { $$ = $2; }
| LEFT_CURLY_BRACKET initializer_list COMMA RIGHT_CURLY_BRACKET { $$ = $2; }
;

primary_expression:
  ID { $$ = NULL; }
| INTEGER { $$ = NULL; }
| FLOAT { $$ = NULL; }
| STRING { $$ = NULL; }
| EMPTY { $$ = NULL; }
| LEFT_PARENTHESES expression RIGHT_PARENTHESES { $$ = $2; }
;

%%

int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
    yyin = fopen( argv[0], "r" );
  else
    yyin = stdin;
  // initializeGlobalScope();
  yyparse();
  yylex_destroy();
  // if(syntax_error == 0 && lex_error == 0){
  //   printf("\n\n\t\t\t\t\t\t\t\t----------  ABSTRACT SYNTAX TREE ----------\t\t\t\t\t\t\t\t\n\n");
  //   printTree(parserTree, 0);
  // }
  // printSymbolTable();
  // freeTree(parserTree);
  // freeSymbolTable();
  return 0;
}
