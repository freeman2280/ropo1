#include<iostream>
#include<string>
using namespace std;
int maxStr(int arr[])//找到该数组中出现次数对多的字符
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
		//cout << i + 'A';//不能这样写
		char c = i + 'A';
		cout << c<<" ";
	}
}
int main()
{
	cout << "请输入四行大写字符：" << endl;
	int arr[26] = { 0 };
	string str;
	for (int i = 0; i < 4; i++)//读取四行大写字符并读取每个字符出线的次数
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