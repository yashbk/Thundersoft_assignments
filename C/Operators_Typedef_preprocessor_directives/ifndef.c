#include <stdio.h>

#define oreo //comment this to get into ifndef

#ifndef oreo
#define oreo
void print(){
    printf("Oreo defined now\n");
}
#else
void print()
{
    printf("Oreo already defined\n");
}
#endif

int main()
{
    print();
}

