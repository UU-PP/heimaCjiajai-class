#include <iostream>
using namespace std;

//1�����캯���ķ��༰����
//����
//���ղ�������		�вι��� �� �޲ι��죨Ĭ�Ϲ��죩
//�������ͷ���		��ͨ���� �� ��������
class Person
{
public:
	//���캯��
	//��ͨ����-�޲ι���
	Person()
	{
		cout << "Person ���޲ι��캯������" << endl;
	}
	//��ͨ����-�вι���
	Person(int a)
	{
		age = a;
		cout << "Person ���вι��캯������" << endl;
	}
	//��������
	Person(const Person &p)
	{
		//������������ϵ��������� ������������
		age = p.age;
		cout << "Person �Ŀ������캯������" << endl;
	}

	//��������
	~Person()
	{
		cout << "Person ��������������" << endl;
	}

	int age;
};

//����
void test01()
{
	//1�����ŷ����Ƽ�ʹ�ã�
	//Person p;	//Ĭ�Ϲ��캯������
	//Person p2(10);	//�вι��캯������
	//Person p3(p2);	//�������캯������

	//ע������
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ�ӣ���
	//��Ϊ�������б���������Ϊ�Ǹ���������
	//Person p1();

	//2����ʾ��
	Person p1;
	Person p2 = Person(10); //�вι���
	Person p3 = Person(p2); //��������

	//Person(10);	//��������	�ص㣺��ǰ��ִ����Ϻ���������
	//cout << "qqq" << endl;

	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����Ϊ����������ΪPerson(p3) === Person p3�����ظ�������p3����

	//3����ʿת����
	Person p4 = 10; //�൱�� д��		Person p4 = Person(10);	�вι���
	Person p5 = p4; //��������
}

int main(void)
{

	test01();
	system("pause");

	return 0;
}
