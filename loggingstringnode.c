#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"
#include "stringnode.h"
#include "loggingstringnode.h"

struct StringNode_class LoggingStringNode_class_table = {
  StringNode_compareTo,
  StringNode_printNode,
  LoggingStringNode_insert,
  Node_print,
};


void LoggingStringNode_insert(void* thisv, void* nodev) {
  struct StringNode *  ndev = nodev;
  printf("insert %s\n", ndev->s);
  Node_insert(thisv, nodev);
}


void* new_LoggingStringNode(char* s) {
  struct StringNode* obj = malloc(sizeof(struct StringNode));
  obj->class = &LoggingStringNode_class_table;
  StringNode_ctor(obj, s);
  return obj;
}
