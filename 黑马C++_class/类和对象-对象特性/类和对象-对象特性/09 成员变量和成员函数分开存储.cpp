#include <iostream>
using namespace std;

//��Ա���� �� ��Ա���� �Ƿֿ��洢�� 

class Person
{
	int m_A;//�Ǿ�̬��Ա���� ������Ķ�����

	static int m_B;//��̬��Ա����  �������������

	void func() {}; //�Ǿ�̬��Ա����  �������������

	static void func2() {}; //��̬��Ա����  ��������Ķ�����
};

int m_B = 100;

void test01()
{
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ�� 1
	//C++���������ÿ���ռ����Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ�ռ��ַ
	cout << "size of p: " << sizeof(p);
}

void test02()
{
	Person p2;
	cout << "size of p2: " << sizeof(p2) << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
