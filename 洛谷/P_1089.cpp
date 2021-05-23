//2021 5 23 14:06
/*#include<iostream>
using namespace std;
int main()
{
	int const initial_money = 300;
	int rest = 0;
	int save = 0;
	int sum = 0;
	int buget[12] = {0};
	int month = 0;
	int mark = 0;
	for (int i = 0; i < 12; i++)
		cin >> buget[i];
	for (int i = 0; i < 12; i++)
	{
		if ((rest + initial_money - buget[i]) >= 0)
		{
			save = ((rest + initial_money - buget[i]) / 100) * 100;
			sum += save;
			if (save)
				rest= rest + initial_money - buget[i] - save;
			else
				rest = rest + initial_money - buget[i];
			//cout << rest <<"   "<<save<< endl;
		}
		else
		{
			month = i + 1;
			mark = 1;
			break;
		}
	}
	if (mark == 1)
		cout << -month << endl;
	else
		cout << sum * 1.2+rest<<endl;
	system("pause");
	return 0;
}*/
