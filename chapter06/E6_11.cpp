/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_11.cpp
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
int* remove_same(int arr[], int& len)//ȥ�ز��õ�ȥ�غ�����鳤�ȣ��õ����ô���
{
	int n = 10000;
	int copy_len = 0;
	int* copy_arr = new int[n];
	copy_arr[0] = arr[0];
	copy_len++;
	for (int i = 1; i < len; i++)
	{
		int mark = 0;
		for (int j = 0; j < copy_len; j++)
		{
			if (arr[i] == copy_arr[j])
				mark = 1;
		}
		if (mark == 0)
		{
			copy_arr[copy_len] = arr[i];
			copy_len++;
		}
	}
	len = copy_len;
	return copy_arr;//��������

}
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];//��������
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	int* arr1 = remove_same(arr, len);
	print(arr1, len);
	system("pause");
	return 0;
}