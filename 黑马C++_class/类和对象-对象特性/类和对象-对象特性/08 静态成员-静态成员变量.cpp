#include <iostream>
using namespace std;

//��̬��Ա����,ÿһ�εĸı䶼�̳�����һ�εĸı���ֵ
class Person
{
public:

	//1�����ж��󶼹���һ������
	//2������׶ξͷ����ڴ�
	//3�����������������ʼ������

	//��������
	static int m_A; //����Ȩ�������ǿ��Է��ʵģ�˽��Ȩ�������ǲ����Է��ʵ�

private:
	static int m_B;
};

//�����ʼ��
int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
	Person p;
	cout << "p��ֵ��" << p.m_A << endl;

	Person p1;
	p1.m_A = 200;
	cout << "p1��ֵ��" << p1.m_A << endl;
}

void test02()
{
	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
	//��˾�̬��Ա���������ַ��ʷ�ʽ

	//1��ͨ��������з���
	//Person p;
	//cout << p.m_A << endl;

	//2��ͨ���������з���(��ʱ����䵱������)
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;	//����˽�о�̬������Ա���ⲻ�ɷ���
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
