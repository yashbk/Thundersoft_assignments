//Program to get nth bit of a number

#include <stdio.h>
#include "header/header.h"

int main()
{
    int num=0;
    printf("Enter number:");
    scanf("%d",&num);
    int position=0;
    while(1)
    {
        printf("Enter position to get bit at that position. Enter 0 to 31 only:\n");
        scanf("%d",&position);
        if(position < 0 || position >31)
        {
            printf("Please enter valid position\n");
        }
        else
        {
            break;
        }
    }
    printf("%d\n",get_nth_bit(num,position)); 

}