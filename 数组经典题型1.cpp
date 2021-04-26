#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*找到第二大的数
可以定义两个变量，一个用来表示最大值，初始化可以是arr[0]，一个用来表示第二大值，初始化是最小负整数。
然后遍历整个数组，
（1）如果元素比最大值大，那么把这个元素赋给最大值，把原先最大值付给第二大值
（2）如果元素等于最大值，什么都不做
（3）如果元素小于最大值，再判断是不是大于第二大，如果大于第二大，则把他赋给第二大*/
int findSecondLargestNum(vector<int>arr)
{
	int max = arr[0];
	int second_max = -100000000;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > max)
		{
			second_max = max;
			max = arr[i];
		}
		if (arr[i] < max)
			max = arr[i] > max ? arr[i] : max;
	}
	return second_max;
}
/*求两数之和为20
1、先排序（快速排序）
2、一个前后走，一个向前走。*/
void twoNumberToTarget(vector<int>arr, int start,int end)
{
	int i = start;
	int j = end;
	sort(arr.begin(), arr.end());
	int flag = 0;
	while (i < j)//这里不能写（i！=j）
	{
		if (arr[i] + arr[j] > 20)
			j--;
		else if (arr[i] + arr[j] < 20)
			i++;
		else
		{
			flag = 1;
			cout << arr[i]<<"+"<<arr[j] << "=20" << endl;
			i++;
			j--;
		}
	}
	if (flag == 0)
		cout << "没有匹配的数" << endl;
}
/*三、如何把一个数组右移k位
思路：
例如：12345678右移2位结果是78123456
可以看出有两部分是和未移动前是一样的（123456）（78）所以把这两部分单独来看
算法思路：现把两部分单独逆序（65432187），然后总体逆序。（78123456）
左移同样适用
12345678左移3位
两部分单独逆序（32187654）整体逆序（45678123）*/
void moveRight(vector<int>arr, int k)
{
	reverse(arr.begin(), arr.end() - k);
	reverse(arr.end() - k, arr.end());
	reverse(arr.begin(), arr.end());
	for (int a : arr)
		cout << a << " ";
	cout << endl;
}
int main()
{
	vector<int>arr;
	int input = 0;
	cout << "请输入数组（以空格结束）:";
	while (cin >> input&&cin.get()!='\n')
		arr.push_back(input);
		arr.push_back(input);
	//cout<<findSecondLargestNum(arr)<<endl;
	//twoNumberToTarget(arr, 0, arr.size() - 1);
	//int k = 0;
	//cout << "请输入向右移动几位：";
	//cin >> k;
	//moveRight(arr, k);
	system("pause");
	return 0;
}