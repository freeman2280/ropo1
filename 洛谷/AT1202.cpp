//#include<iostream>
//using namespace std;
//int main()
//{
//	string str;
//	int len = 1;//用于记录连续字符出现的次数
//	cin >> str;
//	for (int i = 0; i < str.length()	; i++)
//	{
//		if (str[i] == str[i + 1])//这个位置越界溢出，但字符串溢出一个输出的是空格，且不报戳. 
//			len++;
//		else
//		{
//			cout << str[i] << len;
//			len = 1;
//		}
//	}
//	cout<< endl;
//	system("pause");
//	return 0;
//}