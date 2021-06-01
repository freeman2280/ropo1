/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long arr[25][25] = { 0 };
    for (int i = 0; i <= 20; i++)
    {
        arr[0][i] = 1;
        arr[i][0] = 1;
    }
    int m, n, x, y;
    cin >> x >> y >> m >> n;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if ((pow((m - i), 2) + pow(n - j, 2)) == 5||i==m&&j==n)
            {
                arr[i][j] = 0;
              
            }
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
  
        cout << arr[x][y] << endl;
        return 0;
}*/