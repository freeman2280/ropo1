//#include<iostream>
//using namespace std;
//int main()
//{
//	int* arr = new int[2000000];
//	//0代表关，1代表开
//	for (int i = 0; i < 2000000; i++)
//		arr[i] = 0;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		double a;
//		int t;
//		cin >> a >> t;
//		for (int j = 1; j <= t; j++)
//		{
//			if (arr[int(a * j)] == 0)
//				arr[int(a * j)] = 1;
//			else
//				arr[int(a * j)] = 0;
//		}
//	}
//	for (int i = 0; i < 2000000; i++)
//	{
//		if (arr[i] == 1)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}