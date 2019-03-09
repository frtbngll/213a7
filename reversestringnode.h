#ifndef __REVERSESTRINGNODE_H__
#define __REVERSESTRINGNODE_H__


extern struct StringNode_class ReverseStringNode_class_table;

/**
 * definition of methods implemented by this class
 */
int ReverseStringNode_compareTo(void*, void*);

/**
 * definition of new for class
 */
void* new_ReverseStringNode(char*);

#endif /*__REVERSESTRINGNODE_H__*/
