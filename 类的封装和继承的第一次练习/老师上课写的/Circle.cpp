#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

Circle::Circle():Point()
{
    setRadius(0);
}
Circle::Circle(int x, int y, int r):Point(x, y)
{
    setRadius(r);
}
Circle::~Circle()
{

}

void Circle::setRadius(int r)
{
    radius=r;
}

int Circle::getRadius()
{
    return radius;
}

void Circle::printCircle()
{
    Point::printPoint();
    cout << "Radis: " << getRadius() << endl;
}
