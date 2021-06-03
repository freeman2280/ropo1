/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_4.cpp
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
 int k = 0;
 void outFile()
 {
	 ofstream ofs;
	 cout << "请输入需要创建的文件名：";
	 string name;
	 cin >> name;
	 cin.ignore();
	 ofs.open(name);
	 cout << "向文件中输入第一列的浮点数：" << endl;
	 double date;
	 double arr[100][2];
	 do
	 {
		 cin >> arr[k][0];
		 k++;
	 } while (cin.get() != '\n');
	 cout << "向文件中输入第二列的浮点数：" << endl;
	 k = 0;
	 do
	 {
		 cin >> arr[k][1];
		 k++;
	 } while (cin.get() != '\n');
	 for (int i = 0; i < k; i++)
	 {
		 for (int j = 0; j < 2; j++)
		 {
			 ofs << arr[i][j] << " ";
		 }
		 ofs << endl;
	 }
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
	 double arr[100][2];
	 for (int i = 0; i < k; i++)
	 {
		 for (int j = 0; j < 2; j++)
		 {
			 ifs >> arr[i][j];
		 }
	 }
	 int sum1 = 0, sum2 = 0;
	 for (int i = 0; i < k; i++)
	 {
		 sum1 += arr[i][0];
		 sum2 += arr[i][1];
		 cout << arr[i][0] << "   " << arr[i][1] << endl;
	 }
	 cout << "第1列平均值：" << sum1 * 1.0 / k << endl;
	 cout << "第2列平均值：" << sum2 * 1.0 / k << endl;
 }
 int main()
 {
	 outFile();
	readFile();
	 return 0;
 }