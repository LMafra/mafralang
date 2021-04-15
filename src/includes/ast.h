#ifndef AST_H
#define AST_H

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>

  enum parser {
    DECLARATION,
    VARIABLE_DECLARATION,
    FUNCTION_DECLARATION,
    PARAMATERS,
    PARAMATER,
    LOCAL_DECLARATIONS,
    LOCAL_VAR_DECLARATION,
    LOCAL_PARAMETERS,
    LOCAL_PARAMETER,
    STATEMENT_LIST,
    STATEMENT,
    COMPOUND_STATEMENT,
    EXPRESSION_STATEMENT,
    CONDITIONAL_STATEMENT,
    ITERATION_STATEMENT,
    RETURN_STATEMENT,
    SET_STATEMENT,
    IS_SET_STATEMENT,
    REMOVE_STATEMENT,
    ADD_STATEMENT,
    EXISTS_STATEMENT,
    EXISTS_EXPRESSION,
    FORALL_STATEMENT,
    SET_EXPRESSION,
    FUNCTION_CALL,
    EXPRESSION,
    ASSIGN_OPERATION,
    ARITHMETIC_OPERATION,
    LOGICAL_OPERATION,
    RELATIONAL_OPERATION,
    INPUT_STATEMENT,
    OUTPUT_STATEMENT,
    QUOT,
    IDENTIFIER,
    STRING,
    INTEG,
    DECIMAL,
    EMP,
  };

  typedef struct ast_node {
    int nodeClass;
    char* vType;
    char* name;
    struct ast_node *left;
    struct ast_node *right;
  } ast_node;

  ast_node* addNode(int nodeClass, ast_node *left, ast_node *right, char* vType, char* value);
  void printTree(ast_node *tree, int depth);
  void printClass(int nodeClass);
  void printDepth(int depth);
  void freeTree(ast_node* stmt);

#endif