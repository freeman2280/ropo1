/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_27.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��4��24��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<iomanip>
using namespace std;
void change_col(int** arr, int m, int n, int c1, int c2)
{
	for (int j = 0; j < m; j++)
	{
		swap(arr[j][c1], arr[j][c2]);
	}
}
void display(int** arr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(2) << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	cout << "��ֱ��������У�";
	int m, n;
	cin >> m >> n;
	int** arr = new int* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}
	cout << "���������飺";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "��������Ҫ�������������У�";
	int c1, c2;
	cin >> c1 >> c2;
	cout << "����ǰ��" << endl;
	display(arr, m, n);
	change_col(arr, m, n, c1 - 1, c2 - 1);
	cout << "������" << endl;
	display(arr, m, n);
	system("pause");
	return 0;
}