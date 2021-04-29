/*#include<iostream>
using namespace std;
//int binarySearch(int arr[], int low, int high, int target)//递归试
//{
//	if (low > high) return 0;
//	int mid = (low + high) / 2;
//	if (arr[mid] == target) return mid;
//	else if (arr[mid] > target)
//		return binarySearch(arr, low, mid - 1, target);
//	else
//		return binarySearch(arr, mid+1, high, target);
//}
int binarySearch(int arr[], int low, int high, int target)//循环法
{
	if (low > high) return 0;
	int flag = 0;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		//改成这样就是插值查找int mid = low + (high - low) * (target - arr[low]) / (arr[high] - arr[low]);
		if (arr[mid] == target)
		{
			flag = 1;
			return arr[mid];
		}
		if (arr[mid] > target)
			high = mid-1;
		if (arr[mid] < target)
			low = mid+1 ;
	}
	if (flag == 0)
		return -1;//没找到
}
int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
		arr[i] = i +1;
	cout << binarySearch(arr, 0, 9, 10) << endl;;
	system("pause");
	return 0;
}*/