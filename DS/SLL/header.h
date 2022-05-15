#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}sll;

void insert_sll(sll **head,int data);
void delete_sll(sll **head);
void display_sll(sll **head);
int length_sll(sll **head);
void reverse_data_sll(sll **head);
void reverse_link_sll(sll **head);