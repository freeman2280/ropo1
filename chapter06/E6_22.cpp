/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� E6_22.cpp
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
void gesgu(vector<string>str)
{
	int k = 0;
	for (int i = 0; i < str.size()-1; i++)
	{
		for (int j = i + 1; j < str.size(); j++)
		{
			if (str[i] == str[j])
				k++;
		}
	}
	cout << k << endl;
}
int main()
{
	vector<string> str;
	string str1;
	cout << "����һЩ�ַ�������ctrl+z��������";
	while (cin >> str1)
		str.push_back(str1);
	gesgu(str);
	system("pause");
	return 0;
}