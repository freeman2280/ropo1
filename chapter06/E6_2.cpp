/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_1.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��4��6��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
#include<iostream>
#include<algorithm>
using namespace std;
void a(int arr[], int len)//���������еĵ�һ�������һ��Ԫ��
{
	swap(arr[0], arr[len - 1]);
}
void b(int arr[], int len)//������Ԫ�������ƶ�һ�񣬲������һ��Ԫ���Ƶ���һ��
{
	int temp = arr[len - 1];
	for (int i = len - 2; i >= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[0] = temp;
}
void c(int arr[], int len)//��0�滻����ֵΪż����Ԫ��
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] % 2 == 0)
			arr[i] = 0;
	}
}
void d(int arr[], int len)//������Ԫ���нϴ���Ǹ��滻���е�Ԫ�أ���һ�������һ��Ԫ�س���
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
void e(int arr[], int len)//�������ĳ���Ϊ��������������м��Ԫ�أ������Ƴ�����Ԫ��
{
	if (len % 2 != 0)
	{
		int mid = 0 + (len - 0) / 2;//���ֿ��Է�ֹԪ�����
		for (int i =mid; i < len-1; i++)
		{
			arr[i] = arr[i + 1];
		}
		len--;
	}
	if (len % 2 == 0)
	{
		int mid1 = 0 + (len - 0) / 2;//���ֿ��Է�ֹԪ�����
		int mid2 = mid1++;
		for (int i = mid1; i < len - 1; i++)
		{
			arr[i] = arr[i + 2];
		}
		len=len-2;
	}
}
void f(int arr[], int len)//������ֵΪż��������ǰ�棬�����ı��ձ���Ԫ�ش��򲻱�
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
bool g(int arr[], int len)//������������Ԫ�ض���ͬ���򷵻���
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
int h(int arr[], int len)//���������еڶ����Ԫ��
{
	sort(arr, arr + len);
	return arr[len - 2];
}
bool i(int arr[], int len)//��������ǰ���������ģ��򷵻���
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
bool j(int arr[], int len)//�������������ڵ��ظ�ֵ���򷵻���
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
bool k(int arr[], int len)//����������ظ�ֵ���򷵻���
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