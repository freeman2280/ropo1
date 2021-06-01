/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int A, B;
	int arr[3] = { 0 };
	while (cin >> A >> B && A != EOF)
	{
		if (A == 0 && B == 0) continue;
		int temp = pow(A, B);
		int temp1 = temp;
		int n = 0;
		while (temp1!=0&&n!=3)
		{
			arr[n] = temp1 % 10;
			temp1 /= 10;
			n++;
		}
		for (int i = n - 1; i >= 0; i--)
		{
			cout << arr[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/
