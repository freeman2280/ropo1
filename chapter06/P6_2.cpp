/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�ǽ�������ͬ��Ԫ���ã������б��
 *
 * �ļ����� P6_1.cpp
 *
 * ���ߣ�   Chen rui
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail:  1257946523@qq.com
 *
 * ʱ�䣺   2021��5��4��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
#include <iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(0));

    int a[19];
    bool in_run = false;
    int temp = 0;
    int j, k, n;
    for (int i = 0; i < 20; i++)
        a[i] = rand() % 6 + 1;
    for (int i = 0; i < 20; i++)
    {
        if (in_run == false)
        {
            if (a[i] == a[i + 1])
            {
                j = i;
                in_run = true;
            }
        }
        else if (in_run == true)
        {
            if (a[i] != a[i - 1])
            {
                in_run = false;
            }
            if (temp < i - j)
            {
                temp = i - j;
                k = j;
                n = temp;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (i == k)
            cout << "(";
        if (i == k + n)
            cout << ")";
        cout << a[i] << " ";
    }
    return 0;
}

