//#include <iostream>
//using namespace std;
//#include <string>

//����ģ���Ϊͷ�ļ���Դ�ļ����׳���
//���������
//��������ʵ��д��һ���ļ���׺��Ϊ.hpp

#include "person.hpp"

//ѧϰĿ�꣺
//������ģ���Ա�������ļ���д�����������Լ��������

//���⣺
//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

//�����
//�����ʽ1��ֱ�Ӱ���.cpp�ļ�
//�����ʽ2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp,hpp��Լ�������ƣ�������ǿ�Ƶ�

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	m_Name = name;
//	//	m_Age = age;
//	//}
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
//template<class T1,class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << m_Name << "���䣺" << m_Age << endl;
//}

void test01()
{
	Person<string, int> s1("��˽�22", 90);
	s1.showPerson();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
