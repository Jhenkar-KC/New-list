#include <iostream>
#include "student.h"
#include "double_linked_list_node.h"
#include "double_linked_list_list.h"
using namespace std;

int main()
{
    int i, n;
    int choice;
    double_linked_list_list *double_linked_list_list_l = new double_linked_list_list;
    double_linked_list_node *double_linked_list_node_n;
    printf("\nINFORMATION\n");
    do
    {
        printf(" \n 1. Create a linked student double linked list \n 2. Display linked student double linked list list \n 3. Insert a student double linked list node at last \n 4. Insert a student double linked list node at front \n 5. Delete a student double linked list node at last\n 6. Delete a student double linked list node at first \n 7.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nHow many students information has to be entered\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                student *t = new student();
                t->initialize();
                double_linked_list_node_n = new double_linked_list_node(t);
                double_linked_list_list_l->insert_at_end(double_linked_list_node_n);
            }
            break;
        case 2:
            double_linked_list_list_l->display();
            break;
        case 3:
        {
            student *t1 = new student();
            t1->initialize();
            double_linked_list_node_n = new double_linked_list_node(t1);
            double_linked_list_list_l->insert_at_end(double_linked_list_node_n);
        }
        break;
        case 4:
        {
            student *t2 = new student();
            t2->initialize();
            double_linked_list_node_n = new double_linked_list_node(t2);
            double_linked_list_list_l->insert_at_first(double_linked_list_node_n);
        }
        break;
        case 5:
            double_linked_list_list_l->delete_at_last();
            break;
        case 6:
            double_linked_list_list_l->delete_at_first();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    } while (choice != 6);
    free(double_linked_list_list_l);
}