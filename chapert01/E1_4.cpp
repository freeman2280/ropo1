/*
 Function:	the first program using C++
 File:		E1_4.cpp
 Author:	Rui Chen
 Date:		March 6th, 2021
 Version:	2.0
 */
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	float money = 1000;
	float firstyear_money = money * 1.05;
	float secondyear_money = firstyear_money * 1.05;
	float thirdyear_money = secondyear_money * 1.05;
	cout << "第一年：" << firstyear_money <<"美元" <<endl;
	cout << "第二年：" << secondyear_money << "美元" << endl;
	cout << setprecision(7) << "第三年：" << thirdyear_money << "美元" << endl;
	system("pause");
	return 0;
}