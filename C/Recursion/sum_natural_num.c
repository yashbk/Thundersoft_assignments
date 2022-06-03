// Author : Yashas B K
// Date : 27-05-2022
// Description : Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include <stdio.h>

int natural_sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num + natural_sum(num - 1);
    }
}

int main()
{
    int num = 0, sum = 0;
    printf("Enter a number to get sum of natural numbers upto it: ");
    scanf("%d", &num);
    sum = natural_sum(num);
    printf("Sum of natural numbers upto %d is : %d\n", num, sum);
}