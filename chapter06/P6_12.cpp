/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� P6_12.cpp
*
* ���ߣ�   Rui Chen
*
* ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
*
* E-mail: 2280781256@qq.com
*
* ʱ�䣺   2021��4��26��
*
* �汾��   1.0
*
******************************************************************************************
*/
#include<iostream>
#include<vector>
using namespace std;
string name_of_best_customer(vector<double> sales, vector<string> names)
{
	double maxMoney = sales[0];
	int index_maxMoney = 0;
	for (int i = 0; i < sales.size(); i++)
	{
		if (maxMoney < sales[i])
		{
			maxMoney = sales[i];
			index_maxMoney = i;
		}
	}
	return names[index_maxMoney];
}
int main()
{
	vector<double> sales;
	vector<string> names;
	double money;
	string name;
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
	cout << name_of_best_customer(sales, names)<<endl;
	system("pause");
	return 0;
}
