#include<iostream>
using namespace std;
//�������е��������֣����ǰ��һ�����ִ��ں�������֣����������������һ������ԡ�����һ�����飬�����������е�����Ե�������
//ʾ�� 1:
//
//����: [7, 5, 6, 4]
//��� : 5
void pairs(int arr[], int len)
{
	int k = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (arr[i] > arr[j])
				k++;
		}
	}
	cout << k << endl;
}
int main()
{
	int len = 0;
	int n = 1000;
	int* arr = new int[n];
	cout << "����������(�Իس�������)��";
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	pairs(arr, len);
	system("pause");
	return 0;
}