#include <iostream>
using namespace std;
#include <string>

//��ͨ�����뺯��ģ������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3������ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a, int b)
{
	return a + b;
}

//����ģ��
template <typename T>
T myAdd02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	//��ͨ�������ã����Է�����ʽ����ת��
	cout << "a+b= " << myAdd01(a, b) << endl;
	cout << "a+c= " << myAdd01(a, c) << endl;

	//����ģ�� �Զ������Ƶ�
	//cout << "a+c=" << myAdd02(a, c) << endl;//����ģ������T��ȷ��

	//����ģ�� ��ʾָ������
	cout << "a+c= " << myAdd02<int>(a, c) << endl;//û�б���˵����ʾָ�����͵ķ���������ʹ�ú����������� ��ʽ����װ��
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
//�ܽ᣺����ʹ����ʾָ�����͵ķ�ʽ�����ú���ģ�壬��Ϊ�����Լ�ȷ��ͨ������T