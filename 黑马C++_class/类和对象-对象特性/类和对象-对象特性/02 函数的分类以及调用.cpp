#include <iostream>
using namespace std;

//1、构造函数的分类及调用
//分类
//按照参数分类		有参构造 和 无参构造（默认构造）
//按照类型分类		普通构造 和 拷贝构造
class Person
{
public:
	//构造函数
	//普通构造-无参构造
	Person()
	{
		cout << "Person 的无参构造函数调用" << endl;
	}
	//普通构造-有参构造
	Person(int a)
	{
		age = a;
		cout << "Person 的有参构造函数调用" << endl;
	}
	//拷贝构造
	Person(const Person &p)
	{
		//将传入的人身上的所有属性 拷贝到我身上
		age = p.age;
		cout << "Person 的拷贝构造函数调用" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "Person 的析构函数调用" << endl;
	}

	int age;
};

//调用
void test01()
{
	//1、括号法（推荐使用）
	//Person p;	//默认构造函数调用
	//Person p2(10);	//有参构造函数调用
	//Person p3(p2);	//拷贝构造函数调用

	//注意事项
	//调用默认构造函数的时候，不要加（）
	//因为下面这行编译器会认为是个函数声明
	//Person p1();

	//2、显示法
	Person p1;
	Person p2 = Person(10); //有参构造
	Person p3 = Person(p2); //拷贝构造

	//Person(10);	//匿名对象	特点：当前行执行完毕后立即回收
	//cout << "qqq" << endl;

	//注意事项2
	//不要利用拷贝构造函数 初始化匿名对象 是因为编译器会认为Person(p3) === Person p3，即重复定义了p3对象

	//3、隐士转化法
	Person p4 = 10; //相当于 写了		Person p4 = Person(10);	有参构造
	Person p5 = p4; //拷贝构造
}

int main(void)
{

	test01();
	system("pause");

	return 0;
}
