/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_18.cpp
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
 vector<int> append(vector<int> a, vector<int> b)
{
	 for (int i = 0; i < b.size(); i++)
	 {
		 a.push_back(b[i]);
	 }
	 return a;
}
 void display(vector<int> a)
 {
	 for (int i = 0; i < a.size(); i++)
	 {
		 cout << a[i] << " ";
	 }
	 cout << endl;
 }
int main()
{
	vector<int> a;
	vector<int> b;
	cout << "请输入第一个向量：";
	int input = 0;
	while (cin>>input&& cin.get() != '\n')
	a.push_back(input);
	a.push_back(input);
	cout << "请输入第二个向量：";
	while (cin >> input&&cin.get() != '\n')
	b.push_back(input);
	b.push_back(input);
	a = append(a, b);
	display(a);
	system("pause");
	return 0;
}