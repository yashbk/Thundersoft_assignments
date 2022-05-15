//Author : Yashas B K
//Date : 04-05-2022
//Description : create a queue and enqueue 1,2,3 and dequeue once - print after even enqueue and dequeue 


#include "header.h"
#define SIZE 3

int dequeue_count;
queue *front = NULL;
queue *rear = NULL;

int main()
{
	int i=0;
    
	while(i++<SIZE)
	{
		
		enqueue(i+1);
		if(i%2 == 0)
		{
			show(front);
		}
	}
	dequeue();
}

