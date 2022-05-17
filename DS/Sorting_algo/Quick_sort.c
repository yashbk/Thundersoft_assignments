// Author : Yashas B K
// Date : 08-05-2022
//  Quick sort
// Best case (nlogn)
// Worst case (n^2)

#include <stdio.h>

//function declaration
int partition(int *arr, int lb, int ub);
void quick_sort(int *arr, int lb, int ub);
void print_arr(int len, int *arr);


int main()
{
    int i, len = 0, arr[25];
    printf("Please enter the length of array: ");
    scanf("%d", &len);
    
    for (i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Before sorting:\n");
    print_arr(len, arr);
    quick_sort(arr, 0, len - 1);
    printf("After sorting:\n");
    print_arr(len, arr);
    return 0;
}

//function to place pivot element to suitable place
int partition(int *arr, int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    int temp;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    return end;
}

//quick sort algorithm
void quick_sort(int *arr, int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(arr, lb, ub);
        quick_sort(arr, lb, loc - 1);
        quick_sort(arr, loc + 1, ub);
    }

}

//function to print elements of array
void print_arr(int len, int *arr)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    putchar('\n');
}

