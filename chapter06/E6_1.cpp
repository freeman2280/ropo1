/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_1.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年4月6日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
	int arr[10] = {};
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % (10000);//随机初始化数组0-9999的整数
	}
	//输出位于偶数下标的所有元素
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	//输出所有值为偶数的元素
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i] << " ";
	}
	cout << endl;
	//逆向输出所有元素
	for (int i = 9; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//仅第一个和最后一个元素
	cout << arr[0] << " " << arr[9] << endl;
	system("pause");
	return 0;
}