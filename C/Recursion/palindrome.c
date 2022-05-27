// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to check whether a given String is palindrome or not.

#include <stdio.h>

int palindrome(char *str, int len)
{
    static char *ptr;
    ptr = str + len - 1;
    if (str >= ptr || *str != *ptr)
        return ptr - str;
    else
    {
        palindrome(++str, len - 2);
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
    printf("Enter a string to check whether it is palindrome or not: ");
    scanf("%20s", str);
    int value = palindrome(str, len(str));
    printf("value is %d\n", value);
    if (value <= 0)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("String is not a palindrome:\n");
    }
}
