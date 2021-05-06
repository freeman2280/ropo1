/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： E6_8.cpp
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
bool equals(int a[], int a_size, int b[], int b_size)
{
	int k = 0;
	for (int i = 0; i < a_size; i++)
	{
		if (a[i] != b[i])
		{
			k = 1;
			break;
		}
	}
}
int main()
{
	int n = 10000;
	int len1 = 0;
	int* arr1 = new int[n];//定义数组一
	while (cin >> arr1[len1] && cin.get() != '\n') len1++;
	len1++;
	int len2 = 0;
	int* arr2 = new int[n];//定义数组二
	while (cin >> arr2[len2] && cin.get() != '\n') len2++;
	len2++;
	bool is_same=equals(arr1, len1, arr2, len2);
	if (is_same == true) cout << "相同" << endl;
	else
		cout << "不同" << endl;
	system("pause");
	return 0;
}
