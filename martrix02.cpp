
/*����������
1
2
3
4
5
0
���������
1

1 2
2 1

1 2 3
2 1 2
3 2 1

1 2 3 4
2 1 2 3
3 2 1 2
4 3 2 1

1 2 3 4 5
2 1 2 3 4
3 2 1 2 3
4 3 2 1 2
5 4 3 2 1*/
/*
˼·����ϸ�۲죬f [i] [j] = ?
��Ȼ�������£�
i==j f[i][j]=1;
i!=j f[i][j]=abs(i-j)+1;
*/
/*#include<iostream>
#include<cmath>
using namespace std;
void martrix02(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == j)
				cout << 1 << " ";
			else
				cout << abs(i - j) + 1 << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int n = 0;
	cout << "����������(��Ctrl+Z����)��";
	while (cin >> n)
		martrix02(n);
	system("pause");
	return 0;
}*/