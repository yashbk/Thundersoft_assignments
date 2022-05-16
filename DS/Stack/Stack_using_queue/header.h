#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}queue;

void enqueue(queue **front,queue **rear,int data);
void dequeue(queue **front,queue **rear);
void push(int data);
void pop();
void display();
