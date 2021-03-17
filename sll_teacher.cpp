#include <iostream>
#include "teacher.h"
#include "single_linked_list_node.h"
#include "single_linked_list_list.h"
using namespace std;

int main()
{
    int i, n;
    int choice;
    single_linked_list_list *single_linked_list_list_l = new single_linked_list_list;
    single_linked_list_node *single_linked_list_node_n;
    printf("\nINFORMATION\n");
    do
    {
        printf(" \n 1. Create a linked Teacher single linked list \n 2. Display linked Teacher single linked list list \n 3. Insert a Teacher single linked list node at last \n 4. Insert a Teacher single linked list node at front \n 5. Delete a Teacher single linked list node at last\n 6. Delete a Teacher single linked list node at first \n 7.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nHow many Teachers information has to be entered\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                teacher *t = new teacher();
                t->initialize();
                single_linked_list_node_n = new single_linked_list_node(t);
                single_linked_list_list_l->insert_at_end(single_linked_list_node_n);
            }
            break;
        case 2:
            single_linked_list_list_l->display();
            break;
        case 3:
        {
            teacher *t1 = new teacher();
            t1->initialize();
            single_linked_list_node_n = new single_linked_list_node(t1);
            single_linked_list_list_l->insert_at_end(single_linked_list_node_n);
        }
        break;
        case 4:
        {
            teacher *t2 = new teacher();
            t2->initialize();
            single_linked_list_node_n = new single_linked_list_node(t2);
            single_linked_list_list_l->insert_at_first(single_linked_list_node_n);
        }
        break;
        case 5:
            single_linked_list_list_l->delete_at_last();
            break;
        case 6:
            single_linked_list_list_l->delete_at_first();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    } while (choice != 6);
    free(single_linked_list_list_l);
}