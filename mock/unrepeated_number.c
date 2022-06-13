/*
Author : Yashas B K
Date : 13-06-2022
Description : Given an array in which each element has one duplicate exc ept one element. 
              WAP to find the odd one at O(n) time complexity algorithm.

Sample input and output:
Scenario 1:
Input = {1,10,6,7,10,1,6}
Output = 7;

Scenario 2:
Input :{3,8,2,8,3,9,2}
Output: 9
*/

#include <stdio.h>

int main()
{
    int len = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d elements: ", len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d",arr+i);
    }
    int odd_one = arr[0];
    for (int i = 1; i < len; i++)
    {
        odd_one = odd_one ^ arr[i];
    }
    printf("The unrepeated number in the array is %d", odd_one);
}