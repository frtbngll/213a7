#ifndef __LOGGINGSTRINGNODE_H__
#define __LOGGINGSTRINGNODE_H__

extern struct StringNode_class LoggingStringNode_class_table;

void LoggingStringNode_insert(void*, void*);

void* new_LoggingStringNode(char*);
#endif /*__LOGGINGSTRINGNODE_H__*/
