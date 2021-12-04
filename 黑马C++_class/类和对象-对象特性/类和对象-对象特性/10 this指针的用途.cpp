#include <iostream>
using namespace std;

//this指针的使用

//1、解决名称冲突
class Person
{
public:
	Person(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this->age = age;
	}

	Person& PersonAddAge(Person &p)//注意这里是引用返回，而不是值返回
	{
		this->age += p.age;

		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}

	int age;
};

//2、返回对象本身 *this
void test02()
{
	Person p1(10);

	Person p2(10);

	//链式编程思想
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << "p1的年龄为： " << p1.age << endl;
}

void test01()
{
	Person p(18);
	cout << "p的年龄为：" << p.age << endl;
}

int main(void)
{
	test02();

	system("pause");

	return 0;
}
