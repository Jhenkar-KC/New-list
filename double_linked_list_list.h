#ifndef DOUBLE_LINKED_LIST_LIST_H
#define DOUBLE_LINKED_LIST_LIST_H
#include "double_linked_list_node.h"
#include "person.h"
#include <iostream>
class double_linked_list_list
{
private:
    double_linked_list_node *head;

public:
    double_linked_list_list()
    {
        this->head = NULL;
    }
    ~double_linked_list_list()
    {
        double_linked_list_node *temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            free(temp);
        }
    }

    double_linked_list_node *insert_at_end(double_linked_list_node *d_node)
    {
        if (this->head == NULL)
        {
            this->head = d_node;
        }
        else
        {
            double_linked_list_node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = d_node;
            d_node->previous = temp;
        }
        return d_node;
    }

    double_linked_list_node *insert_at_first(double_linked_list_node *d_node)
    {
        d_node->next = NULL;
        d_node->previous = NULL;
        if (this->head == NULL)
        {
            this->head = d_node;
        }
        else
        {
            d_node->next = this->head;
            this->head->previous = d_node;
            this->head = d_node;
        }
        return d_node;
    }

    void delete_at_first()
    {
        double_linked_list_node *temp;
        if (head == NULL)
        {
            printf("The Double linked list is empty\n");
        }
        else
        {
            temp = this->head;
            this->head = this->head->next;
            this->head->next->previous = NULL;
            free(temp);
        }
    }

    void delete_at_last()
    {
        double_linked_list_node *temp;
        double_linked_list_node *current;
        if (this->head == NULL)
        {
            printf("The Double linked list is empty\n");
        }
        else
        {
            temp = this->head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            current = temp->previous;
            current->next = NULL;
            temp->previous = NULL;
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
            double_linked_list_node *node;
            node = this->head;
            while (node != NULL)
            {
                node->display_node();
                node = node->next;
            }
        }
    }
};
#endif