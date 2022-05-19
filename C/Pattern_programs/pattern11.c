// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern
*********
 *******
  *****
   ***
    *
 */

#include <stdio.h>

int main()
{
    int num, odd;
    printf("Enter a number\n");
    scanf("%d", &num);
    odd = num*2-1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= odd; k++)
        {
            printf("*");
        }
        odd = odd - 2;
        printf("\n");
    }

    return 0;
}