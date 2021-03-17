#ifndef NODE_H
#define NODE_H
#include <stdio.h>
#include <iostream>
#include "teacher.h"
#include "student.h"
#include "person.h"
class node
{
    friend class list;
public:
    node(person *node)
    {
        this->node_ = node;
        this->next = NULL;
    }
    ~node()
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

    void display_node()
    {
        printf("Single list node \n");
        this->node_->display();
    }

private:
    person *node_;
    node *next;
};
#endif