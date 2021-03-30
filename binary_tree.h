#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include <iostream>
#include "person.h"
#include "binary_tree_node.h"
#include "teacher.h"
#include "student.h"
#include "string.h"
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

    binary_tree_node *insertNode(binary_tree_node *root, binary_tree_node *node)
    {
        if (this->tree == NULL)
        {
            this->tree = node;
            return node;
        }
        else
        {
            if (root->data->getName() == node->data->getName())
            {
                printf("Duplicate Entry");
            }
            else if (root->data->getName() < node->data->getName())
            {
                if (root->left == NULL)
                {
                    root->left = node;
                    return root;
                }
                root->left = insertNode(root->left, node);
                return root;
            }

            else if (root->data->getName() > node->data->getName())
            {

                if (root->right == NULL)
                {
                    root->right = node;
                    return root;
                }
                root->right = insertNode(root->right, node);
                return root;
            }
        }
        return root;
    }

    /*If root == NULL 
    return NULL;
If number == root->data 
    return root->data;
If number < root->data 
    return search(root->left)
If number > root->data 
    return search(root->right)*/

    void search(char *name)
    {
        this->search_node(this->tree, name);
    }
    binary_tree_node *search_node(binary_tree_node *root, char *name)
    {
        if (root != NULL)
        {
            if (strcmp(root->data->getName(), name) == 0)
            {
                return root;
            }

            if (strcmp(root->data->getName(), name) < 0)
            {
                return search_node(root->left, name);
            }
            if (strcmp(root->data->getName(), name) > 0)
            {
                return search_node(root->right, name);
            }
        }
    }

    void delete_node(char *name)
    {
        this->DeleteNodeInBST(this->tree, name);
    }

    binary_tree_node *DeleteNodeInBST(binary_tree_node *root, char *name)
    {
        if (root == NULL)
            return root;
        if (strcmp(root->data->getName(), name) <= 0)
            return DeleteNodeInBST(root->left, name);
        else if (strcmp(root->data->getName(), name) > 0)
            return DeleteNodeInBST(root->right, name);
        else
        {
            //No child
            if (root->right == NULL && root->left == NULL)
            {
                delete root;
                root = NULL;
            }
            //One child
            else if (root->right == NULL)
            {
                binary_tree_node *temp = root;
                root = root->left;
                delete temp;
            }
            else if (root->left == NULL)
            {
                binary_tree_node *temp = root;
                root = root->right;
                delete temp;
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
            preorder(node->right);
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

    void inorder_node()
    {
        this->inorder(this->tree);
    }

    void preorder_node()
    {
        this->preorder(this->tree);
    }

    void postorder_node()
    {
        this->postorder(this->tree);
    }
};
#endif