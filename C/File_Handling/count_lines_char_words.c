#include <stdio.h>

int main(int argc,char **argv)
{
    FILE *fptr;
    int character = 0, word = 0, lines = 1;
    fptr = fopen(argv[1], "r");
    if (fptr == NULL)
    {
        printf("File not found or your input is not proper. Please try like below\n");
        printf("Usage : ./a.out <filename>\n");
    }
    else
    {
        char ch = 0;
        while ((ch = fgetc(fptr)) != EOF)
        {
            character++;
            if (ch == '\n')
            {
                lines++;
            }
        }
        rewind(fptr);
        char str[20];
        char wtrue = 0;
        while (1)
        {
            wtrue = fscanf(fptr, "%s", str);
            if (wtrue == 1)
            {
                word++;
            }
            else
            {
                break;
            }
        }
        fclose(fptr);
        printf("\nNumber of characters is %d\n", character);
        printf("\nNumber of lines is %d\n", lines);
        printf("\nNumber of words is %d\n", word);
    }
}