/*#include<iostream>
using namespace  std;
int main()
{
	int n;
	int A, B;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		cin >> A >> B;
		for (int j = 1; j < A; j++)
		{
			if (A % j == 0)
				sum += j;
		}
		if (sum==B)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	system("pause");
		return 0;
}*/