#include <iostream>
using namespace std;
#include <string>

//�����������������Ҳ��������
//�������غ�ʹ�õķ����ǳ����� �����ĵ��� ��˳�Ϊ�º���
//�º���û�й̶���д�� �ǳ������


//��ӡ�����
class MyPrint
{
public:
	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void operator02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;

	myPrint("hello world!");

	operator02("hello");
}

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	cout << "ret ="  << ret << endl;

	//��
	//������������
	cout << MyAdd()(100, 100) << endl;//��������MyAdd��������һ���������� Ȼ����øö���� ���غ��������
}
int main(void)
{
	test01();
	test02();

	system("pause");

	return 0;
}
