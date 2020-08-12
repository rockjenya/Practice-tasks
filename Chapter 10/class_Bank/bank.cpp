#include <iostream>
#include "bank.h"
Bank::Bank()
{
    name = "No name";
    number = "00000000";
    balance = 0.0;
}
Bank::Bank(const std::string &na,const std::string & nu,double bal)
{
    name = na;
    number = nu;
    balance = bal;
}
void Bank::show()const
{
    std::cout<<"Name: " << name << "\nNubmer: " << number << "\nBALANCE: " << balance <<std::endl;
}
void Bank::add(double & val)
{
    if(val > 0)
    {
        balance += val;
    }
    else
    {
        std::cout << "You can't add a value under 0\n";
    }
}
void Bank::give_money(double &val)
{
    if(val>balance)
        std::cout<<"You can't get more money than you have!"<<std::endl;
    else
        balance-=val;
}