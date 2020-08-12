#include <iostream>
#include "plorg.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    Plorg plorgys;
    cout << "You create a PLORG" << endl;
    plorgys.show();
    cout << "You can reset PLORG CI!" << endl;
    int index;
    cout << "Enter CI:";
    cin >> index;
    plorgys.changeCI(index);
    plorgys.show();
    Plorg plorgan("Nice guy");
    cout << "\tNew PLORG" << endl;
    plorgan.show();
    cout << "Bye!";
    return 0;
}