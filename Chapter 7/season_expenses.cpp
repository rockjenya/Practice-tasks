//-----Task 8.a-----
/*
#include <iostream>

const int Season = 4;
const char S_names [Season][10] = { "Spring", "Summer", "Fall", "Winter"};

void fill(double * array, const int s);
void show (const double *array, const int s);
int main()
{
    double array [Season];
    fill(array, Season);
    show(array, Season);
    return 0;
}
void fill(double *array, const int s)
{
    using std::cin;
    using std::cout;
    using std::endl;

    for(int i = 0; i < s; i++)
    {
        cout << "Enter " << S_names[i] << " expenses: ";
        cin >> array[i];
    }
}
void show(const double *array, const int s)
{
    using std::cout;
    using std::endl;

    double total = 0.0;
    cout << "\nExpenses\n";
    for(int i = 0; i < s;i++)
    {
        cout << S_names[i] << ":$" << array[i] << endl;
        total += array[i];
    }
    cout << "Total Expenses : $" << total << endl;
}
*/
//-----Task 8.b------

#include <iostream>

const int Season = 4;
const char S_names [Season][10] = { "Spring", "Summer", "Fall", "Winter"};

struct arr
{
    double array[Season];
};

void fill(arr *ar);
void show(const arr *ar);

int main()
{
    arr ar;
    fill(&ar);
    show(&ar);
    return 0;
}
void fill(arr *ar)
{
    using std::cin;
    using std::cout;
    using std::endl;
    for(int i = 0; i < Season;i++)
    {
        cout << "Enter " << S_names[i] << " expenses: ";
        cin >> ar->array[i];
    }
}
void show(const arr *ar)
{
    using std::cout;
    using std::endl;

    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Season; i++)
    {
        cout << S_names[i] << ": $" << ar->array[i] << endl;
        total += ar->array[i];
    }
    cout << "Total expenses: $" << total << endl;
}