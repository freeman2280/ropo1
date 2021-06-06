#include "Circle.h"
#include<iostream>
#include"Point.h"
using namespace std;
Circle::Circle():Point()
{
	setR(0);
};
Circle::Circle(int x,int y,int r):Point(x,y)
{
	this->r = r;
};
Circle::~Circle()
{
};
void Circle::setR(int r)
{
	this->r = r;
};
int Circle::getR()
{
	return r;
};
double Circle::getS()
{
	return 3.1415926 * r * r;
}
double Circle::getL()
{
	return 3.1415926 * r * 2;
}
void Circle::CirclePrint()
{
	cout << "Circle:" << "(" << getX() << "," << getY() << ")" << " " <<"R:"<<"  "<< getR() <<"  " <<"S:"<<getS()<< endl;
}


