/*#include<iostream>
using namespace std;
//����һ�ֱ����ⷨ����֪���Կռ��ʱ�临�Ӷ��ܲ��ܹ���
int main()
{
	int arr[30];
	int n;
	int max = -1;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		int sum = arr[i];
		for (int j = i + 2; j < n; j = j + 2)
		{
			sum += arr[j];
		}
		sum > max ? max = sum : max = max;
	}
	cout << max << endl;
	system("pause");
	return 0;
}*/