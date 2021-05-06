/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_13.cpp
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
#include<vector>
#include<algorithm>
using namespace std;
void name_of_best_customer(vector<double> sales, vector<string> names,int top_n)
{
	vector<double>copy_sales(sales);
	sort(sales.rbegin(), sales.rend());
	for (int i = 0; i < top_n; i++)
	{
		if (sales.size() < i+1)
			break;
		for (int j = 0; j < copy_sales.size(); j++)
		{
			if (sales[i] == copy_sales[j])
				cout << names[j]<<endl;
		}
	}
}
int main()
{
	vector<double> sales;
	vector<string> names;
	double money;
	string name;
	int top_n;
	while (1)
	{
		cout << "请输入价钱：";
		cin >> money;
		if (money == 0)
			break;
		sales.push_back(money);
		cout << "请输入顾客姓名：";
		cin >> name;
		names.push_back(name);
	}
	cout << "请输入前多少位：";
	cin >> top_n;
	 name_of_best_customer(sales, names,top_n);
	system("pause");
	return 0;
}
