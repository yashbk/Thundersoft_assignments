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
    int n=1;
    int odd = 1,even=0,once = 1;
    for (int i = 0; i <= num; i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i%2 == 0)
            {
                printf("%d",n);
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}