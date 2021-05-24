//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n, d;
//	int num = 0;
//	cin >> n >> d;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);//排序过后节约时间复杂度
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (abs(arr[j] - arr[i]) <= d)
//				num++;
//			else
//				break;//这个break结合上面的sort
//		}
//	}
//	cout << num << endl;
//	system("pause");
//	return 0;
//}
