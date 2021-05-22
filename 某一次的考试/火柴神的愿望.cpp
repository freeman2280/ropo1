/*#include<iostream>
using namespace std;
//这是一种暴力解法，不知道对空间和时间复杂度能不能过关
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