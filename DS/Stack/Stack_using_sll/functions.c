#include "header.h"

typedef struct node{
	int data;
	struct node *link;
}stack;

stack *top = NULL;

extern int pop_count;
void pop()
{
	if(top == NULL)
	{
		printf("Memory allocation not successful\n");
	}
	if(++pop_count%2 == 0)
	{
		printf("The deleted even data is %d\n",top->data);
	}
	stack *temp = top;
	top = temp->link;
	free(temp);
}

void push(int data)
{
	stack *newnode = (stack*)malloc(sizeof(stack));
	if(newnode == NULL)
	{
		printf("Memory allocation not successful\n");
	}
	else
	{
		newnode->data = data;
		newnode->link = top;
		top = newnode;
	}
}

void display()
{
	printf("Entered even data is %d\n",top->data);
}