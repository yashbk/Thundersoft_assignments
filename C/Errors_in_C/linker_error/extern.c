#include <stdio.h>

extern int num; //This gives linker error as num is not present.
//undefined reference to `num' error

int main()
{
    num = 30;
    printf("Num is %d: \n",num);
}