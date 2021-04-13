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

    void insertNode(binary_tree_node *root, binary_tree_node *node)
    {
        if (this->tree == NULL)
        {
            this->tree = node;
            return;
        }

        if (strcmp(root->data->getName(), node->data->getName()) < 0)
        {
            if (root->left == NULL)
            {
                root->left = node;
                return;
            }
            insertNode(root->left, node);
            return;
        }
        if (strcmp(root->data->getName(), node->data->getName()) > 0)

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

    binary_tree_node *
    search(char *name)
    {
        return this->search_node(this->tree, name);
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
        return NULL;
    }

    void *delete_node(char *name)
    {
        return this->DeleteNodeInBST(this->tree, name);
    }

    binary_tree_node *DeleteNodeInBST(binary_tree_node *root, char *name)
    {
        if (root == NULL)
            return root;
        else if (strcmp(root->data->getName(), name) < 0)
            root->left = DeleteNodeInBST(root->left, name);
        else if (strcmp(root->data->getName(), name) > 0)
            root->right = DeleteNodeInBST(root->right, name);
        else
        {

            // Case 1:  No child
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                root = NULL;
            }
            //Case 2: One child
            else if (root->left == NULL)
            {
                binary_tree_node *temp = root;
                root = root->right;
                delete temp;
            }
            else if (root->right == NULL)
            {
                binary_tree_node *temp = root;
                root = root->left;
                delete temp;
            }
            // case 3: 2 children
            else
            {
                binary_tree_node *temp = FindMin(root->right);
                root = temp;
                root->right = DeleteNodeInBST(root->right, name);
            }
        }
        return;
    }

    binary_tree_node *
    FindMin(binary_tree_node *root)
    {
        while (root->left != NULL)
            root = root->left;
        return root;
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

    /* This function traverse the skewed binary tree and
   stores its nodes pointers in vector nodes[] */
    void storeBSTNodes(binary_tree_node *root, vector<binary_tree_node *> &node)
    {
        // Base case
        if (root == NULL)
            return;

        // Store nodes in Inorder (which is sorted
        // order for BST)
        storeBSTNodes(root->left, node);
        node.push_back(root);
        storeBSTNodes(root->right, node);
    }

    /* Recursive function to construct binary tree */
    binary_tree_node *buildTreeUtil(vector<binary_tree_node *> &node, int start,
                                    int end)
    {
        // base case
        if (start > end)
            return NULL;

        /* Get the middle element and make it root */
        int mid = (start + end) / 2;
        binary_tree_node *root = node[mid];

        /* Using index in Inorder traversal, construct
       left and right subtress */
        root->left = buildTreeUtil(node, start, mid - 1);
        root->right = buildTreeUtil(node, mid + 1, end);

        return root;
    }

    // This functions converts an unbalanced BST to
    // a balanced BST
    binary_tree_node *buildTree(binary_tree_node *root)
    {
        // Store nodes of given BST in sorted order
        vector<binary_tree_node *> node;
        storeBSTNodes(root, node);

        // Constucts BST from nodes[]
        int n = node.size();
        return buildTreeUtil(nodes, 0, n - 1);
    }
};
#endif