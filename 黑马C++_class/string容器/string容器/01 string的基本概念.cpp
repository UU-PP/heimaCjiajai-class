#include <iostream>
using namespace std;
#include <string>

//string��������
//���ʣ�
//string��C++�����ַ�������string��������һ����

//string��char*����
//char* ��һ��ָ��
//string��һ���࣬���ڲ���װ��char*����������ַ�������һ��char*�͵�����

//�ص㣺
//string�ڲ���װ�˺ܶ��Ա����
//���磺����find������copy��ɾ��delete���滻replace������insert
//string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���

//stirng���캯��
//���캯��ԭ��
//string������		����һ���յ��ַ���
//string��const char* s��	ʹ��c���Ե��ַ�������ʼ��C++���ַ���
//string��const string& str��	��������
//string��int n��char c��	ʹ��n���ַ�c��ʼ��

void test01()
{
	//string������		����һ���յ��ַ���
	string s1();
	//string��const char* s��	ʹ��c���Ե��ַ�������ʼ��C++���ַ���
	const char* str = "hello worle!";
	string s2(str);
	cout << "s2 = " << s2 << endl;
	//string��const string& str��	��������
	string s3(s2);
	cout << "s3 = " << s3 << endl;
	//string��int n��char c��	ʹ��n���ַ�c��ʼ��
	string s4(10, 'e');
	cout << "s4 = " << s4 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
