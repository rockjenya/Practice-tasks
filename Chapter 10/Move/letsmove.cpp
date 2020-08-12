#include<iostream>
#include"move.h"

using namespace std;

int main()
{
    cout << "Enter move!" << endl;
    double a,b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    Move mov(a,b);
    mov.showmove();
    cout << "Enter move!" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    Move m(a,b);
    m = mov.add(m);
    m.showmove();
    cout << "Reset. Enter reset's value x and y" << endl;
    cout << "x: ";
    cin >> a;
    cout << "y: ";
    cin >> b;
    mov.reset(a,b);
    mov.showmove();
    cout << "Bye!";
    return 0;
}