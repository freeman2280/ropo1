/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_12.cpp
*
* 作者：   Rui Chen
*
* 单位：   河南大学计算机与信息工程学院
*
* E-mail: 2280781256@qq.com
*
* 时间：   2021年4月26日
*
* 版本：   1.0
*
******************************************************************************************
*/
#include<iostream>
#include<vector>
using namespace std;
string name_of_best_customer(vector<double> sales, vector<string> names)
{
	double maxMoney = sales[0];
	int index_maxMoney = 0;
	for (int i = 0; i < sales.size(); i++)
	{
		if (maxMoney < sales[i])
		{
			maxMoney = sales[i];
			index_maxMoney = i;
		}
	}
	return names[index_maxMoney];
}
int main()
{
	vector<double> sales;
	vector<string> names;
	double money;
	string name;
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
	cout << name_of_best_customer(sales, names)<<endl;
	system("pause");
	return 0;
}
