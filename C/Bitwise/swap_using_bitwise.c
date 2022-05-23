//Author : Yashas B K
//Program to swap two numbers using bitwise

#include <stdio.h>
#include "header/header.h"

int main()
{
    int num1=20;
    int num2=30;
    printf("Before swapping num1=%d num2=%d\n",num1,num2);
    swap_num(&num1,&num2);
    printf("Before swapping num1=%d num2=%d\n",num1,num2);
    return 0;
}