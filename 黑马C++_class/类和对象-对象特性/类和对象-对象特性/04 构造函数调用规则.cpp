#include <iostream>
using namespace std;

//Ĭ������£�C++���������ٸ�һ�������3������
//1��Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//2��Ĭ�������������޲Σ�������Ϊ�գ�
//3��Ĭ�Ͽ������캯���������Խ���ֵ����

//���캯�����ù�������
//1������û������вι��캯����C++�����ṩĬ��Ĭ�Ϲ��죬�����ṩĬ�Ͽ�������
//2������û����忽�����캯����C++�������ṩ�������캯��

class Person
{
public:
	////Ĭ�Ϲ���
	//Person()
	//{
	//	cout << "Person ��Ĭ�Ϲ��캯������" << endl;
	//}

	////�вι���
	//Person(int age)
	//{
	//	m_Age = age;
	//	cout << "Person ���вι��캯������" << endl;
	//}

	//��������
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person �Ŀ������캯������" << endl;
	}

	~Person()
	{
		cout << "Person �����������ĵ���" << endl;
	}

	int m_Age;

};

void test01()
{
	Person p;
	p.m_Age = 18;

	Person p2(p);

	cout << "p2������Ϊ�� " << p2.m_Age << endl;
}

void test02()
{
	Person p(99);
	Person p2(p);
}

int main(void)
{

	//test01();
	test02();
	system("pause");

	return 0;
}
