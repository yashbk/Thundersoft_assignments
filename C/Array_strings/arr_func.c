// Author : Yashas B K
// Date : 26-05-2022
// Description : Write a C program to insert and delete  an element in an array at specified position - write fns  insert(n) , delete(n), get(n) where  n is specfied position taken from user

#include <stdio.h>
#define SIZE 20

int arr[SIZE] = {0}; //Intializing array to zero

//function prototypes
void insert(int);
void delete(int);
int get(int);

int main()
{   
    int n=0;
    printf("Enter nth position: ");
    scanf("%d",&n);
    insert(n);
    printf("Enter nth position to delete value: ");
    scanf("%d",&n);
    delete(n);
    printf("Enter nth position to get value at that position: ");
    scanf("%d",&n);
    printf("Element at %dth position is %d",n,get(1));
}

void insert(int n)
{
    int num = 0;
    printf("Enter the value to insert at %dth position: ", n);
    scanf("%d", &num);
    arr[n] = num;
}

void delete (int n)
{

    if (arr[n] == 0)
    {
        printf("Nothing to delete\n");
    }
    else
    {
        printf("Deleted value at nth position is %d\n",arr[n]);
        arr[n] = 0;
    }
}

int get(int n)
{
    return arr[n];
}