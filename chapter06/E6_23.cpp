/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� E6_23.cpp
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
int* findFirst(int**arr, int target,int n,int m)
{
	int arr1[2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (target == arr[i][j])
			{
				arr1[0] = i+1;
				arr1[1] = j+1;
				return arr1;
			}
		}
	}
	return 0;
}
int main()
{
	int n,m ;
	cout<<"�������ά��������У�";
	cin >> n >> m;
	int** arr = new int*[n];
	int len = 0;
	cout << "������һ����ά���飺" << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	int target;
	cout << "������һ����Ҫ���ҵ�ֵ��";
	cin >> target;
	int*arr1=findFirst(arr, target, n,m);
	cout << "��" << arr1[0] << "��" << " " << "��" << arr1[1] << "��" << endl;
	system("pause");
	return 0;
}