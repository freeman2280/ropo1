#include "Cylinder.h"
#include"Circle.h"
#include<iostream>
using namespace std;
Cylinder::Cylinder() :Circle()
{
	setH(0);
};
Cylinder::Cylinder(int x, int y, int r, int h) :Circle(x, y, r)
{
	setX(x);
	setY(y);
	setR(r);
	setH(h);
};
Cylinder::~Cylinder()
{

};
void Cylinder::setH(int h)
{
	this->h=h;
}
int Cylinder::getH()
{
	return h;
}
double Cylinder::getV()
{
	return getS() * getH();
};
double Cylinder::getSurferArea()
{
	return getS() * 2 + getL() * getH();
};
void Cylinder::CylinderPrint()
{
	cout << "Cylinder:" << "(" << getX() << "," << getY() << ")" << " " << "R:" << "  " << getR() << "  " <<"H:  "<<getH()<< endl;
}