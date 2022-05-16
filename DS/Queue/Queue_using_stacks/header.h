#include <stdio.h>
#include <stdlib.h>

//structure declaration
typedef struct node{
    int data;
    struct node *link;
}stack;

//Function declaration
void push(stack **top,int num);
void pop(stack **top);
void enqueue(int data);
void dequeue();
void display();

