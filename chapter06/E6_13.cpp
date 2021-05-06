/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E6_13.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��4��24��
 *
 * �汾��   1.0
 *
 ******************************************************************************************
 */
#include <iostream>

using namespace std;

double neighbor_average(int values[5][5], int row, int column)
{
    int sum = 0;
    int aver = 0;
    if (row == 0)
    {
        if (column == 0)
        {
            sum = +values[row][column + 1];
            sum = sum + values[row + 1][column] + values[row + 1][column + 1];
            aver = sum / 3;
        }
        else
        {
            sum = sum + values[row][column - 1] + values[row][column + 1];
            sum = sum + values[row + 1][column - 1] + values[row + 1][column] + values[row + 1][column + 1];
            aver = sum / 5;
        }
    }
    if (column == 0)
    {
        sum = sum + values[row - 1][column] + values[row - 1][column + 1];
        sum = sum + values[row][column + 1];
        sum = sum + values[row + 1][column] + values[row + 1][column + 1];
        aver = sum / 5;
    }
    else
    {
        sum = sum + values[row - 1][column - 1] + values[row - 1][column] + values[row - 1][column + 1];
        sum = sum + values[row][column - 1] + values[row][column + 1];
        sum = sum + values[row + 1][column - 1] + values[row + 1][column] + values[row + 1][column + 1];
        aver = sum / 8;
    }
    return aver;
}
int main()
{
    int values[5][5] = { 0 };
    int row = 3;
    int column = 3;
    cout << neighbor_average(values, row, column);
    return 0;
}
