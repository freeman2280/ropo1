/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_12.cpp
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
  int s = 0, e = 0;//start���ڼ�¼��һ�γ����ַ����У�end��¼���һ��
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
	 	 cout << "��ȡʧ��";
	 	 return;
	  }
	  for (int i = s; i <= e; i++)
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