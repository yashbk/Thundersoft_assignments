// Author : Yashas B K
// Date : 19-05-2022
/*Description : WAP to print below pattern

1
..
222
....
33333
......
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
        if(i%2 == 0)
        {
            n++;
        }
        printf("\n");
    }
    return 0;
}