/*
author: Kuo Yu Liao
email: alexgreenbean6092@gmail.com
code content: Argument Node interface (C)
*/
#include "arg_node.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Initialze attributes of an argument node
int_num: integer type variable
flt_num: float type variable
   c   : character type variable
  str  : character pointer
 return:arg_node pointer
*/

struct arg_node* ARG_Init(int int_num, float flt_num, char c, char* str)
{
    struct arg_node* tmp;
    tmp = malloc(sizeof(*tmp));
    tmp->integer_num = int_num;
    tmp->float_num = flt_num;
    tmp->character = c;
    tmp->string = calloc(STR_MAX_LEN, sizeof(char));
    strcpy(tmp->string, str);
    return tmp;
}
/* Delete and release the argument node*/
void ARG_delete(struct arg_node* tmp)
{
    free(tmp->string);
    free(tmp);
}
void ARG_show(struct arg_node* tmp);
{
    printf("The argument node has integer: %d\n", tmp->integer_num);
    printf("The argument node has float: %f\n", tmp->float_num);
    printf("The argument node has character: %c\n", tmp->character);
    if (tmp->string)
        printf("The argument node has string: %s\n", tmp->string);
    else
        printf("The argument node doesn't have a string");
}
