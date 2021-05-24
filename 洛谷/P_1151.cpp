//#include<iostream>
//using namespace std;
//bool judge(int i,int l)
//{
//	int arr[5] = { 0 };//分别存i分解成的5个数
//	int sub[3] = { 0 };//存三个子数
//	int k = 0;
//	int j = 0;
//	while (i > 0)//分离出每个数
//	{
//		arr[k++] = i % 10;
//		i /= 10;
//	}
//	for (j = 0; j< 3; j++)//形成三个子数，外层循环表示次数，内层循环表示生成一个子数
//	{
//		int sum = 0;
//		int p = k - 1 - j;//p代表右边界，q代表左边界
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
//	int flag = 0;//0表示不存在这样的数，1反之
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