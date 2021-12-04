#include <iostream>
using namespace std;
#include <string>

//��������
//������Ʒ�Ĵ�������Ϊ����ˮ-����-���뱭��-���븨��
//���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ

//��Ʒ����������
class AbstractDrinking
{
public:

	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomeThing() = 0;

	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomeThing();
	}
};

//�󿧷�
class Coffee : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomeThing()
	{
		cout << "�����ǺͿ���" << endl;
	}
};

//���Ҷ
class Tea : public AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomeThing()
	{
		cout << "�������" << endl;
	}
};

//������Ʒ�ӿ�
void doWork(AbstractDrinking * abs)
{
	abs->makeDrink();
}

void test01()
{
	AbstractDrinking * abc = new Coffee;
	doWork(abc);
	delete abc;

	cout << "--------------------" << endl;
	abc = new Tea;
	doWork(abc);
	delete abc;
	
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
