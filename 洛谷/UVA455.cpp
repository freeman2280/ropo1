//˼·�����ҳ���С�����Ӵ���Ȼ���ж��ܷ��������ѭ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	string T;//����Ѱ�������Ӵ�
//	string str;
//	cin >> str;
//	T = str[0];
//	int len = 1;//�����Ӵܵĳ���
//	int flag = 0;
//	for (int i = 1; i < str.length(); i++)//Ѱ����С�����Ӵ�
//	{
//		flag = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (str[i] == T[j])
//				flag = 1;//falg==1���Ӧ���˳����ѭ��
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
//	for (int i = 0; i < str.length()-len+1; i+=len)//�ж��Ӵ��ܷ��������ѭ��
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