/*#include<iostream>
using namespace std;
void qucikSort(int arr[], int low, int high)
{
	if (low > high) return;
	int a = arr[low];
	int i = low;
	int j = high;
	while (i != j)
	{
		while (i<j && arr[j]<=a) j--;
		while (i < j && arr[i] >= a) i++;
		if(i<j) swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[i]);
	qucikSort(arr, low, i - 1);
	qucikSort(arr, i + 1, high);
}
void print(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int len = 0;
	int n = 1000;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	qucikSort(arr, 0, len-1);
	print(arr, len);
	system("pause");
	return 0;
}*/