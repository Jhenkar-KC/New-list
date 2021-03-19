#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "person.h"
class student : public person
{
private:
    char *student_id;
    int marks;

public:
    student()
    {
        this->student_id = new char[20];
        int marks = int();
    }
    ~student()
    {
        if (this->student_id != NULL)
        {
            free(this->student_id);
        }
    }
    void initialize()
    {
        person::initialize();
        printf("\nEnter STUDENT ID\n");
        scanf("%s", this->student_id);
        printf("Read Student ID : %s\n", this->student_id);
        printf("\nEnter MARKS\n");
        scanf("%d", &marks);
        printf("Read Marks : %d\n", this->marks);
    }

    void display()
    {
        person::display();
        printf("Student ID : %s \n", this->student_id);
        printf("Marks : %d \n", this->marks);
    }
};
#endif