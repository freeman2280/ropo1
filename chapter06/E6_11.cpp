/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_11.cpp
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
using namespace std;
int* remove_same(int arr[], int& len)//去重并得到去重后的数组长度，用的引用传递
{
	int n = 10000;
	int copy_len = 0;
	int* copy_arr = new int[n];
	copy_arr[0] = arr[0];
	copy_len++;
	for (int i = 1; i < len; i++)
	{
		int mark = 0;
		for (int j = 0; j < copy_len; j++)
		{
			if (arr[i] == copy_arr[j])
				mark = 1;
		}
		if (mark == 0)
		{
			copy_arr[copy_len] = arr[i];
			copy_len++;
		}
	}
	len = copy_len;
	return copy_arr;//返回数组

}
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];//定义数组
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	int* arr1 = remove_same(arr, len);
	print(arr1, len);
	system("pause");
	return 0;
}