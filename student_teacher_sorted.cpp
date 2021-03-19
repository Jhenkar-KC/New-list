#include <iostream>
#include "teacher.h"
#include "student.h"
#include "single_linked_list_node.h"
#include "single_linked_list_list.h"
using namespace std;
int main()
{
    int choice;
    single_linked_list_list *single_linked_list_list_l = new single_linked_list_list;
    single_linked_list_node *single_linked_list_node_n;
    printf("\nINFORMATION\n");
    do
    {
        printf("\n1.Create list of Teacher\n2.Create list of Student \n3.Display linked list \n4.Exit\n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            teacher *t = new teacher;
            t->initialize();
            single_linked_list_node_n = new single_linked_list_node(t);
            single_linked_list_list_l->sorted_name(single_linked_list_node_n);
        }
        break;
        case 2:
        {
            student *s = new student;
            s->initialize();
            single_linked_list_node_n = new single_linked_list_node(s);
            single_linked_list_list_l->sorted_name(single_linked_list_node_n);
        }
        break;
        case 3:
            single_linked_list_list_l->display_sorted_name();
            break;
        case 4:
            exit(0);
            break;
        }
    } while (choice != 3);
}