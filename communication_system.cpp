/*#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
//联系人结构体
struct person {
	string name;
	int sex;
	int age;
	string phone;
	string addr;
};
//通讯录结构体
struct addressbooks {		
	struct person personarray[MAX];
	int size;//通讯录人数
};
//菜单
void showmenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl; 
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;

}
//1、添加联系人函数
void addperson(addressbooks* abs)
{
	//判断该通讯录是否以满
	if (abs->size == MAX)
	{
		cout << "该通讯录已满，无法添加联系人！" << endl;
		return;
	}
	else {
		//添加联系人姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin>> name;
		abs->personarray[abs->size].name = name;
		//添加联系人性别
		int sex=0;
		cout << "性别：  1、男  2、女" << endl;
		cin >> sex;
		while (sex!=1&&sex!=2)
		{
			cout << "输入有误，请重新输入:" << endl;			
			cin >> sex;
		}
		abs->personarray[abs->size].sex = sex;
		//添加联系人年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personarray[abs->size].age = age;
		//添加联系人电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->size].phone = phone;
		//添加联系人住址
		string addr;
		cout << "请输入地址：" << endl;
		cin >> addr;
		abs->personarray[abs->size].addr = addr;
		cout << "联系人添加成功！" << endl;
		//更新通讯录人数
		abs->size++;
		system("pause");
		system("cls");//清屏操作
	}
}
//2、显示联系人
void showperson(addressbooks *abs)
	{
		//首先需要判断联系人是否为空
		if (abs->size == 0)
		{
			cout << "联系人列表为空" << endl;
			system("pause");
			system("cls");//清屏操作
		}
		else {
			for (int i = 0; i < abs->size; i++)
			{
				cout << "姓名：" << abs->personarray[i].name << "\t";
				cout << "性别：" << (abs->personarray[i].sex==1? "男" : "女") << "\t";
				cout << "年龄：" << abs->personarray[i].age << "\t";
				cout << "电话：" << abs->personarray[i].phone << "\t";
				cout << "住址：" << abs->personarray[i].addr << endl;
			}
			system("pause");
			system("cls");//清屏操作
}
	}
//查找是否存在该联系人，并返回下标
int isexsist(addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personarray[i].name == name)
		{
			return i;
		}
		else {
			return -1;
		}
	}
}
//3删除联系人
void  deleteperson (addressbooks* abs, string name)
{
	
	int ret = isexsist(abs, name);
	if (ret != -1)
	{
		//执行删除操作
		for (int i = ret; i < abs->size; i++)
		{
			//覆盖数据实现删除操作
			abs->personarray[i] = abs->personarray[i + 1];
		}
		cout << "删除成功" << endl;
		abs->size--;//数据更新
		system("pause");
		system("cls");//清屏操作
	}
	else {
		cout << "查无此人" << endl;
		system("pause");
		system("cls");//清屏操作
	}
}
//4、查找联系人
void searchperson(addressbooks* abs, string name)
{
	//判断是否有该联系人
	int i = isexsist(abs, name);
	if (i != -1)
	{
		//打印联系人详细信息
		cout << "姓名：" << abs->personarray[i].name << "\t";
		cout << "性别：" << (abs->personarray[i].sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personarray[i].age << "\t";
		cout << "电话：" << abs->personarray[i].phone << "\t";
		cout << "住址：" << abs->personarray[i].addr << endl;
		cout << "查找成功" << endl;	
		system("pause");
		system("cls");//清屏操作
	}
	else {
		cout << "查无此人" << endl;
		system("pause");
		system("cls");//清屏操作
	}
}
//5、修改联系人信息
void fixperson(addressbooks* abs, string name)
{
	int ret = isexsist(abs, name);
	if (ret != -1)
	{
		//执行修改操作
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personarray[ret].name = name;
		//修改联系人性别
		int sex = 0;
		cout << "性别：  1、男  2、女" << endl;
		cin >> sex;
		while (sex != 1 && sex != 2)
		{
			cout << "输入有误，请重新输入:" << endl;
			cin >> sex;
		}
		abs->personarray[ret].sex = sex;
		//修改联系人年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personarray[ret].age = age;
		//修改联系人电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personarray[ret].phone = phone;
		//修改联系人住址
		string addr;
		cout << "请输入地址：" << endl;
		cin >> addr;
		abs->personarray[ret].addr = addr;
		cout << "联系人修改成功！" << endl;				
		system("pause");
		system("cls");//清屏操作
	}
	else {
		cout << "查无此人" << endl;
		system("pause");
		system("cls");//清屏操作
	}
}
//6、清空联系人
void cleanperson(addressbooks* abs)
{
	abs->size = 0;
	if (abs->size == 0)
	{
		cout << "以清空联系人" << endl;
		system("pause");
		system("cls");//清屏操作
	}
}


int main()
{	
	//建立通讯录变量
	addressbooks abs;
	//初始化通讯录人数
	abs.size = 0;
	while (1)
	{
		//调用菜单函数
		showmenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:   //1、添加联系人
			//调用添加联系人的函数
			addperson(&abs);
			break;
		case 2:  //2、显示联系人
			showperson(&abs);
			break;
		case 3:  //3、删除联系人
		{
			cout << "请输入需要删除的联系人姓名：" << endl;
			string name;
			cin >> name;
			deleteperson(&abs, name);
			break;
		}
		case 4:  //4、查找联系人
		{

			cout << "请输入需要查找的联系人姓名：" << endl;
			string name;
			cin >> name;
			searchperson(&abs, name);
			break;
		}
		case 5:  //5、修改联系人
		{
			cout << "请输入需要修改联系人的姓名：" << endl;
			string name;
			cin >> name;
			fixperson(&abs, name);
			break;
		}
		case 6:  //6、清空联系人
		{
			cout << "是否需要清空联系人？" << endl;
			cout << "1-----是" << endl;
			cout << "2-----否" << endl;
			int num=0;
			cin >> num;
			if (num == 1)
			{
				cleanperson(&abs);
			}
			else {
				cout << "已退出清空操作" << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case 0:  //0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		}
	}
	
	system("pause");
	return 0;
}*/