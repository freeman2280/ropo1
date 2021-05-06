/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是将相邻相同的元素用（）进行标记
 *
 * 文件名： P6_3.cpp
 *
 * 作者：   Chen rui
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail:  1257946523@qq.com
 *
 * 时间：   2021年5月4日
 *
 * 版本：   1.0
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

    int a[20], b[9];
    for (int i = 0; i < 20; i++)
        a[i] = rand() % 10 + 1;
    for (int i = 0; i < 10; i++)
        b[i] = a[10 + i];
    for (int i = 0; i < 10; i++)
    {
        int m = rand() % (10 - i);
        a[9 + i] = b[m];
        while (m < 10)
        {
            b[m] = b[m + 1];
            m++;
        }
    }

    for (int i = 0; i < 19; i++)
        cout << a[i] << " ";
    return 0;
}
