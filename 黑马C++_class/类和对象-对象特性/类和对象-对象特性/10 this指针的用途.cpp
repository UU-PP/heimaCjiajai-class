#include <iostream>
using namespace std;

//thisָ���ʹ��

//1��������Ƴ�ͻ
class Person
{
public:
	Person(int age)
	{
		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
		this->age = age;
	}

	Person& PersonAddAge(Person &p)//ע�����������÷��أ�������ֵ����
	{
		this->age += p.age;

		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}

	int age;
};

//2�����ض����� *this
void test02()
{
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << "p1������Ϊ�� " << p1.age << endl;
}

void test01()
{
	Person p(18);
	cout << "p������Ϊ��" << p.age << endl;
}

int main(void)
{
	test02();

	system("pause");

	return 0;
}
