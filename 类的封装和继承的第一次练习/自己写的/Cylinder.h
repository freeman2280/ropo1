#pragma once
#include"Circle.h"
class Cylinder:public Circle
{
public:
	Cylinder();
	Cylinder(int x,int y,int r,int h);
	~Cylinder();
	void setH(int h);
	int getH();
	double getV();
	double getSurferArea();
	void CylinderPrint();
private:
	int h;
};

