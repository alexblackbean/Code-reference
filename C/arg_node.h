/*
author: Kuo Yu Liao
email: alexgreenbean6092@gmail.com
code content: Argument Node interface (C)
*/
#ifndef ARG_NODE
#define ARG_NODE
#define STR_MAX_LEN 100
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
/*release memory that node use*/
void ARG_delete(struct arg_node*);
/*show all datatype that argument node has*/
void ARG_show(struct arg_node*);

#ifndef
