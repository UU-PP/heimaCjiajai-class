#include <iostream>
using namespace std;
#include <string>

//��̬�Ļ����﷨

//������
class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat : public Animal
{
public:
	 
	//��д����� ��������ֵ���� ������ �����б� Ҫ��ȫ��ͬ
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//ִ��˵���ĺ���
//��ַ��� �ڱ������׶ξ�ȷ���˺�����ַ
//�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//��ô��ô����أ���Ҫ�ڽ������е���غ�����Ϊ�麯�� 

//��̬��̬���������
//1���м̳й�ϵ
//2��������д������麯��

//��̬��̬��ʹ��
//���ø����ָ������� ��ִ�� ����Ķ���
void doSpeak(Animal &animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
}
int main(void)
{
	test01();

	system("pause");

	return 0;
}
