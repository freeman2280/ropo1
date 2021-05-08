#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void xieru()
{
     ofstream ofs;
	ofs.open("demo.text", ios::out);
	string name;
	cin >> name;
	int age;
	cin >> age;
	ofs << name << " " << age;
}
void duqu()
{
	ifstream ifs;
	ifs.open("demo.text", ios::in);
	if (!ifs.is_open())
	{
		cout << "¶ÁÈ¡Ê§°Ü" << endl;
		return;
		}
	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}
	ifs.close();
}
int main()
{
	//duqu();
	xieru();
	system("pause");
	return 0;
}