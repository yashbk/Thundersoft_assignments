
//Author : Yashas B K
//Description : WAP for swapping between any data type using swap(void *a,void *b) api

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generic_swap(void *num1, void *num2, int size)
{
    void *temp = malloc(sizeof(16));
    memcpy(temp, num1, size);
    memcpy(num1, num2, size);
    memcpy(num2, temp, size);
    free(temp);
}

int main()
{
    printf("Enter num1 and num2:");
    int num1, num2;
    float real1 = 22.3,real2 = 88.56;
    scanf("%d %d", &num1, &num2); // Taking input from user for integer
    printf("Before swapping integer num1 = %d num2 = %d\n", num1, num2);
    generic_swap(&num1, &num2, sizeof(int));
    printf("After  swapping integer num1 = %d num2 = %d\n", num1, num2);

    //Swapping floating point data type
    printf("Before swapping float real1 = %f real2 = %f\n", real1, real2);
    generic_swap(&real1,&real2,sizeof(float));
    printf("After  swapping float real1 = %f real2 = %f\n", real1, real2);
    return 0;
}