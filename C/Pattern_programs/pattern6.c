// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern
*****
****
***
**
*
*/

#include <stdio.h>

int main()
{
    int num, k, flag = 1;
    printf("Enter a number\n");
    scanf("%d", &num);
    int limit = num * 2 - 1;
    int odd = 1;
    for (int i = 1; i <= limit; i++)
    {
        if (i <= num)
        {
            for (int k = 1; k < i; k++)
            {
                printf(" ");
            }
            for (int j = odd; j <= limit; j++)
            {
                printf("*");
            }
            odd = odd + 2;
        }
        else
        {
            if (flag)
            {
                odd = odd - 2;
            }
            flag = 0;
            odd = odd - 2;
            for (int k = i; k < limit; k++)
            {
                printf(" ");
            }
            for (int j = odd; j <= limit; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}