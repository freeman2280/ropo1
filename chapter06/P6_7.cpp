/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�ǽ�������ͬ��Ԫ���ã������б��
 *
 * �ļ����� P6_7.cpp
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

using namespace std;

int main()
{
    int n;
    cout << "������һ������ " << endl;
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

    cout << "���" << n << "�׻÷�Ϊ��" << endl;

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
