/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� E6_8.cpp
*
* ���ߣ�   Rui Chen
*
* ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
*
* E-mail: 2280781256@qq.com
*
* ʱ�䣺   2021��5��4��
*
* �汾��   1.0
*
******************************************************************************************
*/
#include<iostream>
using namespace std;
bool equals(int a[], int a_size, int b[], int b_size)
{
	int k = 0;
	for (int i = 0; i < a_size; i++)
	{
		if (a[i] != b[i])
		{
			k = 1;
			break;
		}
	}
}
int main()
{
	int n = 10000;
	int len1 = 0;
	int* arr1 = new int[n];//��������һ
	while (cin >> arr1[len1] && cin.get() != '\n') len1++;
	len1++;
	int len2 = 0;
	int* arr2 = new int[n];//���������
	while (cin >> arr2[len2] && cin.get() != '\n') len2++;
	len2++;
	bool is_same=equals(arr1, len1, arr2, len2);
	if (is_same == true) cout << "��ͬ" << endl;
	else
		cout << "��ͬ" << endl;
	system("pause");
	return 0;
}
