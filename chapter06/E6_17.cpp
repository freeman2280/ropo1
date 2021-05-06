/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_17.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年4月24日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<iomanip>
using namespace std;
void bar_chart(double values[], int size,string str[])
{
	int max = values[0];
	string star = "";
	for (int i = 0; i < size; i++)
	{
		if (max < values[i])
			max = values[i];
	}
	for (int i = 0; i < size; i++)
	{
		star = "";
		for (int j = 0; j < values[i] * (40 / max); j++)
		{
			star += "*";
		}
		cout <<setw(10)<<str[i]<<" "<<star << endl;
	}
}
int main()
{
	cout << "请输入5个数：";
	const int len = 5;
	double arr[len] = {};
	int i = 0;
	while (cin >> arr[i] && cin.get() != '\n') i++;
	string str[len] = { "Egypt","France","Japan","Uruguay","Switerland" };
	bar_chart(arr, len,str);
	system("pause");
	return 0;
}