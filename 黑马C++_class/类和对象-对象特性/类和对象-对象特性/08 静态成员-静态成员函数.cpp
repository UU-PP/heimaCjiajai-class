#include <iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100; //��̬��Ա���� ���Է��ʾ�̬��Ա����
		//m_B = 200; //��̬��Ա���������Է��� �Ǿ�̬��Ա����

		cout << "static void func����" << endl;
	}


	static int m_A;	//��̬��Ա���������������������ʼ����
	int m_B;//�Ǿ�̬��Ա����

private:
	static void func2()
	{
		cout << "func2�ĵ���" << endl;
	}

};

int m_A = 10;

void test01()
{
	//1��ͨ���������
	//Person p;
	//p.func();

	//2��ͨ����������(��Ϊ��������ĳһ����ĺ���)
	Person::func();
	//Person::func2();  //˽��Ȩ�޷��ʲ���
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
