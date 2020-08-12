#include "move.h"
#include <iostream>
Move::Move(double a, double b)
{
    x = a;
    y = b;
}
void Move::showmove()const
{
    std::cout<<"X = " << x << "\nY = " << y << std::endl;
}
Move Move::add(const Move &m) const
{
    Move a;
    a.x = x + m.x;
    a.y = y + m.y;
    return a;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}