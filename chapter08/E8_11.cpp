/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_11.cpp
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
 string cpystr[100];
 int k = 0;
 string name;
 void readFile()
 {
	 ifstream ifs;
	 ifs.open(name);
	 if (ifs.fail())
	 {
		 cout << "��ȡʧ��";
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
		 cout << "��ȡʧ��";
		 return;
	 }
	 for (int i = 0; i < k; i++)
	 {
		 ofs << cpystr[i] << endl;
	 }
 }
 int main()
 {
	 cout << "�����ļ�����" << endl;
	 cin >> name;
	 readFile();
	 outFile();
	 return 0;
 }