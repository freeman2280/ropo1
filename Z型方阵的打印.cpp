/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	cin >> m;
	int right = 1, bottom = 1;
	int n = 2;
	int arr[10][10] = {0};
	arr[0][0] = 1;
	while (1)
	{
		//先从右上到左下
		int j=right;
		for (int i = -1; i <= bottom - 1; i++)
		{
			arr[i + 1][j--] = n++;
			if (n == m+1)
				break;
		}
		if (n == m+1)
			break;
		right++;
		bottom++;
		//从左下到右上
		j = bottom;
		for (int i = -1; i <= right - 1; i++)
		{
			arr[j--][i + 1] = n++;
			if (n == m+1)
				break;
		}
		if (n == m+1)
			break;
		right++;
		bottom++;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j])
			{
				cout <<setw(3)<< arr[i][j] << " ";
			}
			else
				cout <<setw(3)<<"";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/