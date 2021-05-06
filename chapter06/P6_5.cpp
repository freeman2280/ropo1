/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是将相邻相同的元素用（）进行标记
 *
 * 文件名： P6_5.cpp
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
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;


int main()
{
    srand(time(0));

    int m = rand() % 45 + 1;
    int a[45];
    int s = 45;
    for (int i = 0; i < m; i++)
    {
        a[i] = rand() % s + 1;
        s = s - a[i];
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m + 1; i++)
    {
        a[i] = a[i] - 1;
        a[m + 1] = m;
        cout << a[i] << " ";
    }
    return 0;

}