#include <iostream>
using namespace std;
#include <string>

//学习目标
//掌握类模板配合友元函数的类内和类外实现

//全局函数类内实现 - 直接在类内申明友元即可
//全局函数类外实现 - 需要提前让编译器知道全局函数的存在

//2、全局函数配合友元 类外实现 - 先做函数模板声明，下方在做函数模板定义，在做友元
template<class T1, class T2>class Person;

template<class T1, class T2> void printPerson2(Person<T1, T2>&p);

template<class T1,class T2>
void printPerson2(Person<T1, T2>&p)
{
	cout << "类外实现----姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//1、全局函数配合友元 类内实现
	friend void printPerson(Person<T1, T2>& p)
	{
		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
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

//1、全局函数类内实现
void test01()
{
	Person<string, int> p("孙悟空", 900);
	printPerson(p);
}

//2、全局函数在类外实现
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
