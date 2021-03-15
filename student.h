#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "person.h"
class student : public person
{
    friend class node;

private:
    char *student_id;
    char *marks;

public:
    student()
    {
        this->student_id = new char[20];
        this->marks = new char[5];
    }
    ~student()
    {
        if (this->student_id != NULL)
        {
            free(this->student_id);
        }
        if (this->marks != NULL)
        {
            free(this->marks);
        }
    }
    void initialize()
    {
        printf("\nEnter STUDENT ID\n");
        scanf("%s", this->student_id);
        printf("Read Student ID : %s\n", this->student_id);
        printf("\nEnter MARKS\n");
        scanf("%s", this->marks);
        printf("Read Marks : %s\n", this->marks);
    }

    void display()
    {
        printf("Teacher ID : %s \n", this->student_id);
        printf("Salary : %s \n", this->marks);
    }
};
#endif