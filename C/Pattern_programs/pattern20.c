// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern

    A
   bb
  CCC
 dddd
EEEEE
 */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int n=65;
    for (int i = 1; i <= num; i++)
    {
        for(int k=i;k<num;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(i%2 != 0)
            {
                printf("%c",n);
            }
            else
            {
                printf("%c",n+32);
            }
        }
        n = n+1;
        printf("\n");
    }
    return 0;
}