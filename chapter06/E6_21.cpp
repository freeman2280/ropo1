/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� P6_16.cpp
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
using namespace std;
void before(vector<string>str)
{
	int k = 0;
	for (int i=0;i<str.size();i++)
	{
		if (str[i].substr(0, 1) >= "A" && str[i].substr(0, 1) <= "Z")
		{
			str.insert(str.begin() + 1, str[i]);
			k++;
		}
	}
}
void show(vector<string>str)
{
	for (string v : str)
	{
		cout << v << " ";
	}
	cout << endl;
}
int main()
{
	vector<string> str;
	string str1;
	cout << "����һЩ�ַ�������ctrl+z��������";
	while (cin >> str1)
		str.push_back(str1);
	before(str);
	cout << "�����";
	show(str);
	system("pause");
	return 0;
}