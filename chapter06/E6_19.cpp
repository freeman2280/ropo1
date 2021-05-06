/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_19.cpp
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
#include<vector>
using namespace std;
void display(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
vector<int> merge(vector<int> a, vector<int> b)
{
	vector<int> c;
	if (a.size() <= b.size())
	{
		int i = 0, j = 0;
		while (j<b.size())
		{
			if (i < a.size())
			{
				c.push_back(a[i]);
				i++;
			}
			c.push_back(b[j]);
			j++;
		}
	}
	if (a.size() > b.size())
	{
		int i = 0, j = 0;
		while (i < a.size())
		{
			if (j < b.size())
			{
				c.push_back(b[j]);
				j++;
			}
			c.push_back(a[i]);
			i++;
		}
	}
	return c;
}
int main()
{
	vector<int> a;
	vector<int> b;
	cout << "请输入第一个向量：";
	int input = 0;
	while (cin >> input && cin.get() != '\n')
		a.push_back(input);
	a.push_back(input);
	cout << "请输入第二个向量：";
	while (cin >> input && cin.get() != '\n')
		b.push_back(input);
	b.push_back(input);
	a=merge(a, b);
	display(a);
	system("pause");
	return 0;
}