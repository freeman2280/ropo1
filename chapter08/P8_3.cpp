/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� P8_2.cpp
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
 void f(string s);
  string ss[20];
  int k = 0;
  int num = 1;
  void readFile()
  {
 	 ifstream ifs;
 	 ofstream ofs1, ofs2;
 	 ofs1.open("boynames.txt");
 	 ofs2.open("girlnames.txt");
 	 ifs.open("babynames.txt");
 	 if (ifs.fail()||ofs1.fail()||ofs2.fail())
 	 {
 		 cout << "��������" << endl;
 		 return;
 	 }
 	 string str;
 	 while (getline(ifs, str))
 	 {
 		 f(str);
 		 ofs1 << num << "  ";
 		 for (int i = 1; i <= 3; i++)
 			 ofs1 << ss[i] << "    ";
 		 ofs1 << endl;
 		 ofs2 << num << "  ";
 		 for (int i = 4; i < k; i++)
 			 ofs2 << ss[i] << "    ";
 		 ofs2 << endl;
 		 num++;
 	 }
  }
  void f(string s)
  {
 	 int p1 = 0;//һ�������±�
 	 int count = 0;//ͳ�Ƶ�������
 	 //string ss[10];//����һ���ַ��������ŵ���
 	 int len = s.length();
 	 for (int i = 0; i < len; i++)
 	 {
 		 if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
 		 {//�������Ϸ��ַ�ʱ
 			 p1 = i + 1;		//p1ָ����һ���ַ�
 			 while (s[p1] != ' ' && p1 < len)
 			 {	//���s[p1]Ϊ�ո�˵����i��p1(������p1)֮��������ַ����ǺϷ��ַ�����p1�����ַ�������ʱ��p1ָ���ַ��������һ��Ԫ�ص���һ��λ��
 				 p1++;	//��s[p1]���ǿո���p1С���ַ�������ʱ,p1һֱָ��Ϸ��ַ�,������������չ
 			 }
 			 ss[count++] = s.substr(i, p1 - i);		//��ȡ����
 			 i = p1;	//iָ��ո�,�����forѭ��i++�� i����ָ���µĺϷ��ַ�
 		 }
 	 }
 	 k = count;
  }
  int main()
  {
 	 readFile();
 	 return 0;
  }