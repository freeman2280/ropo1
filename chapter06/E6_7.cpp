/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_7.cpp
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
void reverse(int arr[], int len)
{
	int i = 0;
	int j = len - 1;
	while (i != j&&i<j)
	{
		swap(arr[i], arr[j]);
		i++;
		j--;
	}
	for (int i = 0; i < len; i++)
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
	reverse(arr, len);
	system("pause");
	return 0;
}