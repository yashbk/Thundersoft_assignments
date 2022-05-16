#include "header.h"

extern int dequeue_count;
extern queue *front;
extern queue *rear;

//function to enqueue node
void enqueue(int data)
{
	queue *newnode = (queue*)malloc(sizeof(queue));
	if(newnode == NULL)
	{
		printf("Memory allocation failed\n");
	}
	else
	{
		newnode->data = data;
		newnode->link = NULL;
		if(front == NULL && rear == NULL)
		{
			front = newnode;
			rear = newnode;
		}
		else
		{
			rear->link = newnode;
			rear = newnode;
		}
	}
}

//Function to dequeue node
void dequeue()
{
	dequeue_count++;
	if(dequeue_count%2 == 0)
	{
		show(rear);
	}
	if(front == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		queue *temp = front;
		front = temp->link;
		free(temp);
	}
}

//Function to display data of all nodes
void display()
{
	if(front == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		queue *temp = front;
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->link;
		}
	}
}

//Function to show node data at front
void show(queue *temp)
{
	printf("Even data is %d\n",temp->data);
}