#pragma once
#include"Point.h"
class Circle:public Point
{
public:
	Circle();
	Circle(int x,int y,int r);
	~Circle();
	void setR(int r);
	int getR();
	void CirclePrint();
	double getS();
	double getL();
private:
	int r;
};

