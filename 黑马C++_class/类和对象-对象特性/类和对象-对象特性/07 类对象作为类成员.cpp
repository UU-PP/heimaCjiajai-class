#include <iostream>
using namespace std;
#include <string>

//类对象作为类成员

//手机类
class Phone
{
public:
	//默认构造
	Phone(string pName)
	{
		m_PName = pName;
		cout << "Phone 构造函数的调用" << endl;
	}

	//析构函数
	~Phone()
	{
		cout << "Phone 析构函数的调用" << endl;
	}

	string m_PName;
};

//人类
class Person
{
public:

	//Phone m_Phone = pName  隐式转换法
	Person(string Name, string pName) :m_Name(Name), m_Phone(pName)
	{
		cout << "Person 构造函数的调用" << endl; 
	}

	//姓名
	string m_Name;
	//手机
	Phone m_Phone;

	//析构函数
	~Person()
	{
		cout << "Person 析构函数的调用" << endl;
	}
};

//当其他类对象作为本类成员，构造的时候线构造类对象，再构造本身，
//析构时，先析构成员对象，再析构本类对象
void test01()
{ 
	Person p("张三", "苹果MAX");

	cout << p.m_Name << "拿着： " << p.m_Phone.m_PName << endl;
}

int main(void)
{

	test01();
	system("pause");

	return 0;
}
