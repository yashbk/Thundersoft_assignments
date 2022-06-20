#include "header.h"

// Function to insert node at the end
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

// Function to display data of all elements
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

// function to delete node from last
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
        printf("The deleted element is %c\n", temp->data);
        free(temp);
        prev->link = *head;
    }
}

// Function to find the number of nodes
int no_of_nodes(cll **head)
{
    if (*head == NULL)
    {
        return 0;
    }
    else
    {
        cll *temp = *head;
        int count = 0;
        do
        {
            count++;
            temp = temp->link;
        } while (temp != *head);
        return count;
    }
}

// Circular ll or not
void circular_or_not(cll **head)
{
    int flag = 0;
    cll *temp = *head;
    do
    {
        if (temp == NULL)
        {
            flag = 1;
            break;
        }
        temp = temp->link;
    } while (temp != *head);

    if (flag == 1)
    {
        printf("This is not a circular linked list\n\n");
    }
    else
    {
        printf("This is a circular linked list\n\n");
    }
}

// Function to add element at nth position
void insert_node_at_nth(cll **head, char data, int n)
{
    if (*head == NULL && n > 1)
    {
        printf("Link is empty so we can't enter node at position %d\n", n);
    }
    else
    {
        cll *newnode = (cll *)malloc(sizeof(cll));
        int len = no_of_nodes(head);
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
        }
        else
        {
            newnode->data = data;
            newnode->link = NULL;
            if (*head == NULL && n == 1)
            {
                *head = newnode;
                newnode->link = *head;
            }
            else if (n > 0 && n <= len + 1)
            {
                int k = 1;
                cll *prev = *head;
                cll *next = *head;
                if (n == 1)
                {
                    cll *temp = *head;
                    do
                    {
                        temp = temp->link;
                    } while (temp->link != *head);
                    newnode->link = *head;
                    *head = newnode;
                    temp->link = *head;
                }
                else
                {
                    while (k < n - 1)
                    {
                        k++;
                        prev = prev->link;
                    }
                    newnode->link = prev->link;
                    prev->link = newnode;
                }
            }
        }
    }
}