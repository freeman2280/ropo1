//#include<iostream>
//#include<climits>
//using namespace std;
//int main()
//{
//	int m, n;
//	int min = INT_MAX;
//	int zhi = 0;
//	int arr[3000] = { 0 };
//	cin >> m >> n;
//	for (int i = 0; i < m; i++)
//		cin >> arr[i];
//	for (int i = 0; i < m - n + 1; i++)//m-n-1�߽���������1 2 3 4 5 6 7 8 9��������һ��ֻ��Ҫ��ȥ2������3
//	{
//		zhi = 0;
//		for (int j = i; j < i + n; j++)
//			zhi += arr[j];
//		min = min > zhi ? zhi : min;
//	}
//	cout << min << endl;
//	//system("pause");
//	return 0;
//}