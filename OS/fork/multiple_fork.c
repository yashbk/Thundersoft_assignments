#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();
    fork();
    fork();
    fork();
    printf("hello");
    while(1);
}