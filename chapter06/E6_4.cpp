/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_4.cpp
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
void remove_min(int arr[], int len)
{
	int min = arr[0];
	int h = 0;
	for (int i = 0; i < len; i++)//�ҵ���Сֵ
	{
		if (min > arr[i])
			min = arr[i];
	}
	for (int i = 0; i < len; i++)//�ҵ���Сֵ�±�
	{
		if (min == arr[i])
			h = i;
	}
	for (int i = h; i < len-1; i++)//�Ƴ���Сֵ
	{
		arr[i] = arr[i + 1];
	}
	len--;
	for (int i = 0; i < len; i++)//��ӡ���
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	remove_min(arr, len);
	system("pause");
	return 0;
}