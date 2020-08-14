#include<iostream>
const int N = 5;
using namespace std;
template <typename T>
T max5(T arr[]);

int main()
{
    int iar[N] = {384,385,3,1,5};
    double dar[N] = {1.0,1001.0,1000.0,8.0,5.0};
    int imax = max5(iar);
    double dmax = max5(dar);
    cout << "int max = " << imax << endl;
    cout << "double max = " << dmax << endl;
    return 0;
}

template<typename T>
T max5(T arr[])
{
    T max = 0;
    for(int i = 0; i<N; i++)
        if(arr[i] > max)
            max=arr[i];
    return max;
}