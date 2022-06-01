//Author : Yashas B K
//Date : 01-06-2022
//Description : wap to declare an array of struct with a char data type and initialize\
 the character with "h" ,"e" ,"l","l","o" and sort the array in alphabetical order - use malloc / calloc for struct variable 


#include "header.h"

int main()
{
    stru *ptr = (stru*)malloc(sizeof(stru));
    ptr[0].ch = 'h';
    (ptr+1)->ch = 'e';
    (ptr+2)->ch = 'l';
    (ptr+3)->ch = 'l';
    (ptr+4)->ch = 'o';
    print_str(ptr);
}