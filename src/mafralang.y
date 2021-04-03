%define parse.error verbose
%define lr.type canonical-lr

%{
  #include <stdlib.h>
  #include <stdio.h>

  #define DECLARATION 1
  #define VARIABLE_DECLARATION 2
  #define FUNCTION_DECLARATION 3
  #define PARAMATERS 4
  #define PARAMATER 5
  #define COMPOUND_STATEMENT 6
  #define EXPRESSION_STATEMENT 7
  #define CONDITIONAL_STATEMENT 8
  #define ITERATION_STATEMENT 9
  #define RETURN_STATEMENT 10
  #define IS_SET_STATEMENT 11
  #define REMOVE_STATEMENT 12
  #define ADD_STATEMENT 13
  #define SET_EXPRESSION 14
  #define EXPRESSION 15
  #define ARITHMETIC_OPERATION 16
  #define LOGICAL_OPERATION 17
  #define RELATIONAL_OPERATION 18
  #define INPUT_OPERATION 19
  #define OUTPUT_OPERATION 20
  #define QUOT 21
  #define IDENTIFIER 22
  #define STRING 23
  #define INTEG 24
  #define DECIMAL 25
  #define EMP 26

  int yylex();
  int yyerror(const char *s);
  extern int yylex_destroy(void);
  extern FILE *yyin;
  extern int total_errors;
  extern int line_number;
  extern int lex_error;


  typedef struct ast_node {
    int node_class;
    char* type;
    char* value;
    struct ast_node *left;
    struct ast_node *right;
  } ast_node;
  
  struct ast_node* parserTree = NULL;

  struct ast_node* addNode(int node_class, struct ast_node *left, struct ast_node *right);
  void print_class(int node_class);
  void print_depth(int depth);
  void print_tree(struct ast_node *tree, int depth);
  void free_tree(ast_node* node);
%}

%union{
  char* symbol;
  char* strType;
  int iType;
  float fType;
  struct ast_node* stmt;
}

%token <fType>    REAL
%token <iType>    INTEGER
%token <strType>  ID EMPTY TYPE
%token <strType>  RETURN IF FOR FORALL
%token <strType>  READ WRITE WRITELN
%token <strType>  IS_SET REMOVE ADD IN STR
%token <symbol>   LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET
%token <symbol>   LEFT_PARENTHESES RIGHT_PARENTHESES QUOTES
%token <symbol>   SEMICOLON COMMA
%token <symbol>   NEGATE AND OR
%token <symbol>   ADD_OP SUB_OP DIVIDE MULT ASSIGN
%token <symbol>   CLT CLE CEQ CGE CGT CNE

%left CLT CLE CEQ CGE CGT CNE
%left ADD_OP SUB_OP DIVIDE MULT
%right ASSIGN

%nonassoc IF ELSE

%type <stmt> program declarations declaration varDeclaration funcDeclaration paramaters paramater
%type <stmt> statement compound_statement expression_statement conditional_statement
%type <stmt> iteration_statement return_statement is_set_statement remove_statement
%type <stmt> add_statement expression operation variable arithmetic_operation constant
%type <stmt> logical_operation relational_operation input_operation output_operation
%type <stmt> set_expression string

%start program

%%

program:
  declarations { parserTree = $1; }
;

declarations:
  declarations declaration { $$ = addNode(DECLARATION, $1, $2);}
| declaration { $$ = $1; }
;

declaration:
  varDeclaration  { $$ = $1; }
| funcDeclaration { $$ = $1; }
;

varDeclaration:
  TYPE ID SEMICOLON { $$ = addNode(VARIABLE_DECLARATION, NULL, NULL);}
;

funcDeclaration:
  TYPE ID LEFT_PARENTHESES paramaters RIGHT_PARENTHESES compound_statement {
    $$ = addNode(FUNCTION_DECLARATION, NULL, $6);
  }
;

paramaters:
  paramaters COMMA paramater { $$ = addNode(PARAMATERS, $1, $3);}
| paramater { $$ = $1; }
|           { $$ = NULL; }
;

paramater:
  TYPE ID { $$ = addNode(PARAMATER, NULL, NULL);}
;

statement:
  compound_statement     { $$ = $1; }
| expression_statement   { $$ = $1; }
| conditional_statement  { $$ = $1; }
| iteration_statement    { $$ = $1; }
| return_statement       { $$ = $1; }
| is_set_statement       { $$ = $1; }
| remove_statement       { $$ = $1; }
| add_statement          { $$ = $1; }
;

compound_statement:
  LEFT_CURLY_BRACKET statement RIGHT_CURLY_BRACKET { $$ = addNode(COMPOUND_STATEMENT, NULL, $2); }
;

expression_statement:
  expression SEMICOLON { $$ = addNode(EXPRESSION_STATEMENT, $1, NULL); }
;

conditional_statement:
  IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement { 
    $$ = addNode(CONDITIONAL_STATEMENT, $3, $5);
  }
| IF LEFT_PARENTHESES expression RIGHT_PARENTHESES compound_statement ELSE compound_statement { 
    $$ = addNode(CONDITIONAL_STATEMENT, addNode(CONDITIONAL_STATEMENT, $3, $5), $7);;
  }
;

iteration_statement:
  FOR LEFT_PARENTHESES expression SEMICOLON expression SEMICOLON expression RIGHT_PARENTHESES statement { $$ = addNode('P', $3, $9); }
| FORALL LEFT_PARENTHESES set_expression RIGHT_PARENTHESES statement { $$ = addNode(ITERATION_STATEMENT, $3, $5); }
;

return_statement:
  RETURN LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON { $$ = addNode(RETURN_STATEMENT, $3, NULL);}
;

is_set_statement:
  IS_SET LEFT_PARENTHESES set_expression RIGHT_PARENTHESES compound_statement[S] {
    $$ = addNode(IS_SET_STATEMENT, $3, $5);
  }
;

remove_statement:
  REMOVE LEFT_PARENTHESES set_expression[E] RIGHT_PARENTHESES SEMICOLON { $$ = addNode(REMOVE_STATEMENT, $3, NULL);}
;

add_statement:
  ADD LEFT_PARENTHESES set_expression[E] RIGHT_PARENTHESES SEMICOLON { $$ = addNode(ADD_STATEMENT, $3, NULL);} 
;

set_expression:
  expression IN expression { $$ = addNode(SET_EXPRESSION, $1, $3);}
;

expression:
  expression COMMA operation { $$ = addNode(EXPRESSION, $1, $3);}
| expression COMMA variable { $$ = addNode(EXPRESSION, $1, $3);}
| operation { $$ = $1; }
| variable { $$ = $1; }
;

operation:
  arithmetic_operation { $$ = $1; }
| logical_operation { $$ = $1; }
| relational_operation { $$ = $1; }
| input_operation { $$ = $1; }
| output_operation { $$ = $1; }
;

arithmetic_operation:
  variable ADD_OP variable  { $$ = addNode(ARITHMETIC_OPERATION, $1, $3);} 
| variable SUB_OP variable  { $$ = addNode(ARITHMETIC_OPERATION, $1, $3);}  
| variable DIVIDE variable  { $$ = addNode(ARITHMETIC_OPERATION, $1, $3);}  
| variable MULT variable    { $$ = addNode(ARITHMETIC_OPERATION, $1, $3);}  
| variable ASSIGN variable  { $$ = addNode(ARITHMETIC_OPERATION, $1, $3);}  
;

logical_operation:
  NEGATE variable           { $$ = addNode(LOGICAL_OPERATION, NULL, $2);}
| variable AND variable     { $$ = addNode(LOGICAL_OPERATION, $1, $3);}
| variable OR variable      { $$ = addNode(LOGICAL_OPERATION, $1, $3);}
;

relational_operation:
  variable CLT variable  { $$ = addNode(RELATIONAL_OPERATION, $1, $3);}
| variable CLE variable  { $$ = addNode(RELATIONAL_OPERATION, $1, $3);}
| variable CEQ variable  { $$ = addNode(RELATIONAL_OPERATION, $1, $3);}
| variable CGE variable  { $$ = addNode(RELATIONAL_OPERATION, $1, $3);}
| variable CGT variable  { $$ = addNode(RELATIONAL_OPERATION, $1, $3);}
| variable CNE variable  { $$ = addNode(RELATIONAL_OPERATION, $1, $3);}
;

input_operation:
  READ LEFT_PARENTHESES variable LEFT_PARENTHESES { $$ = addNode(INPUT_OPERATION, $3, NULL);}
;

output_operation:
  WRITE LEFT_PARENTHESES variable LEFT_PARENTHESES   { $$ = addNode(OUTPUT_OPERATION, $3, NULL);}
| WRITELN LEFT_PARENTHESES variable LEFT_PARENTHESES { $$ = addNode(OUTPUT_OPERATION, $3, NULL);}

;

variable:
  constant { $$ = $1; }
| QUOTES string QUOTES {$$ = addNode(QUOT, NULL, $2);}
| ID {$$ = addNode(IDENTIFIER, NULL, NULL);}
;

string:
  STR {$$ = addNode(STRING, NULL, NULL);}
;

constant:
  INTEGER   { $$ = addNode(INTEG, NULL, NULL);  }
| REAL      { $$ = addNode(DECIMAL, NULL, NULL);  }
| EMPTY     { $$ = addNode(EMP, NULL, NULL);  }
;

%%

void print_class(int node_class){
  switch(node_class){
    case DECLARATION:
      printf("Declaration");
    break;
    case VARIABLE_DECLARATION:
      printf("Variable_Declaration");
    break;
    case FUNCTION_DECLARATION:
      printf("Variable_Declaration");
    break;
    case PARAMATERS:
      printf("Paramaters");
    break;
    case PARAMATER:
      printf("Paramater");
    break;
    case COMPOUND_STATEMENT:
      printf("Compound_Statement");
    break;
    case EXPRESSION_STATEMENT:
      printf("Expression_Statement");
    break;
    case CONDITIONAL_STATEMENT:
      printf("Conditional_Statement");
    break;
    case ITERATION_STATEMENT:
      printf("Iteration_Statement");
    break;
    case RETURN_STATEMENT:
      printf("Return_Statement");
    break;
    case IS_SET_STATEMENT:
      printf("Is_Set_Statement");
    break;
    case REMOVE_STATEMENT:
      printf("Remove_Statement");
    break;
    case ADD_STATEMENT:
      printf("Add_Statement");
    break;
    case SET_EXPRESSION:
      printf("Set_Expression");
    break;
    case EXPRESSION:
      printf("Expression");
    break;
    case ARITHMETIC_OPERATION:
      printf("Arithmetic_Operation");
    break;
    case LOGICAL_OPERATION:
      printf("Logical_Operation");
    break;
    case RELATIONAL_OPERATION:
      printf("Relational_Operation");
    break;
    case INPUT_OPERATION:
      printf("Input_Operation");
    break;
    case OUTPUT_OPERATION:
      printf("Output_Operation");
    break;
    case QUOT:
      printf("Quotes");
    break;
    case IDENTIFIER:
      printf("Identifier");
    break;
    case STRING:
      printf("String");
    break;
    case INTEG:
      printf("Integer");
    break;
    case DECIMAL:
      printf("Decimal");
    break;
    case EMP:
      printf("Empty");
    break;
  }
  printf(" | ");
}

void print_depth(int depth) {
  int i = depth;
  while(i != 0){
      printf("-");
      i--;
  }
}

void print_tree(struct ast_node *tree, int depth) {
  if (tree) {
    print_depth(depth);
    print_class(tree->node_class);
    if (tree->type != NULL){
        printf("type: %s | ", tree->type);
    }
    if (tree->value != NULL){
        printf("value: %s | ", tree->value);
    }
    printf("\n");
    print_tree(tree->left, depth + 1);
    print_tree(tree->right, depth + 1);
  }
}

void free_tree(struct ast_node* node){
    if(node == NULL) return;
    if(node->left) free_tree(node->left);
    if(node->right) free_tree(node->right);
    free(node);
}

struct ast_node* addNode(int node_class, struct ast_node *left, struct ast_node *right){
  struct ast_node* ast_node = (struct ast_node*)calloc(1, sizeof(struct ast_node));

  ast_node->node_class = node_class;
  ast_node->left = left;
  ast_node->right = right;

  return ast_node;
}

int main(int argc, char **argv) {
    ++argv, --argc;
    if(argc > 0)
        yyin = fopen( argv[0], "r" );
    else
        yyin = stdin;
    yyparse();
    if(total_errors == 0){
        printf("\n\n----------  ABSTRACT SYNTAX TREE ----------\n\n");
        print_tree(parserTree, 0);
    }
    yylex_destroy();
    free_tree(parserTree);
    return 0;
}