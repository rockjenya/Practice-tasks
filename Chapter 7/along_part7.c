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
/*
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
*/

//--------------7.9--------------
/*
#include <iostream>

using namespace std;

unsigned int c_in_str(const char * str, char ch);

int main()
{
    char mas[15] = "minimum";
    char* value = "lilolia";
    unsigned int ms = c_in_str(mas,'m');
    unsigned int ls = c_in_str(value, 'l');
    cout << ms << " m characters in " << mas << endl;
    cout << ls << " l characters in " << value << endl;
    return 0;
}

unsigned int c_in_str(const char* str, char ch)
{
    unsigned int result = 0;
    while (*str)
    {
        if(*str==ch)
            result++;
        str++;
    }
    return result;
}
*/

//--------------7.10----------------
/*
#include <iostream>

char * buildstr(char c, int n);

int main()
{
    int n;
    char c;
    std::cout <<"Enter a character: ";
    std::cin >> c;
    std::cout <<"Enter an integer: ";
    std::cin >> n;
    char* ps = buildstr(c,n);
    std::cout << ps << std::endl;
    delete [] ps;

    ps = buildstr('+', 20);
    std::cout << ps << "-DONE-" << ps << std::endl;
    delete [] ps;
    return 0;
}

char* buildstr(char c, int n)
{
    char* pstr = new char[n+1];
    pstr[n] = '\0';
    while(n-- >0)
        pstr[n] = c;
    return pstr;
}
*/

//------------------7.11-----------------
/*
#include <iostream>
const int hour_per_minut = 60;
struct time_tr
{
    int hours;
    int mins;
};

time_tr sum(time_tr t1, time_tr t2);
void show(time_tr t);

int main()
{
    using namespace std;
    time_tr day1 = {5,45};
    time_tr day2 = {4,40};
    time_tr trip = sum(day1,day2);
    cout << "Two-day trip: ";
    show(trip);
    time_tr day3 = {2,10};
    cout <<"Three-day trip total: ";
    show(sum(trip,day3));
    return 0;
}
time_tr sum(time_tr t1, time_tr t2)
{
    time_tr result;
    result.hours = (t1.hours + t2.hours + (t1.mins + t2.mins)/hour_per_minut);
    result.mins = (t1.mins + t2.mins) % hour_per_minut;
    return result;
}
void show(time_tr t)
{
    using std::cout;
    cout << t.hours << " Hours " << t.mins << " minutes.\n";
}
*/

//-----------------7.12-------------
/*
#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar result;
    result.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    result.angle = atan2(xypos.y, xypos.x);
    return result;
}
void show_polar (polar dapos)
{
    using std::cout;
    const double Rad_to_deg = 57.29577951;
    cout << "Distance = " << dapos.distance;
    cout << " , angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees.\n";
}
*/

//-----------------7.13----------------
/*
#include <iostream>
#include <cmath>

struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done. \n";
    return 0;
}

void rect_to_polar(const rect* pxy, polar* pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}
void show_polar(const polar * pda)
{
    using namespace std;
    const double rad_to_deg = 57.29577951;
    cout << "Distance = " << pda->distance;
    cout << ", Angle = " << pda->angle * rad_to_deg;
    cout << " degrees.\n";
}
*/

//---------------7.14------------------
/*
#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);

int main()
{
    string list[SIZE];
    cout << "Enter your " << SIZE << " favorite astronomicaly things :\n";
    for(int i = 0; i < SIZE;i++)
    {
        cout << i+1 << ": ";
        getline(cin,list[i]);
    }
    cout << "Your list is:\n";
    display(list,SIZE);
    return 0;
}
void display(const string sa[], int n)
{
    for(int i = 0; i < n; i++)
        cout << i+1 << ": " << sa[i] << endl;
}
*/

//-------------------7.15-----------------
/*
#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Season = 4;
const array<string, Season> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array <double, Season>* pa);
void show(array <double, Season> da);
int main()
{
    array <double, Season> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}
void fill(array<double, Season>* pa)
{
    for(int i = 0; i < Season;i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}
void show(array<double, Season> da)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Season; i++)
    {
        cout << Snames[i] <<": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
*/

//----------7.16-----------
/*
#include <iostream>
void countdown (int n);
int main()
{
    countdown(4);
    return 0;
}
void countdown(int n)
{
    std::cout << "Counting down ... " << n << "\t (n at " << &n << ")" << std::endl;
    if(n>0)
        countdown(n-1);
    std::cout << n << ": Kaboom!" << "\t\t\t (n at" << &n << ")\n";
}
*/

//------------7.17-------------
/*
#include <iostream>

const int Len = 66;
const int Divs = 6;

void subdivide(char ar[], int low, int high, int level);

int main()
{
    using namespace std;
    char ruler[Len];
    int i;
    for (i = 1; i < Len; i++)
        ruler[i] = ' ';
    ruler[Len-1] = '\0';
    int max = Len -2;
    int min = 0;
    ruler[min]=ruler[max] = '|';
    cout << ruler << endl;
    for(i = 1; i <= Divs; i++)
    {
        subdivide(ruler,min,max,i);
        cout << ruler << endl;
        for(int j = 1; j < Len-2;j++)
            ruler[j] =' ';
    }
    return 0;
}
void subdivide(char ar[], int low, int high, int level)
{
    if(level == 0)
        return;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar,low,mid,level-1);
    subdivide(ar,mid,high,level-1);
}
*/

//-------------------7.18---------------

#include <iostream>

double betsy(int);
double pam(int);
void estimate(int lines, double(*pt)(int));

int main()
{
    using namespace std;
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code,betsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code,pam);
    return 0;
}
double betsy(int lns)
{
    return 0.05*lns;
}
double pam(int lns)
{
    return 0.03* lns + 0.0004 * lns * lns;
}
void estimate(int lines, double(*pf)(int))
{
    std::cout << lines << " lines will take";
    std::cout << (*pf)(lines) << " hour(s)\n";
}