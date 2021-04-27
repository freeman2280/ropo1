#include<iostream>
using namespace std;
//长度最小的子数组
//给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。
//
//示例：
//
//输入：s = 7, nums = [2, 3, 1, 2, 4, 3]
//输出：2
//解释：子数组 [4, 3] 是该条件下的长度最小的子数组
//方法一暴力解法：遍历每个位置元素之后的数，计算其和，并更新最小长度
int subsequence(int arr[], int len,int s)
{
	if (len == 0) return 0;
	int sublen = INT_MAX;
	for (int i = 0; i < len; i++)
	{
		int sum = 0;
		for (int j = i; j < len; j++)
		{
			sum += arr[j];
			if (sum >= s)
			{
				sublen = min(sublen, j - i + 1);
				break;
			}
		}
	}
	return sublen == INT_MAX ? 0 : sublen;
}
int main()
{
	int len = 0;
	int n = 1000;
	int* arr = new int[n];
	cout << "请输入数组(以回车键结束)：";
	while (cin >> arr[len] && cin.get() != '\n') len++;
	len++;
	cout << "请输入数s：";
	int s;
	cin >> s;
	cout<< subsequence(arr, len, s)<<endl;
	system("pause");
	return 0;
}