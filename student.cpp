#include <iostream>
#include "student.h"
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
        printf(" \n 1. Create a linked Student list \n 2. Display linked Student list \n 3. Insert a Student node at last \n 4. Insert a Student node at front \n 5. Delete a Student node at last\n 6. Delete a Student node at first \n 7.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nHow many students information has to be entered\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                student *s = new student();
                s->initialize();
                node_n = new node(s);
                list_l->insert_at_end(node_n);
            }
            break;
        case 2:
            list_l->display();
            break;
        case 3:
        {
            student *s1 = new student();
            s1->initialize();
            node_n = new node(s1);
            list_l->insert_at_end(node_n);
        }
        break;
        case 4:
        {
            student *s2 = new student();
            s2->initialize();
            node_n = new node(s2);
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