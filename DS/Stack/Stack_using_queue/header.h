#include <stdio.h>
#include <stdlib.h>

//structure declaration
typedef struct node{
    int data;
    struct node *link;
}queue;

//function declaration
void enqueue(queue **front,queue **rear,int data);
void dequeue(queue **front,queue **rear);
void push(int data);
void pop();
void display();
