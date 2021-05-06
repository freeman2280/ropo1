/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_5.cpp
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
int alternating_sum(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			sum += arr[i];
		if (i % 2 != 0)
			sum -= arr[i];
	}
	return sum;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	cout << alternating_sum(arr, len) << endl;
	system("pause");
	return 0;
}