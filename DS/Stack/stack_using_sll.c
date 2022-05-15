//Author : Yashas B K
//Date : 04-05-2022
//Description : create a stack and push 1,2,3 and pop once - print after even push and pop

#include "header.h"

int pop_count = 0;

int main()
{
	for(int i=0;i<3;i++)
	{
		if(i%2 == 0 && i !=0)
		{
			display();
		}
		push(i+1);
	}
	pop();
}




	

