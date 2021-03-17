#ifndef DOUBLE_LINKED_LIST_NODE_H
#define DOUBLE_LINKED_LIST_NODE_H
#include "person.h"
#include "student.h"
#include "teacher.h"
#include <iostream>
class double_linked_list_node : public person
{
    friend class double_linked_list_list;

private:
    double_linked_list_node *next;
    double_linked_list_node *previous;
    person *person_;

public:
    double_linked_list_node(person *dll_node)
    {
        this->person_ = dll_node;
        this->next = NULL;
        this->previous = NULL;
    }
    ~double_linked_list_node()
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
        this->previous = NULL;
    }
    void display_node()
    {
        printf("Double list node \n");
        this->person_->display();
    }
};

#endif