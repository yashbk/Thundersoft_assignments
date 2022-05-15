#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        int data;
        struct node *link;
}stack1,stack2;

extern stack1 *top1;
extern stack2 *top2;

void enqueue(int data);
void dequeue();
