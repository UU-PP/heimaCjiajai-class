#include <iostream>
using namespace std;

//�Ӻ����������
class Person
{
public:
	//1����Ա��������+��
	/*Person operator+(Person &p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/

	int m_A;
	int m_B;

};

	//2��ȫ�ֺ�������+��
Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B; 
		return temp;
}
	
	//3���������صİ汾
Person operator+(Person &p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//��Ա�������صı��ʵ���
	//Person p3 = p1.operator(p2);

	//ȫ�ֺ������صı��ʵ���
	//Person p3 = operator+(p1, p2);
	
	//Person p3 = p1 + p2;//�ȼ��� Person p3 = p1.operator(p2);

	//���غ����ı��ʵ���
	//Person p3 = operator+(p1, 100);

	Person p3 = p1 + 100;

	cout << "p3.m_A: " << p3.m_A << endl;
	cout << "p3.m_B: " << p3.m_B << endl;
}




int main(void)
{
	test01();

	system("pause");

	return 0;
}

//�ܽ�
//1�����������������͵ı��ʽ��������ǲ����Ըı��
//2����Ҫ�������������