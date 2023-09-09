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

struct arg_node* ARG_Init(int int_num, float flt_num, char c, char* str, bool int_val, bool flt_val, bool char_val, bool str_val)
{
    struct arg_node* tmp;
    tmp = malloc(sizeof(*tmp));
    tmp->int_val = int_val;
    tmp->flt_val = flt_val;
    tmp->char_val = char_val;
    tmp->str_val = str_val;

    if (int_val)
    {
        tmp->integer_num = int_num;
    }
    if (flt_val)
    {
        tmp->float_num = flt_num;
    }
    if (char_val)
    {
        tmp->character = c;
    }
    if (str_val)
    {
        tmp->string = calloc(STR_MAX_LEN, sizeof(char));
        strcpy(tmp->string, str);
    }
    return tmp;
}
/* Delete and release the argument node*/
void ARG_delete(struct arg_node* tmp)
{
    if (tmp)
    {
        if (tmp->str_val)
        {
            free(tmp->string);
        }
        free(tmp);
    }
}
void ARG_show(struct arg_node* tmp)
{
    if (tmp->int_val)
    {
        printf("The argument node has integer: %d\n", tmp->integer_num);
    }
    if (tmp->flt_val)
    {
        printf("The argument node has float: %f\n", tmp->float_num);
    }
    if (tmp->char_val)
    {
        printf("The argument node has character: %c\n", tmp->character);
    }
    if (tmp->str_val)
    {
        printf("The argument node has string: %s\n", tmp->string);
    }
}
