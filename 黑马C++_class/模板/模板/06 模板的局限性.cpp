#include <iostream>
using namespace std;
#include <string>

//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯��ʽ������ʵ��

//�Զ�����������
class Person
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}

	string m_Name;
	int m_Age;
};

template <typename T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template<> bool myCompare(Person &p1, Person &p2��
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret == true)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
}

void test02()
{
	Person p1("���", 18);
	Person p2("���", 18);
	int ret = myCompare(p1, p2);
	if (ret == true)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "����" << endl;
	}
}

int main(void)
{
	//test01();
	//test02();

	system("pause");

	return 0;
}
//�ܽ᣺
//1�����þ��廯��ģ�壬���Խ���Զ������͵�ͨ�û�
//2��ѧϰģ�岻��Ϊ��дģ�壬������STL���ܹ�����ϵͳ�ṩ��ģ��