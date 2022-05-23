//Program to check whether MSB is set or not

#include <stdio.h>
#include "header/header.h"

int main()
{
    int num=0;
    printf("Enter a number to check MSB is set or not:\n");
    scanf("%d",&num);
    is_set_MSB(num);
}