/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_20.cpp
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
#include<algorithm>
using namespace std;
void display(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
vector<int> merge_sorted(vector<int> a, vector<int> b)
{
	vector<int> c;
	for (int i = 0; i < a.size(); i++)
	{
		b.push_back(a[i]);
	}
	sort(b.begin(), b.end());//��������������
	return b;
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
	b = merge_sorted(a, b);
	display(b);
	system("pause");
	return 0;
}