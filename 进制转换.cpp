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
    //cin >> num;//��Ҫת����10������
    //int target;//Ŀ�����
    //cin >> target;
    //_itoa_s(num, ch, target);//ʮ���Ƶ�2-36�������ת����ch�Ƿ���ֵ��һ����char����
    char buffer[100];
    cin >> buffer;
    int target;
    cin >> target;
    char* stop;
    int p=strtol(buffer, &stop, target);//�������ת��Ϊ10����
     cout << p<< endl;
}