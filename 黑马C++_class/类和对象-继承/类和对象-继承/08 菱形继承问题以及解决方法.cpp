#include <iostream>
using namespace std;
#include <string>

//���μ̳������Լ��������
//������
class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ �����
//����
class Sheep : virtual public Animal
{

};

//������
class Tuo : virtual public Animal
{

};

//������
class SheepTuo : public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	
	st.Tuo::m_Age = 28;
	st.Sheep::m_Age = 18;
	//�����μ̳� ��������ӵ����ͬ���� ��Ҫ��������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
}
//�������� ������Ա������ ����SheepTuo ��ľ���ܹ�

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//���μ̳д�������Ҫ���� ������̳�������ͬ������ ������Դ�˷� �Լ���������
//������̳� ���Խ�����μ̳�����
