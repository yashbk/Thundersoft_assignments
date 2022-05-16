#include "header.h"

queue *front1 = NULL, *front2 = NULL;
queue *rear1 = NULL, *rear2 = NULL;
queue *buffer = NULL;

void enqueue(queue **front, queue **rear, int data)
{
    queue *newnode = (queue *)malloc(sizeof(queue));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if (*front == NULL && *rear == NULL)
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

void dequeue(queue **front, queue **rear)
{
    if (*front == NULL)
    {
        printf("There are no lists");
    }
    else
    {
        queue *temp = *front;
        *front = (*front)->link;
        free(temp);
        if (*front == NULL)
        {
            *rear = NULL;
        }
    }
}

void push(int data)
{
    if (front1 == NULL)
    {
        enqueue(&front1, &rear1, data);
        while (front2 != NULL)
        {
            enqueue(&front1, &rear1, front2->data);
            dequeue(&front2, &rear2);
        }
    }
    else
    {
        enqueue(&front2, &rear2, data);
        while (front1 != NULL)
        {
            enqueue(&front2, &rear2, front1->data);
            dequeue(&front1, &rear1);
        }
    }
}

void pop()
{
    if (front1 != NULL)
    {
        dequeue(&front1, &rear1);
    }
    else
    {
        dequeue(&front2, &rear2);
    }
}

void display()
{
    if (front1 != NULL)
    {
        queue *temp = front1;
        while(temp != NULL)
        {
            printf("%d \n",temp->data);
            temp = temp->link;
        }
    }
    else
    {
        queue *temp = front2;
        while(temp != NULL)
        {
            printf("%d \n",temp->data);
            temp = temp->link;
        }
    }
}