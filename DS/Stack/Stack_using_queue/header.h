#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}queue;

// queue *First = NULL;
// queue *Second = NULL; 
queue *front1 = NULL,*front2 = NULL;
queue *rear1 = NULL,*rear2 = NULL;
queue *buffer = NULL;

void enqueue(queue **front,queue **rear,int data);
