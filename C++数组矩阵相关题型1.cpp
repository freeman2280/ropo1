#include<iostream>
using namespace std;
/*�������� N�����һ�� N �׵Ļ����ζ�ά���顣

����������Ϊ 1�������Ϊ 2���Դ����ơ�

�����ʽ
����������У�ÿ�а���һ������ N��

��������Ϊ N = 0 ʱ����ʾ����������Ҹ����������κδ���

�����ʽ
����ÿ���������� N�����һ������Ҫ��� N �׶�ά���顣

ÿ������ռ N �У�ÿ�а��� N ���ÿո������������

ÿ�����������Ϻ����һ������*/
/*�����پ��룬�ڴ˾�����ÿλ�����Ϊ��λ�õ������߽����̾���

��f[i][j] = min(min(i, j), min(n - i, n - j) + 1); i, j��1 ��ʼ*/
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
	cout << "����������(��Ctrl+Z����)��";
		while (cin >> n)
			matrix1(n);
	system("pause");
	return 0;
}