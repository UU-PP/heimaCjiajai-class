#include <iostream>
using namespace std;

//�������캯������ʱ��

class Person
{
public:
	Person()
	{
		cout << "Person Ĭ���޲ι��캯���ĵ���" << endl;
	}

	Person(int age)
	{
		m_Age = age;
		cout << "Person �в������캯���ĵ���" << endl;
	}

	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person �������캯���ĵ���" << endl;
	}

	~Person()
	{
		cout << "Person ���������ĵ���" << endl;
	}

	int m_Age;
};

//1��ʹ��һ���ѽ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "P2������Ϊ�� " << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}

void test02()
{
	Person p2;
	doWork(p2);	//������doWorkʱ ʵ��p2���Կ����ķ�ʽ ����doWork���β�p��
}

//3��ֵ��ʽ���ؾֲ�����
Person doWork()
{
	Person p;
	return p;
}

void test03()
{
	Person p3 = doWork(); //�ڵ���doWork()�����󣬱��������doWork()�е�p������test03�е�p3
}

int main(void)
{

	//test01();
	//test02();
	test03();
	system("pause");

	return 0;
}
