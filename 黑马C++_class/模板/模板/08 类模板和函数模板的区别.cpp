#include <iostream>
using namespace std;
#include <string>

//��ģ��ͺ���ģ�������
//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//2����ģ����ģ������б��п�����Ĭ�ϲ���

//��ģ��
//template <class nameType,class ageType>
//class Person
//{
//public:
//	Person(nameType name,ageType age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name is " << m_Name << " age is " << m_Age << endl;
// 	}
//
//	nameType m_Name;
//	ageType m_Age;
//};

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test01()
//{
//	//Person p1("���", 999);//�޷��Զ������Ƶ�
//	Person<string, int> p1("���", 999);
//	p1.showPerson();
//}

//2����ģ����ģ������б��п�����Ĭ�ϲ���
template <class nameType, class ageType = int>
class Person
{
public:
	Person(nameType name, ageType age)
	{
		m_Name = name;
		m_Age = age;
	}

	void showPerson()
	{
		cout << "name is " << m_Name << " age is " << m_Age << endl;
	}

	nameType m_Name;
	ageType m_Age;
};

void test02()
{
	Person<string> p2("���", 999);//�ڶ�������Ĭ��Ϊintʱ
	p2.showPerson();
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
