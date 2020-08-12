#include "plorg.h"
#include <iostream>
#include <cstring>
Plorg::Plorg()
{
    strcpy(name,"Plorga");
    CI = 0;
}
Plorg::Plorg(char *n, int index)
{
    for(int i = 0; i < MAX && *n !='\0'; i++)
    {
        name[i] = n[i];
    }
    CI = index;
}
void Plorg::changeCI(int &index)
{
    CI = index;
}
void Plorg::show()const
{
    std::cout << "\tPlorg info\n" << "Name: " << name << "\nCI = " << CI << std::endl;
}