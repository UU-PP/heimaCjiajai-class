#include <iostream>
using namespace std;
#include <string>

//学习目标：能够掌握类模板中的成员函数类外实现

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age);//类外实现
	/*{
		m_Name = name;
		m_Age = age;
	}*/

	void showPerson();//类外实现
	/*{
		cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
	}*/

	T1 m_Name;
	T2 m_Age;
};

//构造函数类外实现
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	m_Name = name;
	m_Age = age;
}
//成员函数类外实现
template<class T1,class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名：" << this->m_Name << "年龄：" << this->m_Age << endl;
}
void test01()
{
	Person<string,int> s("大爷 ",90);
	s.showPerson();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//总结：类模板中成员函数类外实现时，需要加上模板参数列表