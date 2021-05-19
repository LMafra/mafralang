#include "tac.h"

void printSymbolTableTAC(FILE* tacFile) {
  symbol_node *s;
  char *aux = (char *)malloc((1 + 100) * sizeof(char));
  fputs(".table\n", tacFile);
  for(s=global_symbol_table; s != NULL; s=s->hh.next) {
    if((strcmp(s->type, "string") == 0)){
        strcpy(aux, "char");
    }
    else if ((strcmp(s->type, "bool") == 0)){
        strcpy(aux, "int");
    }
    else{
        strcpy(aux, s->type);
    }
    strcat(aux, " ");
    strcat(aux, s->symbol);
    strcat(aux, "__");
    strcat(aux, s->scope_name);
    if((strcmp(s->type, "string") == 0)){
        strcat(aux, " [] = \"\"");
    }
    strcat(aux, "\n");
    fputs(aux, tacFile);
  }
  free(aux);
}

void printCodeTAC(ast_node* parserTree, FILE *tacFile) {
  fputs(".code\n", tacFile);
  fputs("nop", tacFile);
  fputs("\n", tacFile);
}

void createFileTAC(ast_node* parserTree) {
  FILE *tacFile;
  tacFile = fopen("mafralang.tac", "w+");
  printSymbolTableTAC(tacFile);
  printCodeTAC(parserTree, tacFile);
  fclose(tacFile);
  printf("\nArquivo mafralang.tac criado\n");
}