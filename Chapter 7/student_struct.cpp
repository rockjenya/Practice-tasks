#include <iostream>
using namespace std;

const int SLEN = 30;
struct student 
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    cin.get();
    while(cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++)
    {   display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done!\n";
    return 0;
}
int getinfo(student pa[], int n)
{
    cout << "\n\t-Enter students in class-\n";
    int i;
    for(i = 0; i < n; i++)
    {
        cout << "Student №" << (i+1) << endl;
        cout << "Name: ";
        cin.getline(pa[i].fullname, SLEN);
        if((pa[i].fullname) == "\n")
                return i;
        cin.get();
        cout << "Hobby: ";
        cin >> pa[i].hobby;
        cin.get();
        cout << "OOP level: ";
        cin >> pa[i].ooplevel;
        cin.get();
        cout << "Done!\n";
    }
    return i;
}
void display1(student st)
{
    cout << "Student " << st.fullname << " have hobby: " << st.hobby << ", and OOP lvl: " << st.ooplevel << endl;
}
void display2(const student *ps)
{
    cout << ps->fullname << "'s pointer show that student have hobby: " << ps->hobby << ", and OOP lvl: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    cout << "\t\t|=YOUR CLASS=|\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\tStudent №" << (i+1) << endl;
        cout << pa[i].fullname << ", hobby: " << pa[i].hobby << " OOP lvl: " << pa[i].ooplevel << endl;
    }
}