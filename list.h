#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include "node.h"
#include <iostream>
class list
{

public:
    list()
    {
        this->head = NULL;
    }
    ~list()
    {
        node *current = this->head;
        node *next;
        while (current != NULL)
        {
            next = current->next;
            free(current);
            current = next;
        }
        this->head = NULL;
    }
    node *insert_at_end(node *node)
    {
        if (this->head == NULL)
        {
            this->head = node;
        }
        else
        {
            node::node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node;
        }
        return node;
    }

    node *insert_at_first(node *node)
    {
        if (this->head == NULL)
        {
            printf("It's First Node\n");
            this->head = node;
        }
        else
        {
            node->next = this->head;
            this->head = node;
        }
        return node;
    }

    void delete_at_last()
    {
        node *temp;
        temp = this->head;
        node *previous;
        printf("Delete at last\n");
        if (this->head == NULL)
        {
            printf("No Data found....!\n");
        }
        if (this->head->next == NULL)
        {
            free(this->head);
            this->head = NULL;
        }
        else
        {
            printf("The Nodes are present in the list so moving to last node\n");
            while (temp->next != NULL)
            {
                previous = temp;
                temp = temp->next;
                printf("while \n");
            }
            free(previous->next);
            previous->next = NULL;
        }
    }

    void delete_at_first()
    {
        if (this->head == NULL)
        {
            printf("NO Data found....!\n");
        }
        else
        {
            printf("Deleting the First Node\n");
            node *temp;
            temp = this->head;
            this->head = this->head->next;
            free(temp);
        }
    }

    void display()
    {
        if (this->head == NULL)
        {
            printf("The List is Empty\n");
        }
        else
        {
            node *node;
            node = this->head;
            while (node != NULL)
            {
                node->display_node();
                node = node->next;
            }
        }
    }

private:
    node *head;
};
#endif