#include <iostream>
using namespace std;

//静态成员变量,每一次的改变都继承于上一次的改变后的值
class Person
{
public:

	//1、所有对象都共享一份数据
	//2、编译阶段就分配内存
	//3、类内申明，类外初始化操作

	//类内申明
	static int m_A; //公共权限类外是可以访问的，私有权限类外是不可以访问的

private:
	static int m_B;
};

//类外初始化
int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
	Person p;
	cout << "p的值：" << p.m_A << endl;

	Person p1;
	p1.m_A = 200;
	cout << "p1的值：" << p1.m_A << endl;
}

void test02()
{
	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式

	//1、通过对象进行访问
	//Person p;
	//cout << p.m_A << endl;

	//2、通过类名进行访问(此时的类充当作用域)
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;	//错误，私有静态变量成员类外不可访问
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
