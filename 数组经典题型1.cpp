#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*�ҵ��ڶ������
���Զ�������������һ��������ʾ���ֵ����ʼ��������arr[0]��һ��������ʾ�ڶ���ֵ����ʼ������С��������
Ȼ������������飬
��1�����Ԫ�ر����ֵ����ô�����Ԫ�ظ������ֵ����ԭ�����ֵ�����ڶ���ֵ
��2�����Ԫ�ص������ֵ��ʲô������
��3�����Ԫ��С�����ֵ�����ж��ǲ��Ǵ��ڵڶ���������ڵڶ�������������ڶ���*/
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
/*������֮��Ϊ20
1�������򣨿�������
2��һ��ǰ���ߣ�һ����ǰ�ߡ�*/
void twoNumberToTarget(vector<int>arr, int start,int end)
{
	int i = start;
	int j = end;
	sort(arr.begin(), arr.end());
	int flag = 0;
	while (i < j)//���ﲻ��д��i��=j��
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
		cout << "û��ƥ�����" << endl;
}
/*������ΰ�һ����������kλ
˼·��
���磺12345678����2λ�����78123456
���Կ������������Ǻ�δ�ƶ�ǰ��һ���ģ�123456����78�����԰��������ֵ�������
�㷨˼·���ְ������ֵ�������65432187����Ȼ���������򡣣�78123456��
����ͬ������
12345678����3λ
�����ֵ�������32187654����������45678123��*/
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
	cout << "���������飨�Կո������:";
	while (cin >> input&&cin.get()!='\n')
		arr.push_back(input);
		arr.push_back(input);
	//cout<<findSecondLargestNum(arr)<<endl;
	//twoNumberToTarget(arr, 0, arr.size() - 1);
	//int k = 0;
	//cout << "�����������ƶ���λ��";
	//cin >> k;
	//moveRight(arr, k);
	system("pause");
	return 0;
}