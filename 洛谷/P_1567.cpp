//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int len = -1;
//	int m;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	for (int i = 0; i < n; i++)
//	{
//		m = 1;
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[j-1] < arr[j])
//				m++;
//			else
//				break;
//		}
//		len = m > len ? m : len;
//	}
//	cout << len << endl;
//	system("pause");
//	return 0;
//}