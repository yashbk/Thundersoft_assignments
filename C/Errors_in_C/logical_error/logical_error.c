/*
The logical error is an error that leads to an undesired output.
These errors produce the incorrect output, but they are error-free, known as logical errors.
*/

#include <stdio.h>
int main()
{
    int sum = 0; // variable initialization
    int k = 1;
    for (int i = 1; i <= 10; i++)
        ; // logical error, as we put the semicolon after loop
    {
        sum = sum + k;
        k++;
    }
    printf("The  value of sum is %d", sum);
    return 0;
}