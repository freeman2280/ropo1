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
void outFile()
{
	ofstream ofs;
	ofs.open("hello.txt");
		ofs << "Hello World!" << endl;
	ofs.close();
}
void readFile()
{
	ifstream ifs;
	ifs.open("hello.txt");
	if (ifs.fail())
	{
		cout << "��ȡʧ��";
		return;
	}
	string str;
	getline(ifs, str);
	cout << str << endl;
}
int main()
{
	outFile();
	readFile();
	return 0;
}