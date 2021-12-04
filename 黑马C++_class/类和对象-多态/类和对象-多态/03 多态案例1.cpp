#include <iostream>
using namespace std;
#include <string>

//分别利用普通写法和多态写法技术 实现计算器

//普通写法
class Claculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "+")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想要扩展新的功能 需要修改源码
		//在真正的开发过程中 提倡 开闭原则
		//开闭原则 ：对扩展进行开放 对修改进行关闭
	}

	int m_Num1;//操作数1
	int m_Num2;//操作数2
};

void test01()
{
	//创建 计算器对象
	Claculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}
//利用多态是实现计算器
//多态的好处：
//1、组织结构清晰
//2、可读性强
//实现计算器抽象类
class  AbstractClaculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};
//加法类
class Addclaculator : public AbstractClaculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法类
class Divclaculator : public AbstractClaculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//乘法类
class Mulclaculator : public AbstractClaculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	AbstractClaculator *abc = new Addclaculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;//将该指针的内容清除

	abc = new Divclaculator;
	abc->m_Num1 = 11;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new Mulclaculator;
	abc->m_Num1 = 11;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}
int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
//总结：C++开发中 提倡利用多态设计程序架构 因为多塔优点很多