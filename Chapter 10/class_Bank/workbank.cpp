#include<iostream>
#include"bank.h"
using namespace std;

int main()
{
    Bank aval("Nice guy", "11111525425", 40000.25);
    cout << "\tThis is your info"<<endl;
    aval.show();
    cout << "You can add money to your balance!";
    double val;
    cout << " Enter value to add: ";
    cin >> val;
    aval.add(val);
    cout << "Just look!" << endl;
    aval.show();
    cout << "You can get some money from your balance! Enter value to get money: ";
    cin >> val;
    aval.give_money(val);
    cout << "Look!" << endl;
    aval.show();
    cout <<"Bye!";
    return 0;
}