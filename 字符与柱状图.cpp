#include<iostream>
#include<string>
using namespace std;
int maxStr(int arr[])//�ҵ��������г��ִ����Զ���ַ�
{
	int max = arr[0];
	for (int i = 0; i < 26; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}
void display(int arr[])
{
	int max = maxStr(arr);
	for (int i=max;i>0;i--)
	{
		for (int j = 0; j < 26; j++)
		{
			if (arr[j] >= i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	for (int i = 0; i < 26; i++)
	{
		//cout << i + 'A';//��������д
		char c = i + 'A';
		cout << c<<" ";
	}
}
int main()
{
	cout << "���������д�д�ַ���" << endl;
	int arr[26] = { 0 };
	string str;
	for (int i = 0; i < 4; i++)//��ȡ���д�д�ַ�����ȡÿ���ַ����ߵĴ���
	{
		getline(cin, str);
		for (int j = 0; j < str.length(); j++)
		{
			arr[str[j] - 'A']++;
		}
	}
	display(arr);
	system("pause");
	return 0;
}