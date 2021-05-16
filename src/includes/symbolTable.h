#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "uthash.h"
  #include "utstack.h"
  #include "ast.h"

  enum KEY {
    KEY_ID_VAR,
    KEY_ID_FUN,
    KEY_ID_UND
  };

  extern char* type_name;

  typedef struct symbol_node {
    char* symbol;
    char* type;
    char* scope_name;
    UT_hash_handle hh;
  }symbol_node;

  typedef struct scope {
    char* name;
    char* type;
    struct scope *next;
  }scope;

  struct symbol_node* global_symbol_table;
  struct scope* global_stack;
  
  void initializeGlobalScope();
  scope* getStackHead();
  void pushStack(char* scope_name, char* type);
  void popStack();


  symbol_node* insertSymbol(char* symbol);
  void insertType(char* type);
  void printSymbolTable();

#endif