#include <iostream>
using namespace std;

//深拷贝和浅拷贝

class Person
{
public:

	//默认构造
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	//有参构造
	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height); //在堆区创建一个地址给height，而关键字new返回的是该height所在堆区的地址，用之前创建的m_Height指针来接收它即可 
		cout << "Person的有参构造函数调用" << endl;
	}

	//自己实现一个拷贝构造函数来解决 浅拷贝带来的问题
	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		//m_Height = p.m_Height  //这是浅拷贝的操作
		//深拷贝的操作为：
		m_Height = new int(*p.m_Height);
		m_Age = p.m_Age;
	}

	~Person()
	{
		//析构代码的作用：将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
	int *m_Height;
};

void test01()
{
	Person p1(18,180);
	cout << "p1的年龄为： " << p1.m_Age << " p1的身高为： " << *p1.m_Height << endl;

	Person p2(p1); //没有定义拷贝构造函数时，会使用编译器自定义的拷贝构造（叫作浅拷贝）
	cout << "p2的年龄为： " << p2.m_Age << " p2的身高为： " << *p2.m_Height << endl;

}
 
int main(void)
{

	test01();
	system("pause");

	return 0;
}
