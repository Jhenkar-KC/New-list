#include <iostream>
#include "teacher.h"
#include "binary_tree_node.h"
#include "binary_tree.h"
using namespace std;

int main()
{
    int i, n;
    int choice;
    binary_tree_node *btreenode_n;
    binary_tree *btree = new binary_tree;
    printf("\nINFORMATION\n");
    do
    {
        printf(" \n 1.Tree \n 2.Displa \n 3.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nHow many teachers information has to be entered\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                teacher *s = new teacher();
                s->initialize();
                btreenode_n = new binary_tree_node(s);
                btree->insert(btreenode_n);
            }
            break;
        case 2:
            btree->display();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    } while (choice != 6);
    free(btree);
}