#include <iostream>
using namespace std;
#include <cstring>

struct stringy{
    char *str;
    int ct;
};

void set(stringy &struc,const char *str);
void show(stringy &struc, int i = 1);
void show(const char *str, int i = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0]= 'D';
    testing[1]= 'u';
    show(testing);
    show(testing, 3);
    show("done!");
    delete[] beany.str;
    return 0;
}
void set(stringy &struc, const char *str)
{
    cout << "Set." <<endl;
    struc.ct = strlen(str);
    struc.str = new char[struc.ct+1];
    strcpy(struc.str, str);
}
void show(stringy &struc, int i)
{   
    cout << "show1"<< endl;
    for(int j = 0; j < i; j++)
        cout << struc.str <<endl;
}
void show(const char *str, int i)
{
    cout << "show2" <<endl;
    for(int j = 0; j<i;j++)
        cout << str << endl;
}