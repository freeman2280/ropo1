/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_14.cpp
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
void sommth(double values[], int size)
{
	double begin = values[1];
	double end = values[size - 2];
	for (int i = 0; i < size - 1; i++)
	{
		int temp = values[i];
		for (int j = i + 1; j < size-1; j++)
		{
			values[j] = (temp + values[j + 1]) / 2;
			break;
		}
	}
	values[0] = begin;
	values[size - 1] = end;
}
void show(double values[], int size)
{
	for (int i = 0; i < size; i++)
		cout << values[i] << " ";
	cout << endl;
}
int main()
{
	int n = 1000;
	int size = 0;
	double* values = new double[n];
	while (cin >> values[size] && cin.get() != '\n') size++;
	size++;
	cout << "平滑前：" << endl;
	show(values, size);
	sommth(values, size);
	cout << "平滑后：" << endl;
	show(values, size);
	system("pause");
	return 0;
}
