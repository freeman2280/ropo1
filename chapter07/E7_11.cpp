/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E7_11.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年5月8日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
/*#include<iostream>
#include<cstring>
using namespace std;
void strnpcy(char str1[], char str2[], int c)
{
	memset(str1, 0, strlen(str1)-1);
	int i = 0;
	int j = 0;
	while (c > 0)
	{
		//str1[i++] = str2[i++];这样就是i=0-2-4
		str1[i++] = str2[j++];
		c--;
	}
	cout <<"str1:"<< str1 << endl;
	cout <<"str2:"<< str2 << endl;
}
int main()
{
	 int n = 10000;
	char* str1 = new char[n];
	char* str2 = new char[n];
	cout << "请分别输入两个字符串：" << endl;
	cin >> str1;
	cin >> str2;
	cout << "请输入一个不超过" << strlen(str1) << "的整数：";
	int c = 0;
	cin >> c;
	cout << str1 << endl;
	cout << str2 << endl;
	strnpcy(str1, str2, c);
	system("pause");
	return 0;
}*/