#include <iostream>
using namespace std;
#include <string>

//模板中成员函数创建时机

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

//类模板
template <class T>
class MyClass
{
public:
	T obj;

	//类模板中的成员函数，并不是一开始就创建的，而是在模板中调用时再产生的
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

int main(void)
{
	MyClass<Person1> p1;
	p1.func1();

	system("pause");

	return 0;
}
