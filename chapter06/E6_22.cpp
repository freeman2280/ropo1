/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： E6_22.cpp
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
void gesgu(vector<string>str)
{
	int k = 0;
	for (int i = 0; i < str.size()-1; i++)
	{
		for (int j = i + 1; j < str.size(); j++)
		{
			if (str[i] == str[j])
				k++;
		}
	}
	cout << k << endl;
}
int main()
{
	vector<string> str;
	string str1;
	cout << "输入一些字符串（以ctrl+z结束）：";
	while (cin >> str1)
		str.push_back(str1);
	gesgu(str);
	system("pause");
	return 0;
}