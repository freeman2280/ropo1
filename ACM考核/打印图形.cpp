/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	cin >> m;
	int n;
	cin >> n;
	int left = 0;
	int top = 0;
	int right = 1;
	int bottom = 1;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}
	arr[0][0] = m++;
	while (bottom <= n && right <= n)
	{
		for (int i = top; i <= bottom; i++)
		
			arr[i][right] = m++;
		
		for (int i = right - 1; i >= left; i--)
			arr[bottom][i] = m++;
		right++;
		bottom++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}*/