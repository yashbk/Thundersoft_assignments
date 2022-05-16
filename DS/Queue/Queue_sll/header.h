#include <stdio.h>
#include <stdlib.h>

//Struture declaration
typedef struct node{
	int data;
	struct node *link;
}queue;

//function declaration
void show(queue *);
void enqueue(int);
void dequeue();
void display();



