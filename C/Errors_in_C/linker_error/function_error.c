#include <stdio.h>

void foo(); //Definition for this prototype is not present so linker gives error

int main()
{
    foo();
}