/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_12.cpp
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
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<iomanip>
using namespace std;
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout<<setw(2) << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[20] = {};
	int len = 20;
	srand(time(0));
	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 100;
	}
	print(arr, len);
	sort(arr, arr + len);
	print(arr, len);
	system("pause");
	return 0;
}