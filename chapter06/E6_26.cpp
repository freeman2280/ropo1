/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_26.cpp
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
using namespace std;
void same(int** arr1, int m1, int n1, int** arr2, int m2, int n2)
{
	bool mark = true;
	if (m1 == m2 && n1 == n2)
	{
		for (int i = 0; i < m1; i++)
		{
			for (int j = 0; j < n1; j++)
			{
				if (arr1[i][j] != arr2[i][j])
				{
					mark = false;
					break;
				}
			}
		}
		if (mark == true) cout << "����������ͬ" << endl;
		else cout << "�������鲻��ͬ" << endl;
	}
	else cout << "�������鲻��ͬ" << endl;
}
int main()
{
	cout << "��ֱ������һ���������У�";
	int m1, n1;
	cin >> m1 >> n1;
	int** arr1 = new int* [m1];
	for (int i = 0; i < m1; i++)
	{
		arr1[i] = new int[n1];
	}
	cout << "���������飺";
	for (int i = 0; i < m1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << "��ֱ�����ڶ����������У�";
	int m2, n2;
	cin >> m2 >> n2;
	int** arr2 = new int* [m2];
	for (int i = 0; i < m2; i++)
	{
		arr2[i] = new int[n2];
	}
	cout << "���������飺";
	for (int i = 0; i < m2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin >> arr2[i][j];
		}
	}
	same(arr1, m1, n1, arr2, m2, n2);
	system("pause");
	return 0;
}