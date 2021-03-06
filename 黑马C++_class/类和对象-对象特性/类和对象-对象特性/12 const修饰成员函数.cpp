#include <iostream>
using namespace std;

//常成员函数
class Person
{
public:

	//成员函数
	//this指针的本质 是指针常量  指针的指向是不可以修改的
	//在成员函数后面加const， 修饰的是this指向， 让指针指向的值也不可以修改
	void showPerson() const//这里的const表示 this指针不可以修改指针指向的对象的值
	{
		m_B = 1000;
		//m_A = 200;
		//this-> NULL;//this指针不可以修改指针的指向
	}

	void func()
	{
		m_A = 20;
	}

	int m_A;
	mutable int m_B;	//特殊变量  即使在常函数中  也可以修饰这个值,加关键字mutable
};

//常对象
void test02()
{
	const Person p;	//在对象前加const，变为常对象
	//p.m_A = 100;	//m_A为普通函数，在常对象中不可更改
	p.m_B = 100;	//m_B是特殊值 在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	p.func();	//常对象 不可以调用普通成员函数，因为普通成员函数可以修改成员属性
}

int main(void)
{


	system("pause");

	return 0;
}
