/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_3.cpp
 *
 * ���ߣ�   Rui Chen
 *
 * ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
 *
 * E-mail: 2280781256@qq.com
 *
 * ʱ�䣺   2021��6��1��
 *
 * �汾��   1.0
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
	 cout << "��������Ҫ�������ļ�����";
	 string name;
	 cin >> name;
	 cin.ignore();
	 ofs.open(name);
	 cout << "���ļ�������һϵ�еĸ�������";
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
	 cout << "��������Ҫ�򿪵��ļ�����";
	 string name;
	 cin >> name;
	 ifs.open(name);
	 while (ifs.fail())
	 {
		 cout << "�������������������ļ�����" << endl;
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
	 cout << "ƽ��ֵ��" << sum * 1.0 / k << endl;
 }
 int main()
 {
	 outFile();
	 readFile();
	 return 0;
 }