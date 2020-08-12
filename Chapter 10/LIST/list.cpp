#include <iostream>
#include "list.h"

using namespace std;

List::List()
{
    end = 0;
}
void List::iffull() const
{
    if(end == MAX)
        cout << "Is full!" << endl;
    else
        cout << "Is not full!" << endl;
}
void List::ifclear() const
{
    if(end == 0)
        cout << "Is clear!" << endl;
    else
        cout << "Is not clear!" << endl;
}
void List::add(const Item & item)
{
    if(end != MAX)
    {
        items[end] = item;
        end++;
    }
    else
        cout << "List is full!" << endl;
}
void List::show()const
{
    for(int i = 0; i < end;i++)
        cout << "List[" << i << "] = " << items[i] << endl;
}
void List::visit(void (*pf)(Item &))
{
    for(int i = 0; i < MAX;i++)
    {
        cout << "List number is #" << i+1 << endl;
        pf(items[i]);
    }
}