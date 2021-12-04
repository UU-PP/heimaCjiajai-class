#include <iostream>
using namespace std;
#include <string>

//函数模板注意事项
//1、自动类型推导，必须推导出一致的数据类型T才能使用
template <typename T>
void mySwap(T &a, T &b)
{
	T temp;
	tmep = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//mySwap(a, b);//正确!
	//mySwap(a, c);//错误！推导不出于T一致的数据类型
}

//2、模板必须要确定出T的数据类型，才能使用
template <typename T>
void func()
{
	cout << "nihao" << endl;
}
void test02()
{
	//func();//错误，因为没有确定模板中T的具体类型是啥
	func<int>();//正确，用形式数据类型的方式 指明模板中T的具体数据类型是啥
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
