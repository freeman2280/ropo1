//怎么枚举呢，显然，我可以先枚举左上的点，再枚举右下的点，坐标一减，是不是正方形显而易见
//号称全国NO.1易懂的代码：
//
//#include<bits/stdc++.h>
//using namespace std;
//int m, n, z, c, i, j, k, l;    //z用来记正方形个数，c来记长方形
//int main()
//{
//	cin >> m >> n;           //输入
//	for (i = 0; i <= m; i++)    //枚举
//		for (j = 0; j <= n; j++)    //枚举
//			for (k = i + 1; k <= m; k++)  //还是枚举
//				for (l = j + 1; l <= n; l++)  //仍然是枚举
//					if (k - i == l - j)z++;     //是正方形
//					else c++;            //是长方形
//	cout << z << " " << c;     //输出
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n; 
//	cin >> m >> n;
//	int c = 0, z = 0;//c代表长方形，z代表正方形
//	for (int i = 0; i <= m; i++)
//	{
//		for (int j = 0; j <= n; j++)
//		{
//			for (int q = i + 1; q <= m; q++)
//			{
//				for (int p =j+1; p <= n; p++)
//				{
//					if (q - i == p - j)
//						z++;
//					else
//						c++;
//				}
//			}
//		}
//	}
//	cout << z << " " << c << endl;
//	system("pause");
//	return 0;
//}