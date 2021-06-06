#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Point.h"

class Circle : public Point
{
public:
    Circle();
    Circle(int x, int y, int r);
    ~Circle();

    void setRadius(int r);

    int getRadius();

    void printCircle();

private:
    int radius;
};


#endif // CIRCLE_H_INCLUDED
