#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<ctime>
//#include<cctype>
using namespace std;
string cmpString(const string &str,const string &target,const string& re) 
{
    //˼·������find()��������ʶ���Сд��ͬ�Ĳ��ң�����Ҫ�Լ�ת��һ��
    //�Ȱ�str��targetȫ��ת��Ϊ��д����Сд�ַ�����find�������ң�����¼λ�ý����滻
    string stoUp = str;
    string s = str;
    string ttoUp = target;
    transform(stoUp.begin(), stoUp.end(), stoUp.begin(), toupper);
    transform(ttoUp.begin(), ttoUp.end(), ttoUp.begin(), toupper);
    while (stoUp.find(ttoUp, 0) != string::npos)
    {
        int pos = stoUp.find(ttoUp, 0);
        s.replace(pos, target.length(), re);
        stoUp.replace(pos, target.length(), re);//�ǵ�stoUpҲҪ�ı䣬��Ȼ�������ѭ��
    }
    return s;
}
int main()
{
    //Ҫ���滻str�����е�target�Ӵ������۴�Сд��ϵ�������ʽ����re
    string str;//�����һ���ַ���
    getline(cin, str);
    string target;//��Ҫ���滻���ַ����������ִ�Сд
    cin >> target;
    string re;//�滻Ԫ��
    cin >> re;
    cout << cmpString(str, target,re) << endl;
    return 0;
}