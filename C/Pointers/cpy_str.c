//Author : Yashas B K
//Description : Write a C program to copy one string to another string and find length of new string using pointers.

#include<stdio.h>
#include "header/header.h"
#include <string.h>

int main()
{
	int len=0;
	char *name;
	printf("Enter the string:");
	fgets(name,20,stdin);
	char new_str[20];
	str_cpy(name,new_str);
	len = str_length(new_str)-1;
	printf("New string value is:");
	printf("%s",new_str);
	printf("Length of the copied string is %d\n",len);
}

