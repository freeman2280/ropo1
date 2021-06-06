#include <iostream>
#include "Point.h"

using namespace std;

Point::Point()
{
    setXY(0, 0);
}
Point::Point(int x, int y)
{
    setXY(x, y);
}
Point::~Point()
{

}

void Point::setX(int x)
{
    this->x=x;
}
void Point::setY(int y)
{
    this->y=y;
}
void Point::setXY(int x, int y)
{
    setX(x);
    setY(y);
}
int Point::getX() const
{
    return x;
}
int Point::getY() const
{
    return y;
}
void Point::printPoint()
{
    cout << "Point: (" << getX() << ", " << getY() << ")" << endl;
}
