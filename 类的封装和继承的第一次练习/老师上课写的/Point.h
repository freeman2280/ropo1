#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
public:
    Point();
    Point(int x, int y);
    ~Point();

    void setX(int x);
    void setY(int y);
    void setXY(int x, int y);

    int getX() const;
    int getY() const;

    void printPoint();

private:
    int x;
    int y;
};


#endif // POINT_H_INCLUDED
