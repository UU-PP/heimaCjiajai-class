#include <iostream>
using namespace std;
#include <string>

//多态的原理剖析

//动物类
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat : public Animal
{
public:

	//重写个概念： 函数返回值类型 函数名 参数列表 要完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定 在编译器阶段就确定了函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//那么怎么晚绑定呢，需要在将父类中的相关函数改为虚函数 

//动态多态满足的条件
//1、有继承关系
//2、子类重写父类的虚函数

//动态多态的使用
//利用父类的指针或引用 来执行 子类的对象
void doSpeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
}

void test02()
{
	//在未加virtual 之前 
	//cout << "sizeof Animal = " << sizeof(Animal) << endl; //为1
	//在加virtual 之后
	cout << "sizeof Animal = " << sizeof(Animal) << endl; //为4
}
int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
