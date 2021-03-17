#ifndef PERSON_H
#define PERSON_H
#include <iostream>
class person
{
private:
    char *name;
    char *email;
    char *phone;
    char *address;

public:
    person()
    {
        this->name = new char[1000];
        this->email = new char[1000];
        this->phone = new char[15];
        this->address = new char[1000];
    }
    ~person()
    {
        if (this->name != NULL)
        {
            free(this->name);
        }
        if (this->email != NULL)
        {
            free(this->email);
        }
        if (this->phone != NULL)
        {
            free(this->phone);
        }
        if (this->address != NULL)
        {
            free(this->address);
        }
    }

    void initialize()
    {
        printf("\nEnter the NAME OF Person\n");
        scanf("%s", this->name);
        printf("\nRead Person NAME :%s\n", this->name);
        printf("\nEnter the EMAIL OF Person\n");
        scanf("%s", this->email);
        printf("\nRead Person EMAIL :%s\n", this->email);
        printf("\nEnter the PHONE NUMBER OF Person\n");
        scanf("%s", this->phone);
        printf("\nRead Person PHONE NUMBER :%s\n", this->phone);
        printf("\nEnter the ADDRESS OF Person\n");
        scanf("%s", this->address);
        printf("\nRead Person ADDRESS :%s\n", this->address);
    }
    virtual void display()
    {
        printf("Name : %s \n", this->name);
        printf("E-mail : %s \n", this->email);
        printf("Phone Number : %s \n", this->phone);
        printf("Address : %s \n", this->address);
    }
};
#endif