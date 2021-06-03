/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_8.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年6月1日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void readFile()
{
	cout << "请输入文件名：" << endl;
	string name;
	cin >> name;
	while (1)
	{   
		ifstream ifs;
		int numChar = 0, numWord = 0, numRow = 0;
		int p0 = 0;
		ifs.open(name);
		if (ifs.fail())
		{
			cout << "输入有误！程序停止！" << endl;
			return;
		}
		string str;
		while (getline(ifs, str))
		{
			for (int i = 0; i < str.length(); i++)//判断字符个数
			{
				if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
					numChar++;
			}
			numRow++;//行数
			for (int i = 0; i < str.length(); i++)//统计单词个数
			{
				if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
				{
					p0 = i + 1;
					while (str[p0] != ' ' && p0 < str.length())
						p0++;
				}
				i = p0;
				numWord++;
			}
		}
		cout << "字符：" << numChar << "个" << endl;
		cout << "单词：" << numWord << "个" << endl;
		cout << "行：" << numRow << "个" << endl;
		cout << "请输入文件名：" << endl;
		string name;
		cin >> name;
	}
}
int main()
{
	readFile();
	return 0;
}