/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� P6_13.cpp
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
#include<vector>
#include<algorithm>
using namespace std;
void name_of_best_customer(vector<double> sales, vector<string> names,int top_n)
{
	vector<double>copy_sales(sales);
	sort(sales.rbegin(), sales.rend());
	for (int i = 0; i < top_n; i++)
	{
		if (sales.size() < i+1)
			break;
		for (int j = 0; j < copy_sales.size(); j++)
		{
			if (sales[i] == copy_sales[j])
				cout << names[j]<<endl;
		}
	}
}
int main()
{
	vector<double> sales;
	vector<string> names;
	double money;
	string name;
	int top_n;
	while (1)
	{
		cout << "�������Ǯ��";
		cin >> money;
		if (money == 0)
			break;
		sales.push_back(money);
		cout << "������˿�������";
		cin >> name;
		names.push_back(name);
	}
	cout << "������ǰ����λ��";
	cin >> top_n;
	 name_of_best_customer(sales, names,top_n);
	system("pause");
	return 0;
}
