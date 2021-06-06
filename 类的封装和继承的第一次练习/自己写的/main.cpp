#include<iostream>
#include"Point.h"
#include"Circle.h"
#include"Cylinder.h"
using namespace std;
int main()
{
	Cylinder C1(1,5,7,10);
	C1.CylinderPrint();
	double s=C1.getSurferArea();
	cout << s << endl;
	return 0;
}