//Author : Yashas B K
//Date : 16-05-2022
/*  Description : 
    1) Create a list with 3 nodes having int data in single Linked list data : 100,200,300
    2) Reverse a SLL
*/ 


#include "header.h"

int main()
{
    sll *head=NULL;
    
    //Inserting values 100, 200 and 300
    insert_last_sll(&head,100);
    insert_last_sll(&head,200);
    insert_last_sll(&head,300);

    printf("Inserted nodes are:\n");
    display_sll(&head);
    printf("\nBefore reversing\n");
    display_sll(&head);
    //reverse_data_sll(&head);
    reverse_data_sll(&head);
    printf("After reversing\n");
    display_sll(&head);

    //Deleting linked list to form new one for alternate deletion operation
    for(int i=0; i<3;i++)
    {
        delete_last_sll(&head);
    }

    for(int i=0;i<6;i++)
    {
        insert_last_sll(&head,i+1);
    }
    printf("Inserted elements are:\n");
    display_sll(&head);
    del_alternate_node(&head);
    printf("After deleting alternate nodes\n");
    display_sll(&head);

}





