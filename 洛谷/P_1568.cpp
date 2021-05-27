//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n;
//	int num = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int len1 = 0;
//	int len2 = 0;
//	cin >> m >> n;
//	int v, t;
//	int* arr1 = new int[1000000];
//	int* arr2 = new int[1000000];
//	for (int i = 0; i < 1000000; i++)
//	{
//		arr1[i] = 0;
//		arr2[i] = 0;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> v >> t;
//		for (int j = 1; j <= t; j++)
//		{
//			sum1 += v * 1;
//			arr1[len1++] = sum1;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v >> t;
//		for (int j = 1; j <= t; j++)
//		{
//			sum2 += v * 1;
//			arr2[len2++] = sum2;
//		}
//	}
//	int flag = 0;//1表示SH在前。0反之
//	if (arr1[0] > arr2[0]) flag = 1;
//	else flag = 0;
//	for (int i = 0; i < min(len1, len2); i++)
//	{
//		if (arr1[i] > arr2[i] && flag == 0)
//		{
//			num++;
//			flag = 1;
//		}
//		if (arr1[i] < arr2[i] && flag == 1)
//		{
//			num++;
//			flag = 0;
//		}
//	}
//	cout << num << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int SH[10000001]; //SH每一秒的速度
//int KC[10000001]; //KC每一秒的速度
//int n, m, SHcnt, KCcnt; //SHcnt是SH的速度更新到了第几秒，KCcnt同理
//int SSH, SKC, ans; //SSH表示SH的路程，SKC同理
//int flag; //1表示SH领先，0表示KC领先
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int aa, bb;
//		cin >> aa >> bb;
//		for (int j = 1; j <= bb; j++)
//			SH[++SHcnt] = aa;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int aa, bb;
//		cin >> aa >> bb;
//		for (int j = 1; j <= bb; j++)
//			KC[++KCcnt] = aa;
//	}  //读入不解释啦
//	if (SH[1] > KC[1]) flag = 1; else flag = 0; //预先做出flag，因为第一秒超过不算变化
//	for (int i = 1; i <= SHcnt; i++)
//	{
//		SSH += SH[i];
//		SKC += KC[i]; //算路程
//		if (SSH > SKC && flag == 0) ans++, flag = 1; //若此刻SH领先，且之前KC领先，发生变化
//		if (SSH < SKC && flag == 1) ans++, flag = 0; //同上
//	}
//	cout << ans; //愉快地输出！
//}