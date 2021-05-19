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
  extern int semantic_error;

  typedef struct symbol_node {
    char* key;
    char* type;
    char* symbol;
    char* symbolType;
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


  char* concat(const char *s1, const char *s2);
  void insertSymbol(char* symbol);
  void insertType(char* type);
  symbol_node* createSymbol(char* key, char* symbol, char* type, char* name);
  symbol_node* findSymbol(char* symbol);
  void printSymbolTable();
  void freeSymbolTable();

  void checkSemanticErrorRedeclaration(char* symbol, char* name);
  void checkSemanticErrorMain();
  void checkSemanticErrorNotDeclared(char* symbol);

  void printCodeTAC(ast_node* parserTree, FILE *tacFile);
  void createFileTAC(ast_node* parserTree);
  void printSymbolTableTAC(FILE* tacFile);

#endif