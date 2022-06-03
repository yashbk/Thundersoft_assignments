// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to reverse a string using recursion

#include <stdio.h>

void reverse(char *str, int len)
{
    static char *ptr;
    ptr = str + len - 1;
    if (str >= ptr)
        return;
    else
    {
        char temp = *str;
        *str = *ptr;
        *ptr = temp;
        reverse(++str, len - 2);
    }
}

// Function to get length of string
int len(char *str)
{
    char *new = str;
    while (*++new != '\0')
        ;
    return new - str;
}

int main()
{
    char str[20];
    printf("Enter a string to reverse it: ");
    scanf("%20s", str);
    printf("String before reversing is %s\n", str);
    reverse(str, len(str));
    printf("String after reversing is  %s\n", str);
}