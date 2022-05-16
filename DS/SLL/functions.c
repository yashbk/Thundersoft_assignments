#include "header.h"

void insert_last_sll(sll **head, int data)
{
    sll *newnode = (sll *)malloc(sizeof(sll));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            sll *temp = *head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void delete_last_sll(sll **head)
{
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        sll *temp = *head;
        sll *previous = *head;
        while (temp->link != NULL)
        {
            previous = temp;
            temp = temp->link;
        }
        if((*head)->link == NULL)
        {
            *head = NULL;
        }
        else
        {
            previous->link = NULL;
        }
        free(temp);
    }
}

void del_alternate_node(sll **head)
{
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        sll *prev = *head;
        sll *next = (*head)->link;
        while (prev != NULL && next != NULL)
        {
            prev->link = next->link;
            free(next);
            prev = prev->link;
            if (prev != NULL)
            {
                next = prev->link;
            }
        }
    }
}

void display_sll(sll **head)
{
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        sll *temp = *head;
        while (temp != NULL)
        {
            printf("%d \n", temp->data);
            temp = temp->link;
        }
    }
}

int length_sll(sll **head)
{
    sll *temp = *head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->link;
        len++;
    }
    return len;
}

void reverse_data_sll(sll **head)
{
    sll *front, *back;
    front = back = *head;
    int i = 0, j = length_sll(head) - 1, k = 0, temp;
    while (i < j)
    {
        k = 0;
        back = *head;
        while (k < j)
        {
            back = back->link;
            k++;
        }
        temp = front->data;
        front->data = back->data;
        back->data = temp;
        front = front->link;

        i++, j--;
    }
}

void reverse_link_sll(sll **head)
{
    sll *next = NULL;
    sll *previous = NULL;
    while (*head != NULL)
    {
        next = (*head)->link;
        (*head)->link = previous;
        previous = *head;
        *head = next;
    }
    *head = previous;
}

void delete_front_sll(sll **head)
{
    if(*head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        sll *temp = *head;
        *head = (*head)->link;
        free(temp);
    }
}

void insert_front_sll(sll **head,int data)
{
    sll *newnode = (sll*)malloc(sizeof(sll));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            newnode->link = *head;
            *head = newnode;
        }
    }
}