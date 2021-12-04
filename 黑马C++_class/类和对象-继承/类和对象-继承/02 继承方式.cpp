#include <iostream>
using namespace std;
#include <string>

//继承方式
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//1、公共保护方式
class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_B = 10;//父类中保护权限成员 到子类中依然是保护权限
		//m_C = 10;//父类中私有权限成员 子类不可访问
	}
};
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//到Son1中 m_B是保护权限 类外访问不到
}

//2、保护继承方法
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员 到子类中变为保护权限
		m_B = 100;//父类中保护成员 到子类中变为保护权限
		//m_C = 100;//父类中私有成员 子类不可访问
	}
};
void test02()
{
	Son2 s1;
	//s1.m_A = 100;//在Son2中 m_A变为保护权限 因此类外访问不到 
	//s1.m_B = 100;//在Son2中 m_B也是个保护权限 不可访问
}

//3、私有继承方法
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : protected Base3
{
public:
	void func()
	{
		m_A = 100;//父类中公共成员 到子类中变为私有权限
		m_B = 100;//父类中保护成员 到子类中变为私有权限
		//m_C = 100;//父类中私有成员 子类不可访问
	}
};

class GrandSon3 : public Son3
{
public:
	void func()
	{
		m_A = 100;//到了Son3中 m_A变为私有，即使是儿子 也是访问不到的
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 100;//到Son3中 m_A变为私有成员 类外访问不到
	//s1.m_B = 100;//到Son3中 m_B变为私有成员
}

int main(void)
{


	system("pause");

	return 0;
}
