#include <iostream>
using namespace std;

//默认情况下，C++编译器至少给一个类添加3个函数
//1、默认构造函数（无参，函数体为空）
//2、默认析构函数（无参，函数体为空）
//3、默认拷贝构造函数，对属性进行值拷贝

//构造函数调用规则如下
//1、如果用户定义有参构造函数，C++不在提供默认默认构造，但会提供默认拷贝构造
//2、如果用户定义拷贝构造函数，C++不会再提供其他构造函数

class Person
{
public:
	////默认构造
	//Person()
	//{
	//	cout << "Person 的默认构造函数调用" << endl;
	//}

	////有参构造
	//Person(int age)
	//{
	//	m_Age = age;
	//	cout << "Person 的有参构造函数调用" << endl;
	//}

	//拷贝构造
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person 的拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person 的析构函数的调用" << endl;
	}

	int m_Age;

};

void test01()
{
	Person p;
	p.m_Age = 18;

	Person p2(p);

	cout << "p2的年龄为： " << p2.m_Age << endl;
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
