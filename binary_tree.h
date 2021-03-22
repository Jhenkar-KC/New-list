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

    binary_tree_node *insert(person *getName(), binary_tree_node *node)
    {

        if (node == NULL)
        {
            node->data = this->tree->data->getName();
            node->left = node->right = NULL;
        }
        else if ((this->tree->data->getName()) < (node->data))
            node->left = insert(tree->data->getName(), node->left);
        else if ((this->tree->data->getName()) > (node->data))
            node->right = insert(tree->data->getName(), node->right);
        return node;
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
                node->display_binary_tree_node();
            }
        }
    }
    void *inorder(binary_tree_node *node)
    {
        if (node != node)
        {
            inorder(node->left);
            node->display_binary_tree_node();
            inorder(node->right);
        }
    }
    void *preorder(binary_tree_node *node)
    {
        if (node != node)
        {
            node->display_binary_tree_node();
            preorder(node->left);
            preorder(node->left);
        }
    }
    void *postorder(binary_tree_node *node)
    {
        if (node != node)
        {
            postorder(node->left);
            postorder(node->right);
            node->display_binary_tree_node();
        }
    }
};
#endif