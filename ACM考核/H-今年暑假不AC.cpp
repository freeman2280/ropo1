/*#include<iostream>
#include<algorithm>
using namespace std;
struct Program 
{
	int s;
	int e;
};
int cmp(Program& a, Program& b)//�Զ���ṹ������,����Ŀʱ�����˳��
{
	return a.e < b.e;
}
int main()
{
	Program p[100];
	int n = 0;
	
	while (cin >> n && n != 0)
	{
		int k = 0;
		for (int i = 0; i < n; i++)//�������ݱ���
			cin >> p[i].s >> p[i].e;
		sort(p, p + n,cmp);
		//for (int i = 0; i < n; i++)��֤�Ƿ�����ɹ�
			//cout << i + 1 << ":" << p[i].s << " " << p[i].e<<endl;
		int res = -1;
		for (int i = 0; i < n; i++)
		{
			if (p[i].s >= res)
			{
				k++;
				res = p[i].e;
		    }
		}
		cout << k << endl;
	}
	system("pause");
	return 0;
}*/