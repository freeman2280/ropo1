/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_17.cpp
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
void bar_chart(double values[], int size,string str[])
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
		for (int j = 0; j < values[i] * (40 / max); j++)
		{
			star += "*";
		}
		cout <<setw(10)<<str[i]<<" "<<star << endl;
	}
}
int main()
{
	cout << "������5������";
	const int len = 5;
	double arr[len] = {};
	int i = 0;
	while (cin >> arr[i] && cin.get() != '\n') i++;
	string str[len] = { "Egypt","France","Japan","Uruguay","Switerland" };
	bar_chart(arr, len,str);
	system("pause");
	return 0;
}