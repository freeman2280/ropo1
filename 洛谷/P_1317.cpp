/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num = 0;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 1; i < n - 1; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])//�ҳ����弴��
			num++;
	}
	if (num == 0)
		cout << 0 << endl;
	else
		cout << --num << endl;
	system("pause");
	return 0;
//}*/
//�����һ������һ��Ͳ�Լ��ͬ���뵽Ҫ������
//
//����ʵ����������ÿ�����
//
//ÿ���һ�������ж�һ��
//
//����������Ҫa��b��������
//
//һ�����ڴ�ǰ��Ĳ���
//
//��һ�����ڴ���������Ĳ���
//
//����һ��l���ڱ�ʾ�����Ƿ��γ�
//
//�������γ������´��ڵ������
//
//ans++ ������ans�������
//
//
//for (int z = 1; z <= n; z++)
//{
//	cin >> b;
//	if (b < a) { l = 1; }
//	if (b > a && l == 1) { ans++; l = 0; }
//	a = b;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int a=0, b=0;//a��ʾ��ǰ���룬b��ʾ�ϴ�����
//	int l = 0; int ans = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a;
//		if (a < b) l = 1;
//		if (a > b && l == 1) { ans++; l = 0; }
//		b = a;
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}