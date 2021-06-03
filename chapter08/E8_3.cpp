/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_3.cpp
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
 void outFile()
 {
	 ofstream ofs;
	 cout << "请输入需要创建的文件名：";
	 string name;
	 cin >> name;
	 cin.ignore();
	 ofs.open(name);
	 cout << "向文件中输入一系列的浮点数：";
	 //double date;
	 //do
	 //{
	 //	cin >> date;
	 //	ofs << date << " ";
	 //} while (cin.get() != '\n');
	 string date;
	 getline(cin, date);
	 ofs << date;
	 ofs.close();
 }
 void readFile()
 {
	 ifstream ifs;
	 cout << "请输入需要打开的文件名：";
	 string name;
	 cin >> name;
	 ifs.open(name);
	 while (ifs.fail())
	 {
		 cout << "输入有误！请重新输入文件名：" << endl;
		 cin >> name;
		 ifs.open(name);
	}
	 double d;
	 int k = 0;
	 int sum = 0;
	 while (!ifs.eof())
	 {
		 ifs >> d;
		 sum += d;
		 k++;
	 }
	 cout << "平均值：" << sum * 1.0 / k << endl;
 }
 int main()
 {
	 outFile();
	 readFile();
	 return 0;
 }