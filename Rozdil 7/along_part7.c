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
/*
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
*/

//-------------------7.7-----------------
/*
#include <iostream>

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue_array(double r, double ar[], int n);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0 )
    {
        cout << "Enter ravaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue_array(factor, properties,size);
        show_array(properties, size);
    }
    cout << "Done" << endl;
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using std::cin;
    using std::cout;
    using std::endl;
    double temp;
    int i;
    for(i = 0; i < limit; i++)
    {
        cout << "Enter a value №" << (i+1) << ": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout <<"Bad input; input terminated." << endl;
            break;
        }
        else if(temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    for (int i = 0;i < n; i++)
    {
        std::cout << "Property №" << (i+1) << ": $";
        std::cout << ar[i] << std::endl;
    }
}

void revalue_array(double r, double ar[], int n)
{
    for(int i = 0; i < n; i++)
        ar[i] *= r;
}
*/

//--------------7.8------------------

#include <iostream>

const int ArSize = 8;
int sum_arr (const int *begin, const int * end);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies, cookies+ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies+3);
    cout <<"First three eaters ate " << sum << " cookies." << endl;
    sum = sum_arr(cookies+4, cookies+8);
    cout << "Last fout eaters ate "<< sum << " cookies." << endl;
    return 0;
}
int sum_arr(const int* begin, const int* end)
{
    const int* pt;
    int total = 0;
    for(pt = begin; pt != end; pt++)
        total = total + *pt;
    return total;
}