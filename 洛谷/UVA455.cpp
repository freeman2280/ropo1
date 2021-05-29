//思路：先找出最小周期子串，然后判断能否进行周期循环
//#include<iostream>
//using namespace std;
//int main()
//{
//	string T;//用于寻找周期子串
//	string str;
//	cin >> str;
//	T = str[0];
//	int len = 1;//周期子窜的长度
//	int flag = 0;
//	for (int i = 1; i < str.length(); i++)//寻找最小周期子串
//	{
//		flag = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (str[i] == T[j])
//				flag = 1;//falg==1后就应该退出外层循环
//		}
//		if (flag == 0)
//		{
//			T += str[i];
//			len++;
//		}
//		else
//			break;
//	}
//	int k = 0;
//	for (int i = 0; i < str.length()-len+1; i+=len)//判断子串能否进行周期循环
//	{
//		string sub = str.substr(i, len);
//		if (sub != T)
//			k = 1;
//	}
//	if (k == 0)
//		cout << len << endl;
//	else
//		cout << "no" << endl;
//	system("pause");
//	return 0;
//}