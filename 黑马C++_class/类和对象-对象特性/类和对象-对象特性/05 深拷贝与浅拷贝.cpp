#include <iostream>
using namespace std;

//�����ǳ����

class Person
{
public:

	//Ĭ�Ϲ���
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	//�вι���
	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height); //�ڶ�������һ����ַ��height�����ؼ���new���ص��Ǹ�height���ڶ����ĵ�ַ����֮ǰ������m_Heightָ�������������� 
		cout << "Person���вι��캯������" << endl;
	}

	//�Լ�ʵ��һ���������캯������� ǳ��������������
	Person(const Person &p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		//m_Height = p.m_Height  //����ǳ�����Ĳ���
		//����Ĳ���Ϊ��
		m_Height = new int(*p.m_Height);
		m_Age = p.m_Age;
	}

	~Person()
	{
		//������������ã����������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person��������������" << endl;
	}

	int m_Age;
	int *m_Height;
};

void test01()
{
	Person p1(18,180);
	cout << "p1������Ϊ�� " << p1.m_Age << " p1�����Ϊ�� " << *p1.m_Height << endl;

	Person p2(p1); //û�ж��忽�����캯��ʱ����ʹ�ñ������Զ���Ŀ������죨����ǳ������
	cout << "p2������Ϊ�� " << p2.m_Age << " p2�����Ϊ�� " << *p2.m_Height << endl;

}
 
int main(void)
{

	test01();
	system("pause");

	return 0;
}
