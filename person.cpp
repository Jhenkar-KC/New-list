#include <iostream>
#include "person.h"
#include "node.h"
#include "list.h"
#include "student.h"
#include "teacher.h"
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
        printf(" \n 1. Create a linked list \n 2. Display linked list \n 3. Insert a node at last \n 4. Insert a node at front \n 5. Delete a node at last\n 6. Delete a node at first \n 7.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nHow many persons information has to be entered\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                person *p = new person();
                node_n = new node(p);
                list_l->insert_at_end(node_n);
            }
            break;
        case 2:
            list_l->display();
            break;
        case 3:
        {
            person *p1 = new person();
            node_n = new node(p1);
            list_l->insert_at_end(node_n);
        }
        break;
        case 4:
        {
            person *p2 = new person();
            node_n = new node(p2);
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