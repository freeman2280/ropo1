/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_18.cpp
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
 vector<int> append(vector<int> a, vector<int> b)
{
	 for (int i = 0; i < b.size(); i++)
	 {
		 a.push_back(b[i]);
	 }
	 return a;
}
 void display(vector<int> a)
 {
	 for (int i = 0; i < a.size(); i++)
	 {
		 cout << a[i] << " ";
	 }
	 cout << endl;
 }
int main()
{
	vector<int> a;
	vector<int> b;
	cout << "�������һ��������";
	int input = 0;
	while (cin>>input&& cin.get() != '\n')
	a.push_back(input);
	a.push_back(input);
	cout << "������ڶ���������";
	while (cin >> input&&cin.get() != '\n')
	b.push_back(input);
	b.push_back(input);
	a = append(a, b);
	display(a);
	system("pause");
	return 0;
}