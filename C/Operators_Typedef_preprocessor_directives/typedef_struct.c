//Author : Yashas B K
//Description : Example program to show usage of typedef with structures

#include <stdio.h>

typedef struct{
    union { //Anonymous union
        int num;
        char value;
    };
}bench;

int main()
{
    bench new = {10};
    printf("Num is %d\n",new.num);
    printf("Value is %d",new.value);
}