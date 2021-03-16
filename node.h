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
        this->person_ = node;
        this->next = NULL;
    }
    ~node()
    {
        if (this->person_ != NULL)
        {
            free(this->person_);
            this->person_ = NULL;
        }
    }
    void initialize()
    {
        this->person_->initialize();
        this->next = NULL;
    }

    void display_node()
    {
        printf("Single list node \n");
        this->person_->display();
    }

private:
    person *person_;
    node *next;
};
#endif