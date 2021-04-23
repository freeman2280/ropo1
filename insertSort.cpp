#include<iostream>
using namespace std;
void insertSort(int arr[], int len)
{
	for (int i = 1; i < len; i++)
	{
		int temp = arr[i];
		int j;
		for (j=i-1; j >= 0; j--)
		{
			if (arr[j] > temp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j+1] = temp;
	}
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
	insertSort(arr,len);
	print(arr, len);
	system("pause");
	return 0;
}