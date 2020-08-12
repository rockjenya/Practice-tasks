#ifndef BANK_H_
#define BANK_H_
#include <string>
class Bank
{
private:
    std::string name;
    std::string number;
    double balance;
public:
Bank();
Bank(const std::string &na,const std::string & nu,double bal);
void show()const;
void add(double & val);
void give_money(double & val);
};
#endif