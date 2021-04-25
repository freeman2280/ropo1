#include<iostream>
using namespace std;
void print_RegularTriangle(int n)//打印正三角
{
	for (int i = 1; i <= n; i++)
	{
		//打印空格(只需打印左边空格即可)
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		//打印星号
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void print_IntervelTriangle(int n)//打印倒三角
{
	for (int i = n; i >=1; i--)
	{
		//打印空格(只需打印左边空格即可)
		for (int j = 1; j <=n-i; j++)
			cout << " ";
		//打印星号
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void diamond(int n)//打印菱形(正三角+倒三角)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = n-1; i >= 1; i--)
	{
		
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void print_HollowTriangle(int n)//打印空心三角形
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			if (j == 1 || j == 2 * i - 1 || i == n)//跟打印正三角一样，只不过在这里加了一个判断条件，控制了*的输出
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
void print_HollowDiamond(int n)//打印空心菱形
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			if (j == 1 || j == 2 * i - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 *n - 1; j++)
		{
			if (j == 1 || j == 2 *i-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
void print_RightTriangle(int n)//打印直角三角形
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
void print_KeepRightTriangle(int n)//打印靠右直角三角形
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
void print_IntervalKeepRightTriangle(int n)//打印空心直角靠右三角形
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i || i == n)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	cout << "请输入一个整数：";
	int n;
	cin >> n;
	//print_RegularTriangle(n);
	//print_IntervelTriangle(n);
	//diamond(n);
	//print_HollowTriangle(n);
	//print_HollowDiamond(n);
	//print_RightTriangle(n);
	//print_KeepRightTriangle(n);
	//print_IntervalKeepRightTriangle(n);
	system("pause");
	return 0;
}