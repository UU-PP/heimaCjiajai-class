#include <iostream>
using namespace std;

//����Ա����
class Person
{
public:

	//��Ա����
	//thisָ��ı��� ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const�� ���ε���thisָ�� ��ָ��ָ���ֵҲ�������޸�
	void showPerson() const//�����const��ʾ thisָ�벻�����޸�ָ��ָ��Ķ����ֵ
	{
		m_B = 1000;
		//m_A = 200;
		//this-> NULL;//thisָ�벻�����޸�ָ���ָ��
	}

	void func()
	{
		m_A = 20;
	}

	int m_A;
	mutable int m_B;	//�������  ��ʹ�ڳ�������  Ҳ�����������ֵ,�ӹؼ���mutable
};

//������
void test02()
{
	const Person p;	//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;	//m_AΪ��ͨ�������ڳ������в��ɸ���
	p.m_B = 100;	//m_B������ֵ �ڳ�������Ҳ�����޸�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	p.func();	//������ �����Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸ĳ�Ա����
}

int main(void)
{


	system("pause");

	return 0;
}
