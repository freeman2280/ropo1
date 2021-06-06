#pragma once
class Point
{
public:
	//默认构造
	Point();
	//有参构造
	Point(int x, int y);
	//析构函数
	~Point();
	//接口函数
	void setX(int x);
	void setY(int y);
	void setXY(int x, int y);
	int getX();
	int getY();
	void PointPrint();
private:
	int x;
	int y;
};

