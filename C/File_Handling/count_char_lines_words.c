// Author : Yashas B K
// Date : 03-06-2022
// Description : Write a C program to count characters, words and lines in a text file.

#include <stdio.h>

int main(int argc, char *argv[])
{

    FILE *ptr = NULL;
    ptr = fopen(argv[1], "r");
    if (ptr == NULL)
    {
        printf("File not found or your input is not proper. Please try like below\n");
        printf("Usage : ./a.out <filename>\n");
    }
    else
    {
        char ch = 0;
        int character = 0, word = 0, line = 0;
        while ((ch = fgetc(ptr)) != EOF)
        {
            character++;
            if (ch == '\n')
            {
                line++;
            }
            if (ch == ' ' || ch == '\n')
            {
                word++;
            
        }
        printf("\nReading finished\n");
        printf("Number of characters: %d\n"
               "Number of lines: %d\n"
               "Number of words: %d\n",
               character, line, word);
        fclose(ptr);
    }
}
