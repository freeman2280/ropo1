/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_15.cpp
*
* 作者：   Rui Chen
*
* 单位：   河南大学计算机与信息工程学院
*
* E-mail: 2280781256@qq.com
*
* 时间：   2021年5月4日
*
* 版本：   1.0
*
******************************************************************************************
*/
#include<iostream>
using namespace std;
void flood_map(double heights[10][10], double water_level)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (heights[i][j] >= water_level)
				cout << "*" ;
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	double heights[10][10] = {0};
	double water_level;
	cout << "请输入街区高度：" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cin >> heights[i][j];
	}
	cout << "请输入水深：";
	cin >> water_level;
	flood_map(heights, water_level);
	system("pause");
	return 0;
}
