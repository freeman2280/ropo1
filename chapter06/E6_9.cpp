/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_9.cpp
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
#include<algorithm>
using namespace std;
int* remove_same(int arr[], int &len)//ȥ�ز��õ�ȥ�غ�����鳤�ȣ��õ����ô���
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

bool same_set(int arr1[], int len1, int arr2[], int len2)
{
	int* copy_arr1 = remove_same(arr1, len1);
	int* copy_arr2 = remove_same(arr2, len2);
	sort(copy_arr1, copy_arr1 + len1);
	sort(copy_arr2, copy_arr2 + len2);
	if (len1 != len2) return false;
	int mark = 0;
	for (int i = 0; i < len1; i++)
	{
		if (copy_arr1[i] != copy_arr2[i])
		{
			mark = 1;
			break;
		}
	}
	if (mark == 0) return true;
	else return false;
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
	bool is_true=same_set(arr1, len1, arr2, len2);//����bool������
	if (is_true == true) cout << "true" << endl;
	else cout << "false" << endl;
	system("pause");
	return 0;
}