#include <iostream>
#include "teacher.h"
#include "node.h"
#include "list.h"
using namespace std;

int main()
{
    int i, n;
    int choice;
    list *list_l = new list;
    node *node_n;
    printf("\nINFORMATION\n");
    do
    {
        printf(" \n 1. Create a linked Teacher list \n 2. Display linked Teacher list \n 3. Insert a Teacher node at last \n 4. Insert a Teacher node at front \n 5. Delete a Teacher node at last\n 6. Delete a Teacher node at first \n 7.Exit \n");
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
                node_n = new node(t);
                list_l->insert_at_end(node_n);
            }
            break;
        case 2:
            list_l->display();
            break;
        case 3:
        {
            teacher *t1 = new teacher();
            t1->initialize();
            node_n = new node(t1);
            list_l->insert_at_end(node_n);
        }
        break;
        case 4:
        {
            teacher *t2 = new teacher();
            t2->initialize();
            node_n = new node(t2);
            list_l->insert_at_first(node_n);
        }
        break;
        case 5:
            list_l->delete_at_last();
            break;
        case 6:
            list_l->delete_at_first();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    } while (choice != 6);
    free(list_l);
}