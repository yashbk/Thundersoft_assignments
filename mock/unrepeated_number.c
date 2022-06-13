//Given an array of numbers which are repeated twice. In that one number is not repeated.
// Write a program to get that unrepeated number at a complexity of O(n).
/*
Sample input and output: 
Scenario 1:
Input = {1,2,3,7,3,2,1}
Output = 7;

Scenario 2:
Input :{1,2,2,2,4,2,1}
Output: 4
*/


#include <stdio.h>

int main()
{

    int arr[] = {1,2,2,2,4,2,1}; 
    int len = sizeof(arr)/sizeof(int);
    int out=arr[0];
    for(int i=1;i<len;i++)
    {
        out = out ^ arr[i];
    }
    printf("The unrepeated number in the array is %d",out);
}