#include "header.h"

void print_str(stru *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", (ptr + i)->ch);
    }
}

void sort(stru *ptr, int len)
{
    int temp = 0;
    char flag = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if ((ptr+j)->ch > ptr[j + 1].ch)
            {
                temp = ptr[j].ch;
                ptr[j].ch = ptr[j + 1].ch;
                ptr[j + 1].ch = temp;
                flag = 1;
            }
            if (flag == 0)
            {
                break;
            }
        }
    }
}