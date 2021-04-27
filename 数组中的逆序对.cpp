#include<iostream>
using namespace std;
//在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组，求出这个数组中的逆序对的总数。
//示例 1:
//
//输入: [7, 5, 6, 4]
//输出 : 5
void pairs(int arr[], int len)
{
	int k = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (arr[i] > arr[j])
				k++;
		}
	}
	cout << k << endl;
}
int main()
{
	int len = 0;
	int n = 1000;
	int* arr = new int[n];
	cout << "请输入数组(以回车键结束)：";
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	pairs(arr, len);
	system("pause");
	return 0;
}