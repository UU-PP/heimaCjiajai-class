#include <iostream>
using namespace std;
#include <string>
 
//�̳��еĹ����������˳��

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ��캯��" << endl;
	}
	~Base()
	{
		cout << "Base����������" << endl;
	}
};

class Son : public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ��캯��" << endl;
	}
	~Son()
	{
		cout << "Son����������" << endl;
	}
};

void test01()
{
	//�̳��еĹ��������˳�� ����
	//�ȹ��츸�࣬�ڹ������࣬������˳���빹���˳���෴
	Son son;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
