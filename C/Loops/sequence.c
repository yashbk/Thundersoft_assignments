// Author : Yashas B K
// Date : 05-05-2022
/*Descripition :  A sequence must be made with the following constraint on its values.
Constraint: The number of consecutive same elements in the sequence should be same as the value.
Example: 1 2 2 3 3 3 4 4 4 4 is valid (input1)
1 2 3 3 3  is invalid. (input2)
Write a program that checks whether a given input sequence is valid.
Input format is just a sequence of integers.
Output format should be one of the following:
input1  : sequence is valid
input2  : sequence is not valid
*/

#include <stdio.h>

int main()
{
	int num = 0, count = 0, check = 0, flag = 0, numb_change = 0;
	printf("Enter the sequence starting from 1 and press -1 to stop: ");
	while (num != -1)
	{
		scanf("%d", &num);
		// printf("Outer loop\n");
		if (num == -1)
		{
			printf("Sequence valid\n");
			return 0;
		}
		else if (num > 1 && count == 0)
		{
			flag = 1;
			break;
		}
		count = num - 1;

		while (count--)
		{
			if (numb_change == 1)
			{
				if (num != check)
				{
					// printf("Checking\n");
					flag = 1;
					numb_change = 0;
					break;
				}
			}
			scanf("%d", &check);
			// printf("Inner loop\n");
			if (check != num)
			{
				flag = 1;
				break;
			}
			else if (count == 0)
			{
				check++;
				numb_change = 1;
				// printf("check value is %d\n",check);
			}
			else if (check == -1)
			{
				printf("Sequence valid\n");
				return 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (flag == 0)
	{
		printf("Sequence is valid\n");
	}
	else
		printf("Sequence not valid\n");
}
