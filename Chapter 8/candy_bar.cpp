#include <iostream>
struct CandyBar{
    char *name;
    double weight;
    int cal;
};

void set_struct(CandyBar &bar, char *nam = "Millenium Munch", const double &wei = 2.85, const int &c = 380);
void pnt_struct(const CandyBar &bar);

int main()
{
    using namespace std;
    CandyBar cookie;
    cout << "\tStandart cookie" << endl;
    set_struct(cookie);
    pnt_struct(cookie);
    char name[100];
    int callories;
    double weight;
    cout << "Pls enter your cookie's name and weight and calloies" <<endl;
    cout << "Name: ";
    cin.getline(name,100);
    cin.get();
    cout << "Weight: ";
    cin >> weight;
    cout << "Callories: ";
    cin >> callories;
    set_struct(cookie, name, weight, callories);
    cout << "\n\tHere is your cookie" <<endl;
    pnt_struct(cookie);
    return 0;
}

void set_struct(CandyBar &bar, char *nam,const double &wei,const int &c)
{
    bar.name = nam;
    bar.weight = wei;
    bar.cal = c;
}
void pnt_struct(const CandyBar &bar)
{
    using std::endl;
    using std::cout;

    cout << "Name is " << bar.name << endl;
    cout << "Weight is " << bar.weight << endl;
    cout << "Callories is " << bar.cal << endl;
}