#include <iostream>
using namespace std;
#include <string>

//模板的特点：
//模板不可以直接使用，他只是个框架
//模板的通用并不是万能的

//函数模板

//交换两个整形函数
void swapInt(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

//交换两个浮点型函数
void swapDouble(double &a, double &b)
{
	double temp = a;
	b = a;
	a = temp;
}

//函数模板
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}


//void test01()
//{
//	int a = 10;
//	int b = 20;
//	swapInt(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//}

void test02()
{
	int a = 10;
	int b = 20;
	//利用函数模板交换
	//两种方式使用函数模板

	//1、自动类型推导 
	//mySwap(a, b);

	//2、显示指定类型
	mySwap<int>(a, b);
	cout << "a:" << a << " b:" << b << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
