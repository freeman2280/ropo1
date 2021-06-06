#include <iostream>
#include "Point.h"
#include "Circle.h"

using namespace std;

int main()
{
    Point p(100, 200);
    p.printPoint();

    Circle c(20, 30, 100);
    c.printCircle();

    return 0;
}
