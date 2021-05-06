/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_1.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年4月6日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<algorithm>
using namespace std;
void a(int arr[], int len)//交换数组中的第一个和最后一个元素
{
	swap(arr[0], arr[len - 1]);
}
void b(int arr[], int len)//将所有元素向右移动一格，并将最后一个元素移到第一个
{
	int temp = arr[len - 1];
	for (int i = len - 2; i >= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = temp;
}
void c(int arr[], int len)//用0替换所有值为偶数的元素
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			arr[i] = 0;
	}
}
void d(int arr[], int len)//用相邻元素中较大的那个替换所有的元素，第一个和最后一个元素除外
{
	if (arr[0] > arr[1])
	{
		for (int i = 1; i < len - 1; i++)
			arr[i] = arr[0];
	}
	if (arr[0] < arr[1])
	{
		for (int i = 1; i < len - 1; i++)
			arr[i] = arr[1];
	}
}
void e(int arr[], int len)//如果数组的长度为奇数，则溢出正中间的元素，否则移除两个元素
{
	if (len % 2 != 0)
	{
		int mid = 0 + (len - 0) / 2;//这种可以防止元素溢出
		for (int i =mid; i < len-1; i++)
		{
			arr[i] = arr[i + 1];
		}
		len--;
	}
	if (len % 2 == 0)
	{
		int mid1 = 0 + (len - 0) / 2;//这种可以防止元素溢出
		int mid2 = mid1++;
		for (int i = mid1; i < len - 1; i++)
		{
			arr[i] = arr[i + 2];
		}
		len=len-2;
	}
}
void f(int arr[], int len)//将所有值为偶数的移至前面，其他的保险保持元素次序不变
{
	int n = 0;
	int* arr1 = new int[len];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[n] = arr[i];
			n++;
		}
	}
	for (int i = n; i < len; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[n] = arr[i];
			n++;
		}
	}
}
bool g(int arr[], int len)//如果数组的所有元素都相同，则返回真
{
	int n = 0;
	for (int i = 1; i < len; i++)
	{
		if (arr[0] != arr[i])
			n = 1;
	}
	if (n == 0)
		return true;
	else
		return false;
}
int h(int arr[], int len)//返回数组中第二大的元素
{
	sort(arr, arr + len);
	return arr[len - 2];
}
bool i(int arr[], int len)//如果数组是按递增排序的，则返回真
{
	int h = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			h = 1;
			break;
		}
	}
	if (h = 0) return true;
	else return false;
}
bool j(int arr[], int len)//如果数组包含相邻的重复值，则返回真
{
	int h = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			h = 1;
			break;
		}
	}
	if (h == 1) return true;
	else return false;
}
bool k(int arr[], int len)//如果数组有重复值，则返回真
{
	int h;
	for (int i = 0; i < len; i++)
	{
		h = 0;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] == arr[j])
				h++;
		}
		if (h != 0) break;
	}
	if (h == 0) return false;
	else return true;
}
int main()
{
	int n = 10000;
	int len = 0;
	int* arr = new int[n];
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	system("pause");
	return 0;
}