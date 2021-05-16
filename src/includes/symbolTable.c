#include "symbolTable.h"

char* type_name = NULL;

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
  s->type = type_name;
  s->symbol = symbol;
  HASH_ADD_STR(global_symbol_table, symbol, s);
  return s;
}

void insertType(char* type) {
  type_name = type;
}

void printSymbolTable() {
  symbol_node *s;
  printf("\n\n\t\t\t\t\t\t\t\t----------  SYMBOL TABLE ----------\t\t\t\t\t\t\t\t\n\n");
  for(s=global_symbol_table; s != NULL; s=s->hh.next) {
    printf("| Type: %12s", s->type);
    printf("| Symbol: %12s| \n", s->symbol);
    // printf("| Scope: %12s| \n", s->scope_name);
  }
}