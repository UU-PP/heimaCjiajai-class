#include <iostream>
using namespace std;
#include <string>

//�������ʹ�������
class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}

	//������
	//�������������Խ�� ����ָ���ͷ��������ʱ ���ɾ�������
	/*virtual ~Animal()
	{
		cout << "Animal��������������" << endl;
	}*/

	//�������� ��Ҫ���� Ҳ��Ҫ��ʵ�� ��ʵ����������ʵ��Ŷ
	virtual ~Animal() = 0;

	virtual void Speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal�Ĵ�����������" << endl;
};

//è��
class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_Name = new string(name);
	}

	~Cat()
	{
		cout << "Cat��������������" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}

	void Speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}

	string * m_Name;
};

void test01()
{
	Animal * animal = new Cat("Tom");
	animal->Speak();
	//����ָ��������ʱ�� ��������������������� ��������������ж������� ������ڴ�й©
	delete animal;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
