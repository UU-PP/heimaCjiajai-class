#include <iostream>
using namespace std;
#include <string>

//ѧϰĿ�꣺�ܹ�������ģ���еĳ�Ա��������ʵ��

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);//����ʵ��
	/*{
		m_Name = name;
		m_Age = age;
	}*/

	void showPerson();//����ʵ��
	/*{
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}*/

	T1 m_Name;
	T2 m_Age;
};

//���캯������ʵ��
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	m_Name = name;
	m_Age = age;
}
//��Ա��������ʵ��
template<class T1,class T2>
void Person<T1, T2>::showPerson()
{
	cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
}
void test01()
{
	Person<string,int> s("��ү ",90);
	s.showPerson();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//�ܽ᣺��ģ���г�Ա��������ʵ��ʱ����Ҫ����ģ������б�