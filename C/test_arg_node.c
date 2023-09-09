#include "arg_node.h"
#include <stdio.h>
int main()
{
    int val1 = 62;
    float val2 = 61.5f;
    char val3 = 'x';
    char* val4 = "axolotos";
    struct arg_node* tmp = NULL;
    tmp = ARG_Init(val1, val2, val3, val4, 1, 1, 1, 1);
    ARG_show(tmp);

    return 0;
}