#include <iostream>
using namespace std;
#include <string>

//string�����ɾ��
//����������
//��string�ַ������в����ɾ���ַ�����
//����ԭ��
//string& insert��int pos��const char* s����	�����ַ���s
//string& insert��int pos��const string& str����	�����ַ���str
//string& insert��int pos��int n��char c����	��ָ��λ�ò���n���ַ�c
//string& erase��int pos��int n = npos����	ɾ����pos��ʼ��n���ַ�

void test01()
{
	//string& insert��int pos��const char* s����	�����ַ���s
	string str1 = "hello";
	str1.insert(1, "11111");
	cout << str1 << endl;
	//string& insert��int pos��const string& str����	�����ַ���str
	string str2 = "00000";
	str1.insert(1, str2);
	cout << str1 << endl;
	//string& insert��int pos��int n��char c����	��ָ��λ�ò���n���ַ�c
	str1.insert(1, 4, '=');
	cout << str1 << endl;
	//string& erase��int pos��int n = npos����	ɾ����pos��ʼ��n���ַ�
	str1.erase(1, 4);
	cout << str1 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
