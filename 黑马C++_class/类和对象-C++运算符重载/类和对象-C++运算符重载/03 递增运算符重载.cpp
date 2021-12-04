#include <iostream>
using namespace std;
#include <string>

//重载递增运算符

//自定义整形
class MyInteger
{
	friend ostream & operator<< (ostream & out, MyInteger & myint);
	//friend MyInteger & operator++ (MyInteger p);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符  返回引用是为了一直对一个数据进行递增
	MyInteger & operator++()
	{
		m_Num++;
		return *this;
	}

	//重载后置++运算符
	//voidoperator++(int) int代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int)	//不用引用& 是因为temp是局部对象，operator++ 调用完毕后，temp对象会被释放掉，返回引用是非法操作
	{
		//先 记录当时的结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}
private:
	int m_Num;
};

//重载<<运算符
ostream & operator<< (ostream & out, MyInteger & myint)
{
	cout << myint.m_Num;
	return out;
}

//重载++运算符
//MyInteger & operator++ (MyInteger p)
//{
//	++p.m_Num;
//	return p;
//}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
//前置递增返回的是应用，后置递增返回的是值