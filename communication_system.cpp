/*#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
//��ϵ�˽ṹ��
struct person {
	string name;
	int sex;
	int age;
	string phone;
	string addr;
};
//ͨѶ¼�ṹ��
struct addressbooks {		
	struct person personarray[MAX];
	int size;//ͨѶ¼����
};
//�˵�
void showmenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl; 
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;

}
//1�������ϵ�˺���
void addperson(addressbooks* abs)
{
	//�жϸ�ͨѶ¼�Ƿ�����
	if (abs->size == MAX)
	{
		cout << "��ͨѶ¼�������޷������ϵ�ˣ�" << endl;
		return;
	}
	else {
		//�����ϵ������
		string name;
		cout << "������������" << endl;
		cin>> name;
		abs->personarray[abs->size].name = name;
		//�����ϵ���Ա�
		int sex=0;
		cout << "�Ա�  1����  2��Ů" << endl;
		cin >> sex;
		while (sex!=1&&sex!=2)
		{
			cout << "������������������:" << endl;			
			cin >> sex;
		}
		abs->personarray[abs->size].sex = sex;
		//�����ϵ������
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personarray[abs->size].age = age;
		//�����ϵ�˵绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personarray[abs->size].phone = phone;
		//�����ϵ��סַ
		string addr;
		cout << "�������ַ��" << endl;
		cin >> addr;
		abs->personarray[abs->size].addr = addr;
		cout << "��ϵ����ӳɹ���" << endl;
		//����ͨѶ¼����
		abs->size++;
		system("pause");
		system("cls");//��������
	}
}
//2����ʾ��ϵ��
void showperson(addressbooks *abs)
	{
		//������Ҫ�ж���ϵ���Ƿ�Ϊ��
		if (abs->size == 0)
		{
			cout << "��ϵ���б�Ϊ��" << endl;
			system("pause");
			system("cls");//��������
		}
		else {
			for (int i = 0; i < abs->size; i++)
			{
				cout << "������" << abs->personarray[i].name << "\t";
				cout << "�Ա�" << (abs->personarray[i].sex==1? "��" : "Ů") << "\t";
				cout << "���䣺" << abs->personarray[i].age << "\t";
				cout << "�绰��" << abs->personarray[i].phone << "\t";
				cout << "סַ��" << abs->personarray[i].addr << endl;
			}
			system("pause");
			system("cls");//��������
}
	}
//�����Ƿ���ڸ���ϵ�ˣ��������±�
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
//3ɾ����ϵ��
void  deleteperson (addressbooks* abs, string name)
{
	
	int ret = isexsist(abs, name);
	if (ret != -1)
	{
		//ִ��ɾ������
		for (int i = ret; i < abs->size; i++)
		{
			//��������ʵ��ɾ������
			abs->personarray[i] = abs->personarray[i + 1];
		}
		cout << "ɾ���ɹ�" << endl;
		abs->size--;//���ݸ���
		system("pause");
		system("cls");//��������
	}
	else {
		cout << "���޴���" << endl;
		system("pause");
		system("cls");//��������
	}
}
//4��������ϵ��
void searchperson(addressbooks* abs, string name)
{
	//�ж��Ƿ��и���ϵ��
	int i = isexsist(abs, name);
	if (i != -1)
	{
		//��ӡ��ϵ����ϸ��Ϣ
		cout << "������" << abs->personarray[i].name << "\t";
		cout << "�Ա�" << (abs->personarray[i].sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personarray[i].age << "\t";
		cout << "�绰��" << abs->personarray[i].phone << "\t";
		cout << "סַ��" << abs->personarray[i].addr << endl;
		cout << "���ҳɹ�" << endl;	
		system("pause");
		system("cls");//��������
	}
	else {
		cout << "���޴���" << endl;
		system("pause");
		system("cls");//��������
	}
}
//5���޸���ϵ����Ϣ
void fixperson(addressbooks* abs, string name)
{
	int ret = isexsist(abs, name);
	if (ret != -1)
	{
		//ִ���޸Ĳ���
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personarray[ret].name = name;
		//�޸���ϵ���Ա�
		int sex = 0;
		cout << "�Ա�  1����  2��Ů" << endl;
		cin >> sex;
		while (sex != 1 && sex != 2)
		{
			cout << "������������������:" << endl;
			cin >> sex;
		}
		abs->personarray[ret].sex = sex;
		//�޸���ϵ������
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personarray[ret].age = age;
		//�޸���ϵ�˵绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personarray[ret].phone = phone;
		//�޸���ϵ��סַ
		string addr;
		cout << "�������ַ��" << endl;
		cin >> addr;
		abs->personarray[ret].addr = addr;
		cout << "��ϵ���޸ĳɹ���" << endl;				
		system("pause");
		system("cls");//��������
	}
	else {
		cout << "���޴���" << endl;
		system("pause");
		system("cls");//��������
	}
}
//6�������ϵ��
void cleanperson(addressbooks* abs)
{
	abs->size = 0;
	if (abs->size == 0)
	{
		cout << "�������ϵ��" << endl;
		system("pause");
		system("cls");//��������
	}
}


int main()
{	
	//����ͨѶ¼����
	addressbooks abs;
	//��ʼ��ͨѶ¼����
	abs.size = 0;
	while (1)
	{
		//���ò˵�����
		showmenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:   //1�������ϵ��
			//���������ϵ�˵ĺ���
			addperson(&abs);
			break;
		case 2:  //2����ʾ��ϵ��
			showperson(&abs);
			break;
		case 3:  //3��ɾ����ϵ��
		{
			cout << "��������Ҫɾ������ϵ��������" << endl;
			string name;
			cin >> name;
			deleteperson(&abs, name);
			break;
		}
		case 4:  //4��������ϵ��
		{

			cout << "��������Ҫ���ҵ���ϵ��������" << endl;
			string name;
			cin >> name;
			searchperson(&abs, name);
			break;
		}
		case 5:  //5���޸���ϵ��
		{
			cout << "��������Ҫ�޸���ϵ�˵�������" << endl;
			string name;
			cin >> name;
			fixperson(&abs, name);
			break;
		}
		case 6:  //6�������ϵ��
		{
			cout << "�Ƿ���Ҫ�����ϵ�ˣ�" << endl;
			cout << "1-----��" << endl;
			cout << "2-----��" << endl;
			int num=0;
			cin >> num;
			if (num == 1)
			{
				cleanperson(&abs);
			}
			else {
				cout << "���˳���ղ���" << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case 0:  //0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;

		}
	}
	
	system("pause");
	return 0;
}*/