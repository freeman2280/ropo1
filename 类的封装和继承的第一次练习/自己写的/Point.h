#pragma once
class Point
{
public:
	//Ĭ�Ϲ���
	Point();
	//�вι���
	Point(int x, int y);
	//��������
	~Point();
	//�ӿں���
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

