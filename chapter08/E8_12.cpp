/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： E8_12.cpp
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
  int s = 0, e = 0;//start用于记录第一次出现字符的行，end记录最后一次
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
	  int r = 1;
	  int pp = 0;
	  while (getline(ifs, str))
	  {
	 		 cpystr[k++] = str;
	  }
	  cout << k << endl;
	  for (int i = 0; i < k; i++)
	  {
	 	 if (cpystr[i] != "")
	 	 {
	 		 s = i;
	 		 break;
	 	 }
	  }
	  for (int i = 0; i < k; i++)
	  {
	  
	 	 if (cpystr[i] == ""&&cpystr[i+1] == "")
	 	 {
	 	 pp=0;
	 		 for (int j = i + 1; j < k; j++)
	 		 {
	 			 if (cpystr[j] != "")
	 			 {
	 				 pp = 1;
	 				 break;
	 			 }
	 		 }
	 	 }
	 	 if (pp == 0)
	 	 {
	 		 e = i;
	 		 break;
	 	 }
	  }
	  cout << "s" << s << endl;
	  cout << "e" << e << endl;
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
	  for (int i = s; i <= e; i++)
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