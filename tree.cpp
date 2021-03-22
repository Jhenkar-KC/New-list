#include <iostream>
#include "teacher.h"
#include "person.h"
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
        printf(" \n 1.Tree \n 2.Display \n 3.Display inorder tree \n 4.Display preorder tree \n 5.Display postorder tree \n 6.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            teacher *s = new teacher();
            s->initialize();
            btreenode_n = new binary_tree_node(s);
            btree->insert(s->getName(), btreenode_n);
        }
        break;
        case 2:
        {
            btree->display();
        }
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