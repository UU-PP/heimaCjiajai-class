#include <iostream>
using namespace std;

//运算符重载的方式有 成员函数重载 和 全局函数重载
//左移运算符重载

class Person
{
	friend ostream & operator<< (ostream &out, Person &p);//友元函数能够访问类的私有成员

public:
	//有参构造
	Person(int a,int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//利用成员函数重载 左移运算符		p.operator<<(cout)	简化版本 p<<cout
	//不会利用成员函数重载函数<<运算符，因为无法实现 cout 在左侧
	//void operator<<(cout)
	//{

	//}
	int m_A;
	int m_B;
};

//只能利用全局函数重载左移运算符
ostream & operator<< (ostream &out, Person &p)	//本质 operator<<(cout,p) 简化 couture<<p
{
	out << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
	return out;
}

void test01()
{
	Person p(100,100);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
