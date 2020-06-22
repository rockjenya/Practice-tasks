//-------------------7.1--------------
/*
#include <iostream>

void simple(); // прототип функції
int main()
{
    using namespace std;
    cout << "main () will called the simple() function: \n";
    simple(); // виклик функції
    cout << "main() is finished with the simple() function.\n";
    //cin.get();
    return 0;
}
// Визначення функції
void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}
*/

//------------------7.2------------------
/*
#include <iostream>

void cheers(int);        // прототип без повертаючого значення
double cube(double x);  // прототип з поверненням double

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cheers(5);                      // виклик cheers
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);     // виклик cube
    cout << "A " << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet." << endl;
    cheers(cube(2));                // захист прототипу в дії
    return 0;
}

void cheers(int n)
{
    using std::cout;
    using std::endl;
    for(int i = 0; i <n; i++)
        cout<<"Cheers! ";
    cout << endl;
}
double cube(double x)
{
    return x*x*x;
}
*/

//------------------7.3------------------
/*
#include<iostream>

using namespace std;

void n_chars(char,int);

int main()
{
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    while (ch!='q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch,times);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << " .\n";
    cout << "Buy!\n";
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- >0)
        cout << c;
}
*/

//-----------------------7.4------------------

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices;
    cout << "Enter the total number of choices on the game card and\nthe number of picks allowed:\n";
    while ((cin >>total>>choices)&& choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total,choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Bye!\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    for(n = numbers, p = picks; p > 0;n--,p--)
        result = result *n/p;
    return result;
}