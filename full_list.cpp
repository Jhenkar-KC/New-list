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
        printf("\n1. Create Teacher list \n 2. Create Student list\n3. Student Insert at the end \n 4. Teacher Insert at the end \n5.Teacher Insert at the first \n6. Student Insert at the first \n 7. Delete at the end \n8.Delete at the first \n9. Display linked list \n 10. Exit\n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            teacher *t = new teacher();
            t->initialize();
            single_linked_list_node_n = new single_linked_list_node(t);
            single_linked_list_list_l->insert_at_end(single_linked_list_node_n);
        }
        break;
        case 2:
        {
            student *s1 = new student();
            s1->initialize();
            single_linked_list_node_n = new single_linked_list_node(s1);
            single_linked_list_list_l->insert_at_end(single_linked_list_node_n);
        }
        break;
        case 3:
        {
            teacher *s1 = new teacher();
            s1->initialize();
            single_linked_list_node_n = new single_linked_list_node(s1);
            single_linked_list_list_l->insert_at_end(single_linked_list_node_n);
        }
        break;
        case 4:
        {
            student *s1 = new student();
            s1->initialize();
            single_linked_list_node_n = new single_linked_list_node(s1);
            single_linked_list_list_l->insert_at_end(single_linked_list_node_n);
        }
        break;
        case 5:
        {
            teacher *s2 = new teacher();
            s2->initialize();
            single_linked_list_node_n = new single_linked_list_node(s2);
            single_linked_list_list_l->insert_at_first(single_linked_list_node_n);
        }
        break;
        case 6:
        {
            student *s2 = new student();
            s2->initialize();
            single_linked_list_node_n = new single_linked_list_node(s2);
            single_linked_list_list_l->insert_at_first(single_linked_list_node_n);
        }
        break;
        case 7:
            single_linked_list_list_l->delete_at_last();
            break;
        case 8:
            single_linked_list_list_l->delete_at_first();
            break;
        case 9:
            single_linked_list_list_l->display();
            break;
        case 10:
            exit(0);
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    } while (choice != 10);
    free(single_linked_list_list_l);
}