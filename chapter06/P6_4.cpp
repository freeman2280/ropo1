/*
*****************************************************************************************
*
* 功能：   本程序主要是打印输出
*
* 文件名： P6_4.cpp
*
* 作者：   Rui Chen
*
* 单位：   河南大学计算机与信息工程学院
*
* E-mail: 2280781256@qq.com
*
* 时间：   2021年4月26日
*
* 版本：   1.0
*
******************************************************************************************
*/
 #include<iostream>
 using namespace std;
 void display(bool occupied[], int len)
 {
	 for (int i = 0; i < len; i++)
	 {
		 cout << occupied[i] << " ";
	 }
	 cout << endl;
 }
 bool* next_visitor(bool occupied, int len, int stalls)
 {

 }
 int main()
 {
	 const int len = 10;
	 bool occupied[len] = { false,false, false, false, true,false,false,true,false,false };
	 int stalls;
	 cout << "请输入来访的有几个人：";
	 cin >> stalls;
	 next_visitor(occupied, stalls);
	 system("pause");
	 return 0;
 }