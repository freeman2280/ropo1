/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int AH, AM, AS, BH, BM, BS;
	for (int i = 0; i < n; i++)
	{
		cin >> AH >> AM >> AS >> BH >> BM >> BS;
		int h = AH + BH;
		int m = AM + BM;
		int s = AS + BS;
		if (s > 60)
		{
			m+= s / 60;
			s = s % 60;
			if (m > 60)
			{
				h += m / 60;
				m = m % 60;
			}

		}
		cout << h << " " << m << " " << s<<endl;
	}
	system("pause");
	return 0;
}*/