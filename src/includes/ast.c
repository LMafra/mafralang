#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"
#include "symbolTable.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_ORANGE  "\x1b[37m"
#define ANSI_COLOR_RESET   "\x1b[0m"

ast_node* addNode(int nodeClass, ast_node* left, ast_node* right, char* vType, char* name){
    ast_node* auxNode = (ast_node*)calloc(1, sizeof(ast_node));

    auxNode->nodeClass = nodeClass;
    auxNode->left = left;
    auxNode->right = right;
    auxNode->vType = vType;
    auxNode->name = name;

    return auxNode;
}

void printTree(ast_node *tree, int depth) {
  if (tree) {
    printDepth(depth);
    printClass(tree->nodeClass);
    int i = depth;
    if (tree->vType != NULL){
      while(i != 0){
        printf(" ");
        i--;
      }
      printf(ANSI_COLOR_RED "Type: %s\n" ANSI_COLOR_RESET, tree->vType);
    }
    if (tree->name != NULL){
      i = depth;
      while(i != 0){
        printf(" ");
        i--;
      }
      printf(ANSI_COLOR_GREEN "Value: %s\n" ANSI_COLOR_RESET, tree->name);
    }
    printf("\n");
    printTree(tree->left, depth + 1);
    printTree(tree->right, depth + 1);
  }
}

void printClass(int nodeClass){
  switch(nodeClass){
    case TRANSLATION_UNIT:
      printf("TRANSLATION_UNIT");
    break;
    case EXTERNAL_DECLARATION:
      printf("EXTERNAL_DECLARATION");
    break;
    case FUNCTION_DEFINITION:
      printf("FUNCTION_DEFINITION");
    break;
    case DECLARATION:
      printf("DECLARATION");
    break;
    case DECLARATION_SPECIFIERS:
      printf("DECLARATION_SPECIFIERS");
    break;
    case DECLARATOR:
      printf("DECLARATOR");
    break;
    case DECLARATION_LIST:
      printf("DECLARATION_LIST");
    break;
    case INIT_DECLARATOR_LIST:
      printf("INIT_DECLARATOR_LIST");
    break;
    case DIRECT_DECLARATOR:
      printf("DIRECT_DECLARATOR");
    break;
    case IDENTIFIER_LIST:
      printf("IDENTIFIER_LIST");
    break;
    case PARAMETER_LIST:
      printf("PARAMETER_LIST");
    break;
    case PARAMETER_DECLARATION:
      printf("PARAMETER_DECLARATION");
    break;
    case ABSTRACT_DECLARATOR:
      printf("ABSTRACT_DECLARATOR");
    break;
    case DIRECT_ABSTRACT_DECLARATOR:
      printf("DIRECT_ABSTRACT_DECLARATOR");
    break;
    case BLOCK_ITEM_LIST:
      printf("BLOCK_ITEM_LIST");
    break;
    case BLOCK_ITEM:
      printf("BLOCK_ITEM");
    break;
    case STATEMENT:
      printf("STATEMENT");
    break;
    case EXPRESSION_STATEMENT:
      printf("EXPRESSION_STATEMENT");
    break;
    case COMPOUND_STATEMENT:
      printf("COMPOUND_STATEMENT");
    break;
    case CONDITIONAL_STATEMENT:
      printf("CONDITIONAL_STATEMENT");
    break;
    case ITERATION_STATEMENT:
      printf("ITERATION_STATEMENT");
    break;
    case INPUT_STATEMENT:
      printf("INPUT_STATEMENT");
    break;
    case OUTPUT_STATEMENT:
      printf("OUTPUT_STATEMENT");
    break;
    case RETURN_STATEMENT:
      printf("RETURN_STATEMENT");
    break;
    case SET_EXPRESSION_LIST:
      printf("SET_EXPRESSION_LIST");
    break;
    case IS_SET_EXPRESSION:
      printf("IS_SET_EXPRESSION");
    break;
    case ADD_EXPRESSION:
      printf("ADD_EXPRESSION");
    break;
    case REMOVE_EXPRESSION:
      printf("REMOVE_EXPRESSION");
    break;
    case EXISTS_EXPRESSION:
      printf("EXISTS_EXPRESSION");
    break;
    case EXPRESSION:
      printf("EXPRESSION");
    break;
    case SET_EXPRESSION:
      printf("SET_EXPRESSION");
    break;
    case FUNCTION_EXPRESSION:
      printf("FUNCTION_EXPRESSION");
    break;
    case ASSIGNMENT_EXPRESSION:
      printf("ASSIGNMENT_EXPRESSION");
    break;
    case ARITHMETIC_EXPRESSION:
      printf("ARITHMETIC_EXPRESSION");
    break;
    case LOGICAL_EXPRESSION:
      printf("LOGICAL_EXPRESSION");
    break;
    case RELATIONAL_EXPRESSION:
      printf("RELATIONAL_EXPRESSION");
    break;
    case CAST_EXPRESSION:
      printf("CAST_EXPRESSION");
    break;
    case TYPE_NAME:
      printf("TYPE_NAME");
    break;
    case SPECIFIER_QUALIFIER_LIST:
      printf("SPECIFIER_QUALIFIER_LIST");
    break;
    case UNARY_EXPRESSION:
      printf("UNARY_EXPRESSION");
    break;
    case POSTFIX_EXPRESSION:
      printf("POSTFIX_EXPRESSION");
    break;
    case INITIALIZER_LIST:
      printf("INITIALIZER_LIST");
    break;
    case INITIALIZER:
      printf("INITIALIZER");
    break;
    case PRIMARY_EXPRESSION:
      printf("PRIMARY_EXPRESSION");
    break;
  }
  printf("\n");
}

void printDepth(int depth) {
  int i = depth;
  while(i != 0){
    printf(" ");
    i--;
  }
  printf("(%d)", depth);
}

void freeTree(ast_node* stmt){
  if(stmt == NULL) return;
  if(stmt->left) freeTree(stmt->left);
  if(stmt->right) freeTree(stmt->right);
  free(stmt);
}