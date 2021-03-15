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
    node(person *node, student *s_node, teacher *t_node)
    {
        this->person_ = node;
        this->student_ = s_node;
        this->teacher_ = t_node;
        this->next = NULL;
    }
    ~node()
    {
        if (this->person_ != NULL)
        {
            free(this->person_);
            this->person_ = NULL;
        }
        if (this->student_ != NULL)
        {
            free(this->student_);
            this->student_ = NULL;
        }
        if (this->teacher_ != NULL)
        {
            free(this->teacher_);
            this->teacher_ = NULL;
        }
    }
    void initialize()
    {
        this->person_->initialize();
        this->teacher_->teacher::initialize();
        this->student_->student::initialize();
        this->next = NULL;
    }

    void display_node()
    {
        printf("Single list node \n");
        this->person_->display();
        this->teacher_->teacher::display();
        this->student_->student::display();
    }

private:
    person *person_;
    node *next;
};
#endif