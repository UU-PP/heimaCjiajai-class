#include <iostream>
using namespace std;
#include <string>

//ģ���г�Ա��������ʱ��

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

//��ģ��
template <class T>
class MyClass
{
public:
	T obj;

	//��ģ���еĳ�Ա������������һ��ʼ�ʹ����ģ�������ģ���е���ʱ�ٲ�����
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};

int main(void)
{
	MyClass<Person1> p1;
	p1.func1();

	system("pause");

	return 0;
}
