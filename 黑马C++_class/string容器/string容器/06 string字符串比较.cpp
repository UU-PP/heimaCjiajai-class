#include <iostream>
using namespace std;
#include <string>

//string�ַ����Ƚ�
//���ܣ�
//���ַ�����ASCII����бȽ�
//���� 0
//���� 1
//���� -1

//����ԭ��
//int compare��const string &s�� const ���ַ���s�Ƚ�
//int compare��const char *s�� const ���ַ���s�Ƚ�

void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	int rec = str1.compare(str2);
	if (rec == 0)
	{
		cout << "str1 = str2" << endl;
	}
	else if (rec>0)
	{
		cout << "str1>str2" << endl;
	}
	else
	{
		cout << "str1<str2" << endl;
	}

}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
