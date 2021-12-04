#include <iostream>
using namespace std;
#include <string>

//继承中的同名静态成员处理方式

class Base
{
public:
	static int m_A;//静态成员变量的特点： 1、编译阶段分配内存 2、所有对象共享同一份数据 3、类内申明类外初始化

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int)
	{
		cout << "Base - static void func(int)" << endl;
	}
};
int Base::m_A = 100;

class Son : public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200;

//同名的静态成员属性
void test01()
{
	//因为静态成员的数据是共享的 即可以通过对象访问 也可通过类访问
	//通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "Son下 m_A = " << s.m_A << endl;
	cout << "Base下 m_A = " << s.Base::m_A << endl;
	//通过类访问
	cout << "通过类名访问：" << endl;
	cout << "Son下 m_A = " << Son::m_A << endl;
	//第一个::代表通过类名方法访问 第二个::代表访问父类作用域下
	cout << "Base下 m_A = " << Base::m_A << endl;
}
//同名的静态成员函数
void test02()
{
	//通过对象的方式访问
	cout << "通过对象的方式访问" << endl;
	Son s;
	s.func();
	s.Base::func();
	//s.func(100);//error 子类中有同名func ，隐藏掉了父类中的同名函数func（int）
	//通过类名的方式访问
	cout << "通过类名的方式访问" << endl;
	Son::func();
	Son::Base::func();
	//子类中出现和父类同名静态成员函数，也会隐藏父类中所有的同名成员函数、
	//如果想访问父类中被隐藏的同名成员 需要加作用域
	s.Base::func(100);
	Son::Base::func(200);

}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
