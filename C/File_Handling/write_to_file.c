// Author : Yashas B K
// Date : 03-06-2022
// Description : Write a C program to create a file and write contents, save and close the file.

#include <stdio.h>

int main(int argv,char **argc)
{
    char sentence[100];
    printf("Enter a sentence to write into a file: ");
    fgets(sentence, 100, stdin);
    FILE *ptr = NULL;
    ptr = fopen(argc[1], "w");
    if (ptr == NULL)
    {
        printf("Couldn't find/create file or your input is not proper. Please try like below: \n");
        printf("Usage : ./a.out <filename>\n");
    }
    else
    {
        int i = 0;
        while (sentence[i] != '\0')
        {
            fputc(sentence[i++], ptr);
        }
        printf("Writing finished\n");
        fclose(ptr);
    }
}
