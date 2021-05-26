//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int max = -1;
//	int num = 0;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	for (int i = 0; i < n-1; i++)
//	{
//		num = 1;
//		for (int j = i; j < n - 1; j++)
//		{
//			if (arr[j] == arr[j + 1] - 1)
//				num++;
//			else
//				break;
//		}
//		max = max > num ? max : num;
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}