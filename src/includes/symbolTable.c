#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "symbolTable.h"

struct scope* stack = NULL;
struct symbol_node* symbol_table = NULL;

symbol_node* createSymbol(char* key, char *name, char* type, char symbol, char* scope_name){
  symbol_node *s = (symbol_node *)malloc(sizeof *s);
  s->key = key;
  s->name = name;
  s->type = type;
  s->symbol = symbol;
  s->scope_name = scope_name;
  return s;
}

char* concat(const char *s1, const char *s2){
  char *result = malloc(strlen(s1) + strlen(s2) + 1);
  strcpy(result, s1);
  strcat(result, "::");
  strcat(result, s2);
  return result;
}

scope* getStackHead() {
  scope* s = stack;
  while(s->next != NULL) {
    s = s->next;
  }
  return s;
}

void pushStack(char* scope_name, char* type){
  scope* s = (scope *)malloc(sizeof *s);
  scope* stack_head;

  s->type = type;
  s->scope_name = scope_name;

  stack_head = getStackHead();
  stack_head->next = s;
}

void popStack(){
  scope* s = stack;
  if(strcmp(s->scope_name, "global") == 0 && s->next == NULL) {
    return;
  }
  while(s->next->next != NULL){
    s = s->next;
  }
  free(s->next);
  s->next = NULL;
}

void addSymbol(char *name, char* type, char symbol) {
  symbol_node *s;
  scope* scope = getStackHead();
  char *key = concat(name, scope->scope_name);
  HASH_FIND_STR(symbol_table, key, s);
  if(s == NULL){
    s = createSymbol(key, name, type, symbol, scope->scope_name);
    HASH_ADD_STR(symbol_table, key, s);
  }
}

void printSymbolTable() {
  symbol_node *s;
  printf("\n\n\t\t\t\t\t\t\t\t---------- SYMBOL TABLE ----------\t\t\t\t\t\t\t\t\n\n");
  for(s=symbol_table; s != NULL; s=s->hh.next) {
    printf("| key: %-10s\t |", s->key);
    printf("| name: %-10s\t |", s->name);
    printf("| type: %-10s\t |", s->type);
    printf("| symbol: %-10c\t |", s->symbol);
    printf("| scope: %-10s\t |", s->scope_name);
    printf("\n\n\n");
  }
}

void initializeGlobalScope(){
  scope* s = (scope *)malloc(sizeof *s);
  s->scope_name = "global";
  stack = s;
}

void freeSymbolTable(){
  symbol_node *s, *tmp;
  HASH_ITER(hh, symbol_table, s, tmp) {
    HASH_DEL(symbol_table, s);
    free(s);
  }
}