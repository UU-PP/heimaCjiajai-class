#include <iostream>
using namespace std;
#include <string>

//���麯���ͳ�����
//�ڶ�̬�У�ͨ���������麯����ʵ���Ǻ�������ģ���Ҫ���ǵ���������д������
//��� ���Խ� �麯�� ��Ϊ ���麯��
//���麯���﷨��virtual ����ֵ���� ������ �������б�= 0��
//���������� ���麯�� �����Ҳ��Ϊ ������

//�������ص�
//1���޷�ʵ��������
//2�����������д�������еĴ��麯�� ����Ҳ���ڳ�����

class Base
{
public:
	//���麯��
	//ֻҪ��һ�����麯�� ������֮Ϊ ������
	//�������ص㣺
	//1���޷�ʵ��������
	//2������������� ����Ҫ��д�����е��麯�� ��Ҳ���ڳ�����
	virtual void func() = 0;
};

class Son : public Base
{
public:
	virtual void func() 
	{
		cout << "func �����ĵ���" << endl;
	};
};

void test01()
{

	//Base b;//error  	�������޷�ʵ��������
	//new Base;//error	�������޷�ʵ��������

	//��û����д�����е��麯��ʱ Son��ʵҲ�ǳ�����
	//new Son; 

	Base *base = new Son;
	base->func();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
