#include<iostream>
#include<iomanip>
using namespace std;
int arr[105][105];
//思路: 依次填数 1 -> 2 -> 3 然后向下拐弯……形成回字型
//主要有两类判断，一类是对边界的判断，另一类是对该位置是否被占用的判断(拐弯造成的)，对边界的判断需要有4个if判断，对应上、下、左、右4条界，对占用位置的判断也是如此，因为判断了某位置是否被占用，也可能出现4种情况，对应的是向左、上、右、下拐弯
void RecurrentMatrix(int m,int n)//打印回型方阵
{
	int k = 1;
	int left = 0, right = n - 1, top = 0, bottom = m - 1;
	while (left <= right && top <= bottom)
	{
		for (int i = left; i <= right; i++)
			arr[top][i] = k++;
		for (int i = top + 1; i <= bottom; i++)
			arr[i][right] = k++;
		for (int i = right - 1; i >= left; i--)
			arr[bottom][i] = k++;
		for (int i = bottom - 1; i > top; i--)
			arr[i][left] = k++;
		left++; right--; bottom--; top++;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout <<setw(3)<< arr[i][j] << " ";
		cout << endl;
	}
}
int main()
{
	int m, n;
	cout << "请输入行和列：";
	cin >> m >> n;
		RecurrentMatrix(m,n);
	system("pause");
	return 0;
}