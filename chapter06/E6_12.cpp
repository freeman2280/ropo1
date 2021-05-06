/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_12.cpp
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
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
using namespace std;
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout<<setw(2) << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[20] = {};
	int len = 20;
	srand(time(0));
	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 100;
	}
	print(arr, len);
	sort(arr, arr + len);
	print(arr, len);
	system("pause");
	return 0;
}