#include<iostream>
#include<iomanip>
using namespace std;
int arr[105][105];
//˼·: �������� 1 -> 2 -> 3 Ȼ�����¹��䡭���γɻ�����
//��Ҫ�������жϣ�һ���ǶԱ߽���жϣ���һ���ǶԸ�λ���Ƿ�ռ�õ��ж�(������ɵ�)���Ա߽���ж���Ҫ��4��if�жϣ���Ӧ�ϡ��¡�����4���磬��ռ��λ�õ��ж�Ҳ����ˣ���Ϊ�ж���ĳλ���Ƿ�ռ�ã�Ҳ���ܳ���4���������Ӧ���������ϡ��ҡ��¹���
void RecurrentMatrix(int m,int n)//��ӡ���ͷ���
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
	cout << "�������к��У�";
	cin >> m >> n;
		RecurrentMatrix(m,n);
	system("pause");
	return 0;
}