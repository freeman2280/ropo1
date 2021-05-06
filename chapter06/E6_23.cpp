/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： E6_23.cpp
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
int* findFirst(int**arr, int target,int n,int m)
{
	int arr1[2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (target == arr[i][j])
			{
				arr1[0] = i+1;
				arr1[1] = j+1;
				return arr1;
			}
		}
	}
	return 0;
}
int main()
{
	int n,m ;
	cout<<"请输入二维数组的行列：";
	cin >> n >> m;
	int** arr = new int*[n];
	int len = 0;
	cout << "请输入一个二维数组：" << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	int target;
	cout << "请输入一个需要查找的值：";
	cin >> target;
	int*arr1=findFirst(arr, target, n,m);
	cout << "第" << arr1[0] << "行" << " " << "第" << arr1[1] << "列" << endl;
	system("pause");
	return 0;
}