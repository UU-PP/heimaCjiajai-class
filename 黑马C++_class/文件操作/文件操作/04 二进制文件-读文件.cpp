#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//�����ƶ��ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ�istream& read(char *buffer,int len);
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���

class Person
{
public:
	char m_Name[15];
	int m_Age;
};

//�����ƶ��ļ�
void test01()
{
	//����ͷ�ļ�

	//����������
	ifstream ifs;
	//���ļ�
	ifs.open("person.txt", ios::in | ios::binary);
	Person person;
	//�ж��Ƿ��
	if (!ifs.is_open())
	{
		cout << "open fail" << endl;
		return;
	}
	//���������ļ�
	ifs.read((char *)&person, sizeof(person));//����charǰ�治�ܼ�const ��Ϊ������Ҫ�ı�Person�е�����

	//�ر��ļ�
	ifs.close();

	cout << "���� " << person.m_Name << " ���� " << person.m_Age << endl;
}

int main(void)
{
	test01();



	system("pause");

	return 0;
}
