/*#include<iostream>
#include<string>
using namespace std;
int main()
{
        int n;
        cout << "�����뼸���ı���";
        cin >> n;
        //string remainder;//��ȡcin������\n����,����ʹ��cin.ignore()��ջ�����
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
