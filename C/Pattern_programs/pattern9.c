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
            for (int j = 1; j <= num-i; j++)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
        }
        else
        {
            for (int k = i; k <= limit; k++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}