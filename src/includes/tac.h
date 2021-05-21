#ifndef TAC_H
#define TAC_H

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "symbolTable.h"
  #include "ast.h"

  void printSymbolTableTAC(FILE* tacFile);
  void printCodeTAC(ast_node* parserTree, FILE *tacFile);
  void createFileTAC(ast_node* parserTree);
  void printMainTAC(FILE *tacFile);

#endif