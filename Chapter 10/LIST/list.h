#ifndef LIST_H_
#define LIST_H_
typedef int Item;
class List
{
private:
    static const int MAX = 7;
    Item items[MAX];
    int end;
public:
List();
void iffull() const;
void ifclear() const;
void add(const Item & item);
void visit (void (*pf)(Item &));
void show() const;
};
#endif