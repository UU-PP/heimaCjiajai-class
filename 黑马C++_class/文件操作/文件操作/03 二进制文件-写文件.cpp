#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//�������ļ� д�ļ�

class Person
{
public:
	char m_Name[64];//����
	int m_Age;//����
};

void test01()
{
	//1������ͷ�ļ�
	//2���������������
	ofstream ofs;

	//3�����ļ�
	ofs.open("person.txt", ios::out | ios::binary);

	//4��д�ļ�
	Person person = { "����",18 };
	ofs.write((const char*)&person,sizeof(person)); 

	//5���ر��ļ�
	ofs.close();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
