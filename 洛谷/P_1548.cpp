//��ôö���أ���Ȼ���ҿ�����ö�����ϵĵ㣬��ö�����µĵ㣬����һ�����ǲ����������Զ��׼�
//�ų�ȫ��NO.1�׶��Ĵ��룺
//
//#include<bits/stdc++.h>
//using namespace std;
//int m, n, z, c, i, j, k, l;    //z�����������θ�����c���ǳ�����
//int main()
//{
//	cin >> m >> n;           //����
//	for (i = 0; i <= m; i++)    //ö��
//		for (j = 0; j <= n; j++)    //ö��
//			for (k = i + 1; k <= m; k++)  //����ö��
//				for (l = j + 1; l <= n; l++)  //��Ȼ��ö��
//					if (k - i == l - j)z++;     //��������
//					else c++;            //�ǳ�����
//	cout << z << " " << c;     //���
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n; 
//	cin >> m >> n;
//	int c = 0, z = 0;//c�������Σ�z����������
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