/*#include<iostream>
#include<algorithm>
using namespace std;
struct Program 
{
	int s;
	int e;
};
int cmp(Program& a, Program& b)//自定义结构体排序,按节目时间结束顺序
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
		for (int i = 0; i < n; i++)//输入数据保存
			cin >> p[i].s >> p[i].e;
		sort(p, p + n,cmp);
		//for (int i = 0; i < n; i++)验证是否排序成功
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