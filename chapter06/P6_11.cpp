/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� P6_11.cpp
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
using namespace std;
void discount(double prices[], bool is_pet[], int n_items)
{
	double sum = 0;
	bool pet = false;
	int n = 0;
	for (int i = 0; i <= n_items; i++)
	{
		if (is_pet[i] == false)
		{
			sum += prices[i];
			n++;
		}
		if (is_pet[i] == true)
			pet = true;
	}
	if (pet == true && n >= 5)
		cout << "�ۿ�Ϊ��" << sum * 0.2 << endl;
	else
		cout << "���ۿ�" << endl;
}
int main()
{
	int n = 1000;
	int n_items = 0;
	double* prices = new double[n];
	double price = 0;
	bool* is_pet = new bool[n];
	char input;
	while (1)
	{
		cout << "����������۸�(����Ʒ�۸�-1��Ϊ������ʶ��):";
		cin >> prices[n_items];
		if (prices[n_items] == prices[n_items - 1] - 1)
			break;
		cout << "����Ʒ�Ƿ�Ϊ��� Y--��   N--��" << endl;
		cin >> input;
		if (input == 'N')
			is_pet[n_items] = false;
		if (input == 'Y')
			is_pet[n_items] = true;
		n_items++;
	}
	discount(prices, is_pet, n_items);
	system("pause");
	return 0;
}
