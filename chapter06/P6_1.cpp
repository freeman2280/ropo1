/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是将相邻相同的元素用（）进行标记
 *
 * 文件名： P6_1.cpp
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

    int a[19];
    bool in_run;
    for (int i = 0; i < 20; i++)
        a[i] = rand() % 6 + 1;
    in_run = false;
    for (int i = 0; i < 20; i++)
    {
        if (in_run == false)
        {
            if (a[i] == a[i + 1])
            {
                cout << "(";
                in_run = true;
            }
        }
        else if (in_run == true)
        {
            if (a[i] != a[i - 1])
            {
                cout << ")";
                in_run = false;
            }
        }
        cout << a[i] << " ";
    }
    if (in_run == true)
        cout << ")";
    return 0;
}
