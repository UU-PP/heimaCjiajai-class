#include <iostream>
using namespace std;
#include <string>
 
//继承中的构造和析构的顺序

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}
	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}
	~Son()
	{
		cout << "Son的析构函数" << endl;
	}
};

void test01()
{
	//继承中的构造和析构顺序 如下
	//先构造父类，在构造子类，析构的顺序与构造的顺序相反
	Son son;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
