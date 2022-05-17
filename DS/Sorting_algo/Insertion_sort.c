//Author : Yashas B K
//Date : 08-05-2022
// Insertion sort
// Best case O(n)
// Worst case O(n^2)

#include <stdio.h>

void insertion_sort(int row, int *arr)
{
    int temp = 0,j=0;
     for (int i = 1 ; i <= row - 1; i++)
    {
        temp = arr[i];
	    j = i;
            while ( j > 0 && arr[j-1] > temp)
            {	        
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = temp;
    }
}

void print_arr(int len, int *arr)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    putchar('\n');
}

int main()
{
    int len;
    printf("Enter the length of array:");
    scanf("%d", &len);
    int arr[len];
    for (register int i = 0; i < len; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before sorting:\n");
    print_arr(sizeof(arr) / sizeof(int), arr);
    insertion_sort(sizeof(arr) / sizeof(int), arr);
    printf("After sorting:\n");
    print_arr(sizeof(arr) / sizeof(int), arr);
}