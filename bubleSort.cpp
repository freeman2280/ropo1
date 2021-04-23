/*#include<iostream>
using namespace std;
int main()
{
	int len=0;
	int n=1000;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	for (int i = 0; i <= len - 1; i++)
	{
		int hh = 1;
		for (int j = 0; j <= len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				hh = 0;
				swap(arr[j], arr[j + 1]);
			}
		}
		for (int i = 0; i <= len; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		if (hh == 1)
		{
			break;
		}
	}
	for (int i = 0; i <= len; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}*/