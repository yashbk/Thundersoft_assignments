// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern

1
33
555
7777
99999
8888
666
44
2
 */

#include <stdio.h>

int main()
{
    int num, limit;
    printf("Enter a number\n");
    scanf("%d", &num);
    limit = num * 2-1;
    int odd = 1,even=0,once = 1;
    for (int i = 1; i <= limit; i++)
    {
        if (i <= num)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d",odd);
            }
            odd = odd+2;
        }
        else
        {
            if(once)
            {
                even = odd-3;
            }
            once = 0;
            for(int j=0;j<=limit-i;j++)
            {
                printf("%d",even);
                
            }
            even = even -2;
        }
        printf("\n");
    }
    return 0;
}