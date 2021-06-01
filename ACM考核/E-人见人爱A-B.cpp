/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int n, m,mark,control;
	while (cin >> n >> m&&n!=EOF)
	{
		if (n == 0 && m == 0)
		{
			continue;
		}
		for (int i = 0; i < n; i++)//读入第一个集合
			cin >> arr1[i];
		for (int i = 0; i < m; i++)//读入第二个集合
			cin >> arr2[i];
		control = 0;
		sort(arr1, arr1 + n);
		for (int i = 0; i < n; i++)//集合之间求差
		{
			 mark = 0;
			for (int j = 0; j < m; j++)
			{
				if (arr1[i] == arr2[j])
				{
					mark = 1;
					control++;
					break;
				}
			}
			if (mark == 0)
				cout << arr1[i] << " ";
		}
		if (control==n)
			cout << "NULL" << endl;
		else
			cout << endl;
	}
	system("pause");
	return 0;
}*/