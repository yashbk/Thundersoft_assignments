// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to print fibanocci series using recursion

#include <stdio.h>

void fibonacci(int limit)
{
    static int a, b = 1, c = 1;
    if (a > limit)
        return;
    else
    {
        printf("%d ", a);
        a = b;
        b = c;
        c = a + b;
        return fibonacci(limit);
    }
}

int main()
{
    int limit;
    while (1)
    {
        printf("Enter a number upto which you want fibonacci series: ");
        scanf("%d", &limit);
        if (limit < 0)
        {
            printf("Please enter positive number:\n");
        }
        else
            break;
    }
    printf("Fibonacci series upto %d is ", limit);
    fibonacci(limit);
}
