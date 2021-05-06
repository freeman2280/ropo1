/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_11.cpp
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
using namespace std;
void discount(double prices[], bool is_pet[], int n_items)
{
	double sum = 0;
	bool pet = false;
	int n = 0;
	for (int i = 0; i <= n_items; i++)
	{
		if (is_pet[i] == false)
		{
			sum += prices[i];
			n++;
		}
		if (is_pet[i] == true)
			pet = true;
	}
	if (pet == true && n >= 5)
		cout << "折扣为：" << sum * 0.2 << endl;
	else
		cout << "无折扣" << endl;
}
int main()
{
	int n = 1000;
	int n_items = 0;
	double* prices = new double[n];
	double price = 0;
	bool* is_pet = new bool[n];
	char input;
	while (1)
	{
		cout << "请依次输入价格(以商品价格-1作为结束标识符):";
		cin >> prices[n_items];
		if (prices[n_items] == prices[n_items - 1] - 1)
			break;
		cout << "该商品是否为宠物？ Y--是   N--否" << endl;
		cin >> input;
		if (input == 'N')
			is_pet[n_items] = false;
		if (input == 'Y')
			is_pet[n_items] = true;
		n_items++;
	}
	discount(prices, is_pet, n_items);
	system("pause");
	return 0;
}
