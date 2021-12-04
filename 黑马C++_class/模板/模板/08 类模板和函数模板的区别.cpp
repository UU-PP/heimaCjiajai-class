#include <iostream>
using namespace std;
#include <string>

//类模板和函数模板的区别：
//1、类模板没有自动类型推导的使用方式
//2、类模板在模板参数列表中可以有默认参数

//类模板
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

//1、类模板没有自动类型推导的使用方式
//void test01()
//{
//	//Person p1("悟空", 999);//无法自动类型推导
//	Person<string, int> p1("悟空", 999);
//	p1.showPerson();
//}

//2、类模板在模板参数列表中可以有默认参数
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
	Person<string> p2("悟空", 999);//第二个参数默认为int时
	p2.showPerson();
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
