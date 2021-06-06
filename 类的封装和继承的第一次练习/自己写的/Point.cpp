#include "Point.h"
#include<iostream>
using namespace std;
Point::Point()
{
	x = 0;
	y = 0;
};
Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
};
Point::~Point()
{

};
void Point:: setX(int x)
{
	this->x = x;
};
void Point::setY(int y)
{
	this->y = y;
};
void Point::setXY(int x,int y)
{
	this->x = x;
	this->y = y;
};
int Point::getX()
{
	return x;
};
int Point::getY()
{
	return y;
};
void Point::PointPrint()
{
	cout << "Point:" << "(" << getX() << "," << getY() << ")" << endl;
};
