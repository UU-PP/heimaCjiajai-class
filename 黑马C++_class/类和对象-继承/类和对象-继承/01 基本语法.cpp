#include <iostream>
using namespace std;
#include <string>

////��ͨʵ��ҳ��
////Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Pathon��C++��...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Java��ѧ��Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Pathon��C++��...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Python��ѧ��Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ..(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Pathon��C++��...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++��ѧ��Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java��������Ƶ����" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "--------------------" << endl;
//	cout << "Python��������Ƶ����" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "--------------------" << endl;
//	cout << "C++��������Ƶ����" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}

//�̳�ʵ��ҳ��

//����ҳ����
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���½��ע��...(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ..(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java��Pathon��C++��...(���������б�)" << endl;
	}
};
//�̳еĺô��������ظ�����
//�������еĳ�Ա���������󲿷֣�
//һ���Ǵӻ����м̳й����ģ�һ�����Լ����ӵĳ�Ա
//�ӻ���̳й����ı����乲�ԣ��������ĳ�Ա�����������

//�﷨�� calss ���� �� �̳з��� ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����

//Javaҳ��
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java��ѧ��Ƶ" << endl;
	}
};
//Pythonҳ��
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python��ѧ��Ƶ" << endl;
	}
};
//C++ҳ��
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++��ѧ��Ƶ" << endl;
	}
};

void test01()
{
	cout << "Java��������Ƶ����" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "--------------------" << endl;
	cout << "Python��������Ƶ����" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "--------------------" << endl;
	cout << "C++��������Ƶ����" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main(void)
{
	test01();

	system("pause");

	return 0;
}
