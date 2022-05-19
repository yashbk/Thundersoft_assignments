// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
 */

#include <stdio.h>

int main()
{
    int num, limit;
    printf("Enter a number\n");
    scanf("%d", &num);
    limit = num * 2;
    int odd = 1,once = 1;
    for (int i = 1; i <= limit; i++)
    {
        if (i <= num)
        {
            for (int j = i; j < num; j++)
            {
                printf(" ");
            }
            for (int k=1;k<=odd;k++)
            {
                printf("*");
            }
            odd = odd + 2;
        }
        else
        {
            if(once)
            {
                odd = odd - 4;
            }
            once = 0;
            for(int j=1;j<=i-num;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=odd;k++)
            {
                printf("*");
            }
            odd = odd - 2;
        }
        printf("\n");
    }
    return 0;
}