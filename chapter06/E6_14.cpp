/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_14.cpp
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
#include<string>
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
	for (int i = 0; i < size; i++)
	{
		star = "";
		for (int j = 0; j < values[i]*(40/max); j++)
		{
			star += "*";
		}
		cout << star << endl;
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