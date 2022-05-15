#include "header.h"

void insert(cll **head, char data)
{
    cll *newnode = (cll *)malloc(sizeof(cll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        // printf("%c",data);
        newnode->link = NULL;
        if (*head == NULL)
        {
            *head = newnode;
            (*head)->link = *head;
        }
        else
        {
            cll *temp = *head;
            while (temp->link != *head)
            {
                temp = temp->link;
            }
            temp->link = newnode;
            newnode->link = *head;
        }
    }
}

void display(cll **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        cll *temp = *head;
        while (temp->link != *head)
        {
            printf("Data is %c\n", temp->data);
            temp = temp->link;
        }
        printf("Data is %c\n", temp->data);
    }
    /*
       //Another method using do while
       {
       cll *temp = *head;
       do
       {
       printf("Data is %c\n",temp->data);
       temp = temp->link;
       }while(temp != *head);
       }
     */
}

void delete_from_last(cll **head)
{
    if (*head == NULL)
    {
        printf("List is empty to remove\n");
    }
    else
    {
        cll *temp = *head;
        cll *prev = NULL;
        while (temp->link != *head)
        {
            prev = temp;
            temp = temp->link;
        }
        printf("The deleted element is %d\n", temp->data);
        free(temp);
        prev->link = *head;
    }
}