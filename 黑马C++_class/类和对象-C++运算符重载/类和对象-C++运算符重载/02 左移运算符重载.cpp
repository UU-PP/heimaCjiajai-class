#include <iostream>
using namespace std;

//��������صķ�ʽ�� ��Ա�������� �� ȫ�ֺ�������
//�������������

class Person
{
	friend ostream & operator<< (ostream &out, Person &p);//��Ԫ�����ܹ��������˽�г�Ա

public:
	//�вι���
	Person(int a,int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//���ó�Ա�������� ���������		p.operator<<(cout)	�򻯰汾 p<<cout
	//�������ó�Ա�������غ���<<���������Ϊ�޷�ʵ�� cout �����
	//void operator<<(cout)
	//{

	//}
	int m_A;
	int m_B;
};

//ֻ������ȫ�ֺ����������������
ostream & operator<< (ostream &out, Person &p)	//���� operator<<(cout,p) �� couture<<p
{
	out << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
	return out;
}

void test01()
{
	Person p(100,100);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
