#include <iostream>
using namespace std;
#include <string>

//��ģ��Ļ����﷨

//��ģ��
template <class nameType,class ageType>
class Person
{
public:
	Person(nameType name, ageType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name is " << m_Name << "age is " << m_Age << endl;
 	}

	nameType m_Name;
	ageType m_Age;
};

void test01()
{
	Person<string, int> p1("�����",999);

	p1.showPerson();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
