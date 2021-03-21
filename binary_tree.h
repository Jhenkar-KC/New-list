#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <iostream>
#include "person.h"
#include "binary_tree_node.h"
#include "teacher.h"
#include "student.h"
class binary_tree
{
private:
    binary_tree_node *tree;

public:
    binary_tree()
    {
        this->tree = NULL;
    }
    ~binary_tree()
    {
        if (this->tree != NULL)
        {
            free(this->tree);
        }
    }

    binary_tree_node *insert(tree->data->getName(), binary_tree_node *node)
    {
        if (node == NULL)
        {
            node = this->tree->data->getName();
            node->left = NULL;
            node->right = NULL;
        }
        else
        {
            if (this->tree->data->getName() < node->data)
            {
                insert(node->left, this->tree->data->getName());
            }
            else if (this->tree->data->getName()->data > node->data)
            {
                insert(node->right, this->tree->data->getName());
            }
        }
        return 0;
    }

    void display()
    {
        if (this->tree == NULL)
        {
            printf("The List is Empty\n");
        }
        else
        {
            binary_tree_node *node;
            node = this->tree;
            while (node != NULL)
            {
                node->display_node();
            }
        }
    }
};
#endif