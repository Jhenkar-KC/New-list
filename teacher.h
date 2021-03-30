#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include <iostream>
class teacher : public person
{
private:
    char *teacher_id;
    int salary;

public:
    teacher()
    {
        this->teacher_id = new char[10];
        int salary = int();
    }
    ~teacher()
    {
        if (this->teacher_id != NULL)
        {
            free(this->teacher_id);
        }
    }

    void initialize()
    {
        person::initialize();
        printf("\nEnter TEACHER ID\n");
        scanf("%s", this->teacher_id);
        printf("Read Teacher ID : %s\n", this->teacher_id);
        printf("\nEnter SALARY\n");
        scanf("%d", &salary);
        printf("Read Salary : %d\n", this->salary);
    }

    void display()
    {
        person::display();
        printf("Teacher ID : %s \n", this->teacher_id);
        printf("Salary : %d \n", this->salary);
    }
};
#endif