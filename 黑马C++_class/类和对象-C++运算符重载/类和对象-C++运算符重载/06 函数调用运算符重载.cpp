#include <iostream>
using namespace std;
#include <string>

//函数调用运算符（）也可以重载
//由于重载后使用的方法非常的像 函数的调用 因此称为仿函数
//仿函数没有固定的写法 非常的灵活


//打印输出类
class MyPrint
{
public:
	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void operator02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;

	myPrint("hello world!");

	operator02("hello");
}

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	cout << "ret ="  << ret << endl;

	//又
	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;//首先利用MyAdd（）定义一个匿名对象 然后调用该对象的 重载函数运算符
}
int main(void)
{
	test01();
	test02();

	system("pause");

	return 0;
}
