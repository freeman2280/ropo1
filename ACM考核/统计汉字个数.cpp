/*#include<iostream>
#include<string>
using namespace std;
int main()
{
        int n;
        cout << "请输入几段文本：";
        cin >> n;
        //string remainder;//读取cin残留的\n符号,或者使用cin.ignore()清空缓冲区
        //getline(cin, remainder);
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
        	int m = 0;
            char str[1024] = {0};
        	cin.getline(str, 1024);
        	for (int j = 0; j < strlen(str); j++)
        	{
        		if (str[j] <0)
        			m++;
        	}
        	cout << m / 2 << endl;
        }
	
	system("pause");
	return 0;
}*/
