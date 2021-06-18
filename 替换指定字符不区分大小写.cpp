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
    //思路：由于find()函数不能识别大小写不同的查找，所以要自己转换一下
    //先把str和target全部转换为大写或者小写字符，用find函数查找，并记录位置进行替换
    string stoUp = str;
    string s = str;
    string ttoUp = target;
    transform(stoUp.begin(), stoUp.end(), stoUp.begin(), toupper);
    transform(ttoUp.begin(), ttoUp.end(), ttoUp.begin(), toupper);
    while (stoUp.find(ttoUp, 0) != string::npos)
    {
        int pos = stoUp.find(ttoUp, 0);
        s.replace(pos, target.length(), re);
        stoUp.replace(pos, target.length(), re);//记得stoUp也要改变，不然会进行死循环
    }
    return s;
}
int main()
{
    //要求：替换str中所有的target子串（无论大小写混合的哪种形式）用re
    string str;//输入的一串字符串
    getline(cin, str);
    string target;//需要被替换的字符串，不区分大小写
    cin >> target;
    string re;//替换元素
    cin >> re;
    cout << cmpString(str, target,re) << endl;
    return 0;
}