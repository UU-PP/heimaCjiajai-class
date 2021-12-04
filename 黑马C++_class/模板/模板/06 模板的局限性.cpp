#include <iostream>
using namespace std;
#include <string>

//模板的局限性
//模板并不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现

//自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}

	string m_Name;
	int m_Age;
};

template <typename T>
bool myCompare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person &p1, Person &p2）
{
	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret == true)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不等" << endl;
	}
}

void test02()
{
	Person p1("大大", 18);
	Person p2("大大", 18);
	int ret = myCompare(p1, p2);
	if (ret == true)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不等" << endl;
	}
}

int main(void)
{
	//test01();
	//test02();

	system("pause");

	return 0;
}
//总结：
//1、利用具体化的模板，可以解决自定义类型的通用化
//2、学习模板不是为了写模板，而是在STL中能够运用系统提供的模板