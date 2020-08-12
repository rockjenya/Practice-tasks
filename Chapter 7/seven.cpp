#include <iostream>

const int MAX=5;

double * fill_array(double ar[], int limit);
void show_array(const double ar[], const double * limit);
void revalue(double r, double ar[], const double * limit);

int main()
{
    using namespace std;
    double properties [MAX];
    double *plimit = fill_array(properties, MAX);
    show_array(properties, plimit);
    cout << "Enter revaluation factor: ";
    double factor;
    while(!(cin >> factor))
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Bad input; Please enter a nubmer: ";
    }
        revalue(factor,properties,plimit);
        show_array(properties,plimit);
    
    cout << "Done!\n";
    return 0;
}
double * fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    double *plimit;
    for(i = 0; i < limit; i++)
    {
        cout << "Enter value # " << (i+1) << ": ";
        cin >> temp;
        cout << '\n' << i << endl;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    cout << i << endl;
    plimit = &(ar[i]);
    return plimit;
}
void show_array(const double *ar, const double * limit)
{
    const double * plimit = ar;
    for(int i = 0;plimit != limit; plimit++,i++)
    {
        std::cout << "Property #" << (i+1) << ": $";
        std::cout << *plimit << std::endl;
    }
}
void revalue(double r, double ar[], const double *limit)
{
    for(;ar != limit; ar++)
        *ar *= r;
}