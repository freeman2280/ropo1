/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_10.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年6月1日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
 #include<iostream>
 #include<fstream>
 #include<string>
 using namespace std;
 string ss[20];
 int k = 0;
 void readFile()
 {
   ofstream ofs;
   ofs.open(ss[k - 1]);
   if (ofs.fail())
   {
  	 cout << "读取失败";
  	 return;
   }
   for (int i = 1; i < k - 1; i++)
   {	
  	ifstream ifs;
  	ifs.open(ss[i]);
  	if (ifs.fail())
  	{
  		cout << "读取失败i";
  		return;
  	}
  	string str;
  	while (getline(ifs, str))
  	{
  		ofs << str << endl;
  	}
  	ifs.close();
   }
 }
 void f(string s)
 {
   int p1 = 0;//一个辅助下标
   int count = 0;//统计单词数量
   //string ss[10];//定义一个字符串数组存放单词
   int len = s.length();
   for (int i = 0; i < len; i++)
   {
  	 if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
  	 {//当遇到合法字符时
  		 p1 = i + 1;		//p1指向下一个字符
  		 while (s[p1] != ' ' && p1 < len)
  		 {	//如果s[p1]为空格，说明从i到p1(不包括p1)之间的所有字符都是合法字符。当p1等于字符串长度时，p1指向字符串的最后一个元素的下一个位置
  			 p1++;	//当s[p1]不是空格且p1小于字符串长度时,p1一直指向合法字符,并不断向右扩展
  		 }
  		 ss[count++] = s.substr(i, p1 - i);		//截取单词
  		 i = p1;	//i指向空格,待会儿for循环i++后 i可能指向新的合法字符
  	 }
   }
   k = count;
 }
 int main()
 {
  string s;
  getline(cin, s);
  f(s);
  readFile();
  return 0;
 }