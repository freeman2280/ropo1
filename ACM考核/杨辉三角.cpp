/*#include<iostream>
using namespace std;
int main()
{
	const int len = 50;
	int arr[len][len];
	int temp[100] = { 0 };
	int k = 0;
	while (cin >> temp[k] && cin.get()!='\n') k++;
	k++;
	for (int p = 0; p < k; p++)
	{
		for (int i = 0; i < temp[p]; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				if (j == 0 || j == i)  arr[i][j] = 1;
				else
					if (i > 1)
					{
						arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
					}
			}
		}
		for (int i = 0; i < temp[p]; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
			cout << endl;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/