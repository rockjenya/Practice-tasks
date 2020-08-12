#include <iostream>

using namespace std;

unsigned long long factorial(int fact);

int main()
{
    cout << "Enter factorial  you want: ";
    int fact;
    cin >> fact;
    cout << fact <<"! = " << factorial(fact) << endl;
    return 0;
}
unsigned long long factorial(int fact)
{
    if(fact == 0)
        return 1;
    return fact*factorial(fact-1);
}