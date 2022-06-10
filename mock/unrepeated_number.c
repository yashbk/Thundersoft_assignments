//{1,2,3,4,2,4,5,3,1} = 5
//Given an array of sequence of numbers which are repeated twice. In that one number is not repeated.
// Write a program to get that unrepeated number at a complexity of O(n).

#include <stdio.h>

int main()
{

    int arr[] = {1,2,3,4,2,4,3,5,1,5,6}; // 6
    int len = sizeof(arr)/sizeof(int);
    int main_sum = 0,seq_sum=0; 
    for(int i=0;i<len;i++)
    {
        if(i<len/2)
        {
            main_sum += i+1;
        }
        seq_sum += arr[i];
    }
    printf("The unrepeated number in the array is %d",seq_sum-(main_sum*2));
}