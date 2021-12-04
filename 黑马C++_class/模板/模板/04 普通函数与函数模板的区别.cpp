#include <iostream>
using namespace std;
#include <string>

//普通函数与函数模板区别

//1、普通函数调用可以发生隐式类型转换
//2、函数模板 用自动类型推导，不可以发生隐式类型转换
//3、函数模板 用显示指定类型，可以发生隐式类型转换

//普通函数
int myAdd01(int a, int b)
{
	return a + b;
}

//函数模板
template <typename T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	//普通函数调用，可以发生隐式类型转换
	cout << "a+b= " << myAdd01(a, b) << endl;
	cout << "a+c= " << myAdd01(a, c) << endl;

	//函数模板 自动类型推导
	//cout << "a+c=" << myAdd02(a, c) << endl;//出错，模板类型T不确定

	//函数模板 显示指定类型
	cout << "a+c= " << myAdd02<int>(a, c) << endl;//没有报错，说明显示指定类型的方法，可以使得函数参数进行 隐式类型装好
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//总结：建议使用显示指定类型的方式，调用函数模板，因为可以自己确定通用类型T