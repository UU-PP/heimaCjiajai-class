#include "myarray.hpp"

#include <string>

//����������ʵ��һ��ͨ�������࣬Ҫ�����£�
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ����������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ���������е�Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ��������������



//��ʾMyArray���͵�����
void showMyArray(MyArray<int> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

//����������������
void test01()
{
	MyArray<int> array1(5);
	/*MyArray<int> array2(array1);
	MyArray<int> array3(10);
	array3 = array2;*/
	for (int i = 0; i < array1.getCapicity(); i++)
	{
		array1.pushBack(i);
	}
	cout << "��ʾarray1" << endl;
	showMyArray(array1);
	cout << "array1��������" << array1.getCapicity() << "array1�Ĵ�С��" << array1.getSize() << endl;

	MyArray<int> array2(array1);
	array2.popBack();
	cout << "��ʾarray2" << endl;
	showMyArray(array2);
	cout << "array2��������" << array2.getCapicity() << "array2�Ĵ�С��" << array2.getSize() << endl;
}


//�����Զ�����������
class Person
{
public:
	Person(){};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

void showPersonArray(MyArray<Person> &arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_Age << endl;
	}
}

void test02()
{
	//��������
	MyArray<Person> arrperson(10);
	Person p1("�����", 100);
	Person p2("��˽�", 100);
	Person p3("ɳ����", 100);
	Person p4("��ɮ���", 100);
	//��������
	arrperson.pushBack(p1);
	arrperson.pushBack(p2);
	arrperson.pushBack(p3);
	arrperson.pushBack(p4);
	//��ʾ
	showPersonArray(arrperson);
	//������С
	cout << "arrperson��������" << arrperson.getCapicity() << "arrperson�Ĵ�С��" << arrperson.getSize() << endl;
}

int main(void)
{
	test01();
	test02();

	system("pause");

	return 0;
}
