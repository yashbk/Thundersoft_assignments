#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}queue;


void show(queue *);
void enqueue(int);
void dequeue();
void display();



