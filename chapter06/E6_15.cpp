/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_15.cpp
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
void bar_chart(double values[], int size)
{
	int max = values[0];
	string star = "";
	for (int i = 0; i < size; i++)
	{
		if (max < values[i])
			max = values[i];
	}
	for (int i = 20; i>=0; i--)
	{
		for (int j = 0; j < size; j++)
		{
			if ((values[j] * 20) / max >= i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n = 10000;
	int len = 0;
	double* arr = new double[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	bar_chart(arr, len);
	system("pause");
	return 0;
}