#ifndef SINGLE_LINKED_LIST_NODE_H
#define SINGLE_LINKED_LIST_NODE_H
#include <stdio.h>
#include "single_linked_list_node.h"
#include <iostream>
class single_linked_list_list
{
public:
    single_linked_list_list()
    {
        this->head = NULL;
    }
    ~single_linked_list_list()
    {
        single_linked_list_node *current = this->head;
        single_linked_list_node *next;
        while (current != NULL)
        {
            next = current->next;
            free(current);
            current = next;
        }
        this->head = NULL;
    }
    single_linked_list_node *insert_at_end(single_linked_list_node *node_n)
    {
        if (this->head == NULL)
        {
            this->head = node_n;
        }
        else
        {
            single_linked_list_node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node_n;
        }
        return node_n;
    }

    single_linked_list_node *insert_at_first(single_linked_list_node *node_n)
    {
        if (this->head == NULL)
        {
            printf("It's First single_linked_list_node\n");
            this->head = node_n;
        }
        else
        {
            node_n->next = this->head;
            this->head = node_n;
        }
        return node_n;
    }

    void delete_at_last()
    {
        single_linked_list_node *temp;
        temp = this->head;
        single_linked_list_node *previous;
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
            printf("The single_linked_list_nodes are present in the single_linked_list_list so moving to last single_linked_list_node\n");
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
            printf("Deleting the First single_linked_list_node\n");
            single_linked_list_node *temp;
            temp = this->head;
            this->head = this->head->next;
            free(temp);
        }
    }

    void display()
    {
        if (this->head == NULL)
        {
            printf("The single_linked_list_list is Empty\n");
        }
        else
        {
            single_linked_list_node *node_n;
            node_n = this->head;
            while (node_n != NULL)
            {
                node_n->display_single_linked_list_node();
                node_n = node_n->next;
            }
        }
    }

private:
    single_linked_list_node *head;
};
#endif