#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}stack;


void push(stack **top,int num);
void pop(stack **top);
void enqueue(int data);
void dequeue();
void display();

