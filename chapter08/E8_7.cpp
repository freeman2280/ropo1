/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_7.cpp
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
	 ofs.open("input.txt", ios::app);
	 if (ifs.fail())
	 {
		 cout << "��ȡʧ��";
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