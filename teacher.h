#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include <iostream>
class teacher : public person
{
private:
    char *teacher_id;
    char *salary;

public:
    teacher()
    {
        this->teacher_id = new char[10];
        this->salary = new char[10];
    }
    ~teacher()
    {
        if (this->teacher_id != NULL)
        {
            free(this->teacher_id);
        }
        if (this->salary != NULL)
        {
            free(this->salary);
        }
    }

    void initialize()
    {
        person::initialize();
        printf("\nEnter TEACHER ID\n");
        scanf("%s", this->teacher_id);
        printf("Read Teacher ID : %s\n", this->teacher_id);
        printf("\nEnter SALARY\n");
        scanf("%s", this->salary);
        printf("Read Salary : %s\n", this->salary);
    }

    void display()
    {
        person::display();
        printf("Teacher ID : %s \n", this->teacher_id);
        printf("Salary : %s \n", this->salary);
    }
};
#endif