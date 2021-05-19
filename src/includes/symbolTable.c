#include "symbolTable.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_ORANGE  "\x1b[37m"
#define ANSI_COLOR_RESET   "\x1b[0m"

char* type_name = NULL;
char* scope_type_name = NULL;
char* scope_symbol_name = NULL;

void initializeGlobalScope(){
  scope* s = (scope *)malloc(sizeof *s);
  s->name = "global";
  global_stack = s;
}

scope* getStackHead() {
  scope* s = global_stack;
  while(s->next != NULL) {
    s = s->next;
  }
  return s;
}

void insertScopeType(char* type) {
  scope_type_name = type;
}

void insertScopeName(char* name) {
  scope_symbol_name = name;
}

void pushStack(){
  scope* s = (scope *)malloc(sizeof *s);
  scope* stack_head;

  s->type = scope_type_name;
  s->name = scope_symbol_name;

  stack_head = getStackHead();
  stack_head->next = s;
}

void popStack(){
  scope* s = global_stack;
  if(strcmp(s->name, "global") == 0 && s->next == NULL) {
    return;
  }
  while(s->next->next != NULL){
    s = s->next;
  }
  free(s->next);
  s->next = NULL;
}

char* concat(const char *s1, const char *s2) {
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcat(result, "::");
    strcat(result, s2);
    return result;
}

void insertSymbol(char* symbol) {
  symbol_node* s;
  scope* scope = getStackHead();
  char *key = concat(symbol, scope->name);
  HASH_FIND_STR(global_symbol_table, key, s);
  if(s == NULL) {
    s = createSymbol(key, symbol, type_name, scope->name);
    HASH_ADD_STR(global_symbol_table, key, s);
  } else {
    checkSemanticErrorRedeclaration(symbol, scope->name);
  }
}

void insertType(char* type) {
  type_name = type;
}

symbol_node* createSymbol(char* key, char* symbol, char* type, char* name) {
  symbol_node* s = (symbol_node *)malloc(sizeof *s);
  s->key = key;
  s->type = type;
  s->symbol = symbol;
  s->scope_name = name;
  return s;
}

symbol_node* findSymbol(char* symbol) {
  symbol_node* s;
  scope* scope = getStackHead();
  char *key = concat(symbol, scope->name);
  HASH_FIND_STR(global_symbol_table, key, s);
  if(s == NULL && strcmp(scope->name, "global") != 0) {
    scope = global_stack;
    key = concat(symbol, scope->name);
    HASH_FIND_STR(global_symbol_table, key, s);
  }
  if(s == NULL) {
    checkSemanticErrorNotDeclared(symbol);
  }
  return s;
}

void checkSemanticErrorRedeclaration(char* symbol, char* name) {
  printf("\nsemantic error, %s was already declared in %s \n", symbol, name);
  semantic_error += 1;
}

void checkSemanticErrorMain() {
  symbol_node* s;
  char* key = concat("main", global_stack->name);
  HASH_FIND_STR(global_symbol_table, key, s);
  if(s == NULL){
    printf("\nsemantic error, function main not found \n");
    semantic_error += 1;
  }
}

void checkSemanticErrorNotDeclared(char* symbol) {
  printf("\nsemantic error, %s was not declared \n", symbol);
  semantic_error += 1;
}

void printSymbolTable() {
  symbol_node *s;
  printf("\n\n\t\t\t\t\t\t\t\t----------  SYMBOL TABLE ----------\t\t\t\t\t\t\t\t\n\n");
  for(s=global_symbol_table; s != NULL; s=s->hh.next) {
    printf("| Type: %12s ", s->type);
    printf("| Symbol: %12s ", s->symbol);
    printf("| Scope: %12s | \n", s->scope_name);
  }
}

void freeSymbolTable(){
  symbol_node *s, *tmp;
  HASH_ITER(hh, global_symbol_table, s, tmp) {
      HASH_DEL(global_symbol_table, s);
      free(s);
  }
}