#include <iostream>
using namespace std;
#include <string>

//�̳��е�ͬ����̬��Ա����ʽ

class Base
{
public:
	static int m_A;//��̬��Ա�������ص㣺 1������׶η����ڴ� 2�����ж�����ͬһ������ 3���������������ʼ��

	static void func()
	{
		cout << "Base - static void func()" << endl;
	}

	static void func(int)
	{
		cout << "Base - static void func(int)" << endl;
	}
};
int Base::m_A = 100;

class Son : public Base
{
public:
	static int m_A;

	static void func()
	{
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200;

//ͬ���ľ�̬��Ա����
void test01()
{
	//��Ϊ��̬��Ա�������ǹ���� ������ͨ��������� Ҳ��ͨ�������
	//ͨ���������
	cout << "ͨ��������ʣ�" << endl;
	Son s;
	cout << "Son�� m_A = " << s.m_A << endl;
	cout << "Base�� m_A = " << s.Base::m_A << endl;
	//ͨ�������
	cout << "ͨ���������ʣ�" << endl;
	cout << "Son�� m_A = " << Son::m_A << endl;
	//��һ��::����ͨ�������������� �ڶ���::������ʸ�����������
	cout << "Base�� m_A = " << Base::m_A << endl;
}
//ͬ���ľ�̬��Ա����
void test02()
{
	//ͨ������ķ�ʽ����
	cout << "ͨ������ķ�ʽ����" << endl;
	Son s;
	s.func();
	s.Base::func();
	//s.func(100);//error ��������ͬ��func �����ص��˸����е�ͬ������func��int��
	//ͨ�������ķ�ʽ����
	cout << "ͨ�������ķ�ʽ����" << endl;
	Son::func();
	Son::Base::func();
	//�����г��ֺ͸���ͬ����̬��Ա������Ҳ�����ظ��������е�ͬ����Ա������
	//�������ʸ����б����ص�ͬ����Ա ��Ҫ��������
	s.Base::func(100);
	Son::Base::func(200);

}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
