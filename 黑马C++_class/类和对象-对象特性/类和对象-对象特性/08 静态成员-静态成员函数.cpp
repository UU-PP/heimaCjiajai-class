#include <iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100; //静态成员函数 可以访问静态成员变量
		//m_B = 200; //静态成员函数不可以访问 非静态成员变量

		cout << "static void func调用" << endl;
	}


	static int m_A;	//静态成员变量（类内申明，类外初始化）
	int m_B;//非静态成员变量

private:
	static void func2()
	{
		cout << "func2的调用" << endl;
	}

};

int m_A = 10;

void test01()
{
	//1、通过对象访问
	//Person p;
	//p.func();

	//2、通过类名访问(因为它不属于某一个类的函数)
	Person::func();
	//Person::func2();  //私有权限访问不到
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
