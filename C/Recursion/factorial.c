// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to print factorial of a number using recursion
#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    while (1)
    {
        printf("Enter a number to get it's factorial: ");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Please enter positive number:\n");
        }
        else
            break;
    }
    printf("Factorial of %d is %d", num, factorial(num));
}
