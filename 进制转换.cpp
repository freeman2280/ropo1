#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<ctime>
//#include<cctype>
using namespace std;
int main()
{
    //char ch[100];
    //int num;
    //cin >> num;//需要转换的10进制数
    //int target;//目标进制
    //cin >> target;
    //_itoa_s(num, ch, target);//十进制到2-36任意进制转换，ch是返回值，一定是char类型
    char buffer[100];
    cin >> buffer;
    int target;
    cin >> target;
    char* stop;
    int p=strtol(buffer, &stop, target);//任意进制转换为10进制
     cout << p<< endl;
}