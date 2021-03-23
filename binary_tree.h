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

    void insert(binary_tree_node *node)
    {
        this->insertNode(this->tree, node);
    }
    void insertNode(binary_tree_node *root, binary_tree_node *node)
    {
        if (this->tree == NULL)
        {
            this->tree = node;
            return;
        }
        else if (root->data->getName() < node->data->getName())
        {
            if (root->left == NULL)
            {
                root->left = node;
                return;
            }
            insertNode(root->left, node);
            return;
        }
        else if (root->data->getName() > node->data->getName())
        {
            if (root->right == NULL)
            {
                root->right = node;
                return;
            }
            insertNode(root->right, node);
            return;
        }
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
            while (this->tree != NULL)
            {
                node->display_binary_tree_node();
            }
        }
    }

    void inorder(binary_tree_node *node)
    {
        if (node != NULL)
        {
            inorder(node->left);
            node->display_binary_tree_node();
            inorder(node->right);
        }
    }
    void preorder(binary_tree_node *node)
    {
        if (node != NULL)
        {
            node->display_binary_tree_node();
            preorder(node->left);
            preorder(node->left);
        }
    }
    void postorder(binary_tree_node *node)
    {
        if (node != NULL)
        {
            postorder(node->left);
            postorder(node->right);
            node->display_binary_tree_node();
        }
    }
    binary_tree_node *Min_node(binary_tree_node *node)
    {
        if (node == NULL)
        {
            return NULL;
        }
        if (node->left)
        {
            return Min_node(node->left);
        }
        else
        {
            return node;
        }
    }
};
#endif