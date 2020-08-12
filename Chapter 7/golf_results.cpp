#include <iostream>

using namespace std;
const int MAXIMA = 10;

void show(const int ar[], int n);
double mid_val(int * ar, int n);
int inp(int ar[]);

int main()
{
    int GAME[10];
    cout << "Enter ten values (not number to exit): ";
    int i = inp(GAME);
    cout << "Here is your results: ";
    show(GAME, i);
    cout << "Midle values is: " << mid_val(GAME, i) << endl;
    return 0;
}

void show(const int ar[], int n)
{
    for(int i = 0; i < n; i++)
        cout << " " << ar[i];
    cout << '\n';
}
double mid_val(int * ar, int n)
{
    double temp = 0.0;
    for(int i = 0; i < n; i++)
        temp += ar[i];
    return temp/n;
}
int inp(int ar[])
{
    int i = 0;
    while((i < MAXIMA) && cin >> ar[i])
    {
        i++;
    }
    return i;
}