// Author : Yashas B K
// Date : 05-05-2022
/* Description  :
1) Create a circular LL with 5 nodes having char data - vowels - a,e,i,o,u
2) Deletion of last node in circular linked list
3) Count no of nodes in CLL
4) Create new node at nth position in CLL

*/

#include "header.h"

int main()
{
    cll *head = NULL;
    char *str = "aeiou";
    while (*str != '\0')
    {
        insert(&head, *str++);
    }
    printf("Entered data is \n");
    display(&head);
    putchar('\n');

    printf("Deleting from last:\n");
    delete_from_last(&head);
    display(&head);
    printf("Number of nodes in CLL is %d\n\n", no_of_nodes(&head));

    printf("Inserting node at position 1\n");
    insert_node_at_nth(&head, 'Y', 1);
    display(&head);
    printf("Number of nodes in CLL is %d\n\n", no_of_nodes(&head));

    printf("Inserting node at position 3\n");
    insert_node_at_nth(&head, 'Y', 3);
    display(&head);
    printf("Number of nodes in CLL is %d\n\n", no_of_nodes(&head));

    circular_or_not(&head);

    printf("Inserting node at position 7\n");
    insert_node_at_nth(&head, 'Y', 7);
    display(&head);
    printf("Number of nodes in CLL is %d\n\n", no_of_nodes(&head));
}
