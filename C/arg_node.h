/*
author: Kuo Yu Liao
email: alexgreenbean6092@gmail.com
code content: Argument Node interface (C)
*/
#ifndef ARG_NODE
#define ARG_NODE
#include <stdbool.h>
typedef struct arg_node
{
    int integer_num; // integer 
    float float_num; // float
    char character; // char
    char* string; // string
} ARG_NODE;

/*New a node containing various data*/
struct arg_node* ARG_Init(int, float, char, char*);
/*Update node content*/
void ARG_update(struct arg_node*);
/*release memory that node use*/
void ARG_delete(struct arg_node*);
/*check node content is available*/
bool ARG_check(struct arg_node*);

#ifndef
