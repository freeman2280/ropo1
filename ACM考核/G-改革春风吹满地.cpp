/*#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	double area;
	while (cin >> n && n != 0)
	{
		int x, y;
		cin >> x >> y;
		int x0 = x, y0 = y;
		for (int i = 1; i < n; i++)
		{
			int x1, y1;
			cin >> x1 >> y1;
			sum += x0 * y1 - x1 * y0;
			x0 = x1;
			y0 = y1;
		}
		area = 0.5 * sum;
		cout << fixed << setprecision(1) << area << endl;
	}
	system("pause");
	return 0;
}*/
/*#include<iostream>这样做消耗内存太多了
#include<iomanip>
using namespace std;
struct Point {
	int x;
	int y;
};
int main()
{
	Point arr[200];
	int n;
	int area = 0;
	while (cin >> n && n != EOF)
	{
		if (n == 0) continue;
		for (int i = 0; i < n; i++)//输入坐标
		{
			cin >> arr[i].x >> arr[i].y;
		}
		//求面积
		for (int i = 0; i < n - 1; i++)
		{
			area += (arr[i].x * arr[i + 1].y - arr[i + 1].x * arr[i].y);
		}
		cout << fixed << setprecision(1) << 0.5 * area << endl;
	}
	system("pause");
	return 0;
}*/