#include <iostream>

int Fill_array(double array [],int size);
void Show_array(double const array[],int i);
void Reverse_array(double array[], int i);

int main()
{
    using namespace std;
    cout << "Please enter array's size: ";
    int size;
    cin >> size;
    double array[size];
    int i = Fill_array(array, size);
    cout << "\tHere is your array" << endl;
    Show_array(array, i);
    cout << "I can reverse your array! Look!" << endl;
    Reverse_array(array,i);
    return 0;
}

int Fill_array(double array[], int size)
{
    using std::endl;
    using std::cout;
    using std::cin;

    int i = 0;
    cout << "Please, enter your array! (q to quit)" << endl;
    cout << "array[" << i << "]= ";
    while(i < size &&(cin >> array[i]))
    {
        cout << "array[" << i+1 << "]= ";
        i++;
    }
    return i;
}
void Show_array(double const array[],int i)
{
    for(int j = 0; j < i; j++)
        std::cout << "array [" << j << "]= " << array[j] << std::endl;
}
void Reverse_array(double array[],int i)
{
    int temp;
    for(int j = 0; j < i/2; j++)
    {
        temp = array[j];
        array[j] = array[i-1-j];
        array[i-1-j] = temp;
    }
    for(int j = 0; j < i; j++)
        std::cout << "array [" << j << "]= " << array[j] << std::endl;
}