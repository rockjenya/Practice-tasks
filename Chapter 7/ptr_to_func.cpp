#include <iostream>

double add(double a, double b);
double sub(double a, double b);
double mux(double a, double b);
double calculate(double a, double b, double (*pf) (double, double));

int main()
{
    using namespace std;
    while(1)
    {
        char action;
        double a,b, result;
        double (*pf[3]) (double, double) = {add,mux,sub};
        cout << "\t\t-Choose action-\n";
        cout << "1.Add (+)\t\t2.Mux (*)\n3.Sub (-)\t\t4.All (=)\n5.Quit (q)" << endl;
        cin >> action;
        switch (action)
        {
        case '1':
        case '+':
            cout << "Enter two numbres: ";
            cin >> a >> b;
            result = calculate(a,b,add);
            cout << "result: " << result << endl;
            break;
        case '2':
        case '*':
            cout << "Enter two numbres: ";
            cin >> a >> b;
            result = calculate(a,b,mux);
            cout << "result: " << result << endl;
            break;
        case '3':
        case '-':
            cout << "Enter two numbres: ";
            cin >> a >> b;
            result = calculate(a,b,sub);
            cout << "result: " << result << endl;
            break;
        case '4':
        case '=':
            cout << "Enter two numbres: ";
            cin >> a >> b;
            for(int i = 0; i < 3; i++)
            {
                result = calculate(a,b, pf[i]);
                cout << "result: " << result << endl;
            }
            break;
        case '5':
        case 'q':
        case 'Q':
            return 0;
            break;
        }
    }
}

double add(double a, double b)
{
    return a + b;
}

double sub(double a, double b)
{
    return a-b;
}
double mux(double a, double b)
{
    return a * b;
}
double calculate(double a,double b, double(*pf)(double, double))
{
    double result;
    result = pf(a,b);
    return result;
}