/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_11.cpp
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
 string cpystr[100];
 int k = 0;
 string name;
 void readFile()
 {
	 ifstream ifs;
	 ifs.open(name);
	 if (ifs.fail())
	 {
		 cout << "读取失败";
		 return;
	 }
	 string str;
	 while (getline(ifs, str))
	 {
		 if (str != "")
			 cpystr[k++] = str;
	 }
	 ifs.close();
 }
 void outFile()
 {
	 ofstream ofs;
	 ofs.open(name,ios::trunc);
	 if (ofs.fail())
	 {
		 cout << "读取失败";
		 return;
	 }
	 for (int i = 0; i < k; i++)
	 {
		 ofs << cpystr[i] << endl;
	 }
 }
 int main()
 {
	 cout << "输入文件名：" << endl;
	 cin >> name;
	 readFile();
	 outFile();
	 return 0;
 }