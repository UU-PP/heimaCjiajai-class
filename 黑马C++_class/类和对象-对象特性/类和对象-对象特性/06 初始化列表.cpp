#include <iostream>
using namespace std;

//�б��ʼ��
class Person
{
public:

	//��ͳ��ʼ������
	/*Person(int a, int b, int c)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	//��ʼ���б��ʼ������
	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
	{

	}
	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	//Person p(10, 20, 30);
	Person p(22,3,32);
	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
