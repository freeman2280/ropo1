//#include<iostream>
//using namespace std;
//bool judge(int i,int l)
//{
//	int arr[5] = { 0 };//�ֱ��i�ֽ�ɵ�5����
//	int sub[3] = { 0 };//����������
//	int k = 0;
//	int j = 0;
//	while (i > 0)//�����ÿ����
//	{
//		arr[k++] = i % 10;
//		i /= 10;
//	}
//	for (j = 0; j< 3; j++)//�γ��������������ѭ����ʾ�������ڲ�ѭ����ʾ����һ������
//	{
//		int sum = 0;
//		int p = k - 1 - j;//p�����ұ߽磬q������߽�
//		int q = p-2;
//		for(;p>=q;p--)
//			sum = sum * 10 + arr[p];
//		sub[j] = sum;
//	}
//	if (sub[0]%l == 0 && sub[1]%l == 0 && sub[2]%l == 0)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int k;
//	cin >> k;
//	int flag = 0;//0��ʾ����������������1��֮
//	for (int i = 10000; i <= 30000; i++)
//	{
//		if (judge(i,k)==true)
//		{
//			flag = 1;
//			cout << i << endl;
//		}
//	}
//	if (flag == 0)
//		cout << "No" << endl;
//	system("pause");
//	return 0;
//}