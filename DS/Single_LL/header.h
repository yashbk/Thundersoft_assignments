#include <stdio.h>
#include <stdlib.h>

//structure declaration
typedef struct node{
    int data;
    struct node *link;
}sll;

//function declaration
void insert_last_sll(sll **head,int data);
void insert_front_sll(sll **head,int data);
void delete_last_sll(sll **head);
void del_alternate_node(sll **head);
void display_sll(sll **head);
int length_sll(sll **head);
void reverse_data_sll(sll **head);
void reverse_link_sll(sll **head);

