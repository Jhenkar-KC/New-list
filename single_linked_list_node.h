#ifndef single_linked_list_node_H
#define single_linked_list_node_H
#include <stdio.h>
#include <iostream>
#include "teacher.h"
#include "student.h"
#include "person.h"
class single_linked_list_node
{
    friend class single_linked_list_list;

public:
    single_linked_list_node(person *node)
    {
        this->node_ = node;
        this->next = NULL;
    }
    ~single_linked_list_node()
    {
        if (this->node_ != NULL)
        {
            free(this->node_);
            this->node_ = NULL;
        }
    }
    void initialize()
    {
        this->node_->initialize();
        this->next = NULL;
    }

    void display_single_linked_list_node()
    {
        printf("Single list single_linked_list_node \n");
        this->node_->display();
    }

private:
    person *node_;
    single_linked_list_node *next;
};
#endif