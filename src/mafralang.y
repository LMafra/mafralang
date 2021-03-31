
%define parse.error verbose
%define lr.type canonical-lr


%{
  #include <stdlib.h>
  #include <stdio.h>

  int yylex();
  extern int yylex_destroy(void);
  extern int total_errors;
  extern int line;
  extern int lex_error;
  extern void yyerror(const char* msg);
  extern FILE *yyin;

  typedef struct ast_node {
    int node_class;
    char* type;
    char* value;
    struct ast_node *left;
    struct ast_node *right;
  } ast_node;
  
  struct ast_node* parserTree = NULL;

  struct ast_node* addNode(int node_class, struct ast_node *left, struct ast_node *right);
  void free_tree(struct node* node);
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
  declarations declaration { $$ = addNode('D', $1, $2);}
| declaration { $$ = $1; }
;

declaration:
  varDeclaration  { $$ = $1; }
| funcDeclaration { $$ = $1; }
;

varDeclaration:
  TYPE ID SEMICOLON { $$ = NULL;}
;

funcDeclaration:
  TYPE ID LEFT_PARENTHESES paramaters RIGHT_PARENTHESES compound_statement {
    $$ = addNode('F', NULL, $6);
  }
;

paramaters:
  paramaters COMMA paramater { $$ = addNode('P', $1, $3);}
| paramater { $$ = $1; }
|           { $$ = NULL; }
;

paramater:
  TYPE ID { $$ = addNode('P', NULL, NULL);}
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
  LEFT_CURLY_BRACKET statement RIGHT_CURLY_BRACKET { $$ = addNode('P', NULL, $2); }
;

expression_statement:
  expression SEMICOLON { $$ = $1; }
;

conditional_statement:
  IF LEFT_PARENTHESES expression RIGHT_PARENTHESES statement { 
    $$ = addNode('P', $3, $5);
  }
| IF LEFT_PARENTHESES expression RIGHT_PARENTHESES compound_statement ELSE compound_statement { 
    $$ = addNode('P', addNode('P', $3, $5), $7);;
  }
;

iteration_statement:
  FOR LEFT_PARENTHESES expression SEMICOLON expression SEMICOLON expression RIGHT_PARENTHESES statement { $$ = addNode('P', $3, $9); }
| FORALL LEFT_PARENTHESES set_expression RIGHT_PARENTHESES statement { $$ = addNode('P', $3, $5); }
;

return_statement:
  RETURN LEFT_PARENTHESES expression RIGHT_PARENTHESES SEMICOLON { $$ = $3;}
;

is_set_statement:
  IS_SET LEFT_PARENTHESES set_expression RIGHT_PARENTHESES compound_statement[S] {
    $$ = addNode('P', $3, $5);
  }
;

remove_statement:
  REMOVE LEFT_PARENTHESES set_expression[E] RIGHT_PARENTHESES SEMICOLON { $$ = $3;}
;

add_statement:
  ADD LEFT_PARENTHESES set_expression[E] RIGHT_PARENTHESES SEMICOLON { $$ = $3;} 
;

set_expression:
  expression IN expression
;

expression:
  expression COMMA operation
| expression COMMA variable
| operation
| variable
;

operation:
  arithmetic_operation
| logical_operation
| relational_operation
| input_operation
| output_operation
;

arithmetic_operation:
  variable ADD_OP variable
| variable SUB_OP variable
| variable DIVIDE variable
| variable MULT variable
| variable ASSIGN variable
;

logical_operation:
  NEGATE variable {$$ = $2;}
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
  READ LEFT_PARENTHESES variable LEFT_PARENTHESES {$$ = $3;}
;

output_operation:
  WRITE LEFT_PARENTHESES variable LEFT_PARENTHESES   {$$ = $3;}
| WRITELN LEFT_PARENTHESES variable LEFT_PARENTHESES {$$ = $3;}

;

variable:
  constant
| QUOTES string QUOTES { $$ = $2; }
| ID {$$ = addNode('P', NULL, NULL);}
;

string:
  STR {$$ = addNode('P', NULL, NULL);}
;

constant:
  INTEGER   { $$ = addNode('P', NULL, NULL);  }
| REAL      { $$ = addNode('P', NULL, NULL);  }
| EMPTY     { $$ = addNode('P', NULL, NULL);  }
;

%%

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
        print_tree(parser_tree, 0);
    }
    yylex_destroy();
    free_tree(parserTree);
    return 0;
}