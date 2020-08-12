#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned cool);

int main()
{
    double total, choices, cool;
    cout << "Enter the total number of choices on the game card and\nthe number of picks allowed, after enter super number:\n";
    while((cin >> total >> choices >> cool) && choices <=total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices, cool) << " of winning.\n";
        cout << "Next two numbers and super number (q to quit):";
    }
    cout << "Bye";
    return 0;
}
long double probability(unsigned numbers, unsigned picks, unsigned cool)
{
    long double result = 1.0;
    long double fin_res;
    long double n;
    unsigned p;
    unsigned c = cool;
    for(n=numbers, p = picks; p > 0;p-- ,n--)
        result = result * n/p;
    fin_res = result;
    for(int i = 1; i <= cool; i++)
        fin_res = fin_res * i;
    return fin_res;
}