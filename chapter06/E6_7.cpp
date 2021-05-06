/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_7.cpp
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
void reverse(int arr[], int len)
{
	int i = 0;
	int j = len - 1;
	while (i != j&&i<j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	for (int i = 0; i < len; i++)
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
	reverse(arr, len);
	system("pause");
	return 0;
}