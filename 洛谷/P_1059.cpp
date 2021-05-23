//2021 5 23 13:40
/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1001] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int arr1[1001];
	arr1[0] = arr[0];
	int len1 = 1;
	int mark;
	for (int i = 1; i < n; i++)
	{
		mark = 0;//每次记得更新标志
		for (int j = 0; j < len1; j++)
		{
			if (arr[i] == arr1[j])
			{
				mark = 1;
				break;
			}
		}
		if (mark == 0)
		{
			arr1[len1++] = arr[i];
		}
	}
	sort(arr1, arr1 + len1);
	cout << len1 << endl;
	for (int i = 0; i < len1; i++)
	{
		cout << arr1[i] << " ";
	}
	system("pause");
	return 0;
}*/