#include <stdio.h>
#define DO 1

int main()
{
    printf("Status of plan is :");
    #if DO == 1
    printf("We are good to go\n");
    #elif DO == 0
    printf("No can't do it\n");
    #else
    printf("It's a big No\n");
    #endif

#define A 1
#define B 1

    #if (A || B) == 1
        #if (A >> 1) == 0
        printf("Rightshifting works\n"); //Nested conditional compilation
        #endif
    printf("True\n");
    #elif (A||B) == 0
    printf("False\n");
    #endif

}