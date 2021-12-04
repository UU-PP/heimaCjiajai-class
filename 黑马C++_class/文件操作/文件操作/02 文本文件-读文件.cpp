#include <iostream>
using namespace std;
#include <string>
#include <fstream>

//���ļ�
//���ļ�����
//1������ͷ�ļ� #include <fstream>
//2������������ ifstream ifs
//3�����ļ����ж��Ƿ�򿪳ɹ� ifs.open("�ļ�·��",�򿪷�ʽ)
//4�������� �����ַ�ʽ��ȡ
//5���ر��ļ� ifs.close();

void test01()
{
	//1������ͷ�ļ� #include <fstream>

	//2������������ ifstream ifs
	ifstream ifs;

	//3�����ļ����ж��Ƿ�򿪳ɹ� ifs.open("�ļ�·��",�򿪷�ʽ)
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "the file is opened filed" << endl;
	}

	//4�������� �����ַ�ʽ��ȡ

	//��һ��
	/*char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
 	}*/

	//������
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//5���ر��ļ� ifs.close();
	ifs.close(); 
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
