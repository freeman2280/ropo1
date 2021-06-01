/*#include<iostream>
#include<string>
using namespace  std;
int main()
{
	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		bool shuzi = false, xiaoxie = false, daxie = false, teshu = false;//ÉèÖÃ×´Ì¬
		string str;
		cin >> str;
		if (str.length() < 8 || str.length() > 16) cout << "NO" << endl;
		else
		{
			for (int j = 0; j < str.length(); j++)
			{
				if ((str[j] >= 'a' && str[j] <= 'z'))
					xiaoxie = true;
				if ((str[j] >= 'A' && str[j] <= 'Z'))
					daxie = true;
				if ((str[j] >= '0' && str[j] <= '9'))
					shuzi = true;
				if (str[j]=='~'|| str[j] == '!'|| str[j] == '@'|| str[j] == '#'|| str[j] == '$'|| str[j] == '%'|| str[j] == '^')
					teshu = true;
			}
			if ((xiaoxie == false && daxie == false) || (xiaoxie == false && shuzi == false) || (xiaoxie == false && teshu == false) || (daxie == false && shuzi == false) || (daxie == false && teshu == false) || (teshu == false && shuzi == false))
			{
				cout << "NO" << endl;
			}
			else
				cout << "YES" << endl;
		}
	}
	system("pause");
	return 0;
}*/