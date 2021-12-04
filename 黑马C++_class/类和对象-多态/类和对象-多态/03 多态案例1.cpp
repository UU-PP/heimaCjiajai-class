#include <iostream>
using namespace std;
#include <string>

//�ֱ�������ͨд���Ͷ�̬д������ ʵ�ּ�����

//��ͨд��
class Claculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "+")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//�����Ҫ��չ�µĹ��� ��Ҫ�޸�Դ��
		//�������Ŀ��������� �ᳫ ����ԭ��
		//����ԭ�� ������չ���п��� ���޸Ľ��йر�
	}

	int m_Num1;//������1
	int m_Num2;//������2
};

void test01()
{
	//���� ����������
	Claculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}
//���ö�̬��ʵ�ּ�����
//��̬�ĺô���
//1����֯�ṹ����
//2���ɶ���ǿ
//ʵ�ּ�����������
class  AbstractClaculator
{
public:
	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};
//�ӷ���
class Addclaculator : public AbstractClaculator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//������
class Divclaculator : public AbstractClaculator
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷���
class Mulclaculator : public AbstractClaculator
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	AbstractClaculator *abc = new Addclaculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;//����ָ����������

	abc = new Divclaculator;
	abc->m_Num1 = 11;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	abc = new Mulclaculator;
	abc->m_Num1 = 11;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;
}
int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
//�ܽ᣺C++������ �ᳫ���ö�̬��Ƴ���ܹ� ��Ϊ�����ŵ�ܶ�