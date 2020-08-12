#include <iostream>
#include "person.h"
#include <string>
using namespace std;
int main()
{

    Person one;
    Person two("Myname");
    Person three("Your name", "Second name");
    cout << "\tInfo\n";
    one.Show();
    cout << "\tReverse Info\n";
    one.FormalShow();
    cout << "\tInfo\n";
    two.Show();
    cout << "\tReverse Info\n";
    two.FormalShow();
    cout << "\tInfo\n";
    three.Show();
    cout << "\tReverse Info\n";
    three.FormalShow();
    return 0;
}