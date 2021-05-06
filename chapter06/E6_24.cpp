/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_24.cpp
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
bool same(int** arr,int m,int n)
{
	int mark = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[0][0] != arr[i][j])
				mark = 1;
		}
	}
	if (mark == 0) return true;
	else return false;
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
	bool s=same(arr,m,n);
	if (s == true) cout << "相同" << endl;
	else cout << "不同" << endl;
	system("pause");
	return 0;
}