/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_4.cpp
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
 int k = 0;
 void outFile()
 {
	 ofstream ofs;
	 cout << "��������Ҫ�������ļ�����";
	 string name;
	 cin >> name;
	 cin.ignore();
	 ofs.open(name);
	 cout << "���ļ��������һ�еĸ�������" << endl;
	 double date;
	 double arr[100][2];
	 do
	 {
		 cin >> arr[k][0];
		 k++;
	 } while (cin.get() != '\n');
	 cout << "���ļ�������ڶ��еĸ�������" << endl;
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
	 cout << "��1��ƽ��ֵ��" << sum1 * 1.0 / k << endl;
	 cout << "��2��ƽ��ֵ��" << sum2 * 1.0 / k << endl;
 }
 int main()
 {
	 outFile();
	readFile();
	 return 0;
 }