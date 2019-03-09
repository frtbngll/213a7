#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"
#include "stringnode.h"
#include "reversestringnode.h"

struct StringNode_class ReverseStringNode_class_table = {
  ReverseStringNode_compareTo,
  StringNode_printNode,
  Node_insert,
  Node_print,
};


int ReverseStringNode_compareTo(void* thisv, void* nodev) {
  struct StringNode* this = thisv;
  struct StringNode* node = nodev;
  return -strcmp (this->s, node->s);
}


void* new_ReverseStringNode(char* s) {
  struct StringNode* obj = malloc(sizeof(struct StringNode));
  obj->class = &ReverseStringNode_class_table;
  StringNode_ctor(obj, s);
  return obj;
}
