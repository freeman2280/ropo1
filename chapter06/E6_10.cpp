/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： E6_10.cpp
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
bool same_element(int a[], int b[], int size)
{
	int mark = 0;
	int index = 0;
	for(int i = 0; i < size;i++)
	{
		if(b[i] == a[0])
		{
			index = i;
			cout << index << endl;
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[index])
			mark = 1;
		else
			index >= size -1 ? index = 0 : index++;
	}
	if (mark == 0) return true;
	else return false;
}
int main()
{
	cout << "请输入两个相同的个数相同的数组：";
	int n = 1000;
	int* a = new int[n];
	int* b = new int[n];
	int len1 = 0;
	int len2 = 0;
	cout << "请输入第一个数组：";
	while (cin >> a[len1] && cin.get() != '\n') len1++;
	len1++;
	cout << "请输入第二个数组：";
	while (cin >> b[len2] && cin.get() != '\n') len2++;
	len2++;
	bool is_same=same_element(a, b, len1);
	if (is_same == true) cout << "相同" << endl;
	else
		cout << "不同" << endl;
	system("pause");
	return 0;
}
