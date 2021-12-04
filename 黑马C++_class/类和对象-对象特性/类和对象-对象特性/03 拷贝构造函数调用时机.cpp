#include <iostream>
using namespace std;

//拷贝构造函数调用时机

class Person
{
public:
	Person()
	{
		cout << "Person 默认无参构造函数的调用" << endl;
	}

	Person(int age)
	{
		m_Age = age;
		cout << "Person 有参数构造函数的调用" << endl;
	}

	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person 拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}

	int m_Age;
};

//1、使用一个已近创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "P2的年龄为： " << p2.m_Age << endl;
}

//2、值传递的方式给函数参数传值
void doWork(Person p)
{

}

void test02()
{
	Person p2;
	doWork(p2);	//当调用doWork时 实参p2是以拷贝的方式 传给doWork的形参p的
}

//3、值方式返回局部对象
Person doWork()
{
	Person p;
	return p;
}

void test03()
{
	Person p3 = doWork(); //在调用doWork()函数后，编译器会把doWork()中的p拷贝到test03中的p3
}

int main(void)
{

	//test01();
	//test02();
	test03();
	system("pause");

	return 0;
}
