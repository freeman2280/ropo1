/*#include<iostream>
using namespace std;
int main()
{
	int n;
	long long arr[51] = {0};
	while (cin >> n && n != EOF)
	{
		arr[0] = 0;
		arr[1] = 1;
		arr[2] = 2;
		arr[3] = 3;
		for (int i = 4; i <= n; i++)
			arr[i] = arr[i - 1] + arr[i-2];
		cout << arr[n] << endl;
	}
	system("pasue");
	return 0;
}*/