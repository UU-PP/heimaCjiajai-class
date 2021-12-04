#include <iostream>
using namespace std;
#include <string>

//重载关系运算符

class Person
{
public:
	Person(string name,int age)
	{
		m_Name = name;
		m_Age = age;
	}

	//重载 == 号
	bool operator==(Person &p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
			return true;
		else
			return false;
	}

	//重载 != 号
	bool operator!=(Person &p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
			return false;
		else
			return true;
	}

	string m_Name;
	int m_Age;
};

void test01()
{
	Person p1("Tom", 18);
	Person p2("Tom", 18);
	if (p1 == p2)
	{
		cout << "p1 and p2 are same" << endl;
	}
	else
	{
		cout << "p1 and p2 are not same" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1 and p2 are not same" << endl;
	}
	else
	{
		cout << "p1 and p2 are same" << endl;
	}
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
