/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_16.cpp
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
using namespace std;
void before(vector<string>str)
{
	int k = 0;
	for (int i=0;i<str.size();i++)
	{
		if (str[i].substr(0, 1) >= "A" && str[i].substr(0, 1) <= "Z")
		{
			str.insert(str.begin() + 1, str[i]);
			k++;
		}
	}
}
void show(vector<string>str)
{
	for (string v : str)
	{
		cout << v << " ";
	}
	cout << endl;
}
int main()
{
	vector<string> str;
	string str1;
	cout << "输入一些字符串（以ctrl+z结束）：";
	while (cin >> str1)
		str.push_back(str1);
	before(str);
	cout << "排序后：";
	show(str);
	system("pause");
	return 0;
}