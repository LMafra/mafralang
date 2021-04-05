#ifndef SYMBOLTABLE_h
#define SYMBOLTABLE_h

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "uthash.h"

  typedef struct scope {
    char* scope_name;
    char* type;
    struct scope *next;
  }scope;

  typedef struct symbol_node {
    char* key;
    char* name;
    char* type;
    char symbol;
    char* scope_name;
    UT_hash_handle hh;
  }symbol_node;

  symbol_node* createSymbol(char* key, char* name, char* type, char symbol,char* scope_name);
  void addSymbol(char* name, char* type, char symbol);
  void printSymbolTable();
  void freeSymbolTable();

  scope* getStackHead();
  void pushStack(char* scope_name, char* type);
  void popStack();
  void initializeGlobalScope();

#endif