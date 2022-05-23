#include <stdio.h>

typedef unsigned int uint;

static void print_bits(int num)
{
    for(int i=31;i>=0;i--)
    {
        printf("%d ",num>>i & 1);
    }
}

void is_set_LSB(int num)
{
    if(num & 1)
    {
        printf("LSB is set\n");
    }
    else
    printf("LSB is not set\n");
}

void is_set_MSB(int num)
{
    if(num>>31 & 1)
    {
        printf("MSB is set\n");
    }
    else
    printf("MSB is not set\n");
}

int get_nth_bit(unsigned int num,unsigned int position)
{
    uint bit = 1;
    if(num>>position & bit == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void set_nth_bit(int *number, unsigned int pos)
{
    uint bit = 1 << pos;
    *number = *number | bit;
    printf("Bit is set\n");
    print_bits(*number);
}

void clear_nth_bit(int *number, unsigned int pos)
{
    uint bit = ~(1 << pos);
    *number = *number & bit;
    printf("Bit is cleared\n");
    print_bits(*number);
}

void toggle_nth_bit(int *number, unsigned int pos)
{
    uint bit = 1 << pos;
    *number = *number ^ bit;
    printf("Bit is cleared\n");
    print_bits(*number);
}

void swap_num(int *num1,int *num2)
{
    *num1 = *num1 ^ *num2;
    *num2 = *num1 ^ *num2;
    *num1 = *num1 ^ *num2;
}