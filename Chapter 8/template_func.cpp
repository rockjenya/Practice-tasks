#include<iostream>
const int N = 5;
using namespace std;
template <typename T>
T max5(T arr[]);

int main()
{
    int iar[N] = {1,2,3,4,5};
    double dar[N] = {1.0,2.0,3.0,8.0,5.0};
    int imax = max5(iar);
    double dmax = max5(dar);
    cout << "int max = " << imax << endl;
    cout << "double max = " << dmax << endl;
    return 0;
}

template<typename T>
T max5(T arr[])
{
    T max;
    for(int i = 0; i<N; i++)
        if(arr[i] > arr[i-1])
            max=arr[i];
    return max;
}