/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_6.cpp
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
void change(int arr[], int len)
{
	int mid = len / 2;
	for (int i = 0; i < mid; i++)
		swap(arr[i], arr[i + mid]);
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];
	cout << "������һ����СΪż��������";
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	change(arr, len);
	system("pause");
	return 0;
}