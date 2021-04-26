#include<iostream>
using namespace std;
/*输入整数 N，输出一个 N 阶的回字形二维数组。

数组的最外层为 1，次外层为 2，以此类推。

输入格式
输入包含多行，每行包含一个整数 N。

当输入行为 N = 0 时，表示输入结束，且该行无需作任何处理。

输出格式
对于每个输入整数 N，输出一个满足要求的 N 阶二维数组。

每个数组占 N 行，每行包含 N 个用空格隔开的整数。

每个数组输出完毕后，输出一个空行*/
/*曼哈顿距离，在此矩阵中每位填的数为该位置到四条边界的最短距离

即f[i][j] = min(min(i, j), min(n - i, n - j) + 1); i, j从1 开始*/
void matrix1(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int k = min(min(i, j), min(n - i, n - j) + 1);
			cout << k << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	int n = 0;
	cout << "请输入数字(以Ctrl+Z结束)：";
		while (cin >> n)
			matrix1(n);
	system("pause");
	return 0;
}