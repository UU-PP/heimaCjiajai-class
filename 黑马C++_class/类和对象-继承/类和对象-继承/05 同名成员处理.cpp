#include <iostream>
using namespace std;
#include <string>

//�̳���ͬ����Ա�Ĵ���ʽ

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func �ĵ���" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a) �ĵ���" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son-func �ĵ���" << endl;
	}
	

	int m_A;
};

//ͬ����Ա���ԵĴ���ʽ
void test01()
{
	Son s;
	cout << "m_A of s = " << s.m_A << endl;
	//���ͨ��������� ���ʵ�������ͬ����Ա ��Ҫ�ڳ�Աǰ��������
	cout << "m_A of Base = " << s.Base::m_A << endl;
}

//ͬ���ĳ�Ա��������ʽ
void test02()
{
	Son s1;
	s1.func();//ֱ�ӵ��� ���õ��������еĳ�Ա����
	s1.Base::func();//ͨ�����������ʽ ��ӵ��ø����� �ĳ�Ա����
	//s1.func(1);//���� ��Ϊ��������г��ָ���ͬ���ĳ�Ա���� �����ͬ����Ա��Ӱ�ص������� ����ͬ����Ա�������������صĳ�Ա������
	//�����Ҫ���ʵ������б����ص�ͬ�����ó�Ա���� ��Ҫ��������
}
int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
//�ܽ�
//1������������ֱ�ӷ��ʵ�������ͬ����Ա
//2������������������Է��ʵ�����ͬ����Ա
//3���������븸��ӵ��ͬ���ĳ�Ա���� ��������ظ�����ͬ����Ա���� ����������Է��ʵ�������ͬ������