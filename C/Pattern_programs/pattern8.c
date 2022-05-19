// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern
*
**
***
****
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main()
{
    int num, limit;
    printf("Enter a number\n");
    scanf("%d", &num);
    limit = num * 2 - 1;
    for (int i = 1; i <= limit; i++)
    {
        if (i <= num)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int k = 1; k <= i - num; k++)
            {
                printf(" ");
            }
            for (int l = i; l <= limit; l++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}