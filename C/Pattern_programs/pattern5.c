//Author : Yashas B K
//Date : 19-05-2022
/*Description : WAP to print below pattern
*       *
**     **
***   ***
**** ****
*********
*/

#include <stdio.h>

int main() {
    int num,k;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==num)
            {

            }
            else
            {
                printf("*");
            }    
        }
        for(k=i;k<num-1;k++)
        {
            printf(" ");
        }

        for(k=i;k<num;k++)
        {
            printf(" ");
        }
        
        for(int l=1;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}