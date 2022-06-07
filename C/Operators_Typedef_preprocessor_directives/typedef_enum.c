//Author : Yashas B K
//Description : Example program to show usage of typedef with enums
#include <stdio.h>

typedef enum{
    false,true
}en;

int main()
{
    en statement = true;
    printf("%d",statement);
    printf("\n%d",false);
}