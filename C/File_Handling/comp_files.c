// Author : Yashas B K
// Date : 03-06-2022
// Description : Write a C program to compare two files.

#include <stdio.h>

int main(int argv, char **argc)
{
    FILE *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = fopen(argc[1], "r");
    ptr2 = fopen(argc[2], "r");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("File not found or your input is not proper. Please try like below: \n");
        printf("Usage : ./a.out <file1> <file2> \n");
    }
    else
    {
        char ch1 = 0, ch2 = 0;
        short flag = 0;
        // while (((ch1 = fgetc(ptr1)) == (ch2 = fgetc(ptr2))))
        // {
        //     if(ch1 == EOF || ch2 == EOF)
        //     {
        //         break;
        //     }
        // }
        while (1)
        {
            if ((ch1 = fgetc(ptr1)) != (ch2 = fgetc(ptr2)))
            {
                if(ch1 == EOF)
                {
                    
                }
                flag = 1;
                break;
            }
            if(ch1 || ch2) //true
            {
                if(ch1 != ch2) //
                {
                    flag =1;
                    break;
                }
                break;
            }
        }
        if (flag == 0)
        {
            printf("Both files have same content\n");
        }
        else if (flag == 1)
        {
            printf("Both files have different content\n");
        }

        fclose(ptr1);
        fclose(ptr2);
    }
}
