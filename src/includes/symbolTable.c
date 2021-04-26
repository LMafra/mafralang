#include "symbolTable.h"


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

void pushStack(char* name, char* type){
  scope* s = (scope *)malloc(sizeof *s);
  scope* stack_head;

  s->type = type;
  s->name = name;

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

symbol_node* insertSymbol(char* symbol) {
  symbol_node* s = (symbol_node *)malloc(sizeof *s);
  s->symbol = symbol;
  HASH_ADD_STR(global_symbol_table, symbol, s);
  return s;
}

symbol_node* insertType(char* type) {
  symbol_node* s = (symbol_node *)malloc(sizeof *s);
  s->type = type;
  HASH_ADD_STR(global_symbol_table, type, s);
  return s;
}

symbol_node* insertScope(char* scope_name) {
  symbol_node* s = (symbol_node *)malloc(sizeof *s);
  scope* scope = getStackHead();
  printf("%s", scope->name);
  s->scope_name = scope->name;
  HASH_ADD_STR(global_symbol_table, scope_name, s);
  return s;
}

void printSymbolTable() {
  symbol_node *s;
  printf("\n\n\t\t\t\t\t\t\t\t----------  SYMBOL TABLE ----------\t\t\t\t\t\t\t\t\n\n");
  for(s=global_symbol_table; s != NULL; s=s->hh.next) {
    if(!(s->type == NULL))
      printf("| Type: %12s", s->type);
    if(!(s->symbol == NULL))
      printf("| Symbol: %12s| \n", s->symbol);
    if(!(s->scope_name == NULL))
      printf("| Scope: %12s| \n", s->scope_name);
  }
}