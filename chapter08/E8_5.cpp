/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_5.cpp
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
	ofs.open("output.txt", ios::app);
	if (ifs.fail())
	{
		cout << "��ȡʧ��";
		return;
	}
	
	string str;
	while (getline(ifs, str))
	{
		reverse(str.begin(), str.end());
		ofs << str << endl;
	}
}
using namespace std;
int main()
{
	readFile();
	return 0;
}