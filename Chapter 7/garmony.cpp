#include <iostream>

using namespace std;

double garmony_fun(int a, int b);

int main()
{
    int a;
    int b;
    double garmony;
    cout << "Enter two values: ";
    cin >> a;
    cin >> b;
    while(!((a == 0) || (b == 0)))
    {
        garmony = garmony_fun(a,b);
        cout << "Garmony of " << a << " and " << b << " = " << garmony << endl;
        cout << "Enter two values: ";
        cin >> a;
        cin >> b;
    }
    return 0;
}
double garmony_fun(int a, int b)
{
    double result = 2.0 * a * b / (a+b);
    return result;
}