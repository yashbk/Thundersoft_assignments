// Author : Yashas B K
// Date : 03-06-2022
// Description : Write a C program to copy contents from one file to another file.

#include <stdio.h>

int main(int argv,char **argc)
{
    FILE *src = NULL,*dest = NULL;
    src = fopen(argc[2], "r");
    dest = fopen(argc[1],"w");
    if (src == NULL || dest == NULL)
    {
        printf("Couldn't find/create file or your input is not proper. Please try like below: \n");
        printf("Usage : ./a.out <dest> <src> \n");
    }
    else
    {
        char ch=0;
        while ((ch = fgetc(src)) != EOF)
        {
            fputc(ch, dest);
        }
        printf("Writing finished\n");
        fclose(src);
        fclose(dest);
    }
}
