//Author : Yashas B K
//Date : 15-05-2022
//Description : Implementation of stack using two queues

#include "header.h"

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Elements in stack:\n");
    display();

    printf("\nPopping two elements:\n");
    pop();
    pop();
    printf("\nElements left after popping:\n");
    display();
}