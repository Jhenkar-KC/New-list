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
        printf(" \n 1.Tree \n 2.Search \n 3.Display inorder tree \n 4.Display preorder tree \n 5.Display postorder tree \n 6.Delete \n 7.Exit \n");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("\nHow many students information has to be entered\n");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                teacher *s = new teacher();
                s->initialize();
                btreenode_n = new binary_tree_node(s);
                btree->insert(btreenode_n);
            }
        }
        break;
        case 2:
        {
            char *name;
            binary_tree_node *node;

            name = new char[1000];
            printf("Enter the Key/Name to be Searched in Tree \n");
            scanf("%s", name);

            node = btree->search(name);
            if (node == NULL)
            {
                printf("Node not found for name %s\n", name);
                continue;
            }
            printf("Found node\n");
            node->display_binary_tree_node();
        }
        break;
        case 3:
        {
            btree->inorder_node();
        }
        break;
        case 4:
        {
            btree->preorder_node();
        }
        break;
        case 5:
        {

            btree->postorder_node();
        }
        break;
        case 6:
        {
            char *name;
            binary_tree_node *node;
            printf("Enter the Key/Name to be Deleted in Tree \n");
            scanf("%s", name);
            btree->delete_node(name);
        }
        break;
        case 7:
            exit(0);
            break;
        default:
            printf("\nEnter correct choice\n");
            break;
        }
    } while (choice != 7);
    free(btree);
}