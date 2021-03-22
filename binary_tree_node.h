#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H
#include <stdio.h>
#include <iostream>
#include "teacher.h"
#include "student.h"
#include "person.h"
class binary_tree_node
{
    friend class binary_tree;

public:
    binary_tree_node(person *node)
    {
        this->data = node;
        this->left = NULL;
        this->right = NULL;
    }
    ~binary_tree_node()
    {
        if (this->data != NULL)
        {
            free(this->data);
            this->data = NULL;
        }
    }
    void initialize()
    {
        this->data->initialize();
        this->left = NULL;
        this->right = NULL;
    }

    void display_binary_tree_node()
    {
        printf("Single list binary_tree_node \n");
        this->data->display();
    }

private:
    person *data;
    binary_tree_node *left;
    binary_tree_node *right;
};
#endif