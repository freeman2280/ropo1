/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_1.cpp
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
 void readFile()
 {
	 ifstream ifs;
	 ofstream ofs;
	 ifs.open("input.txt");
	 //ofs.open("output.txt", ios::app);
	 ofs.open("input.txt", ios::app);
	 if (ifs.fail())
	 {
		 cout << "��ȡʧ��";
		 return;
	 }

	 string str;
	 string strcpy[100];
	 int i = 0;
	 while (getline(ifs, str))
	 {
		 reverse(str.begin(), str.end());
		 strcpy[i++] = str;
	 }
	 ofs << endl;
	 for (int j = 0; j < i; j++)
		 ofs << strcpy[j] << endl;
 }
 int main()
 {
	 readFile();
	 return 0;
 }