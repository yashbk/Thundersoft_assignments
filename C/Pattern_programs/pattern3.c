//Author : Yashas B K
//Date : 19-05-2022
/*Description : WAP to print below pattern
*****
****
***
**
*
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=i;j<=num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}