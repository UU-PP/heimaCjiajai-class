#include <iostream>
using namespace std;
#include <string>

//���ص��������

//�Զ�������
class MyInteger
{
	friend ostream & operator<< (ostream & out, MyInteger & myint);
	//friend MyInteger & operator++ (MyInteger p);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����  ����������Ϊ��һֱ��һ�����ݽ��е���
	MyInteger & operator++()
	{
		m_Num++;
		return *this;
	}

	//���غ���++�����
	//voidoperator++(int) int����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int)	//��������& ����Ϊtemp�Ǿֲ�����operator++ ������Ϻ�temp����ᱻ�ͷŵ������������ǷǷ�����
	{
		//�� ��¼��ʱ�Ľ��
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��󽫼�¼���������
		return temp;
	}
private:
	int m_Num;
};

//����<<�����
ostream & operator<< (ostream & out, MyInteger & myint)
{
	cout << myint.m_Num;
	return out;
}

//����++�����
//MyInteger & operator++ (MyInteger p)
//{
//	++p.m_Num;
//	return p;
//}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
//ǰ�õ������ص���Ӧ�ã����õ������ص���ֵ