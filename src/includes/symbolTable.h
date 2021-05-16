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
  extern char* scope_type_name;
  extern char* scope_symbol_name;

  typedef struct symbol_node {
    char* type;
    char* symbol;
    char* scope_name;
    UT_hash_handle hh;
  }symbol_node;

  typedef struct scope {
    char* type;
    char* name;
    struct scope *next;
  }scope;

  struct symbol_node* global_symbol_table;
  struct scope* global_stack;
  

  void initializeGlobalScope();
  scope* getStackHead();
  void insertScopeType(char* type);
  void insertScopeName(char* name);
  void pushStack();
  void popStack();


  void insertSymbol(char* symbol);
  void insertType(char* type);
  symbol_node* createSymbol(char* symbol, char* type);
  void printSymbolTable();

#endif