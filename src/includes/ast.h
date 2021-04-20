#ifndef AST_H
#define AST_H

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>

  enum parser {
    TRANSLATION_UNIT,
    EXTERNAL_DECLARATION,
    FUNCTION_DEFINITION,
    DECLARATION,
    DECLARATION_SPECIFIERS,
    DECLARATOR,
    DECLARATION_LIST,
    INIT_DECLARATOR_LIST,
    DIRECT_DECLARATOR,
    IDENTIFIER_LIST,
    PARAMETER_LIST,
    PARAMETER_DECLARATION,
    ABSTRACT_DECLARATOR,
    DIRECT_ABSTRACT_DECLARATOR,
    BLOCK_ITEM_LIST,
    BLOCK_ITEM,
    STATEMENT,
    EXPRESSION_STATEMENT,
    COMPOUND_STATEMENT,
    CONDITIONAL_STATEMENT,
    ITERATION_STATEMENT,
    SET_STATEMENT,
    IS_SET_STATEMENT,
    ADD_STATEMENT,
    REMOVE_STATEMENT,
    EXISTS_STATEMENT,
    EXPRESSION,
    SET_EXPRESSION,
    ASSIGNMENT_EXPRESSION,
    ARITHMETIC_EXPRESSION,
    LOGICAL_EXPRESSION,
    RELATIONAL_EXPRESSION,
    CAST_EXPRESSION,
    TYPE_NAME,
    SPECIFIER_QUALIFIER_LIST,
    UNARY_EXPRESSION,
    POSTFIX_EXPRESSION,
    INITIALIZER_LIST,
    INITIALIZER,
    PRIMARY_EXPRESSION,
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