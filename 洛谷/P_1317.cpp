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
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])//找出波峰即可
			num++;
	}
	if (num == 0)
		cout << 0 << endl;
	else
		cout << --num << endl;
	system("pause");
	return 0;
//}*/
//许多人一看到这一题就不约而同的想到要开数组
//
//但其实这题根本不用开数字
//
//每输进一个数就判断一次
//
//所以我们需要a，b两个参数
//
//一个用于存前面的参数
//
//另一个用于存现在输入的参数
//
//再用一个l用于表示左坡是否形成
//
//当右坡形成且左坡存在的情况下
//
//ans++ 最后输出ans便可以了
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
//	int a=0, b=0;//a表示当前输入，b表示上次输入
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