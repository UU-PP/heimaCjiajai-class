#include <iostream>
using namespace std;
#include <string>

//string ���Һ��滻
//��������
///���ң�����ָ���ַ����Ƿ����
//�滻����ָ��λ���滻�ַ���

//����ԭ�ͣ�
//int find��const string& str��int pos = 0��const; ����str��һ�γ��ֵ�λ�ã���pos��ʼ����
//int find��const char* s��int pos = 0��const		����s��һ�γ��ֵ�λ�ã���pos��ʼ����
//int find��const chat* s��int pos��int n��const	��posλ�ò���s��ǰn���ַ��ĵ�һ��λ��
//int find��const char c��int pos = 0��const		�����ַ�c��һ�γ��ֵ�λ��
//int rfind��const string& str��int pos = npos��const ����str���һ��λ�ô�pos��ʼ����
//int rfind ��const char* s��int pos = npos��const ����s���һ�γ���λ�ã���POS��ʼ����
//int rfind��const char* s��int pos��int n��const ��pos����s��ǰn�����һ��λ��
//int rfind��const char c��int pos = 0�� const	�����ַ�c���һ�γ���λ��
//stirng& replace��int pos��int n��const string& str�� ����pos��ʼ��n�ַ��滻Ϊstr�ַ���
//string& replace��int pos��int n��const char* s��	����pos��ʼ��n�ַ��滻Ϊstr�ַ���

//����
void test01()
{
	//int find��const string& str��int pos = 0��const; ����str��һ�γ��ֵ�λ�ã���pos��ʼ����
	string str = "abcdefgha";
	int pos = str.find("cd");
	if (pos == -1)
	{
		cout << "cdδ�ҵ�" << endl;
	}
	else
	{
		cout << "cdλ��Ϊ" << pos << endl;
	}
	//int rfind��const string& str��int pos = npos��const ����str���һ��λ�ô�pos��ʼ����
	pos = str.rfind("a");
	if (pos == -1)
	{
		cout << "aδ�ҵ�" << endl;
	}
	else
	{
		cout << "aλ��Ϊ" << pos << endl;
	}
}

//�滻
void test02()
{
	//stirng& replace��int pos��int n��const string& str�� ����pos��ʼ��n�ַ��滻Ϊstr�ַ���
	string str = "abcdefg";
	str.replace(1, 1, "1111");
	cout << str << endl;
}

int main(void)
{
	//test01();
	test02();

	system("pause");

	return 0;
}
