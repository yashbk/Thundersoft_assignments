#include <stdio.h>
#include <stdlib.h>

//struture declaration
typedef struct node{
	int data;
	struct node *link;
}stack;

//function declaration
void push(int data);
void pop();
void display();