/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_27.cpp
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
void change_col(int** arr, int m, int n, int c1, int c2)
{
	for (int j = 0; j < m; j++)
	{
		swap(arr[j][c1], arr[j][c2]);
	}
}
void display(int** arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(2) << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	cout << "请分别输入行列：";
	int m, n;
	cin >> m >> n;
	int** arr = new int* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	cout << "请输入数组：";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "请输入需要交换的其中两列：";
	int c1, c2;
	cin >> c1 >> c2;
	cout << "交换前：" << endl;
	display(arr, m, n);
	change_col(arr, m, n, c1 - 1, c2 - 1);
	cout << "交换后：" << endl;
	display(arr, m, n);
	system("pause");
	return 0;
}