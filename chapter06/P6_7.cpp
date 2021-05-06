/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是将相邻相同的元素用（）进行标记
 *
 * 文件名： P6_7.cpp
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

using namespace std;

int main()
{
    int n;
    cout << "请输入一个奇数 " << endl;
    cin >> n;
    int a[20][20] = { 0 };
    int row = n - 1;
    int column = n / 2;
    int k = 1;
    a[row][column] = k;

    while (k < n * n + 1)
    {
        a[row][column] = k;
        row++;
        column++;
        if (row == n)
            row = 0;
        if (column == n)
            column = 0;
        if (a[row][column] != 0)
        {
            if (row == 0)
                row = n;
            if (column == 0)
                column = n;
            row -= 2;
            column--;
        }
        k++;
    }

    cout << "输出" << n << "阶幻方为：" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
