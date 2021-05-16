#include "symbolTable.h"

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

void insertSymbol(char* symbol) {
  symbol_node* s = createSymbol(symbol, type_name);
  HASH_FIND_STR(global_symbol_table, symbol, s);
}

void insertType(char* type) {
  type_name = type;
}

symbol_node* createSymbol(char* symbol, char* type) {
  symbol_node* s = (symbol_node *)malloc(sizeof *s);
  scope* scope = getStackHead();
  s->type = type;
  s->symbol = symbol;
  s->scope_name = scope->name;
  HASH_ADD_STR(global_symbol_table, symbol, s);
  return s;
}

void printSymbolTable() {
  symbol_node *s;
  printf("\n\n\t\t\t\t\t\t\t\t----------  SYMBOL TABLE ----------\t\t\t\t\t\t\t\t\n\n");
  for(s=global_symbol_table; s != NULL; s=s->hh.next) {
    printf("| Type: %12s", s->type);
    printf("| Symbol: %12s", s->symbol);
    printf("| Scope: %12s| \n", s->scope_name);
  }
}