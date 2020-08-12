#ifndef STACK_H_
#define STACK_H_
struct Customer
{
    char fullname[20];
    double payment;
};
typedef Customer Item;


class Stack
{
private:
    enum{MAX=10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};
#endif