/*#include<iostream>
using namespace  std;
//也是用的递推，但比F中又有不同
int main()
{
	long long arr[100] = { 0 };
	long long  n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[a] = 0;
		arr[a + 1] = 1;
		arr[a + 2] = 2;
		for (int j = a + 3; j <= b; j++)
		{
			arr[j] = arr[j - 1] + arr[j - 2];
		}
		cout << arr[b] <<  endl;
	}
	system("pause");
	return 0;
}*/