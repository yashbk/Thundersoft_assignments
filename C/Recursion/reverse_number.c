// Author : Yashas B K
// Date : 27-05-2022
// Description : WAP to reverse a string using recursion

#include <stdio.h>

int reverse_num(int num)
{
    static int k = 0;
    if (num == 0)
    {
        return k;
    }
    else
    {
        k = k * 10 + (num % 10);
        reverse_num(num / 10);
    }
}

int main()
{
    int num;
    printf("Enter a number to reverse it: ");
    scanf("%d", &num);
    printf("Number before reversing is %d\n", num);
    num = reverse_num(num);
    printf("Number after reversing is  %d\n", num);
}