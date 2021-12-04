#include <iostream>
using namespace std;
#include <string>

//继承中同名成员的处理方式

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func 的调用" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a) 的调用" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func 的调用" << endl;
	}
	

	int m_A;
};

//同名成员属性的处理方式
void test01()
{
	Son s;
	cout << "m_A of s = " << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员 需要在成员前加作用域
	cout << "m_A of Base = " << s.Base::m_A << endl;
}

//同名的成员函数处理方式
void test02()
{
	Son s1;
	s1.func();//直接调用 调用的是子类中的成员函数
	s1.Base::func();//通过作用域的形式 间接调用父类中 的成员函数
	//s1.func(1);//出错 因为如果子类中出现父类同名的成员函数 子类的同名成员会影藏掉父类中 所以同名成员函数（包括重载的成员函数）
	//如果想要访问到父类中被隐藏的同名常用成员函数 需要加作用域
}
int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
//总结
//1、子类对象可以直接访问到子类中同名成员
//2、子类对象加作用域可以访问到父类同名成员
//3、当子类与父类拥有同名的成员函数 子类会隐藏父类中同名成员函数 加作用域可以访问到父类中同名函数