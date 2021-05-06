/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_26.cpp
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
void same(int** arr1, int m1, int n1, int** arr2, int m2, int n2)
{
	bool mark = true;
	if (m1 == m2 && n1 == n2)
	{
		for (int i = 0; i < m1; i++)
		{
			for (int j = 0; j < n1; j++)
			{
				if (arr1[i][j] != arr2[i][j])
				{
					mark = false;
					break;
				}
			}
		}
		if (mark == true) cout << "两个数组相同" << endl;
		else cout << "两个数组不相同" << endl;
	}
	else cout << "两个数组不相同" << endl;
}
int main()
{
	cout << "请分别输入第一个数组行列：";
	int m1, n1;
	cin >> m1 >> n1;
	int** arr1 = new int* [m1];
	for (int i = 0; i < m1; i++)
	{
		arr1[i] = new int[n1];
	}
	cout << "请输入数组：";
	for (int i = 0; i < m1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << "请分别输入第二个数组行列：";
	int m2, n2;
	cin >> m2 >> n2;
	int** arr2 = new int* [m2];
	for (int i = 0; i < m2; i++)
	{
		arr2[i] = new int[n2];
	}
	cout << "请输入数组：";
	for (int i = 0; i < m2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin >> arr2[i][j];
		}
	}
	same(arr1, m1, n1, arr2, m2, n2);
	system("pause");
	return 0;
}