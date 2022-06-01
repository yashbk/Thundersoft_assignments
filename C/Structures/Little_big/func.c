#include "header.h"

union endian
{
    int num;
    char lsb;
};

void check_endianess()
{
    union endian check;
    check.num = 0x11223344;
    if(check.lsb == 0x44)
    {
        printf("This is a little endian system\n");
    }
    else
    {
        printf("This is a big endian system\n");
    }
}