/*#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
struct P {
	int x;
	int y;
};
bool compare(P& a, P& b)
{
	return a.x < b.x;
}
int main()
{
	int m;
	cin >> m;
	int n;
	cin >> n;
	P* arr = new P[n];
	int sum = m;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		arr[i].x = x;
		arr[i].y = y;
	}
	sort(arr, arr + n, compare);
	
	int q = 0;
	for (int i = 0; i < n; i++)
	{
		if (sum > arr[i].x)
		{
			sum += arr[i].y;
			cout << sum << endl;
		}
		else
			q = 1;
	}
	if (q == 0)
	{
		cout << "YES" << " " << sum << endl;
	}
	if (q == 1)
	{
		cout << "NO" << " " << sum << endl;
	}
	system("pause");
	return 0;
}*/