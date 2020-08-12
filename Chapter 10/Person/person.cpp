#include "person.h"
#include <iostream>

Person::Person()
{
    lname = "No name";
    fname[0] = '\0';
}
Person::Person(const std::string &ln, const char *fn)
{
    lname = ln;
    for(int i = 0; i<LIMIT && *fn != '\0'; i++)
    {
        fname[i] = fn[i];
    }
    
}
void Person::Show()const
{
    std::cout<<"\nName: " << lname << "\nSurname: " << fname << std::endl;
}
void Person::FormalShow()const
{
    std::cout<<"\nSurname: " << fname <<"\nName: " << lname << std::endl;
}