/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_19.cpp
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
#include<vector>
using namespace std;
void display(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
vector<int> merge(vector<int> a, vector<int> b)
{
	vector<int> c;
	if (a.size() <= b.size())
	{
		int i = 0, j = 0;
		while (j<b.size())
		{
			if (i < a.size())
			{
				c.push_back(a[i]);
				i++;
			}
			c.push_back(b[j]);
			j++;
		}
	}
	if (a.size() > b.size())
	{
		int i = 0, j = 0;
		while (i < a.size())
		{
			if (j < b.size())
			{
				c.push_back(b[j]);
				j++;
			}
			c.push_back(a[i]);
			i++;
		}
	}
	return c;
}
int main()
{
	vector<int> a;
	vector<int> b;
	cout << "�������һ��������";
	int input = 0;
	while (cin >> input && cin.get() != '\n')
		a.push_back(input);
	a.push_back(input);
	cout << "������ڶ���������";
	while (cin >> input && cin.get() != '\n')
		b.push_back(input);
	b.push_back(input);
	a=merge(a, b);
	display(a);
	system("pause");
	return 0;
}