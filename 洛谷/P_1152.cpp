//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int arr[1024];
//	int i = 0;
//	while (cin >> arr[i] && cin.get() != '\n') i++; i++;
//	int len = i - 1;
//	int* a = new int[len];
//	for (int i = 0; i < len; i++)
//		a[i] = 0;
//	int flag = 0;
//	int mark = 0;
//	for (int j = 1; j < i; j++)
//	{
//		if (1<=abs(arr[j] - arr[j - 1])&& abs(arr[j] - arr[j - 1] )<= len)
//		{
//			a[abs(arr[j] - arr[j - 1])]++;
//		}
//		else
//		{
//			flag = 1;
//			break;
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] == 0)
//		{
//			mark == 1;
//			break;
//		}
//	}
//	if (flag == 0 && mark == 0)
//		cout << "Jolly" << endl;
//	else
//		cout << "Not jolly" << endl;
//	system("pause");
//	return 0;
//}