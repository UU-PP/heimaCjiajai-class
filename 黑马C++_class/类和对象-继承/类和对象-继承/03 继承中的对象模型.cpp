#include <iostream>
using namespace std;
#include <string>

//�̳��еĶ���ģ��

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:
	int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� F��
//��ת�ļ�·�� cd ����·����
//�鿴����
//cl /d1 reportSingleClassLayoutSon "03 �̳��еĶ���ģ��.cpp"

void test01()
{
	//16
	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ��������������� ����Ƿ��ʲ��� ����ȷʵ���̳���ȥ��
	Son son;
	cout << "size of son: " << sizeof(son) << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
