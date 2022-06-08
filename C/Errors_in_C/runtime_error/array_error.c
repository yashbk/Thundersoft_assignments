/*
Run time errors can occur because of various reasons. Some of the reasons are:

->Mistakes in the Code: Let us say during the execution of a while loop, the programmer forgets to enter a break statement. This will lead the program to run infinite times, hence resulting in a run time error.
->Memory Leaks: If a programmer creates an array in the heap but forgets to delete the array's data, the program might start leaking memory, resulting in a run time error.
->Mathematically Incorrect Operations: Dividing a number by zero, or calculating the square root of -1 will also result in a run time error.
->Undefined Variables: If a programmer forgets to define a variable in the code, the program will generate a run time error.
*/

#include <stdio.h>

int main()
{
    int num[8];
    scanf("%d",num+10); // it gives segmentation fault if you try to write to Max+2
    //printf("%d",num[5]);
}