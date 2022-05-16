#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  char data;
  struct node *link;
} cll;

void insert (cll ** head, char data);
void display (cll ** head);
void delete_from_last (cll ** head);
int no_of_nodes(cll **head);
void insert_node_at_nth(cll **head,char data,int n);