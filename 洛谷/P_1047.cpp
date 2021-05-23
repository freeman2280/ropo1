//2021 5 23 13:15
/*#include<iostream>
using namespace std;
int main()
{
	int* arr = new int[10001];//超过16000多的空间时最好开辟到堆区
	for (int i = 0; i < 10001; i++)
	{
		arr[i] = 0;
	}
	int l, m, start, end;
	cin >> l >> m;
	int num = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end;
		for (int i = start - 1; i <= end - 1; i++)
		{
			arr[i] = 1;
		}
	}
	for (int i = 0; i < l; i++)
	{
		if (arr[i] == 0)
			num++;
	}
	cout << num << endl;
	system("pause");
	return 0;
}*/