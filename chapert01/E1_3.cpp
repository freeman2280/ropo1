/*
 Function:	the first program using C++
 File:		E1_3.cpp
 Author:	Rui Chen
 Date:		March 6th, 2021
 Version:	1.0
 */
#include<iostream>
using namespace std;
int main()
{
	int mul = 1;
	for (int i = 1; i <= 10; i++)
	{
		mul *= i;
	}
	cout << "1*2*...*10=" << mul << endl;
	system("pause");
	return 0;
}