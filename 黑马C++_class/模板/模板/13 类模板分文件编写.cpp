//#include <iostream>
//using namespace std;
//#include <string>

//将类模板分为头文件和源文件容易出错
//解决方案：
//将声明和实现写在一起，文件后缀改为.hpp

#include "person.hpp"

//学习目标：
//掌握类模板成员函数分文件编写产生的问题以及解决方法

//问题：
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时连接不到

//解决：
//解决方式1：直接包含.cpp文件
//解决方式2：将申明和实现写到同一个文件中，并更改后缀名为.hpp,hpp是约定的名称，并不是强制的

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
//	cout << "姓名：" << m_Name << "年龄：" << m_Age << endl;
//}

void test01()
{
	Person<string, int> s1("猪八戒22", 90);
	s1.showPerson();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
