/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E7_8.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��5��7��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
/*#include<iostream>
using namespace std;
char* find(char s[], char t[])
{
	int mark;
	int i;
	for (i = 0; i < sizeof(s); i++)
	{
		 mark = 0;
		if (s[i] == t[0])
		{
			int k = i;
			/*for (int j = 0; j < sizeof(t); j++)
			{
				if (s[k] == t[j])
				{
					k++;
					mark++;
				}
				else
					break;
			}*/
			/*while (s[k++] == t[mark++])
			{
				if (mark == sizeof(t))
					break;
			}
		}
		if (mark == sizeof(t))
			break;
	}
	if (mark == 0) return NULL;
	else return &s[i];

}
int main()
{
	int n = 1000;
	char* s = new char[n];
	char* t = new char[n];
	int len1 = 0;
	int len2 = 0;
	cout << "������һ���ַ�����";
	while (cin >> s[len1] && cin.get() != '\n') len1++;
	cout << "��������Ҫƥ����ַ�����";
	while (cin >> t[len2] && cin.get() != '\n') len2++;
	char*v=find(s, t);
	if (v == NULL)
		cout << "null" << endl;
	else
		cout << *v << endl;
	system("pause");
	return 0;
}*/