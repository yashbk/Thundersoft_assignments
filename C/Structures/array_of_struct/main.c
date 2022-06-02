// Author : Yashas B K
// Date : 01-06-2022
 // Description : wap to declare an array of struct with a char data type and initialize\
 the character with "h" ,"e" ,"l","l","o" and sort the array in alphabetical order - use malloc / calloc for struct variable

#include "header.h"
#define SIZE 5

int main()
{
    stru *ptr = (stru *)malloc(sizeof(stru) * SIZE);
    (*ptr).ch = 'h';
    (ptr + 1)->ch = 'e';
    (ptr + 2)->ch = 'l';
    (ptr + 3)->ch = 'l';
    (ptr + 4)->ch = 'o';
    printf("Before sorting\n");
    print_str(ptr);
    sort(ptr, SIZE);
    printf("After sorting\n");
    print_str(ptr);
    free(ptr);
}