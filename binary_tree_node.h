#ifndef BINARY_TREE_dataH
#define BINARY_TREE_dataH
#include <iostream>
#include "person.h"
#include "teacher.h"
#include "student.h"
class binary_tree_node : public person
{
    friend class binary_tree;

private:
    person *data;
    binary_tree_node *left;
    binary_tree_node *right;

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
    void display_node()
    {
        printf("Binary Tree\n");
        this->data->display();
    }
};
#endif