#include <stdio.h>

int main()
{
    float num;
    num = (float)5/2;
    printf("Value of num is %f\n",num);

    int one = 30;
    void *ptr = &one;
    printf("Value of one is %d\n",*(int *)ptr);
    float two = 4.5;
    ptr = &two;
    printf("Value of two is %f\n",*(float*)ptr);

    int value = 0x11223344;
    char *pc =(char*)&value;
    printf("LSB of value is %x",*pc);

}