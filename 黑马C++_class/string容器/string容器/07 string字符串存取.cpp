#include <iostream>
using namespace std;
#include <string>

//string �е����ַ���ȡ�����ַ�ʽ
//char& operator[]��int n�� ͨ��[]������ȡ�ַ�
//char& at��int n�� ͨ��at������ȡ�ַ�

void test01()
{
	//char& operator[]��int n�� ͨ��[]������ȡ�ַ�
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//char& at��int n�� ͨ��at������ȡ�ַ�
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//�޸�
	str[0] = 'x';
	cout << str << endl;
	str.at(1) = 'x';
	cout << str << endl;

}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
