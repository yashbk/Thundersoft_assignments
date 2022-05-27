// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to find the first capital letter in a string using recursion.

#include <stdio.h>

char capital(char *str)
{
    if (*str >= 65 && *str <= 90 || *str == '\0')
    {
        return *str;
    }
    else
    {
        return capital(++str);
    }
}

int main()
{
    char str[20];
    printf("Enter a string to get it's first capital letter: ");
    scanf("%20s", str);
    printf("%c", capital(str));
}