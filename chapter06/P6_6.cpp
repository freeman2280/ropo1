/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�ǽ�������ͬ��Ԫ���ã������б��
 *
 * �ļ����� P6_6.cpp
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
    cout << "���������1~16��";
    int a[15], b[15];
    for (int i = 0; i < 16; i++)
        cin >> a[i];
    int m = 0;
    for (int j = 0; j < 16; j++)
    {
        b[a[j]]++;
    }
    for (int i = 0; i < 16; i++)
    {
        if (b[i] >= 2)
        {
            m = 6;
        }
    }

    for (int i = 1; i < 4; i++)
    {
        if (a[1] + a[2] + a[3] + a[4] == a[1 + 4 * i] + a[2 + 4 * i] + a[3 + 4 * i] + a[4 + 4 * i])
        {
            if (a[1] + a[5] + a[9] + a[13] == a[1 + i] + a[5 + i] + a[9 + i] + a[13 + i])
            {
                if (a[1] + a[2] + a[3] + a[4] == a[1] + a[6] + a[11] + a[16])
                {
                    if (a[1] + a[2] + a[3] + a[4] == a[4] + a[7] + a[10] + a[13])
                    {
                        m++;
                    }
                }

            }

        }

    }
    if (m == 3)
    {
        cout << "����Ϊ�÷�";
    }
    else
    {
        cout << "���벻Ϊ�÷�";
    }
    return 0;
}