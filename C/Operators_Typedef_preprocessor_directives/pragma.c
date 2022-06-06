#include <stdio.h>

#pragma pack(1)  // This will cause all structures to remove padding unless one more pragma is defined.
typedef struct
{
    char new;
    int num;
    char one;
} str1;

#pragma pack(4)  // Here I am telling compiler to have size of data type to be atleast 4 bytes
//The number should be always less than of equal to sizeof biggest data type in the structure.
typedef struct
{
    char new;
    int num;
    char one;
} str2;

int main()
{
    str1 one;
    printf("Size of structure after packing is %zu\n", sizeof(one));
    str2 two;
    printf("Size of structure after packing is %zu\n", sizeof(two));
}
