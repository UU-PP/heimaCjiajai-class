#include <iostream>
using namespace std;
#include <string>

//ѧϰĿ��
//������ģ�������Ԫ���������ں�����ʵ��

//ȫ�ֺ�������ʵ�� - ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ�� - ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

//2��ȫ�ֺ��������Ԫ ����ʵ�� - ��������ģ���������·���������ģ�嶨�壬������Ԫ
template<class T1, class T2>class Person;

template<class T1, class T2> void printPerson2(Person<T1, T2>&p);

template<class T1,class T2>
void printPerson2(Person<T1, T2>&p)
{
	cout << "����ʵ��----������" << p.m_Name << "���䣺" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//1��ȫ�ֺ��������Ԫ ����ʵ��
	friend void printPerson(Person<T1, T2>& p)
	{
		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
	}

public:
	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;
};

//1��ȫ�ֺ�������ʵ��
void test01()
{
	Person<string, int> p("�����", 900);
	printPerson(p);
}

//2��ȫ�ֺ���������ʵ��
void test02()
{
	Person<string, int>p("jerry", 30);
	printPerson2(p);
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
