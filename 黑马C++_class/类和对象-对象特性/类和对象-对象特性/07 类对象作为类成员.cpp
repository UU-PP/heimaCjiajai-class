#include <iostream>
using namespace std;
#include <string>

//�������Ϊ���Ա

//�ֻ���
class Phone
{
public:
	//Ĭ�Ϲ���
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone ���캯���ĵ���" << endl;
	}

	//��������
	~Phone()
	{
		cout << "Phone ���������ĵ���" << endl;
	}

	string m_PName;
};

//����
class Person
{
public:

	//Phone m_Phone = pName  ��ʽת����
	Person(string Name, string pName) :m_Name(Name), m_Phone(pName)
	{
		cout << "Person ���캯���ĵ���" << endl; 
	}

	//����
	string m_Name;
	//�ֻ�
	Phone m_Phone;

	//��������
	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}
};

//�������������Ϊ�����Ա�������ʱ���߹���������ٹ��챾��
//����ʱ����������Ա�����������������
void test01()
{ 
	Person p("����", "ƻ��MAX");

	cout << p.m_Name << "���ţ� " << p.m_Phone.m_PName << endl;
}

int main(void)
{

	test01();
	system("pause");

	return 0;
}
