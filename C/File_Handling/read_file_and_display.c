//Author : Yashas B K
//Date : 03-06-2022
//Description : Write a C program to read file contents and display on console.

#include <stdio.h>

int main(int argc,char *argv[])
{

    FILE *ptr = NULL;
    ptr = fopen(argv[1], "r");
    if(ptr == NULL)
    {
        printf("File not found or your input is not proper. Please try like below\n");
        printf("Usage : ./a.out <filename>\n"); 
    }
    else
    {
        char ch = 0;
        while((ch=fgetc(ptr)) != EOF)
        {
            printf("%c",ch);
        }
        printf("\nReading finished\n");
        fclose(ptr);
    }
}
