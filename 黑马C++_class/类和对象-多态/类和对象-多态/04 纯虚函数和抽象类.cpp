#include <iostream>
using namespace std;
#include <string>

//纯虚函数和抽象类
//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
//因此 可以将 虚函数 改为 纯虚函数
//纯虚函数语法：virtual 返回值类型 函数名 （参数列表）= 0；
//当类中有了 纯虚函数 这个类也称为 抽象类

//抽象类特点
//1、无法实例化对象
//2、子类必须重写抽象类中的纯虚函数 否则也属于抽象类

class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数 这个类称之为 抽象类
	//抽象类特点：
	//1、无法实例化对象
	//2、抽象类的子类 必须要重写父类中的虚函数 否也属于抽象类
	virtual void func() = 0;
};

class Son : public Base
{
public:
	virtual void func() 
	{
		cout << "func 函数的调用" << endl;
	};
};

void test01()
{

	//Base b;//error  	抽象类无法实例化对象
	//new Base;//error	抽象类无法实例化对象

	//在没有重写父类中的虚函数时 Son其实也是抽象类
	//new Son; 

	Base *base = new Son;
	base->func();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
