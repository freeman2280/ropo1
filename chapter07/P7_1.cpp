/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� P7_1.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��5��11��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
/*#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
	srand(time(0));
	const int SIZE = 10;
	int* count[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		count[i] = new int[i + 1];
		for (int j = 0; j <= i; j++)
		{
			count[i][j] = 0;
		}
	}
	const int RUNS = 1000;
	for (int i = 0; i < RUNS; i++)
	{
		count[0][0]++;
		int j = 0;
		for (int i = 1; i < 10; i++)
		{
			int r = rand() % 2;
			if (r == 1)
			{
				j++;
			}
			count[i][j]++;
		}
	}
	int max = count[9][0];
	for (int j = 0; j < 10; j++)
	{
		cout << setw(4) << count[9][j];
		if (max < count[9][j])
			max = count[9][j];
	}
	cout << endl;
		for (int i = 1; i <= max/20; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (count[9][j]/20 >= i)
				{
					cout << setw(4) << "*";
				}
				else
					cout << setw(4) << " ";
			}
			cout << endl;
		}
	system("pause");
	return 0;
}*/