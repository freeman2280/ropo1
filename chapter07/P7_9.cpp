/*
 *****************************************************************************************
 *
 * 功能：   本程序主要是打印输出
 *
 * 文件名： P7_9.cpp
 *
 * 作者：   Rui Chen
 *
 * 单位：   河南大学计算机与信息工程学院
 *
 * E-mail: 2280781256@qq.com
 *
 * 时间：   2021年5月17日
 *
 * 版本：   1.0
 *
 ******************************************************************************************
 */
 /*#include<iostream>
 #include<algorithm>
 using namespace std;
 struct Student {
	 string name;
	 double fenshu[10];
	 char grade;
 };
 bool compare(Student& p, Student& q)
 {
	 return p.grade < q.grade;
 }
 int main()
 {
	 Student s[1000];
	 int i = 0;
	  double sum;
	 while (cin >> s[i].name)
	 {
		 for (int o = 0; o < 10; o++)
			 cin >> s[i].fenshu[0];
		 i++;
	 }
	 for (int m = 0; m < i; m++)
	 {
		 sum = 0;
		 for (int j = 0; j < i; j++)
		 {
			 sum += s[m].fenshu[j];
		 }
		 if (sum >= 90)
			 s[m].grade = 'A';
		 else if (sum >= 80 && sum < 90)
			 s[m].grade = 'B';
		 else if (sum >= 70 && sum < 80)
			 s[m].grade = 'C';
		 else if (sum >= 60 && sum < 70)
			 s[m].grade = 'D';
		 else
			 s[m].grade = 'F'; 
	 }
	 sort(s, s + i, compare);
	 for (int j = 0; j < i; j++)
	 {
		 cout << "姓名：" << s[j].name << "	"<< "分数：" << s[j].grade << endl;
	 }
	 system("pause");
	 return 0;
 }*/