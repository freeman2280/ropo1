/*#include<iostream>
using namespace std;
int main()
{
	int n, r;
	while (cin >> n >> r && n != EOF)
	{
		int i = 0;
		int b = abs(n);//ȫ����������
		int arr[20] = {0};
		while (b != 0)
		{
			if (b % r == 0)//����8%2��16%16�����������
			{
				i = b / r;
				arr[i - 1] = 1;
				break;
			}
			arr[i] = b % r;
			b = b / r;
			i++;
		}
		if (n < 0) cout << "-";//���Ǹ���ʱ
		for (int j = i-1; j >= 0; j--)//�������
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