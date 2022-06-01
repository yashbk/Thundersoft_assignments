// Author : Yashas B K
// Date : 01-06-2022
// Description : Write a C program to find first occurrence of a word in a given string..

#include <stdio.h>
#include <string.h>

void first_occurance(char *ptr)
{
    char word[10];
    getchar();
    printf("Enter the word to find it's first occurance\n");
    scanf("%[^\n]s", word);
    int len1 = strlen(ptr);
    int len2 = strlen(word);
    int flag = 0;
    for (int i = 0; i < len1; i++)
    {
        if (*word == ptr[i])
        {
            for (int k = 0; k < len2; k++)
            {
                if (word[k] == ptr[i])
                {
                    flag = 1;
                    i++;
                }
                else
                {
                    flag = 0;
                }
            }
            if (flag == 1)
            {
                printf("Match found at index %d\n", i - len2);
                return;
            }
        }
        else if ((i == len1 - 1) && *word != ptr[i])
        {
            printf("Not found \n");
            return;
        }
    }
}

int main()
{
    char str[50];
    printf("Enter a string\n");
    scanf("%[^\n]s", str);
    first_occurance(str);
}
