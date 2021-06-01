//#include<iostream>
//using namespace std;
//int a[10001][4];
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
//        a[i][2] += a[i][0];
//        a[i][3] += a[i][1];
//    }
//    int x, y;
//    cin >> x >> y;
//    int m = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (x >= a[i][0] && x <= a[i][2] && y <= a[i][3] && y >= a[i][1])
//        {
//            m++;
//        }
//    }
//    if (m == 0)
//        cout << -1 << endl;
//    else
//        cout << m << endl;
//    return 0;
//}