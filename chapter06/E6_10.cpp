/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� E6_10.cpp
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
bool same_element(int a[], int b[], int size)
{
	int mark = 0;
	int index = 0;
	for(int i = 0; i < size;i++)
	{
		if(b[i] == a[0])
		{
			index = i;
			cout << index << endl;
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[index])
			mark = 1;
		else
			index >= size -1 ? index = 0 : index++;
	}
	if (mark == 0) return true;
	else return false;
}
int main()
{
	cout << "������������ͬ�ĸ�����ͬ�����飺";
	int n = 1000;
	int* a = new int[n];
	int* b = new int[n];
	int len1 = 0;
	int len2 = 0;
	cout << "�������һ�����飺";
	while (cin >> a[len1] && cin.get() != '\n') len1++;
	len1++;
	cout << "������ڶ������飺";
	while (cin >> b[len2] && cin.get() != '\n') len2++;
	len2++;
	bool is_same=same_element(a, b, len1);
	if (is_same == true) cout << "��ͬ" << endl;
	else
		cout << "��ͬ" << endl;
	system("pause");
	return 0;
}
