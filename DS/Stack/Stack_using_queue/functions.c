#include "header.h"

void enqueue(queue **front,queue **rear,int data)
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
        if(*front == NULL && *rear == NULL)
        {
            *front = newnode;
            *rear = newnode;
        }
        else
        {
            (*rear)->link = newnode;
            *rear = newnode;
        }
    }
}

void dequeue(queue **front,queue **rear)
{
    if(*front == NULL)
    {
        printf("There are no lists");
    }
    else
    {
        queue *temp = *front;
        *front = (*front)->link;
        free(temp);
    }
}

void push(int data)
{

    {
        enqueue(&front1,&rear1,data);
        queue *temp = front2;
        while(temp != NULL)
        {
            enqueue(&front1,&rear1,temp->data);
            dequeue(&front2,&rear2);
            temp = temp->link;
        }
        buffer = front1;
        front1 = front2;
        front2 = buffer;
        buffer = rear1;
        rear1 = rear2;
        rear2 = buffer;
    }
}