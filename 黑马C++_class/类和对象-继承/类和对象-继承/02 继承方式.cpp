#include <iostream>
using namespace std;
#include <string>

//�̳з�ʽ
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//1������������ʽ
class Son1 : public Base1
{
public:
	void func()
	{
		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
		m_B = 10;//�����б���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
		//m_C = 10;//������˽��Ȩ�޳�Ա ���಻�ɷ���
	}
};
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//��Son1�� m_B�Ǳ���Ȩ�� ������ʲ���
}

//2�������̳з���
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա �������б�Ϊ����Ȩ��
		m_B = 100;//�����б�����Ա �������б�Ϊ����Ȩ��
		//m_C = 100;//������˽�г�Ա ���಻�ɷ���
	}
};
void test02()
{
	Son2 s1;
	//s1.m_A = 100;//��Son2�� m_A��Ϊ����Ȩ�� ���������ʲ��� 
	//s1.m_B = 100;//��Son2�� m_BҲ�Ǹ�����Ȩ�� ���ɷ���
}

//3��˽�м̳з���
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : protected Base3
{
public:
	void func()
	{
		m_A = 100;//�����й�����Ա �������б�Ϊ˽��Ȩ��
		m_B = 100;//�����б�����Ա �������б�Ϊ˽��Ȩ��
		//m_C = 100;//������˽�г�Ա ���಻�ɷ���
	}
};

class GrandSon3 : public Son3
{
public:
	void func()
	{
		m_A = 100;//����Son3�� m_A��Ϊ˽�У���ʹ�Ƕ��� Ҳ�Ƿ��ʲ�����
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 100;//��Son3�� m_A��Ϊ˽�г�Ա ������ʲ���
	//s1.m_B = 100;//��Son3�� m_B��Ϊ˽�г�Ա
}

int main(void)
{


	system("pause");

	return 0;
}
