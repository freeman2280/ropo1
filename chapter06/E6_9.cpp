/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E6_9.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年4月23日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<algorithm>
using namespace std;
int* remove_same(int arr[], int &len)//去重并得到去重后的数组长度，用的引用传递
{
	int n = 10000;
	int copy_len = 0;
	int* copy_arr = new int[n];
	copy_arr[0] = arr[0];
	copy_len++;
	for (int i = 1; i < len; i++)
	{
		int mark = 0;
		for (int j = 0; j < copy_len; j++)
		{
			if (arr[i] == copy_arr[j])
				mark = 1;
		}
		if (mark == 0)
		{
			copy_arr[copy_len] = arr[i];
			copy_len++;
		}
	}
	len = copy_len;
	return copy_arr;//返回数组

}

bool same_set(int arr1[], int len1, int arr2[], int len2)
{
	int* copy_arr1 = remove_same(arr1, len1);
	int* copy_arr2 = remove_same(arr2, len2);
	sort(copy_arr1, copy_arr1 + len1);
	sort(copy_arr2, copy_arr2 + len2);
	if (len1 != len2) return false;
	int mark = 0;
	for (int i = 0; i < len1; i++)
	{
		if (copy_arr1[i] != copy_arr2[i])
		{
			mark = 1;
			break;
		}
	}
	if (mark == 0) return true;
	else return false;
}
int main()
{
	int n = 10000;
	int len1 = 0;
	int* arr1 = new int[n];//定义数组一
	while (cin >> arr1[len1] && cin.get() != '\n') len1++;
	len1++;
	int len2 = 0;
	int* arr2 = new int[n];//定义数组二
	while (cin >> arr2[len2] && cin.get() != '\n') len2++;
	len2++;
	bool is_true=same_set(arr1, len1, arr2, len2);//根据bool输出结果
	if (is_true == true) cout << "true" << endl;
	else cout << "false" << endl;
	system("pause");
	return 0;
}