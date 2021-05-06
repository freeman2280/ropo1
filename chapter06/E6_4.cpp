/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_4.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年4月23日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
using namespace std;
void remove_min(int arr[], int len)
{
	int min = arr[0];
	int h = 0;
	for (int i = 0; i < len; i++)//找到最小值
	{
		if (min > arr[i])
			min = arr[i];
	}
	for (int i = 0; i < len; i++)//找到最小值下标
	{
		if (min == arr[i])
			h = i;
	}
	for (int i = h; i < len-1; i++)//移除最小值
	{
		arr[i] = arr[i + 1];
	}
	len--;
	for (int i = 0; i < len; i++)//打印输出
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	remove_min(arr, len);
	system("pause");
	return 0;
}