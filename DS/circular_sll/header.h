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