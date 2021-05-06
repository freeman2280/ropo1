/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_20.cpp
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
#include<algorithm>
using namespace std;
void display(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
vector<int> merge_sorted(vector<int> a, vector<int> b)
{
	vector<int> c;
	for (int i = 0; i < a.size(); i++)
	{
		b.push_back(a[i]);
	}
	sort(b.begin(), b.end());//向量的正向排序
	return b;
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
	b = merge_sorted(a, b);
	display(b);
	system("pause");
	return 0;
}