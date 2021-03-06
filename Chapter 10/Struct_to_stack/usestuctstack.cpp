#include <iostream>
#include <cctype>
#include "stuctstack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    Customer po;
    double temp = 0.0;
    cout << "Please enter A to add a purchase order, \n"
        <<"P tp process a PO, or Q to quit.\n";
    while(cin >> ch && toupper(ch) !='Q')
    {
        while(cin.get() != '\n')
            continue;
        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a': cout << "Enter a PO number to add:";
                cin >> po.payment;
                cin.getline(po.fullname, 20);
                if(st.isfull())
                    cout << "Stack already full\n";
                else
                    st.push(po);
                break;
        case 'P':
        case 'p':   if(st.isempty())
                        cout <<"Stack already empty\n";
                    else {
                        st.pop(po);
                        cout << "Po #" << po.fullname << "popped\n";
                        temp +=po.payment;
                        cout << "Total price: "<< temp << endl;                        
                    }
                    break;
        }
        cout    << "Please enter A to add a purchase order, \n"
                << "P to process a PO, or Q to quit\n";
    }
    cout << "Bye!";
    return 0;
}