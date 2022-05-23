#include <stdio.h>
#include <stdlib.h>

void add_2d_arr(int row, int col,int (*arr1)[col],int (*arr2)[col],int (*arr3)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void print_2d_array(int row, int col, int (*ptr)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(ptr[i]+j));
        }
        putchar('\n');
    }
    putchar('\n');
}

int *cpy_array(int len,int *ptr)
{
	int *new_array = (int*)malloc(sizeof(int)*len);
	if(new_array == NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	for(int i=0;i<len;i++){
		*(new_array+i) = *(ptr+i);
	}
	return new_array;
}

void print_array(int len,int *ptr)
{
	for(int i=0;i<len;i++)
	{
		printf("%d ",*(ptr + i));
	}
	putchar('\n');
}

void str_cpy(char *src,char *dest)
{
	while(*dest++ = *src++);
}

int str_length(char *ptr)
{
	char *start = ptr;
	while(*ptr++ != '\0');
	ptr--;
	return ptr-start;
}

void sort(int len, int *arr)
{
    char option;
    int temp = 0;
    while (1)
    {
        printf("Enter a for ascending sort and b for descending sort: ");
        scanf(" %c", &option);
        if (option == 'A' || option == 'a')
        {
            printf("Ascending order selected\n");
            for (int i = 0; i < len; i++)
            {
                for (int j = 0; j < len-1 - i; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        temp=0;
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            return;
        }
        else if (option == 'D' || option == 'd')
        {
            printf("Descending order selected\n");
            for (int i = 0; i < len; i++)
            {
                for (int j = 0; j < len-1 - i; j++)
                {
                    if (arr[j] < arr[j + 1])
                    {
                        temp=0;
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            return;
        }
        else
        {
            printf("Your entry is wrong please re-enter\n");
        }
    }
}

void swap_func(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
