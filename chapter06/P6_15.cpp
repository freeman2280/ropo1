/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� P6_15.cpp
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
void flood_map(double heights[10][10], double water_level)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (heights[i][j] >= water_level)
				cout << "*" ;
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	double heights[10][10] = {0};
	double water_level;
	cout << "����������߶ȣ�" << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			cin >> heights[i][j];
	}
	cout << "������ˮ�";
	cin >> water_level;
	flood_map(heights, water_level);
	system("pause");
	return 0;
}
