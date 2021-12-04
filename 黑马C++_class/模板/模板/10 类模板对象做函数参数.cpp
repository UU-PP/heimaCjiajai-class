#include <iostream>
using namespace std;
#include <string>
//��ģ���������������
//һ�������ִ��뷽ʽ��
//1��ָ����������� --ֱ����ʾ�������������
//2������ģ�廯     --�������еĲ�����Ϊģ����д���
//3��������ģ�廯 --������������� ģ�廯���д���

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}

	void showPerson()
	{
		cout << "������" << this->m_Name << "���䣺" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//ָ�����������
void printPerson1(Person<string,int>&p)
{
	p.showPerson();
}

void test01()
{
	Person<string,int> p("�����", 100);
	printPerson1(p);
}

//����ģ�廯
template <class T1,class T2>
void printPerson2(Person<T1, T2>&p)
{
	p.showPerson();
	cout << "T1���������ͣ�" << typeid(T1).name() << endl;
	cout << "T2���������ͣ�" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int> p2("��˽�", 90);
	printPerson2(p2);
}


//������ģ�廯
template <class T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T���������ͣ�" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p3("ɳɮ", 90);
	printPerson3(p3);
}


int main(void)
{
	test01();
	test02();
	test03();


	system("pause");

	return 0;
}
//�ܽ�
//ͨ����ģ�崴���Ķ��󣬿��������ַ�ʽ�����н��д���
//ʹ�ñȽϹ㷺���ǵ�һ�֣�ָ�����������