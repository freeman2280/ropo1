/*#include<iostream>
using namespace  std;
//Ê¹ÓÃµÝÍÆ
int main()
{
	int N, M;
	int a[41];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		a[1] = 0;
		a[2] = 1;
		a[3] = 2;
		for ( int j = 4; j <= M; j++)
			a[j] = a[j - 1] + a[j - 2];
		cout << a[M] << endl;
	}
	system("pause");
	return 0;
}*/