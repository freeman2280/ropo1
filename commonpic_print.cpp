#include<iostream>
using namespace std;
void print_RegularTriangle(int n)//��ӡ������
{
	for (int i = 1; i <= n; i++)
	{
		//��ӡ�ո�(ֻ���ӡ��߿ո񼴿�)
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		//��ӡ�Ǻ�
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void print_IntervelTriangle(int n)//��ӡ������
{
	for (int i = n; i >=1; i--)
	{
		//��ӡ�ո�(ֻ���ӡ��߿ո񼴿�)
		for (int j = 1; j <=n-i; j++)
			cout << " ";
		//��ӡ�Ǻ�
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
}
void diamond(int n)//��ӡ����(������+������)
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
void print_HollowTriangle(int n)//��ӡ����������
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			if (j == 1 || j == 2 * i - 1 || i == n)//����ӡ������һ����ֻ�������������һ���ж�������������*�����
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
void print_HollowDiamond(int n)//��ӡ��������
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
void print_RightTriangle(int n)//��ӡֱ��������
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}
void print_KeepRightTriangle(int n)//��ӡ����ֱ��������
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
void print_IntervalKeepRightTriangle(int n)//��ӡ����ֱ�ǿ���������
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
	cout << "������һ��������";
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