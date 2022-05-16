#include "header.h"

//Pointers to contain top of both the stacks
stack *top1 = NULL;
stack *top2 = NULL;

//push operation
void push(stack **top, int data)
{
    stack *newnode = (stack *)malloc(sizeof(stack));
    if (newnode == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if (*top == NULL)
        {
            *top = newnode;
        }
        else
        {
            newnode->link = *top;
            *top = newnode;
        }
    }
}

//pop operation
void pop(stack **top)
{
    if (*top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        stack *temp = *top;
        *top = (*top)->link;
        free(temp);
    }
}

//enqueue operation
void enqueue(int data)
{
    push(&top1, data);
}

//dequeue operation
void dequeue()
{
    if (top1 == NULL && top2 == NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        if (top2 == NULL)
        {
            while (top1 != NULL)
            {
                push(&top2, top1->data);
                pop(&top1);
            }
        }
        pop(&top2);
    }
}

//function to display data in all nodes
void display()
{
    if (top1 != NULL)
    {
        while (top1 != NULL)
        {
            push(&top2, top1->data);
            pop(&top1);
        }
    }
    stack *temp = top2;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->link;
    }
}