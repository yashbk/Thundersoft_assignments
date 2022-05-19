// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern
1
12
123
1234
12345
1234
123
12
1
 */

#include <stdio.h>

int main()
{
    int num, limit;
    printf("Enter a number\n");
    scanf("%d", &num);
    limit = num * 2-1;
    for (int i = 1; i <= limit; i++)
    {
        if (i <= num)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            for(int j=0;j<=limit-i;j++)
            {
                printf("%d",j+1);
            }
        }
        printf("\n");
    }
    return 0;
}