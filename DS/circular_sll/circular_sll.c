// Author : Yashas B K
// Date : 05-05-2022
// Description  : Create a circular LL with 5 nodes having char data - vowels - a,e,i,o,u

#include "header.h"

int main()
{
    cll *head = NULL;
    char *str = "aeiou";
    while (*str != '\0')
    {
        insert(&head, *str++);
    }
    display(&head);
}

