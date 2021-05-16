/*
 Function:	the first program using C++
 File:		E1_2.cpp
 Author:	Rui Chen
 Date:		March 6th, 2021
 Version:	1.0
 */
#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += i;
	}
	cout << "1+2+...+10=" << sum << endl;
	system("pause");
	return 0;
}
