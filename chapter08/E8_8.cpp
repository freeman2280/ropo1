/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_8.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��6��1��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void readFile()
{
	cout << "�������ļ�����" << endl;
	string name;
	cin >> name;
	while (1)
	{   
		ifstream ifs;
		int numChar = 0, numWord = 0, numRow = 0;
		int p0 = 0;
		ifs.open(name);
		if (ifs.fail())
		{
			cout << "�������󣡳���ֹͣ��" << endl;
			return;
		}
		string str;
		while (getline(ifs, str))
		{
			for (int i = 0; i < str.length(); i++)//�ж��ַ�����
			{
				if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
					numChar++;
			}
			numRow++;//����
			for (int i = 0; i < str.length(); i++)//ͳ�Ƶ��ʸ���
			{
				if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
				{
					p0 = i + 1;
					while (str[p0] != ' ' && p0 < str.length())
						p0++;
				}
				i = p0;
				numWord++;
			}
		}
		cout << "�ַ���" << numChar << "��" << endl;
		cout << "���ʣ�" << numWord << "��" << endl;
		cout << "�У�" << numRow << "��" << endl;
		cout << "�������ļ�����" << endl;
		string name;
		cin >> name;
	}
}
int main()
{
	readFile();
	return 0;
}