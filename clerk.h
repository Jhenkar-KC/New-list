#ifndef CLERK_H
#define CLERK_H
#include <iostream>
#include "person.h"
class clerk : public person
{
private:
    char *clerk_id;
    int *clerk_salary;

public:
    clerk()
    {
        this->clerk_id = new char[20];
        int clerk_salary = int();
    }
    ~clerk()
    {
        if (this->clerk_id != NULL)
        {
            free(this->clerk_id);
        }
        if (this->clerk_salary != NULL)
        {
            free(this->clerk_salary);
        }
    }
    void initialize()
    {
        person::initialize();
        printf("\nEnter clerk ID\n");
        scanf("%s", this->clerk_id);
        printf("Read clerk ID : %s\n", this->clerk_id);
        printf("\nEnter clerk_salary\n");
        scanf("%d", &clerk_salary);
        printf("Read clerk_salary : %d\n", this->clerk_salary);
    }

    void display()
    {
        person::display();
        printf("clerk ID : %s \n", this->clerk_id);
        printf("clerk_salary : %d \n", this->clerk_salary);
    }
};
#endif