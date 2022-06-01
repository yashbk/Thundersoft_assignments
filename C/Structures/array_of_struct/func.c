#include "header.h"

void print_str(stru *ptr)
{
    for(int i=0;i<5;i++)
    {
        printf("%c\n",(ptr+i)->ch);
    }
}