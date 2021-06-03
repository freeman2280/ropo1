/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_7.cpp
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
 void readFile()
 {
	 ifstream ifs;
	 ofstream ofs;
	 ifs.open("input.txt");
	 ofs.open("input.txt", ios::app);
	 if (ifs.fail())
	 {
		 cout << "读取失败";
		 return;
	 }
	 string str;
	 string strcpy[100];
	 int k = 0;
	 while (getline(ifs, str))
	 {
		 strcpy[k++] = str;
	 }
	 reverse(strcpy, strcpy + k);
	 ofs<< endl;
	 for (int i = 0; i < k; i++)
		 ofs << strcpy[i] << endl;
 }
 int main()
 {
	 readFile();
	 return 0;
 }