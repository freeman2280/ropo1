/*
 *****************************************************************************************
 *
 * ���ܣ�   ��������Ҫ�Ǵ�ӡ���
 *
 * �ļ����� P8_1.cpp
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
 string ss[100] = {""};
 int k = 0;
 void readFile()
 {
	 string key = ss[1];
	 for (int i = 2; i < k; i++)
	 {
		 ifstream ifs;
		 ifs.open(ss[i]);
		 if (ifs.fail())
		 {
			 cout << "��������" <<ss[i]<< endl;
			 return;
		 }
		 string str;
		 while (getline(ifs, str))
		 {
			 if (str.find(key) != string::npos)
				 cout <<ss[i]<<":"<< str << endl;
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
	 //cout << ss[0] <<" "<< ss[1] <<"  "<< ss[2] << endl;
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