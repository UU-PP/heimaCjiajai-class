#include <iostream>
using namespace std;
#include <string>

//string�ַ���ƴ��
//����ԭ��
//string& operator+=��const char* str��	����+=������
//string& operator+=��const char c��	����+=������
//string& operator+=��const string& str��	����+= ������
//string& append��const char *s��	���ַ���s���ӵ���ǰ�ַ�����β
//string& append��const char *s��int n�� ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append��const string &s��	
//string& append��const string &s��int pos��int n�� �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

void test01()
{
	//string& operator+=��const char* str��	����+=������
	string s1;
	s1 += "I love ";
	cout << "s1 = " << s1 << endl;
	//string& operator+=��const char c��	����+=������
	s1 += ':';
	cout << "s1 = " << s1 << endl;
	//string& operator+=��const string& str��	����+= ������
	string s2("you");
	s1 += s2;
	cout << "s1 = " << s1 << endl;
	//string& append��const char *s��	���ַ���s���ӵ���ǰ�ַ�����β
	s1 = "I love :";
	string s3 = s1;
	s3.append("game");
	cout << "s3 = " << s3 << endl;
	//string& append��const char *s��int n�� ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	string s4 = s1;
	s4.append("hello ketty", 5);
	cout << "s4 = " << s4 << endl;
	//string& append��const string &s��	
	string s5 = s1;
	s5.append(s2);
	cout << "s5 = " << s5 << endl;
	//string& append��const string &s��int pos��int n�� �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
	string s6 = s1;
	s6.append("hello ketty", 5, 5);
	cout << "s6 = " << s6 << endl;
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
