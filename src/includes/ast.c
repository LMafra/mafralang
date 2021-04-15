#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ast.h"
#include "symbolTable.h"

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
        printf("\t");
        i--;
      }
      printf("Type: %s\n", tree->vType);
    }
    if (tree->name != NULL){
      i = depth;
      while(i != 0){
        printf("\t");
        i--;
      }
      printf("Name: %s\n", tree->name);
    }
    printf("\n");
    printTree(tree->left, depth + 1);
    printTree(tree->right, depth + 1);
  }
}

void printClass(int nodeClass){
  switch(nodeClass){
    case DECLARATION:
      printf("Declaration");
    break;
    case VARIABLE_DECLARATION:
      printf("Variable_Declaration");
    break;
    case FUNCTION_DECLARATION:
      printf("Function_Declaration");
    break;
    case PARAMATERS:
      printf("Paramaters");
    break;
    case PARAMATER:
      printf("Paramater");
    break;
    case LOCAL_DECLARATIONS:
      printf("Local_Declarations");
    break;
    case LOCAL_VAR_DECLARATION:
      printf("Local_Var_Declaration");
    break;
    case LOCAL_PARAMETERS:
      printf("Local_Parameters");
    break;
    case LOCAL_PARAMETER:
      printf("Local_Parameter");
    break;
    case STATEMENT_LIST:
      printf("Statement_List");
    break;
    case STATEMENT:
      printf("Statement");
    break;
    case COMPOUND_STATEMENT:
      printf("Compound_Statement");
    break;
    case EXPRESSION_STATEMENT:
      printf("Expression_Statement");
    break;
    case CONDITIONAL_STATEMENT:
      printf("Conditional_Statement");
    break;
    case ITERATION_STATEMENT:
      printf("Iteration_Statement");
    break;
    case RETURN_STATEMENT:
      printf("Return_Statement");
    break;
    case SET_STATEMENT:
      printf("Set_Statement");
    break;
    case IS_SET_STATEMENT:
      printf("Is_Set_Statement");
    break;
    case REMOVE_STATEMENT:
      printf("Remove_Statement");
    break;
    case ADD_STATEMENT:
      printf("Add_Statement");
    break;
    case EXISTS_STATEMENT:
      printf("Exists_Statement");
    break;
    case EXISTS_EXPRESSION:
      printf("Exists_Expression");
    break;
    case FORALL_STATEMENT:
      printf("Forall_Statement");
    break;
    case SET_EXPRESSION:
      printf("Set_Expression");
    break;
    case FUNCTION_CALL:
      printf("Function_Call");
    break;
    case EXPRESSION:
      printf("Expression");
    break;
    case ASSIGN_OPERATION:
      printf("Assign_Operation");
    break;
    case ARITHMETIC_OPERATION:
      printf("Arithmetic_Operation");
    break;
    case LOGICAL_OPERATION:
      printf("Logical_Operation");
    break;
    case RELATIONAL_OPERATION:
      printf("Relational_Operation");
    break;
    case INPUT_STATEMENT:
      printf("Input_Operation");
    break;
    case OUTPUT_STATEMENT:
      printf("Output_Operation");
    break;
    case QUOT:
      printf("Quotes");
    break;
    case IDENTIFIER:
      printf("Identifier");
    break;
    case STRING:
      printf("String");
    break;
    case INTEG:
      printf("Integer");
    break;
    case DECIMAL:
      printf("Decimal");
    break;
    case EMP:
      printf("Empty");
    break;
  }
  printf("\n");
}

void printDepth(int depth) {
  int i = depth;
  while(i != 0){
    printf("\t");
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