/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� E8_10.cpp
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
 string ss[20];
 int k = 0;
 void readFile()
 {
   ofstream ofs;
   ofs.open(ss[k - 1]);
   if (ofs.fail())
   {
  	 cout << "��ȡʧ��";
  	 return;
   }
   for (int i = 1; i < k - 1; i++)
   {	
  	ifstream ifs;
  	ifs.open(ss[i]);
  	if (ifs.fail())
  	{
  		cout << "��ȡʧ��i";
  		return;
  	}
  	string str;
  	while (getline(ifs, str))
  	{
  		ofs << str << endl;
  	}
  	ifs.close();
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
  string s;
  getline(cin, s);
  f(s);
  readFile();
  return 0;
 }