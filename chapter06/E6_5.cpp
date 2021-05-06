/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_5.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��4��23��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
using namespace std;
int alternating_sum(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			sum += arr[i];
		if (i % 2 != 0)
			sum -= arr[i];
	}
	return sum;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	cout << alternating_sum(arr, len) << endl;
	system("pause");
	return 0;
}