#include <iostream>
using namespace std;
#include <string>

//普通函数与函数模板的调用规则

//调用规则如下（这是针对于编译器而言的）
//1、如果函数模板和普通函数都可以实现，优先调用普通函数（
//2、可以通过空模板参数列表来强制调用函数模板
//3、函数模板也可以发生重载
//4、如果函数模板可以产生更好的匹配，优先调用函数模板

//普通函数
void myPrint(int a, int b)
{
	cout << "普通函数的调用" << endl;
}

//函数模板
template <typename T>
void myPrint(T a, T b)
{
	cout << "函数模板的调用" << endl;
}

//重载函数模板
template <typename T>
void myPrint(T a, T b,T c)
{
	cout << "函数重载模板的调用" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;
	myPrint(a, b);

	//通过空模板参数列表来强制调用函数模板
	myPrint<>(a, b);//格式：函数后面加<>符号即可

	myPrint(a, b, 100);

	//4、如果函数模板可以产生更好的匹配，优先调用函数模板
	char c = '1';
	char d = '2';
	myPrint(c, d);//调用普通函数 还需要进行隐式转换 太麻烦 还不如直接调用函数模板
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//总结：既然提供了函数的模板，最好就不要提供普通函数，否则容易出现二义性