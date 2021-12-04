#include <iostream>
using namespace std;
#include <string>

class Person
{
public:

	Person(int age)
	{
		m_Age = new int(age);
	}

	int *m_Age;
};

void test01()
{
	Person p1(18);
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
