//Author : Yashas B K
//Program to check whether  is set or not

#include <stdio.h>
#include "header/header.h"

int main()
{
    int num=0;
    printf("Enter a number to check LSB is set or not:\n");
    scanf("%d",&num);
    is_set_LSB(num);
}