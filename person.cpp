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
                student *s = new student();
                teacher *t = new teacher();
                p->initialize();
                s->initialize();
                t->initialize();
                node_n = new node(p, s, t);
                list_l->insert_at_end(node_n);
            }
            break;
        case 2:
            list_l->display();
            break;
        case 3:
        {
            person *p1 = new person();
            student *s1 = new student();
            teacher *t1 = new teacher();
            p1->initialize();
            s1->initialize();
            t1->initialize();
            node_n = new node(p1, s1, t1);
            list_l->insert_at_end(node_n);
        }
        break;
        case 4:
        {
            person *p2 = new person();
            student *s2 = new student();
            teacher *t2 = new teacher();
            p2->initialize();
            s2->initialize();
            t2->initialize();
            node_n = new node(p2, s2, t2);
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