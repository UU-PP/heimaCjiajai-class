#include <iostream>
#include <string>
using namespace std;


//��Ա��������Ϊ˽��
//1�������Լ����ƶ�дȨ��
//2������д���Լ�����ݵ���Ч��

//�������
class Person
{
public:

	//��������
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}
	//��ȡ����
	int getAge()
	{
		return m_Age;
	}
	//��������
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			cout << "�������������" << endl;
			m_Age = 0;
			return;
		}
		m_Age = age;
	}
	//��������
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:

	//����	�ɶ���д
	string m_Name;
	//����	ֻ��
	int m_Age;
	//����	ֻд
	string m_Lover;

};

int main(void)
{
	Person p;
	p.setName("����");
	p.setAge(1550);
	cout << "p������Ϊ�� " << p.getName() << endl;
	cout << "p������Ϊ�� " << p.getAge() << endl;
	p.setLover("baby");

	system("pause");

	return 0;
}
