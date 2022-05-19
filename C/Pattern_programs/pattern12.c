// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern
*****
 *****
  *****
   *****
    *****
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
        for(int k=1;k<i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=num;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}