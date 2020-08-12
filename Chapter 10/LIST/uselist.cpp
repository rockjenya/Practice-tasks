#include <iostream>
#include "list.h"

using std::cin;
using std::cout;
using std::endl;
void add(int & a)
{
    cout << "Function add at 2" << endl;
    cout << "\tResolst = " << a + 2 << endl;
}
void mux(int & a)
{
    cout << "Function muxed at 2" << endl;
    cout << "\tResolst = " << a * 2 << endl;
}
int main()
{
    List ls;
    cout << "\tList created" << endl;
    ls.ifclear();
    cout << "Enter elements in list:";
    int a;
    cin >> a;
    ls.add(a);
    ls.ifclear();
    ls.show();
    ls.iffull();
    cin >> a;
    ls.add(a);
    ls.show();
    cin >> a;
    ls.add(a);
    ls.show();
    cin >> a;
    ls.add(a);
    ls.show();
    cin >> a;
    ls.add(a);
    ls.show();
    ls.visit(mux);
    ls.visit(add);
    cin >> a;
    ls.add(a);
    ls.show();
    cin >> a;
    ls.add(a);
    ls.show();
    cin >> a;
    ls.add(a);
    ls.show();
    ls.iffull();
    ls.visit(mux);
    ls.visit(add);
    cout << "Bye!";
    return 0;
}