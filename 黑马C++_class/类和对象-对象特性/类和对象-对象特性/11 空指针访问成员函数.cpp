#include <iostream>
using namespace std;

class Person
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//报错的原因是传入的指针为NULL
		//为了防止崩，提高代码的健壮性
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << m_Age << endl;
	}

	int m_Age;
};

void test01()
{
	Person *p = NULL;
	p->showClassName();

	p->showPersonAge();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
