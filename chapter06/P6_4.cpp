/*
*****************************************************************************************
*
* ���ܣ�   ��������Ҫ�Ǵ�ӡ���
*
* �ļ����� P6_4.cpp
*
* ���ߣ�   Rui Chen
*
* ��λ��   ���ϴ�ѧ���������Ϣ����ѧԺ
*
* E-mail: 2280781256@qq.com
*
* ʱ�䣺   2021��4��26��
*
* �汾��   1.0
*
******************************************************************************************
*/
 #include<iostream>
 using namespace std;
 void display(bool occupied[], int len)
 {
	 for (int i = 0; i < len; i++)
	 {
		 cout << occupied[i] << " ";
	 }
	 cout << endl;
 }
 bool* next_visitor(bool occupied, int len, int stalls)
 {

 }
 int main()
 {
	 const int len = 10;
	 bool occupied[len] = { false,false, false, false, true,false,false,true,false,false };
	 int stalls;
	 cout << "���������õ��м����ˣ�";
	 cin >> stalls;
	 next_visitor(occupied, stalls);
	 system("pause");
	 return 0;
 }