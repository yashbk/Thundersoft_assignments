// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to convert a decimal number to binary using recursion
#include <stdio.h>

void bin(int num)
{
    static int max = 31;
    if (max < 0)
    {
        return;
    }
    else
    {
        printf("%d ", num >> max-- & 1);
        bin(num);
    }
}

int main()
{
    int num;
    printf("Enter number you wish to convert\n");
    scanf("%d", &num);
    bin(num);
}