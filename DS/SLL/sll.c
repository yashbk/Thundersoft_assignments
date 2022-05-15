#include "header.h"

int main()
{
    sll *head=NULL;
    insert_sll(&head,100);
    insert_sll(&head,200);
    insert_sll(&head,300);
    printf("Before reversing\n");
    display_sll(&head);
    //reverse_data_sll(&head);
    reverse_link_sll(&head);
    printf("After reversing\n");
    display_sll(&head);
}





