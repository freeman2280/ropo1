/*#include<iostream>
using namespace std;
int main()
{
	int n, r;
	while (cin >> n >> r && n != EOF)
	{
		int i = 0;
		int b = abs(n);//全部考虑正数
		int arr[20] = {0};
		while (b != 0)
		{
			if (b % r == 0)//考虑8%2，16%16这种特殊情况
			{
				i = b / r;
				arr[i - 1] = 1;
				break;
			}
			arr[i] = b % r;
			b = b / r;
			i++;
		}
		if (n < 0) cout << "-";//考虑负数时
		for (int j = i-1; j >= 0; j--)//逆序输出
		{
			if (arr[j] >= 10)
			{
				char c = 'A' + arr[j] - 10;
				cout << c;
			}
			else cout << arr[j];
		}
	}
	
		system("pause");
	return 0;
}*/